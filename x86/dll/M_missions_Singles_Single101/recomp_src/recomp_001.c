#include "recomp.h"

/* FUN_10004e64 @ 0x10f24e64 (153 bytes, 62 insns) */
void f_10f24e64(void) {
  FTRACE(0x10f24e64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24e64 push ebp */
  push32((uint32_t)(EBP));
  /* 10f24e65 mov ebp, esp */
  EBP = (ESP);
  /* 10f24e67 push ecx */
  push32((uint32_t)(ECX));
  /* 10f24e68 push ecx */
  push32((uint32_t)(ECX));
  /* 10f24e69 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24e6a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f24e6c cmp dword ptr [0x10f49108], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10f49108))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24e72 push esi */
  push32((uint32_t)(ESI));
  /* 10f24e73 push edi */
  push32((uint32_t)(EDI));
  /* 10f24e74 jne 0x10f24e7b */
  if (!C.zf) goto L_10f24e7b;
  /* 10f24e76 call 0x10f285fd */
  push32(0x10f24e7bu); f_10f285fd();
L_10f24e7b:;
  /* 10f24e7b mov esi, 0x10f47a14 */
  ESI = (0x10f47a14u);
  /* 10f24e80 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10f24e85 push esi */
  push32((uint32_t)(ESI));
  /* 10f24e86 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24e87 call dword ptr [0x10f2d098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d098))), 0x10f24e8du);
  /* 10f24e8d mov eax, dword ptr [0x10f49114] */
  EAX = (r32((uint32_t)(0x10f49114)));
  /* 10f24e92 mov dword ptr [0x10f47a00], esi */
  w32((uint32_t)(0x10f47a00), (ESI));
  /* 10f24e98 mov edi, esi */
  EDI = (ESI);
  /* 10f24e9a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24e9c je 0x10f24ea0 */
  if (C.zf) goto L_10f24ea0;
  /* 10f24e9e mov edi, eax */
  EDI = (EAX);
L_10f24ea0:;
  /* 10f24ea0 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10f24ea3 push eax */
  push32((uint32_t)(EAX));
  /* 10f24ea4 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10f24ea7 push eax */
  push32((uint32_t)(EAX));
  /* 10f24ea8 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24ea9 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24eaa push edi */
  push32((uint32_t)(EDI));
  /* 10f24eab call 0x10f24efd */
  push32(0x10f24eb0u); f_10f24efd();
  /* 10f24eb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f24eb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f24eb6 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10f24eb9 push eax */
  push32((uint32_t)(EAX));
  /* 10f24eba call 0x10f248d5 */
  push32(0x10f24ebfu); f_10f248d5();
  /* 10f24ebf mov esi, eax */
  ESI = (EAX);
  /* 10f24ec1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24ec4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f24ec6 jne 0x10f24ed0 */
  if (!C.zf) goto L_10f24ed0;
  /* 10f24ec8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f24eca call 0x10f23ddf */
  push32(0x10f24ecfu); f_10f23ddf();
  /* 10f24ecf pop ecx */
  ECX = (pop32());
L_10f24ed0:;
  /* 10f24ed0 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10f24ed3 push eax */
  push32((uint32_t)(EAX));
  /* 10f24ed4 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10f24ed7 push eax */
  push32((uint32_t)(EAX));
  /* 10f24ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f24edb lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10f24ede push eax */
  push32((uint32_t)(EAX));
  /* 10f24edf push esi */
  push32((uint32_t)(ESI));
  /* 10f24ee0 push edi */
  push32((uint32_t)(EDI));
  /* 10f24ee1 call 0x10f24efd */
  push32(0x10f24ee6u); f_10f24efd();
  /* 10f24ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f24ee9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24eec dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f24eed mov dword ptr [0x10f479e8], esi */
  w32((uint32_t)(0x10f479e8), (ESI));
  /* 10f24ef3 pop edi */
  EDI = (pop32());
  /* 10f24ef4 pop esi */
  ESI = (pop32());
  /* 10f24ef5 mov dword ptr [0x10f479e4], eax */
  w32((uint32_t)(0x10f479e4), (EAX));
  /* 10f24efa pop ebx */
  EBX = (pop32());
  /* 10f24efb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f24efc ret  */
  ESPCHK(0x10f24e64u, _esp0);
  ESP += 4; return;
}

/* FUN_10004efd @ 0x10f24efd (436 bytes, 187 insns) */
void f_10f24efd(void) {
  FTRACE(0x10f24efdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f24efd push ebp */
  push32((uint32_t)(EBP));
  /* 10f24efe mov ebp, esp */
  EBP = (ESP);
  /* 10f24f00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f24f03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f24f06 push ebx */
  push32((uint32_t)(EBX));
  /* 10f24f07 push esi */
  push32((uint32_t)(ESI));
  /* 10f24f08 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10f24f0b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f24f0e push edi */
  push32((uint32_t)(EDI));
  /* 10f24f0f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f24f12 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10f24f18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f24f1b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f24f1d je 0x10f24f27 */
  if (C.zf) goto L_10f24f27;
  /* 10f24f1f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10f24f21 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24f24 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10f24f27:;
  /* 10f24f27 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24f2a jne 0x10f24f70 */
  if (!C.zf) goto L_10f24f70;
L_10f24f2c:;
  /* 10f24f2c mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10f24f2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f24f30 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24f33 je 0x10f24f5e */
  if (C.zf) goto L_10f24f5e;
  /* 10f24f35 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f24f37 je 0x10f24f5e */
  if (C.zf) goto L_10f24f5e;
  /* 10f24f39 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10f24f3c test byte ptr [edx + 0x10f47ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10f47ea1)))&(0x4u); fl_logic(_r,8); }
  /* 10f24f43 je 0x10f24f51 */
  if (C.zf) goto L_10f24f51;
  /* 10f24f45 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10f24f47 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24f49 je 0x10f24f51 */
  if (C.zf) goto L_10f24f51;
  /* 10f24f4b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10f24f4d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10f24f4f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f24f50 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10f24f51:;
  /* 10f24f51 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10f24f53 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24f55 je 0x10f24f2c */
  if (C.zf) goto L_10f24f2c;
  /* 10f24f57 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10f24f59 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10f24f5b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f24f5c jmp 0x10f24f2c */
  goto L_10f24f2c;
L_10f24f5e:;
  /* 10f24f5e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10f24f60 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24f62 je 0x10f24f68 */
  if (C.zf) goto L_10f24f68;
  /* 10f24f64 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10f24f67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10f24f68:;
  /* 10f24f68 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24f6b jne 0x10f24fb3 */
  if (!C.zf) goto L_10f24fb3;
  /* 10f24f6d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f24f6e jmp 0x10f24fb3 */
  goto L_10f24fb3;
L_10f24f70:;
  /* 10f24f70 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10f24f72 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24f74 je 0x10f24f7b */
  if (C.zf) goto L_10f24f7b;
  /* 10f24f76 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10f24f78 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10f24f7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10f24f7b:;
  /* 10f24f7b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10f24f7d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f24f7e movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10f24f81 test byte ptr [ebx + 0x10f47ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10f47ea1)))&(0x4u); fl_logic(_r,8); }
  /* 10f24f88 je 0x10f24f96 */
  if (C.zf) goto L_10f24f96;
  /* 10f24f8a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10f24f8c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24f8e je 0x10f24f95 */
  if (C.zf) goto L_10f24f95;
  /* 10f24f90 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10f24f92 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10f24f94 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10f24f95:;
  /* 10f24f95 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10f24f96:;
  /* 10f24f96 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24f99 je 0x10f24fa4 */
  if (C.zf) goto L_10f24fa4;
  /* 10f24f9b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f24f9d je 0x10f24fa8 */
  if (C.zf) goto L_10f24fa8;
  /* 10f24f9f cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24fa2 jne 0x10f24f70 */
  if (!C.zf) goto L_10f24f70;
L_10f24fa4:;
  /* 10f24fa4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f24fa6 jne 0x10f24fab */
  if (!C.zf) goto L_10f24fab;
L_10f24fa8:;
  /* 10f24fa8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f24fa9 jmp 0x10f24fb3 */
  goto L_10f24fb3;
L_10f24fab:;
  /* 10f24fab test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f24fad je 0x10f24fb3 */
  if (C.zf) goto L_10f24fb3;
  /* 10f24faf and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10f24fb3:;
  /* 10f24fb3 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10f24fb7:;
  /* 10f24fb7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24fba je 0x10f250a0 */
  if (C.zf) goto L_10f250a0;
L_10f24fc0:;
  /* 10f24fc0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10f24fc2 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24fc5 je 0x10f24fcc */
  if (C.zf) goto L_10f24fcc;
  /* 10f24fc7 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24fca jne 0x10f24fcf */
  if (!C.zf) goto L_10f24fcf;
L_10f24fcc:;
  /* 10f24fcc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f24fcd jmp 0x10f24fc0 */
  goto L_10f24fc0;
L_10f24fcf:;
  /* 10f24fcf cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24fd2 je 0x10f250a0 */
  if (C.zf) goto L_10f250a0;
  /* 10f24fd8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f24fda je 0x10f24fe4 */
  if (C.zf) goto L_10f24fe4;
  /* 10f24fdc mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10f24fde add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f24fe1 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10f24fe4:;
  /* 10f24fe4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f24fe7 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10f24fe9:;
  /* 10f24fe9 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10f24ff0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10f24ff2:;
  /* 10f24ff2 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24ff5 jne 0x10f24ffb */
  if (!C.zf) goto L_10f24ffb;
  /* 10f24ff7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f24ff8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f24ff9 jmp 0x10f24ff2 */
  goto L_10f24ff2;
L_10f24ffb:;
  /* 10f24ffb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f24ffe jne 0x10f2502c */
  if (!C.zf) goto L_10f2502c;
  /* 10f25000 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10f25003 jne 0x10f2502a */
  if (!C.zf) goto L_10f2502a;
  /* 10f25005 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f25007 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2500a je 0x10f25019 */
  if (C.zf) goto L_10f25019;
  /* 10f2500c cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25010 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10f25013 jne 0x10f25019 */
  if (!C.zf) goto L_10f25019;
  /* 10f25015 mov eax, edx */
  EAX = (EDX);
  /* 10f25017 jmp 0x10f2501c */
  goto L_10f2501c;
L_10f25019:;
  /* 10f25019 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10f2501c:;
  /* 10f2501c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2501f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f25021 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25024 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10f25027 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10f2502a:;
  /* 10f2502a shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10f2502c:;
  /* 10f2502c mov edx, ebx */
  EDX = (EBX);
  /* 10f2502e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f2502f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f25031 je 0x10f25041 */
  if (C.zf) goto L_10f25041;
  /* 10f25033 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10f25034:;
  /* 10f25034 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f25036 je 0x10f2503c */
  if (C.zf) goto L_10f2503c;
  /* 10f25038 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10f2503b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10f2503c:;
  /* 10f2503c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10f2503e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f2503f jne 0x10f25034 */
  if (!C.zf) goto L_10f25034;
L_10f25041:;
  /* 10f25041 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10f25043 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f25045 je 0x10f25091 */
  if (C.zf) goto L_10f25091;
  /* 10f25047 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2504b jne 0x10f25057 */
  if (!C.zf) goto L_10f25057;
  /* 10f2504d cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25050 je 0x10f25091 */
  if (C.zf) goto L_10f25091;
  /* 10f25052 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25055 je 0x10f25091 */
  if (C.zf) goto L_10f25091;
L_10f25057:;
  /* 10f25057 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2505b je 0x10f2508b */
  if (C.zf) goto L_10f2508b;
  /* 10f2505d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f2505f je 0x10f2507a */
  if (C.zf) goto L_10f2507a;
  /* 10f25061 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10f25064 test byte ptr [ebx + 0x10f47ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10f47ea1)))&(0x4u); fl_logic(_r,8); }
  /* 10f2506b je 0x10f25073 */
  if (C.zf) goto L_10f25073;
  /* 10f2506d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10f2506f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f25070 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f25071 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10f25073:;
  /* 10f25073 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10f25075 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10f25077 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f25078 jmp 0x10f25089 */
  goto L_10f25089;
L_10f2507a:;
  /* 10f2507a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10f2507d test byte ptr [edx + 0x10f47ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10f47ea1)))&(0x4u); fl_logic(_r,8); }
  /* 10f25084 je 0x10f25089 */
  if (C.zf) goto L_10f25089;
  /* 10f25086 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f25087 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10f25089:;
  /* 10f25089 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10f2508b:;
  /* 10f2508b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2508c jmp 0x10f24fe9 */
  goto L_10f24fe9;
L_10f25091:;
  /* 10f25091 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f25093 je 0x10f25099 */
  if (C.zf) goto L_10f25099;
  /* 10f25095 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10f25098 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10f25099:;
  /* 10f25099 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10f2509b jmp 0x10f24fb7 */
  goto L_10f24fb7;
L_10f250a0:;
  /* 10f250a0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f250a2 je 0x10f250a7 */
  if (C.zf) goto L_10f250a7;
  /* 10f250a4 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10f250a7:;
  /* 10f250a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f250aa pop edi */
  EDI = (pop32());
  /* 10f250ab pop esi */
  ESI = (pop32());
  /* 10f250ac pop ebx */
  EBX = (pop32());
  /* 10f250ad inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10f250af pop ebp */
  EBP = (pop32());
  /* 10f250b0 ret  */
  ESPCHK(0x10f24efdu, _esp0);
  ESP += 4; return;
}

/* FUN_100050b1 @ 0x10f250b1 (306 bytes, 132 insns) */
void f_10f250b1(void) {
  FTRACE(0x10f250b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f250b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f250b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f250b3 mov eax, dword ptr [0x10f47b18] */
  EAX = (r32((uint32_t)(0x10f47b18)));
  /* 10f250b8 push ebx */
  push32((uint32_t)(EBX));
  /* 10f250b9 push ebp */
  push32((uint32_t)(EBP));
  /* 10f250ba mov ebp, dword ptr [0x10f2d084] */
  EBP = (r32((uint32_t)(0x10f2d084)));
  /* 10f250c0 push esi */
  push32((uint32_t)(ESI));
  /* 10f250c1 push edi */
  push32((uint32_t)(EDI));
  /* 10f250c2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f250c4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f250c6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f250c8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f250ca jne 0x10f250ff */
  if (!C.zf) goto L_10f250ff;
  /* 10f250cc call ebp */
  call_ind((uint32_t)(EBP), 0x10f250ceu);
  /* 10f250ce mov esi, eax */
  ESI = (EAX);
  /* 10f250d0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f250d2 je 0x10f250e0 */
  if (C.zf) goto L_10f250e0;
  /* 10f250d4 mov dword ptr [0x10f47b18], 1 */
  w32((uint32_t)(0x10f47b18), (0x1u));
  /* 10f250de jmp 0x10f25108 */
  goto L_10f25108;
L_10f250e0:;
  /* 10f250e0 call dword ptr [0x10f2d088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d088))), 0x10f250e6u);
  /* 10f250e6 mov edi, eax */
  EDI = (EAX);
  /* 10f250e8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f250ea je 0x10f251da */
  if (C.zf) goto L_10f251da;
  /* 10f250f0 mov dword ptr [0x10f47b18], 2 */
  w32((uint32_t)(0x10f47b18), (0x2u));
  /* 10f250fa jmp 0x10f2518e */
  goto L_10f2518e;
L_10f250ff:;
  /* 10f250ff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25102 jne 0x10f25189 */
  if (!C.zf) goto L_10f25189;
L_10f25108:;
  /* 10f25108 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2510a jne 0x10f25118 */
  if (!C.zf) goto L_10f25118;
  /* 10f2510c call ebp */
  call_ind((uint32_t)(EBP), 0x10f2510eu);
  /* 10f2510e mov esi, eax */
  ESI = (EAX);
  /* 10f25110 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25112 je 0x10f251da */
  if (C.zf) goto L_10f251da;
L_10f25118:;
  /* 10f25118 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2511b mov eax, esi */
  EAX = (ESI);
  /* 10f2511d je 0x10f2512d */
  if (C.zf) goto L_10f2512d;
L_10f2511f:;
  /* 10f2511f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f25120 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f25121 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f25124 jne 0x10f2511f */
  if (!C.zf) goto L_10f2511f;
  /* 10f25126 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f25127 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f25128 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2512b jne 0x10f2511f */
  if (!C.zf) goto L_10f2511f;
L_10f2512d:;
  /* 10f2512d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2512f mov edi, dword ptr [0x10f2d08c] */
  EDI = (r32((uint32_t)(0x10f2d08c)));
  /* 10f25135 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f25137 push ebx */
  push32((uint32_t)(EBX));
  /* 10f25138 push ebx */
  push32((uint32_t)(EBX));
  /* 10f25139 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2513a push ebx */
  push32((uint32_t)(EBX));
  /* 10f2513b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2513c push eax */
  push32((uint32_t)(EAX));
  /* 10f2513d push esi */
  push32((uint32_t)(ESI));
  /* 10f2513e push ebx */
  push32((uint32_t)(EBX));
  /* 10f2513f push ebx */
  push32((uint32_t)(EBX));
  /* 10f25140 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10f25144 call edi */
  call_ind((uint32_t)(EDI), 0x10f25146u);
  /* 10f25146 mov ebp, eax */
  EBP = (EAX);
  /* 10f25148 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2514a je 0x10f2517e */
  if (C.zf) goto L_10f2517e;
  /* 10f2514c push ebp */
  push32((uint32_t)(EBP));
  /* 10f2514d call 0x10f248d5 */
  push32(0x10f25152u); f_10f248d5();
  /* 10f25152 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25154 pop ecx */
  ECX = (pop32());
  /* 10f25155 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10f25159 je 0x10f2517e */
  if (C.zf) goto L_10f2517e;
  /* 10f2515b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2515c push ebx */
  push32((uint32_t)(EBX));
  /* 10f2515d push ebp */
  push32((uint32_t)(EBP));
  /* 10f2515e push eax */
  push32((uint32_t)(EAX));
  /* 10f2515f push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10f25163 push esi */
  push32((uint32_t)(ESI));
  /* 10f25164 push ebx */
  push32((uint32_t)(EBX));
  /* 10f25165 push ebx */
  push32((uint32_t)(EBX));
  /* 10f25166 call edi */
  call_ind((uint32_t)(EDI), 0x10f25168u);
  /* 10f25168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2516a jne 0x10f2517a */
  if (!C.zf) goto L_10f2517a;
  /* 10f2516c push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10f25170 call 0x10f23e12 */
  push32(0x10f25175u); f_10f23e12();
  /* 10f25175 pop ecx */
  ECX = (pop32());
  /* 10f25176 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10f2517a:;
  /* 10f2517a mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10f2517e:;
  /* 10f2517e push esi */
  push32((uint32_t)(ESI));
  /* 10f2517f call dword ptr [0x10f2d090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d090))), 0x10f25185u);
  /* 10f25185 mov eax, ebx */
  EAX = (EBX);
  /* 10f25187 jmp 0x10f251dc */
  goto L_10f251dc;
L_10f25189:;
  /* 10f25189 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2518c jne 0x10f251da */
  if (!C.zf) goto L_10f251da;
L_10f2518e:;
  /* 10f2518e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25190 jne 0x10f2519e */
  if (!C.zf) goto L_10f2519e;
  /* 10f25192 call dword ptr [0x10f2d088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d088))), 0x10f25198u);
  /* 10f25198 mov edi, eax */
  EDI = (EAX);
  /* 10f2519a cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2519c je 0x10f251da */
  if (C.zf) goto L_10f251da;
L_10f2519e:;
  /* 10f2519e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f251a0 mov eax, edi */
  EAX = (EDI);
  /* 10f251a2 je 0x10f251ae */
  if (C.zf) goto L_10f251ae;
L_10f251a4:;
  /* 10f251a4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f251a5 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f251a7 jne 0x10f251a4 */
  if (!C.zf) goto L_10f251a4;
  /* 10f251a9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f251aa cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f251ac jne 0x10f251a4 */
  if (!C.zf) goto L_10f251a4;
L_10f251ae:;
  /* 10f251ae sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f251b0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f251b1 mov ebp, eax */
  EBP = (EAX);
  /* 10f251b3 push ebp */
  push32((uint32_t)(EBP));
  /* 10f251b4 call 0x10f248d5 */
  push32(0x10f251b9u); f_10f248d5();
  /* 10f251b9 mov esi, eax */
  ESI = (EAX);
  /* 10f251bb pop ecx */
  ECX = (pop32());
  /* 10f251bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f251be jne 0x10f251c4 */
  if (!C.zf) goto L_10f251c4;
  /* 10f251c0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f251c2 jmp 0x10f251cf */
  goto L_10f251cf;
L_10f251c4:;
  /* 10f251c4 push ebp */
  push32((uint32_t)(EBP));
  /* 10f251c5 push edi */
  push32((uint32_t)(EDI));
  /* 10f251c6 push esi */
  push32((uint32_t)(ESI));
  /* 10f251c7 call 0x10f278a0 */
  push32(0x10f251ccu); f_10f278a0();
  /* 10f251cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f251cf:;
  /* 10f251cf push edi */
  push32((uint32_t)(EDI));
  /* 10f251d0 call dword ptr [0x10f2d094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d094))), 0x10f251d6u);
  /* 10f251d6 mov eax, esi */
  EAX = (ESI);
  /* 10f251d8 jmp 0x10f251dc */
  goto L_10f251dc;
L_10f251da:;
  /* 10f251da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f251dc:;
  /* 10f251dc pop edi */
  EDI = (pop32());
  /* 10f251dd pop esi */
  ESI = (pop32());
  /* 10f251de pop ebp */
  EBP = (pop32());
  /* 10f251df pop ebx */
  EBX = (pop32());
  /* 10f251e0 pop ecx */
  ECX = (pop32());
  /* 10f251e1 pop ecx */
  ECX = (pop32());
  /* 10f251e2 ret  */
  ESPCHK(0x10f250b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100051e3 @ 0x10f251e3 (45 bytes, 17 insns) */
void f_10f251e3(void) {
  FTRACE(0x10f251e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f251e3 push esi */
  push32((uint32_t)(ESI));
  /* 10f251e4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f251e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f251ea and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10f251ed call dword ptr [0x10f2d0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0d0))), 0x10f251f3u);
  /* 10f251f3 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f251f8 jne 0x10f2520e */
  if (!C.zf) goto L_10f2520e;
  /* 10f251fa mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10f251fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f251ff je 0x10f2520e */
  if (C.zf) goto L_10f2520e;
  /* 10f25201 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25203 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 10f25206 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 10f25208 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 10f2520b mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_10f2520e:;
  /* 10f2520e pop esi */
  ESI = (pop32());
  /* 10f2520f ret  */
  ESPCHK(0x10f251e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005210 @ 0x10f25210 (328 bytes, 115 insns) */
void f_10f25210(void) {
  FTRACE(0x10f25210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f25210 push ebp */
  push32((uint32_t)(EBP));
  /* 10f25211 mov ebp, esp */
  EBP = (ESP);
  /* 10f25213 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 10f25218 call 0x10f289d0 */
  push32(0x10f2521du); f_10f289d0();
  /* 10f2521d lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10f25223 push ebx */
  push32((uint32_t)(EBX));
  /* 10f25224 push eax */
  push32((uint32_t)(EAX));
  /* 10f25225 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 10f2522f call dword ptr [0x10f2d07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d07c))), 0x10f25235u);
  /* 10f25235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f25237 je 0x10f25253 */
  if (C.zf) goto L_10f25253;
  /* 10f25239 cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25240 jne 0x10f25253 */
  if (!C.zf) goto L_10f25253;
  /* 10f25242 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25249 jb 0x10f25253 */
  if (C.cf) goto L_10f25253;
  /* 10f2524b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2524d pop eax */
  EAX = (pop32());
  /* 10f2524e jmp 0x10f25355 */
  goto L_10f25355;
L_10f25253:;
  /* 10f25253 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10f25259 push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 10f2525e push eax */
  push32((uint32_t)(EAX));
  /* 10f2525f push 0x10f2d32c */
  push32((uint32_t)(0x10f2d32cu));
  /* 10f25264 call dword ptr [0x10f2d080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d080))), 0x10f2526au);
  /* 10f2526a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2526c je 0x10f25342 */
  if (C.zf) goto L_10f25342;
  /* 10f25272 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f25274 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 10f2527a cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25280 je 0x10f25295 */
  if (C.zf) goto L_10f25295;
L_10f25282:;
  /* 10f25282 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10f25284 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25286 jl 0x10f25290 */
  if ((C.sf!=C.of)) goto L_10f25290;
  /* 10f25288 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2528a jg 0x10f25290 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f25290;
  /* 10f2528c sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f2528e mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10f25290:;
  /* 10f25290 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f25291 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25293 jne 0x10f25282 */
  if (!C.zf) goto L_10f25282;
L_10f25295:;
  /* 10f25295 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10f2529b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f2529d push eax */
  push32((uint32_t)(EAX));
  /* 10f2529e push 0x10f2d314 */
  push32((uint32_t)(0x10f2d314u));
  /* 10f252a3 call 0x10f28990 */
  push32(0x10f252a8u); f_10f28990();
  /* 10f252a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f252ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f252ad jne 0x10f252b7 */
  if (!C.zf) goto L_10f252b7;
  /* 10f252af lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10f252b5 jmp 0x10f25300 */
  goto L_10f25300;
L_10f252b7:;
  /* 10f252b7 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10f252bd push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10f252c2 push eax */
  push32((uint32_t)(EAX));
  /* 10f252c3 push ebx */
  push32((uint32_t)(EBX));
  /* 10f252c4 call dword ptr [0x10f2d098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d098))), 0x10f252cau);
  /* 10f252ca cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f252d0 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 10f252d6 je 0x10f252eb */
  if (C.zf) goto L_10f252eb;
L_10f252d8:;
  /* 10f252d8 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10f252da cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f252dc jl 0x10f252e6 */
  if ((C.sf!=C.of)) goto L_10f252e6;
  /* 10f252de cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f252e0 jg 0x10f252e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f252e6;
  /* 10f252e2 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f252e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_10f252e6:;
  /* 10f252e6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f252e7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f252e9 jne 0x10f252d8 */
  if (!C.zf) goto L_10f252d8;
L_10f252eb:;
  /* 10f252eb lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 10f252f1 push eax */
  push32((uint32_t)(EAX));
  /* 10f252f2 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 10f252f8 push eax */
  push32((uint32_t)(EAX));
  /* 10f252f9 call 0x10f28910 */
  push32(0x10f252feu); f_10f28910();
  /* 10f252fe pop ecx */
  ECX = (pop32());
  /* 10f252ff pop ecx */
  ECX = (pop32());
L_10f25300:;
  /* 10f25300 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25302 je 0x10f25342 */
  if (C.zf) goto L_10f25342;
  /* 10f25304 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10f25306 push eax */
  push32((uint32_t)(EAX));
  /* 10f25307 call 0x10f28850 */
  push32(0x10f2530cu); f_10f28850();
  /* 10f2530c pop ecx */
  ECX = (pop32());
  /* 10f2530d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2530f pop ecx */
  ECX = (pop32());
  /* 10f25310 je 0x10f25342 */
  if (C.zf) goto L_10f25342;
  /* 10f25312 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f25313 mov ecx, eax */
  ECX = (EAX);
  /* 10f25315 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25317 je 0x10f25327 */
  if (C.zf) goto L_10f25327;
L_10f25319:;
  /* 10f25319 cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2531c jne 0x10f25322 */
  if (!C.zf) goto L_10f25322;
  /* 10f2531e mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 10f25320 jmp 0x10f25323 */
  goto L_10f25323;
L_10f25322:;
  /* 10f25322 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_10f25323:;
  /* 10f25323 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25325 jne 0x10f25319 */
  if (!C.zf) goto L_10f25319;
L_10f25327:;
  /* 10f25327 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f25329 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2532a push eax */
  push32((uint32_t)(EAX));
  /* 10f2532b call 0x10f28619 */
  push32(0x10f25330u); f_10f28619();
  /* 10f25330 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25333 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25336 je 0x10f25355 */
  if (C.zf) goto L_10f25355;
  /* 10f25338 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2533b je 0x10f25355 */
  if (C.zf) goto L_10f25355;
  /* 10f2533d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25340 je 0x10f25355 */
  if (C.zf) goto L_10f25355;
L_10f25342:;
  /* 10f25342 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10f25345 push eax */
  push32((uint32_t)(EAX));
  /* 10f25346 call 0x10f251e3 */
  push32(0x10f2534bu); f_10f251e3();
  /* 10f2534b cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2534f pop ecx */
  ECX = (pop32());
  /* 10f25350 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25352 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f25355:;
  /* 10f25355 pop ebx */
  EBX = (pop32());
  /* 10f25356 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f25357 ret  */
  ESPCHK(0x10f25210u, _esp0);
  ESP += 4; return;
}

/* FUN_10005358 @ 0x10f25358 (93 bytes, 30 insns) */
void f_10f25358(void) {
  FTRACE(0x10f25358u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f25358 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2535a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2535c cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25360 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f25365 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10f25368 push eax */
  push32((uint32_t)(EAX));
  /* 10f25369 call dword ptr [0x10f2d074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d074))), 0x10f2536fu);
  /* 10f2536f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f25371 mov dword ptr [0x10f48fe0], eax */
  w32((uint32_t)(0x10f48fe0), (EAX));
  /* 10f25376 je 0x10f253ae */
  if (C.zf) goto L_10f253ae;
  /* 10f25378 call 0x10f25210 */
  push32(0x10f2537du); f_10f25210();
  /* 10f2537d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25380 mov dword ptr [0x10f48fe4], eax */
  w32((uint32_t)(0x10f48fe4), (EAX));
  /* 10f25385 jne 0x10f25394 */
  if (!C.zf) goto L_10f25394;
  /* 10f25387 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 10f2538c call 0x10f255e9 */
  push32(0x10f25391u); f_10f255e9();
  /* 10f25391 pop ecx */
  ECX = (pop32());
  /* 10f25392 jmp 0x10f2539e */
  goto L_10f2539e;
L_10f25394:;
  /* 10f25394 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25397 jne 0x10f253b1 */
  if (!C.zf) goto L_10f253b1;
  /* 10f25399 call 0x10f26130 */
  push32(0x10f2539eu); f_10f26130();
L_10f2539e:;
  /* 10f2539e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f253a0 jne 0x10f253b1 */
  if (!C.zf) goto L_10f253b1;
  /* 10f253a2 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f253a8 call dword ptr [0x10f2d078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d078))), 0x10f253aeu);
L_10f253ae:;
  /* 10f253ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f253b0 ret  */
  ESPCHK(0x10f25358u, _esp0);
  ESP += 4; return;
L_10f253b1:;
  /* 10f253b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f253b3 pop eax */
  EAX = (pop32());
  /* 10f253b4 ret  */
  ESPCHK(0x10f25358u, _esp0);
  ESP += 4; return;
}

/* FUN_100053b5 @ 0x10f253b5 (168 bytes, 56 insns) */
void f_10f253b5(void) {
  FTRACE(0x10f253b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f253b5 mov eax, dword ptr [0x10f48fe4] */
  EAX = (r32((uint32_t)(0x10f48fe4)));
  /* 10f253ba push esi */
  push32((uint32_t)(ESI));
  /* 10f253bb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f253be push edi */
  push32((uint32_t)(EDI));
  /* 10f253bf jne 0x10f25427 */
  if (!C.zf) goto L_10f25427;
  /* 10f253c1 push ebx */
  push32((uint32_t)(EBX));
  /* 10f253c2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f253c4 cmp dword ptr [0x10f48fd4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10f48fd4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f253ca push ebp */
  push32((uint32_t)(EBP));
  /* 10f253cb mov ebp, dword ptr [0x10f2d0c8] */
  EBP = (r32((uint32_t)(0x10f2d0c8)));
  /* 10f253d1 jle 0x10f25413 */
  if ((C.zf||C.sf!=C.of)) goto L_10f25413;
  /* 10f253d3 mov eax, dword ptr [0x10f48fd8] */
  EAX = (r32((uint32_t)(0x10f48fd8)));
  /* 10f253d8 mov edi, dword ptr [0x10f2d070] */
  EDI = (r32((uint32_t)(0x10f2d070)));
  /* 10f253de lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10f253e1:;
  /* 10f253e1 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10f253e6 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10f253eb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f253ed call edi */
  call_ind((uint32_t)(EDI), 0x10f253efu);
  /* 10f253ef push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f253f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f253f6 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f253f8 call edi */
  call_ind((uint32_t)(EDI), 0x10f253fau);
  /* 10f253fa push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10f253fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f253ff push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f25405 call ebp */
  call_ind((uint32_t)(EBP), 0x10f25407u);
  /* 10f25407 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2540a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f2540b cmp ebx, dword ptr [0x10f48fd4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10f48fd4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25411 jl 0x10f253e1 */
  if ((C.sf!=C.of)) goto L_10f253e1;
L_10f25413:;
  /* 10f25413 push dword ptr [0x10f48fd8] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fd8))));
  /* 10f25419 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2541b push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f25421 call ebp */
  call_ind((uint32_t)(EBP), 0x10f25423u);
  /* 10f25423 pop ebp */
  EBP = (pop32());
  /* 10f25424 pop ebx */
  EBX = (pop32());
  /* 10f25425 jmp 0x10f2544e */
  goto L_10f2544e;
L_10f25427:;
  /* 10f25427 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2542a jne 0x10f2544e */
  if (!C.zf) goto L_10f2544e;
  /* 10f2542c mov edi, 0x10f2f658 */
  EDI = (0x10f2f658u);
  /* 10f25431 mov esi, edi */
  ESI = (EDI);
L_10f25433:;
  /* 10f25433 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f25436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f25438 je 0x10f25448 */
  if (C.zf) goto L_10f25448;
  /* 10f2543a push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f2543f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f25441 push eax */
  push32((uint32_t)(EAX));
  /* 10f25442 call dword ptr [0x10f2d070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d070))), 0x10f25448u);
L_10f25448:;
  /* 10f25448 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 10f2544a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2544c jne 0x10f25433 */
  if (!C.zf) goto L_10f25433;
L_10f2544e:;
  /* 10f2544e push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f25454 call dword ptr [0x10f2d078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d078))), 0x10f2545au);
  /* 10f2545a pop edi */
  EDI = (pop32());
  /* 10f2545b pop esi */
  ESI = (pop32());
  /* 10f2545c ret  */
  ESPCHK(0x10f253b5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000545d @ 0x10f2545d (57 bytes, 18 insns) */
void f_10f2545d(void) {
  FTRACE(0x10f2545du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2545d mov eax, dword ptr [0x10f479c8] */
  EAX = (r32((uint32_t)(0x10f479c8)));
  /* 10f25462 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25465 je 0x10f25474 */
  if (C.zf) goto L_10f25474;
  /* 10f25467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f25469 jne 0x10f25495 */
  if (!C.zf) goto L_10f25495;
  /* 10f2546b cmp dword ptr [0x10f479cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f479cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25472 jne 0x10f25495 */
  if (!C.zf) goto L_10f25495;
L_10f25474:;
  /* 10f25474 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10f25479 call 0x10f25496 */
  push32(0x10f2547eu); f_10f25496();
  /* 10f2547e mov eax, dword ptr [0x10f47b1c] */
  EAX = (r32((uint32_t)(0x10f47b1c)));
  /* 10f25483 pop ecx */
  ECX = (pop32());
  /* 10f25484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f25486 je 0x10f2548a */
  if (C.zf) goto L_10f2548a;
  /* 10f25488 call eax */
  call_ind((uint32_t)(EAX), 0x10f2548au);
L_10f2548a:;
  /* 10f2548a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10f2548f call 0x10f25496 */
  push32(0x10f25494u); f_10f25496();
  /* 10f25494 pop ecx */
  ECX = (pop32());
L_10f25495:;
  /* 10f25495 ret  */
  ESPCHK(0x10f2545du, _esp0);
  ESP += 4; return;
}

/* FUN_10005496 @ 0x10f25496 (339 bytes, 100 insns) */
void f_10f25496(void) {
  FTRACE(0x10f25496u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f25496 push ebp */
  push32((uint32_t)(EBP));
  /* 10f25497 mov ebp, esp */
  EBP = (ESP);
  /* 10f25499 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2549f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f254a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f254a4 mov eax, 0x10f2f5c8 */
  EAX = (0x10f2f5c8u);
L_10f254a9:;
  /* 10f254a9 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f254ab je 0x10f254b8 */
  if (C.zf) goto L_10f254b8;
  /* 10f254ad add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f254b0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f254b1 cmp eax, 0x10f2f658 */
  { uint32_t _a=(EAX),_b=(0x10f2f658u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f254b6 jl 0x10f254a9 */
  if ((C.sf!=C.of)) goto L_10f254a9;
L_10f254b8:;
  /* 10f254b8 push esi */
  push32((uint32_t)(ESI));
  /* 10f254b9 mov esi, ecx */
  ESI = (ECX);
  /* 10f254bb shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10f254be cmp edx, dword ptr [esi + 0x10f2f5c8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10f2f5c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f254c4 jne 0x10f255e6 */
  if (!C.zf) goto L_10f255e6;
  /* 10f254ca mov eax, dword ptr [0x10f479c8] */
  EAX = (r32((uint32_t)(0x10f479c8)));
  /* 10f254cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f254d2 je 0x10f255c0 */
  if (C.zf) goto L_10f255c0;
  /* 10f254d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f254da jne 0x10f254e9 */
  if (!C.zf) goto L_10f254e9;
  /* 10f254dc cmp dword ptr [0x10f479cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f479cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f254e3 je 0x10f255c0 */
  if (C.zf) goto L_10f255c0;
L_10f254e9:;
  /* 10f254e9 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f254ef je 0x10f255e6 */
  if (C.zf) goto L_10f255e6;
  /* 10f254f5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10f254fb push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10f25500 push eax */
  push32((uint32_t)(EAX));
  /* 10f25501 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f25503 call dword ptr [0x10f2d098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d098))), 0x10f25509u);
  /* 10f25509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2550b jne 0x10f25520 */
  if (!C.zf) goto L_10f25520;
  /* 10f2550d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10f25513 push 0x10f2d61c */
  push32((uint32_t)(0x10f2d61cu));
  /* 10f25518 push eax */
  push32((uint32_t)(EAX));
  /* 10f25519 call 0x10f27370 */
  push32(0x10f2551eu); f_10f27370();
  /* 10f2551e pop ecx */
  ECX = (pop32());
  /* 10f2551f pop ecx */
  ECX = (pop32());
L_10f25520:;
  /* 10f25520 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10f25526 push edi */
  push32((uint32_t)(EDI));
  /* 10f25527 push eax */
  push32((uint32_t)(EAX));
  /* 10f25528 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10f2552e call 0x10f27800 */
  push32(0x10f25533u); f_10f27800();
  /* 10f25533 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f25534 pop ecx */
  ECX = (pop32());
  /* 10f25535 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25538 jbe 0x10f25563 */
  if ((C.cf||C.zf)) goto L_10f25563;
  /* 10f2553a lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10f25540 push eax */
  push32((uint32_t)(EAX));
  /* 10f25541 call 0x10f27800 */
  push32(0x10f25546u); f_10f27800();
  /* 10f25546 mov edi, eax */
  EDI = (EAX);
  /* 10f25548 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10f2554e sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25551 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f25553 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25555 push 0x10f2d618 */
  push32((uint32_t)(0x10f2d618u));
  /* 10f2555a push edi */
  push32((uint32_t)(EDI));
  /* 10f2555b call 0x10f28a90 */
  push32(0x10f25560u); f_10f28a90();
  /* 10f25560 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f25563:;
  /* 10f25563 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10f25569 push 0x10f2d5fc */
  push32((uint32_t)(0x10f2d5fcu));
  /* 10f2556e push eax */
  push32((uint32_t)(EAX));
  /* 10f2556f call 0x10f27370 */
  push32(0x10f25574u); f_10f27370();
  /* 10f25574 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10f2557a push edi */
  push32((uint32_t)(EDI));
  /* 10f2557b push eax */
  push32((uint32_t)(EAX));
  /* 10f2557c call 0x10f27380 */
  push32(0x10f25581u); f_10f27380();
  /* 10f25581 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10f25587 push 0x10f2d5f8 */
  push32((uint32_t)(0x10f2d5f8u));
  /* 10f2558c push eax */
  push32((uint32_t)(EAX));
  /* 10f2558d call 0x10f27380 */
  push32(0x10f25592u); f_10f27380();
  /* 10f25592 push dword ptr [esi + 0x10f2f5cc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10f2f5cc))));
  /* 10f25598 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10f2559e push eax */
  push32((uint32_t)(EAX));
  /* 10f2559f call 0x10f27380 */
  push32(0x10f255a4u); f_10f27380();
  /* 10f255a4 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10f255a9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10f255af push 0x10f2d5d0 */
  push32((uint32_t)(0x10f2d5d0u));
  /* 10f255b4 push eax */
  push32((uint32_t)(EAX));
  /* 10f255b5 call 0x10f289ff */
  push32(0x10f255bau); f_10f289ff();
  /* 10f255ba add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f255bd pop edi */
  EDI = (pop32());
  /* 10f255be jmp 0x10f255e6 */
  goto L_10f255e6;
L_10f255c0:;
  /* 10f255c0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10f255c3 lea esi, [esi + 0x10f2f5cc] */
  ESI = ((uint32_t)(ESI + 0x10f2f5cc));
  /* 10f255c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f255cb push eax */
  push32((uint32_t)(EAX));
  /* 10f255cc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f255ce call 0x10f27800 */
  push32(0x10f255d3u); f_10f27800();
  /* 10f255d3 pop ecx */
  ECX = (pop32());
  /* 10f255d4 push eax */
  push32((uint32_t)(EAX));
  /* 10f255d5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f255d7 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10f255d9 call dword ptr [0x10f2d0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0a8))), 0x10f255dfu);
  /* 10f255df push eax */
  push32((uint32_t)(EAX));
  /* 10f255e0 call dword ptr [0x10f2d06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d06c))), 0x10f255e6u);
L_10f255e6:;
  /* 10f255e6 pop esi */
  ESI = (pop32());
  /* 10f255e7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f255e8 ret  */
  ESPCHK(0x10f25496u, _esp0);
  ESP += 4; return;
}

/* FUN_100055e9 @ 0x10f255e9 (72 bytes, 17 insns) */
void f_10f255e9(void) {
  FTRACE(0x10f255e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f255e9 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10f255ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10f255f0 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f255f6 call dword ptr [0x10f2d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e4))), 0x10f255fcu);
  /* 10f255fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f255fe mov dword ptr [0x10f48fd8], eax */
  w32((uint32_t)(0x10f48fd8), (EAX));
  /* 10f25603 jne 0x10f25606 */
  if (!C.zf) goto L_10f25606;
  /* 10f25605 ret  */
  ESPCHK(0x10f255e9u, _esp0);
  ESP += 4; return;
L_10f25606:;
  /* 10f25606 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f2560a and dword ptr [0x10f48fd0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10f48fd0)))&(0x0u); w32((uint32_t)(0x10f48fd0), (_r)); fl_logic(_r,32); }
  /* 10f25611 and dword ptr [0x10f48fd4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10f48fd4)))&(0x0u); w32((uint32_t)(0x10f48fd4), (_r)); fl_logic(_r,32); }
  /* 10f25618 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2561a mov dword ptr [0x10f48fcc], eax */
  w32((uint32_t)(0x10f48fcc), (EAX));
  /* 10f2561f mov dword ptr [0x10f48fdc], ecx */
  w32((uint32_t)(0x10f48fdc), (ECX));
  /* 10f25625 mov dword ptr [0x10f48fc4], 0x10 */
  w32((uint32_t)(0x10f48fc4), (0x10u));
  /* 10f2562f pop eax */
  EAX = (pop32());
  /* 10f25630 ret  */
  ESPCHK(0x10f255e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10005631 @ 0x10f25631 (43 bytes, 14 insns) */
void f_10f25631(void) {
  FTRACE(0x10f25631u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f25631 mov eax, dword ptr [0x10f48fd4] */
  EAX = (r32((uint32_t)(0x10f48fd4)));
  /* 10f25636 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10f25639 mov eax, dword ptr [0x10f48fd8] */
  EAX = (r32((uint32_t)(0x10f48fd8)));
  /* 10f2563e lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10f25641:;
  /* 10f25641 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25643 jae 0x10f25659 */
  if (!C.cf) goto L_10f25659;
  /* 10f25645 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f25649 sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2564c cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25652 jb 0x10f2565b */
  if (C.cf) goto L_10f2565b;
  /* 10f25654 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25657 jmp 0x10f25641 */
  goto L_10f25641;
L_10f25659:;
  /* 10f25659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2565b:;
  /* 10f2565b ret  */
  ESPCHK(0x10f25631u, _esp0);
  ESP += 4; return;
}

/* FUN_1000565c @ 0x10f2565c (809 bytes, 265 insns) */
void f_10f2565c(void) {
  FTRACE(0x10f2565cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2565c push ebp */
  push32((uint32_t)(EBP));
  /* 10f2565d mov ebp, esp */
  EBP = (ESP);
  /* 10f2565f sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25665 push ebx */
  push32((uint32_t)(EBX));
  /* 10f25666 push esi */
  push32((uint32_t)(ESI));
  /* 10f25667 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2566a mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f2566d push edi */
  push32((uint32_t)(EDI));
  /* 10f2566e mov edi, esi */
  EDI = (ESI);
  /* 10f25670 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25673 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25676 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10f25679 mov ecx, edi */
  ECX = (EDI);
  /* 10f2567b imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f25681 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10f25688 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f2568b mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10f2568d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f2568e test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10f25691 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f25694 jne 0x10f25980 */
  if (!C.zf) goto L_10f25980;
  /* 10f2569a mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 10f2569d lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 10f256a0 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f256a3 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 10f256a6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f256a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f256ac test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10f256af mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 10f256b2 jne 0x10f25732 */
  if (!C.zf) goto L_10f25732;
  /* 10f256b4 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f256b7 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f256b8 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f256bb jbe 0x10f256c0 */
  if ((C.cf||C.zf)) goto L_10f256c0;
  /* 10f256bd push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f256bf pop edx */
  EDX = (pop32());
L_10f256c0:;
  /* 10f256c0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10f256c3 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f256c6 jne 0x10f25714 */
  if (!C.zf) goto L_10f25714;
  /* 10f256c8 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f256cb jae 0x10f256eb */
  if (!C.cf) goto L_10f256eb;
  /* 10f256cd mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f256d2 mov ecx, edx */
  ECX = (EDX);
  /* 10f256d4 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f256d6 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 10f256da not ebx */
  EBX = (~(EBX));
  /* 10f256dc and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10f256e0 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10f256e2 jne 0x10f2570c */
  if (!C.zf) goto L_10f2570c;
  /* 10f256e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f256e7 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10f256e9 jmp 0x10f2570c */
  goto L_10f2570c;
L_10f256eb:;
  /* 10f256eb lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 10f256ee mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f256f3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f256f5 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 10f256f9 not ebx */
  EBX = (~(EBX));
  /* 10f256fb and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10f25702 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10f25704 jne 0x10f2570c */
  if (!C.zf) goto L_10f2570c;
  /* 10f25706 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25709 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10f2570c:;
  /* 10f2570c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2570f mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f25712 jmp 0x10f25717 */
  goto L_10f25717;
L_10f25714:;
  /* 10f25714 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_10f25717:;
  /* 10f25717 mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 10f2571a mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 10f2571d add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25720 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 10f25723 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f25726 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f25729 mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f2572c mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f2572f mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_10f25732:;
  /* 10f25732 mov edx, ecx */
  EDX = (ECX);
  /* 10f25734 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f25737 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f25738 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2573b jbe 0x10f25740 */
  if ((C.cf||C.zf)) goto L_10f25740;
  /* 10f2573d push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f2573f pop edx */
  EDX = (pop32());
L_10f25740:;
  /* 10f25740 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f25743 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 10f25746 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10f25749 jne 0x10f257e3 */
  if (!C.zf) goto L_10f257e3;
  /* 10f2574f sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25752 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f25755 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 10f25758 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f2575a mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 10f2575d dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f2575e pop esi */
  ESI = (pop32());
  /* 10f2575f cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25761 jbe 0x10f25765 */
  if ((C.cf||C.zf)) goto L_10f25765;
  /* 10f25763 mov ebx, esi */
  EBX = (ESI);
L_10f25765:;
  /* 10f25765 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25768 mov edx, ecx */
  EDX = (ECX);
  /* 10f2576a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f2576d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f25770 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f25771 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25773 jbe 0x10f25777 */
  if ((C.cf||C.zf)) goto L_10f25777;
  /* 10f25775 mov edx, esi */
  EDX = (ESI);
L_10f25777:;
  /* 10f25777 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25779 je 0x10f257de */
  if (C.zf) goto L_10f257de;
  /* 10f2577b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2577e mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 10f25781 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25784 jne 0x10f257c6 */
  if (!C.zf) goto L_10f257c6;
  /* 10f25786 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25789 jae 0x10f257a7 */
  if (!C.cf) goto L_10f257a7;
  /* 10f2578b mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10f25790 mov ecx, ebx */
  ECX = (EBX);
  /* 10f25792 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10f25794 not esi */
  ESI = (~(ESI));
  /* 10f25796 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10f2579a dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 10f2579e jne 0x10f257c6 */
  if (!C.zf) goto L_10f257c6;
  /* 10f257a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f257a3 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10f257a5 jmp 0x10f257c6 */
  goto L_10f257c6;
L_10f257a7:;
  /* 10f257a7 lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 10f257aa mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10f257af shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10f257b1 not esi */
  ESI = (~(ESI));
  /* 10f257b3 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10f257ba dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 10f257be jne 0x10f257c6 */
  if (!C.zf) goto L_10f257c6;
  /* 10f257c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f257c3 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10f257c6:;
  /* 10f257c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f257c9 mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 10f257cc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f257cf mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 10f257d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f257d5 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 10f257d8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f257db mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_10f257de:;
  /* 10f257de mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f257e1 jmp 0x10f257e6 */
  goto L_10f257e6;
L_10f257e3:;
  /* 10f257e3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10f257e6:;
  /* 10f257e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f257ea jne 0x10f257f4 */
  if (!C.zf) goto L_10f257f4;
  /* 10f257ec cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f257ee je 0x10f25875 */
  if (C.zf) goto L_10f25875;
L_10f257f4:;
  /* 10f257f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f257f7 mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 10f257fb lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 10f257fe mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 10f25801 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 10f25804 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 10f25807 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f2580a mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 10f2580d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f25810 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25813 jne 0x10f25875 */
  if (!C.zf) goto L_10f25875;
  /* 10f25815 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 10f25819 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2581c mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10f2581f inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10f25821 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 10f25825 jae 0x10f2584c */
  if (!C.cf) goto L_10f2584c;
  /* 10f25827 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2582b jne 0x10f2583b */
  if (!C.zf) goto L_10f2583b;
  /* 10f2582d mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f25832 mov ecx, edx */
  ECX = (EDX);
  /* 10f25834 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f25836 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25839 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10f2583b:;
  /* 10f2583b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f25840 mov ecx, edx */
  ECX = (EDX);
  /* 10f25842 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f25844 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 10f25848 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f2584a jmp 0x10f25875 */
  goto L_10f25875;
L_10f2584c:;
  /* 10f2584c cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25850 jne 0x10f25862 */
  if (!C.zf) goto L_10f25862;
  /* 10f25852 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 10f25855 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f2585a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f2585c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2585f or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10f25862:;
  /* 10f25862 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 10f25865 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f2586a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f2586c lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 10f25873 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10f25875:;
  /* 10f25875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25878 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f2587a mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 10f2587e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f25881 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10f25883 jne 0x10f25980 */
  if (!C.zf) goto L_10f25980;
  /* 10f25889 mov eax, dword ptr [0x10f48fd0] */
  EAX = (r32((uint32_t)(0x10f48fd0)));
  /* 10f2588e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f25890 je 0x10f25972 */
  if (C.zf) goto L_10f25972;
  /* 10f25896 mov ecx, dword ptr [0x10f48fc8] */
  ECX = (r32((uint32_t)(0x10f48fc8)));
  /* 10f2589c mov esi, dword ptr [0x10f2d070] */
  ESI = (r32((uint32_t)(0x10f2d070)));
  /* 10f258a2 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10f258a5 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f258a8 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10f258ad push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10f258b2 push ebx */
  push32((uint32_t)(EBX));
  /* 10f258b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f258b4 call esi */
  call_ind((uint32_t)(ESI), 0x10f258b6u);
  /* 10f258b6 mov ecx, dword ptr [0x10f48fc8] */
  ECX = (r32((uint32_t)(0x10f48fc8)));
  /* 10f258bc mov eax, dword ptr [0x10f48fd0] */
  EAX = (r32((uint32_t)(0x10f48fd0)));
  /* 10f258c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f258c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f258c8 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10f258cb mov eax, dword ptr [0x10f48fd0] */
  EAX = (r32((uint32_t)(0x10f48fd0)));
  /* 10f258d0 mov ecx, dword ptr [0x10f48fc8] */
  ECX = (r32((uint32_t)(0x10f48fc8)));
  /* 10f258d6 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f258d9 and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10f258e1 mov eax, dword ptr [0x10f48fd0] */
  EAX = (r32((uint32_t)(0x10f48fd0)));
  /* 10f258e6 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f258e9 dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10f258ec mov eax, dword ptr [0x10f48fd0] */
  EAX = (r32((uint32_t)(0x10f48fd0)));
  /* 10f258f1 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f258f4 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f258f8 jne 0x10f25903 */
  if (!C.zf) goto L_10f25903;
  /* 10f258fa and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f258fe mov eax, dword ptr [0x10f48fd0] */
  EAX = (r32((uint32_t)(0x10f48fd0)));
L_10f25903:;
  /* 10f25903 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25907 jne 0x10f25972 */
  if (!C.zf) goto L_10f25972;
  /* 10f25909 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2590a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2590c push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10f2590f call esi */
  call_ind((uint32_t)(ESI), 0x10f25911u);
  /* 10f25911 mov eax, dword ptr [0x10f48fd0] */
  EAX = (r32((uint32_t)(0x10f48fd0)));
  /* 10f25916 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10f25919 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2591b push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f25921 call dword ptr [0x10f2d0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0c8))), 0x10f25927u);
  /* 10f25927 mov eax, dword ptr [0x10f48fd4] */
  EAX = (r32((uint32_t)(0x10f48fd4)));
  /* 10f2592c mov edx, dword ptr [0x10f48fd8] */
  EDX = (r32((uint32_t)(0x10f48fd8)));
  /* 10f25932 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f25935 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10f25938 mov ecx, eax */
  ECX = (EAX);
  /* 10f2593a mov eax, dword ptr [0x10f48fd0] */
  EAX = (r32((uint32_t)(0x10f48fd0)));
  /* 10f2593f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25941 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10f25945 push ecx */
  push32((uint32_t)(ECX));
  /* 10f25946 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10f25949 push ecx */
  push32((uint32_t)(ECX));
  /* 10f2594a push eax */
  push32((uint32_t)(EAX));
  /* 10f2594b call 0x10f274c0 */
  push32(0x10f25950u); f_10f274c0();
  /* 10f25950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25953 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25956 dec dword ptr [0x10f48fd4] */
  { uint32_t _r=(r32((uint32_t)(0x10f48fd4)))-1; w32((uint32_t)(0x10f48fd4), (_r)); fl_dec(_r,32); }
  /* 10f2595c cmp eax, dword ptr [0x10f48fd0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f48fd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25962 jbe 0x10f25968 */
  if ((C.cf||C.zf)) goto L_10f25968;
  /* 10f25964 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_10f25968:;
  /* 10f25968 mov eax, dword ptr [0x10f48fd8] */
  EAX = (r32((uint32_t)(0x10f48fd8)));
  /* 10f2596d mov dword ptr [0x10f48fcc], eax */
  w32((uint32_t)(0x10f48fcc), (EAX));
L_10f25972:;
  /* 10f25972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25975 mov dword ptr [0x10f48fc8], edi */
  w32((uint32_t)(0x10f48fc8), (EDI));
  /* 10f2597b mov dword ptr [0x10f48fd0], eax */
  w32((uint32_t)(0x10f48fd0), (EAX));
L_10f25980:;
  /* 10f25980 pop edi */
  EDI = (pop32());
  /* 10f25981 pop esi */
  ESI = (pop32());
  /* 10f25982 pop ebx */
  EBX = (pop32());
  /* 10f25983 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f25984 ret  */
  ESPCHK(0x10f2565cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005985 @ 0x10f25985 (777 bytes, 275 insns) */
void f_10f25985(void) {
  FTRACE(0x10f25985u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f25985 push ebp */
  push32((uint32_t)(EBP));
  /* 10f25986 mov ebp, esp */
  EBP = (ESP);
  /* 10f25988 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2598b mov eax, dword ptr [0x10f48fd4] */
  EAX = (r32((uint32_t)(0x10f48fd4)));
  /* 10f25990 mov edx, dword ptr [0x10f48fd8] */
  EDX = (r32((uint32_t)(0x10f48fd8)));
  /* 10f25996 push ebx */
  push32((uint32_t)(EBX));
  /* 10f25997 push esi */
  push32((uint32_t)(ESI));
  /* 10f25998 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f2599b push edi */
  push32((uint32_t)(EDI));
  /* 10f2599c lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10f2599f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f259a2 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10f259a5 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10f259a8 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10f259ab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f259ae sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f259b1 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f259b2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f259b5 jge 0x10f259c5 */
  if ((C.sf==C.of)) goto L_10f259c5;
  /* 10f259b7 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10f259ba shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10f259bc or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10f259c0 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10f259c3 jmp 0x10f259d5 */
  goto L_10f259d5;
L_10f259c5:;
  /* 10f259c5 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f259c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f259cb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f259cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f259cf mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10f259d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f259d5:;
  /* 10f259d5 mov eax, dword ptr [0x10f48fcc] */
  EAX = (r32((uint32_t)(0x10f48fcc)));
  /* 10f259da mov ebx, eax */
  EBX = (EAX);
  /* 10f259dc cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f259de mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10f259e1 jae 0x10f259fc */
  if (!C.cf) goto L_10f259fc;
L_10f259e3:;
  /* 10f259e3 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10f259e6 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10f259e8 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10f259eb and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10f259ed or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10f259ef jne 0x10f259fc */
  if (!C.zf) goto L_10f259fc;
  /* 10f259f1 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f259f4 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f259f7 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10f259fa jb 0x10f259e3 */
  if (C.cf) goto L_10f259e3;
L_10f259fc:;
  /* 10f259fc cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f259ff jne 0x10f25a7a */
  if (!C.zf) goto L_10f25a7a;
  /* 10f25a01 mov ebx, edx */
  EBX = (EDX);
L_10f25a03:;
  /* 10f25a03 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25a05 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10f25a08 jae 0x10f25a1f */
  if (!C.cf) goto L_10f25a1f;
  /* 10f25a0a mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10f25a0d mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10f25a0f and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10f25a12 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10f25a14 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10f25a16 jne 0x10f25a1d */
  if (!C.zf) goto L_10f25a1d;
  /* 10f25a18 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25a1b jmp 0x10f25a03 */
  goto L_10f25a03;
L_10f25a1d:;
  /* 10f25a1d cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10f25a1f:;
  /* 10f25a1f jne 0x10f25a7a */
  if (!C.zf) goto L_10f25a7a;
L_10f25a21:;
  /* 10f25a21 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25a24 jae 0x10f25a37 */
  if (!C.cf) goto L_10f25a37;
  /* 10f25a26 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25a2a jne 0x10f25a34 */
  if (!C.zf) goto L_10f25a34;
  /* 10f25a2c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25a2f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10f25a32 jmp 0x10f25a21 */
  goto L_10f25a21;
L_10f25a34:;
  /* 10f25a34 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10f25a37:;
  /* 10f25a37 jne 0x10f25a5f */
  if (!C.zf) goto L_10f25a5f;
  /* 10f25a39 mov ebx, edx */
  EBX = (EDX);
L_10f25a3b:;
  /* 10f25a3b cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25a3d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10f25a40 jae 0x10f25a4f */
  if (!C.cf) goto L_10f25a4f;
  /* 10f25a42 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25a46 jne 0x10f25a4d */
  if (!C.zf) goto L_10f25a4d;
  /* 10f25a48 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25a4b jmp 0x10f25a3b */
  goto L_10f25a3b;
L_10f25a4d:;
  /* 10f25a4d cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10f25a4f:;
  /* 10f25a4f jne 0x10f25a5f */
  if (!C.zf) goto L_10f25a5f;
  /* 10f25a51 call 0x10f25c8e */
  push32(0x10f25a56u); f_10f25c8e();
  /* 10f25a56 mov ebx, eax */
  EBX = (EAX);
  /* 10f25a58 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f25a5a mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10f25a5d je 0x10f25a73 */
  if (C.zf) goto L_10f25a73;
L_10f25a5f:;
  /* 10f25a5f push ebx */
  push32((uint32_t)(EBX));
  /* 10f25a60 call 0x10f25d3f */
  push32(0x10f25a65u); f_10f25d3f();
  /* 10f25a65 pop ecx */
  ECX = (pop32());
  /* 10f25a66 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10f25a69 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f25a6b mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10f25a6e cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25a71 jne 0x10f25a7a */
  if (!C.zf) goto L_10f25a7a;
L_10f25a73:;
  /* 10f25a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f25a75 jmp 0x10f25c89 */
  goto L_10f25c89;
L_10f25a7a:;
  /* 10f25a7a mov dword ptr [0x10f48fcc], ebx */
  w32((uint32_t)(0x10f48fcc), (EBX));
  /* 10f25a80 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10f25a83 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10f25a85 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25a88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f25a8b je 0x10f25aa1 */
  if (C.zf) goto L_10f25aa1;
  /* 10f25a8d mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10f25a94 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10f25a98 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10f25a9b and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10f25a9d or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10f25a9f jne 0x10f25ad8 */
  if (!C.zf) goto L_10f25ad8;
L_10f25aa1:;
  /* 10f25aa1 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10f25aa7 mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10f25aaa and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10f25aad and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10f25ab0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f25ab4 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10f25ab7 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10f25ab9 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10f25abc jne 0x10f25ad5 */
  if (!C.zf) goto L_10f25ad5;
L_10f25abe:;
  /* 10f25abe mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10f25ac4 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f25ac7 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10f25aca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25acd mov edi, esi */
  EDI = (ESI);
  /* 10f25acf and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10f25ad1 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10f25ad3 je 0x10f25abe */
  if (C.zf) goto L_10f25abe;
L_10f25ad5:;
  /* 10f25ad5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10f25ad8:;
  /* 10f25ad8 mov ecx, edx */
  ECX = (EDX);
  /* 10f25ada xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f25adc imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f25ae2 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10f25ae9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f25aec mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10f25af0 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10f25af2 jne 0x10f25b01 */
  if (!C.zf) goto L_10f25b01;
  /* 10f25af4 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10f25afb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f25afd and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10f25b00 pop edi */
  EDI = (pop32());
L_10f25b01:;
  /* 10f25b01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f25b03 jl 0x10f25b0a */
  if ((C.sf!=C.of)) goto L_10f25b0a;
  /* 10f25b05 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f25b07 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f25b08 jmp 0x10f25b01 */
  goto L_10f25b01;
L_10f25b0a:;
  /* 10f25b0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f25b0d mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10f25b11 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10f25b13 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25b16 mov esi, ecx */
  ESI = (ECX);
  /* 10f25b18 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f25b1b sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10f25b1e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f25b1f cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25b22 jle 0x10f25b27 */
  if ((C.zf||C.sf!=C.of)) goto L_10f25b27;
  /* 10f25b24 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f25b26 pop esi */
  ESI = (pop32());
L_10f25b27:;
  /* 10f25b27 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25b29 je 0x10f25c3c */
  if (C.zf) goto L_10f25c3c;
  /* 10f25b2f mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f25b32 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25b35 jne 0x10f25b98 */
  if (!C.zf) goto L_10f25b98;
  /* 10f25b37 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25b3a jge 0x10f25b67 */
  if ((C.sf==C.of)) goto L_10f25b67;
  /* 10f25b3c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f25b41 mov ecx, edi */
  ECX = (EDI);
  /* 10f25b43 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f25b45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25b48 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10f25b4c not ebx */
  EBX = (~(EBX));
  /* 10f25b4e mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10f25b51 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10f25b55 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10f25b59 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10f25b5b jne 0x10f25b95 */
  if (!C.zf) goto L_10f25b95;
  /* 10f25b5d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25b60 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f25b63 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10f25b65 jmp 0x10f25b98 */
  goto L_10f25b98;
L_10f25b67:;
  /* 10f25b67 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10f25b6a mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f25b6f shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f25b71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25b74 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10f25b78 lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10f25b7f not ebx */
  EBX = (~(EBX));
  /* 10f25b81 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10f25b83 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10f25b85 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10f25b88 jne 0x10f25b95 */
  if (!C.zf) goto L_10f25b95;
  /* 10f25b8a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25b8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f25b90 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f25b93 jmp 0x10f25b98 */
  goto L_10f25b98;
L_10f25b95:;
  /* 10f25b95 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10f25b98:;
  /* 10f25b98 mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f25b9b mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10f25b9e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25ba2 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10f25ba5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f25ba8 mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10f25bab mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10f25bae je 0x10f25c48 */
  if (C.zf) goto L_10f25c48;
  /* 10f25bb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f25bb7 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10f25bbb lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10f25bbe mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10f25bc1 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f25bc4 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f25bc7 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f25bca mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f25bcd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f25bd0 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25bd3 jne 0x10f25c39 */
  if (!C.zf) goto L_10f25c39;
  /* 10f25bd5 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10f25bd9 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25bdc mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10f25bdf jge 0x10f25c0a */
  if ((C.sf==C.of)) goto L_10f25c0a;
  /* 10f25be1 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10f25be3 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25be7 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10f25beb jne 0x10f25bf8 */
  if (!C.zf) goto L_10f25bf8;
  /* 10f25bed mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10f25bf2 mov ecx, esi */
  ECX = (ESI);
  /* 10f25bf4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10f25bf6 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10f25bf8:;
  /* 10f25bf8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10f25bfd mov ecx, esi */
  ECX = (ESI);
  /* 10f25bff shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10f25c01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25c04 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10f25c08 jmp 0x10f25c39 */
  goto L_10f25c39;
L_10f25c0a:;
  /* 10f25c0a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10f25c0c cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25c10 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10f25c14 jne 0x10f25c23 */
  if (!C.zf) goto L_10f25c23;
  /* 10f25c16 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10f25c19 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10f25c1e shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10f25c20 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10f25c23:;
  /* 10f25c23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25c26 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10f25c2d lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10f25c30 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10f25c35 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10f25c37 or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10f25c39:;
  /* 10f25c39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10f25c3c:;
  /* 10f25c3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f25c3e je 0x10f25c4b */
  if (C.zf) goto L_10f25c4b;
  /* 10f25c40 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f25c42 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10f25c46 jmp 0x10f25c4b */
  goto L_10f25c4b;
L_10f25c48:;
  /* 10f25c48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10f25c4b:;
  /* 10f25c4b mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10f25c4e add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25c50 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10f25c53 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f25c55 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10f25c59 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10f25c5c mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10f25c5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f25c60 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10f25c63 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10f25c65 jne 0x10f25c81 */
  if (!C.zf) goto L_10f25c81;
  /* 10f25c67 cmp ebx, dword ptr [0x10f48fd0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10f48fd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25c6d jne 0x10f25c81 */
  if (!C.zf) goto L_10f25c81;
  /* 10f25c6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25c72 cmp ecx, dword ptr [0x10f48fc8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f48fc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25c78 jne 0x10f25c81 */
  if (!C.zf) goto L_10f25c81;
  /* 10f25c7a and dword ptr [0x10f48fd0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10f48fd0)))&(0x0u); w32((uint32_t)(0x10f48fd0), (_r)); fl_logic(_r,32); }
L_10f25c81:;
  /* 10f25c81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25c84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f25c86 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10f25c89:;
  /* 10f25c89 pop edi */
  EDI = (pop32());
  /* 10f25c8a pop esi */
  ESI = (pop32());
  /* 10f25c8b pop ebx */
  EBX = (pop32());
  /* 10f25c8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f25c8d ret  */
  ESPCHK(0x10f25985u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c8e @ 0x10f25c8e (177 bytes, 53 insns) */
void f_10f25c8e(void) {
  FTRACE(0x10f25c8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f25c8e mov eax, dword ptr [0x10f48fd4] */
  EAX = (r32((uint32_t)(0x10f48fd4)));
  /* 10f25c93 mov ecx, dword ptr [0x10f48fc4] */
  ECX = (r32((uint32_t)(0x10f48fc4)));
  /* 10f25c99 push esi */
  push32((uint32_t)(ESI));
  /* 10f25c9a push edi */
  push32((uint32_t)(EDI));
  /* 10f25c9b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f25c9d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25c9f jne 0x10f25cd1 */
  if (!C.zf) goto L_10f25cd1;
  /* 10f25ca1 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10f25ca5 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10f25ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10f25ca9 push dword ptr [0x10f48fd8] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fd8))));
  /* 10f25caf push edi */
  push32((uint32_t)(EDI));
  /* 10f25cb0 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f25cb6 call dword ptr [0x10f2d0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e0))), 0x10f25cbcu);
  /* 10f25cbc cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25cbe je 0x10f25d21 */
  if (C.zf) goto L_10f25d21;
  /* 10f25cc0 add dword ptr [0x10f48fc4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10f48fc4))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10f48fc4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f25cc7 mov dword ptr [0x10f48fd8], eax */
  w32((uint32_t)(0x10f48fd8), (EAX));
  /* 10f25ccc mov eax, dword ptr [0x10f48fd4] */
  EAX = (r32((uint32_t)(0x10f48fd4)));
L_10f25cd1:;
  /* 10f25cd1 mov ecx, dword ptr [0x10f48fd8] */
  ECX = (r32((uint32_t)(0x10f48fd8)));
  /* 10f25cd7 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10f25cdc push 8 */
  push32((uint32_t)(0x8u));
  /* 10f25cde lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10f25ce1 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f25ce7 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10f25cea call dword ptr [0x10f2d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e4))), 0x10f25cf0u);
  /* 10f25cf0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25cf2 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10f25cf5 je 0x10f25d21 */
  if (C.zf) goto L_10f25d21;
  /* 10f25cf7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f25cf9 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10f25cfe push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10f25d03 push edi */
  push32((uint32_t)(EDI));
  /* 10f25d04 call dword ptr [0x10f2d068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d068))), 0x10f25d0au);
  /* 10f25d0a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25d0c mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10f25d0f jne 0x10f25d25 */
  if (!C.zf) goto L_10f25d25;
  /* 10f25d11 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10f25d14 push edi */
  push32((uint32_t)(EDI));
  /* 10f25d15 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f25d1b call dword ptr [0x10f2d0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0c8))), 0x10f25d21u);
L_10f25d21:;
  /* 10f25d21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f25d23 jmp 0x10f25d3c */
  goto L_10f25d3c;
L_10f25d25:;
  /* 10f25d25 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10f25d29 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10f25d2b mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10f25d2e inc dword ptr [0x10f48fd4] */
  { uint32_t _r=(r32((uint32_t)(0x10f48fd4)))+1; w32((uint32_t)(0x10f48fd4), (_r)); fl_inc(_r,32); }
  /* 10f25d34 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f25d37 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f25d3a mov eax, esi */
  EAX = (ESI);
L_10f25d3c:;
  /* 10f25d3c pop edi */
  EDI = (pop32());
  /* 10f25d3d pop esi */
  ESI = (pop32());
  /* 10f25d3e ret  */
  ESPCHK(0x10f25c8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005d3f @ 0x10f25d3f (251 bytes, 85 insns) */
void f_10f25d3f(void) {
  FTRACE(0x10f25d3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f25d3f push ebp */
  push32((uint32_t)(EBP));
  /* 10f25d40 mov ebp, esp */
  EBP = (ESP);
  /* 10f25d42 push ecx */
  push32((uint32_t)(ECX));
  /* 10f25d43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25d46 push ebx */
  push32((uint32_t)(EBX));
  /* 10f25d47 push esi */
  push32((uint32_t)(ESI));
  /* 10f25d48 push edi */
  push32((uint32_t)(EDI));
  /* 10f25d49 mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10f25d4c mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f25d4f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10f25d51:;
  /* 10f25d51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f25d53 jl 0x10f25d5a */
  if ((C.sf!=C.of)) goto L_10f25d5a;
  /* 10f25d55 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f25d57 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f25d58 jmp 0x10f25d51 */
  goto L_10f25d51;
L_10f25d5a:;
  /* 10f25d5a mov eax, ebx */
  EAX = (EBX);
  /* 10f25d5c push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f25d5e imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f25d64 pop edx */
  EDX = (pop32());
  /* 10f25d65 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10f25d6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f25d6f:;
  /* 10f25d6f mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10f25d72 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10f25d75 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25d78 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f25d79 jne 0x10f25d6f */
  if (!C.zf) goto L_10f25d6f;
  /* 10f25d7b mov edi, ebx */
  EDI = (EBX);
  /* 10f25d7d push 4 */
  push32((uint32_t)(0x4u));
  /* 10f25d7f shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10f25d82 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25d85 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f25d8a push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f25d8f push edi */
  push32((uint32_t)(EDI));
  /* 10f25d90 call dword ptr [0x10f2d068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d068))), 0x10f25d96u);
  /* 10f25d96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f25d98 jne 0x10f25da2 */
  if (!C.zf) goto L_10f25da2;
  /* 10f25d9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f25d9d jmp 0x10f25e35 */
  goto L_10f25e35;
L_10f25da2:;
  /* 10f25da2 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10f25da8 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25daa ja 0x10f25de8 */
  if ((!C.cf&&!C.zf)) goto L_10f25de8;
  /* 10f25dac lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10f25daf:;
  /* 10f25daf or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10f25db3 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10f25dba lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10f25dc0 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10f25dc7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f25dc9 lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10f25dcf mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f25dd2 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10f25ddc add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25de1 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10f25de4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25de6 jbe 0x10f25daf */
  if ((C.cf||C.zf)) goto L_10f25daf;
L_10f25de8:;
  /* 10f25de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25deb lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10f25dee add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f25df5 pop edi */
  EDI = (pop32());
  /* 10f25df6 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f25df9 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10f25dfc lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10f25dff mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10f25e02 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f25e05 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10f25e0a mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10f25e11 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10f25e14 mov cl, al */
  CL = (AL);
  /* 10f25e16 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10f25e18 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f25e1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25e1d mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10f25e20 jne 0x10f25e25 */
  if (!C.zf) goto L_10f25e25;
  /* 10f25e22 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10f25e25:;
  /* 10f25e25 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f25e2a mov ecx, ebx */
  ECX = (EBX);
  /* 10f25e2c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f25e2e not edx */
  EDX = (~(EDX));
  /* 10f25e30 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10f25e33 mov eax, ebx */
  EAX = (EBX);
L_10f25e35:;
  /* 10f25e35 pop edi */
  EDI = (pop32());
  /* 10f25e36 pop esi */
  ESI = (pop32());
  /* 10f25e37 pop ebx */
  EBX = (pop32());
  /* 10f25e38 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f25e39 ret  */
  ESPCHK(0x10f25d3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005e3a @ 0x10f25e3a (758 bytes, 259 insns) */
void f_10f25e3a(void) {
  FTRACE(0x10f25e3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f25e3a push ebp */
  push32((uint32_t)(EBP));
  /* 10f25e3b mov ebp, esp */
  EBP = (ESP);
  /* 10f25e3d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25e40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25e43 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f25e46 push ebx */
  push32((uint32_t)(EBX));
  /* 10f25e47 push esi */
  push32((uint32_t)(ESI));
  /* 10f25e48 push edi */
  push32((uint32_t)(EDI));
  /* 10f25e49 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f25e4c mov edx, edi */
  EDX = (EDI);
  /* 10f25e4e lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 10f25e51 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25e54 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f25e57 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10f25e5a shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10f25e5d mov ecx, edx */
  ECX = (EDX);
  /* 10f25e5f imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f25e65 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10f25e6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f25e6f mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 10f25e72 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f25e73 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25e75 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f25e78 mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 10f25e7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10f25e80 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10f25e83 jle 0x10f25fe8 */
  if ((C.zf||C.sf!=C.of)) goto L_10f25fe8;
  /* 10f25e89 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10f25e8c jne 0x10f25fe1 */
  if (!C.zf) goto L_10f25fe1;
  /* 10f25e92 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25e94 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25e96 jg 0x10f25fe1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f25fe1;
  /* 10f25e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25e9f sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f25ea2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f25ea3 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25ea6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f25ea9 jbe 0x10f25eb1 */
  if ((C.cf||C.zf)) goto L_10f25eb1;
  /* 10f25eab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f25ead pop ecx */
  ECX = (pop32());
  /* 10f25eae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f25eb1:;
  /* 10f25eb1 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 10f25eb4 cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25eb7 jne 0x10f25f01 */
  if (!C.zf) goto L_10f25f01;
  /* 10f25eb9 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25ebc jae 0x10f25edd */
  if (!C.cf) goto L_10f25edd;
  /* 10f25ebe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f25ec3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f25ec5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f25ec8 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10f25ecc not ebx */
  EBX = (~(EBX));
  /* 10f25ece and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10f25ed2 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10f25ed4 jne 0x10f25f01 */
  if (!C.zf) goto L_10f25f01;
  /* 10f25ed6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25ed9 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10f25edb jmp 0x10f25f01 */
  goto L_10f25f01;
L_10f25edd:;
  /* 10f25edd add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f25ee0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f25ee5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f25ee7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f25eea lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10f25eee not ebx */
  EBX = (~(EBX));
  /* 10f25ef0 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10f25ef7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10f25ef9 jne 0x10f25f01 */
  if (!C.zf) goto L_10f25f01;
  /* 10f25efb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25efe and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10f25f01:;
  /* 10f25f01 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 10f25f04 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 10f25f07 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 10f25f0a mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 10f25f0d mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 10f25f10 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10f25f13 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f25f16 sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f25f18 add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f25f1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25f1f jle 0x10f25fcf */
  if ((C.zf||C.sf!=C.of)) goto L_10f25fcf;
  /* 10f25f25 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25f28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f25f2b sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10f25f2e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f25f2f lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10f25f33 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25f36 jbe 0x10f25f3b */
  if ((C.cf||C.zf)) goto L_10f25f3b;
  /* 10f25f38 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f25f3a pop edi */
  EDI = (pop32());
L_10f25f3b:;
  /* 10f25f3b mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f25f3e lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 10f25f41 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 10f25f44 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 10f25f47 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 10f25f4a mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f25f4d mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 10f25f50 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 10f25f53 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f25f56 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10f25f59 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f25f5c cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25f5f jne 0x10f25fbd */
  if (!C.zf) goto L_10f25fbd;
  /* 10f25f61 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10f25f65 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f25f68 mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 10f25f6b inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10f25f6d mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10f25f71 jae 0x10f25f94 */
  if (!C.cf) goto L_10f25f94;
  /* 10f25f73 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25f77 jne 0x10f25f87 */
  if (!C.zf) goto L_10f25f87;
  /* 10f25f79 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f25f7e mov ecx, edi */
  ECX = (EDI);
  /* 10f25f80 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f25f82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25f85 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10f25f87:;
  /* 10f25f87 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 10f25f8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f25f90 mov ecx, edi */
  ECX = (EDI);
  /* 10f25f92 jmp 0x10f25fb9 */
  goto L_10f25fb9;
L_10f25f94:;
  /* 10f25f94 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f25f98 jne 0x10f25faa */
  if (!C.zf) goto L_10f25faa;
  /* 10f25f9a lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10f25f9d mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f25fa2 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f25fa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f25fa7 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10f25faa:;
  /* 10f25faa lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 10f25fb1 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10f25fb4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_10f25fb9:;
  /* 10f25fb9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f25fbb or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10f25fbd:;
  /* 10f25fbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f25fc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f25fc3 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 10f25fc7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f25fc9 mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 10f25fcd jmp 0x10f25fd2 */
  goto L_10f25fd2;
L_10f25fcf:;
  /* 10f25fcf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_10f25fd2:;
  /* 10f25fd2 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 10f25fd5 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 10f25fd8 mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 10f25fdc jmp 0x10f26128 */
  goto L_10f26128;
L_10f25fe1:;
  /* 10f25fe1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f25fe3 jmp 0x10f2612b */
  goto L_10f2612b;
L_10f25fe8:;
  /* 10f25fe8 jge 0x10f26128 */
  if ((C.sf==C.of)) goto L_10f26128;
  /* 10f25fee mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f25ff1 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 10f25ff4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10f25ff7 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 10f25ffa lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 10f25ffe mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f26001 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 10f26004 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10f26007 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f26008 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 10f2600b cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2600e jbe 0x10f26013 */
  if ((C.cf||C.zf)) goto L_10f26013;
  /* 10f26010 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f26012 pop esi */
  ESI = (pop32());
L_10f26013:;
  /* 10f26013 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10f26017 jne 0x10f260a2 */
  if (!C.zf) goto L_10f260a2;
  /* 10f2601d mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 10f26020 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10f26023 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f26024 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26027 jbe 0x10f2602c */
  if ((C.cf||C.zf)) goto L_10f2602c;
  /* 10f26029 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f2602b pop esi */
  ESI = (pop32());
L_10f2602c:;
  /* 10f2602c mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 10f2602f cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26032 jne 0x10f2607b */
  if (!C.zf) goto L_10f2607b;
  /* 10f26034 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26037 jae 0x10f26057 */
  if (!C.cf) goto L_10f26057;
  /* 10f26039 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f2603e mov ecx, esi */
  ECX = (ESI);
  /* 10f26040 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f26042 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 10f26046 not ebx */
  EBX = (~(EBX));
  /* 10f26048 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10f2604c dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 10f2604e jne 0x10f26078 */
  if (!C.zf) goto L_10f26078;
  /* 10f26050 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26053 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10f26055 jmp 0x10f26078 */
  goto L_10f26078;
L_10f26057:;
  /* 10f26057 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10f2605a mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10f2605f shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10f26061 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 10f26065 not ebx */
  EBX = (~(EBX));
  /* 10f26067 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10f2606e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10f26070 jne 0x10f26078 */
  if (!C.zf) goto L_10f26078;
  /* 10f26072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26075 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10f26078:;
  /* 10f26078 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_10f2607b:;
  /* 10f2607b mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 10f2607e mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 10f26081 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 10f26084 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 10f26087 mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 10f2608a mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 10f2608d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f26090 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26093 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 10f26096 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10f26099 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f2609a cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2609d jbe 0x10f260a2 */
  if ((C.cf||C.zf)) goto L_10f260a2;
  /* 10f2609f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f260a1 pop esi */
  ESI = (pop32());
L_10f260a2:;
  /* 10f260a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f260a5 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10f260a9 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10f260ac mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 10f260af mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10f260b2 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 10f260b5 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10f260b8 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 10f260bb mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10f260be cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f260c1 jne 0x10f2611f */
  if (!C.zf) goto L_10f2611f;
  /* 10f260c3 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10f260c7 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f260ca mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10f260cd inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10f260cf mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10f260d3 jae 0x10f260f6 */
  if (!C.cf) goto L_10f260f6;
  /* 10f260d5 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f260d9 jne 0x10f260e9 */
  if (!C.zf) goto L_10f260e9;
  /* 10f260db mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10f260e0 mov ecx, esi */
  ECX = (ESI);
  /* 10f260e2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10f260e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f260e7 or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10f260e9:;
  /* 10f260e9 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 10f260ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f260f2 mov ecx, esi */
  ECX = (ESI);
  /* 10f260f4 jmp 0x10f2611b */
  goto L_10f2611b;
L_10f260f6:;
  /* 10f260f6 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f260fa jne 0x10f2610c */
  if (!C.zf) goto L_10f2610c;
  /* 10f260fc lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10f260ff mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10f26104 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10f26106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26109 or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10f2610c:;
  /* 10f2610c lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 10f26113 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10f26116 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_10f2611b:;
  /* 10f2611b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f2611d or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10f2611f:;
  /* 10f2611f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f26122 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 10f26124 mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_10f26128:;
  /* 10f26128 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2612a pop eax */
  EAX = (pop32());
L_10f2612b:;
  /* 10f2612b pop edi */
  EDI = (pop32());
  /* 10f2612c pop esi */
  ESI = (pop32());
  /* 10f2612d pop ebx */
  EBX = (pop32());
  /* 10f2612e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2612f ret  */
  ESPCHK(0x10f25e3au, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x10f26130 (324 bytes, 102 insns) */
void f_10f26130(void) {
  FTRACE(0x10f26130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26130 cmp dword ptr [0x10f2f668], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10f2f668))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26137 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26138 push ebp */
  push32((uint32_t)(EBP));
  /* 10f26139 push esi */
  push32((uint32_t)(ESI));
  /* 10f2613a push edi */
  push32((uint32_t)(EDI));
  /* 10f2613b jne 0x10f26144 */
  if (!C.zf) goto L_10f26144;
  /* 10f2613d mov esi, 0x10f2f658 */
  ESI = (0x10f2f658u);
  /* 10f26142 jmp 0x10f26161 */
  goto L_10f26161;
L_10f26144:;
  /* 10f26144 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 10f26149 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2614b push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f26151 call dword ptr [0x10f2d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e4))), 0x10f26157u);
  /* 10f26157 mov esi, eax */
  ESI = (EAX);
  /* 10f26159 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f2615b je 0x10f2626d */
  if (C.zf) goto L_10f2626d;
L_10f26161:;
  /* 10f26161 mov ebp, dword ptr [0x10f2d068] */
  EBP = (r32((uint32_t)(0x10f2d068)));
  /* 10f26167 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f26169 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10f2616e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 10f26173 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26175 call ebp */
  call_ind((uint32_t)(EBP), 0x10f26177u);
  /* 10f26177 mov edi, eax */
  EDI = (EAX);
  /* 10f26179 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f2617b je 0x10f26256 */
  if (C.zf) goto L_10f26256;
  /* 10f26181 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f26183 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 10f26188 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f2618d push ebx */
  push32((uint32_t)(EBX));
  /* 10f2618e push edi */
  push32((uint32_t)(EDI));
  /* 10f2618f call ebp */
  call_ind((uint32_t)(EBP), 0x10f26191u);
  /* 10f26191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f26193 je 0x10f26248 */
  if (C.zf) goto L_10f26248;
  /* 10f26199 mov eax, 0x10f2f658 */
  EAX = (0x10f2f658u);
  /* 10f2619e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f261a0 jne 0x10f261c0 */
  if (!C.zf) goto L_10f261c0;
  /* 10f261a2 cmp dword ptr [0x10f2f658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f2f658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f261a9 jne 0x10f261b0 */
  if (!C.zf) goto L_10f261b0;
  /* 10f261ab mov dword ptr [0x10f2f658], eax */
  w32((uint32_t)(0x10f2f658), (EAX));
L_10f261b0:;
  /* 10f261b0 cmp dword ptr [0x10f2f65c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f2f65c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f261b7 jne 0x10f261d5 */
  if (!C.zf) goto L_10f261d5;
  /* 10f261b9 mov dword ptr [0x10f2f65c], eax */
  w32((uint32_t)(0x10f2f65c), (EAX));
  /* 10f261be jmp 0x10f261d5 */
  goto L_10f261d5;
L_10f261c0:;
  /* 10f261c0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f261c2 mov eax, dword ptr [0x10f2f65c] */
  EAX = (r32((uint32_t)(0x10f2f65c)));
  /* 10f261c7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10f261ca mov dword ptr [0x10f2f65c], esi */
  w32((uint32_t)(0x10f2f65c), (ESI));
  /* 10f261d0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f261d3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_10f261d5:;
  /* 10f261d5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 10f261db lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 10f261e1 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 10f261e4 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 10f261e7 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 10f261ea mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 10f261ed mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10f261f0 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 10f261f2 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_10f261f7:;
  /* 10f261f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f261f9 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f261fc setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 10f261ff dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f26200 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f26202 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f26203 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10f26204 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f26206 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f26209 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2620c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26212 jl 0x10f261f7 */
  if ((C.sf!=C.of)) goto L_10f261f7;
  /* 10f26214 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26215 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26217 push edi */
  push32((uint32_t)(EDI));
  /* 10f26218 call 0x10f27460 */
  push32(0x10f2621du); f_10f27460();
  /* 10f2621d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f26220:;
  /* 10f26220 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f26223 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26225 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26227 jae 0x10f26244 */
  if (!C.cf) goto L_10f26244;
  /* 10f26229 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 10f26230 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 10f26233 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10f26235 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 10f2623c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26242 jmp 0x10f26220 */
  goto L_10f26220;
L_10f26244:;
  /* 10f26244 mov eax, esi */
  EAX = (ESI);
  /* 10f26246 jmp 0x10f2626f */
  goto L_10f2626f;
L_10f26248:;
  /* 10f26248 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f2624d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2624f push edi */
  push32((uint32_t)(EDI));
  /* 10f26250 call dword ptr [0x10f2d070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d070))), 0x10f26256u);
L_10f26256:;
  /* 10f26256 cmp esi, 0x10f2f658 */
  { uint32_t _a=(ESI),_b=(0x10f2f658u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2625c je 0x10f2626d */
  if (C.zf) goto L_10f2626d;
  /* 10f2625e push esi */
  push32((uint32_t)(ESI));
  /* 10f2625f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26261 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f26267 call dword ptr [0x10f2d0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0c8))), 0x10f2626du);
L_10f2626d:;
  /* 10f2626d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2626f:;
  /* 10f2626f pop edi */
  EDI = (pop32());
  /* 10f26270 pop esi */
  ESI = (pop32());
  /* 10f26271 pop ebp */
  EBP = (pop32());
  /* 10f26272 pop ebx */
  EBX = (pop32());
  /* 10f26273 ret  */
  ESPCHK(0x10f26130u, _esp0);
  ESP += 4; return;
}

/* FUN_10006274 @ 0x10f26274 (86 bytes, 27 insns) */
void f_10f26274(void) {
  FTRACE(0x10f26274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26274 push esi */
  push32((uint32_t)(ESI));
  /* 10f26275 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26279 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f2627e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26280 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10f26283 call dword ptr [0x10f2d070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d070))), 0x10f26289u);
  /* 10f26289 cmp dword ptr [0x10f31678], esi */
  { uint32_t _a=(r32((uint32_t)(0x10f31678))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2628f jne 0x10f26299 */
  if (!C.zf) goto L_10f26299;
  /* 10f26291 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f26294 mov dword ptr [0x10f31678], eax */
  w32((uint32_t)(0x10f31678), (EAX));
L_10f26299:;
  /* 10f26299 cmp esi, 0x10f2f658 */
  { uint32_t _a=(ESI),_b=(0x10f2f658u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2629f je 0x10f262c1 */
  if (C.zf) goto L_10f262c1;
  /* 10f262a1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f262a4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10f262a6 push esi */
  push32((uint32_t)(ESI));
  /* 10f262a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f262a9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f262ab mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f262ad mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 10f262b0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f262b3 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f262b9 call dword ptr [0x10f2d0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0c8))), 0x10f262bfu);
  /* 10f262bf pop esi */
  ESI = (pop32());
  /* 10f262c0 ret  */
  ESPCHK(0x10f26274u, _esp0);
  ESP += 4; return;
L_10f262c1:;
  /* 10f262c1 or dword ptr [0x10f2f668], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10f2f668)))|(0xffffffffu); w32((uint32_t)(0x10f2f668), (_r)); fl_logic(_r,32); }
  /* 10f262c8 pop esi */
  ESI = (pop32());
  /* 10f262c9 ret  */
  ESPCHK(0x10f26274u, _esp0);
  ESP += 4; return;
}

/* FUN_100062ca @ 0x10f262ca (194 bytes, 66 insns) */
void f_10f262ca(void) {
  FTRACE(0x10f262cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f262ca push ebp */
  push32((uint32_t)(EBP));
  /* 10f262cb mov ebp, esp */
  EBP = (ESP);
  /* 10f262cd push ecx */
  push32((uint32_t)(ECX));
  /* 10f262ce push ebx */
  push32((uint32_t)(EBX));
  /* 10f262cf push esi */
  push32((uint32_t)(ESI));
  /* 10f262d0 mov esi, dword ptr [0x10f2f65c] */
  ESI = (r32((uint32_t)(0x10f2f65c)));
  /* 10f262d6 push edi */
  push32((uint32_t)(EDI));
L_10f262d7:;
  /* 10f262d7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f262db je 0x10f26375 */
  if (C.zf) goto L_10f26375;
  /* 10f262e1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f262e5 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 10f262eb mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_10f262f0:;
  /* 10f262f0 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f262f6 jne 0x10f26331 */
  if (!C.zf) goto L_10f26331;
  /* 10f262f8 mov eax, ebx */
  EAX = (EBX);
  /* 10f262fa push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10f262ff add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26302 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f26307 push eax */
  push32((uint32_t)(EAX));
  /* 10f26308 call dword ptr [0x10f2d070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d070))), 0x10f2630eu);
  /* 10f2630e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f26310 je 0x10f26331 */
  if (C.zf) goto L_10f26331;
  /* 10f26312 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 10f26315 dec dword ptr [0x10f47b20] */
  { uint32_t _r=(r32((uint32_t)(0x10f47b20)))-1; w32((uint32_t)(0x10f47b20), (_r)); fl_dec(_r,32); }
  /* 10f2631b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10f2631e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f26320 je 0x10f26326 */
  if (C.zf) goto L_10f26326;
  /* 10f26322 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26324 jbe 0x10f26329 */
  if ((C.cf||C.zf)) goto L_10f26329;
L_10f26326:;
  /* 10f26326 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_10f26329:;
  /* 10f26329 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f2632c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 10f2632f je 0x10f2633e */
  if (C.zf) goto L_10f2633e;
L_10f26331:;
  /* 10f26331 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26337 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2633a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f2633c jge 0x10f262f0 */
  if ((C.sf==C.of)) goto L_10f262f0;
L_10f2633e:;
  /* 10f2633e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26342 mov ecx, esi */
  ECX = (ESI);
  /* 10f26344 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 10f26347 je 0x10f26375 */
  if (C.zf) goto L_10f26375;
  /* 10f26349 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2634d jne 0x10f26375 */
  if (!C.zf) goto L_10f26375;
  /* 10f2634f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26351 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 10f26354 pop edx */
  EDX = (pop32());
L_10f26355:;
  /* 10f26355 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26358 jne 0x10f26366 */
  if (!C.zf) goto L_10f26366;
  /* 10f2635a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f2635b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2635e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26364 jl 0x10f26355 */
  if ((C.sf!=C.of)) goto L_10f26355;
L_10f26366:;
  /* 10f26366 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2636c jne 0x10f26375 */
  if (!C.zf) goto L_10f26375;
  /* 10f2636e push ecx */
  push32((uint32_t)(ECX));
  /* 10f2636f call 0x10f26274 */
  push32(0x10f26374u); f_10f26274();
  /* 10f26374 pop ecx */
  ECX = (pop32());
L_10f26375:;
  /* 10f26375 cmp esi, dword ptr [0x10f2f65c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f2f65c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2637b je 0x10f26387 */
  if (C.zf) goto L_10f26387;
  /* 10f2637d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26381 jg 0x10f262d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f262d7;
L_10f26387:;
  /* 10f26387 pop edi */
  EDI = (pop32());
  /* 10f26388 pop esi */
  ESI = (pop32());
  /* 10f26389 pop ebx */
  EBX = (pop32());
  /* 10f2638a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2638b ret  */
  ESPCHK(0x10f262cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000638c @ 0x10f2638c (87 bytes, 34 insns) */
void f_10f2638c(void) {
  FTRACE(0x10f2638cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2638c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f26390 mov edx, 0x10f2f658 */
  EDX = (0x10f2f658u);
  /* 10f26395 push esi */
  push32((uint32_t)(ESI));
  /* 10f26396 mov ecx, edx */
  ECX = (EDX);
L_10f26398:;
  /* 10f26398 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2639b jbe 0x10f263a2 */
  if ((C.cf||C.zf)) goto L_10f263a2;
  /* 10f2639d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f263a0 jb 0x10f263aa */
  if (C.cf) goto L_10f263aa;
L_10f263a2:;
  /* 10f263a2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10f263a4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f263a6 je 0x10f263df */
  if (C.zf) goto L_10f263df;
  /* 10f263a8 jmp 0x10f26398 */
  goto L_10f26398;
L_10f263aa:;
  /* 10f263aa test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 10f263ac jne 0x10f263df */
  if (!C.zf) goto L_10f263df;
  /* 10f263ae mov esi, eax */
  ESI = (EAX);
  /* 10f263b0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 10f263b5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 10f263bb cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f263bd jb 0x10f263df */
  if (C.cf) goto L_10f263df;
  /* 10f263bf mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10f263c3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10f263c5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f263c9 mov ecx, eax */
  ECX = (EAX);
  /* 10f263cb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 10f263d0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f263d2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10f263d4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f263d6 pop esi */
  ESI = (pop32());
  /* 10f263d7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f263da lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 10f263de ret  */
  ESPCHK(0x10f2638cu, _esp0);
  ESP += 4; return;
L_10f263df:;
  /* 10f263df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f263e1 pop esi */
  ESI = (pop32());
  /* 10f263e2 ret  */
  ESPCHK(0x10f2638cu, _esp0);
  ESP += 4; return;
}

/* FUN_100063e3 @ 0x10f263e3 (69 bytes, 19 insns) */
void f_10f263e3(void) {
  FTRACE(0x10f263e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f263e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f263e7 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f263eb sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f263ee sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 10f263f1 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 10f263f5 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f263f9 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10f263fc add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f263fe and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 10f26401 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26407 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 10f2640e jne 0x10f26427 */
  if (!C.zf) goto L_10f26427;
  /* 10f26410 inc dword ptr [0x10f47b20] */
  { uint32_t _r=(r32((uint32_t)(0x10f47b20)))+1; w32((uint32_t)(0x10f47b20), (_r)); fl_inc(_r,32); }
  /* 10f26416 cmp dword ptr [0x10f47b20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10f47b20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2641d jne 0x10f26427 */
  if (!C.zf) goto L_10f26427;
  /* 10f2641f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f26421 call 0x10f262ca */
  push32(0x10f26426u); f_10f262ca();
  /* 10f26426 pop ecx */
  ECX = (pop32());
L_10f26427:;
  /* 10f26427 ret  */
  ESPCHK(0x10f263e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006428 @ 0x10f26428 (520 bytes, 180 insns) */
void f_10f26428(void) {
  FTRACE(0x10f26428u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26428 push ebp */
  push32((uint32_t)(EBP));
  /* 10f26429 mov ebp, esp */
  EBP = (ESP);
  /* 10f2642b push ecx */
  push32((uint32_t)(ECX));
  /* 10f2642c push ecx */
  push32((uint32_t)(ECX));
  /* 10f2642d push ebx */
  push32((uint32_t)(EBX));
  /* 10f2642e push esi */
  push32((uint32_t)(ESI));
  /* 10f2642f mov esi, dword ptr [0x10f31678] */
  ESI = (r32((uint32_t)(0x10f31678)));
  /* 10f26435 push edi */
  push32((uint32_t)(EDI));
L_10f26436:;
  /* 10f26436 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f26439 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2643c je 0x10f264e1 */
  if (C.zf) goto L_10f264e1;
  /* 10f26442 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 10f26445 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 10f2644b mov eax, edi */
  EAX = (EDI);
  /* 10f2644d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2644f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26452 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10f26455 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 10f26458 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2645a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2645c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f2645f jae 0x10f2649b */
  if (!C.cf) goto L_10f2649b;
L_10f26461:;
  /* 10f26461 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 10f26463 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26466 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26468 jl 0x10f26484 */
  if ((C.sf!=C.of)) goto L_10f26484;
  /* 10f2646a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2646d jbe 0x10f26484 */
  if ((C.cf||C.zf)) goto L_10f26484;
  /* 10f2646f push ebx */
  push32((uint32_t)(EBX));
  /* 10f26470 push ecx */
  push32((uint32_t)(ECX));
  /* 10f26471 push eax */
  push32((uint32_t)(EAX));
  /* 10f26472 call 0x10f26630 */
  push32(0x10f26477u); f_10f26630();
  /* 10f26477 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2647a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2647c jne 0x10f264f3 */
  if (!C.zf) goto L_10f264f3;
  /* 10f2647e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f26481 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_10f26484:;
  /* 10f26484 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26487 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 10f2648d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26492 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26494 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f26497 jb 0x10f26461 */
  if (C.cf) goto L_10f26461;
  /* 10f26499 jmp 0x10f2649e */
  goto L_10f2649e;
L_10f2649b:;
  /* 10f2649b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10f2649e:;
  /* 10f2649e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10f264a1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 10f264a4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 10f264a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f264aa cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f264ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f264af jae 0x10f264e4 */
  if (!C.cf) goto L_10f264e4;
L_10f264b1:;
  /* 10f264b1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f264b3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f264b5 jl 0x10f264d0 */
  if ((C.sf!=C.of)) goto L_10f264d0;
  /* 10f264b7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f264ba jbe 0x10f264d0 */
  if ((C.cf||C.zf)) goto L_10f264d0;
  /* 10f264bc push ebx */
  push32((uint32_t)(EBX));
  /* 10f264bd push eax */
  push32((uint32_t)(EAX));
  /* 10f264be push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10f264c1 call 0x10f26630 */
  push32(0x10f264c6u); f_10f26630();
  /* 10f264c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f264c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f264cb jne 0x10f264f3 */
  if (!C.zf) goto L_10f264f3;
  /* 10f264cd mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_10f264d0:;
  /* 10f264d0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f264d7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f264da cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f264dd jb 0x10f264b1 */
  if (C.cf) goto L_10f264b1;
  /* 10f264df jmp 0x10f264e4 */
  goto L_10f264e4;
L_10f264e1:;
  /* 10f264e1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10f264e4:;
  /* 10f264e4 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 10f264e6 cmp esi, dword ptr [0x10f31678] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f31678))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f264ec je 0x10f26503 */
  if (C.zf) goto L_10f26503;
  /* 10f264ee jmp 0x10f26436 */
  goto L_10f26436;
L_10f264f3:;
  /* 10f264f3 mov dword ptr [0x10f31678], esi */
  w32((uint32_t)(0x10f31678), (ESI));
  /* 10f264f9 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 10f264fb mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 10f264fe jmp 0x10f2662b */
  goto L_10f2662b;
L_10f26503:;
  /* 10f26503 mov eax, 0x10f2f658 */
  EAX = (0x10f2f658u);
  /* 10f26508 mov edi, eax */
  EDI = (EAX);
L_10f2650a:;
  /* 10f2650a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2650e je 0x10f26516 */
  if (C.zf) goto L_10f26516;
  /* 10f26510 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26514 jne 0x10f26522 */
  if (!C.zf) goto L_10f26522;
L_10f26516:;
  /* 10f26516 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 10f26518 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2651a je 0x10f265f7 */
  if (C.zf) goto L_10f265f7;
  /* 10f26520 jmp 0x10f2650a */
  goto L_10f2650a;
L_10f26522:;
  /* 10f26522 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 10f26525 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f26529 mov esi, ebx */
  ESI = (EBX);
  /* 10f2652b mov eax, ebx */
  EAX = (EBX);
  /* 10f2652d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2652f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26532 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10f26535 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 10f26538 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2653b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2653e jne 0x10f26551 */
  if (!C.zf) goto L_10f26551;
L_10f26540:;
  /* 10f26540 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26544 jge 0x10f26551 */
  if ((C.sf==C.of)) goto L_10f26551;
  /* 10f26546 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26549 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f2654c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2654f je 0x10f26540 */
  if (C.zf) goto L_10f26540;
L_10f26551:;
  /* 10f26551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f26554 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f26556 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 10f26559 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f2655e push eax */
  push32((uint32_t)(EAX));
  /* 10f2655f push esi */
  push32((uint32_t)(ESI));
  /* 10f26560 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f26563 call dword ptr [0x10f2d068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d068))), 0x10f26569u);
  /* 10f26569 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2656b jne 0x10f26629 */
  if (!C.zf) goto L_10f26629;
  /* 10f26571 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26573 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 10f26576 push esi */
  push32((uint32_t)(ESI));
  /* 10f26577 call 0x10f27460 */
  push32(0x10f2657cu); f_10f27460();
  /* 10f2657c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2657f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26582 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f26584 mov ecx, ebx */
  ECX = (EBX);
  /* 10f26586 jle 0x10f265b8 */
  if ((C.zf||C.sf!=C.of)) goto L_10f265b8;
  /* 10f26588 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 10f2658b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f2658e:;
  /* 10f2658e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 10f26595 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 10f26598 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 10f2659b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 10f265a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f265a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f265a4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 10f265ab add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f265b0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f265b3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 10f265b6 jne 0x10f2658e */
  if (!C.zf) goto L_10f2658e;
L_10f265b8:;
  /* 10f265b8 mov dword ptr [0x10f31678], edi */
  w32((uint32_t)(0x10f31678), (EDI));
  /* 10f265be lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_10f265c4:;
  /* 10f265c4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f265c6 jae 0x10f265d4 */
  if (!C.cf) goto L_10f265d4;
  /* 10f265c8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f265cb je 0x10f265d2 */
  if (C.zf) goto L_10f265d2;
  /* 10f265cd add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f265d0 jmp 0x10f265c4 */
  goto L_10f265c4;
L_10f265d2:;
  /* 10f265d2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10f265d4:;
  /* 10f265d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f265d6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 10f265d8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 10f265db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f265de mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 10f265e1 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 10f265e4 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 10f265e6 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 10f265e9 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 10f265ed lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 10f265f3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 10f265f5 jmp 0x10f2662b */
  goto L_10f2662b;
L_10f265f7:;
  /* 10f265f7 call 0x10f26130 */
  push32(0x10f265fcu); f_10f26130();
  /* 10f265fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f265fe je 0x10f26629 */
  if (C.zf) goto L_10f26629;
  /* 10f26600 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f26603 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 10f26606 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 10f2660a mov dword ptr [0x10f31678], eax */
  w32((uint32_t)(0x10f31678), (EAX));
  /* 10f2660f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f26611 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 10f26616 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26618 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f2661b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 10f2661e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 10f26621 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 10f26627 jmp 0x10f2662b */
  goto L_10f2662b;
L_10f26629:;
  /* 10f26629 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2662b:;
  /* 10f2662b pop edi */
  EDI = (pop32());
  /* 10f2662c pop esi */
  ESI = (pop32());
  /* 10f2662d pop ebx */
  EBX = (pop32());
  /* 10f2662e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2662f ret  */
  ESPCHK(0x10f26428u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x10f26630 (292 bytes, 125 insns) */
void f_10f26630(void) {
  FTRACE(0x10f26630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26630 push ebp */
  push32((uint32_t)(EBP));
  /* 10f26631 mov ebp, esp */
  EBP = (ESP);
  /* 10f26633 push ecx */
  push32((uint32_t)(ECX));
  /* 10f26634 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26637 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2663a push ebx */
  push32((uint32_t)(EBX));
  /* 10f2663b push esi */
  push32((uint32_t)(ESI));
  /* 10f2663c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 10f2663f push edi */
  push32((uint32_t)(EDI));
  /* 10f26640 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 10f26642 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 10f26648 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2664a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10f2664d mov eax, edi */
  EAX = (EDI);
  /* 10f2664f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10f26652 jb 0x10f26675 */
  if (C.cf) goto L_10f26675;
  /* 10f26654 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 10f26657 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10f26659 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2665b jae 0x10f26664 */
  if (!C.cf) goto L_10f26664;
  /* 10f2665d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2665f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 10f26662 jmp 0x10f2666d */
  goto L_10f2666d;
L_10f26664:;
  /* 10f26664 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f26668 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 10f2666b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10f2666d:;
  /* 10f2666d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 10f26670 jmp 0x10f26743 */
  goto L_10f26743;
L_10f26675:;
  /* 10f26675 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26677 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2667a je 0x10f2667e */
  if (C.zf) goto L_10f2667e;
  /* 10f2667c mov eax, esi */
  EAX = (ESI);
L_10f2667e:;
  /* 10f2667e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 10f26681 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26683 jae 0x10f266c8 */
  if (!C.cf) goto L_10f266c8;
L_10f26685:;
  /* 10f26685 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10f26687 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 10f26689 jne 0x10f266bb */
  if (!C.zf) goto L_10f266bb;
  /* 10f2668b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2668d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 10f26690 pop esi */
  ESI = (pop32());
L_10f26691:;
  /* 10f26691 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f26694 jne 0x10f2669a */
  if (!C.zf) goto L_10f2669a;
  /* 10f26696 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f26697 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f26698 jmp 0x10f26691 */
  goto L_10f26691;
L_10f2669a:;
  /* 10f2669a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2669c jae 0x10f266ec */
  if (!C.cf) goto L_10f266ec;
  /* 10f2669e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f266a1 jne 0x10f266a8 */
  if (!C.zf) goto L_10f266a8;
  /* 10f266a3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 10f266a6 jmp 0x10f266b4 */
  goto L_10f266b4;
L_10f266a8:;
  /* 10f266a8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 10f266ab cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f266ae jb 0x10f2674d */
  if (C.cf) goto L_10f2674d;
L_10f266b4:;
  /* 10f266b4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 10f266b7 mov eax, ebx */
  EAX = (EBX);
  /* 10f266b9 jmp 0x10f266c0 */
  goto L_10f266c0;
L_10f266bb:;
  /* 10f266bb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 10f266be add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f266c0:;
  /* 10f266c0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 10f266c3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f266c6 jb 0x10f26685 */
  if (C.cf) goto L_10f26685;
L_10f266c8:;
  /* 10f266c8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_10f266cb:;
  /* 10f266cb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f266cd jae 0x10f2674d */
  if (!C.cf) goto L_10f2674d;
  /* 10f266cf lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 10f266d2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f266d5 jae 0x10f2674d */
  if (!C.cf) goto L_10f2674d;
  /* 10f266d7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f266d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f266db jne 0x10f2671d */
  if (!C.zf) goto L_10f2671d;
  /* 10f266dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10f266df lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 10f266e2 pop eax */
  EAX = (pop32());
L_10f266e3:;
  /* 10f266e3 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f266e6 jne 0x10f2670d */
  if (!C.zf) goto L_10f2670d;
  /* 10f266e8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f266e9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f266ea jmp 0x10f266e3 */
  goto L_10f266e3;
L_10f266ec:;
  /* 10f266ec lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 10f266ef cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f266f2 jae 0x10f266fd */
  if (!C.cf) goto L_10f266fd;
  /* 10f266f4 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f266f6 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 10f266f8 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 10f266fb jmp 0x10f26706 */
  goto L_10f26706;
L_10f266fd:;
  /* 10f266fd and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f26701 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 10f26704 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_10f26706:;
  /* 10f26706 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f26708 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2670b jmp 0x10f26743 */
  goto L_10f26743;
L_10f2670d:;
  /* 10f2670d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2670f jae 0x10f26724 */
  if (!C.cf) goto L_10f26724;
  /* 10f26711 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 10f26714 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26717 jb 0x10f2674d */
  if (C.cf) goto L_10f2674d;
  /* 10f26719 mov esi, ebx */
  ESI = (EBX);
  /* 10f2671b jmp 0x10f266cb */
  goto L_10f266cb;
L_10f2671d:;
  /* 10f2671d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10f26720 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26722 jmp 0x10f266cb */
  goto L_10f266cb;
L_10f26724:;
  /* 10f26724 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 10f26727 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2672a jae 0x10f26735 */
  if (!C.cf) goto L_10f26735;
  /* 10f2672c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2672e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 10f26730 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f26733 jmp 0x10f2673e */
  goto L_10f2673e;
L_10f26735:;
  /* 10f26735 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f26739 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 10f2673c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10f2673e:;
  /* 10f2673e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10f26740 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_10f26743:;
  /* 10f26743 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f26746 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f26749 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2674b jmp 0x10f2674f */
  goto L_10f2674f;
L_10f2674d:;
  /* 10f2674d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2674f:;
  /* 10f2674f pop edi */
  EDI = (pop32());
  /* 10f26750 pop esi */
  ESI = (pop32());
  /* 10f26751 pop ebx */
  EBX = (pop32());
  /* 10f26752 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f26753 ret  */
  ESPCHK(0x10f26630u, _esp0);
  ESP += 4; return;
}

/* FUN_10006754 @ 0x10f26754 (169 bytes, 69 insns) */
void f_10f26754(void) {
  FTRACE(0x10f26754u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26754 push ebp */
  push32((uint32_t)(EBP));
  /* 10f26755 mov ebp, esp */
  EBP = (ESP);
  /* 10f26757 push ecx */
  push32((uint32_t)(ECX));
  /* 10f26758 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2675b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2675c mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2675f push esi */
  push32((uint32_t)(ESI));
  /* 10f26760 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10f26763 push edi */
  push32((uint32_t)(EDI));
  /* 10f26764 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26767 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f2676b mov eax, ebx */
  EAX = (EBX);
  /* 10f2676d sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26770 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 10f26773 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26776 lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 10f2677a jbe 0x10f2678e */
  if ((C.cf||C.zf)) goto L_10f2678e;
  /* 10f2677c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f2677f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26781 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10f26783 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f26785 mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 10f2678c jmp 0x10f267ee */
  goto L_10f267ee;
L_10f2678e:;
  /* 10f2678e jae 0x10f267f5 */
  if (!C.cf) goto L_10f267f5;
  /* 10f26790 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f26793 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 10f26796 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 10f2679c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2679e jb 0x10f267f5 */
  if (C.cf) goto L_10f267f5;
  /* 10f267a0 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_10f267a3:;
  /* 10f267a3 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f267a5 jae 0x10f267b1 */
  if (!C.cf) goto L_10f267b1;
  /* 10f267a7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f267aa jne 0x10f267af */
  if (!C.zf) goto L_10f267af;
  /* 10f267ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f267ad jmp 0x10f267a3 */
  goto L_10f267a3;
L_10f267af:;
  /* 10f267af cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10f267b1:;
  /* 10f267b1 jne 0x10f267f5 */
  if (!C.zf) goto L_10f267f5;
  /* 10f267b3 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 10f267b6 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10f267b8 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10f267ba cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f267bc ja 0x10f267e9 */
  if ((!C.cf&&!C.zf)) goto L_10f267e9;
  /* 10f267be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f267c0 jbe 0x10f267e9 */
  if ((C.cf||C.zf)) goto L_10f267e9;
  /* 10f267c2 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 10f267c8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f267ca jae 0x10f267e0 */
  if (!C.cf) goto L_10f267e0;
  /* 10f267cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f267ce mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 10f267d0 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f267d2 jne 0x10f267db */
  if (!C.zf) goto L_10f267db;
L_10f267d4:;
  /* 10f267d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f267d5 cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f267d9 je 0x10f267d4 */
  if (C.zf) goto L_10f267d4;
L_10f267db:;
  /* 10f267db mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10f267de jmp 0x10f267e9 */
  goto L_10f267e9;
L_10f267e0:;
  /* 10f267e0 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f267e4 lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 10f267e7 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_10f267e9:;
  /* 10f267e9 sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f267ec add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_10f267ee:;
  /* 10f267ee mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10f267f5:;
  /* 10f267f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f267f8 pop edi */
  EDI = (pop32());
  /* 10f267f9 pop esi */
  ESI = (pop32());
  /* 10f267fa pop ebx */
  EBX = (pop32());
  /* 10f267fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f267fc ret  */
  ESPCHK(0x10f26754u, _esp0);
  ESP += 4; return;
}

/* FUN_100067fd @ 0x10f267fd (41 bytes, 12 insns) */
void f_10f267fd(void) {
  FTRACE(0x10f267fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f267fd push esi */
  push32((uint32_t)(ESI));
  /* 10f267fe mov esi, dword ptr [0x10f2d060] */
  ESI = (r32((uint32_t)(0x10f2d060)));
  /* 10f26804 push dword ptr [0x10f316c4] */
  push32((uint32_t)(r32((uint32_t)(0x10f316c4))));
  /* 10f2680a call esi */
  call_ind((uint32_t)(ESI), 0x10f2680cu);
  /* 10f2680c push dword ptr [0x10f316b4] */
  push32((uint32_t)(r32((uint32_t)(0x10f316b4))));
  /* 10f26812 call esi */
  call_ind((uint32_t)(ESI), 0x10f26814u);
  /* 10f26814 push dword ptr [0x10f316a4] */
  push32((uint32_t)(r32((uint32_t)(0x10f316a4))));
  /* 10f2681a call esi */
  call_ind((uint32_t)(ESI), 0x10f2681cu);
  /* 10f2681c push dword ptr [0x10f31684] */
  push32((uint32_t)(r32((uint32_t)(0x10f31684))));
  /* 10f26822 call esi */
  call_ind((uint32_t)(ESI), 0x10f26824u);
  /* 10f26824 pop esi */
  ESI = (pop32());
  /* 10f26825 ret  */
  ESPCHK(0x10f267fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10006826 @ 0x10f26826 (108 bytes, 34 insns) */
void f_10f26826(void) {
  FTRACE(0x10f26826u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26826 push esi */
  push32((uint32_t)(ESI));
  /* 10f26827 push edi */
  push32((uint32_t)(EDI));
  /* 10f26828 mov edi, dword ptr [0x10f2d09c] */
  EDI = (r32((uint32_t)(0x10f2d09c)));
  /* 10f2682e mov esi, 0x10f31680 */
  ESI = (0x10f31680u);
L_10f26833:;
  /* 10f26833 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f26835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f26837 je 0x10f26864 */
  if (C.zf) goto L_10f26864;
  /* 10f26839 cmp esi, 0x10f316c4 */
  { uint32_t _a=(ESI),_b=(0x10f316c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2683f je 0x10f26864 */
  if (C.zf) goto L_10f26864;
  /* 10f26841 cmp esi, 0x10f316b4 */
  { uint32_t _a=(ESI),_b=(0x10f316b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26847 je 0x10f26864 */
  if (C.zf) goto L_10f26864;
  /* 10f26849 cmp esi, 0x10f316a4 */
  { uint32_t _a=(ESI),_b=(0x10f316a4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2684f je 0x10f26864 */
  if (C.zf) goto L_10f26864;
  /* 10f26851 cmp esi, 0x10f31684 */
  { uint32_t _a=(ESI),_b=(0x10f31684u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26857 je 0x10f26864 */
  if (C.zf) goto L_10f26864;
  /* 10f26859 push eax */
  push32((uint32_t)(EAX));
  /* 10f2685a call edi */
  call_ind((uint32_t)(EDI), 0x10f2685cu);
  /* 10f2685c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f2685e call 0x10f23e12 */
  push32(0x10f26863u); f_10f23e12();
  /* 10f26863 pop ecx */
  ECX = (pop32());
L_10f26864:;
  /* 10f26864 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26867 cmp esi, 0x10f31740 */
  { uint32_t _a=(ESI),_b=(0x10f31740u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2686d jl 0x10f26833 */
  if ((C.sf!=C.of)) goto L_10f26833;
  /* 10f2686f push dword ptr [0x10f316a4] */
  push32((uint32_t)(r32((uint32_t)(0x10f316a4))));
  /* 10f26875 call edi */
  call_ind((uint32_t)(EDI), 0x10f26877u);
  /* 10f26877 push dword ptr [0x10f316b4] */
  push32((uint32_t)(r32((uint32_t)(0x10f316b4))));
  /* 10f2687d call edi */
  call_ind((uint32_t)(EDI), 0x10f2687fu);
  /* 10f2687f push dword ptr [0x10f316c4] */
  push32((uint32_t)(r32((uint32_t)(0x10f316c4))));
  /* 10f26885 call edi */
  call_ind((uint32_t)(EDI), 0x10f26887u);
  /* 10f26887 push dword ptr [0x10f31684] */
  push32((uint32_t)(r32((uint32_t)(0x10f31684))));
  /* 10f2688d call edi */
  call_ind((uint32_t)(EDI), 0x10f2688fu);
  /* 10f2688f pop edi */
  EDI = (pop32());
  /* 10f26890 pop esi */
  ESI = (pop32());
  /* 10f26891 ret  */
  ESPCHK(0x10f26826u, _esp0);
  ESP += 4; return;
}

/* FUN_10006892 @ 0x10f26892 (97 bytes, 37 insns) */
void f_10f26892(void) {
  FTRACE(0x10f26892u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26892 push ebp */
  push32((uint32_t)(EBP));
  /* 10f26893 mov ebp, esp */
  EBP = (ESP);
  /* 10f26895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26898 push esi */
  push32((uint32_t)(ESI));
  /* 10f26899 cmp dword ptr [eax*4 + 0x10f31680], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10f31680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f268a1 lea esi, [eax*4 + 0x10f31680] */
  ESI = ((uint32_t)(EAX*4 + 0x10f31680));
  /* 10f268a8 jne 0x10f268e8 */
  if (!C.zf) goto L_10f268e8;
  /* 10f268aa push edi */
  push32((uint32_t)(EDI));
  /* 10f268ab push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f268ad call 0x10f248d5 */
  push32(0x10f268b2u); f_10f248d5();
  /* 10f268b2 mov edi, eax */
  EDI = (EAX);
  /* 10f268b4 pop ecx */
  ECX = (pop32());
  /* 10f268b5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f268b7 jne 0x10f268c1 */
  if (!C.zf) goto L_10f268c1;
  /* 10f268b9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f268bb call 0x10f23ddf */
  push32(0x10f268c0u); f_10f23ddf();
  /* 10f268c0 pop ecx */
  ECX = (pop32());
L_10f268c1:;
  /* 10f268c1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f268c3 call 0x10f26892 */
  push32(0x10f268c8u); f_10f26892();
  /* 10f268c8 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f268cb pop ecx */
  ECX = (pop32());
  /* 10f268cc push edi */
  push32((uint32_t)(EDI));
  /* 10f268cd jne 0x10f268d9 */
  if (!C.zf) goto L_10f268d9;
  /* 10f268cf call dword ptr [0x10f2d060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d060))), 0x10f268d5u);
  /* 10f268d5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10f268d7 jmp 0x10f268df */
  goto L_10f268df;
L_10f268d9:;
  /* 10f268d9 call 0x10f23e12 */
  push32(0x10f268deu); f_10f23e12();
  /* 10f268de pop ecx */
  ECX = (pop32());
L_10f268df:;
  /* 10f268df push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f268e1 call 0x10f268f3 */
  push32(0x10f268e6u); f_10f268f3();
  /* 10f268e6 pop ecx */
  ECX = (pop32());
  /* 10f268e7 pop edi */
  EDI = (pop32());
L_10f268e8:;
  /* 10f268e8 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f268ea call dword ptr [0x10f2d05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d05c))), 0x10f268f0u);
  /* 10f268f0 pop esi */
  ESI = (pop32());
  /* 10f268f1 pop ebp */
  EBP = (pop32());
  /* 10f268f2 ret  */
  ESPCHK(0x10f26892u, _esp0);
  ESP += 4; return;
}

/* FUN_100068f3 @ 0x10f268f3 (21 bytes, 7 insns) */
void f_10f268f3(void) {
  FTRACE(0x10f268f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f268f3 push ebp */
  push32((uint32_t)(EBP));
  /* 10f268f4 mov ebp, esp */
  EBP = (ESP);
  /* 10f268f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f268f9 push dword ptr [eax*4 + 0x10f31680] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10f31680))));
  /* 10f26900 call dword ptr [0x10f2d058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d058))), 0x10f26906u);
  /* 10f26906 pop ebp */
  EBP = (pop32());
  /* 10f26907 ret  */
  ESPCHK(0x10f268f3u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10f26908 (32 bytes, 18 insns) */
void f_10f26908(void) {
  FTRACE(0x10f26908u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26908 push ebp */
  push32((uint32_t)(EBP));
  /* 10f26909 mov ebp, esp */
  EBP = (ESP);
  /* 10f2690b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2690c push esi */
  push32((uint32_t)(ESI));
  /* 10f2690d push edi */
  push32((uint32_t)(EDI));
  /* 10f2690e push ebp */
  push32((uint32_t)(EBP));
  /* 10f2690f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26911 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26913 push 0x10f26920 */
  push32((uint32_t)(0x10f26920u));
  /* 10f26918 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2691b call 0x10f2b130 */
  push32(0x10f26920u); f_10f2b130();
  /* 10f26920 pop ebp */
  EBP = (pop32());
  /* 10f26921 pop edi */
  EDI = (pop32());
  /* 10f26922 pop esi */
  ESI = (pop32());
  /* 10f26923 pop ebx */
  EBX = (pop32());
  /* 10f26924 mov esp, ebp */
  ESP = (EBP);
  /* 10f26926 pop ebp */
  EBP = (pop32());
  /* 10f26927 ret  */
  ESPCHK(0x10f26908u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10f2694a (104 bytes, 33 insns) */
void f_10f2694a(void) {
  FTRACE(0x10f2694au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2694a push ebx */
  push32((uint32_t)(EBX));
  /* 10f2694b push esi */
  push32((uint32_t)(ESI));
  /* 10f2694c push edi */
  push32((uint32_t)(EDI));
  /* 10f2694d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f26951 push eax */
  push32((uint32_t)(EAX));
  /* 10f26952 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10f26954 push 0x10f26928 */
  push32((uint32_t)(0x10f26928u));
  /* 10f26959 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10f26960 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10f26967:;
  /* 10f26967 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10f2696b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f2696e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10f26971 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26974 je 0x10f269a4 */
  if (C.zf) goto L_10f269a4;
  /* 10f26976 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2697a je 0x10f269a4 */
  if (C.zf) goto L_10f269a4;
  /* 10f2697c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10f2697f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10f26982 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10f26986 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10f26989 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2698e jne 0x10f269a2 */
  if (!C.zf) goto L_10f269a2;
  /* 10f26990 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10f26995 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10f26999 call 0x10f269de */
  push32(0x10f2699eu); f_10f269de();
  /* 10f2699e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10f269a2u);
L_10f269a2:;
  /* 10f269a2 jmp 0x10f26967 */
  goto L_10f26967;
L_10f269a4:;
  /* 10f269a4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10f269ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f269ae pop edi */
  EDI = (pop32());
  /* 10f269af pop esi */
  ESI = (pop32());
  /* 10f269b0 pop ebx */
  EBX = (pop32());
  /* 10f269b1 ret  */
  ESPCHK(0x10f2694au, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x10f269b2 (35 bytes, 10 insns) */
void f_10f269b2(void) {
  FTRACE(0x10f269b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f269b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f269b4 mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 10f269bb cmp dword ptr [ecx + 4], 0x10f26928 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x10f26928u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f269c2 jne 0x10f269d4 */
  if (!C.zf) goto L_10f269d4;
  /* 10f269c4 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f269c7 mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f269ca cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f269cd jne 0x10f269d4 */
  if (!C.zf) goto L_10f269d4;
  /* 10f269cf mov eax, 1 */
  EAX = (0x1u);
L_10f269d4:;
  /* 10f269d4 ret  */
  ESPCHK(0x10f269b2u, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x10f269d5 (9 bytes, 4 insns) */
void f_10f269d5(void) {
  FTRACE(0x10f269d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f269d5 push ebx */
  push32((uint32_t)(EBX));
  /* 10f269d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f269d7 mov ebx, 0x10f31740 */
  EBX = (0x10f31740u);
  /* 10f269dc jmp 0x10f269e8 */
  jmp_ind(0x10f269e8u); return;
}

/* FUN_100069de @ 0x10f269de (24 bytes, 10 insns) */
void f_10f269de(void) {
  FTRACE(0x10f269deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f269de push ebx */
  push32((uint32_t)(EBX));
  /* 10f269df push ecx */
  push32((uint32_t)(ECX));
  /* 10f269e0 mov ebx, 0x10f31740 */
  EBX = (0x10f31740u);
  /* 10f269e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f269e8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10f269eb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10f269ee mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10f269f1 pop ecx */
  ECX = (pop32());
  /* 10f269f2 pop ebx */
  EBX = (pop32());
  /* 10f269f3 ret 4 */
  ESPCHK(0x10f269deu, _esp0);
  ESP += 8; return;
}

/* FUN_10006abd @ 0x10f26abd (27 bytes, 11 insns) */
void f_10f26abd(void) {
  FTRACE(0x10f26abdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26abd push ebp */
  push32((uint32_t)(EBP));
  /* 10f26abe mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26ac2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10f26ac4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10f26ac7 push eax */
  push32((uint32_t)(EAX));
  /* 10f26ac8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f26acb push eax */
  push32((uint32_t)(EAX));
  /* 10f26acc call 0x10f2694a */
  push32(0x10f26ad1u); f_10f2694a();
  /* 10f26ad1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26ad4 pop ebp */
  EBP = (pop32());
  /* 10f26ad5 ret 4 */
  ESPCHK(0x10f26abdu, _esp0);
  ESP += 8; return;
}

/* FUN_10006ad8 @ 0x10f26ad8 (53 bytes, 25 insns) */
void f_10f26ad8(void) {
  FTRACE(0x10f26ad8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26ad8 push ebp */
  push32((uint32_t)(EBP));
  /* 10f26ad9 mov ebp, esp */
  EBP = (ESP);
  /* 10f26adb push ecx */
  push32((uint32_t)(ECX));
  /* 10f26adc push esi */
  push32((uint32_t)(ESI));
  /* 10f26add wait  */
  /* wait (no observable integer/reg state) */
  /* 10f26ade fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 10f26ae1 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10f26ae4 call 0x10f26b23 */
  push32(0x10f26ae9u); f_10f26b23();
  /* 10f26ae9 mov esi, eax */
  ESI = (EAX);
  /* 10f26aeb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f26aee not eax */
  EAX = (~(EAX));
  /* 10f26af0 and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10f26af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26af5 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10f26af8 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10f26afa push esi */
  push32((uint32_t)(ESI));
  /* 10f26afb call 0x10f26bb5 */
  push32(0x10f26b00u); f_10f26bb5();
  /* 10f26b00 pop ecx */
  ECX = (pop32());
  /* 10f26b01 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f26b04 pop ecx */
  ECX = (pop32());
  /* 10f26b05 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10f26b08 mov eax, esi */
  EAX = (ESI);
  /* 10f26b0a pop esi */
  ESI = (pop32());
  /* 10f26b0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f26b0c ret  */
  ESPCHK(0x10f26ad8u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b0d @ 0x10f26b0d (22 bytes, 8 insns) */
void f_10f26b0d(void) {
  FTRACE(0x10f26b0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26b0d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26b11 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f26b16 push eax */
  push32((uint32_t)(EAX));
  /* 10f26b17 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10f26b1b call 0x10f26ad8 */
  push32(0x10f26b20u); f_10f26ad8();
  /* 10f26b20 pop ecx */
  ECX = (pop32());
  /* 10f26b21 pop ecx */
  ECX = (pop32());
  /* 10f26b22 ret  */
  ESPCHK(0x10f26b0du, _esp0);
  ESP += 4; return;
}

/* FUN_10006b23 @ 0x10f26b23 (146 bytes, 58 insns) */
void f_10f26b23(void) {
  FTRACE(0x10f26b23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26b23 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26b24 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26b28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f26b2a push ebp */
  push32((uint32_t)(EBP));
  /* 10f26b2b test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10f26b2e push edi */
  push32((uint32_t)(EDI));
  /* 10f26b2f je 0x10f26b34 */
  if (C.zf) goto L_10f26b34;
  /* 10f26b31 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f26b33 pop eax */
  EAX = (pop32());
L_10f26b34:;
  /* 10f26b34 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 10f26b37 je 0x10f26b3b */
  if (C.zf) goto L_10f26b3b;
  /* 10f26b39 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10f26b3b:;
  /* 10f26b3b test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10f26b3e je 0x10f26b42 */
  if (C.zf) goto L_10f26b42;
  /* 10f26b40 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10f26b42:;
  /* 10f26b42 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 10f26b45 je 0x10f26b49 */
  if (C.zf) goto L_10f26b49;
  /* 10f26b47 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10f26b49:;
  /* 10f26b49 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 10f26b4c je 0x10f26b50 */
  if (C.zf) goto L_10f26b50;
  /* 10f26b4e or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_10f26b50:;
  /* 10f26b50 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10f26b53 je 0x10f26b5a */
  if (C.zf) goto L_10f26b5a;
  /* 10f26b55 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_10f26b5a:;
  /* 10f26b5a movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 10f26b5d push esi */
  push32((uint32_t)(ESI));
  /* 10f26b5e mov edx, ecx */
  EDX = (ECX);
  /* 10f26b60 mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 10f26b65 mov edi, 0x300 */
  EDI = (0x300u);
  /* 10f26b6a and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10f26b6c mov ebp, 0x200 */
  EBP = (0x200u);
  /* 10f26b71 je 0x10f26b92 */
  if (C.zf) goto L_10f26b92;
  /* 10f26b73 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26b79 je 0x10f26b8f */
  if (C.zf) goto L_10f26b8f;
  /* 10f26b7b cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26b81 je 0x10f26b8b */
  if (C.zf) goto L_10f26b8b;
  /* 10f26b83 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26b85 jne 0x10f26b92 */
  if (!C.zf) goto L_10f26b92;
  /* 10f26b87 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10f26b89 jmp 0x10f26b92 */
  goto L_10f26b92;
L_10f26b8b:;
  /* 10f26b8b or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 10f26b8d jmp 0x10f26b92 */
  goto L_10f26b92;
L_10f26b8f:;
  /* 10f26b8f or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_10f26b92:;
  /* 10f26b92 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10f26b94 pop esi */
  ESI = (pop32());
  /* 10f26b95 je 0x10f26ba2 */
  if (C.zf) goto L_10f26ba2;
  /* 10f26b97 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26b99 jne 0x10f26ba7 */
  if (!C.zf) goto L_10f26ba7;
  /* 10f26b9b or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 10f26ba0 jmp 0x10f26ba7 */
  goto L_10f26ba7;
L_10f26ba2:;
  /* 10f26ba2 or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10f26ba7:;
  /* 10f26ba7 pop edi */
  EDI = (pop32());
  /* 10f26ba8 pop ebp */
  EBP = (pop32());
  /* 10f26ba9 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10f26bac pop ebx */
  EBX = (pop32());
  /* 10f26bad je 0x10f26bb4 */
  if (C.zf) goto L_10f26bb4;
  /* 10f26baf or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10f26bb4:;
  /* 10f26bb4 ret  */
  ESPCHK(0x10f26b23u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb5 @ 0x10f26bb5 (137 bytes, 53 insns) */
void f_10f26bb5(void) {
  FTRACE(0x10f26bb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26bb5 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26bb6 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f26bbc push esi */
  push32((uint32_t)(ESI));
  /* 10f26bbd test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 10f26bc0 je 0x10f26bc5 */
  if (C.zf) goto L_10f26bc5;
  /* 10f26bc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26bc4 pop eax */
  EAX = (pop32());
L_10f26bc5:;
  /* 10f26bc5 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10f26bc8 je 0x10f26bcc */
  if (C.zf) goto L_10f26bcc;
  /* 10f26bca or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10f26bcc:;
  /* 10f26bcc test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 10f26bcf je 0x10f26bd3 */
  if (C.zf) goto L_10f26bd3;
  /* 10f26bd1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10f26bd3:;
  /* 10f26bd3 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10f26bd6 je 0x10f26bda */
  if (C.zf) goto L_10f26bda;
  /* 10f26bd8 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10f26bda:;
  /* 10f26bda test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10f26bdd je 0x10f26be1 */
  if (C.zf) goto L_10f26be1;
  /* 10f26bdf or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_10f26be1:;
  /* 10f26be1 test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10f26be7 je 0x10f26beb */
  if (C.zf) goto L_10f26beb;
  /* 10f26be9 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10f26beb:;
  /* 10f26beb mov ecx, ebx */
  ECX = (EBX);
  /* 10f26bed mov edx, 0x300 */
  EDX = (0x300u);
  /* 10f26bf2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f26bf4 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10f26bf9 je 0x10f26c18 */
  if (C.zf) goto L_10f26c18;
  /* 10f26bfb cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26c01 je 0x10f26c15 */
  if (C.zf) goto L_10f26c15;
  /* 10f26c03 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26c05 je 0x10f26c10 */
  if (C.zf) goto L_10f26c10;
  /* 10f26c07 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26c09 jne 0x10f26c18 */
  if (!C.zf) goto L_10f26c18;
  /* 10f26c0b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 10f26c0e jmp 0x10f26c18 */
  goto L_10f26c18;
L_10f26c10:;
  /* 10f26c10 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 10f26c13 jmp 0x10f26c18 */
  goto L_10f26c18;
L_10f26c15:;
  /* 10f26c15 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_10f26c18:;
  /* 10f26c18 mov ecx, ebx */
  ECX = (EBX);
  /* 10f26c1a and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f26c20 je 0x10f26c2e */
  if (C.zf) goto L_10f26c2e;
  /* 10f26c22 cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26c28 jne 0x10f26c30 */
  if (!C.zf) goto L_10f26c30;
  /* 10f26c2a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10f26c2c jmp 0x10f26c30 */
  goto L_10f26c30;
L_10f26c2e:;
  /* 10f26c2e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_10f26c30:;
  /* 10f26c30 pop esi */
  ESI = (pop32());
  /* 10f26c31 test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 10f26c37 pop ebx */
  EBX = (pop32());
  /* 10f26c38 je 0x10f26c3d */
  if (C.zf) goto L_10f26c3d;
  /* 10f26c3a or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_10f26c3d:;
  /* 10f26c3d ret  */
  ESPCHK(0x10f26bb5u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c3e @ 0x10f26c3e (117 bytes, 46 insns) */
void f_10f26c3e(void) {
  FTRACE(0x10f26c3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26c3e push ebp */
  push32((uint32_t)(EBP));
  /* 10f26c3f mov ebp, esp */
  EBP = (ESP);
  /* 10f26c41 push ecx */
  push32((uint32_t)(ECX));
  /* 10f26c42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26c45 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10f26c48 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26c4e ja 0x10f26c5c */
  if ((!C.cf&&!C.zf)) goto L_10f26c5c;
  /* 10f26c50 mov ecx, dword ptr [0x10f3175c] */
  ECX = (r32((uint32_t)(0x10f3175c)));
  /* 10f26c56 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 10f26c5a jmp 0x10f26cae */
  goto L_10f26cae;
L_10f26c5c:;
  /* 10f26c5c mov ecx, eax */
  ECX = (EAX);
  /* 10f26c5e push esi */
  push32((uint32_t)(ESI));
  /* 10f26c5f mov esi, dword ptr [0x10f3175c] */
  ESI = (r32((uint32_t)(0x10f3175c)));
  /* 10f26c65 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10f26c68 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 10f26c6b test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10f26c70 pop esi */
  ESI = (pop32());
  /* 10f26c71 je 0x10f26c81 */
  if (C.zf) goto L_10f26c81;
  /* 10f26c73 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10f26c77 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10f26c7a mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 10f26c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f26c7f jmp 0x10f26c8a */
  goto L_10f26c8a;
L_10f26c81:;
  /* 10f26c81 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10f26c85 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10f26c88 push 1 */
  push32((uint32_t)(0x1u));
L_10f26c8a:;
  /* 10f26c8a pop eax */
  EAX = (pop32());
  /* 10f26c8b lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 10f26c8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26c94 push ecx */
  push32((uint32_t)(ECX));
  /* 10f26c95 push eax */
  push32((uint32_t)(EAX));
  /* 10f26c96 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10f26c99 push eax */
  push32((uint32_t)(EAX));
  /* 10f26c9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26c9c call 0x10f28d4d */
  push32(0x10f26ca1u); f_10f28d4d();
  /* 10f26ca1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f26ca6 jne 0x10f26caa */
  if (!C.zf) goto L_10f26caa;
  /* 10f26ca8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f26ca9 ret  */
  ESPCHK(0x10f26c3eu, _esp0);
  ESP += 4; return;
L_10f26caa:;
  /* 10f26caa movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_10f26cae:;
  /* 10f26cae and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10f26cb1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f26cb2 ret  */
  ESPCHK(0x10f26c3eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb3 @ 0x10f26cb3 (111 bytes, 44 insns) */
void f_10f26cb3(void) {
  FTRACE(0x10f26cb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26cb3 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26cb4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f26cb6 cmp dword ptr [0x10f47bd0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10f47bd0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26cbc jne 0x10f26cd1 */
  if (!C.zf) goto L_10f26cd1;
  /* 10f26cbe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26cc2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26cc5 jl 0x10f26d20 */
  if ((C.sf!=C.of)) goto L_10f26d20;
  /* 10f26cc7 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26cca jg 0x10f26d20 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f26d20;
  /* 10f26ccc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26ccf pop ebx */
  EBX = (pop32());
  /* 10f26cd0 ret  */
  ESPCHK(0x10f26cb3u, _esp0);
  ESP += 4; return;
L_10f26cd1:;
  /* 10f26cd1 push esi */
  push32((uint32_t)(ESI));
  /* 10f26cd2 mov esi, 0x10f47d70 */
  ESI = (0x10f47d70u);
  /* 10f26cd7 push edi */
  push32((uint32_t)(EDI));
  /* 10f26cd8 push esi */
  push32((uint32_t)(ESI));
  /* 10f26cd9 call dword ptr [0x10f2d04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d04c))), 0x10f26cdfu);
  /* 10f26cdf cmp dword ptr [0x10f47d6c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10f47d6c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26ce5 mov edi, dword ptr [0x10f2d050] */
  EDI = (r32((uint32_t)(0x10f2d050)));
  /* 10f26ceb je 0x10f26cfb */
  if (C.zf) goto L_10f26cfb;
  /* 10f26ced push esi */
  push32((uint32_t)(ESI));
  /* 10f26cee call edi */
  call_ind((uint32_t)(EDI), 0x10f26cf0u);
  /* 10f26cf0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f26cf2 call 0x10f26892 */
  push32(0x10f26cf7u); f_10f26892();
  /* 10f26cf7 pop ecx */
  ECX = (pop32());
  /* 10f26cf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26cfa pop ebx */
  EBX = (pop32());
L_10f26cfb:;
  /* 10f26cfb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10f26cff call 0x10f26d22 */
  push32(0x10f26d04u); f_10f26d22();
  /* 10f26d04 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f26d06 pop ecx */
  ECX = (pop32());
  /* 10f26d07 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10f26d0b je 0x10f26d17 */
  if (C.zf) goto L_10f26d17;
  /* 10f26d0d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f26d0f call 0x10f268f3 */
  push32(0x10f26d14u); f_10f268f3();
  /* 10f26d14 pop ecx */
  ECX = (pop32());
  /* 10f26d15 jmp 0x10f26d1a */
  goto L_10f26d1a;
L_10f26d17:;
  /* 10f26d17 push esi */
  push32((uint32_t)(ESI));
  /* 10f26d18 call edi */
  call_ind((uint32_t)(EDI), 0x10f26d1au);
L_10f26d1a:;
  /* 10f26d1a mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f26d1e pop edi */
  EDI = (pop32());
  /* 10f26d1f pop esi */
  ESI = (pop32());
L_10f26d20:;
  /* 10f26d20 pop ebx */
  EBX = (pop32());
  /* 10f26d21 ret  */
  ESPCHK(0x10f26cb3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d22 @ 0x10f26d22 (203 bytes, 78 insns) */
void f_10f26d22(void) {
  FTRACE(0x10f26d22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26d22 push ebp */
  push32((uint32_t)(EBP));
  /* 10f26d23 mov ebp, esp */
  EBP = (ESP);
  /* 10f26d25 push ecx */
  push32((uint32_t)(ECX));
  /* 10f26d26 cmp dword ptr [0x10f47bd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f47bd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26d2d push ebx */
  push32((uint32_t)(EBX));
  /* 10f26d2e push esi */
  push32((uint32_t)(ESI));
  /* 10f26d2f push edi */
  push32((uint32_t)(EDI));
  /* 10f26d30 jne 0x10f26d4f */
  if (!C.zf) goto L_10f26d4f;
  /* 10f26d32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26d35 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26d38 jl 0x10f26de8 */
  if ((C.sf!=C.of)) goto L_10f26de8;
  /* 10f26d3e cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26d41 jg 0x10f26de8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f26de8;
  /* 10f26d47 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26d4a jmp 0x10f26de8 */
  goto L_10f26de8;
L_10f26d4f:;
  /* 10f26d4f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26d52 mov edi, 0x100 */
  EDI = (0x100u);
  /* 10f26d57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26d59 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26d5b pop esi */
  ESI = (pop32());
  /* 10f26d5c jge 0x10f26d83 */
  if ((C.sf==C.of)) goto L_10f26d83;
  /* 10f26d5e cmp dword ptr [0x10f31750], esi */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26d64 jle 0x10f26d71 */
  if ((C.zf||C.sf!=C.of)) goto L_10f26d71;
  /* 10f26d66 push esi */
  push32((uint32_t)(ESI));
  /* 10f26d67 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26d68 call 0x10f26c3e */
  push32(0x10f26d6du); f_10f26c3e();
  /* 10f26d6d pop ecx */
  ECX = (pop32());
  /* 10f26d6e pop ecx */
  ECX = (pop32());
  /* 10f26d6f jmp 0x10f26d7b */
  goto L_10f26d7b;
L_10f26d71:;
  /* 10f26d71 mov eax, dword ptr [0x10f3175c] */
  EAX = (r32((uint32_t)(0x10f3175c)));
  /* 10f26d76 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10f26d79 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10f26d7b:;
  /* 10f26d7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f26d7d jne 0x10f26d83 */
  if (!C.zf) goto L_10f26d83;
L_10f26d7f:;
  /* 10f26d7f mov eax, ebx */
  EAX = (EBX);
  /* 10f26d81 jmp 0x10f26de8 */
  goto L_10f26de8;
L_10f26d83:;
  /* 10f26d83 mov edx, dword ptr [0x10f3175c] */
  EDX = (r32((uint32_t)(0x10f3175c)));
  /* 10f26d89 mov eax, ebx */
  EAX = (EBX);
  /* 10f26d8b sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f26d8e movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 10f26d91 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10f26d96 je 0x10f26da7 */
  if (C.zf) goto L_10f26da7;
  /* 10f26d98 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10f26d9c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f26d9e mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 10f26da1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10f26da4 pop eax */
  EAX = (pop32());
  /* 10f26da5 jmp 0x10f26db0 */
  goto L_10f26db0;
L_10f26da7:;
  /* 10f26da7 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10f26dab mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 10f26dae mov eax, esi */
  EAX = (ESI);
L_10f26db0:;
  /* 10f26db0 push esi */
  push32((uint32_t)(ESI));
  /* 10f26db1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f26db3 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10f26db6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f26db8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f26db9 push eax */
  push32((uint32_t)(EAX));
  /* 10f26dba lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10f26dbd push eax */
  push32((uint32_t)(EAX));
  /* 10f26dbe push edi */
  push32((uint32_t)(EDI));
  /* 10f26dbf push dword ptr [0x10f47bd0] */
  push32((uint32_t)(r32((uint32_t)(0x10f47bd0))));
  /* 10f26dc5 call 0x10f28e96 */
  push32(0x10f26dcau); f_10f28e96();
  /* 10f26dca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26dcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f26dcf je 0x10f26d7f */
  if (C.zf) goto L_10f26d7f;
  /* 10f26dd1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26dd3 jne 0x10f26ddb */
  if (!C.zf) goto L_10f26ddb;
  /* 10f26dd5 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10f26dd9 jmp 0x10f26de8 */
  goto L_10f26de8;
L_10f26ddb:;
  /* 10f26ddb movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 10f26ddf movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10f26de3 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f26de6 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10f26de8:;
  /* 10f26de8 pop edi */
  EDI = (pop32());
  /* 10f26de9 pop esi */
  ESI = (pop32());
  /* 10f26dea pop ebx */
  EBX = (pop32());
  /* 10f26deb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f26dec ret  */
  ESPCHK(0x10f26d22u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ded @ 0x10f26ded (73 bytes, 36 insns) */
void f_10f26ded(void) {
  FTRACE(0x10f26dedu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26ded mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26df1 push esi */
  push32((uint32_t)(ESI));
  /* 10f26df2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f26df4 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f26df5 pop ecx */
  ECX = (pop32());
  /* 10f26df6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f26df8 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10f26dfa mov esi, eax */
  ESI = (EAX);
  /* 10f26dfc mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f26e00 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f26e01 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f26e03 pop ecx */
  ECX = (pop32());
  /* 10f26e04 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26e08 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26e0a or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f26e0d shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f26e0f not edx */
  EDX = (~(EDX));
  /* 10f26e11 test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 10f26e14 jne 0x10f26e32 */
  if (!C.zf) goto L_10f26e32;
  /* 10f26e16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f26e17 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26e1a jge 0x10f26e2d */
  if ((C.sf==C.of)) goto L_10f26e2d;
  /* 10f26e1c lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_10f26e1f:;
  /* 10f26e1f cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26e22 jne 0x10f26e32 */
  if (!C.zf) goto L_10f26e32;
  /* 10f26e24 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f26e25 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26e28 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26e2b jl 0x10f26e1f */
  if ((C.sf!=C.of)) goto L_10f26e1f;
L_10f26e2d:;
  /* 10f26e2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26e2f pop eax */
  EAX = (pop32());
  /* 10f26e30 pop esi */
  ESI = (pop32());
  /* 10f26e31 ret  */
  ESPCHK(0x10f26dedu, _esp0);
  ESP += 4; return;
L_10f26e32:;
  /* 10f26e32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f26e34 pop esi */
  ESI = (pop32());
  /* 10f26e35 ret  */
  ESPCHK(0x10f26dedu, _esp0);
  ESP += 4; return;
}

/* FUN_10006e36 @ 0x10f26e36 (86 bytes, 43 insns) */
void f_10f26e36(void) {
  FTRACE(0x10f26e36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26e36 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26e3a push ebx */
  push32((uint32_t)(EBX));
  /* 10f26e3b push esi */
  push32((uint32_t)(ESI));
  /* 10f26e3c push edi */
  push32((uint32_t)(EDI));
  /* 10f26e3d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f26e3f mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f26e43 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f26e44 pop ecx */
  ECX = (pop32());
  /* 10f26e45 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f26e47 mov esi, eax */
  ESI = (EAX);
  /* 10f26e49 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f26e4d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f26e4e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f26e50 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 10f26e53 push edi */
  push32((uint32_t)(EDI));
  /* 10f26e54 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10f26e56 pop ecx */
  ECX = (pop32());
  /* 10f26e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26e59 pop eax */
  EAX = (pop32());
  /* 10f26e5a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26e5c shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f26e5e push eax */
  push32((uint32_t)(EAX));
  /* 10f26e5f push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10f26e61 call 0x10f290e5 */
  push32(0x10f26e66u); f_10f290e5();
  /* 10f26e66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26e69 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f26e6a js 0x10f26e88 */
  if (C.sf) goto L_10f26e88;
  /* 10f26e6c lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_10f26e6f:;
  /* 10f26e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f26e71 je 0x10f26e88 */
  if (C.zf) goto L_10f26e88;
  /* 10f26e73 push edi */
  push32((uint32_t)(EDI));
  /* 10f26e74 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26e76 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10f26e78 call 0x10f290e5 */
  push32(0x10f26e7du); f_10f290e5();
  /* 10f26e7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26e80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f26e81 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26e84 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f26e86 jge 0x10f26e6f */
  if ((C.sf==C.of)) goto L_10f26e6f;
L_10f26e88:;
  /* 10f26e88 pop edi */
  EDI = (pop32());
  /* 10f26e89 pop esi */
  ESI = (pop32());
  /* 10f26e8a pop ebx */
  EBX = (pop32());
  /* 10f26e8b ret  */
  ESPCHK(0x10f26e36u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e8c @ 0x10f26e8c (140 bytes, 71 insns) */
void f_10f26e8c(void) {
  FTRACE(0x10f26e8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26e8c push ebp */
  push32((uint32_t)(EBP));
  /* 10f26e8d mov ebp, esp */
  EBP = (ESP);
  /* 10f26e8f push ecx */
  push32((uint32_t)(ECX));
  /* 10f26e90 push ecx */
  push32((uint32_t)(ECX));
  /* 10f26e91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f26e94 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26e95 push esi */
  push32((uint32_t)(ESI));
  /* 10f26e96 push edi */
  push32((uint32_t)(EDI));
  /* 10f26e97 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10f26e9a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f26e9c pop ecx */
  ECX = (pop32());
  /* 10f26e9d and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f26ea1 lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10f26ea4 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f26ea6 mov eax, ebx */
  EAX = (EBX);
  /* 10f26ea8 pop esi */
  ESI = (pop32());
  /* 10f26ea9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f26eaa idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f26eac push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10f26eae mov ecx, eax */
  ECX = (EAX);
  /* 10f26eb0 mov eax, ebx */
  EAX = (EBX);
  /* 10f26eb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f26eb3 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f26eb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26eb8 pop esi */
  ESI = (pop32());
  /* 10f26eb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26ebb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f26ebe lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10f26ec1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f26ec4 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26ec6 pop edx */
  EDX = (pop32());
  /* 10f26ec7 mov ecx, esi */
  ECX = (ESI);
  /* 10f26ec9 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f26ecb test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 10f26ecd je 0x10f26ef0 */
  if (C.zf) goto L_10f26ef0;
  /* 10f26ecf inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f26ed0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26ed1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f26ed4 call 0x10f26ded */
  push32(0x10f26ed9u); f_10f26ded();
  /* 10f26ed9 pop ecx */
  ECX = (pop32());
  /* 10f26eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f26edc pop ecx */
  ECX = (pop32());
  /* 10f26edd jne 0x10f26eed */
  if (!C.zf) goto L_10f26eed;
  /* 10f26edf push edi */
  push32((uint32_t)(EDI));
  /* 10f26ee0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f26ee3 call 0x10f26e36 */
  push32(0x10f26ee8u); f_10f26e36();
  /* 10f26ee8 pop ecx */
  ECX = (pop32());
  /* 10f26ee9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f26eec pop ecx */
  ECX = (pop32());
L_10f26eed:;
  /* 10f26eed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10f26ef0:;
  /* 10f26ef0 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f26ef3 mov ecx, esi */
  ECX = (ESI);
  /* 10f26ef5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f26ef7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f26ef9 pop ecx */
  ECX = (pop32());
  /* 10f26efa and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f26efc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f26eff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f26f00 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26f02 jge 0x10f26f10 */
  if ((C.sf==C.of)) goto L_10f26f10;
  /* 10f26f04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26f07 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26f09 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10f26f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f26f0e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_10f26f10:;
  /* 10f26f10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f26f13 pop edi */
  EDI = (pop32());
  /* 10f26f14 pop esi */
  ESI = (pop32());
  /* 10f26f15 pop ebx */
  EBX = (pop32());
  /* 10f26f16 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f26f17 ret  */
  ESPCHK(0x10f26e8cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006f18 @ 0x10f26f18 (27 bytes, 13 insns) */
void f_10f26f18(void) {
  FTRACE(0x10f26f18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26f18 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26f1c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f26f20 push esi */
  push32((uint32_t)(ESI));
  /* 10f26f21 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f26f23 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26f25 pop edx */
  EDX = (pop32());
L_10f26f26:;
  /* 10f26f26 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 10f26f28 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 10f26f2b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26f2e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f26f2f jne 0x10f26f26 */
  if (!C.zf) goto L_10f26f26;
  /* 10f26f31 pop esi */
  ESI = (pop32());
  /* 10f26f32 ret  */
  ESPCHK(0x10f26f18u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f33 @ 0x10f26f33 (12 bytes, 8 insns) */
void f_10f26f33(void) {
  FTRACE(0x10f26f33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26f33 push edi */
  push32((uint32_t)(EDI));
  /* 10f26f34 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f26f38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f26f3a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10f26f3b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10f26f3c stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10f26f3d pop edi */
  EDI = (pop32());
  /* 10f26f3e ret  */
  ESPCHK(0x10f26f33u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3f @ 0x10f26f3f (27 bytes, 13 insns) */
void f_10f26f3f(void) {
  FTRACE(0x10f26f3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26f3f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f26f43 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_10f26f45:;
  /* 10f26f45 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26f48 jne 0x10f26f57 */
  if (!C.zf) goto L_10f26f57;
  /* 10f26f4a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f26f4b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26f4e cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26f51 jl 0x10f26f45 */
  if ((C.sf!=C.of)) goto L_10f26f45;
  /* 10f26f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f26f55 pop eax */
  EAX = (pop32());
  /* 10f26f56 ret  */
  ESPCHK(0x10f26f3fu, _esp0);
  ESP += 4; return;
L_10f26f57:;
  /* 10f26f57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f26f59 ret  */
  ESPCHK(0x10f26f3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10006f5a @ 0x10f26f5a (141 bytes, 64 insns) */
void f_10f26f5a(void) {
  FTRACE(0x10f26f5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26f5a push ebp */
  push32((uint32_t)(EBP));
  /* 10f26f5b mov ebp, esp */
  EBP = (ESP);
  /* 10f26f5d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26f60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f26f63 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26f64 push esi */
  push32((uint32_t)(ESI));
  /* 10f26f65 push edi */
  push32((uint32_t)(EDI));
  /* 10f26f66 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f26f68 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26f6b pop ebx */
  EBX = (pop32());
  /* 10f26f6c or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10f26f6f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f26f70 mov ecx, ebx */
  ECX = (EBX);
  /* 10f26f72 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10f26f79 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f26f7b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f26f7e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f26f81 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f26f82 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f26f84 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10f26f88 mov ecx, edx */
  ECX = (EDX);
  /* 10f26f8a shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10f26f8c sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26f8e not esi */
  ESI = (~(ESI));
L_10f26f90:;
  /* 10f26f90 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f26f92 mov ecx, eax */
  ECX = (EAX);
  /* 10f26f94 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10f26f96 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f26f99 mov ecx, edx */
  ECX = (EDX);
  /* 10f26f9b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f26f9d or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10f26fa0 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10f26fa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f26fa5 mov ecx, ebx */
  ECX = (EBX);
  /* 10f26fa7 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f26faa shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f26fac dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 10f26faf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f26fb2 jne 0x10f26f90 */
  if (!C.zf) goto L_10f26f90;
  /* 10f26fb4 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10f26fb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f26fb9 pop ebx */
  EBX = (pop32());
  /* 10f26fba mov esi, edi */
  ESI = (EDI);
  /* 10f26fbc push 8 */
  push32((uint32_t)(0x8u));
  /* 10f26fbe pop ecx */
  ECX = (pop32());
  /* 10f26fbf shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_10f26fc2:;
  /* 10f26fc2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f26fc4 jl 0x10f26fd5 */
  if ((C.sf!=C.of)) goto L_10f26fd5;
  /* 10f26fc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26fc9 mov eax, ecx */
  EAX = (ECX);
  /* 10f26fcb sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26fcd mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10f26fd0 mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10f26fd3 jmp 0x10f26fdc */
  goto L_10f26fdc;
L_10f26fd5:;
  /* 10f26fd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26fd8 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10f26fdc:;
  /* 10f26fdc dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f26fdd sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26fe0 jns 0x10f26fc2 */
  if (!C.sf) goto L_10f26fc2;
  /* 10f26fe2 pop edi */
  EDI = (pop32());
  /* 10f26fe3 pop esi */
  ESI = (pop32());
  /* 10f26fe4 pop ebx */
  EBX = (pop32());
  /* 10f26fe5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f26fe6 ret  */
  ESPCHK(0x10f26f5au, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe7 @ 0x10f26fe7 (364 bytes, 138 insns) */
void f_10f26fe7(void) {
  FTRACE(0x10f26fe7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f26fe7 push ebp */
  push32((uint32_t)(EBP));
  /* 10f26fe8 mov ebp, esp */
  EBP = (ESP);
  /* 10f26fea sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f26fed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f26ff0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f26ff1 push esi */
  push32((uint32_t)(ESI));
  /* 10f26ff2 push edi */
  push32((uint32_t)(EDI));
  /* 10f26ff3 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10f26ff7 mov ebx, ecx */
  EBX = (ECX);
  /* 10f26ff9 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f26fff mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10f27002 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10f27005 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f27008 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10f2700b movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 10f2700e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f27011 and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 10f27017 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2701d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f27020 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f27023 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27029 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f2702c jne 0x10f27054 */
  if (!C.zf) goto L_10f27054;
  /* 10f2702e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f27031 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f27033 push eax */
  push32((uint32_t)(EAX));
  /* 10f27034 call 0x10f26f3f */
  push32(0x10f27039u); f_10f26f3f();
  /* 10f27039 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2703b pop ecx */
  ECX = (pop32());
  /* 10f2703c jne 0x10f27113 */
  if (!C.zf) goto L_10f27113;
  /* 10f27042 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f27045 push eax */
  push32((uint32_t)(EAX));
  /* 10f27046 call 0x10f26f33 */
  push32(0x10f2704bu); f_10f26f33();
  /* 10f2704b pop ecx */
  ECX = (pop32());
L_10f2704c:;
  /* 10f2704c push 2 */
  push32((uint32_t)(0x2u));
L_10f2704e:;
  /* 10f2704e pop eax */
  EAX = (pop32());
  /* 10f2704f jmp 0x10f27115 */
  goto L_10f27115;
L_10f27054:;
  /* 10f27054 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f27057 push eax */
  push32((uint32_t)(EAX));
  /* 10f27058 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10f2705b push eax */
  push32((uint32_t)(EAX));
  /* 10f2705c call 0x10f26f18 */
  push32(0x10f27061u); f_10f26f18();
  /* 10f27061 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 10f27064 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f27067 push eax */
  push32((uint32_t)(EAX));
  /* 10f27068 call 0x10f26e8c */
  push32(0x10f2706du); f_10f26e8c();
  /* 10f2706d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f27072 je 0x10f27075 */
  if (C.zf) goto L_10f27075;
  /* 10f27074 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10f27075:;
  /* 10f27075 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10f27078 mov ecx, eax */
  ECX = (EAX);
  /* 10f2707a sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2707d cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2707f jge 0x10f2708d */
  if ((C.sf==C.of)) goto L_10f2708d;
  /* 10f27081 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f27084 push eax */
  push32((uint32_t)(EAX));
  /* 10f27085 call 0x10f26f33 */
  push32(0x10f2708au); f_10f26f33();
  /* 10f2708a pop ecx */
  ECX = (pop32());
  /* 10f2708b jmp 0x10f270c9 */
  goto L_10f270c9;
L_10f2708d:;
  /* 10f2708d cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2708f jg 0x10f270d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f270d0;
  /* 10f27091 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27093 mov esi, eax */
  ESI = (EAX);
  /* 10f27095 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10f27098 push eax */
  push32((uint32_t)(EAX));
  /* 10f27099 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f2709c push eax */
  push32((uint32_t)(EAX));
  /* 10f2709d call 0x10f26f18 */
  push32(0x10f270a2u); f_10f26f18();
  /* 10f270a2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f270a5 push esi */
  push32((uint32_t)(ESI));
  /* 10f270a6 push eax */
  push32((uint32_t)(EAX));
  /* 10f270a7 call 0x10f26f5a */
  push32(0x10f270acu); f_10f26f5a();
  /* 10f270ac push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 10f270af lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f270b2 push eax */
  push32((uint32_t)(EAX));
  /* 10f270b3 call 0x10f26e8c */
  push32(0x10f270b8u); f_10f26e8c();
  /* 10f270b8 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10f270bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f270bc push eax */
  push32((uint32_t)(EAX));
  /* 10f270bd lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f270c0 push eax */
  push32((uint32_t)(EAX));
  /* 10f270c1 call 0x10f26f5a */
  push32(0x10f270c6u); f_10f26f5a();
  /* 10f270c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f270c9:;
  /* 10f270c9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f270cb jmp 0x10f2704c */
  goto L_10f2704c;
L_10f270d0:;
  /* 10f270d0 cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f270d2 jl 0x10f270fc */
  if ((C.sf!=C.of)) goto L_10f270fc;
  /* 10f270d4 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f270d7 push eax */
  push32((uint32_t)(EAX));
  /* 10f270d8 call 0x10f26f33 */
  push32(0x10f270ddu); f_10f26f33();
  /* 10f270dd push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 10f270e0 or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10f270e4 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f270e7 push eax */
  push32((uint32_t)(EAX));
  /* 10f270e8 call 0x10f26f5a */
  push32(0x10f270edu); f_10f26f5a();
  /* 10f270ed mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 10f270f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f270f3 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f270f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f270f7 jmp 0x10f2704e */
  goto L_10f2704e;
L_10f270fc:;
  /* 10f270fc push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 10f270ff mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 10f27102 and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10f27106 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f27109 push eax */
  push32((uint32_t)(EAX));
  /* 10f2710a add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2710c call 0x10f26f5a */
  push32(0x10f27111u); f_10f26f5a();
  /* 10f27111 pop ecx */
  ECX = (pop32());
  /* 10f27112 pop ecx */
  ECX = (pop32());
L_10f27113:;
  /* 10f27113 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f27115:;
  /* 10f27115 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10f27117 pop ecx */
  ECX = (pop32());
  /* 10f27118 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2711b mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 10f2711e shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10f27120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27123 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f27125 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27127 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f2712d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 10f2712f or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10f27132 cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27135 jne 0x10f27144 */
  if (!C.zf) goto L_10f27144;
  /* 10f27137 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2713a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f2713d mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 10f27140 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f27142 jmp 0x10f2714e */
  goto L_10f2714e;
L_10f27144:;
  /* 10f27144 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27147 jne 0x10f2714e */
  if (!C.zf) goto L_10f2714e;
  /* 10f27149 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2714c mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_10f2714e:;
  /* 10f2714e pop edi */
  EDI = (pop32());
  /* 10f2714f pop esi */
  ESI = (pop32());
  /* 10f27150 pop ebx */
  EBX = (pop32());
  /* 10f27151 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27152 ret  */
  ESPCHK(0x10f26fe7u, _esp0);
  ESP += 4; return;
}

/* FUN_10007153 @ 0x10f27153 (22 bytes, 6 insns) */
void f_10f27153(void) {
  FTRACE(0x10f27153u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27153 push 0x10f31968 */
  push32((uint32_t)(0x10f31968u));
  /* 10f27158 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f2715c push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f27160 call 0x10f26fe7 */
  push32(0x10f27165u); f_10f26fe7();
  /* 10f27165 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27168 ret  */
  ESPCHK(0x10f27153u, _esp0);
  ESP += 4; return;
}

/* FUN_10007169 @ 0x10f27169 (22 bytes, 6 insns) */
void f_10f27169(void) {
  FTRACE(0x10f27169u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27169 push 0x10f31980 */
  push32((uint32_t)(0x10f31980u));
  /* 10f2716e push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f27172 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10f27176 call 0x10f26fe7 */
  push32(0x10f2717bu); f_10f26fe7();
  /* 10f2717b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2717e ret  */
  ESPCHK(0x10f27169u, _esp0);
  ESP += 4; return;
}

/* FUN_1000717f @ 0x10f2717f (45 bytes, 21 insns) */
void f_10f2717f(void) {
  FTRACE(0x10f2717fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2717f push ebp */
  push32((uint32_t)(EBP));
  /* 10f27180 mov ebp, esp */
  EBP = (ESP);
  /* 10f27182 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27185 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f27187 push eax */
  push32((uint32_t)(EAX));
  /* 10f27188 push eax */
  push32((uint32_t)(EAX));
  /* 10f27189 push eax */
  push32((uint32_t)(EAX));
  /* 10f2718a push eax */
  push32((uint32_t)(EAX));
  /* 10f2718b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2718e lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10f27191 push eax */
  push32((uint32_t)(EAX));
  /* 10f27192 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f27195 push eax */
  push32((uint32_t)(EAX));
  /* 10f27196 call 0x10f29286 */
  push32(0x10f2719bu); f_10f29286();
  /* 10f2719b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2719e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f271a1 push eax */
  push32((uint32_t)(EAX));
  /* 10f271a2 call 0x10f27153 */
  push32(0x10f271a7u); f_10f27153();
  /* 10f271a7 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f271aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f271ab ret  */
  ESPCHK(0x10f2717fu, _esp0);
  ESP += 4; return;
}

/* FUN_100071ac @ 0x10f271ac (45 bytes, 21 insns) */
void f_10f271ac(void) {
  FTRACE(0x10f271acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f271ac push ebp */
  push32((uint32_t)(EBP));
  /* 10f271ad mov ebp, esp */
  EBP = (ESP);
  /* 10f271af sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f271b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f271b4 push eax */
  push32((uint32_t)(EAX));
  /* 10f271b5 push eax */
  push32((uint32_t)(EAX));
  /* 10f271b6 push eax */
  push32((uint32_t)(EAX));
  /* 10f271b7 push eax */
  push32((uint32_t)(EAX));
  /* 10f271b8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f271bb lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10f271be push eax */
  push32((uint32_t)(EAX));
  /* 10f271bf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f271c2 push eax */
  push32((uint32_t)(EAX));
  /* 10f271c3 call 0x10f29286 */
  push32(0x10f271c8u); f_10f29286();
  /* 10f271c8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f271cb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f271ce push eax */
  push32((uint32_t)(EAX));
  /* 10f271cf call 0x10f27169 */
  push32(0x10f271d4u); f_10f27169();
  /* 10f271d4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f271d7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f271d8 ret  */
  ESPCHK(0x10f271acu, _esp0);
  ESP += 4; return;
}

/* FUN_100071d9 @ 0x10f271d9 (119 bytes, 57 insns) */
void f_10f271d9(void) {
  FTRACE(0x10f271d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f271d9 push ebp */
  push32((uint32_t)(EBP));
  /* 10f271da mov ebp, esp */
  EBP = (ESP);
  /* 10f271dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f271df push ebx */
  push32((uint32_t)(EBX));
  /* 10f271e0 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f271e3 push esi */
  push32((uint32_t)(ESI));
  /* 10f271e4 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f271e7 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f271ea push edi */
  push32((uint32_t)(EDI));
  /* 10f271eb lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 10f271ee mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 10f271f1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f271f3 mov eax, edi */
  EAX = (EDI);
  /* 10f271f5 jle 0x10f27216 */
  if ((C.zf||C.sf!=C.of)) goto L_10f27216;
  /* 10f271f7 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10f271fa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10f271fc:;
  /* 10f271fc mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f271fe test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f27200 je 0x10f27208 */
  if (C.zf) goto L_10f27208;
  /* 10f27202 movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10f27205 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f27206 jmp 0x10f2720b */
  goto L_10f2720b;
L_10f27208:;
  /* 10f27208 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10f2720a pop edx */
  EDX = (pop32());
L_10f2720b:;
  /* 10f2720b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f2720d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2720e dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 10f27211 jne 0x10f271fc */
  if (!C.zf) goto L_10f271fc;
  /* 10f27213 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_10f27216:;
  /* 10f27216 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10f27219 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f2721b jl 0x10f2722f */
  if ((C.sf!=C.of)) goto L_10f2722f;
  /* 10f2721d cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f27220 jl 0x10f2722f */
  if ((C.sf!=C.of)) goto L_10f2722f;
L_10f27222:;
  /* 10f27222 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f27223 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f27226 jne 0x10f2722d */
  if (!C.zf) goto L_10f2722d;
  /* 10f27228 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10f2722b jmp 0x10f27222 */
  goto L_10f27222;
L_10f2722d:;
  /* 10f2722d inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_10f2722f:;
  /* 10f2722f cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f27232 jne 0x10f27239 */
  if (!C.zf) goto L_10f27239;
  /* 10f27234 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 10f27237 jmp 0x10f2724b */
  goto L_10f2724b;
L_10f27239:;
  /* 10f27239 push edi */
  push32((uint32_t)(EDI));
  /* 10f2723a call 0x10f27800 */
  push32(0x10f2723fu); f_10f27800();
  /* 10f2723f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f27240 push eax */
  push32((uint32_t)(EAX));
  /* 10f27241 push edi */
  push32((uint32_t)(EDI));
  /* 10f27242 push esi */
  push32((uint32_t)(ESI));
  /* 10f27243 call 0x10f274c0 */
  push32(0x10f27248u); f_10f274c0();
  /* 10f27248 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2724b:;
  /* 10f2724b pop edi */
  EDI = (pop32());
  /* 10f2724c pop esi */
  ESI = (pop32());
  /* 10f2724d pop ebx */
  EBX = (pop32());
  /* 10f2724e pop ebp */
  EBP = (pop32());
  /* 10f2724f ret  */
  ESPCHK(0x10f271d9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x10f27250 (92 bytes, 41 insns) */
void f_10f27250(void) {
  FTRACE(0x10f27250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27250 push ebp */
  push32((uint32_t)(EBP));
  /* 10f27251 mov ebp, esp */
  EBP = (ESP);
  /* 10f27253 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27256 push esi */
  push32((uint32_t)(ESI));
  /* 10f27257 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10f2725a push edi */
  push32((uint32_t)(EDI));
  /* 10f2725b push eax */
  push32((uint32_t)(EAX));
  /* 10f2725c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f2725f push eax */
  push32((uint32_t)(EAX));
  /* 10f27260 call 0x10f272ac */
  push32(0x10f27265u); f_10f272ac();
  /* 10f27265 pop ecx */
  ECX = (pop32());
  /* 10f27266 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10f27269 pop ecx */
  ECX = (pop32());
  /* 10f2726a lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 10f2726d push eax */
  push32((uint32_t)(EAX));
  /* 10f2726e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f27270 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f27272 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27275 mov edi, esp */
  EDI = (ESP);
  /* 10f27277 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f27278 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f27279 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10f2727b call 0x10f29757 */
  push32(0x10f27280u); f_10f29757();
  /* 10f27280 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f27283 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10f27286 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10f27289 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10f2728d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f2728f movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10f27293 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10f27296 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10f27299 push eax */
  push32((uint32_t)(EAX));
  /* 10f2729a push edi */
  push32((uint32_t)(EDI));
  /* 10f2729b call 0x10f27370 */
  push32(0x10f272a0u); f_10f27370();
  /* 10f272a0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f272a3 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10f272a6 mov eax, esi */
  EAX = (ESI);
  /* 10f272a8 pop edi */
  EDI = (pop32());
  /* 10f272a9 pop esi */
  ESI = (pop32());
  /* 10f272aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f272ab ret  */
  ESPCHK(0x10f27250u, _esp0);
  ESP += 4; return;
}

/* FUN_100072ac @ 0x10f272ac (182 bytes, 70 insns) */
void f_10f272ac(void) {
  FTRACE(0x10f272acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f272ac push ebp */
  push32((uint32_t)(EBP));
  /* 10f272ad mov ebp, esp */
  EBP = (ESP);
  /* 10f272af push ecx */
  push32((uint32_t)(ECX));
  /* 10f272b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f272b3 push ebx */
  push32((uint32_t)(EBX));
  /* 10f272b4 push esi */
  push32((uint32_t)(ESI));
  /* 10f272b5 push edi */
  push32((uint32_t)(EDI));
  /* 10f272b6 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10f272ba mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10f272bf mov ecx, eax */
  ECX = (EAX);
  /* 10f272c1 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10f272c6 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f272c9 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10f272cb mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f272ce mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f272d1 mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10f272d3 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10f272d6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10f272db and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f272e0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f272e2 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10f272e5 je 0x10f272fa */
  if (C.zf) goto L_10f272fa;
  /* 10f272e7 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f272e9 je 0x10f272f3 */
  if (C.zf) goto L_10f272f3;
  /* 10f272eb lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10f272f1 jmp 0x10f2731b */
  goto L_10f2731b;
L_10f272f3:;
  /* 10f272f3 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10f272f8 jmp 0x10f2731b */
  goto L_10f2731b;
L_10f272fa:;
  /* 10f272fa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f272fc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f272fe jne 0x10f27312 */
  if (!C.zf) goto L_10f27312;
  /* 10f27300 cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27302 jne 0x10f27312 */
  if (!C.zf) goto L_10f27312;
  /* 10f27304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27307 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10f2730a mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10f2730c mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10f27310 jmp 0x10f2735d */
  goto L_10f2735d;
L_10f27312:;
  /* 10f27312 lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10f27318 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10f2731b:;
  /* 10f2731b mov ecx, edx */
  ECX = (EDX);
  /* 10f2731d shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10f27320 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10f27323 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f27325 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27328 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10f2732b shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10f2732e mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f27331 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f27333:;
  /* 10f27333 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10f27335 jne 0x10f27354 */
  if (!C.zf) goto L_10f27354;
  /* 10f27337 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10f27339 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2733b mov ebx, edx */
  EBX = (EDX);
  /* 10f2733d shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10f27340 or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10f27342 lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10f27345 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f27347 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10f2734a add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27350 mov ecx, ebx */
  ECX = (EBX);
  /* 10f27352 jmp 0x10f27333 */
  goto L_10f27333;
L_10f27354:;
  /* 10f27354 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f27357 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10f27359 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10f2735d:;
  /* 10f2735d pop edi */
  EDI = (pop32());
  /* 10f2735e pop esi */
  ESI = (pop32());
  /* 10f2735f pop ebx */
  EBX = (pop32());
  /* 10f27360 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27361 ret  */
  ESPCHK(0x10f272acu, _esp0);
  ESP += 4; return;
}

/* FUN_10007370 @ 0x10f27370 (7 bytes, 3 insns) */
void f_10f27370(void) {
  FTRACE(0x10f27370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27370 push edi */
  push32((uint32_t)(EDI));
  /* 10f27371 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f27375 jmp 0x10f273e1 */
  jmp_ind(0x10f273e1u); return;
}

/* FUN_10007380 @ 0x10f27380 (224 bytes, 84 insns) */
void f_10f27380(void) {
  FTRACE(0x10f27380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27380 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f27384 push edi */
  push32((uint32_t)(EDI));
  /* 10f27385 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f2738b je 0x10f2739c */
  if (C.zf) goto L_10f2739c;
L_10f2738d:;
  /* 10f2738d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10f2738f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f27390 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f27392 je 0x10f273cf */
  if (C.zf) goto L_10f273cf;
  /* 10f27394 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f2739a jne 0x10f2738d */
  if (!C.zf) goto L_10f2738d;
L_10f2739c:;
  /* 10f2739c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f2739e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f273a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f273a5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f273a8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f273aa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f273ad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f273b2 je 0x10f2739c */
  if (C.zf) goto L_10f2739c;
  /* 10f273b4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f273b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f273b9 je 0x10f273de */
  if (C.zf) goto L_10f273de;
  /* 10f273bb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f273bd je 0x10f273d9 */
  if (C.zf) goto L_10f273d9;
  /* 10f273bf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f273c4 je 0x10f273d4 */
  if (C.zf) goto L_10f273d4;
  /* 10f273c6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f273cb je 0x10f273cf */
  if (C.zf) goto L_10f273cf;
  /* 10f273cd jmp 0x10f2739c */
  goto L_10f2739c;
L_10f273cf:;
  /* 10f273cf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10f273d2 jmp 0x10f273e1 */
  goto L_10f273e1;
L_10f273d4:;
  /* 10f273d4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10f273d7 jmp 0x10f273e1 */
  goto L_10f273e1;
L_10f273d9:;
  /* 10f273d9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10f273dc jmp 0x10f273e1 */
  goto L_10f273e1;
L_10f273de:;
  /* 10f273de lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10f273e1:;
  /* 10f273e1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f273e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f273eb je 0x10f27406 */
  if (C.zf) goto L_10f27406;
L_10f273ed:;
  /* 10f273ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f273ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f273f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f273f2 je 0x10f27458 */
  if (C.zf) goto L_10f27458;
  /* 10f273f4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10f273f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f273f7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f273fd jne 0x10f273ed */
  if (!C.zf) goto L_10f273ed;
  /* 10f273ff jmp 0x10f27406 */
  goto L_10f27406;
L_10f27401:;
  /* 10f27401 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f27403 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f27406:;
  /* 10f27406 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f2740b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f2740d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2740f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f27412 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f27414 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f27416 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27419 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f2741e je 0x10f27401 */
  if (C.zf) goto L_10f27401;
  /* 10f27420 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f27422 je 0x10f27458 */
  if (C.zf) goto L_10f27458;
  /* 10f27424 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10f27426 je 0x10f2744f */
  if (C.zf) goto L_10f2744f;
  /* 10f27428 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f2742e je 0x10f27442 */
  if (C.zf) goto L_10f27442;
  /* 10f27430 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f27436 je 0x10f2743a */
  if (C.zf) goto L_10f2743a;
  /* 10f27438 jmp 0x10f27401 */
  goto L_10f27401;
L_10f2743a:;
  /* 10f2743a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f2743c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f27440 pop edi */
  EDI = (pop32());
  /* 10f27441 ret  */
  ESPCHK(0x10f27380u, _esp0);
  ESP += 4; return;
L_10f27442:;
  /* 10f27442 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10f27445 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f27449 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10f2744d pop edi */
  EDI = (pop32());
  /* 10f2744e ret  */
  ESPCHK(0x10f27380u, _esp0);
  ESP += 4; return;
L_10f2744f:;
  /* 10f2744f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10f27452 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f27456 pop edi */
  EDI = (pop32());
  /* 10f27457 ret  */
  ESPCHK(0x10f27380u, _esp0);
  ESP += 4; return;
L_10f27458:;
  /* 10f27458 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10f2745a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2745e pop edi */
  EDI = (pop32());
  /* 10f2745f ret  */
  ESPCHK(0x10f27380u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10f27460 (88 bytes, 40 insns) */
void f_10f27460(void) {
  FTRACE(0x10f27460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27460 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f27464 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f27468 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f2746a je 0x10f274b3 */
  if (C.zf) goto L_10f274b3;
  /* 10f2746c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2746e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10f27472 push edi */
  push32((uint32_t)(EDI));
  /* 10f27473 mov edi, ecx */
  EDI = (ECX);
  /* 10f27475 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27478 jb 0x10f274a7 */
  if (C.cf) goto L_10f274a7;
  /* 10f2747a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2747c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10f2747f je 0x10f27489 */
  if (C.zf) goto L_10f27489;
  /* 10f27481 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10f27483:;
  /* 10f27483 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27485 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f27486 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f27487 jne 0x10f27483 */
  if (!C.zf) goto L_10f27483;
L_10f27489:;
  /* 10f27489 mov ecx, eax */
  ECX = (EAX);
  /* 10f2748b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f2748e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27490 mov ecx, eax */
  ECX = (EAX);
  /* 10f27492 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f27495 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27497 mov ecx, edx */
  ECX = (EDX);
  /* 10f27499 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f2749c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f2749f je 0x10f274a7 */
  if (C.zf) goto L_10f274a7;
  /* 10f274a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f274a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f274a5 je 0x10f274ad */
  if (C.zf) goto L_10f274ad;
L_10f274a7:;
  /* 10f274a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f274a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f274aa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f274ab jne 0x10f274a7 */
  if (!C.zf) goto L_10f274a7;
L_10f274ad:;
  /* 10f274ad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f274b1 pop edi */
  EDI = (pop32());
  /* 10f274b2 ret  */
  ESPCHK(0x10f27460u, _esp0);
  ESP += 4; return;
L_10f274b3:;
  /* 10f274b3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f274b7 ret  */
  ESPCHK(0x10f27460u, _esp0);
  ESP += 4; return;
}

/* FUN_100074c0 @ 0x10f274c0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_10f274c0(void) {
  FTRACE(0x10f274c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f274c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f274c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f274c3 push edi */
  push32((uint32_t)(EDI));
  /* 10f274c4 push esi */
  push32((uint32_t)(ESI));
  /* 10f274c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f274c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f274cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f274ce mov eax, ecx */
  EAX = (ECX);
  /* 10f274d0 mov edx, ecx */
  EDX = (ECX);
  /* 10f274d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f274d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f274d6 jbe 0x10f274e0 */
  if ((C.cf||C.zf)) goto L_10f274e0;
  /* 10f274d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f274da jb 0x10f27658 */
  if (C.cf) goto L_10f27658;
L_10f274e0:;
  /* 10f274e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f274e6 jne 0x10f274fc */
  if (!C.zf) goto L_10f274fc;
  /* 10f274e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f274eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f274ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f274f1 jb 0x10f2751c */
  if (C.cf) goto L_10f2751c;
  /* 10f274f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f274f5 jmp dword ptr [edx*4 + 0x10f27608] */
  switch (EDX) {
    case 0: goto L_10f27618;
    case 1: goto L_10f27620;
    case 2: goto L_10f2762c;
    case 3: goto L_10f27640;
    default: x86_unimpl("switch@0x10f274f5 out of table"); return;
  }
L_10f274fc:;
  /* 10f274fc mov eax, edi */
  EAX = (EDI);
  /* 10f274fe mov edx, 3 */
  EDX = (0x3u);
  /* 10f27503 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27506 jb 0x10f27514 */
  if (C.cf) goto L_10f27514;
  /* 10f27508 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f2750b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2750d jmp dword ptr [eax*4 + 0x10f27520] */
  switch (EAX) {
    case 1: goto L_10f27530;
    case 2: goto L_10f2755c;
    case 3: goto L_10f27580;
    default: x86_unimpl("switch@0x10f2750d out of table"); return;
  }
L_10f27514:;
  /* 10f27514 jmp dword ptr [ecx*4 + 0x10f27618] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10f27618)))); return;
  /* 10f2751b nop  */
  /* nop */
L_10f2751c:;
  /* 10f2751c jmp dword ptr [ecx*4 + 0x10f2759c] */
  switch (ECX) {
    case 0: goto L_10f275ff;
    case 1: goto L_10f275ec;
    case 2: goto L_10f275e4;
    case 3: goto L_10f275dc;
    case 4: goto L_10f275d4;
    case 5: goto L_10f275cc;
    case 6: goto L_10f275c4;
    case 7: goto L_10f275bc;
    default: x86_unimpl("switch@0x10f2751c out of table"); return;
  }
  /* 10f27523 nop  */
  /* nop */
L_10f27530:;
  /* 10f27530 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f27532 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27534 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27536 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27539 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f2753c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f2753f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f27542 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f27545 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27548 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2754b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2754e jb 0x10f2751c */
  if (C.cf) goto L_10f2751c;
  /* 10f27550 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27552 jmp dword ptr [edx*4 + 0x10f27608] */
  switch (EDX) {
    case 0: goto L_10f27618;
    case 1: goto L_10f27620;
    case 2: goto L_10f2762c;
    case 3: goto L_10f27640;
    default: x86_unimpl("switch@0x10f27552 out of table"); return;
  }
  /* 10f27559 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f2755c:;
  /* 10f2755c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f2755e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27560 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27562 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27565 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f27568 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f2756b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2756e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27571 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27574 jb 0x10f2751c */
  if (C.cf) goto L_10f2751c;
  /* 10f27576 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27578 jmp dword ptr [edx*4 + 0x10f27608] */
  switch (EDX) {
    case 0: goto L_10f27618;
    case 1: goto L_10f27620;
    case 2: goto L_10f2762c;
    case 3: goto L_10f27640;
    default: x86_unimpl("switch@0x10f27578 out of table"); return;
  }
  /* 10f2757f nop  */
  /* nop */
L_10f27580:;
  /* 10f27580 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f27582 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27584 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27586 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f27587 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f2758a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2758b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2758e jb 0x10f2751c */
  if (C.cf) goto L_10f2751c;
  /* 10f27590 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27592 jmp dword ptr [edx*4 + 0x10f27608] */
  switch (EDX) {
    case 0: goto L_10f27618;
    case 1: goto L_10f27620;
    case 2: goto L_10f2762c;
    case 3: goto L_10f27640;
    default: x86_unimpl("switch@0x10f27592 out of table"); return;
  }
  /* 10f27599 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f275bc:;
  /* 10f275bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10f275c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10f275c4:;
  /* 10f275c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10f275c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10f275cc:;
  /* 10f275cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10f275d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10f275d4:;
  /* 10f275d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10f275d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10f275dc:;
  /* 10f275dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10f275e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10f275e4:;
  /* 10f275e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10f275e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10f275ec:;
  /* 10f275ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10f275f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10f275f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f275fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f275fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f275ff:;
  /* 10f275ff jmp dword ptr [edx*4 + 0x10f27608] */
  switch (EDX) {
    case 0: goto L_10f27618;
    case 1: goto L_10f27620;
    case 2: goto L_10f2762c;
    case 3: goto L_10f27640;
    default: x86_unimpl("switch@0x10f275ff out of table"); return;
  }
  /* 10f27606 mov edi, edi */
  EDI = (EDI);
L_10f27618:;
  /* 10f27618 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2761b pop esi */
  ESI = (pop32());
  /* 10f2761c pop edi */
  EDI = (pop32());
  /* 10f2761d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2761e ret  */
  ESPCHK(0x10f274c0u, _esp0);
  ESP += 4; return;
  /* 10f2761f nop  */
  /* nop */
L_10f27620:;
  /* 10f27620 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27622 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27627 pop esi */
  ESI = (pop32());
  /* 10f27628 pop edi */
  EDI = (pop32());
  /* 10f27629 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2762a ret  */
  ESPCHK(0x10f274c0u, _esp0);
  ESP += 4; return;
  /* 10f2762b nop  */
  /* nop */
L_10f2762c:;
  /* 10f2762c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f2762e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27630 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27633 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f27636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27639 pop esi */
  ESI = (pop32());
  /* 10f2763a pop edi */
  EDI = (pop32());
  /* 10f2763b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2763c ret  */
  ESPCHK(0x10f274c0u, _esp0);
  ESP += 4; return;
  /* 10f2763d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f27640:;
  /* 10f27640 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27642 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27644 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27647 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f2764a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f2764d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f27650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27653 pop esi */
  ESI = (pop32());
  /* 10f27654 pop edi */
  EDI = (pop32());
  /* 10f27655 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27656 ret  */
  ESPCHK(0x10f274c0u, _esp0);
  ESP += 4; return;
  /* 10f27657 nop  */
  /* nop */
L_10f27658:;
  /* 10f27658 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10f2765c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10f27660 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f27666 jne 0x10f2768c */
  if (!C.zf) goto L_10f2768c;
  /* 10f27668 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f2766b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f2766e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27671 jb 0x10f27680 */
  if (C.cf) goto L_10f27680;
  /* 10f27673 std  */
  C.df=1;
  /* 10f27674 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27676 cld  */
  C.df=0;
  /* 10f27677 jmp dword ptr [edx*4 + 0x10f277a0] */
  switch (EDX) {
    case 0: goto L_10f277b0;
    case 1: goto L_10f277b8;
    case 2: goto L_10f277c8;
    case 3: goto L_10f277dc;
    default: x86_unimpl("switch@0x10f27677 out of table"); return;
  }
  /* 10f2767e mov edi, edi */
  EDI = (EDI);
L_10f27680:;
  /* 10f27680 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f27682 jmp dword ptr [ecx*4 + 0x10f27750] */
  switch (ECX) {
    case 0: goto L_10f27797;
    default: x86_unimpl("switch@0x10f27682 out of table"); return;
  }
  /* 10f27689 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f2768c:;
  /* 10f2768c mov eax, edi */
  EAX = (EDI);
  /* 10f2768e mov edx, 3 */
  EDX = (0x3u);
  /* 10f27693 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27696 jb 0x10f276a4 */
  if (C.cf) goto L_10f276a4;
  /* 10f27698 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f2769b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2769d jmp dword ptr [eax*4 + 0x10f276a8] */
  switch (EAX) {
    case 1: goto L_10f276b8;
    case 2: goto L_10f276d8;
    case 3: goto L_10f27700;
    default: x86_unimpl("switch@0x10f2769d out of table"); return;
  }
L_10f276a4:;
  /* 10f276a4 jmp dword ptr [ecx*4 + 0x10f277a0] */
  switch (ECX) {
    case 0: goto L_10f277b0;
    case 1: goto L_10f277b8;
    case 2: goto L_10f277c8;
    case 3: goto L_10f277dc;
    default: x86_unimpl("switch@0x10f276a4 out of table"); return;
  }
  /* 10f276ab nop  */
  /* nop */
L_10f276b8:;
  /* 10f276b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f276bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f276bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f276c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f276c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f276c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f276c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f276c8 jb 0x10f27680 */
  if (C.cf) goto L_10f27680;
  /* 10f276ca std  */
  C.df=1;
  /* 10f276cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f276cd cld  */
  C.df=0;
  /* 10f276ce jmp dword ptr [edx*4 + 0x10f277a0] */
  switch (EDX) {
    case 0: goto L_10f277b0;
    case 1: goto L_10f277b8;
    case 2: goto L_10f277c8;
    case 3: goto L_10f277dc;
    default: x86_unimpl("switch@0x10f276ce out of table"); return;
  }
  /* 10f276d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f276d8:;
  /* 10f276d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f276db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f276dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f276e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f276e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f276e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f276e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f276ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f276ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f276f2 jb 0x10f27680 */
  if (C.cf) goto L_10f27680;
  /* 10f276f4 std  */
  C.df=1;
  /* 10f276f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f276f7 cld  */
  C.df=0;
  /* 10f276f8 jmp dword ptr [edx*4 + 0x10f277a0] */
  switch (EDX) {
    case 0: goto L_10f277b0;
    case 1: goto L_10f277b8;
    case 2: goto L_10f277c8;
    case 3: goto L_10f277dc;
    default: x86_unimpl("switch@0x10f276f8 out of table"); return;
  }
  /* 10f276ff nop  */
  /* nop */
L_10f27700:;
  /* 10f27700 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f27703 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f27705 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f27708 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f2770b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f2770e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27711 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f27714 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f27717 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2771a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2771d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27720 jb 0x10f27680 */
  if (C.cf) goto L_10f27680;
  /* 10f27726 std  */
  C.df=1;
  /* 10f27727 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
L_10f27729:;
  /* 10f27729 cld  */
  C.df=0;
  /* 10f2772a jmp dword ptr [edx*4 + 0x10f277a0] */
  switch (EDX) {
    case 0: goto L_10f277b0;
    case 1: goto L_10f277b8;
    case 2: goto L_10f277c8;
    case 3: goto L_10f277dc;
    default: x86_unimpl("switch@0x10f2772a out of table"); return;
  }
  /* 10f27731 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10f27734 push esp */
  push32((uint32_t)(ESP));
  /* 10f27735 ja 0x10f27729 */
  if ((!C.cf&&!C.zf)) goto L_10f27729;
  /* 10f27737 adc byte ptr [edi + esi*2 - 0xe], bl */
  { uint32_t _a=(r8((uint32_t)(EDI + ESI*2 + -0xe))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + ESI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f2773b adc byte ptr [edi + esi*2 - 0xe], ah */
  { uint32_t _a=(r8((uint32_t)(EDI + ESI*2 + -0xe))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDI + ESI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f2773f adc byte ptr [edi + esi*2 - 0xe], ch */
  { uint32_t _a=(r8((uint32_t)(EDI + ESI*2 + -0xe))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + ESI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f27743 adc byte ptr [edi + esi*2 - 0xe], dh */
  { uint32_t _a=(r8((uint32_t)(EDI + ESI*2 + -0xe))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + ESI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f27747 adc byte ptr [edi + esi*2 - 0xe], bh */
  { uint32_t _a=(r8((uint32_t)(EDI + ESI*2 + -0xe))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + ESI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f2774c test byte ptr [edi - 0xe], dh */
  { uint32_t _r=(r8((uint32_t)(EDI + -0xe)))&(C.d.b.h); fl_logic(_r,8); }
  /* 10f27754 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10f27758 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10f2775c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10f27760 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10f27764 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10f27768 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10f2776c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10f27770 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10f27774 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10f27778 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10f2777c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10f27780 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10f27784 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10f27788 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10f2778c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f27793 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27795 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f27797:;
  /* 10f27797 jmp dword ptr [edx*4 + 0x10f277a0] */
  switch (EDX) {
    case 0: goto L_10f277b0;
    case 1: goto L_10f277b8;
    case 2: goto L_10f277c8;
    case 3: goto L_10f277dc;
    default: x86_unimpl("switch@0x10f27797 out of table"); return;
  }
  /* 10f2779e mov edi, edi */
  EDI = (EDI);
L_10f277b0:;
  /* 10f277b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f277b3 pop esi */
  ESI = (pop32());
  /* 10f277b4 pop edi */
  EDI = (pop32());
  /* 10f277b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f277b6 ret  */
  ESPCHK(0x10f274c0u, _esp0);
  ESP += 4; return;
  /* 10f277b7 nop  */
  /* nop */
L_10f277b8:;
  /* 10f277b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f277bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f277be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f277c1 pop esi */
  ESI = (pop32());
  /* 10f277c2 pop edi */
  EDI = (pop32());
  /* 10f277c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f277c4 ret  */
  ESPCHK(0x10f274c0u, _esp0);
  ESP += 4; return;
  /* 10f277c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f277c8:;
  /* 10f277c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f277cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f277ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f277d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f277d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f277d7 pop esi */
  ESI = (pop32());
  /* 10f277d8 pop edi */
  EDI = (pop32());
  /* 10f277d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f277da ret  */
  ESPCHK(0x10f274c0u, _esp0);
  ESP += 4; return;
  /* 10f277db nop  */
  /* nop */
L_10f277dc:;
  /* 10f277dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f277df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f277e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f277e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f277e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f277eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f277ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f277f1 pop esi */
  ESI = (pop32());
  /* 10f277f2 pop edi */
  EDI = (pop32());
  /* 10f277f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f277f4 ret  */
  ESPCHK(0x10f274c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10f27800 (123 bytes, 44 insns) */
void f_10f27800(void) {
  FTRACE(0x10f27800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27800 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f27804 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f2780a je 0x10f27820 */
  if (C.zf) goto L_10f27820;
L_10f2780c:;
  /* 10f2780c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10f2780e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f2780f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f27811 je 0x10f27853 */
  if (C.zf) goto L_10f27853;
  /* 10f27813 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f27819 jne 0x10f2780c */
  if (!C.zf) goto L_10f2780c;
  /* 10f2781b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f27820:;
  /* 10f27820 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f27822 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f27827 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27829 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2782c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2782e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27831 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f27836 je 0x10f27820 */
  if (C.zf) goto L_10f27820;
  /* 10f27838 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f2783b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f2783d je 0x10f27871 */
  if (C.zf) goto L_10f27871;
  /* 10f2783f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f27841 je 0x10f27867 */
  if (C.zf) goto L_10f27867;
  /* 10f27843 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f27848 je 0x10f2785d */
  if (C.zf) goto L_10f2785d;
  /* 10f2784a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f2784f je 0x10f27853 */
  if (C.zf) goto L_10f27853;
  /* 10f27851 jmp 0x10f27820 */
  goto L_10f27820;
L_10f27853:;
  /* 10f27853 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10f27856 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f2785a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2785c ret  */
  ESPCHK(0x10f27800u, _esp0);
  ESP += 4; return;
L_10f2785d:;
  /* 10f2785d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10f27860 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f27864 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27866 ret  */
  ESPCHK(0x10f27800u, _esp0);
  ESP += 4; return;
L_10f27867:;
  /* 10f27867 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10f2786a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f2786e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27870 ret  */
  ESPCHK(0x10f27800u, _esp0);
  ESP += 4; return;
L_10f27871:;
  /* 10f27871 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10f27874 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f27878 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2787a ret  */
  ESPCHK(0x10f27800u, _esp0);
  ESP += 4; return;
}

/* FUN_10007884 @ 0x10f27884 (27 bytes, 13 insns) */
void f_10f27884(void) {
  FTRACE(0x10f27884u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27884 mov eax, dword ptr [0x10f47b88] */
  EAX = (r32((uint32_t)(0x10f47b88)));
  /* 10f27889 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2788b je 0x10f2789c */
  if (C.zf) goto L_10f2789c;
  /* 10f2788d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10f27891 call eax */
  call_ind((uint32_t)(EAX), 0x10f27893u);
  /* 10f27893 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f27895 pop ecx */
  ECX = (pop32());
  /* 10f27896 je 0x10f2789c */
  if (C.zf) goto L_10f2789c;
  /* 10f27898 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2789a pop eax */
  EAX = (pop32());
  /* 10f2789b ret  */
  ESPCHK(0x10f27884u, _esp0);
  ESP += 4; return;
L_10f2789c:;
  /* 10f2789c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2789e ret  */
  ESPCHK(0x10f27884u, _esp0);
  ESP += 4; return;
}

/* FUN_100078a0 @ 0x10f278a0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10f278a0(void) {
  FTRACE(0x10f278a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f278a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f278a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f278a3 push edi */
  push32((uint32_t)(EDI));
  /* 10f278a4 push esi */
  push32((uint32_t)(ESI));
  /* 10f278a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f278a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f278ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f278ae mov eax, ecx */
  EAX = (ECX);
  /* 10f278b0 mov edx, ecx */
  EDX = (ECX);
  /* 10f278b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f278b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f278b6 jbe 0x10f278c0 */
  if ((C.cf||C.zf)) goto L_10f278c0;
  /* 10f278b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f278ba jb 0x10f27a38 */
  if (C.cf) goto L_10f27a38;
L_10f278c0:;
  /* 10f278c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f278c6 jne 0x10f278dc */
  if (!C.zf) goto L_10f278dc;
  /* 10f278c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f278cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f278ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f278d1 jb 0x10f278fc */
  if (C.cf) goto L_10f278fc;
  /* 10f278d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f278d5 jmp dword ptr [edx*4 + 0x10f279e8] */
  switch (EDX) {
    case 0: goto L_10f279f8;
    case 1: goto L_10f27a00;
    case 2: goto L_10f27a0c;
    case 3: goto L_10f27a20;
    default: x86_unimpl("switch@0x10f278d5 out of table"); return;
  }
L_10f278dc:;
  /* 10f278dc mov eax, edi */
  EAX = (EDI);
  /* 10f278de mov edx, 3 */
  EDX = (0x3u);
  /* 10f278e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f278e6 jb 0x10f278f4 */
  if (C.cf) goto L_10f278f4;
  /* 10f278e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f278eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f278ed jmp dword ptr [eax*4 + 0x10f27900] */
  switch (EAX) {
    case 1: goto L_10f27910;
    case 2: goto L_10f2793c;
    case 3: goto L_10f27960;
    default: x86_unimpl("switch@0x10f278ed out of table"); return;
  }
L_10f278f4:;
  /* 10f278f4 jmp dword ptr [ecx*4 + 0x10f279f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10f279f8)))); return;
  /* 10f278fb nop  */
  /* nop */
L_10f278fc:;
  /* 10f278fc jmp dword ptr [ecx*4 + 0x10f2797c] */
  switch (ECX) {
    case 0: goto L_10f279df;
    case 1: goto L_10f279cc;
    case 2: goto L_10f279c4;
    case 3: goto L_10f279bc;
    case 4: goto L_10f279b4;
    case 5: goto L_10f279ac;
    case 6: goto L_10f279a4;
    case 7: goto L_10f2799c;
    default: x86_unimpl("switch@0x10f278fc out of table"); return;
  }
  /* 10f27903 nop  */
  /* nop */
L_10f27910:;
  /* 10f27910 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f27912 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27914 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27916 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27919 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f2791c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f2791f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f27922 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f27925 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27928 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2792b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2792e jb 0x10f278fc */
  if (C.cf) goto L_10f278fc;
  /* 10f27930 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27932 jmp dword ptr [edx*4 + 0x10f279e8] */
  switch (EDX) {
    case 0: goto L_10f279f8;
    case 1: goto L_10f27a00;
    case 2: goto L_10f27a0c;
    case 3: goto L_10f27a20;
    default: x86_unimpl("switch@0x10f27932 out of table"); return;
  }
  /* 10f27939 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f2793c:;
  /* 10f2793c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f2793e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27940 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27942 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27945 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f27948 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f2794b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2794e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27951 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27954 jb 0x10f278fc */
  if (C.cf) goto L_10f278fc;
  /* 10f27956 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27958 jmp dword ptr [edx*4 + 0x10f279e8] */
  switch (EDX) {
    case 0: goto L_10f279f8;
    case 1: goto L_10f27a00;
    case 2: goto L_10f27a0c;
    case 3: goto L_10f27a20;
    default: x86_unimpl("switch@0x10f27958 out of table"); return;
  }
  /* 10f2795f nop  */
  /* nop */
L_10f27960:;
  /* 10f27960 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f27962 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27964 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27966 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f27967 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f2796a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2796b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2796e jb 0x10f278fc */
  if (C.cf) goto L_10f278fc;
  /* 10f27970 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27972 jmp dword ptr [edx*4 + 0x10f279e8] */
  switch (EDX) {
    case 0: goto L_10f279f8;
    case 1: goto L_10f27a00;
    case 2: goto L_10f27a0c;
    case 3: goto L_10f27a20;
    default: x86_unimpl("switch@0x10f27972 out of table"); return;
  }
  /* 10f27979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f2799c:;
  /* 10f2799c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10f279a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10f279a4:;
  /* 10f279a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10f279a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10f279ac:;
  /* 10f279ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10f279b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10f279b4:;
  /* 10f279b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10f279b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10f279bc:;
  /* 10f279bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10f279c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10f279c4:;
  /* 10f279c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10f279c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10f279cc:;
  /* 10f279cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10f279d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10f279d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f279db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f279dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f279df:;
  /* 10f279df jmp dword ptr [edx*4 + 0x10f279e8] */
  switch (EDX) {
    case 0: goto L_10f279f8;
    case 1: goto L_10f27a00;
    case 2: goto L_10f27a0c;
    case 3: goto L_10f27a20;
    default: x86_unimpl("switch@0x10f279df out of table"); return;
  }
  /* 10f279e6 mov edi, edi */
  EDI = (EDI);
L_10f279f8:;
  /* 10f279f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f279fb pop esi */
  ESI = (pop32());
  /* 10f279fc pop edi */
  EDI = (pop32());
  /* 10f279fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f279fe ret  */
  ESPCHK(0x10f278a0u, _esp0);
  ESP += 4; return;
  /* 10f279ff nop  */
  /* nop */
L_10f27a00:;
  /* 10f27a00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27a02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27a07 pop esi */
  ESI = (pop32());
  /* 10f27a08 pop edi */
  EDI = (pop32());
  /* 10f27a09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27a0a ret  */
  ESPCHK(0x10f278a0u, _esp0);
  ESP += 4; return;
  /* 10f27a0b nop  */
  /* nop */
L_10f27a0c:;
  /* 10f27a0c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27a0e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27a10 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27a13 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f27a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27a19 pop esi */
  ESI = (pop32());
  /* 10f27a1a pop edi */
  EDI = (pop32());
  /* 10f27a1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27a1c ret  */
  ESPCHK(0x10f278a0u, _esp0);
  ESP += 4; return;
  /* 10f27a1d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f27a20:;
  /* 10f27a20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f27a22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f27a24 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27a27 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f27a2a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f27a2d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f27a30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27a33 pop esi */
  ESI = (pop32());
  /* 10f27a34 pop edi */
  EDI = (pop32());
  /* 10f27a35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27a36 ret  */
  ESPCHK(0x10f278a0u, _esp0);
  ESP += 4; return;
  /* 10f27a37 nop  */
  /* nop */
L_10f27a38:;
  /* 10f27a38 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10f27a3c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10f27a40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f27a46 jne 0x10f27a6c */
  if (!C.zf) goto L_10f27a6c;
  /* 10f27a48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f27a4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f27a4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27a51 jb 0x10f27a60 */
  if (C.cf) goto L_10f27a60;
  /* 10f27a53 std  */
  C.df=1;
  /* 10f27a54 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27a56 cld  */
  C.df=0;
  /* 10f27a57 jmp dword ptr [edx*4 + 0x10f27b80] */
  switch (EDX) {
    case 0: goto L_10f27b90;
    case 1: goto L_10f27b98;
    case 2: goto L_10f27ba8;
    case 3: goto L_10f27bbc;
    default: x86_unimpl("switch@0x10f27a57 out of table"); return;
  }
  /* 10f27a5e mov edi, edi */
  EDI = (EDI);
L_10f27a60:;
  /* 10f27a60 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f27a62 jmp dword ptr [ecx*4 + 0x10f27b30] */
  switch (ECX) {
    case 0: goto L_10f27b77;
    default: x86_unimpl("switch@0x10f27a62 out of table"); return;
  }
  /* 10f27a69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f27a6c:;
  /* 10f27a6c mov eax, edi */
  EAX = (EDI);
  /* 10f27a6e mov edx, 3 */
  EDX = (0x3u);
  /* 10f27a73 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27a76 jb 0x10f27a84 */
  if (C.cf) goto L_10f27a84;
  /* 10f27a78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f27a7b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27a7d jmp dword ptr [eax*4 + 0x10f27a88] */
  switch (EAX) {
    case 1: goto L_10f27a98;
    case 2: goto L_10f27ab8;
    case 3: goto L_10f27ae0;
    default: x86_unimpl("switch@0x10f27a7d out of table"); return;
  }
L_10f27a84:;
  /* 10f27a84 jmp dword ptr [ecx*4 + 0x10f27b80] */
  switch (ECX) {
    case 0: goto L_10f27b90;
    case 1: goto L_10f27b98;
    case 2: goto L_10f27ba8;
    case 3: goto L_10f27bbc;
    default: x86_unimpl("switch@0x10f27a84 out of table"); return;
  }
  /* 10f27a8b nop  */
  /* nop */
L_10f27a98:;
  /* 10f27a98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f27a9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f27a9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f27aa0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f27aa1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f27aa4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f27aa5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27aa8 jb 0x10f27a60 */
  if (C.cf) goto L_10f27a60;
  /* 10f27aaa std  */
  C.df=1;
  /* 10f27aab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27aad cld  */
  C.df=0;
  /* 10f27aae jmp dword ptr [edx*4 + 0x10f27b80] */
  switch (EDX) {
    case 0: goto L_10f27b90;
    case 1: goto L_10f27b98;
    case 2: goto L_10f27ba8;
    case 3: goto L_10f27bbc;
    default: x86_unimpl("switch@0x10f27aae out of table"); return;
  }
  /* 10f27ab5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f27ab8:;
  /* 10f27ab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f27abb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f27abd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f27ac0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f27ac3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f27ac6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f27ac9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27acc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27acf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27ad2 jb 0x10f27a60 */
  if (C.cf) goto L_10f27a60;
  /* 10f27ad4 std  */
  C.df=1;
  /* 10f27ad5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27ad7 cld  */
  C.df=0;
  /* 10f27ad8 jmp dword ptr [edx*4 + 0x10f27b80] */
  switch (EDX) {
    case 0: goto L_10f27b90;
    case 1: goto L_10f27b98;
    case 2: goto L_10f27ba8;
    case 3: goto L_10f27bbc;
    default: x86_unimpl("switch@0x10f27ad8 out of table"); return;
  }
  /* 10f27adf nop  */
  /* nop */
L_10f27ae0:;
  /* 10f27ae0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f27ae3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f27ae5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f27ae8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f27aeb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f27aee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27af1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f27af4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f27af7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27afa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27afd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27b00 jb 0x10f27a60 */
  if (C.cf) goto L_10f27a60;
  /* 10f27b06 std  */
  C.df=1;
  /* 10f27b07 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f27b09 cld  */
  C.df=0;
  /* 10f27b0a jmp dword ptr [edx*4 + 0x10f27b80] */
  switch (EDX) {
    case 0: goto L_10f27b90;
    case 1: goto L_10f27b98;
    case 2: goto L_10f27ba8;
    case 3: goto L_10f27bbc;
    default: x86_unimpl("switch@0x10f27b0a out of table"); return;
  }
  /* 10f27b11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10f27b14 xor al, 0x7b */
  { uint32_t _r=(AL)^(0x7bu); AL = (_r); fl_logic(_r,8); }
  /* 10f27b16 adc byte ptr [ebx + edi*2], bh */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*2))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f27b1a adc byte ptr [ebx + edi*2 - 0xe], al */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*2 + -0xe))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f27b1f adc byte ptr [ebx + edi*2 - 0xe], cl */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*2 + -0xe))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f27b23 adc byte ptr [ebx + edi*2 - 0xe], dl */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*2 + -0xe))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f27b27 adc byte ptr [ebx + edi*2 - 0xe], bl */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*2 + -0xe))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f27b2b adc byte ptr [ebx + edi*2 - 0xe], ah */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*2 + -0xe))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*2 + -0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f27b34 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10f27b38 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10f27b3c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10f27b40 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10f27b44 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10f27b48 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10f27b4c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10f27b50 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10f27b54 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10f27b58 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10f27b5c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10f27b60 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10f27b64 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10f27b68 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10f27b6c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f27b73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27b75 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f27b77:;
  /* 10f27b77 jmp dword ptr [edx*4 + 0x10f27b80] */
  switch (EDX) {
    case 0: goto L_10f27b90;
    case 1: goto L_10f27b98;
    case 2: goto L_10f27ba8;
    case 3: goto L_10f27bbc;
    default: x86_unimpl("switch@0x10f27b77 out of table"); return;
  }
  /* 10f27b7e mov edi, edi */
  EDI = (EDI);
L_10f27b90:;
  /* 10f27b90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27b93 pop esi */
  ESI = (pop32());
  /* 10f27b94 pop edi */
  EDI = (pop32());
  /* 10f27b95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27b96 ret  */
  ESPCHK(0x10f278a0u, _esp0);
  ESP += 4; return;
  /* 10f27b97 nop  */
  /* nop */
L_10f27b98:;
  /* 10f27b98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f27b9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f27b9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27ba1 pop esi */
  ESI = (pop32());
  /* 10f27ba2 pop edi */
  EDI = (pop32());
  /* 10f27ba3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27ba4 ret  */
  ESPCHK(0x10f278a0u, _esp0);
  ESP += 4; return;
  /* 10f27ba5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f27ba8:;
  /* 10f27ba8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f27bab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f27bae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f27bb1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f27bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27bb7 pop esi */
  ESI = (pop32());
  /* 10f27bb8 pop edi */
  EDI = (pop32());
  /* 10f27bb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27bba ret  */
  ESPCHK(0x10f278a0u, _esp0);
  ESP += 4; return;
  /* 10f27bbb nop  */
  /* nop */
L_10f27bbc:;
  /* 10f27bbc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f27bbf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f27bc2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f27bc5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f27bc8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f27bcb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f27bce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27bd1 pop esi */
  ESI = (pop32());
  /* 10f27bd2 pop edi */
  EDI = (pop32());
  /* 10f27bd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27bd4 ret  */
  ESPCHK(0x10f278a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bd5 @ 0x10f27bd5 (289 bytes, 98 insns) */
void f_10f27bd5(void) {
  FTRACE(0x10f27bd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27bd5 push ebp */
  push32((uint32_t)(EBP));
  /* 10f27bd6 mov ebp, esp */
  EBP = (ESP);
  /* 10f27bd8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f27bda push 0x10f2d638 */
  push32((uint32_t)(0x10f2d638u));
  /* 10f27bdf push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f27be4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f27bea push eax */
  push32((uint32_t)(EAX));
  /* 10f27beb mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f27bf2 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27bf5 push ebx */
  push32((uint32_t)(EBX));
  /* 10f27bf6 push esi */
  push32((uint32_t)(ESI));
  /* 10f27bf7 push edi */
  push32((uint32_t)(EDI));
  /* 10f27bf8 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27bfb imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f27bff mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 10f27c02 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 10f27c05 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27c08 ja 0x10f27c1e */
  if ((!C.cf&&!C.zf)) goto L_10f27c1e;
  /* 10f27c0a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f27c0c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27c0e jne 0x10f27c13 */
  if (!C.zf) goto L_10f27c13;
  /* 10f27c10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f27c12 pop esi */
  ESI = (pop32());
L_10f27c13:;
  /* 10f27c13 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27c16 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10f27c19 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 10f27c1c jmp 0x10f27c20 */
  goto L_10f27c20;
L_10f27c1e:;
  /* 10f27c1e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10f27c20:;
  /* 10f27c20 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10f27c23 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27c26 ja 0x10f27cd4 */
  if ((!C.cf&&!C.zf)) goto L_10f27cd4;
  /* 10f27c2c mov eax, dword ptr [0x10f48fe4] */
  EAX = (r32((uint32_t)(0x10f48fe4)));
  /* 10f27c31 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27c34 jne 0x10f27c77 */
  if (!C.zf) goto L_10f27c77;
  /* 10f27c36 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f27c39 cmp edi, dword ptr [0x10f48fdc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x10f48fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27c3f ja 0x10f27cbd */
  if ((!C.cf&&!C.zf)) goto L_10f27cbd;
  /* 10f27c41 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f27c43 call 0x10f26892 */
  push32(0x10f27c48u); f_10f26892();
  /* 10f27c48 pop ecx */
  ECX = (pop32());
  /* 10f27c49 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10f27c4c push edi */
  push32((uint32_t)(EDI));
  /* 10f27c4d call 0x10f25985 */
  push32(0x10f27c52u); f_10f25985();
  /* 10f27c52 pop ecx */
  ECX = (pop32());
  /* 10f27c53 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f27c56 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f27c5a call 0x10f27c6e */
  push32(0x10f27c5fu); f_10f27c6e();
  /* 10f27c5f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27c62 je 0x10f27cc2 */
  if (C.zf) goto L_10f27cc2;
  /* 10f27c64 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10f27c67 jmp 0x10f27cb1 */
  goto L_10f27cb1;
  /* 10f27c69 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f27c6b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f27c6e push 9 */
  push32((uint32_t)(0x9u));
  /* 10f27c70 call 0x10f268f3 */
  push32(0x10f27c75u); f_10f268f3();
  /* 10f27c75 pop ecx */
  ECX = (pop32());
  /* 10f27c76 ret  */
  ESPCHK(0x10f27bd5u, _esp0);
  ESP += 4; return;
L_10f27c77:;
  /* 10f27c77 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27c7a jne 0x10f27cbd */
  if (!C.zf) goto L_10f27cbd;
  /* 10f27c7c cmp esi, dword ptr [0x10f3167c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f3167c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27c82 ja 0x10f27cbd */
  if ((!C.cf&&!C.zf)) goto L_10f27cbd;
  /* 10f27c84 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f27c86 call 0x10f26892 */
  push32(0x10f27c8bu); f_10f26892();
  /* 10f27c8b pop ecx */
  ECX = (pop32());
  /* 10f27c8c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f27c93 mov eax, esi */
  EAX = (ESI);
  /* 10f27c95 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f27c98 push eax */
  push32((uint32_t)(EAX));
  /* 10f27c99 call 0x10f26428 */
  push32(0x10f27c9eu); f_10f26428();
  /* 10f27c9e pop ecx */
  ECX = (pop32());
  /* 10f27c9f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f27ca2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f27ca6 call 0x10f27cf7 */
  push32(0x10f27cabu); f_10f27cf7();
  /* 10f27cab cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27cae je 0x10f27cc2 */
  if (C.zf) goto L_10f27cc2;
  /* 10f27cb0 push esi */
  push32((uint32_t)(ESI));
L_10f27cb1:;
  /* 10f27cb1 push ebx */
  push32((uint32_t)(EBX));
  /* 10f27cb2 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10f27cb5 call 0x10f27460 */
  push32(0x10f27cbau); f_10f27460();
  /* 10f27cba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f27cbd:;
  /* 10f27cbd cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27cc0 jne 0x10f27d00 */
  if (!C.zf) { jmp_ind(0x10f27d00u); return; }
L_10f27cc2:;
  /* 10f27cc2 push esi */
  push32((uint32_t)(ESI));
  /* 10f27cc3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f27cc5 push dword ptr [0x10f48fe0] */
  push32((uint32_t)(r32((uint32_t)(0x10f48fe0))));
  /* 10f27ccb call dword ptr [0x10f2d0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0e4))), 0x10f27cd1u);
  /* 10f27cd1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10f27cd4:;
  /* 10f27cd4 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27cd7 jne 0x10f27d00 */
  if (!C.zf) { jmp_ind(0x10f27d00u); return; }
  /* 10f27cd9 cmp dword ptr [0x10f47b8c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10f47b8c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27cdf je 0x10f27d00 */
  if (C.zf) { jmp_ind(0x10f27d00u); return; }
  /* 10f27ce1 push esi */
  push32((uint32_t)(ESI));
  /* 10f27ce2 call 0x10f27884 */
  push32(0x10f27ce7u); f_10f27884();
  /* 10f27ce7 pop ecx */
  ECX = (pop32());
  /* 10f27ce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f27cea jne 0x10f27c20 */
  if (!C.zf) goto L_10f27c20;
  /* 10f27cf0 jmp 0x10f27d03 */
  jmp_ind(0x10f27d03u); return;
  /* 10f27cf2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10007c6e @ 0x10f27c6e (9 bytes, 4 insns) */
void f_10f27c6e(void) {
  FTRACE(0x10f27c6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27c6e push 9 */
  push32((uint32_t)(0x9u));
  /* 10f27c70 call 0x10f268f3 */
  push32(0x10f27c75u); f_10f268f3();
  /* 10f27c75 pop ecx */
  ECX = (pop32());
  /* 10f27c76 ret  */
  ESPCHK(0x10f27c6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf7 @ 0x10f27cf7 (9 bytes, 4 insns) */
void f_10f27cf7(void) {
  FTRACE(0x10f27cf7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27cf7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f27cf9 call 0x10f268f3 */
  push32(0x10f27cfeu); f_10f268f3();
  /* 10f27cfe pop ecx */
  ECX = (pop32());
  /* 10f27cff ret  */
  ESPCHK(0x10f27cf7u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d12 @ 0x10f27d12 (101 bytes, 34 insns) */
void f_10f27d12(void) {
  FTRACE(0x10f27d12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27d12 push esi */
  push32((uint32_t)(ESI));
  /* 10f27d13 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f27d17 cmp esi, dword ptr [0x10f49100] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f49100))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27d1d jae 0x10f27d5f */
  if (!C.cf) goto L_10f27d5f;
  /* 10f27d1f mov ecx, esi */
  ECX = (ESI);
  /* 10f27d21 mov eax, esi */
  EAX = (ESI);
  /* 10f27d23 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f27d26 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f27d29 mov ecx, dword ptr [ecx*4 + 0x10f49000] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f27d30 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10f27d33 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10f27d38 je 0x10f27d5f */
  if (C.zf) goto L_10f27d5f;
  /* 10f27d3a push edi */
  push32((uint32_t)(EDI));
  /* 10f27d3b push esi */
  push32((uint32_t)(ESI));
  /* 10f27d3c call 0x10f29b30 */
  push32(0x10f27d41u); f_10f29b30();
  /* 10f27d41 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f27d45 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f27d49 push esi */
  push32((uint32_t)(ESI));
  /* 10f27d4a call 0x10f27d77 */
  push32(0x10f27d4fu); f_10f27d77();
  /* 10f27d4f push esi */
  push32((uint32_t)(ESI));
  /* 10f27d50 mov edi, eax */
  EDI = (EAX);
  /* 10f27d52 call 0x10f29b8f */
  push32(0x10f27d57u); f_10f29b8f();
  /* 10f27d57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27d5a mov eax, edi */
  EAX = (EDI);
  /* 10f27d5c pop edi */
  EDI = (pop32());
  /* 10f27d5d pop esi */
  ESI = (pop32());
  /* 10f27d5e ret  */
  ESPCHK(0x10f27d12u, _esp0);
  ESP += 4; return;
L_10f27d5f:;
  /* 10f27d5f call 0x10f29a5d */
  push32(0x10f27d64u); f_10f29a5d();
  /* 10f27d64 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f27d6a call 0x10f29a66 */
  push32(0x10f27d6fu); f_10f29a66();
  /* 10f27d6f and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f27d72 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f27d75 pop esi */
  ESI = (pop32());
  /* 10f27d76 ret  */
  ESPCHK(0x10f27d12u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d77 @ 0x10f27d77 (115 bytes, 41 insns) */
void f_10f27d77(void) {
  FTRACE(0x10f27d77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27d77 push esi */
  push32((uint32_t)(ESI));
  /* 10f27d78 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f27d7c push edi */
  push32((uint32_t)(EDI));
  /* 10f27d7d push esi */
  push32((uint32_t)(ESI));
  /* 10f27d7e call 0x10f29aee */
  push32(0x10f27d83u); f_10f29aee();
  /* 10f27d83 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27d86 pop ecx */
  ECX = (pop32());
  /* 10f27d87 jne 0x10f27d96 */
  if (!C.zf) goto L_10f27d96;
  /* 10f27d89 call 0x10f29a5d */
  push32(0x10f27d8eu); f_10f29a5d();
  /* 10f27d8e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f27d94 jmp 0x10f27dc3 */
  goto L_10f27dc3;
L_10f27d96:;
  /* 10f27d96 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 10f27d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f27d9c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f27da0 push eax */
  push32((uint32_t)(EAX));
  /* 10f27da1 call dword ptr [0x10f2d048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d048))), 0x10f27da7u);
  /* 10f27da7 mov edi, eax */
  EDI = (EAX);
  /* 10f27da9 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27dac jne 0x10f27db6 */
  if (!C.zf) goto L_10f27db6;
  /* 10f27dae call dword ptr [0x10f2d0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b0))), 0x10f27db4u);
  /* 10f27db4 jmp 0x10f27db8 */
  goto L_10f27db8;
L_10f27db6:;
  /* 10f27db6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f27db8:;
  /* 10f27db8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f27dba je 0x10f27dc8 */
  if (C.zf) goto L_10f27dc8;
  /* 10f27dbc push eax */
  push32((uint32_t)(EAX));
  /* 10f27dbd call 0x10f299ea */
  push32(0x10f27dc2u); f_10f299ea();
  /* 10f27dc2 pop ecx */
  ECX = (pop32());
L_10f27dc3:;
  /* 10f27dc3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f27dc6 jmp 0x10f27de7 */
  goto L_10f27de7;
L_10f27dc8:;
  /* 10f27dc8 mov ecx, esi */
  ECX = (ESI);
  /* 10f27dca and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10f27dcd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f27dd0 mov eax, esi */
  EAX = (ESI);
  /* 10f27dd2 mov ecx, dword ptr [ecx*4 + 0x10f49000] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f27dd9 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10f27ddc and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10f27de1 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 10f27de5 mov eax, edi */
  EAX = (EDI);
L_10f27de7:;
  /* 10f27de7 pop edi */
  EDI = (pop32());
  /* 10f27de8 pop esi */
  ESI = (pop32());
  /* 10f27de9 ret  */
  ESPCHK(0x10f27d77u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dea @ 0x10f27dea (101 bytes, 34 insns) */
void f_10f27dea(void) {
  FTRACE(0x10f27deau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27dea push esi */
  push32((uint32_t)(ESI));
  /* 10f27deb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f27def cmp esi, dword ptr [0x10f49100] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f49100))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27df5 jae 0x10f27e37 */
  if (!C.cf) goto L_10f27e37;
  /* 10f27df7 mov ecx, esi */
  ECX = (ESI);
  /* 10f27df9 mov eax, esi */
  EAX = (ESI);
  /* 10f27dfb sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f27dfe and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f27e01 mov ecx, dword ptr [ecx*4 + 0x10f49000] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f27e08 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10f27e0b test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10f27e10 je 0x10f27e37 */
  if (C.zf) goto L_10f27e37;
  /* 10f27e12 push edi */
  push32((uint32_t)(EDI));
  /* 10f27e13 push esi */
  push32((uint32_t)(ESI));
  /* 10f27e14 call 0x10f29b30 */
  push32(0x10f27e19u); f_10f29b30();
  /* 10f27e19 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f27e1d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f27e21 push esi */
  push32((uint32_t)(ESI));
  /* 10f27e22 call 0x10f27e4f */
  push32(0x10f27e27u); f_10f27e4f();
  /* 10f27e27 push esi */
  push32((uint32_t)(ESI));
  /* 10f27e28 mov edi, eax */
  EDI = (EAX);
  /* 10f27e2a call 0x10f29b8f */
  push32(0x10f27e2fu); f_10f29b8f();
  /* 10f27e2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27e32 mov eax, edi */
  EAX = (EDI);
  /* 10f27e34 pop edi */
  EDI = (pop32());
  /* 10f27e35 pop esi */
  ESI = (pop32());
  /* 10f27e36 ret  */
  ESPCHK(0x10f27deau, _esp0);
  ESP += 4; return;
L_10f27e37:;
  /* 10f27e37 call 0x10f29a5d */
  push32(0x10f27e3cu); f_10f29a5d();
  /* 10f27e3c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f27e42 call 0x10f29a66 */
  push32(0x10f27e47u); f_10f29a66();
  /* 10f27e47 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f27e4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f27e4d pop esi */
  ESI = (pop32());
  /* 10f27e4e ret  */
  ESPCHK(0x10f27deau, _esp0);
  ESP += 4; return;
}

/* FUN_10007e4f @ 0x10f27e4f (395 bytes, 135 insns) */
void f_10f27e4f(void) {
  FTRACE(0x10f27e4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f27e4f push ebp */
  push32((uint32_t)(EBP));
  /* 10f27e50 mov ebp, esp */
  EBP = (ESP);
  /* 10f27e52 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27e58 push ebx */
  push32((uint32_t)(EBX));
  /* 10f27e59 push esi */
  push32((uint32_t)(ESI));
  /* 10f27e5a push edi */
  push32((uint32_t)(EDI));
  /* 10f27e5b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f27e5d cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27e60 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 10f27e63 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 10f27e66 jne 0x10f27e6f */
  if (!C.zf) goto L_10f27e6f;
L_10f27e68:;
  /* 10f27e68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f27e6a jmp 0x10f27fd5 */
  goto L_10f27fd5;
L_10f27e6f:;
  /* 10f27e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27e72 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f27e75 lea ebx, [eax*4 + 0x10f49000] */
  EBX = ((uint32_t)(EAX*4 + 0x10f49000));
  /* 10f27e7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f27e7f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f27e82 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10f27e85 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10f27e87 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10f27e8a test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 10f27e8f je 0x10f27e9f */
  if (C.zf) goto L_10f27e9f;
  /* 10f27e91 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f27e93 push edi */
  push32((uint32_t)(EDI));
  /* 10f27e94 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f27e97 call 0x10f27d77 */
  push32(0x10f27e9cu); f_10f27d77();
  /* 10f27e9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f27e9f:;
  /* 10f27e9f mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10f27ea1 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f27ea3 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 10f27ea7 je 0x10f27f6e */
  if (C.zf) goto L_10f27f6e;
  /* 10f27ead mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f27eb0 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27eb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f27eb6 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10f27eb9 jbe 0x10f27fa9 */
  if ((C.cf||C.zf)) goto L_10f27fa9;
L_10f27ebf:;
  /* 10f27ebf lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_10f27ec5:;
  /* 10f27ec5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f27ec8 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27ecb cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27ece jae 0x10f27ef9 */
  if (!C.cf) goto L_10f27ef9;
  /* 10f27ed0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f27ed3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f27ed6 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 10f27ed8 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f27edb jne 0x10f27ee4 */
  if (!C.zf) goto L_10f27ee4;
  /* 10f27edd inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10f27ee0 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10f27ee3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10f27ee4:;
  /* 10f27ee4 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f27ee6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f27ee7 mov ecx, eax */
  ECX = (EAX);
  /* 10f27ee9 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10f27eef sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27ef1 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27ef7 jl 0x10f27ec5 */
  if ((C.sf!=C.of)) goto L_10f27ec5;
L_10f27ef9:;
  /* 10f27ef9 mov edi, eax */
  EDI = (EAX);
  /* 10f27efb lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10f27f01 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27f03 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f27f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f27f08 push eax */
  push32((uint32_t)(EAX));
  /* 10f27f09 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10f27f0f push edi */
  push32((uint32_t)(EDI));
  /* 10f27f10 push eax */
  push32((uint32_t)(EAX));
  /* 10f27f11 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10f27f13 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 10f27f16 call dword ptr [0x10f2d06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d06c))), 0x10f27f1cu);
  /* 10f27f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f27f1e je 0x10f27f63 */
  if (C.zf) goto L_10f27f63;
  /* 10f27f20 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f27f23 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f27f26 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27f28 jl 0x10f27f35 */
  if ((C.sf!=C.of)) goto L_10f27f35;
  /* 10f27f2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f27f2d sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f27f30 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27f33 jb 0x10f27ebf */
  if (C.cf) goto L_10f27ebf;
L_10f27f35:;
  /* 10f27f35 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10f27f37:;
  /* 10f27f37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f27f3a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27f3c jne 0x10f27fd2 */
  if (!C.zf) goto L_10f27fd2;
  /* 10f27f42 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27f45 je 0x10f27fa9 */
  if (C.zf) goto L_10f27fa9;
  /* 10f27f47 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f27f49 pop esi */
  ESI = (pop32());
  /* 10f27f4a cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f27f4d jne 0x10f27f9b */
  if (!C.zf) goto L_10f27f9b;
  /* 10f27f4f call 0x10f29a5d */
  push32(0x10f27f54u); f_10f29a5d();
  /* 10f27f54 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f27f5a call 0x10f29a66 */
  push32(0x10f27f5fu); f_10f29a66();
  /* 10f27f5f mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10f27f61 jmp 0x10f27fa4 */
  goto L_10f27fa4;
L_10f27f63:;
  /* 10f27f63 call dword ptr [0x10f2d0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b0))), 0x10f27f69u);
  /* 10f27f69 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f27f6c jmp 0x10f27f35 */
  goto L_10f27f35;
L_10f27f6e:;
  /* 10f27f6e lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10f27f71 push edi */
  push32((uint32_t)(EDI));
  /* 10f27f72 push ecx */
  push32((uint32_t)(ECX));
  /* 10f27f73 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f27f76 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f27f79 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10f27f7b call dword ptr [0x10f2d06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d06c))), 0x10f27f81u);
  /* 10f27f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f27f83 je 0x10f27f90 */
  if (C.zf) goto L_10f27f90;
  /* 10f27f85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f27f88 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 10f27f8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f27f8e jmp 0x10f27f37 */
  goto L_10f27f37;
L_10f27f90:;
  /* 10f27f90 call dword ptr [0x10f2d0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b0))), 0x10f27f96u);
  /* 10f27f96 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f27f99 jmp 0x10f27f37 */
  goto L_10f27f37;
L_10f27f9b:;
  /* 10f27f9b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f27f9e call 0x10f299ea */
  push32(0x10f27fa3u); f_10f299ea();
  /* 10f27fa3 pop ecx */
  ECX = (pop32());
L_10f27fa4:;
  /* 10f27fa4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f27fa7 jmp 0x10f27fd5 */
  goto L_10f27fd5;
L_10f27fa9:;
  /* 10f27fa9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10f27fab test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 10f27fb0 je 0x10f27fbe */
  if (C.zf) goto L_10f27fbe;
  /* 10f27fb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f27fb5 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f27fb8 je 0x10f27e68 */
  if (C.zf) goto L_10f27e68;
L_10f27fbe:;
  /* 10f27fbe call 0x10f29a5d */
  push32(0x10f27fc3u); f_10f29a5d();
  /* 10f27fc3 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10f27fc9 call 0x10f29a66 */
  push32(0x10f27fceu); f_10f29a66();
  /* 10f27fce mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10f27fd0 jmp 0x10f27fa4 */
  goto L_10f27fa4;
L_10f27fd2:;
  /* 10f27fd2 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10f27fd5:;
  /* 10f27fd5 pop edi */
  EDI = (pop32());
  /* 10f27fd6 pop esi */
  ESI = (pop32());
  /* 10f27fd7 pop ebx */
  EBX = (pop32());
  /* 10f27fd8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f27fd9 ret  */
  ESPCHK(0x10f27e4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008096 @ 0x10f28096 (47 bytes, 17 insns) */
void f_10f28096(void) {
  FTRACE(0x10f28096u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28096 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f2809a mov ecx, 0x10f31a28 */
  ECX = (0x10f31a28u);
  /* 10f2809f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f280a1 jb 0x10f280ba */
  if (C.cf) goto L_10f280ba;
  /* 10f280a3 cmp eax, 0x10f31c88 */
  { uint32_t _a=(EAX),_b=(0x10f31c88u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f280a8 ja 0x10f280ba */
  if ((!C.cf&&!C.zf)) goto L_10f280ba;
  /* 10f280aa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f280ac sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f280af add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f280b2 push eax */
  push32((uint32_t)(EAX));
  /* 10f280b3 call 0x10f26892 */
  push32(0x10f280b8u); f_10f26892();
  /* 10f280b8 pop ecx */
  ECX = (pop32());
  /* 10f280b9 ret  */
  ESPCHK(0x10f28096u, _esp0);
  ESP += 4; return;
L_10f280ba:;
  /* 10f280ba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f280bd push eax */
  push32((uint32_t)(EAX));
  /* 10f280be call dword ptr [0x10f2d05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d05c))), 0x10f280c4u);
  /* 10f280c4 ret  */
  ESPCHK(0x10f28096u, _esp0);
  ESP += 4; return;
}

/* FUN_100080c5 @ 0x10f280c5 (35 bytes, 13 insns) */
void f_10f280c5(void) {
  FTRACE(0x10f280c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f280c5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f280c9 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f280cc jge 0x10f280d9 */
  if ((C.sf==C.of)) goto L_10f280d9;
  /* 10f280ce add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f280d1 push eax */
  push32((uint32_t)(EAX));
  /* 10f280d2 call 0x10f26892 */
  push32(0x10f280d7u); f_10f26892();
  /* 10f280d7 pop ecx */
  ECX = (pop32());
  /* 10f280d8 ret  */
  ESPCHK(0x10f280c5u, _esp0);
  ESP += 4; return;
L_10f280d9:;
  /* 10f280d9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f280dd add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f280e0 push eax */
  push32((uint32_t)(EAX));
  /* 10f280e1 call dword ptr [0x10f2d05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d05c))), 0x10f280e7u);
  /* 10f280e7 ret  */
  ESPCHK(0x10f280c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e8 @ 0x10f280e8 (47 bytes, 17 insns) */
void f_10f280e8(void) {
  FTRACE(0x10f280e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f280e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f280ec mov ecx, 0x10f31a28 */
  ECX = (0x10f31a28u);
  /* 10f280f1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f280f3 jb 0x10f2810c */
  if (C.cf) goto L_10f2810c;
  /* 10f280f5 cmp eax, 0x10f31c88 */
  { uint32_t _a=(EAX),_b=(0x10f31c88u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f280fa ja 0x10f2810c */
  if ((!C.cf&&!C.zf)) goto L_10f2810c;
  /* 10f280fc sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f280fe sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f28101 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28104 push eax */
  push32((uint32_t)(EAX));
  /* 10f28105 call 0x10f268f3 */
  push32(0x10f2810au); f_10f268f3();
  /* 10f2810a pop ecx */
  ECX = (pop32());
  /* 10f2810b ret  */
  ESPCHK(0x10f280e8u, _esp0);
  ESP += 4; return;
L_10f2810c:;
  /* 10f2810c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2810f push eax */
  push32((uint32_t)(EAX));
  /* 10f28110 call dword ptr [0x10f2d058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d058))), 0x10f28116u);
  /* 10f28116 ret  */
  ESPCHK(0x10f280e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10008117 @ 0x10f28117 (35 bytes, 13 insns) */
void f_10f28117(void) {
  FTRACE(0x10f28117u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28117 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f2811b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2811e jge 0x10f2812b */
  if ((C.sf==C.of)) goto L_10f2812b;
  /* 10f28120 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28123 push eax */
  push32((uint32_t)(EAX));
  /* 10f28124 call 0x10f268f3 */
  push32(0x10f28129u); f_10f268f3();
  /* 10f28129 pop ecx */
  ECX = (pop32());
  /* 10f2812a ret  */
  ESPCHK(0x10f28117u, _esp0);
  ESP += 4; return;
L_10f2812b:;
  /* 10f2812b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2812f add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28132 push eax */
  push32((uint32_t)(EAX));
  /* 10f28133 call dword ptr [0x10f2d058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d058))), 0x10f28139u);
  /* 10f28139 ret  */
  ESPCHK(0x10f28117u, _esp0);
  ESP += 4; return;
}

/* FUN_10008225 @ 0x10f28225 (429 bytes, 143 insns) */
void f_10f28225(void) {
  FTRACE(0x10f28225u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28225 push ebp */
  push32((uint32_t)(EBP));
  /* 10f28226 mov ebp, esp */
  EBP = (ESP);
  /* 10f28228 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2822b push ebx */
  push32((uint32_t)(EBX));
  /* 10f2822c push esi */
  push32((uint32_t)(ESI));
  /* 10f2822d push edi */
  push32((uint32_t)(EDI));
  /* 10f2822e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f28230 call 0x10f26892 */
  push32(0x10f28235u); f_10f26892();
  /* 10f28235 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f28238 call 0x10f283d2 */
  push32(0x10f2823du); f_10f283d2();
  /* 10f2823d mov ebx, eax */
  EBX = (EAX);
  /* 10f2823f pop ecx */
  ECX = (pop32());
  /* 10f28240 cmp ebx, dword ptr [0x10f47d74] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10f47d74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28246 pop ecx */
  ECX = (pop32());
  /* 10f28247 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10f2824a jne 0x10f28253 */
  if (!C.zf) goto L_10f28253;
L_10f2824c:;
  /* 10f2824c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f2824e jmp 0x10f283c3 */
  goto L_10f283c3;
L_10f28253:;
  /* 10f28253 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f28255 je 0x10f283b1 */
  if (C.zf) goto L_10f283b1;
  /* 10f2825b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f2825d mov eax, 0x10f31cb8 */
  EAX = (0x10f31cb8u);
L_10f28262:;
  /* 10f28262 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28264 je 0x10f282da */
  if (C.zf) goto L_10f282da;
  /* 10f28266 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28269 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f2826a cmp eax, 0x10f31da8 */
  { uint32_t _a=(EAX),_b=(0x10f31da8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2826f jl 0x10f28262 */
  if ((C.sf!=C.of)) goto L_10f28262;
  /* 10f28271 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10f28274 push eax */
  push32((uint32_t)(EAX));
  /* 10f28275 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28276 call dword ptr [0x10f2d044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d044))), 0x10f2827cu);
  /* 10f2827c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2827e pop esi */
  ESI = (pop32());
  /* 10f2827f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28281 jne 0x10f283a8 */
  if (!C.zf) goto L_10f283a8;
  /* 10f28287 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10f28289 and dword ptr [0x10f47fa4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10f47fa4)))&(0x0u); w32((uint32_t)(0x10f47fa4), (_r)); fl_logic(_r,32); }
  /* 10f28290 pop ecx */
  ECX = (pop32());
  /* 10f28291 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28293 mov edi, 0x10f47ea0 */
  EDI = (0x10f47ea0u);
  /* 10f28298 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2829b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f2829d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10f2829e mov dword ptr [0x10f47d74], ebx */
  w32((uint32_t)(0x10f47d74), (EBX));
  /* 10f282a4 jbe 0x10f28395 */
  if ((C.cf||C.zf)) goto L_10f28395;
  /* 10f282aa cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f282ae je 0x10f28370 */
  if (C.zf) goto L_10f28370;
  /* 10f282b4 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10f282b7:;
  /* 10f282b7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f282b9 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f282bb je 0x10f28370 */
  if (C.zf) goto L_10f28370;
  /* 10f282c1 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10f282c5 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10f282c8:;
  /* 10f282c8 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f282ca ja 0x10f28364 */
  if ((!C.cf&&!C.zf)) goto L_10f28364;
  /* 10f282d0 or byte ptr [eax + 0x10f47ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10f47ea1)))|(0x4u); w8((uint32_t)(EAX + 0x10f47ea1), (_r)); fl_logic(_r,8); }
  /* 10f282d7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f282d8 jmp 0x10f282c8 */
  goto L_10f282c8;
L_10f282da:;
  /* 10f282da and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f282de push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10f282e0 pop ecx */
  ECX = (pop32());
  /* 10f282e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f282e3 mov edi, 0x10f47ea0 */
  EDI = (0x10f47ea0u);
  /* 10f282e8 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10f282eb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f282ed shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10f282f0 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10f282f1 lea ebx, [esi + 0x10f31cc8] */
  EBX = ((uint32_t)(ESI + 0x10f31cc8));
L_10f282f7:;
  /* 10f282f7 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f282fa mov ecx, ebx */
  ECX = (EBX);
  /* 10f282fc je 0x10f2832a */
  if (C.zf) goto L_10f2832a;
L_10f282fe:;
  /* 10f282fe mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10f28301 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f28303 je 0x10f2832a */
  if (C.zf) goto L_10f2832a;
  /* 10f28305 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10f28308 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10f2830b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2830d ja 0x10f28323 */
  if ((!C.cf&&!C.zf)) goto L_10f28323;
  /* 10f2830f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f28312 mov dl, byte ptr [edx + 0x10f31cb0] */
  DL = (r8((uint32_t)(EDX + 0x10f31cb0)));
L_10f28318:;
  /* 10f28318 or byte ptr [eax + 0x10f47ea1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10f47ea1)))|(DL); w8((uint32_t)(EAX + 0x10f47ea1), (_r)); fl_logic(_r,8); }
  /* 10f2831e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2831f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28321 jbe 0x10f28318 */
  if ((C.cf||C.zf)) goto L_10f28318;
L_10f28323:;
  /* 10f28323 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f28324 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f28325 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f28328 jne 0x10f282fe */
  if (!C.zf) goto L_10f282fe;
L_10f2832a:;
  /* 10f2832a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f2832d add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28330 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28334 jb 0x10f282f7 */
  if (C.cf) goto L_10f282f7;
  /* 10f28336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f28339 mov dword ptr [0x10f47d8c], 1 */
  w32((uint32_t)(0x10f47d8c), (0x1u));
  /* 10f28343 push eax */
  push32((uint32_t)(EAX));
  /* 10f28344 mov dword ptr [0x10f47d74], eax */
  w32((uint32_t)(0x10f47d74), (EAX));
  /* 10f28349 call 0x10f2841c */
  push32(0x10f2834eu); f_10f2841c();
  /* 10f2834e lea esi, [esi + 0x10f31cbc] */
  ESI = ((uint32_t)(ESI + 0x10f31cbc));
  /* 10f28354 mov edi, 0x10f47d80 */
  EDI = (0x10f47d80u);
  /* 10f28359 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f2835a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f2835b pop ecx */
  ECX = (pop32());
  /* 10f2835c mov dword ptr [0x10f47fa4], eax */
  w32((uint32_t)(0x10f47fa4), (EAX));
  /* 10f28361 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f28362 jmp 0x10f283b6 */
  goto L_10f283b6;
L_10f28364:;
  /* 10f28364 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f28365 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f28366 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2836a jne 0x10f282b7 */
  if (!C.zf) goto L_10f282b7;
L_10f28370:;
  /* 10f28370 mov eax, esi */
  EAX = (ESI);
L_10f28372:;
  /* 10f28372 or byte ptr [eax + 0x10f47ea1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10f47ea1)))|(0x8u); w8((uint32_t)(EAX + 0x10f47ea1), (_r)); fl_logic(_r,8); }
  /* 10f28379 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f2837a cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2837f jb 0x10f28372 */
  if (C.cf) goto L_10f28372;
  /* 10f28381 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28382 call 0x10f2841c */
  push32(0x10f28387u); f_10f2841c();
  /* 10f28387 pop ecx */
  ECX = (pop32());
  /* 10f28388 mov dword ptr [0x10f47fa4], eax */
  w32((uint32_t)(0x10f47fa4), (EAX));
  /* 10f2838d mov dword ptr [0x10f47d8c], esi */
  w32((uint32_t)(0x10f47d8c), (ESI));
  /* 10f28393 jmp 0x10f2839c */
  goto L_10f2839c;
L_10f28395:;
  /* 10f28395 and dword ptr [0x10f47d8c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10f47d8c)))&(0x0u); w32((uint32_t)(0x10f47d8c), (_r)); fl_logic(_r,32); }
L_10f2839c:;
  /* 10f2839c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2839e mov edi, 0x10f47d80 */
  EDI = (0x10f47d80u);
  /* 10f283a3 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10f283a4 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10f283a5 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10f283a6 jmp 0x10f283b6 */
  goto L_10f283b6;
L_10f283a8:;
  /* 10f283a8 cmp dword ptr [0x10f47b94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f47b94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f283af je 0x10f283c0 */
  if (C.zf) goto L_10f283c0;
L_10f283b1:;
  /* 10f283b1 call 0x10f2844f */
  push32(0x10f283b6u); f_10f2844f();
L_10f283b6:;
  /* 10f283b6 call 0x10f28478 */
  push32(0x10f283bbu); f_10f28478();
  /* 10f283bb jmp 0x10f2824c */
  goto L_10f2824c;
L_10f283c0:;
  /* 10f283c0 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10f283c3:;
  /* 10f283c3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f283c5 call 0x10f268f3 */
  push32(0x10f283cau); f_10f268f3();
  /* 10f283ca pop ecx */
  ECX = (pop32());
  /* 10f283cb mov eax, esi */
  EAX = (ESI);
  /* 10f283cd pop edi */
  EDI = (pop32());
  /* 10f283ce pop esi */
  ESI = (pop32());
  /* 10f283cf pop ebx */
  EBX = (pop32());
  /* 10f283d0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f283d1 ret  */
  ESPCHK(0x10f28225u, _esp0);
  ESP += 4; return;
}

/* FUN_100083d2 @ 0x10f283d2 (74 bytes, 15 insns) */
void f_10f283d2(void) {
  FTRACE(0x10f283d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f283d2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f283d6 and dword ptr [0x10f47b94], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10f47b94)))&(0x0u); w32((uint32_t)(0x10f47b94), (_r)); fl_logic(_r,32); }
  /* 10f283dd cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f283e0 jne 0x10f283f2 */
  if (!C.zf) goto L_10f283f2;
  /* 10f283e2 mov dword ptr [0x10f47b94], 1 */
  w32((uint32_t)(0x10f47b94), (0x1u));
  /* 10f283ec jmp dword ptr [0x10f2d03c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10f2d03c)))); return;
L_10f283f2:;
  /* 10f283f2 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f283f5 jne 0x10f28407 */
  if (!C.zf) goto L_10f28407;
  /* 10f283f7 mov dword ptr [0x10f47b94], 1 */
  w32((uint32_t)(0x10f47b94), (0x1u));
  /* 10f28401 jmp dword ptr [0x10f2d040] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10f2d040)))); return;
L_10f28407:;
  /* 10f28407 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2840a jne 0x10f2841b */
  if (!C.zf) goto L_10f2841b;
  /* 10f2840c mov eax, dword ptr [0x10f47be0] */
  EAX = (r32((uint32_t)(0x10f47be0)));
  /* 10f28411 mov dword ptr [0x10f47b94], 1 */
  w32((uint32_t)(0x10f47b94), (0x1u));
L_10f2841b:;
  /* 10f2841b ret  */
  ESPCHK(0x10f283d2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000841c @ 0x10f2841c (51 bytes, 19 insns) */
void f_10f2841c(void) {
  FTRACE(0x10f2841cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2841c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f28420 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28425 je 0x10f28449 */
  if (C.zf) goto L_10f28449;
  /* 10f28427 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2842a je 0x10f28443 */
  if (C.zf) goto L_10f28443;
  /* 10f2842c sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2842f je 0x10f2843d */
  if (C.zf) goto L_10f2843d;
  /* 10f28431 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f28432 je 0x10f28437 */
  if (C.zf) goto L_10f28437;
  /* 10f28434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28436 ret  */
  ESPCHK(0x10f2841cu, _esp0);
  ESP += 4; return;
L_10f28437:;
  /* 10f28437 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10f2843c ret  */
  ESPCHK(0x10f2841cu, _esp0);
  ESP += 4; return;
L_10f2843d:;
  /* 10f2843d mov eax, 0x412 */
  EAX = (0x412u);
  /* 10f28442 ret  */
  ESPCHK(0x10f2841cu, _esp0);
  ESP += 4; return;
L_10f28443:;
  /* 10f28443 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10f28448 ret  */
  ESPCHK(0x10f2841cu, _esp0);
  ESP += 4; return;
L_10f28449:;
  /* 10f28449 mov eax, 0x411 */
  EAX = (0x411u);
  /* 10f2844e ret  */
  ESPCHK(0x10f2841cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000844f @ 0x10f2844f (41 bytes, 17 insns) */
void f_10f2844f(void) {
  FTRACE(0x10f2844fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2844f push edi */
  push32((uint32_t)(EDI));
  /* 10f28450 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10f28452 pop ecx */
  ECX = (pop32());
  /* 10f28453 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28455 mov edi, 0x10f47ea0 */
  EDI = (0x10f47ea0u);
  /* 10f2845a rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f2845c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10f2845d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2845f mov edi, 0x10f47d80 */
  EDI = (0x10f47d80u);
  /* 10f28464 mov dword ptr [0x10f47d74], eax */
  w32((uint32_t)(0x10f47d74), (EAX));
  /* 10f28469 mov dword ptr [0x10f47d8c], eax */
  w32((uint32_t)(0x10f47d8c), (EAX));
  /* 10f2846e mov dword ptr [0x10f47fa4], eax */
  w32((uint32_t)(0x10f47fa4), (EAX));
  /* 10f28473 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10f28474 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10f28475 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10f28476 pop edi */
  EDI = (pop32());
  /* 10f28477 ret  */
  ESPCHK(0x10f2844fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008478 @ 0x10f28478 (389 bytes, 124 insns) */
void f_10f28478(void) {
  FTRACE(0x10f28478u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28478 push ebp */
  push32((uint32_t)(EBP));
  /* 10f28479 mov ebp, esp */
  EBP = (ESP);
  /* 10f2847b sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28481 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10f28484 push esi */
  push32((uint32_t)(ESI));
  /* 10f28485 push eax */
  push32((uint32_t)(EAX));
  /* 10f28486 push dword ptr [0x10f47d74] */
  push32((uint32_t)(r32((uint32_t)(0x10f47d74))));
  /* 10f2848c call dword ptr [0x10f2d044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d044))), 0x10f28492u);
  /* 10f28492 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28495 jne 0x10f285b1 */
  if (!C.zf) goto L_10f285b1;
  /* 10f2849b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2849d mov esi, 0x100 */
  ESI = (0x100u);
L_10f284a2:;
  /* 10f284a2 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10f284a9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f284aa cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f284ac jb 0x10f284a2 */
  if (C.cf) goto L_10f284a2;
  /* 10f284ae mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10f284b1 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10f284b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f284ba je 0x10f284f3 */
  if (C.zf) goto L_10f284f3;
  /* 10f284bc push ebx */
  push32((uint32_t)(EBX));
  /* 10f284bd push edi */
  push32((uint32_t)(EDI));
  /* 10f284be lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10f284c1:;
  /* 10f284c1 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10f284c4 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10f284c7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f284c9 ja 0x10f284e8 */
  if ((!C.cf&&!C.zf)) goto L_10f284e8;
  /* 10f284cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f284cd lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10f284d4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f284d5 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10f284da mov ebx, ecx */
  EBX = (ECX);
  /* 10f284dc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f284df rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f284e1 mov ecx, ebx */
  ECX = (EBX);
  /* 10f284e3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10f284e6 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10f284e8:;
  /* 10f284e8 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f284e9 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f284ea mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10f284ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f284ef jne 0x10f284c1 */
  if (!C.zf) goto L_10f284c1;
  /* 10f284f1 pop edi */
  EDI = (pop32());
  /* 10f284f2 pop ebx */
  EBX = (pop32());
L_10f284f3:;
  /* 10f284f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f284f5 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10f284fb push dword ptr [0x10f47fa4] */
  push32((uint32_t)(r32((uint32_t)(0x10f47fa4))));
  /* 10f28501 push dword ptr [0x10f47d74] */
  push32((uint32_t)(r32((uint32_t)(0x10f47d74))));
  /* 10f28507 push eax */
  push32((uint32_t)(EAX));
  /* 10f28508 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10f2850e push esi */
  push32((uint32_t)(ESI));
  /* 10f2850f push eax */
  push32((uint32_t)(EAX));
  /* 10f28510 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28512 call 0x10f28d4d */
  push32(0x10f28517u); f_10f28d4d();
  /* 10f28517 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f28519 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10f2851f push dword ptr [0x10f47d74] */
  push32((uint32_t)(r32((uint32_t)(0x10f47d74))));
  /* 10f28525 push esi */
  push32((uint32_t)(ESI));
  /* 10f28526 push eax */
  push32((uint32_t)(EAX));
  /* 10f28527 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10f2852d push esi */
  push32((uint32_t)(ESI));
  /* 10f2852e push eax */
  push32((uint32_t)(EAX));
  /* 10f2852f push esi */
  push32((uint32_t)(ESI));
  /* 10f28530 push dword ptr [0x10f47fa4] */
  push32((uint32_t)(r32((uint32_t)(0x10f47fa4))));
  /* 10f28536 call 0x10f28e96 */
  push32(0x10f2853bu); f_10f28e96();
  /* 10f2853b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2853d lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10f28543 push dword ptr [0x10f47d74] */
  push32((uint32_t)(r32((uint32_t)(0x10f47d74))));
  /* 10f28549 push esi */
  push32((uint32_t)(ESI));
  /* 10f2854a push eax */
  push32((uint32_t)(EAX));
  /* 10f2854b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10f28551 push esi */
  push32((uint32_t)(ESI));
  /* 10f28552 push eax */
  push32((uint32_t)(EAX));
  /* 10f28553 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10f28558 push dword ptr [0x10f47fa4] */
  push32((uint32_t)(r32((uint32_t)(0x10f47fa4))));
  /* 10f2855e call 0x10f28e96 */
  push32(0x10f28563u); f_10f28e96();
  /* 10f28563 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28568 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10f2856e:;
  /* 10f2856e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10f28571 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10f28574 je 0x10f2858c */
  if (C.zf) goto L_10f2858c;
  /* 10f28576 or byte ptr [eax + 0x10f47ea1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10f47ea1)))|(0x10u); w8((uint32_t)(EAX + 0x10f47ea1), (_r)); fl_logic(_r,8); }
  /* 10f2857d mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10f28584:;
  /* 10f28584 mov byte ptr [eax + 0x10f47da0], dl */
  w8((uint32_t)(EAX + 0x10f47da0), (DL));
  /* 10f2858a jmp 0x10f285a8 */
  goto L_10f285a8;
L_10f2858c:;
  /* 10f2858c test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10f2858f je 0x10f285a1 */
  if (C.zf) goto L_10f285a1;
  /* 10f28591 or byte ptr [eax + 0x10f47ea1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10f47ea1)))|(0x20u); w8((uint32_t)(EAX + 0x10f47ea1), (_r)); fl_logic(_r,8); }
  /* 10f28598 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10f2859f jmp 0x10f28584 */
  goto L_10f28584;
L_10f285a1:;
  /* 10f285a1 and byte ptr [eax + 0x10f47da0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10f47da0)))&(0x0u); w8((uint32_t)(EAX + 0x10f47da0), (_r)); fl_logic(_r,8); }
L_10f285a8:;
  /* 10f285a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f285a9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f285aa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f285ab cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f285ad jb 0x10f2856e */
  if (C.cf) goto L_10f2856e;
  /* 10f285af jmp 0x10f285fa */
  goto L_10f285fa;
L_10f285b1:;
  /* 10f285b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f285b3 mov esi, 0x100 */
  ESI = (0x100u);
L_10f285b8:;
  /* 10f285b8 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f285bb jb 0x10f285d6 */
  if (C.cf) goto L_10f285d6;
  /* 10f285bd cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f285c0 ja 0x10f285d6 */
  if ((!C.cf&&!C.zf)) goto L_10f285d6;
  /* 10f285c2 or byte ptr [eax + 0x10f47ea1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10f47ea1)))|(0x10u); w8((uint32_t)(EAX + 0x10f47ea1), (_r)); fl_logic(_r,8); }
  /* 10f285c9 mov cl, al */
  CL = (AL);
  /* 10f285cb add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10f285ce:;
  /* 10f285ce mov byte ptr [eax + 0x10f47da0], cl */
  w8((uint32_t)(EAX + 0x10f47da0), (CL));
  /* 10f285d4 jmp 0x10f285f5 */
  goto L_10f285f5;
L_10f285d6:;
  /* 10f285d6 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f285d9 jb 0x10f285ee */
  if (C.cf) goto L_10f285ee;
  /* 10f285db cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f285de ja 0x10f285ee */
  if ((!C.cf&&!C.zf)) goto L_10f285ee;
  /* 10f285e0 or byte ptr [eax + 0x10f47ea1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10f47ea1)))|(0x20u); w8((uint32_t)(EAX + 0x10f47ea1), (_r)); fl_logic(_r,8); }
  /* 10f285e7 mov cl, al */
  CL = (AL);
  /* 10f285e9 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f285ec jmp 0x10f285ce */
  goto L_10f285ce;
L_10f285ee:;
  /* 10f285ee and byte ptr [eax + 0x10f47da0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10f47da0)))&(0x0u); w8((uint32_t)(EAX + 0x10f47da0), (_r)); fl_logic(_r,8); }
L_10f285f5:;
  /* 10f285f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f285f6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f285f8 jb 0x10f285b8 */
  if (C.cf) goto L_10f285b8;
L_10f285fa:;
  /* 10f285fa pop esi */
  ESI = (pop32());
  /* 10f285fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f285fc ret  */
  ESPCHK(0x10f28478u, _esp0);
  ESP += 4; return;
}

/* FUN_100085fd @ 0x10f285fd (28 bytes, 7 insns) */
void f_10f285fd(void) {
  FTRACE(0x10f285fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f285fd cmp dword ptr [0x10f49108], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f49108))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28604 jne 0x10f28618 */
  if (!C.zf) goto L_10f28618;
  /* 10f28606 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10f28608 call 0x10f28225 */
  push32(0x10f2860du); f_10f28225();
  /* 10f2860d pop ecx */
  ECX = (pop32());
  /* 10f2860e mov dword ptr [0x10f49108], 1 */
  w32((uint32_t)(0x10f49108), (0x1u));
L_10f28618:;
  /* 10f28618 ret  */
  ESPCHK(0x10f285fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008619 @ 0x10f28619 (23 bytes, 7 insns) */
void f_10f28619(void) {
  FTRACE(0x10f28619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28619 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f2861b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10f2861f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10f28623 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10f28627 call 0x10f28630 */
  push32(0x10f2862cu); f_10f28630();
  /* 10f2862c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2862f ret  */
  ESPCHK(0x10f28619u, _esp0);
  ESP += 4; return;
}

/* FUN_10008630 @ 0x10f28630 (517 bytes, 195 insns) */
void f_10f28630(void) {
  FTRACE(0x10f28630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28630 push ebp */
  push32((uint32_t)(EBP));
  /* 10f28631 mov ebp, esp */
  EBP = (ESP);
  /* 10f28633 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28636 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28637 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10f2863b push esi */
  push32((uint32_t)(ESI));
  /* 10f2863c push edi */
  push32((uint32_t)(EDI));
  /* 10f2863d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f28640 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f28642 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 10f28645 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_10f28648:;
  /* 10f28648 cmp dword ptr [0x10f31750], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2864f jle 0x10f28660 */
  if ((C.zf||C.sf!=C.of)) goto L_10f28660;
  /* 10f28651 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f28654 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f28656 push eax */
  push32((uint32_t)(EAX));
  /* 10f28657 call 0x10f26c3e */
  push32(0x10f2865cu); f_10f26c3e();
  /* 10f2865c pop ecx */
  ECX = (pop32());
  /* 10f2865d pop ecx */
  ECX = (pop32());
  /* 10f2865e jmp 0x10f2866f */
  goto L_10f2866f;
L_10f28660:;
  /* 10f28660 mov ecx, dword ptr [0x10f3175c] */
  ECX = (r32((uint32_t)(0x10f3175c)));
  /* 10f28666 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f28669 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10f2866c and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_10f2866f:;
  /* 10f2866f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28671 je 0x10f28678 */
  if (C.zf) goto L_10f28678;
  /* 10f28673 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 10f28675 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f28676 jmp 0x10f28648 */
  goto L_10f28648;
L_10f28678:;
  /* 10f28678 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2867b mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10f2867e jne 0x10f28686 */
  if (!C.zf) goto L_10f28686;
  /* 10f28680 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 10f28684 jmp 0x10f2868b */
  goto L_10f2868b;
L_10f28686:;
  /* 10f28686 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f28689 jne 0x10f28691 */
  if (!C.zf) goto L_10f28691;
L_10f2868b:;
  /* 10f2868b mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 10f2868d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f2868e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_10f28691:;
  /* 10f28691 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f28694 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28696 jl 0x10f28825 */
  if ((C.sf!=C.of)) goto L_10f28825;
  /* 10f2869c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2869f je 0x10f28825 */
  if (C.zf) goto L_10f28825;
  /* 10f286a5 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f286a8 jg 0x10f28825 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f28825;
  /* 10f286ae push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f286b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f286b2 pop ecx */
  ECX = (pop32());
  /* 10f286b3 jne 0x10f286d9 */
  if (!C.zf) goto L_10f286d9;
  /* 10f286b5 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f286b8 je 0x10f286c3 */
  if (C.zf) goto L_10f286c3;
  /* 10f286ba mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 10f286c1 jmp 0x10f286f5 */
  goto L_10f286f5;
L_10f286c3:;
  /* 10f286c3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f286c5 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f286c7 je 0x10f286d6 */
  if (C.zf) goto L_10f286d6;
  /* 10f286c9 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f286cb je 0x10f286d6 */
  if (C.zf) goto L_10f286d6;
  /* 10f286cd mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 10f286d4 jmp 0x10f286f5 */
  goto L_10f286f5;
L_10f286d6:;
  /* 10f286d6 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10f286d9:;
  /* 10f286d9 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f286dc jne 0x10f286f5 */
  if (!C.zf) goto L_10f286f5;
  /* 10f286de cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f286e1 jne 0x10f286f5 */
  if (!C.zf) goto L_10f286f5;
  /* 10f286e3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f286e5 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f286e7 je 0x10f286ed */
  if (C.zf) goto L_10f286ed;
  /* 10f286e9 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f286eb jne 0x10f286f5 */
  if (!C.zf) goto L_10f286f5;
L_10f286ed:;
  /* 10f286ed mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f286f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f286f1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f286f2 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_10f286f5:;
  /* 10f286f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f286f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f286fa div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f286fd mov edi, 0x103 */
  EDI = (0x103u);
  /* 10f28702 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f28705:;
  /* 10f28705 cmp dword ptr [0x10f31750], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2870c movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 10f2870f jle 0x10f2871d */
  if ((C.zf||C.sf!=C.of)) goto L_10f2871d;
  /* 10f28711 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f28713 push esi */
  push32((uint32_t)(ESI));
  /* 10f28714 call 0x10f26c3e */
  push32(0x10f28719u); f_10f26c3e();
  /* 10f28719 pop ecx */
  ECX = (pop32());
  /* 10f2871a pop ecx */
  ECX = (pop32());
  /* 10f2871b jmp 0x10f28728 */
  goto L_10f28728;
L_10f2871d:;
  /* 10f2871d mov eax, dword ptr [0x10f3175c] */
  EAX = (r32((uint32_t)(0x10f3175c)));
  /* 10f28722 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 10f28725 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10f28728:;
  /* 10f28728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2872a je 0x10f28734 */
  if (C.zf) goto L_10f28734;
  /* 10f2872c movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10f2872f sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28732 jmp 0x10f28766 */
  goto L_10f28766;
L_10f28734:;
  /* 10f28734 cmp dword ptr [0x10f31750], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2873b jle 0x10f28748 */
  if ((C.zf||C.sf!=C.of)) goto L_10f28748;
  /* 10f2873d push edi */
  push32((uint32_t)(EDI));
  /* 10f2873e push esi */
  push32((uint32_t)(ESI));
  /* 10f2873f call 0x10f26c3e */
  push32(0x10f28744u); f_10f26c3e();
  /* 10f28744 pop ecx */
  ECX = (pop32());
  /* 10f28745 pop ecx */
  ECX = (pop32());
  /* 10f28746 jmp 0x10f28753 */
  goto L_10f28753;
L_10f28748:;
  /* 10f28748 mov eax, dword ptr [0x10f3175c] */
  EAX = (r32((uint32_t)(0x10f3175c)));
  /* 10f2874d mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 10f28751 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_10f28753:;
  /* 10f28753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28755 je 0x10f287a1 */
  if (C.zf) goto L_10f287a1;
  /* 10f28757 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10f2875a push eax */
  push32((uint32_t)(EAX));
  /* 10f2875b call 0x10f29d69 */
  push32(0x10f28760u); f_10f29d69();
  /* 10f28760 pop ecx */
  ECX = (pop32());
  /* 10f28761 mov ecx, eax */
  ECX = (EAX);
  /* 10f28763 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_10f28766:;
  /* 10f28766 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28769 jae 0x10f287a1 */
  if (!C.cf) goto L_10f287a1;
  /* 10f2876b mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 10f2876e or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 10f28772 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28775 jb 0x10f2878b */
  if (C.cf) goto L_10f2878b;
  /* 10f28777 jne 0x10f28785 */
  if (!C.zf) goto L_10f28785;
  /* 10f28779 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2877c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f2877e div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f28781 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28783 jbe 0x10f2878b */
  if ((C.cf||C.zf)) goto L_10f2878b;
L_10f28785:;
  /* 10f28785 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 10f28789 jmp 0x10f28794 */
  goto L_10f28794;
L_10f2878b:;
  /* 10f2878b imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f2878f add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28791 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_10f28794:;
  /* 10f28794 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f28797 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f2879a mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10f2879c jmp 0x10f28705 */
  goto L_10f28705;
L_10f287a1:;
  /* 10f287a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f287a4 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 10f287a7 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f287aa test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10f287ac jne 0x10f287be */
  if (!C.zf) goto L_10f287be;
  /* 10f287ae test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f287b0 je 0x10f287b8 */
  if (C.zf) goto L_10f287b8;
  /* 10f287b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f287b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f287b8:;
  /* 10f287b8 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10f287bc jmp 0x10f28809 */
  goto L_10f28809;
L_10f287be:;
  /* 10f287be test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 10f287c0 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 10f287c5 jne 0x10f287e2 */
  if (!C.zf) goto L_10f287e2;
  /* 10f287c7 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10f287c9 jne 0x10f28809 */
  if (!C.zf) goto L_10f28809;
  /* 10f287cb and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10f287ce je 0x10f287d9 */
  if (C.zf) goto L_10f287d9;
  /* 10f287d0 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f287d7 ja 0x10f287e2 */
  if ((!C.cf&&!C.zf)) goto L_10f287e2;
L_10f287d9:;
  /* 10f287d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f287db jne 0x10f28809 */
  if (!C.zf) goto L_10f28809;
  /* 10f287dd cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f287e0 jbe 0x10f28809 */
  if ((C.cf||C.zf)) goto L_10f28809;
L_10f287e2:;
  /* 10f287e2 call 0x10f29a5d */
  push32(0x10f287e7u); f_10f29a5d();
  /* 10f287e7 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 10f287eb mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 10f287f1 je 0x10f287f9 */
  if (C.zf) goto L_10f287f9;
  /* 10f287f3 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10f287f7 jmp 0x10f28809 */
  goto L_10f28809;
L_10f287f9:;
  /* 10f287f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f287fc and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10f287fe neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 10f28800 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28802 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f28804 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28806 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f28809:;
  /* 10f28809 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f2880b je 0x10f28812 */
  if (C.zf) goto L_10f28812;
  /* 10f2880d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f28810 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_10f28812:;
  /* 10f28812 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 10f28816 je 0x10f28820 */
  if (C.zf) goto L_10f28820;
  /* 10f28818 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f2881b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2881d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f28820:;
  /* 10f28820 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f28823 jmp 0x10f28830 */
  goto L_10f28830;
L_10f28825:;
  /* 10f28825 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f28828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2882a je 0x10f2882e */
  if (C.zf) goto L_10f2882e;
  /* 10f2882c mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_10f2882e:;
  /* 10f2882e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f28830:;
  /* 10f28830 pop edi */
  EDI = (pop32());
  /* 10f28831 pop esi */
  ESI = (pop32());
  /* 10f28832 pop ebx */
  EBX = (pop32());
  /* 10f28833 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f28834 ret  */
  ESPCHK(0x10f28630u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10f28850 (193 bytes, 90 insns) */
void f_10f28850(void) {
  FTRACE(0x10f28850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28850 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28852 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10f28856 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28857 mov ebx, eax */
  EBX = (EAX);
  /* 10f28859 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f2885c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f28860 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10f28866 je 0x10f2887b */
  if (C.zf) goto L_10f2887b;
L_10f28868:;
  /* 10f28868 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10f2886a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f2886b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2886d je 0x10f28840 */
  if (C.zf) { jmp_ind(0x10f28840u); return; }
  /* 10f2886f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10f28871 je 0x10f288c4 */
  if (C.zf) goto L_10f288c4;
  /* 10f28873 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10f28879 jne 0x10f28868 */
  if (!C.zf) goto L_10f28868;
L_10f2887b:;
  /* 10f2887b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10f2887d push edi */
  push32((uint32_t)(EDI));
  /* 10f2887e mov eax, ebx */
  EAX = (EBX);
  /* 10f28880 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10f28883 push esi */
  push32((uint32_t)(ESI));
  /* 10f28884 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10f28886:;
  /* 10f28886 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10f28888 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10f2888d mov eax, ecx */
  EAX = (ECX);
  /* 10f2888f mov esi, edi */
  ESI = (EDI);
  /* 10f28891 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10f28893 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28895 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28897 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f2889a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2889d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10f2889f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10f288a1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f288a4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10f288aa jne 0x10f288c8 */
  if (!C.zf) goto L_10f288c8;
  /* 10f288ac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10f288b1 je 0x10f28886 */
  if (C.zf) goto L_10f28886;
  /* 10f288b3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10f288b8 jne 0x10f288c2 */
  if (!C.zf) goto L_10f288c2;
  /* 10f288ba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10f288c0 jne 0x10f28886 */
  if (!C.zf) goto L_10f28886;
L_10f288c2:;
  /* 10f288c2 pop esi */
  ESI = (pop32());
  /* 10f288c3 pop edi */
  EDI = (pop32());
L_10f288c4:;
  /* 10f288c4 pop ebx */
  EBX = (pop32());
  /* 10f288c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f288c7 ret  */
  ESPCHK(0x10f28850u, _esp0);
  ESP += 4; return;
L_10f288c8:;
  /* 10f288c8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10f288cb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f288cd je 0x10f28905 */
  if (C.zf) goto L_10f28905;
  /* 10f288cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f288d1 je 0x10f288c2 */
  if (C.zf) goto L_10f288c2;
  /* 10f288d3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f288d5 je 0x10f288fe */
  if (C.zf) goto L_10f288fe;
  /* 10f288d7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f288d9 je 0x10f288c2 */
  if (C.zf) goto L_10f288c2;
  /* 10f288db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f288de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f288e0 je 0x10f288f7 */
  if (C.zf) goto L_10f288f7;
  /* 10f288e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f288e4 je 0x10f288c2 */
  if (C.zf) goto L_10f288c2;
  /* 10f288e6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f288e8 je 0x10f288f0 */
  if (C.zf) goto L_10f288f0;
  /* 10f288ea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f288ec je 0x10f288c2 */
  if (C.zf) goto L_10f288c2;
  /* 10f288ee jmp 0x10f28886 */
  goto L_10f28886;
L_10f288f0:;
  /* 10f288f0 pop esi */
  ESI = (pop32());
  /* 10f288f1 pop edi */
  EDI = (pop32());
  /* 10f288f2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10f288f5 pop ebx */
  EBX = (pop32());
  /* 10f288f6 ret  */
  ESPCHK(0x10f28850u, _esp0);
  ESP += 4; return;
L_10f288f7:;
  /* 10f288f7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10f288fa pop esi */
  ESI = (pop32());
  /* 10f288fb pop edi */
  EDI = (pop32());
  /* 10f288fc pop ebx */
  EBX = (pop32());
  /* 10f288fd ret  */
  ESPCHK(0x10f28850u, _esp0);
  ESP += 4; return;
L_10f288fe:;
  /* 10f288fe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10f28901 pop esi */
  ESI = (pop32());
  /* 10f28902 pop edi */
  EDI = (pop32());
  /* 10f28903 pop ebx */
  EBX = (pop32());
  /* 10f28904 ret  */
  ESPCHK(0x10f28850u, _esp0);
  ESP += 4; return;
L_10f28905:;
  /* 10f28905 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10f28908 pop esi */
  ESI = (pop32());
  /* 10f28909 pop edi */
  EDI = (pop32());
  /* 10f2890a pop ebx */
  EBX = (pop32());
  /* 10f2890b ret  */
  ESPCHK(0x10f28850u, _esp0);
  ESP += 4; return;
  /* 10f2890c int3  */
  x86_unimpl("int3 @ 0x10f2890c");
  /* 10f2890d int3  */
  x86_unimpl("int3 @ 0x10f2890d");
  /* 10f2890e int3  */
  x86_unimpl("int3 @ 0x10f2890e");
  /* 10f2890f int3  */
  x86_unimpl("int3 @ 0x10f2890f");
}

/* _strstr @ 0x10f28910 (128 bytes, 66 insns) */
void f_10f28910(void) {
  FTRACE(0x10f28910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28910 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f28914 push edi */
  push32((uint32_t)(EDI));
  /* 10f28915 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28916 push esi */
  push32((uint32_t)(ESI));
  /* 10f28917 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f28919 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f2891d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f2891f je 0x10f2898a */
  if (C.zf) goto L_10f2898a;
  /* 10f28921 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 10f28924 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10f28926 je 0x10f28977 */
  if (C.zf) goto L_10f28977;
L_10f28928:;
  /* 10f28928 mov esi, edi */
  ESI = (EDI);
  /* 10f2892a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f2892e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10f28930 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f28931 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f28933 je 0x10f2894a */
  if (C.zf) goto L_10f2894a;
  /* 10f28935 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f28937 je 0x10f28944 */
  if (C.zf) goto L_10f28944;
L_10f28939:;
  /* 10f28939 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f2893b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10f2893c:;
  /* 10f2893c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2893e je 0x10f2894a */
  if (C.zf) goto L_10f2894a;
  /* 10f28940 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f28942 jne 0x10f28939 */
  if (!C.zf) goto L_10f28939;
L_10f28944:;
  /* 10f28944 pop esi */
  ESI = (pop32());
  /* 10f28945 pop ebx */
  EBX = (pop32());
  /* 10f28946 pop edi */
  EDI = (pop32());
  /* 10f28947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28949 ret  */
  ESPCHK(0x10f28910u, _esp0);
  ESP += 4; return;
L_10f2894a:;
  /* 10f2894a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f2894c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f2894d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2894f jne 0x10f2893c */
  if (!C.zf) goto L_10f2893c;
  /* 10f28951 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_10f28954:;
  /* 10f28954 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 10f28957 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f28959 je 0x10f28983 */
  if (C.zf) goto L_10f28983;
  /* 10f2895b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f2895d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28960 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f28962 jne 0x10f28928 */
  if (!C.zf) goto L_10f28928;
  /* 10f28964 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 10f28967 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f28969 je 0x10f28983 */
  if (C.zf) goto L_10f28983;
  /* 10f2896b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 10f2896e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28971 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f28973 je 0x10f28954 */
  if (C.zf) goto L_10f28954;
  /* 10f28975 jmp 0x10f28928 */
  goto L_10f28928;
L_10f28977:;
  /* 10f28977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28979 pop esi */
  ESI = (pop32());
  /* 10f2897a pop ebx */
  EBX = (pop32());
  /* 10f2897b pop edi */
  EDI = (pop32());
  /* 10f2897c mov al, dl */
  AL = (DL);
  /* 10f2897e jmp 0x10f28856 */
  jmp_ind(0x10f28856u); return;
L_10f28983:;
  /* 10f28983 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 10f28986 pop esi */
  ESI = (pop32());
  /* 10f28987 pop ebx */
  EBX = (pop32());
  /* 10f28988 pop edi */
  EDI = (pop32());
  /* 10f28989 ret  */
  ESPCHK(0x10f28910u, _esp0);
  ESP += 4; return;
L_10f2898a:;
  /* 10f2898a mov eax, edi */
  EAX = (EDI);
  /* 10f2898c pop esi */
  ESI = (pop32());
  /* 10f2898d pop ebx */
  EBX = (pop32());
  /* 10f2898e pop edi */
  EDI = (pop32());
  /* 10f2898f ret  */
  ESPCHK(0x10f28910u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10f28990 (56 bytes, 31 insns) */
void f_10f28990(void) {
  FTRACE(0x10f28990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28990 push ebp */
  push32((uint32_t)(EBP));
  /* 10f28991 mov ebp, esp */
  EBP = (ESP);
  /* 10f28993 push edi */
  push32((uint32_t)(EDI));
  /* 10f28994 push esi */
  push32((uint32_t)(ESI));
  /* 10f28995 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28996 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f28999 jecxz 0x10f289c1 */
  x86_unimpl("jecxz @ 0x10f28999");
  /* 10f2899b mov ebx, ecx */
  EBX = (ECX);
  /* 10f2899d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f289a0 mov esi, edi */
  ESI = (EDI);
  /* 10f289a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f289a4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10f289a6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f289a8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f289aa mov edi, esi */
  EDI = (ESI);
  /* 10f289ac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f289af repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10f289b1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10f289b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f289b6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f289b9 ja 0x10f289bf */
  if ((!C.cf&&!C.zf)) goto L_10f289bf;
  /* 10f289bb je 0x10f289c1 */
  if (C.zf) goto L_10f289c1;
  /* 10f289bd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f289be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10f289bf:;
  /* 10f289bf not ecx */
  ECX = (~(ECX));
L_10f289c1:;
  /* 10f289c1 mov eax, ecx */
  EAX = (ECX);
  /* 10f289c3 pop ebx */
  EBX = (pop32());
  /* 10f289c4 pop esi */
  ESI = (pop32());
  /* 10f289c5 pop edi */
  EDI = (pop32());
  /* 10f289c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f289c7 ret  */
  ESPCHK(0x10f28990u, _esp0);
  ESP += 4; return;
}

/* FUN_100089d0 @ 0x10f289d0 (47 bytes, 17 insns) */
void f_10f289d0(void) {
  FTRACE(0x10f289d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f289d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f289d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f289d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10f289da jb 0x10f289f0 */
  if (C.cf) goto L_10f289f0;
L_10f289dc:;
  /* 10f289dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f289e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f289e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10f289e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f289ee jae 0x10f289dc */
  if (!C.cf) goto L_10f289dc;
L_10f289f0:;
  /* 10f289f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f289f2 mov eax, esp */
  EAX = (ESP);
  /* 10f289f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10f289f6 mov esp, ecx */
  ESP = (ECX);
  /* 10f289f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f289fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f289fd push eax */
  push32((uint32_t)(EAX));
  /* 10f289fe ret  */
  ESPCHK(0x10f289d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089ff @ 0x10f289ff (137 bytes, 50 insns) */
void f_10f289ff(void) {
  FTRACE(0x10f289ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f289ff push ebx */
  push32((uint32_t)(EBX));
  /* 10f28a00 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f28a02 cmp dword ptr [0x10f47b98], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10f47b98))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28a08 push esi */
  push32((uint32_t)(ESI));
  /* 10f28a09 push edi */
  push32((uint32_t)(EDI));
  /* 10f28a0a jne 0x10f28a4e */
  if (!C.zf) goto L_10f28a4e;
  /* 10f28a0c push 0x10f2d680 */
  push32((uint32_t)(0x10f2d680u));
  /* 10f28a11 call dword ptr [0x10f2d038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d038))), 0x10f28a17u);
  /* 10f28a17 mov edi, eax */
  EDI = (EAX);
  /* 10f28a19 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28a1b je 0x10f28a84 */
  if (C.zf) goto L_10f28a84;
  /* 10f28a1d mov esi, dword ptr [0x10f2d0cc] */
  ESI = (r32((uint32_t)(0x10f2d0cc)));
  /* 10f28a23 push 0x10f2d674 */
  push32((uint32_t)(0x10f2d674u));
  /* 10f28a28 push edi */
  push32((uint32_t)(EDI));
  /* 10f28a29 call esi */
  call_ind((uint32_t)(ESI), 0x10f28a2bu);
  /* 10f28a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28a2d mov dword ptr [0x10f47b98], eax */
  w32((uint32_t)(0x10f47b98), (EAX));
  /* 10f28a32 je 0x10f28a84 */
  if (C.zf) goto L_10f28a84;
  /* 10f28a34 push 0x10f2d664 */
  push32((uint32_t)(0x10f2d664u));
  /* 10f28a39 push edi */
  push32((uint32_t)(EDI));
  /* 10f28a3a call esi */
  call_ind((uint32_t)(ESI), 0x10f28a3cu);
  /* 10f28a3c push 0x10f2d650 */
  push32((uint32_t)(0x10f2d650u));
  /* 10f28a41 push edi */
  push32((uint32_t)(EDI));
  /* 10f28a42 mov dword ptr [0x10f47b9c], eax */
  w32((uint32_t)(0x10f47b9c), (EAX));
  /* 10f28a47 call esi */
  call_ind((uint32_t)(ESI), 0x10f28a49u);
  /* 10f28a49 mov dword ptr [0x10f47ba0], eax */
  w32((uint32_t)(0x10f47ba0), (EAX));
L_10f28a4e:;
  /* 10f28a4e mov eax, dword ptr [0x10f47b9c] */
  EAX = (r32((uint32_t)(0x10f47b9c)));
  /* 10f28a53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28a55 je 0x10f28a6d */
  if (C.zf) goto L_10f28a6d;
  /* 10f28a57 call eax */
  call_ind((uint32_t)(EAX), 0x10f28a59u);
  /* 10f28a59 mov ebx, eax */
  EBX = (EAX);
  /* 10f28a5b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f28a5d je 0x10f28a6d */
  if (C.zf) goto L_10f28a6d;
  /* 10f28a5f mov eax, dword ptr [0x10f47ba0] */
  EAX = (r32((uint32_t)(0x10f47ba0)));
  /* 10f28a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28a66 je 0x10f28a6d */
  if (C.zf) goto L_10f28a6d;
  /* 10f28a68 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28a69 call eax */
  call_ind((uint32_t)(EAX), 0x10f28a6bu);
  /* 10f28a6b mov ebx, eax */
  EBX = (EAX);
L_10f28a6d:;
  /* 10f28a6d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f28a71 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f28a75 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10f28a79 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28a7a call dword ptr [0x10f47b98] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f47b98))), 0x10f28a80u);
L_10f28a80:;
  /* 10f28a80 pop edi */
  EDI = (pop32());
  /* 10f28a81 pop esi */
  ESI = (pop32());
  /* 10f28a82 pop ebx */
  EBX = (pop32());
  /* 10f28a83 ret  */
  ESPCHK(0x10f289ffu, _esp0);
  ESP += 4; return;
L_10f28a84:;
  /* 10f28a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28a86 jmp 0x10f28a80 */
  goto L_10f28a80;
}

/* _strncpy @ 0x10f28a90 (254 bytes, 109 insns) */
void f_10f28a90(void) {
  FTRACE(0x10f28a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28a90 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f28a94 push edi */
  push32((uint32_t)(EDI));
  /* 10f28a95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f28a97 je 0x10f28b13 */
  if (C.zf) goto L_10f28b13;
  /* 10f28a99 push esi */
  push32((uint32_t)(ESI));
  /* 10f28a9a push ebx */
  push32((uint32_t)(EBX));
  /* 10f28a9b mov ebx, ecx */
  EBX = (ECX);
  /* 10f28a9d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10f28aa1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10f28aa7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f28aab jne 0x10f28ab4 */
  if (!C.zf) goto L_10f28ab4;
  /* 10f28aad shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f28ab0 jne 0x10f28b21 */
  if (!C.zf) goto L_10f28b21;
  /* 10f28ab2 jmp 0x10f28ad5 */
  goto L_10f28ad5;
L_10f28ab4:;
  /* 10f28ab4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f28ab6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f28ab7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f28ab9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f28aba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f28abb je 0x10f28ae2 */
  if (C.zf) goto L_10f28ae2;
  /* 10f28abd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f28abf je 0x10f28aea */
  if (C.zf) goto L_10f28aea;
  /* 10f28ac1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10f28ac7 jne 0x10f28ab4 */
  if (!C.zf) goto L_10f28ab4;
  /* 10f28ac9 mov ebx, ecx */
  EBX = (ECX);
  /* 10f28acb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f28ace jne 0x10f28b21 */
  if (!C.zf) goto L_10f28b21;
L_10f28ad0:;
  /* 10f28ad0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10f28ad3 je 0x10f28ae2 */
  if (C.zf) goto L_10f28ae2;
L_10f28ad5:;
  /* 10f28ad5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f28ad7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f28ad8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f28ada inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f28adb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f28add je 0x10f28b0e */
  if (C.zf) goto L_10f28b0e;
  /* 10f28adf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f28ae0 jne 0x10f28ad5 */
  if (!C.zf) goto L_10f28ad5;
L_10f28ae2:;
  /* 10f28ae2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f28ae6 pop ebx */
  EBX = (pop32());
  /* 10f28ae7 pop esi */
  ESI = (pop32());
  /* 10f28ae8 pop edi */
  EDI = (pop32());
  /* 10f28ae9 ret  */
  ESPCHK(0x10f28a90u, _esp0);
  ESP += 4; return;
L_10f28aea:;
  /* 10f28aea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f28af0 je 0x10f28b04 */
  if (C.zf) goto L_10f28b04;
L_10f28af2:;
  /* 10f28af2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f28af4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f28af5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f28af6 je 0x10f28b86 */
  if (C.zf) goto L_10f28b86;
  /* 10f28afc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f28b02 jne 0x10f28af2 */
  if (!C.zf) goto L_10f28af2;
L_10f28b04:;
  /* 10f28b04 mov ebx, ecx */
  EBX = (ECX);
  /* 10f28b06 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f28b09 jne 0x10f28b77 */
  if (!C.zf) goto L_10f28b77;
L_10f28b0b:;
  /* 10f28b0b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f28b0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10f28b0e:;
  /* 10f28b0e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f28b0f jne 0x10f28b0b */
  if (!C.zf) goto L_10f28b0b;
  /* 10f28b11 pop ebx */
  EBX = (pop32());
  /* 10f28b12 pop esi */
  ESI = (pop32());
L_10f28b13:;
  /* 10f28b13 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f28b17 pop edi */
  EDI = (pop32());
  /* 10f28b18 ret  */
  ESPCHK(0x10f28a90u, _esp0);
  ESP += 4; return;
L_10f28b19:;
  /* 10f28b19 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f28b1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28b1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f28b1f je 0x10f28ad0 */
  if (C.zf) goto L_10f28ad0;
L_10f28b21:;
  /* 10f28b21 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f28b26 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f28b28 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28b2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f28b2d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28b2f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10f28b31 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28b34 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f28b39 je 0x10f28b19 */
  if (C.zf) goto L_10f28b19;
  /* 10f28b3b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f28b3d je 0x10f28b6b */
  if (C.zf) goto L_10f28b6b;
  /* 10f28b3f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10f28b41 je 0x10f28b61 */
  if (C.zf) goto L_10f28b61;
  /* 10f28b43 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f28b49 je 0x10f28b57 */
  if (C.zf) goto L_10f28b57;
  /* 10f28b4b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f28b51 jne 0x10f28b19 */
  if (!C.zf) goto L_10f28b19;
  /* 10f28b53 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f28b55 jmp 0x10f28b6f */
  goto L_10f28b6f;
L_10f28b57:;
  /* 10f28b57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f28b5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f28b5f jmp 0x10f28b6f */
  goto L_10f28b6f;
L_10f28b61:;
  /* 10f28b61 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f28b67 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f28b69 jmp 0x10f28b6f */
  goto L_10f28b6f;
L_10f28b6b:;
  /* 10f28b6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f28b6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10f28b6f:;
  /* 10f28b6f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f28b74 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f28b75 je 0x10f28b81 */
  if (C.zf) goto L_10f28b81;
L_10f28b77:;
  /* 10f28b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f28b79:;
  /* 10f28b79 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10f28b7b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28b7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f28b7f jne 0x10f28b79 */
  if (!C.zf) goto L_10f28b79;
L_10f28b81:;
  /* 10f28b81 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10f28b84 jne 0x10f28b0b */
  if (!C.zf) goto L_10f28b0b;
L_10f28b86:;
  /* 10f28b86 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f28b8a pop ebx */
  EBX = (pop32());
  /* 10f28b8b pop esi */
  ESI = (pop32());
  /* 10f28b8c pop edi */
  EDI = (pop32());
  /* 10f28b8d ret  */
  ESPCHK(0x10f28a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b8e @ 0x10f28b8e (386 bytes, 138 insns) */
void f_10f28b8e(void) {
  FTRACE(0x10f28b8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28b8e push ebp */
  push32((uint32_t)(EBP));
  /* 10f28b8f mov ebp, esp */
  EBP = (ESP);
  /* 10f28b91 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f28b97 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f28b9b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f28b9c push ebx */
  push32((uint32_t)(EBX));
  /* 10f28b9d push esi */
  push32((uint32_t)(ESI));
  /* 10f28b9e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f28b9f push edi */
  push32((uint32_t)(EDI));
  /* 10f28ba0 je 0x10f28c09 */
  if (C.zf) goto L_10f28c09;
  /* 10f28ba2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f28ba3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f28ba4 je 0x10f28bec */
  if (C.zf) goto L_10f28bec;
  /* 10f28ba6 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28ba9 je 0x10f28bec */
  if (C.zf) goto L_10f28bec;
  /* 10f28bab sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28bae je 0x10f28bec */
  if (C.zf) goto L_10f28bec;
  /* 10f28bb0 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28bb3 je 0x10f28bdf */
  if (C.zf) goto L_10f28bdf;
  /* 10f28bb5 sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28bb8 je 0x10f28bd2 */
  if (C.zf) goto L_10f28bd2;
  /* 10f28bba dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f28bbb je 0x10f28bc5 */
  if (C.zf) goto L_10f28bc5;
  /* 10f28bbd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f28bc0 jmp 0x10f28d0b */
  goto L_10f28d0b;
L_10f28bc5:;
  /* 10f28bc5 mov ebx, dword ptr [0x10f47bac] */
  EBX = (r32((uint32_t)(0x10f47bac)));
  /* 10f28bcb mov edi, 0x10f47bac */
  EDI = (0x10f47bacu);
  /* 10f28bd0 jmp 0x10f28c14 */
  goto L_10f28c14;
L_10f28bd2:;
  /* 10f28bd2 mov ebx, dword ptr [0x10f47ba8] */
  EBX = (r32((uint32_t)(0x10f47ba8)));
  /* 10f28bd8 mov edi, 0x10f47ba8 */
  EDI = (0x10f47ba8u);
  /* 10f28bdd jmp 0x10f28c14 */
  goto L_10f28c14;
L_10f28bdf:;
  /* 10f28bdf mov ebx, dword ptr [0x10f47bb0] */
  EBX = (r32((uint32_t)(0x10f47bb0)));
  /* 10f28be5 mov edi, 0x10f47bb0 */
  EDI = (0x10f47bb0u);
  /* 10f28bea jmp 0x10f28c14 */
  goto L_10f28c14;
L_10f28bec:;
  /* 10f28bec call 0x10f24a94 */
  push32(0x10f28bf1u); f_10f24a94();
  /* 10f28bf1 mov esi, eax */
  ESI = (EAX);
  /* 10f28bf3 push dword ptr [esi + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x50))));
  /* 10f28bf6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f28bf9 call 0x10f28d10 */
  push32(0x10f28bfeu); f_10f28d10();
  /* 10f28bfe mov edi, eax */
  EDI = (EAX);
  /* 10f28c00 pop ecx */
  ECX = (pop32());
  /* 10f28c01 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28c04 pop ecx */
  ECX = (pop32());
  /* 10f28c05 mov ebx, dword ptr [edi] */
  EBX = (r32((uint32_t)(EDI)));
  /* 10f28c07 jmp 0x10f28c26 */
  goto L_10f28c26;
L_10f28c09:;
  /* 10f28c09 mov ebx, dword ptr [0x10f47ba4] */
  EBX = (r32((uint32_t)(0x10f47ba4)));
  /* 10f28c0f mov edi, 0x10f47ba4 */
  EDI = (0x10f47ba4u);
L_10f28c14:;
  /* 10f28c14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28c16 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f28c1d call 0x10f26892 */
  push32(0x10f28c22u); f_10f26892();
  /* 10f28c22 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f28c25 pop ecx */
  ECX = (pop32());
L_10f28c26:;
  /* 10f28c26 cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c29 jne 0x10f28c41 */
  if (!C.zf) goto L_10f28c41;
  /* 10f28c2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c2f je 0x10f28d09 */
  if (C.zf) goto L_10f28d09;
  /* 10f28c35 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28c36 call 0x10f268f3 */
  push32(0x10f28c3bu); f_10f268f3();
  /* 10f28c3b pop ecx */
  ECX = (pop32());
  /* 10f28c3c jmp 0x10f28d09 */
  goto L_10f28d09;
L_10f28c41:;
  /* 10f28c41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f28c43 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c45 jne 0x10f28c5b */
  if (!C.zf) goto L_10f28c5b;
  /* 10f28c47 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c4a je 0x10f28c54 */
  if (C.zf) goto L_10f28c54;
  /* 10f28c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28c4e call 0x10f268f3 */
  push32(0x10f28c53u); f_10f268f3();
  /* 10f28c53 pop ecx */
  ECX = (pop32());
L_10f28c54:;
  /* 10f28c54 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f28c56 call 0x10f243c7 */
  push32(0x10f28c5bu); f_10f243c7();
L_10f28c5b:;
  /* 10f28c5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f28c5e cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c61 je 0x10f28c6d */
  if (C.zf) goto L_10f28c6d;
  /* 10f28c63 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c66 je 0x10f28c6d */
  if (C.zf) goto L_10f28c6d;
  /* 10f28c68 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c6b jne 0x10f28c88 */
  if (!C.zf) goto L_10f28c88;
L_10f28c6d:;
  /* 10f28c6d mov edx, dword ptr [esi + 0x54] */
  EDX = (r32((uint32_t)(ESI + 0x54)));
  /* 10f28c70 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c73 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f28c76 mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 10f28c79 jne 0x10f28cc4 */
  if (!C.zf) goto L_10f28cc4;
  /* 10f28c7b mov edx, dword ptr [esi + 0x58] */
  EDX = (r32((uint32_t)(ESI + 0x58)));
  /* 10f28c7e mov dword ptr [esi + 0x58], 0x8c */
  w32((uint32_t)(ESI + 0x58), (0x8cu));
  /* 10f28c85 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f28c88:;
  /* 10f28c88 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c8b jne 0x10f28cc4 */
  if (!C.zf) goto L_10f28cc4;
  /* 10f28c8d mov ecx, dword ptr [0x10f31a18] */
  ECX = (r32((uint32_t)(0x10f31a18)));
  /* 10f28c93 mov eax, dword ptr [0x10f31a1c] */
  EAX = (r32((uint32_t)(0x10f31a1c)));
  /* 10f28c98 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28c9a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28c9c jge 0x10f28cc6 */
  if ((C.sf==C.of)) goto L_10f28cc6;
  /* 10f28c9e lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 10f28ca1 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_10f28ca4:;
  /* 10f28ca4 mov edx, dword ptr [esi + 0x50] */
  EDX = (r32((uint32_t)(ESI + 0x50)));
  /* 10f28ca7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28caa and dword ptr [edx + eax - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EDX + EAX*1 + -0x4)))&(0x0u); w32((uint32_t)(EDX + EAX*1 + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f28caf mov edx, dword ptr [0x10f31a18] */
  EDX = (r32((uint32_t)(0x10f31a18)));
  /* 10f28cb5 mov edi, dword ptr [0x10f31a1c] */
  EDI = (r32((uint32_t)(0x10f31a1c)));
  /* 10f28cbb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f28cbc add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28cbe cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28cc0 jl 0x10f28ca4 */
  if ((C.sf!=C.of)) goto L_10f28ca4;
  /* 10f28cc2 jmp 0x10f28cc6 */
  goto L_10f28cc6;
L_10f28cc4:;
  /* 10f28cc4 mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
L_10f28cc6:;
  /* 10f28cc6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28cca je 0x10f28cd4 */
  if (C.zf) goto L_10f28cd4;
  /* 10f28ccc push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28cce call 0x10f268f3 */
  push32(0x10f28cd3u); f_10f268f3();
  /* 10f28cd3 pop ecx */
  ECX = (pop32());
L_10f28cd4:;
  /* 10f28cd4 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28cd8 jne 0x10f28ce5 */
  if (!C.zf) goto L_10f28ce5;
  /* 10f28cda push dword ptr [esi + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x58))));
  /* 10f28cdd push 8 */
  push32((uint32_t)(0x8u));
  /* 10f28cdf call ebx */
  call_ind((uint32_t)(EBX), 0x10f28ce1u);
  /* 10f28ce1 pop ecx */
  ECX = (pop32());
  /* 10f28ce2 pop ecx */
  ECX = (pop32());
  /* 10f28ce3 jmp 0x10f28cf7 */
  goto L_10f28cf7;
L_10f28ce5:;
  /* 10f28ce5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f28ce8 call ebx */
  call_ind((uint32_t)(EBX), 0x10f28ceau);
  /* 10f28cea cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28cee pop ecx */
  ECX = (pop32());
  /* 10f28cef je 0x10f28cf7 */
  if (C.zf) goto L_10f28cf7;
  /* 10f28cf1 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28cf5 jne 0x10f28d09 */
  if (!C.zf) goto L_10f28d09;
L_10f28cf7:;
  /* 10f28cf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f28cfa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28cfe mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
  /* 10f28d01 jne 0x10f28d09 */
  if (!C.zf) goto L_10f28d09;
  /* 10f28d03 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f28d06 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
L_10f28d09:;
  /* 10f28d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f28d0b:;
  /* 10f28d0b pop edi */
  EDI = (pop32());
  /* 10f28d0c pop esi */
  ESI = (pop32());
  /* 10f28d0d pop ebx */
  EBX = (pop32());
  /* 10f28d0e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f28d0f ret  */
  ESPCHK(0x10f28b8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x10f28d10 (61 bytes, 25 insns) */
void f_10f28d10(void) {
  FTRACE(0x10f28d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28d10 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f28d14 mov ecx, dword ptr [0x10f31a24] */
  ECX = (r32((uint32_t)(0x10f31a24)));
  /* 10f28d1a push esi */
  push32((uint32_t)(ESI));
  /* 10f28d1b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f28d1f cmp dword ptr [edx + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28d22 push edi */
  push32((uint32_t)(EDI));
  /* 10f28d23 mov eax, edx */
  EAX = (EDX);
  /* 10f28d25 je 0x10f28d39 */
  if (C.zf) goto L_10f28d39;
  /* 10f28d27 lea edi, [ecx + ecx*2] */
  EDI = ((uint32_t)(ECX + ECX*2));
  /* 10f28d2a lea edi, [edx + edi*4] */
  EDI = ((uint32_t)(EDX + EDI*4));
L_10f28d2d:;
  /* 10f28d2d add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28d30 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28d32 jae 0x10f28d39 */
  if (!C.cf) goto L_10f28d39;
  /* 10f28d34 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28d37 jne 0x10f28d2d */
  if (!C.zf) goto L_10f28d2d;
L_10f28d39:;
  /* 10f28d39 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 10f28d3c lea ecx, [edx + ecx*4] */
  ECX = ((uint32_t)(EDX + ECX*4));
  /* 10f28d3f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28d41 jae 0x10f28d48 */
  if (!C.cf) goto L_10f28d48;
  /* 10f28d43 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28d46 je 0x10f28d4a */
  if (C.zf) goto L_10f28d4a;
L_10f28d48:;
  /* 10f28d48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f28d4a:;
  /* 10f28d4a pop edi */
  EDI = (pop32());
  /* 10f28d4b pop esi */
  ESI = (pop32());
  /* 10f28d4c ret  */
  ESPCHK(0x10f28d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d4d @ 0x10f28d4d (318 bytes, 123 insns) */
void f_10f28d4d(void) {
  FTRACE(0x10f28d4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28d4d push ebp */
  push32((uint32_t)(EBP));
  /* 10f28d4e mov ebp, esp */
  EBP = (ESP);
  /* 10f28d50 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f28d52 push 0x10f2d698 */
  push32((uint32_t)(0x10f2d698u));
  /* 10f28d57 push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f28d5c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f28d62 push eax */
  push32((uint32_t)(EAX));
  /* 10f28d63 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f28d6a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28d6d push ebx */
  push32((uint32_t)(EBX));
  /* 10f28d6e push esi */
  push32((uint32_t)(ESI));
  /* 10f28d6f push edi */
  push32((uint32_t)(EDI));
  /* 10f28d70 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f28d73 mov eax, dword ptr [0x10f47bb8] */
  EAX = (r32((uint32_t)(0x10f47bb8)));
  /* 10f28d78 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f28d7a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28d7c jne 0x10f28dbc */
  if (!C.zf) goto L_10f28dbc;
  /* 10f28d7e lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10f28d81 push eax */
  push32((uint32_t)(EAX));
  /* 10f28d82 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28d84 pop esi */
  ESI = (pop32());
  /* 10f28d85 push esi */
  push32((uint32_t)(ESI));
  /* 10f28d86 push 0x10f2d690 */
  push32((uint32_t)(0x10f2d690u));
  /* 10f28d8b push esi */
  push32((uint32_t)(ESI));
  /* 10f28d8c call dword ptr [0x10f2d02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d02c))), 0x10f28d92u);
  /* 10f28d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28d94 je 0x10f28d9a */
  if (C.zf) goto L_10f28d9a;
  /* 10f28d96 mov eax, esi */
  EAX = (ESI);
  /* 10f28d98 jmp 0x10f28db7 */
  goto L_10f28db7;
L_10f28d9a:;
  /* 10f28d9a lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10f28d9d push eax */
  push32((uint32_t)(EAX));
  /* 10f28d9e push esi */
  push32((uint32_t)(ESI));
  /* 10f28d9f push 0x10f2d68c */
  push32((uint32_t)(0x10f2d68cu));
  /* 10f28da4 push esi */
  push32((uint32_t)(ESI));
  /* 10f28da5 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28da6 call dword ptr [0x10f2d030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d030))), 0x10f28dacu);
  /* 10f28dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28dae je 0x10f28e82 */
  if (C.zf) goto L_10f28e82;
  /* 10f28db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f28db6 pop eax */
  EAX = (pop32());
L_10f28db7:;
  /* 10f28db7 mov dword ptr [0x10f47bb8], eax */
  w32((uint32_t)(0x10f47bb8), (EAX));
L_10f28dbc:;
  /* 10f28dbc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28dbf jne 0x10f28de5 */
  if (!C.zf) goto L_10f28de5;
  /* 10f28dc1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f28dc4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28dc6 jne 0x10f28dcd */
  if (!C.zf) goto L_10f28dcd;
  /* 10f28dc8 mov eax, dword ptr [0x10f47bd0] */
  EAX = (r32((uint32_t)(0x10f47bd0)));
L_10f28dcd:;
  /* 10f28dcd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f28dd0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f28dd3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f28dd6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f28dd9 push eax */
  push32((uint32_t)(EAX));
  /* 10f28dda call dword ptr [0x10f2d030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d030))), 0x10f28de0u);
  /* 10f28de0 jmp 0x10f28e84 */
  goto L_10f28e84;
L_10f28de5:;
  /* 10f28de5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28de8 jne 0x10f28e82 */
  if (!C.zf) goto L_10f28e82;
  /* 10f28dee cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28df1 jne 0x10f28dfb */
  if (!C.zf) goto L_10f28dfb;
  /* 10f28df3 mov eax, dword ptr [0x10f47be0] */
  EAX = (r32((uint32_t)(0x10f47be0)));
  /* 10f28df8 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10f28dfb:;
  /* 10f28dfb push ebx */
  push32((uint32_t)(EBX));
  /* 10f28dfc push ebx */
  push32((uint32_t)(EBX));
  /* 10f28dfd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f28e00 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f28e03 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f28e06 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f28e08 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28e0a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10f28e0d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f28e0e push eax */
  push32((uint32_t)(EAX));
  /* 10f28e0f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f28e12 call dword ptr [0x10f2d034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d034))), 0x10f28e18u);
  /* 10f28e18 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f28e1b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28e1d je 0x10f28e82 */
  if (C.zf) goto L_10f28e82;
  /* 10f28e1f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10f28e22 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10f28e25 mov eax, edi */
  EAX = (EDI);
  /* 10f28e27 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28e2a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f28e2c call 0x10f289d0 */
  push32(0x10f28e31u); f_10f289d0();
  /* 10f28e31 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f28e34 mov esi, esp */
  ESI = (ESP);
  /* 10f28e36 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10f28e39 push edi */
  push32((uint32_t)(EDI));
  /* 10f28e3a push ebx */
  push32((uint32_t)(EBX));
  /* 10f28e3b push esi */
  push32((uint32_t)(ESI));
  /* 10f28e3c call 0x10f27460 */
  push32(0x10f28e41u); f_10f27460();
  /* 10f28e41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28e44 jmp 0x10f28e51 */
  goto L_10f28e51;
  /* 10f28e46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28e48 pop eax */
  EAX = (pop32());
  /* 10f28e49 ret  */
  ESPCHK(0x10f28d4du, _esp0);
  ESP += 4; return;
  /* 10f28e4a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f28e4d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f28e4f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10f28e51:;
  /* 10f28e51 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f28e55 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28e57 je 0x10f28e82 */
  if (C.zf) goto L_10f28e82;
  /* 10f28e59 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10f28e5c push esi */
  push32((uint32_t)(ESI));
  /* 10f28e5d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f28e60 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f28e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28e65 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f28e68 call dword ptr [0x10f2d034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d034))), 0x10f28e6eu);
  /* 10f28e6e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28e70 je 0x10f28e82 */
  if (C.zf) goto L_10f28e82;
  /* 10f28e72 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f28e75 push eax */
  push32((uint32_t)(EAX));
  /* 10f28e76 push esi */
  push32((uint32_t)(ESI));
  /* 10f28e77 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f28e7a call dword ptr [0x10f2d02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d02c))), 0x10f28e80u);
  /* 10f28e80 jmp 0x10f28e84 */
  goto L_10f28e84;
L_10f28e82:;
  /* 10f28e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f28e84:;
  /* 10f28e84 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10f28e87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f28e8a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f28e91 pop edi */
  EDI = (pop32());
  /* 10f28e92 pop esi */
  ESI = (pop32());
  /* 10f28e93 pop ebx */
  EBX = (pop32());
  /* 10f28e94 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f28e95 ret  */
  ESPCHK(0x10f28d4du, _esp0);
  ESP += 4; return;
}

/* FUN_10008e96 @ 0x10f28e96 (511 bytes, 193 insns) */
void f_10f28e96(void) {
  FTRACE(0x10f28e96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f28e96 push ebp */
  push32((uint32_t)(EBP));
  /* 10f28e97 mov ebp, esp */
  EBP = (ESP);
  /* 10f28e99 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f28e9b push 0x10f2d6a8 */
  push32((uint32_t)(0x10f2d6a8u));
  /* 10f28ea0 push 0x10f26a00 */
  push32((uint32_t)(0x10f26a00u));
  /* 10f28ea5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f28eab push eax */
  push32((uint32_t)(EAX));
  /* 10f28eac mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f28eb3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28eb7 push esi */
  push32((uint32_t)(ESI));
  /* 10f28eb8 push edi */
  push32((uint32_t)(EDI));
  /* 10f28eb9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f28ebc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f28ebe cmp dword ptr [0x10f47be8], edi */
  { uint32_t _a=(r32((uint32_t)(0x10f47be8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28ec4 jne 0x10f28f0c */
  if (!C.zf) goto L_10f28f0c;
  /* 10f28ec6 push edi */
  push32((uint32_t)(EDI));
  /* 10f28ec7 push edi */
  push32((uint32_t)(EDI));
  /* 10f28ec8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28eca pop ebx */
  EBX = (pop32());
  /* 10f28ecb push ebx */
  push32((uint32_t)(EBX));
  /* 10f28ecc push 0x10f2d690 */
  push32((uint32_t)(0x10f2d690u));
  /* 10f28ed1 mov esi, 0x100 */
  ESI = (0x100u);
  /* 10f28ed6 push esi */
  push32((uint32_t)(ESI));
  /* 10f28ed7 push edi */
  push32((uint32_t)(EDI));
  /* 10f28ed8 call dword ptr [0x10f2d024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d024))), 0x10f28edeu);
  /* 10f28ede test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28ee0 je 0x10f28eea */
  if (C.zf) goto L_10f28eea;
  /* 10f28ee2 mov dword ptr [0x10f47be8], ebx */
  w32((uint32_t)(0x10f47be8), (EBX));
  /* 10f28ee8 jmp 0x10f28f0c */
  goto L_10f28f0c;
L_10f28eea:;
  /* 10f28eea push edi */
  push32((uint32_t)(EDI));
  /* 10f28eeb push edi */
  push32((uint32_t)(EDI));
  /* 10f28eec push ebx */
  push32((uint32_t)(EBX));
  /* 10f28eed push 0x10f2d68c */
  push32((uint32_t)(0x10f2d68cu));
  /* 10f28ef2 push esi */
  push32((uint32_t)(ESI));
  /* 10f28ef3 push edi */
  push32((uint32_t)(EDI));
  /* 10f28ef4 call dword ptr [0x10f2d028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d028))), 0x10f28efau);
  /* 10f28efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28efc je 0x10f29024 */
  if (C.zf) goto L_10f29024;
  /* 10f28f02 mov dword ptr [0x10f47be8], 2 */
  w32((uint32_t)(0x10f47be8), (0x2u));
L_10f28f0c:;
  /* 10f28f0c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28f0f jle 0x10f28f21 */
  if ((C.zf||C.sf!=C.of)) goto L_10f28f21;
  /* 10f28f11 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f28f14 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f28f17 call 0x10f290ba */
  push32(0x10f28f1cu); f_10f290ba();
  /* 10f28f1c pop ecx */
  ECX = (pop32());
  /* 10f28f1d pop ecx */
  ECX = (pop32());
  /* 10f28f1e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10f28f21:;
  /* 10f28f21 mov eax, dword ptr [0x10f47be8] */
  EAX = (r32((uint32_t)(0x10f47be8)));
  /* 10f28f26 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28f29 jne 0x10f28f48 */
  if (!C.zf) goto L_10f28f48;
  /* 10f28f2b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10f28f2e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f28f31 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f28f34 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f28f37 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f28f3a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f28f3d call dword ptr [0x10f2d028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d028))), 0x10f28f43u);
  /* 10f28f43 jmp 0x10f29026 */
  goto L_10f29026;
L_10f28f48:;
  /* 10f28f48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28f4b jne 0x10f29024 */
  if (!C.zf) goto L_10f29024;
  /* 10f28f51 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28f54 jne 0x10f28f5e */
  if (!C.zf) goto L_10f28f5e;
  /* 10f28f56 mov eax, dword ptr [0x10f47be0] */
  EAX = (r32((uint32_t)(0x10f47be0)));
  /* 10f28f5b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10f28f5e:;
  /* 10f28f5e push edi */
  push32((uint32_t)(EDI));
  /* 10f28f5f push edi */
  push32((uint32_t)(EDI));
  /* 10f28f60 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f28f63 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f28f66 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10f28f69 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f28f6b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f28f6d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10f28f70 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f28f71 push eax */
  push32((uint32_t)(EAX));
  /* 10f28f72 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f28f75 call dword ptr [0x10f2d034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d034))), 0x10f28f7bu);
  /* 10f28f7b mov ebx, eax */
  EBX = (EAX);
  /* 10f28f7d mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10f28f80 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28f82 je 0x10f29024 */
  if (C.zf) goto L_10f29024;
  /* 10f28f88 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10f28f8b lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10f28f8e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f28f91 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f28f93 call 0x10f289d0 */
  push32(0x10f28f98u); f_10f289d0();
  /* 10f28f98 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f28f9b mov eax, esp */
  EAX = (ESP);
  /* 10f28f9d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f28fa0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f28fa4 jmp 0x10f28fb9 */
  goto L_10f28fb9;
  /* 10f28fa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28fa8 pop eax */
  EAX = (pop32());
  /* 10f28fa9 ret  */
  ESPCHK(0x10f28e96u, _esp0);
  ESP += 4; return;
  /* 10f28faa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f28fad xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f28faf mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10f28fb2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f28fb6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10f28fb9:;
  /* 10f28fb9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28fbc je 0x10f29024 */
  if (C.zf) goto L_10f29024;
  /* 10f28fbe push ebx */
  push32((uint32_t)(EBX));
  /* 10f28fbf push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10f28fc2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f28fc5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10f28fc8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f28fca push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f28fcd call dword ptr [0x10f2d034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d034))), 0x10f28fd3u);
  /* 10f28fd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f28fd5 je 0x10f29024 */
  if (C.zf) goto L_10f29024;
  /* 10f28fd7 push edi */
  push32((uint32_t)(EDI));
  /* 10f28fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10f28fd9 push ebx */
  push32((uint32_t)(EBX));
  /* 10f28fda push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10f28fdd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f28fe0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f28fe3 call dword ptr [0x10f2d024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d024))), 0x10f28fe9u);
  /* 10f28fe9 mov esi, eax */
  ESI = (EAX);
  /* 10f28feb mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10f28fee cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28ff0 je 0x10f29024 */
  if (C.zf) goto L_10f29024;
  /* 10f28ff2 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10f28ff6 je 0x10f29038 */
  if (C.zf) goto L_10f29038;
  /* 10f28ff8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f28ffb je 0x10f290b3 */
  if (C.zf) goto L_10f290b3;
  /* 10f29001 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29004 jg 0x10f29024 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f29024;
  /* 10f29006 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10f29009 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10f2900c push ebx */
  push32((uint32_t)(EBX));
  /* 10f2900d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10f29010 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f29013 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f29016 call dword ptr [0x10f2d024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d024))), 0x10f2901cu);
  /* 10f2901c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2901e jne 0x10f290b3 */
  if (!C.zf) goto L_10f290b3;
L_10f29024:;
  /* 10f29024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f29026:;
  /* 10f29026 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10f29029 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2902c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f29033 pop edi */
  EDI = (pop32());
  /* 10f29034 pop esi */
  ESI = (pop32());
  /* 10f29035 pop ebx */
  EBX = (pop32());
  /* 10f29036 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f29037 ret  */
  ESPCHK(0x10f28e96u, _esp0);
  ESP += 4; return;
L_10f29038:;
  /* 10f29038 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f2903f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10f29042 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29045 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f29047 call 0x10f289d0 */
  push32(0x10f2904cu); f_10f289d0();
  /* 10f2904c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f2904f mov ebx, esp */
  EBX = (ESP);
  /* 10f29051 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10f29054 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f29058 jmp 0x10f2906c */
  goto L_10f2906c;
  /* 10f2905a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2905c pop eax */
  EAX = (pop32());
  /* 10f2905d ret  */
  ESPCHK(0x10f28e96u, _esp0);
  ESP += 4; return;
  /* 10f2905e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f29061 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f29063 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f29065 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f29069 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10f2906c:;
  /* 10f2906c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2906e je 0x10f29024 */
  if (C.zf) goto L_10f29024;
  /* 10f29070 push esi */
  push32((uint32_t)(ESI));
  /* 10f29071 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29072 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10f29075 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10f29078 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10f2907b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2907e call dword ptr [0x10f2d024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d024))), 0x10f29084u);
  /* 10f29084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f29086 je 0x10f29024 */
  if (C.zf) goto L_10f29024;
  /* 10f29088 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2908b push edi */
  push32((uint32_t)(EDI));
  /* 10f2908c push edi */
  push32((uint32_t)(EDI));
  /* 10f2908d jne 0x10f29093 */
  if (!C.zf) goto L_10f29093;
  /* 10f2908f push edi */
  push32((uint32_t)(EDI));
  /* 10f29090 push edi */
  push32((uint32_t)(EDI));
  /* 10f29091 jmp 0x10f29099 */
  goto L_10f29099;
L_10f29093:;
  /* 10f29093 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10f29096 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10f29099:;
  /* 10f29099 push esi */
  push32((uint32_t)(ESI));
  /* 10f2909a push ebx */
  push32((uint32_t)(EBX));
  /* 10f2909b push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f290a0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10f290a3 call dword ptr [0x10f2d08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d08c))), 0x10f290a9u);
  /* 10f290a9 mov esi, eax */
  ESI = (EAX);
  /* 10f290ab cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f290ad je 0x10f29024 */
  if (C.zf) goto L_10f29024;
L_10f290b3:;
  /* 10f290b3 mov eax, esi */
  EAX = (ESI);
  /* 10f290b5 jmp 0x10f29026 */
  goto L_10f29026;
}

/* FUN_100090ba @ 0x10f290ba (43 bytes, 20 insns) */
void f_10f290ba(void) {
  FTRACE(0x10f290bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f290ba mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f290be mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f290c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f290c4 push esi */
  push32((uint32_t)(ESI));
  /* 10f290c5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10f290c8 je 0x10f290d7 */
  if (C.zf) goto L_10f290d7;
L_10f290ca:;
  /* 10f290ca cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f290cd je 0x10f290d7 */
  if (C.zf) goto L_10f290d7;
  /* 10f290cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f290d0 mov esi, ecx */
  ESI = (ECX);
  /* 10f290d2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f290d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f290d5 jne 0x10f290ca */
  if (!C.zf) goto L_10f290ca;
L_10f290d7:;
  /* 10f290d7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f290da pop esi */
  ESI = (pop32());
  /* 10f290db jne 0x10f290e2 */
  if (!C.zf) goto L_10f290e2;
  /* 10f290dd sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f290e1 ret  */
  ESPCHK(0x10f290bau, _esp0);
  ESP += 4; return;
L_10f290e2:;
  /* 10f290e2 mov eax, edx */
  EAX = (EDX);
  /* 10f290e4 ret  */
  ESPCHK(0x10f290bau, _esp0);
  ESP += 4; return;
}

/* FUN_100090e5 @ 0x10f290e5 (33 bytes, 15 insns) */
void f_10f290e5(void) {
  FTRACE(0x10f290e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f290e5 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f290e9 push esi */
  push32((uint32_t)(ESI));
  /* 10f290ea mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10f290ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f290f0 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 10f290f3 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f290f5 jb 0x10f290fb */
  if (C.cf) goto L_10f290fb;
  /* 10f290f7 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f290f9 jae 0x10f290fe */
  if (!C.cf) goto L_10f290fe;
L_10f290fb:;
  /* 10f290fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10f290fd pop eax */
  EAX = (pop32());
L_10f290fe:;
  /* 10f290fe mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f29102 pop esi */
  ESI = (pop32());
  /* 10f29103 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f29105 ret  */
  ESPCHK(0x10f290e5u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x10f29106 (94 bytes, 38 insns) */
void f_10f29106(void) {
  FTRACE(0x10f29106u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29106 push esi */
  push32((uint32_t)(ESI));
  /* 10f29107 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2910b push edi */
  push32((uint32_t)(EDI));
  /* 10f2910c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f29110 push esi */
  push32((uint32_t)(ESI));
  /* 10f29111 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10f29113 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10f29115 call 0x10f290e5 */
  push32(0x10f2911au); f_10f290e5();
  /* 10f2911a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2911d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2911f je 0x10f29138 */
  if (C.zf) goto L_10f29138;
  /* 10f29121 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 10f29124 push eax */
  push32((uint32_t)(EAX));
  /* 10f29125 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f29127 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10f29129 call 0x10f290e5 */
  push32(0x10f2912eu); f_10f290e5();
  /* 10f2912e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f29133 je 0x10f29138 */
  if (C.zf) goto L_10f29138;
  /* 10f29135 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_10f29138:;
  /* 10f29138 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 10f2913b push eax */
  push32((uint32_t)(EAX));
  /* 10f2913c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 10f2913f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10f29141 call 0x10f290e5 */
  push32(0x10f29146u); f_10f290e5();
  /* 10f29146 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2914b je 0x10f29150 */
  if (C.zf) goto L_10f29150;
  /* 10f2914d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_10f29150:;
  /* 10f29150 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 10f29153 push eax */
  push32((uint32_t)(EAX));
  /* 10f29154 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 10f29157 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 10f29159 call 0x10f290e5 */
  push32(0x10f2915eu); f_10f290e5();
  /* 10f2915e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29161 pop edi */
  EDI = (pop32());
  /* 10f29162 pop esi */
  ESI = (pop32());
  /* 10f29163 ret  */
  ESPCHK(0x10f29106u, _esp0);
  ESP += 4; return;
}

/* FUN_10009164 @ 0x10f29164 (46 bytes, 21 insns) */
void f_10f29164(void) {
  FTRACE(0x10f29164u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29164 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f29168 push esi */
  push32((uint32_t)(ESI));
  /* 10f29169 push edi */
  push32((uint32_t)(EDI));
  /* 10f2916a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 10f2916c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2916f mov ecx, esi */
  ECX = (ESI);
  /* 10f29171 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29173 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10f29175 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 10f29178 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 10f2917b or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 10f2917d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f29180 mov edx, edi */
  EDX = (EDI);
  /* 10f29182 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 10f29185 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 10f29188 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f2918a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f2918c pop edi */
  EDI = (pop32());
  /* 10f2918d mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10f29190 pop esi */
  ESI = (pop32());
  /* 10f29191 ret  */
  ESPCHK(0x10f29164u, _esp0);
  ESP += 4; return;
}

/* FUN_10009192 @ 0x10f29192 (45 bytes, 21 insns) */
void f_10f29192(void) {
  FTRACE(0x10f29192u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29192 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f29196 push esi */
  push32((uint32_t)(ESI));
  /* 10f29197 push edi */
  push32((uint32_t)(EDI));
  /* 10f29198 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f2919b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f2919e mov esi, edx */
  ESI = (EDX);
  /* 10f291a0 mov edi, ecx */
  EDI = (ECX);
  /* 10f291a2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 10f291a5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f291a7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10f291a9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f291ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f291ae shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 10f291b1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f291b3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f291b5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10f291b7 pop edi */
  EDI = (pop32());
  /* 10f291b8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10f291bb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f291bd pop esi */
  ESI = (pop32());
  /* 10f291be ret  */
  ESPCHK(0x10f29192u, _esp0);
  ESP += 4; return;
}

/* FUN_100091bf @ 0x10f291bf (199 bytes, 76 insns) */
void f_10f291bf(void) {
  FTRACE(0x10f291bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f291bf push ebp */
  push32((uint32_t)(EBP));
  /* 10f291c0 mov ebp, esp */
  EBP = (ESP);
  /* 10f291c2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f291c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f291c8 push ebx */
  push32((uint32_t)(EBX));
  /* 10f291c9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f291cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f291ce cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f291d0 push esi */
  push32((uint32_t)(ESI));
  /* 10f291d1 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 10f291d8 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 10f291da mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 10f291dd mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 10f291e0 jbe 0x10f29233 */
  if ((C.cf||C.zf)) goto L_10f29233;
  /* 10f291e2 push edi */
  push32((uint32_t)(EDI));
  /* 10f291e3 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10f291e6:;
  /* 10f291e6 mov esi, ebx */
  ESI = (EBX);
  /* 10f291e8 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 10f291eb movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f291ec movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f291ed push ebx */
  push32((uint32_t)(EBX));
  /* 10f291ee movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f291ef call 0x10f29164 */
  push32(0x10f291f4u); f_10f29164();
  /* 10f291f4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f291f5 call 0x10f29164 */
  push32(0x10f291fau); f_10f29164();
  /* 10f291fa lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f291fd push eax */
  push32((uint32_t)(EAX));
  /* 10f291fe push ebx */
  push32((uint32_t)(EBX));
  /* 10f291ff call 0x10f29106 */
  push32(0x10f29204u); f_10f29106();
  /* 10f29204 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29205 call 0x10f29164 */
  push32(0x10f2920au); f_10f29164();
  /* 10f2920a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2920d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 10f29211 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10f29215 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f29218 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f2921b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f2921e push eax */
  push32((uint32_t)(EAX));
  /* 10f2921f push ebx */
  push32((uint32_t)(EBX));
  /* 10f29220 call 0x10f29106 */
  push32(0x10f29225u); f_10f29106();
  /* 10f29225 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29228 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 10f2922b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 10f2922e jne 0x10f291e6 */
  if (!C.zf) goto L_10f291e6;
  /* 10f29230 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f29232 pop edi */
  EDI = (pop32());
L_10f29233:;
  /* 10f29233 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29236 jne 0x10f29260 */
  if (!C.zf) goto L_10f29260;
  /* 10f29238 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10f2923b mov eax, ecx */
  EAX = (ECX);
  /* 10f2923d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f29240 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 10f29243 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10f29245 mov esi, eax */
  ESI = (EAX);
  /* 10f29247 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 10f2924a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 10f2924d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 10f2924f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f29252 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f29259 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 10f2925c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 10f2925e jmp 0x10f29233 */
  goto L_10f29233;
L_10f29260:;
  /* 10f29260 mov esi, 0x8000 */
  ESI = (0x8000u);
L_10f29265:;
  /* 10f29265 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 10f29268 jne 0x10f2927a */
  if (!C.zf) goto L_10f2927a;
  /* 10f2926a push ebx */
  push32((uint32_t)(EBX));
  /* 10f2926b call 0x10f29164 */
  push32(0x10f29270u); f_10f29164();
  /* 10f29270 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f29277 pop ecx */
  ECX = (pop32());
  /* 10f29278 jmp 0x10f29265 */
  goto L_10f29265;
L_10f2927a:;
  /* 10f2927a mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 10f2927e pop esi */
  ESI = (pop32());
  /* 10f2927f mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 10f29283 pop ebx */
  EBX = (pop32());
  /* 10f29284 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f29285 ret  */
  ESPCHK(0x10f291bfu, _esp0);
  ESP += 4; return;
}

/* FUN_10009286 @ 0x10f29286 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_10f29286(void) {
  FTRACE(0x10f29286u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29286 push ebp */
  push32((uint32_t)(EBP));
  /* 10f29287 mov ebp, esp */
  EBP = (ESP);
  /* 10f29289 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2928c push ebx */
  push32((uint32_t)(EBX));
  /* 10f2928d push esi */
  push32((uint32_t)(ESI));
  /* 10f2928e push edi */
  push32((uint32_t)(EDI));
  /* 10f2928f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f29292 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 10f29295 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f29297 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f2929a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2929c pop edx */
  EDX = (pop32());
  /* 10f2929d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f292a0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f292a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f292a6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f292a9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f292ac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f292af mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10f292b2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10f292b5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f292b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f292bb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f292be mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_10f292c1:;
  /* 10f292c1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 10f292c3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f292c6 je 0x10f292d7 */
  if (C.zf) goto L_10f292d7;
  /* 10f292c8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f292cb je 0x10f292d7 */
  if (C.zf) goto L_10f292d7;
  /* 10f292cd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f292d0 je 0x10f292d7 */
  if (C.zf) goto L_10f292d7;
  /* 10f292d2 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f292d5 jne 0x10f292da */
  if (!C.zf) goto L_10f292da;
L_10f292d7:;
  /* 10f292d7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f292d8 jmp 0x10f292c1 */
  goto L_10f292c1;
L_10f292da:;
  /* 10f292da push 4 */
  push32((uint32_t)(0x4u));
  /* 10f292dc pop esi */
  ESI = (pop32());
L_10f292dd:;
  /* 10f292dd mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f292df inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f292e0 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f292e3 ja 0x10f29560 */
  if ((!C.cf&&!C.zf)) goto L_10f29560;
  /* 10f292e9 jmp dword ptr [eax*4 + 0x10f29727] */
  switch (EAX) {
    case 0: goto L_10f292f0;
    case 1: goto L_10f2933f;
    case 2: goto L_10f29396;
    case 3: goto L_10f293c0;
    case 4: goto L_10f2941b;
    case 5: goto L_10f29492;
    case 6: goto L_10f294c8;
    case 7: goto L_10f29512;
    case 8: goto L_10f294f1;
    case 9: goto L_10f29576;
    case 10: goto L_10f29560;
    case 11: goto L_10f2952c;
    default: x86_unimpl("switch@0x10f292e9 out of table"); return;
  }
L_10f292f0:;
  /* 10f292f0 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f292f3 jl 0x10f29301 */
  if ((C.sf!=C.of)) goto L_10f29301;
  /* 10f292f5 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f292f8 jg 0x10f29301 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f29301;
L_10f292fa:;
  /* 10f292fa push 3 */
  push32((uint32_t)(0x3u));
  /* 10f292fc jmp 0x10f2951e */
  goto L_10f2951e;
L_10f29301:;
  /* 10f29301 cmp bl, byte ptr [0x10f31754] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10f31754))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29307 jne 0x10f29310 */
  if (!C.zf) goto L_10f29310;
L_10f29309:;
  /* 10f29309 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f2930b jmp 0x10f29556 */
  goto L_10f29556;
L_10f29310:;
  /* 10f29310 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10f29313 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f29316 je 0x10f29336 */
  if (C.zf) goto L_10f29336;
  /* 10f29318 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f29319 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f2931a je 0x10f2932a */
  if (C.zf) goto L_10f2932a;
  /* 10f2931c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2931f jne 0x10f295f9 */
  if (!C.zf) goto L_10f295f9;
  /* 10f29325 jmp 0x10f293b9 */
  goto L_10f293b9;
L_10f2932a:;
  /* 10f2932a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f2932c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 10f29333 pop eax */
  EAX = (pop32());
  /* 10f29334 jmp 0x10f292dd */
  goto L_10f292dd;
L_10f29336:;
  /* 10f29336 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 10f2933a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f2933c pop eax */
  EAX = (pop32());
  /* 10f2933d jmp 0x10f292dd */
  goto L_10f292dd;
L_10f2933f:;
  /* 10f2933f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29342 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f29345 jl 0x10f2934c */
  if ((C.sf!=C.of)) goto L_10f2934c;
  /* 10f29347 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2934a jle 0x10f292fa */
  if ((C.zf||C.sf!=C.of)) goto L_10f292fa;
L_10f2934c:;
  /* 10f2934c cmp bl, byte ptr [0x10f31754] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10f31754))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29352 je 0x10f29414 */
  if (C.zf) goto L_10f29414;
  /* 10f29358 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2935b je 0x10f2938e */
  if (C.zf) goto L_10f2938e;
  /* 10f2935d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29360 je 0x10f2938e */
  if (C.zf) goto L_10f2938e;
  /* 10f29362 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29365 je 0x10f293b9 */
  if (C.zf) goto L_10f293b9;
L_10f29367:;
  /* 10f29367 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2936a jle 0x10f295f9 */
  if ((C.zf||C.sf!=C.of)) goto L_10f295f9;
  /* 10f29370 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29373 jle 0x10f29387 */
  if ((C.zf||C.sf!=C.of)) goto L_10f29387;
  /* 10f29375 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29378 jle 0x10f295f9 */
  if ((C.zf||C.sf!=C.of)) goto L_10f295f9;
  /* 10f2937e cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29381 jg 0x10f295f9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f295f9;
L_10f29387:;
  /* 10f29387 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f29389 jmp 0x10f29556 */
  goto L_10f29556;
L_10f2938e:;
  /* 10f2938e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f2938f push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f29391 jmp 0x10f29556 */
  goto L_10f29556;
L_10f29396:;
  /* 10f29396 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29399 jl 0x10f293a4 */
  if ((C.sf!=C.of)) goto L_10f293a4;
  /* 10f2939b cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2939e jle 0x10f292fa */
  if ((C.zf||C.sf!=C.of)) goto L_10f292fa;
L_10f293a4:;
  /* 10f293a4 cmp bl, byte ptr [0x10f31754] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10f31754))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f293aa je 0x10f29309 */
  if (C.zf) goto L_10f29309;
  /* 10f293b0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f293b3 jne 0x10f2956e */
  if (!C.zf) goto L_10f2956e;
L_10f293b9:;
  /* 10f293b9 mov eax, edx */
  EAX = (EDX);
  /* 10f293bb jmp 0x10f292dd */
  goto L_10f292dd;
L_10f293c0:;
  /* 10f293c0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10f293c3:;
  /* 10f293c3 cmp dword ptr [0x10f31750], edx */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f293c9 jle 0x10f293dc */
  if ((C.zf||C.sf!=C.of)) goto L_10f293dc;
  /* 10f293cb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f293ce push esi */
  push32((uint32_t)(ESI));
  /* 10f293cf push eax */
  push32((uint32_t)(EAX));
  /* 10f293d0 call 0x10f26c3e */
  push32(0x10f293d5u); f_10f26c3e();
  /* 10f293d5 pop ecx */
  ECX = (pop32());
  /* 10f293d6 pop ecx */
  ECX = (pop32());
  /* 10f293d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f293d9 pop edx */
  EDX = (pop32());
  /* 10f293da jmp 0x10f293ea */
  goto L_10f293ea;
L_10f293dc:;
  /* 10f293dc mov ecx, dword ptr [0x10f3175c] */
  ECX = (r32((uint32_t)(0x10f3175c)));
  /* 10f293e2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f293e5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10f293e8 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10f293ea:;
  /* 10f293ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f293ec je 0x10f2940c */
  if (C.zf) goto L_10f2940c;
  /* 10f293ee cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f293f2 jae 0x10f29404 */
  if (!C.cf) goto L_10f29404;
  /* 10f293f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f293f7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f293fa sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f293fd inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 10f29400 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 10f29402 jmp 0x10f29407 */
  goto L_10f29407;
L_10f29404:;
  /* 10f29404 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_10f29407:;
  /* 10f29407 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f29409 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f2940a jmp 0x10f293c3 */
  goto L_10f293c3;
L_10f2940c:;
  /* 10f2940c cmp bl, byte ptr [0x10f31754] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10f31754))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29412 jne 0x10f2947b */
  if (!C.zf) goto L_10f2947b;
L_10f29414:;
  /* 10f29414 mov eax, esi */
  EAX = (ESI);
  /* 10f29416 jmp 0x10f292dd */
  goto L_10f292dd;
L_10f2941b:;
  /* 10f2941b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2941f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f29422 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f29425 jne 0x10f29434 */
  if (!C.zf) goto L_10f29434;
L_10f29427:;
  /* 10f29427 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2942a jne 0x10f29434 */
  if (!C.zf) goto L_10f29434;
  /* 10f2942c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10f2942f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f29431 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f29432 jmp 0x10f29427 */
  goto L_10f29427;
L_10f29434:;
  /* 10f29434 cmp dword ptr [0x10f31750], edx */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2943a jle 0x10f2944d */
  if ((C.zf||C.sf!=C.of)) goto L_10f2944d;
  /* 10f2943c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f2943f push esi */
  push32((uint32_t)(ESI));
  /* 10f29440 push eax */
  push32((uint32_t)(EAX));
  /* 10f29441 call 0x10f26c3e */
  push32(0x10f29446u); f_10f26c3e();
  /* 10f29446 pop ecx */
  ECX = (pop32());
  /* 10f29447 pop ecx */
  ECX = (pop32());
  /* 10f29448 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2944a pop edx */
  EDX = (pop32());
  /* 10f2944b jmp 0x10f2945b */
  goto L_10f2945b;
L_10f2944d:;
  /* 10f2944d mov ecx, dword ptr [0x10f3175c] */
  ECX = (r32((uint32_t)(0x10f3175c)));
  /* 10f29453 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f29456 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10f29459 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10f2945b:;
  /* 10f2945b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2945d je 0x10f2947b */
  if (C.zf) goto L_10f2947b;
  /* 10f2945f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29463 jae 0x10f29476 */
  if (!C.cf) goto L_10f29476;
  /* 10f29465 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f29468 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10f2946b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f2946e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 10f29471 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 10f29474 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_10f29476:;
  /* 10f29476 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f29478 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f29479 jmp 0x10f29434 */
  goto L_10f29434;
L_10f2947b:;
  /* 10f2947b cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2947e je 0x10f2938e */
  if (C.zf) goto L_10f2938e;
  /* 10f29484 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29487 je 0x10f2938e */
  if (C.zf) goto L_10f2938e;
  /* 10f2948d jmp 0x10f29367 */
  goto L_10f29367;
L_10f29492:;
  /* 10f29492 cmp dword ptr [0x10f31750], edx */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29498 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f2949b jle 0x10f294ae */
  if ((C.zf||C.sf!=C.of)) goto L_10f294ae;
  /* 10f2949d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f294a0 push esi */
  push32((uint32_t)(ESI));
  /* 10f294a1 push eax */
  push32((uint32_t)(EAX));
  /* 10f294a2 call 0x10f26c3e */
  push32(0x10f294a7u); f_10f26c3e();
  /* 10f294a7 pop ecx */
  ECX = (pop32());
  /* 10f294a8 pop ecx */
  ECX = (pop32());
  /* 10f294a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f294ab pop edx */
  EDX = (pop32());
  /* 10f294ac jmp 0x10f294bc */
  goto L_10f294bc;
L_10f294ae:;
  /* 10f294ae mov ecx, dword ptr [0x10f3175c] */
  ECX = (r32((uint32_t)(0x10f3175c)));
  /* 10f294b4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f294b7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10f294ba and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10f294bc:;
  /* 10f294bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f294be je 0x10f2956e */
  if (C.zf) goto L_10f2956e;
  /* 10f294c4 mov eax, esi */
  EAX = (ESI);
  /* 10f294c6 jmp 0x10f2951f */
  goto L_10f2951f;
L_10f294c8:;
  /* 10f294c8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 10f294cb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f294ce mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f294d1 jl 0x10f294d8 */
  if ((C.sf!=C.of)) goto L_10f294d8;
  /* 10f294d3 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f294d6 jle 0x10f2951c */
  if ((C.zf||C.sf!=C.of)) goto L_10f2951c;
L_10f294d8:;
  /* 10f294d8 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10f294db sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f294de je 0x10f29554 */
  if (C.zf) goto L_10f29554;
  /* 10f294e0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f294e1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f294e2 je 0x10f29548 */
  if (C.zf) goto L_10f29548;
  /* 10f294e4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f294e7 jne 0x10f295fc */
  if (!C.zf) goto L_10f295fc;
L_10f294ed:;
  /* 10f294ed push 8 */
  push32((uint32_t)(0x8u));
  /* 10f294ef jmp 0x10f29556 */
  goto L_10f29556;
L_10f294f1:;
  /* 10f294f1 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10f294f4:;
  /* 10f294f4 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f294f7 jne 0x10f294fe */
  if (!C.zf) goto L_10f294fe;
  /* 10f294f9 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f294fb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f294fc jmp 0x10f294f4 */
  goto L_10f294f4;
L_10f294fe:;
  /* 10f294fe cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29501 jl 0x10f295f9 */
  if ((C.sf!=C.of)) goto L_10f295f9;
  /* 10f29507 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2950a jg 0x10f295f9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f295f9;
  /* 10f29510 jmp 0x10f2951c */
  goto L_10f2951c;
L_10f29512:;
  /* 10f29512 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29515 jl 0x10f29525 */
  if ((C.sf!=C.of)) goto L_10f29525;
  /* 10f29517 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2951a jg 0x10f29525 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f29525;
L_10f2951c:;
  /* 10f2951c push 9 */
  push32((uint32_t)(0x9u));
L_10f2951e:;
  /* 10f2951e pop eax */
  EAX = (pop32());
L_10f2951f:;
  /* 10f2951f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f29520 jmp 0x10f292dd */
  goto L_10f292dd;
L_10f29525:;
  /* 10f29525 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29528 jne 0x10f2956e */
  if (!C.zf) goto L_10f2956e;
  /* 10f2952a jmp 0x10f294ed */
  goto L_10f294ed;
L_10f2952c:;
  /* 10f2952c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29530 je 0x10f2955c */
  if (C.zf) goto L_10f2955c;
  /* 10f29532 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10f29535 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 10f29538 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2953b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f2953e je 0x10f29554 */
  if (C.zf) goto L_10f29554;
  /* 10f29540 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f29541 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f29542 jne 0x10f295fc */
  if (!C.zf) goto L_10f295fc;
L_10f29548:;
  /* 10f29548 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 10f2954c push 7 */
  push32((uint32_t)(0x7u));
  /* 10f2954e pop eax */
  EAX = (pop32());
  /* 10f2954f jmp 0x10f292dd */
  goto L_10f292dd;
L_10f29554:;
  /* 10f29554 push 7 */
  push32((uint32_t)(0x7u));
L_10f29556:;
  /* 10f29556 pop eax */
  EAX = (pop32());
  /* 10f29557 jmp 0x10f292dd */
  goto L_10f292dd;
L_10f2955c:;
  /* 10f2955c push 0xa */
  push32((uint32_t)(0xau));
  /* 10f2955e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f2955f pop eax */
  EAX = (pop32());
L_10f29560:;
  /* 10f29560 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29563 je 0x10f295fe */
  if (C.zf) goto L_10f295fe;
  /* 10f29569 jmp 0x10f292dd */
  goto L_10f292dd;
L_10f2956e:;
  /* 10f2956e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f29571 jmp 0x10f295fe */
  goto L_10f295fe;
L_10f29576:;
  /* 10f29576 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 10f2957d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10f2957f:;
  /* 10f2957f cmp dword ptr [0x10f31750], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29586 jle 0x10f29597 */
  if ((C.zf||C.sf!=C.of)) goto L_10f29597;
  /* 10f29588 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f2958b push 4 */
  push32((uint32_t)(0x4u));
  /* 10f2958d push eax */
  push32((uint32_t)(EAX));
  /* 10f2958e call 0x10f26c3e */
  push32(0x10f29593u); f_10f26c3e();
  /* 10f29593 pop ecx */
  ECX = (pop32());
  /* 10f29594 pop ecx */
  ECX = (pop32());
  /* 10f29595 jmp 0x10f295a6 */
  goto L_10f295a6;
L_10f29597:;
  /* 10f29597 mov ecx, dword ptr [0x10f3175c] */
  ECX = (r32((uint32_t)(0x10f3175c)));
  /* 10f2959d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f295a0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10f295a3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10f295a6:;
  /* 10f295a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f295a8 je 0x10f295c6 */
  if (C.zf) goto L_10f295c6;
  /* 10f295aa movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 10f295ad lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 10f295b0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 10f295b4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f295ba jg 0x10f295c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f295c1;
  /* 10f295bc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f295be inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f295bf jmp 0x10f2957f */
  goto L_10f2957f;
L_10f295c1:;
  /* 10f295c1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_10f295c6:;
  /* 10f295c6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_10f295c9:;
  /* 10f295c9 cmp dword ptr [0x10f31750], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f295d0 jle 0x10f295e1 */
  if ((C.zf||C.sf!=C.of)) goto L_10f295e1;
  /* 10f295d2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f295d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f295d7 push eax */
  push32((uint32_t)(EAX));
  /* 10f295d8 call 0x10f26c3e */
  push32(0x10f295ddu); f_10f26c3e();
  /* 10f295dd pop ecx */
  ECX = (pop32());
  /* 10f295de pop ecx */
  ECX = (pop32());
  /* 10f295df jmp 0x10f295f0 */
  goto L_10f295f0;
L_10f295e1:;
  /* 10f295e1 mov ecx, dword ptr [0x10f3175c] */
  ECX = (r32((uint32_t)(0x10f3175c)));
  /* 10f295e7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 10f295ea mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 10f295ed and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_10f295f0:;
  /* 10f295f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f295f2 je 0x10f295f9 */
  if (C.zf) goto L_10f295f9;
  /* 10f295f4 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f295f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f295f7 jmp 0x10f295c9 */
  goto L_10f295c9;
L_10f295f9:;
  /* 10f295f9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f295fa jmp 0x10f295fe */
  goto L_10f295fe;
L_10f295fc:;
  /* 10f295fc mov edi, ecx */
  EDI = (ECX);
L_10f295fe:;
  /* 10f295fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f29601 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29605 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 10f29607 je 0x10f296e6 */
  if (C.zf) goto L_10f296e6;
  /* 10f2960d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f2960f pop eax */
  EAX = (pop32());
  /* 10f29610 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29613 jbe 0x10f2962a */
  if ((C.cf||C.zf)) goto L_10f2962a;
  /* 10f29615 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29619 jl 0x10f2961e */
  if ((C.sf!=C.of)) goto L_10f2961e;
  /* 10f2961b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_10f2961e:;
  /* 10f2961e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f29621 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f29624 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f29625 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 10f29628 jmp 0x10f2962d */
  goto L_10f2962d;
L_10f2962a:;
  /* 10f2962a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10f2962d:;
  /* 10f2962d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29631 jbe 0x10f296dc */
  if ((C.cf||C.zf)) goto L_10f296dc;
L_10f29637:;
  /* 10f29637 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f29638 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2963b jne 0x10f29645 */
  if (!C.zf) goto L_10f29645;
  /* 10f2963d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 10f29640 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 10f29643 jmp 0x10f29637 */
  goto L_10f29637;
L_10f29645:;
  /* 10f29645 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 10f29648 push eax */
  push32((uint32_t)(EAX));
  /* 10f29649 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 10f2964c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10f2964f push eax */
  push32((uint32_t)(EAX));
  /* 10f29650 call 0x10f291bf */
  push32(0x10f29655u); f_10f291bf();
  /* 10f29655 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f29658 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f2965a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2965d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29660 jge 0x10f29664 */
  if ((C.sf==C.of)) goto L_10f29664;
  /* 10f29662 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10f29664:;
  /* 10f29664 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29667 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2966a jne 0x10f2966f */
  if (!C.zf) goto L_10f2966f;
  /* 10f2966c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f2966f:;
  /* 10f2966f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29672 jne 0x10f29677 */
  if (!C.zf) goto L_10f29677;
  /* 10f29674 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10f29677:;
  /* 10f29677 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2967c jle 0x10f296ae */
  if ((C.zf||C.sf!=C.of)) goto L_10f296ae;
  /* 10f2967e mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_10f29685:;
  /* 10f29685 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f29688 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2968b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f2968e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_10f29691:;
  /* 10f29691 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29695 je 0x10f296f7 */
  if (C.zf) goto L_10f296f7;
  /* 10f29697 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f29699 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 10f2969e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10f296a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f296a5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 10f296ac jmp 0x10f2970c */
  goto L_10f2970c;
L_10f296ae:;
  /* 10f296ae cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f296b3 jge 0x10f296be */
  if ((C.sf==C.of)) goto L_10f296be;
  /* 10f296b5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 10f296bc jmp 0x10f29685 */
  goto L_10f29685;
L_10f296be:;
  /* 10f296be push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10f296c1 push eax */
  push32((uint32_t)(EAX));
  /* 10f296c2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 10f296c5 push eax */
  push32((uint32_t)(EAX));
  /* 10f296c6 call 0x10f2a1da */
  push32(0x10f296cbu); f_10f2a1da();
  /* 10f296cb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f296ce mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 10f296d1 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 10f296d4 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 10f296d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f296da jmp 0x10f29691 */
  goto L_10f29691;
L_10f296dc:;
  /* 10f296dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f296de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f296e0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f296e2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f296e4 jmp 0x10f29691 */
  goto L_10f29691;
L_10f296e6:;
  /* 10f296e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f296e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f296ea xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f296ec xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f296ee mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 10f296f5 jmp 0x10f2970c */
  goto L_10f2970c;
L_10f296f7:;
  /* 10f296f7 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f296fb je 0x10f2970c */
  if (C.zf) goto L_10f2970c;
  /* 10f296fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f296ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f29701 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f29703 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f29705 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10f2970c:;
  /* 10f2970c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2970f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 10f29712 pop edi */
  EDI = (pop32());
  /* 10f29713 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 10f29716 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 10f29719 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 10f2971d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f29720 pop esi */
  ESI = (pop32());
  /* 10f29721 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10f29724 pop ebx */
  EBX = (pop32());
  /* 10f29725 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f29726 ret  */
  ESPCHK(0x10f29286u, _esp0);
  ESP += 4; return;
}

/* FUN_10009757 @ 0x10f29757 (659 bytes, 232 insns) */
void f_10f29757(void) {
  FTRACE(0x10f29757u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29757 push ebp */
  push32((uint32_t)(EBP));
  /* 10f29758 mov ebp, esp */
  EBP = (ESP);
  /* 10f2975a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2975d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f29760 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29761 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f29764 push esi */
  push32((uint32_t)(ESI));
  /* 10f29765 mov ecx, eax */
  ECX = (EAX);
  /* 10f29767 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 10f2976c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f29772 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10f29774 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 10f29777 push edi */
  push32((uint32_t)(EDI));
  /* 10f29778 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 10f2977c mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 10f29780 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 10f29784 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 10f29788 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 10f2978c mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 10f29790 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 10f29794 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 10f29798 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 10f2979c mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 10f297a0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 10f297a4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 10f297a8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f297af mov edx, eax */
  EDX = (EAX);
  /* 10f297b1 je 0x10f297b9 */
  if (C.zf) goto L_10f297b9;
  /* 10f297b3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 10f297b7 jmp 0x10f297bd */
  goto L_10f297bd;
L_10f297b9:;
  /* 10f297b9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_10f297bd:;
  /* 10f297bd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f297c0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 10f297c3 jne 0x10f297e3 */
  if (!C.zf) goto L_10f297e3;
  /* 10f297c5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f297c7 jne 0x10f297e3 */
  if (!C.zf) goto L_10f297e3;
  /* 10f297c9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f297cc jne 0x10f297e3 */
  if (!C.zf) goto L_10f297e3;
L_10f297ce:;
  /* 10f297ce and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 10f297d2 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 10f297d6 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 10f297da mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 10f297de jmp 0x10f299e1 */
  goto L_10f299e1;
L_10f297e3:;
  /* 10f297e3 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f297e6 jne 0x10f29862 */
  if (!C.zf) goto L_10f29862;
  /* 10f297e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f297ed mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 10f297f2 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f297f4 jne 0x10f297fc */
  if (!C.zf) goto L_10f297fc;
  /* 10f297f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f297fa je 0x10f2980b */
  if (C.zf) goto L_10f2980b;
L_10f297fc:;
  /* 10f297fc test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 10f29802 jne 0x10f2980b */
  if (!C.zf) goto L_10f2980b;
  /* 10f29804 push 0x10f2d6d8 */
  push32((uint32_t)(0x10f2d6d8u));
  /* 10f29809 jmp 0x10f29851 */
  goto L_10f29851;
L_10f2980b:;
  /* 10f2980b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 10f2980e je 0x10f29825 */
  if (C.zf) goto L_10f29825;
  /* 10f29810 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29816 jne 0x10f29825 */
  if (!C.zf) goto L_10f29825;
  /* 10f29818 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2981c jne 0x10f2984c */
  if (!C.zf) goto L_10f2984c;
  /* 10f2981e push 0x10f2d6d0 */
  push32((uint32_t)(0x10f2d6d0u));
  /* 10f29823 jmp 0x10f29834 */
  goto L_10f29834;
L_10f29825:;
  /* 10f29825 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29827 jne 0x10f2984c */
  if (!C.zf) goto L_10f2984c;
  /* 10f29829 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2982d jne 0x10f2984c */
  if (!C.zf) goto L_10f2984c;
  /* 10f2982f push 0x10f2d6c8 */
  push32((uint32_t)(0x10f2d6c8u));
L_10f29834:;
  /* 10f29834 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 10f29837 push eax */
  push32((uint32_t)(EAX));
  /* 10f29838 call 0x10f27370 */
  push32(0x10f2983du); f_10f27370();
  /* 10f2983d pop ecx */
  ECX = (pop32());
  /* 10f2983e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 10f29842 pop ecx */
  ECX = (pop32());
L_10f29843:;
  /* 10f29843 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10f29847 jmp 0x10f299ba */
  goto L_10f299ba;
L_10f2984c:;
  /* 10f2984c push 0x10f2d6c0 */
  push32((uint32_t)(0x10f2d6c0u));
L_10f29851:;
  /* 10f29851 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 10f29854 push eax */
  push32((uint32_t)(EAX));
  /* 10f29855 call 0x10f27370 */
  push32(0x10f2985au); f_10f27370();
  /* 10f2985a pop ecx */
  ECX = (pop32());
  /* 10f2985b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 10f2985f pop ecx */
  ECX = (pop32());
  /* 10f29860 jmp 0x10f29843 */
  goto L_10f29843;
L_10f29862:;
  /* 10f29862 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 10f29865 mov ecx, edi */
  ECX = (EDI);
  /* 10f29867 mov esi, eax */
  ESI = (EAX);
  /* 10f29869 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 10f2986c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f29872 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 10f29875 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 10f2987a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f2987c lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 10f2987f mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 10f29883 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f29886 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 10f29889 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 10f29890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f29893 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 10f29896 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 10f29899 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 10f2989c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2989e push eax */
  push32((uint32_t)(EAX));
  /* 10f2989f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f298a2 push eax */
  push32((uint32_t)(EAX));
  /* 10f298a3 call 0x10f2a1da */
  push32(0x10f298a8u); f_10f2a1da();
  /* 10f298a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f298ab cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f298b1 jb 0x10f298c3 */
  if (C.cf) goto L_10f298c3;
  /* 10f298b3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10f298b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f298b7 push eax */
  push32((uint32_t)(EAX));
  /* 10f298b8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f298bb push eax */
  push32((uint32_t)(EAX));
  /* 10f298bc call 0x10f29fba */
  push32(0x10f298c1u); f_10f29fba();
  /* 10f298c1 pop ecx */
  ECX = (pop32());
  /* 10f298c2 pop ecx */
  ECX = (pop32());
L_10f298c3:;
  /* 10f298c3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 10f298c7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 10f298ca je 0x10f298dd */
  if (C.zf) goto L_10f298dd;
  /* 10f298cc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10f298cf movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 10f298d2 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f298d4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f298d6 jg 0x10f298e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f298e0;
  /* 10f298d8 jmp 0x10f297ce */
  goto L_10f297ce;
L_10f298dd:;
  /* 10f298dd mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_10f298e0:;
  /* 10f298e0 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f298e3 jle 0x10f298e8 */
  if ((C.zf||C.sf!=C.of)) goto L_10f298e8;
  /* 10f298e5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10f298e7 pop edi */
  EDI = (pop32());
L_10f298e8:;
  /* 10f298e8 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 10f298ec sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f298f2 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 10f298f7 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_10f298fe:;
  /* 10f298fe lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f29901 push eax */
  push32((uint32_t)(EAX));
  /* 10f29902 call 0x10f29164 */
  push32(0x10f29907u); f_10f29164();
  /* 10f29907 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 10f2990a pop ecx */
  ECX = (pop32());
  /* 10f2990b jne 0x10f298fe */
  if (!C.zf) goto L_10f298fe;
  /* 10f2990d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f2990f jge 0x10f29928 */
  if ((C.sf==C.of)) goto L_10f29928;
  /* 10f29911 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 10f29913 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 10f29919 jle 0x10f29928 */
  if ((C.zf||C.sf!=C.of)) goto L_10f29928;
L_10f2991b:;
  /* 10f2991b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f2991e push eax */
  push32((uint32_t)(EAX));
  /* 10f2991f call 0x10f29192 */
  push32(0x10f29924u); f_10f29192();
  /* 10f29924 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f29925 pop ecx */
  ECX = (pop32());
  /* 10f29926 jne 0x10f2991b */
  if (!C.zf) goto L_10f2991b;
L_10f29928:;
  /* 10f29928 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 10f2992b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 10f2992e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f29930 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 10f29933 jle 0x10f29985 */
  if ((C.zf||C.sf!=C.of)) goto L_10f29985;
  /* 10f29935 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_10f29938:;
  /* 10f29938 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 10f2993b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 10f2993e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f2993f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f29940 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f29943 push eax */
  push32((uint32_t)(EAX));
  /* 10f29944 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f29945 call 0x10f29164 */
  push32(0x10f2994au); f_10f29164();
  /* 10f2994a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f2994d push eax */
  push32((uint32_t)(EAX));
  /* 10f2994e call 0x10f29164 */
  push32(0x10f29953u); f_10f29164();
  /* 10f29953 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10f29956 push eax */
  push32((uint32_t)(EAX));
  /* 10f29957 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f2995a push eax */
  push32((uint32_t)(EAX));
  /* 10f2995b call 0x10f29106 */
  push32(0x10f29960u); f_10f29106();
  /* 10f29960 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10f29963 push eax */
  push32((uint32_t)(EAX));
  /* 10f29964 call 0x10f29164 */
  push32(0x10f29969u); f_10f29164();
  /* 10f29969 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 10f2996c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f2996f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 10f29973 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29976 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f29978 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 10f2997b dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 10f2997e mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f29980 jne 0x10f29938 */
  if (!C.zf) goto L_10f29938;
  /* 10f29982 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_10f29985:;
  /* 10f29985 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 10f29988 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f29989 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f2998a cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f2998d lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 10f29990 jl 0x10f299c2 */
  if ((C.sf!=C.of)) goto L_10f299c2;
L_10f29992:;
  /* 10f29992 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29994 jb 0x10f299a5 */
  if (C.cf) goto L_10f299a5;
  /* 10f29996 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29999 jne 0x10f299a1 */
  if (!C.zf) goto L_10f299a1;
  /* 10f2999b mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 10f2999e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f2999f jmp 0x10f29992 */
  goto L_10f29992;
L_10f299a1:;
  /* 10f299a1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f299a3 jae 0x10f299a9 */
  if (!C.cf) goto L_10f299a9;
L_10f299a5:;
  /* 10f299a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f299a6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_10f299a9:;
  /* 10f299a9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_10f299ab:;
  /* 10f299ab sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f299ad sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f299af mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 10f299b2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10f299b5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_10f299ba:;
  /* 10f299ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f299bd:;
  /* 10f299bd pop edi */
  EDI = (pop32());
  /* 10f299be pop esi */
  ESI = (pop32());
  /* 10f299bf pop ebx */
  EBX = (pop32());
  /* 10f299c0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f299c1 ret  */
  ESPCHK(0x10f29757u, _esp0);
  ESP += 4; return;
L_10f299c2:;
  /* 10f299c2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f299c4 jb 0x10f299d2 */
  if (C.cf) goto L_10f299d2;
  /* 10f299c6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f299c9 jne 0x10f299ce */
  if (!C.zf) goto L_10f299ce;
  /* 10f299cb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10f299cc jmp 0x10f299c2 */
  goto L_10f299c2;
L_10f299ce:;
  /* 10f299ce cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f299d0 jae 0x10f299ab */
  if (!C.cf) goto L_10f299ab;
L_10f299d2:;
  /* 10f299d2 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 10f299d6 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 10f299da mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 10f299de mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_10f299e1:;
  /* 10f299e1 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 10f299e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f299e7 pop eax */
  EAX = (pop32());
  /* 10f299e8 jmp 0x10f299bd */
  goto L_10f299bd;
}

/* FUN_100099ea @ 0x10f299ea (115 bytes, 37 insns) */
void f_10f299ea(void) {
  FTRACE(0x10f299eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f299ea push esi */
  push32((uint32_t)(ESI));
  /* 10f299eb call 0x10f29a66 */
  push32(0x10f299f0u); f_10f29a66();
  /* 10f299f0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f299f4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f299f6 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f299f8 mov eax, 0x10f31ec0 */
  EAX = (0x10f31ec0u);
L_10f299fd:;
  /* 10f299fd cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f299ff je 0x10f29a23 */
  if (C.zf) goto L_10f29a23;
  /* 10f29a01 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29a04 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f29a05 cmp eax, 0x10f32028 */
  { uint32_t _a=(EAX),_b=(0x10f32028u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29a0a jl 0x10f299fd */
  if ((C.sf!=C.of)) goto L_10f299fd;
  /* 10f29a0c cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29a0f jb 0x10f29a33 */
  if (C.cf) goto L_10f29a33;
  /* 10f29a11 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29a14 ja 0x10f29a33 */
  if ((!C.cf&&!C.zf)) goto L_10f29a33;
  /* 10f29a16 call 0x10f29a5d */
  push32(0x10f29a1bu); f_10f29a5d();
  /* 10f29a1b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10f29a21 pop esi */
  ESI = (pop32());
  /* 10f29a22 ret  */
  ESPCHK(0x10f299eau, _esp0);
  ESP += 4; return;
L_10f29a23:;
  /* 10f29a23 call 0x10f29a5d */
  push32(0x10f29a28u); f_10f29a5d();
  /* 10f29a28 mov ecx, dword ptr [esi*8 + 0x10f31ec4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10f31ec4)));
  /* 10f29a2f pop esi */
  ESI = (pop32());
  /* 10f29a30 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f29a32 ret  */
  ESPCHK(0x10f299eau, _esp0);
  ESP += 4; return;
L_10f29a33:;
  /* 10f29a33 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29a39 jb 0x10f29a50 */
  if (C.cf) goto L_10f29a50;
  /* 10f29a3b cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29a41 ja 0x10f29a50 */
  if ((!C.cf&&!C.zf)) goto L_10f29a50;
  /* 10f29a43 call 0x10f29a5d */
  push32(0x10f29a48u); f_10f29a5d();
  /* 10f29a48 mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10f29a4e pop esi */
  ESI = (pop32());
  /* 10f29a4f ret  */
  ESPCHK(0x10f299eau, _esp0);
  ESP += 4; return;
L_10f29a50:;
  /* 10f29a50 call 0x10f29a5d */
  push32(0x10f29a55u); f_10f29a5d();
  /* 10f29a55 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10f29a5b pop esi */
  ESI = (pop32());
  /* 10f29a5c ret  */
  ESPCHK(0x10f299eau, _esp0);
  ESP += 4; return;
}

/* FUN_10009a5d @ 0x10f29a5d (9 bytes, 3 insns) */
void f_10f29a5d(void) {
  FTRACE(0x10f29a5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29a5d call 0x10f24a94 */
  push32(0x10f29a62u); f_10f24a94();
  /* 10f29a62 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29a65 ret  */
  ESPCHK(0x10f29a5du, _esp0);
  ESP += 4; return;
}

/* FUN_10009a66 @ 0x10f29a66 (9 bytes, 3 insns) */
void f_10f29a66(void) {
  FTRACE(0x10f29a66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29a66 call 0x10f24a94 */
  push32(0x10f29a6bu); f_10f24a94();
  /* 10f29a6b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29a6e ret  */
  ESPCHK(0x10f29a66u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a6f @ 0x10f29a6f (127 bytes, 48 insns) */
void f_10f29a6f(void) {
  FTRACE(0x10f29a6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29a6f mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f29a73 push esi */
  push32((uint32_t)(ESI));
  /* 10f29a74 cmp ecx, dword ptr [0x10f49100] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f49100))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29a7a push edi */
  push32((uint32_t)(EDI));
  /* 10f29a7b jae 0x10f29ad5 */
  if (!C.cf) goto L_10f29ad5;
  /* 10f29a7d mov eax, ecx */
  EAX = (ECX);
  /* 10f29a7f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f29a82 lea edi, [eax*4 + 0x10f49000] */
  EDI = ((uint32_t)(EAX*4 + 0x10f49000));
  /* 10f29a89 mov eax, ecx */
  EAX = (ECX);
  /* 10f29a8b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f29a8e lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10f29a91 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f29a93 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10f29a96 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29a98 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10f29a9c je 0x10f29ad5 */
  if (C.zf) goto L_10f29ad5;
  /* 10f29a9e cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29aa1 je 0x10f29ad5 */
  if (C.zf) goto L_10f29ad5;
  /* 10f29aa3 cmp dword ptr [0x10f479cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f479cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29aaa jne 0x10f29acb */
  if (!C.zf) goto L_10f29acb;
  /* 10f29aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f29aae sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f29ab0 je 0x10f29ac2 */
  if (C.zf) goto L_10f29ac2;
  /* 10f29ab2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f29ab3 je 0x10f29abd */
  if (C.zf) goto L_10f29abd;
  /* 10f29ab5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f29ab6 jne 0x10f29acb */
  if (!C.zf) goto L_10f29acb;
  /* 10f29ab8 push eax */
  push32((uint32_t)(EAX));
  /* 10f29ab9 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10f29abb jmp 0x10f29ac5 */
  goto L_10f29ac5;
L_10f29abd:;
  /* 10f29abd push eax */
  push32((uint32_t)(EAX));
  /* 10f29abe push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10f29ac0 jmp 0x10f29ac5 */
  goto L_10f29ac5;
L_10f29ac2:;
  /* 10f29ac2 push eax */
  push32((uint32_t)(EAX));
  /* 10f29ac3 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_10f29ac5:;
  /* 10f29ac5 call dword ptr [0x10f2d020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d020))), 0x10f29acbu);
L_10f29acb:;
  /* 10f29acb mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f29acd or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 10f29ad1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f29ad3 jmp 0x10f29aeb */
  goto L_10f29aeb;
L_10f29ad5:;
  /* 10f29ad5 call 0x10f29a5d */
  push32(0x10f29adau); f_10f29a5d();
  /* 10f29ada mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f29ae0 call 0x10f29a66 */
  push32(0x10f29ae5u); f_10f29a66();
  /* 10f29ae5 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f29ae8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f29aeb:;
  /* 10f29aeb pop edi */
  EDI = (pop32());
  /* 10f29aec pop esi */
  ESI = (pop32());
  /* 10f29aed ret  */
  ESPCHK(0x10f29a6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10009aee @ 0x10f29aee (66 bytes, 19 insns) */
void f_10f29aee(void) {
  FTRACE(0x10f29aeeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29aee mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f29af2 cmp eax, dword ptr [0x10f49100] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f49100))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29af8 jae 0x10f29b19 */
  if (!C.cf) goto L_10f29b19;
  /* 10f29afa mov ecx, eax */
  ECX = (EAX);
  /* 10f29afc and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f29aff sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f29b02 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10f29b05 mov ecx, dword ptr [ecx*4 + 0x10f49000] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f29b0c test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10f29b11 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10f29b14 je 0x10f29b19 */
  if (C.zf) goto L_10f29b19;
  /* 10f29b16 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10f29b18 ret  */
  ESPCHK(0x10f29aeeu, _esp0);
  ESP += 4; return;
L_10f29b19:;
  /* 10f29b19 call 0x10f29a5d */
  push32(0x10f29b1eu); f_10f29a5d();
  /* 10f29b1e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f29b24 call 0x10f29a66 */
  push32(0x10f29b29u); f_10f29a66();
  /* 10f29b29 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10f29b2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f29b2f ret  */
  ESPCHK(0x10f29aeeu, _esp0);
  ESP += 4; return;
}

/* FUN_10009b30 @ 0x10f29b30 (95 bytes, 34 insns) */
void f_10f29b30(void) {
  FTRACE(0x10f29b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29b30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f29b34 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29b35 mov ecx, eax */
  ECX = (EAX);
  /* 10f29b37 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f29b3a sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f29b3d push esi */
  push32((uint32_t)(ESI));
  /* 10f29b3e push edi */
  push32((uint32_t)(EDI));
  /* 10f29b3f mov esi, dword ptr [ecx*4 + 0x10f49000] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f29b46 lea ebx, [ecx*4 + 0x10f49000] */
  EBX = ((uint32_t)(ECX*4 + 0x10f49000));
  /* 10f29b4d lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 10f29b50 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 10f29b53 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29b55 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29b59 jne 0x10f29b7e */
  if (!C.zf) goto L_10f29b7e;
  /* 10f29b5b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f29b5d call 0x10f26892 */
  push32(0x10f29b62u); f_10f26892();
  /* 10f29b62 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29b66 pop ecx */
  ECX = (pop32());
  /* 10f29b67 jne 0x10f29b76 */
  if (!C.zf) goto L_10f29b76;
  /* 10f29b69 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 10f29b6c push eax */
  push32((uint32_t)(EAX));
  /* 10f29b6d call dword ptr [0x10f2d060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d060))), 0x10f29b73u);
  /* 10f29b73 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_10f29b76:;
  /* 10f29b76 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f29b78 call 0x10f268f3 */
  push32(0x10f29b7du); f_10f268f3();
  /* 10f29b7d pop ecx */
  ECX = (pop32());
L_10f29b7e:;
  /* 10f29b7e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 10f29b80 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 10f29b84 push eax */
  push32((uint32_t)(EAX));
  /* 10f29b85 call dword ptr [0x10f2d05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d05c))), 0x10f29b8bu);
  /* 10f29b8b pop edi */
  EDI = (pop32());
  /* 10f29b8c pop esi */
  ESI = (pop32());
  /* 10f29b8d pop ebx */
  EBX = (pop32());
  /* 10f29b8e ret  */
  ESPCHK(0x10f29b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b8f @ 0x10f29b8f (34 bytes, 10 insns) */
void f_10f29b8f(void) {
  FTRACE(0x10f29b8fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29b8f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f29b93 mov ecx, eax */
  ECX = (EAX);
  /* 10f29b95 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f29b98 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10f29b9b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10f29b9e mov ecx, dword ptr [ecx*4 + 0x10f49000] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10f49000)));
  /* 10f29ba5 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 10f29ba9 push eax */
  push32((uint32_t)(EAX));
  /* 10f29baa call dword ptr [0x10f2d058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d058))), 0x10f29bb0u);
  /* 10f29bb0 ret  */
  ESPCHK(0x10f29b8fu, _esp0);
  ESP += 4; return;
}

/* FUN_10009c32 @ 0x10f29c32 (46 bytes, 22 insns) */
void f_10f29c32(void) {
  FTRACE(0x10f29c32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29c32 push esi */
  push32((uint32_t)(ESI));
  /* 10f29c33 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f29c37 push esi */
  push32((uint32_t)(ESI));
  /* 10f29c38 call 0x10f29c60 */
  push32(0x10f29c3du); f_10f29c60();
  /* 10f29c3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f29c3f pop ecx */
  ECX = (pop32());
  /* 10f29c40 je 0x10f29c47 */
  if (C.zf) goto L_10f29c47;
  /* 10f29c42 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f29c45 pop esi */
  ESI = (pop32());
  /* 10f29c46 ret  */
  ESPCHK(0x10f29c32u, _esp0);
  ESP += 4; return;
L_10f29c47:;
  /* 10f29c47 test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 10f29c4b je 0x10f29c5c */
  if (C.zf) goto L_10f29c5c;
  /* 10f29c4d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10f29c50 call 0x10f2a2d3 */
  push32(0x10f29c55u); f_10f2a2d3();
  /* 10f29c55 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f29c57 pop ecx */
  ECX = (pop32());
  /* 10f29c58 pop esi */
  ESI = (pop32());
  /* 10f29c59 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f29c5b ret  */
  ESPCHK(0x10f29c32u, _esp0);
  ESP += 4; return;
L_10f29c5c:;
  /* 10f29c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f29c5e pop esi */
  ESI = (pop32());
  /* 10f29c5f ret  */
  ESPCHK(0x10f29c32u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c60 @ 0x10f29c60 (92 bytes, 40 insns) */
void f_10f29c60(void) {
  FTRACE(0x10f29c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29c60 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29c61 push esi */
  push32((uint32_t)(ESI));
  /* 10f29c62 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10f29c66 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f29c68 push edi */
  push32((uint32_t)(EDI));
  /* 10f29c69 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10f29c6c mov ecx, eax */
  ECX = (EAX);
  /* 10f29c6e and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10f29c71 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29c74 jne 0x10f29cad */
  if (!C.zf) goto L_10f29cad;
  /* 10f29c76 test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 10f29c7a je 0x10f29cad */
  if (C.zf) goto L_10f29cad;
  /* 10f29c7c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10f29c7f mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 10f29c81 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f29c83 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10f29c85 jle 0x10f29cad */
  if ((C.zf||C.sf!=C.of)) goto L_10f29cad;
  /* 10f29c87 push edi */
  push32((uint32_t)(EDI));
  /* 10f29c88 push eax */
  push32((uint32_t)(EAX));
  /* 10f29c89 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10f29c8c call 0x10f27dea */
  push32(0x10f29c91u); f_10f27dea();
  /* 10f29c91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29c94 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29c96 jne 0x10f29ca6 */
  if (!C.zf) goto L_10f29ca6;
  /* 10f29c98 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10f29c9b test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 10f29c9d je 0x10f29cad */
  if (C.zf) goto L_10f29cad;
  /* 10f29c9f and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 10f29ca1 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10f29ca4 jmp 0x10f29cad */
  goto L_10f29cad;
L_10f29ca6:;
  /* 10f29ca6 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10f29caa or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_10f29cad:;
  /* 10f29cad mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 10f29cb0 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f29cb4 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f29cb6 pop edi */
  EDI = (pop32());
  /* 10f29cb7 mov eax, ebx */
  EAX = (EBX);
  /* 10f29cb9 pop esi */
  ESI = (pop32());
  /* 10f29cba pop ebx */
  EBX = (pop32());
  /* 10f29cbb ret  */
  ESPCHK(0x10f29c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cc5 @ 0x10f29cc5 (164 bytes, 66 insns) */
void f_10f29cc5(void) {
  FTRACE(0x10f29cc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29cc5 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29cc6 push esi */
  push32((uint32_t)(ESI));
  /* 10f29cc7 push edi */
  push32((uint32_t)(EDI));
  /* 10f29cc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f29cca xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f29ccc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10f29cce call 0x10f26892 */
  push32(0x10f29cd3u); f_10f26892();
  /* 10f29cd3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10f29cd5 pop ecx */
  ECX = (pop32());
  /* 10f29cd6 cmp dword ptr [0x10f48fc0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10f48fc0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29cdc jle 0x10f29d52 */
  if ((C.zf||C.sf!=C.of)) goto L_10f29d52;
L_10f29cde:;
  /* 10f29cde mov eax, dword ptr [0x10f47fa8] */
  EAX = (r32((uint32_t)(0x10f47fa8)));
  /* 10f29ce3 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 10f29ce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f29ce8 je 0x10f29d49 */
  if (C.zf) goto L_10f29d49;
  /* 10f29cea test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 10f29cee je 0x10f29d49 */
  if (C.zf) goto L_10f29d49;
  /* 10f29cf0 push eax */
  push32((uint32_t)(EAX));
  /* 10f29cf1 push esi */
  push32((uint32_t)(ESI));
  /* 10f29cf2 call 0x10f280c5 */
  push32(0x10f29cf7u); f_10f280c5();
  /* 10f29cf7 mov eax, dword ptr [0x10f47fa8] */
  EAX = (r32((uint32_t)(0x10f47fa8)));
  /* 10f29cfc pop ecx */
  ECX = (pop32());
  /* 10f29cfd pop ecx */
  ECX = (pop32());
  /* 10f29cfe mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 10f29d01 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f29d04 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 10f29d07 je 0x10f29d39 */
  if (C.zf) goto L_10f29d39;
  /* 10f29d09 cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d0e jne 0x10f29d1f */
  if (!C.zf) goto L_10f29d1f;
  /* 10f29d10 push eax */
  push32((uint32_t)(EAX));
  /* 10f29d11 call 0x10f29c32 */
  push32(0x10f29d16u); f_10f29c32();
  /* 10f29d16 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d19 pop ecx */
  ECX = (pop32());
  /* 10f29d1a je 0x10f29d39 */
  if (C.zf) goto L_10f29d39;
  /* 10f29d1c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10f29d1d jmp 0x10f29d39 */
  goto L_10f29d39;
L_10f29d1f:;
  /* 10f29d1f cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d24 jne 0x10f29d39 */
  if (!C.zf) goto L_10f29d39;
  /* 10f29d26 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 10f29d29 je 0x10f29d39 */
  if (C.zf) goto L_10f29d39;
  /* 10f29d2b push eax */
  push32((uint32_t)(EAX));
  /* 10f29d2c call 0x10f29c32 */
  push32(0x10f29d31u); f_10f29c32();
  /* 10f29d31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d34 pop ecx */
  ECX = (pop32());
  /* 10f29d35 jne 0x10f29d39 */
  if (!C.zf) goto L_10f29d39;
  /* 10f29d37 or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_10f29d39:;
  /* 10f29d39 mov eax, dword ptr [0x10f47fa8] */
  EAX = (r32((uint32_t)(0x10f47fa8)));
  /* 10f29d3e push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 10f29d41 push esi */
  push32((uint32_t)(ESI));
  /* 10f29d42 call 0x10f28117 */
  push32(0x10f29d47u); f_10f28117();
  /* 10f29d47 pop ecx */
  ECX = (pop32());
  /* 10f29d48 pop ecx */
  ECX = (pop32());
L_10f29d49:;
  /* 10f29d49 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f29d4a cmp esi, dword ptr [0x10f48fc0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10f48fc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d50 jl 0x10f29cde */
  if ((C.sf!=C.of)) goto L_10f29cde;
L_10f29d52:;
  /* 10f29d52 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f29d54 call 0x10f268f3 */
  push32(0x10f29d59u); f_10f268f3();
  /* 10f29d59 cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d5e pop ecx */
  ECX = (pop32());
  /* 10f29d5f mov eax, ebx */
  EAX = (EBX);
  /* 10f29d61 je 0x10f29d65 */
  if (C.zf) goto L_10f29d65;
  /* 10f29d63 mov eax, edi */
  EAX = (EDI);
L_10f29d65:;
  /* 10f29d65 pop edi */
  EDI = (pop32());
  /* 10f29d66 pop esi */
  ESI = (pop32());
  /* 10f29d67 pop ebx */
  EBX = (pop32());
  /* 10f29d68 ret  */
  ESPCHK(0x10f29cc5u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d69 @ 0x10f29d69 (111 bytes, 44 insns) */
void f_10f29d69(void) {
  FTRACE(0x10f29d69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29d69 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29d6a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f29d6c cmp dword ptr [0x10f47bd0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10f47bd0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d72 jne 0x10f29d87 */
  if (!C.zf) goto L_10f29d87;
  /* 10f29d74 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f29d78 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d7b jl 0x10f29dd6 */
  if ((C.sf!=C.of)) goto L_10f29dd6;
  /* 10f29d7d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d80 jg 0x10f29dd6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f29dd6;
  /* 10f29d82 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f29d85 pop ebx */
  EBX = (pop32());
  /* 10f29d86 ret  */
  ESPCHK(0x10f29d69u, _esp0);
  ESP += 4; return;
L_10f29d87:;
  /* 10f29d87 push esi */
  push32((uint32_t)(ESI));
  /* 10f29d88 mov esi, 0x10f47d70 */
  ESI = (0x10f47d70u);
  /* 10f29d8d push edi */
  push32((uint32_t)(EDI));
  /* 10f29d8e push esi */
  push32((uint32_t)(ESI));
  /* 10f29d8f call dword ptr [0x10f2d04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d04c))), 0x10f29d95u);
  /* 10f29d95 cmp dword ptr [0x10f47d6c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10f47d6c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29d9b mov edi, dword ptr [0x10f2d050] */
  EDI = (r32((uint32_t)(0x10f2d050)));
  /* 10f29da1 je 0x10f29db1 */
  if (C.zf) goto L_10f29db1;
  /* 10f29da3 push esi */
  push32((uint32_t)(ESI));
  /* 10f29da4 call edi */
  call_ind((uint32_t)(EDI), 0x10f29da6u);
  /* 10f29da6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f29da8 call 0x10f26892 */
  push32(0x10f29dadu); f_10f26892();
  /* 10f29dad pop ecx */
  ECX = (pop32());
  /* 10f29dae push 1 */
  push32((uint32_t)(0x1u));
  /* 10f29db0 pop ebx */
  EBX = (pop32());
L_10f29db1:;
  /* 10f29db1 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10f29db5 call 0x10f29dd8 */
  push32(0x10f29dbau); f_10f29dd8();
  /* 10f29dba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10f29dbc pop ecx */
  ECX = (pop32());
  /* 10f29dbd mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10f29dc1 je 0x10f29dcd */
  if (C.zf) goto L_10f29dcd;
  /* 10f29dc3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f29dc5 call 0x10f268f3 */
  push32(0x10f29dcau); f_10f268f3();
  /* 10f29dca pop ecx */
  ECX = (pop32());
  /* 10f29dcb jmp 0x10f29dd0 */
  goto L_10f29dd0;
L_10f29dcd:;
  /* 10f29dcd push esi */
  push32((uint32_t)(ESI));
  /* 10f29dce call edi */
  call_ind((uint32_t)(EDI), 0x10f29dd0u);
L_10f29dd0:;
  /* 10f29dd0 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f29dd4 pop edi */
  EDI = (pop32());
  /* 10f29dd5 pop esi */
  ESI = (pop32());
L_10f29dd6:;
  /* 10f29dd6 pop ebx */
  EBX = (pop32());
  /* 10f29dd7 ret  */
  ESPCHK(0x10f29d69u, _esp0);
  ESP += 4; return;
}

/* FUN_10009dd8 @ 0x10f29dd8 (204 bytes, 71 insns) */
void f_10f29dd8(void) {
  FTRACE(0x10f29dd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29dd8 push ebp */
  push32((uint32_t)(EBP));
  /* 10f29dd9 mov ebp, esp */
  EBP = (ESP);
  /* 10f29ddb push ecx */
  push32((uint32_t)(ECX));
  /* 10f29ddc cmp dword ptr [0x10f47bd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f47bd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29de3 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29de4 jne 0x10f29e03 */
  if (!C.zf) goto L_10f29e03;
  /* 10f29de6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f29de9 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29dec jl 0x10f29ea1 */
  if ((C.sf!=C.of)) goto L_10f29ea1;
  /* 10f29df2 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29df5 jg 0x10f29ea1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f29ea1;
  /* 10f29dfb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f29dfe jmp 0x10f29ea1 */
  goto L_10f29ea1;
L_10f29e03:;
  /* 10f29e03 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f29e06 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29e0c jge 0x10f29e36 */
  if ((C.sf==C.of)) goto L_10f29e36;
  /* 10f29e0e cmp dword ptr [0x10f31750], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f31750))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29e15 jle 0x10f29e23 */
  if ((C.zf||C.sf!=C.of)) goto L_10f29e23;
  /* 10f29e17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f29e19 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29e1a call 0x10f26c3e */
  push32(0x10f29e1fu); f_10f26c3e();
  /* 10f29e1f pop ecx */
  ECX = (pop32());
  /* 10f29e20 pop ecx */
  ECX = (pop32());
  /* 10f29e21 jmp 0x10f29e2e */
  goto L_10f29e2e;
L_10f29e23:;
  /* 10f29e23 mov eax, dword ptr [0x10f3175c] */
  EAX = (r32((uint32_t)(0x10f3175c)));
  /* 10f29e28 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10f29e2b and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_10f29e2e:;
  /* 10f29e2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f29e30 jne 0x10f29e36 */
  if (!C.zf) goto L_10f29e36;
L_10f29e32:;
  /* 10f29e32 mov eax, ebx */
  EAX = (EBX);
  /* 10f29e34 jmp 0x10f29ea1 */
  goto L_10f29ea1;
L_10f29e36:;
  /* 10f29e36 mov edx, dword ptr [0x10f3175c] */
  EDX = (r32((uint32_t)(0x10f3175c)));
  /* 10f29e3c mov eax, ebx */
  EAX = (EBX);
  /* 10f29e3e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f29e41 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 10f29e44 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10f29e49 je 0x10f29e59 */
  if (C.zf) goto L_10f29e59;
  /* 10f29e4b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10f29e4f mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 10f29e52 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10f29e55 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f29e57 jmp 0x10f29e62 */
  goto L_10f29e62;
L_10f29e59:;
  /* 10f29e59 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10f29e5d mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 10f29e60 push 1 */
  push32((uint32_t)(0x1u));
L_10f29e62:;
  /* 10f29e62 pop eax */
  EAX = (pop32());
  /* 10f29e63 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10f29e66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f29e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f29e6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10f29e6c push ecx */
  push32((uint32_t)(ECX));
  /* 10f29e6d push eax */
  push32((uint32_t)(EAX));
  /* 10f29e6e lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10f29e71 push eax */
  push32((uint32_t)(EAX));
  /* 10f29e72 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10f29e77 push dword ptr [0x10f47bd0] */
  push32((uint32_t)(r32((uint32_t)(0x10f47bd0))));
  /* 10f29e7d call 0x10f28e96 */
  push32(0x10f29e82u); f_10f28e96();
  /* 10f29e82 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29e85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f29e87 je 0x10f29e32 */
  if (C.zf) goto L_10f29e32;
  /* 10f29e89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f29e8c jne 0x10f29e94 */
  if (!C.zf) goto L_10f29e94;
  /* 10f29e8e movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10f29e92 jmp 0x10f29ea1 */
  goto L_10f29ea1;
L_10f29e94:;
  /* 10f29e94 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 10f29e98 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10f29e9c shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f29e9f or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10f29ea1:;
  /* 10f29ea1 pop ebx */
  EBX = (pop32());
  /* 10f29ea2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f29ea3 ret  */
  ESPCHK(0x10f29dd8u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10f29eb0 (129 bytes, 56 insns) */
void f_10f29eb0(void) {
  FTRACE(0x10f29eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29eb0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f29eb4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f29eb8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10f29ebe jne 0x10f29efc */
  if (!C.zf) goto L_10f29efc;
L_10f29ec0:;
  /* 10f29ec0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f29ec2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29ec4 jne 0x10f29ef4 */
  if (!C.zf) goto L_10f29ef4;
  /* 10f29ec6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f29ec8 je 0x10f29ef0 */
  if (C.zf) goto L_10f29ef0;
  /* 10f29eca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29ecd jne 0x10f29ef4 */
  if (!C.zf) goto L_10f29ef4;
  /* 10f29ecf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10f29ed1 je 0x10f29ef0 */
  if (C.zf) goto L_10f29ef0;
  /* 10f29ed3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f29ed6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29ed9 jne 0x10f29ef4 */
  if (!C.zf) goto L_10f29ef4;
  /* 10f29edb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f29edd je 0x10f29ef0 */
  if (C.zf) goto L_10f29ef0;
  /* 10f29edf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29ee2 jne 0x10f29ef4 */
  if (!C.zf) goto L_10f29ef4;
  /* 10f29ee4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29ee7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29eea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10f29eec jne 0x10f29ec0 */
  if (!C.zf) goto L_10f29ec0;
  /* 10f29eee mov edi, edi */
  EDI = (EDI);
L_10f29ef0:;
  /* 10f29ef0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f29ef2 ret  */
  ESPCHK(0x10f29eb0u, _esp0);
  ESP += 4; return;
  /* 10f29ef3 nop  */
  /* nop */
L_10f29ef4:;
  /* 10f29ef4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f29ef6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f29ef8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f29ef9 ret  */
  ESPCHK(0x10f29eb0u, _esp0);
  ESP += 4; return;
  /* 10f29efa mov edi, edi */
  EDI = (EDI);
L_10f29efc:;
  /* 10f29efc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10f29f02 je 0x10f29f18 */
  if (C.zf) goto L_10f29f18;
  /* 10f29f04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f29f06 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f29f07 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29f09 jne 0x10f29ef4 */
  if (!C.zf) goto L_10f29ef4;
  /* 10f29f0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f29f0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f29f0e je 0x10f29ef0 */
  if (C.zf) goto L_10f29ef0;
  /* 10f29f10 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10f29f16 je 0x10f29ec0 */
  if (C.zf) goto L_10f29ec0;
L_10f29f18:;
  /* 10f29f18 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10f29f1b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29f1e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29f20 jne 0x10f29ef4 */
  if (!C.zf) goto L_10f29ef4;
  /* 10f29f22 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f29f24 je 0x10f29ef0 */
  if (C.zf) goto L_10f29ef0;
  /* 10f29f26 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f29f29 jne 0x10f29ef4 */
  if (!C.zf) goto L_10f29ef4;
  /* 10f29f2b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10f29f2d je 0x10f29ef0 */
  if (C.zf) goto L_10f29ef0;
  /* 10f29f2f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29f32 jmp 0x10f29ec0 */
  goto L_10f29ec0;
}

/* FUN_10009f40 @ 0x10f29f40 (62 bytes, 35 insns) */
void f_10f29f40(void) {
  FTRACE(0x10f29f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10f29f41 mov ebp, esp */
  EBP = (ESP);
  /* 10f29f43 push esi */
  push32((uint32_t)(ESI));
  /* 10f29f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f29f46 push eax */
  push32((uint32_t)(EAX));
  /* 10f29f47 push eax */
  push32((uint32_t)(EAX));
  /* 10f29f48 push eax */
  push32((uint32_t)(EAX));
  /* 10f29f49 push eax */
  push32((uint32_t)(EAX));
  /* 10f29f4a push eax */
  push32((uint32_t)(EAX));
  /* 10f29f4b push eax */
  push32((uint32_t)(EAX));
  /* 10f29f4c push eax */
  push32((uint32_t)(EAX));
  /* 10f29f4d push eax */
  push32((uint32_t)(EAX));
  /* 10f29f4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f29f51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f29f54:;
  /* 10f29f54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f29f56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f29f58 je 0x10f29f61 */
  if (C.zf) goto L_10f29f61;
  /* 10f29f5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f29f5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10f29f5b");
  /* 10f29f5f jmp 0x10f29f54 */
  goto L_10f29f54;
L_10f29f61:;
  /* 10f29f61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f29f64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f29f67 nop  */
  /* nop */
L_10f29f68:;
  /* 10f29f68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f29f69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f29f6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f29f6d je 0x10f29f76 */
  if (C.zf) goto L_10f29f76;
  /* 10f29f6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f29f70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10f29f70");
  /* 10f29f74 jae 0x10f29f68 */
  if (!C.cf) goto L_10f29f68;
L_10f29f76:;
  /* 10f29f76 mov eax, ecx */
  EAX = (ECX);
  /* 10f29f78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29f7b pop esi */
  ESI = (pop32());
  /* 10f29f7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f29f7d ret  */
  ESPCHK(0x10f29f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f80 @ 0x10f29f80 (58 bytes, 32 insns) */
void f_10f29f80(void) {
  FTRACE(0x10f29f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10f29f81 mov ebp, esp */
  EBP = (ESP);
  /* 10f29f83 push esi */
  push32((uint32_t)(ESI));
  /* 10f29f84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f29f86 push eax */
  push32((uint32_t)(EAX));
  /* 10f29f87 push eax */
  push32((uint32_t)(EAX));
  /* 10f29f88 push eax */
  push32((uint32_t)(EAX));
  /* 10f29f89 push eax */
  push32((uint32_t)(EAX));
  /* 10f29f8a push eax */
  push32((uint32_t)(EAX));
  /* 10f29f8b push eax */
  push32((uint32_t)(EAX));
  /* 10f29f8c push eax */
  push32((uint32_t)(EAX));
  /* 10f29f8d push eax */
  push32((uint32_t)(EAX));
  /* 10f29f8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f29f91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f29f94:;
  /* 10f29f94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f29f96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f29f98 je 0x10f29fa1 */
  if (C.zf) goto L_10f29fa1;
  /* 10f29f9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f29f9b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10f29f9b");
  /* 10f29f9f jmp 0x10f29f94 */
  goto L_10f29f94;
L_10f29fa1:;
  /* 10f29fa1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10f29fa4:;
  /* 10f29fa4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f29fa6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f29fa8 je 0x10f29fb4 */
  if (C.zf) goto L_10f29fb4;
  /* 10f29faa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f29fab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10f29fab");
  /* 10f29faf jae 0x10f29fa4 */
  if (!C.cf) goto L_10f29fa4;
  /* 10f29fb1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10f29fb4:;
  /* 10f29fb4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f29fb7 pop esi */
  ESI = (pop32());
  /* 10f29fb8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f29fb9 ret  */
  ESPCHK(0x10f29f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fba @ 0x10f29fba (544 bytes, 177 insns) */
void f_10f29fba(void) {
  FTRACE(0x10f29fbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f29fba push ebp */
  push32((uint32_t)(EBP));
  /* 10f29fbb mov ebp, esp */
  EBP = (ESP);
  /* 10f29fbd sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f29fc0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f29fc1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f29fc4 push esi */
  push32((uint32_t)(ESI));
  /* 10f29fc5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f29fc8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 10f29fcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f29fce push edi */
  push32((uint32_t)(EDI));
  /* 10f29fcf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f29fd2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f29fd5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f29fd8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f29fdb mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 10f29fdf mov edi, ecx */
  EDI = (ECX);
  /* 10f29fe1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 10f29fe6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 10f29fe8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f29fea and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f29fec and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 10f29ff2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f29ff6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 10f29ff9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f29ffc jae 0x10f2a1ba */
  if (!C.cf) goto L_10f2a1ba;
  /* 10f2a002 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a007 jae 0x10f2a1ba */
  if (!C.cf) goto L_10f2a1ba;
  /* 10f2a00d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a012 ja 0x10f2a1ba */
  if ((!C.cf&&!C.zf)) goto L_10f2a1ba;
  /* 10f2a018 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a01d ja 0x10f2a023 */
  if ((!C.cf&&!C.zf)) goto L_10f2a023;
  /* 10f2a01f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a021 jmp 0x10f2a05d */
  goto L_10f2a05d;
L_10f2a023:;
  /* 10f2a023 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 10f2a026 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 10f2a02b jne 0x10f2a045 */
  if (!C.zf) goto L_10f2a045;
  /* 10f2a02d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 10f2a030 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 10f2a033 jne 0x10f2a045 */
  if (!C.zf) goto L_10f2a045;
  /* 10f2a035 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a037 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a03a jne 0x10f2a047 */
  if (!C.zf) goto L_10f2a047;
  /* 10f2a03c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a03e jne 0x10f2a047 */
  if (!C.zf) goto L_10f2a047;
  /* 10f2a040 jmp 0x10f2a1b4 */
  goto L_10f2a1b4;
L_10f2a045:;
  /* 10f2a045 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f2a047:;
  /* 10f2a047 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a04a jne 0x10f2a06a */
  if (!C.zf) goto L_10f2a06a;
  /* 10f2a04c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 10f2a04f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 10f2a052 jne 0x10f2a06a */
  if (!C.zf) goto L_10f2a06a;
  /* 10f2a054 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a057 jne 0x10f2a06a */
  if (!C.zf) goto L_10f2a06a;
  /* 10f2a059 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a05b jne 0x10f2a06a */
  if (!C.zf) goto L_10f2a06a;
L_10f2a05d:;
  /* 10f2a05d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10f2a060 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10f2a063 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10f2a065 jmp 0x10f2a1d5 */
  goto L_10f2a1d5;
L_10f2a06a:;
  /* 10f2a06a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f2a06d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10f2a070 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f2a073 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_10f2a07a:;
  /* 10f2a07a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f2a07d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a07f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a083 jle 0x10f2a0ce */
  if ((C.zf||C.sf!=C.of)) goto L_10f2a0ce;
  /* 10f2a085 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a087 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 10f2a08a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f2a08d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2a090 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f2a093 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10f2a096:;
  /* 10f2a096 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f2a099 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f2a09c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 10f2a09f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 10f2a0a2 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f2a0a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2a0a8 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a0ab push ecx */
  push32((uint32_t)(ECX));
  /* 10f2a0ac push eax */
  push32((uint32_t)(EAX));
  /* 10f2a0ad push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 10f2a0af call 0x10f290e5 */
  push32(0x10f2a0b4u); f_10f290e5();
  /* 10f2a0b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a0b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2a0b9 je 0x10f2a0c1 */
  if (C.zf) goto L_10f2a0c1;
  /* 10f2a0bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f2a0be inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_10f2a0c1:;
  /* 10f2a0c1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2a0c5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 10f2a0c9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 10f2a0cc jne 0x10f2a096 */
  if (!C.zf) goto L_10f2a096;
L_10f2a0ce:;
  /* 10f2a0ce add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2a0d2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 10f2a0d5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 10f2a0d8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a0dc jg 0x10f2a07a */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2a07a;
  /* 10f2a0de add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2a0e5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a0ea jle 0x10f2a111 */
  if ((C.zf||C.sf!=C.of)) goto L_10f2a111;
L_10f2a0ec:;
  /* 10f2a0ec test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 10f2a0f0 jne 0x10f2a10a */
  if (!C.zf) goto L_10f2a10a;
  /* 10f2a0f2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10f2a0f5 push eax */
  push32((uint32_t)(EAX));
  /* 10f2a0f6 call 0x10f29164 */
  push32(0x10f2a0fbu); f_10f29164();
  /* 10f2a0fb add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2a102 pop ecx */
  ECX = (pop32());
  /* 10f2a103 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a108 jg 0x10f2a0ec */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2a0ec;
L_10f2a10a:;
  /* 10f2a10a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a10f jg 0x10f2a14a */
  if ((!C.zf&&C.sf==C.of)) goto L_10f2a14a;
L_10f2a111:;
  /* 10f2a111 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2a118 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a11d jge 0x10f2a14a */
  if ((C.sf==C.of)) goto L_10f2a14a;
  /* 10f2a11f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 10f2a123 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2a125 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10f2a128 mov ebx, eax */
  EBX = (EAX);
L_10f2a12a:;
  /* 10f2a12a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 10f2a12e je 0x10f2a133 */
  if (C.zf) goto L_10f2a133;
  /* 10f2a130 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_10f2a133:;
  /* 10f2a133 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10f2a136 push eax */
  push32((uint32_t)(EAX));
  /* 10f2a137 call 0x10f29192 */
  push32(0x10f2a13cu); f_10f29192();
  /* 10f2a13c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f2a13d pop ecx */
  ECX = (pop32());
  /* 10f2a13e jne 0x10f2a12a */
  if (!C.zf) goto L_10f2a12a;
  /* 10f2a140 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a144 je 0x10f2a14a */
  if (C.zf) goto L_10f2a14a;
  /* 10f2a146 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_10f2a14a:;
  /* 10f2a14a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a150 ja 0x10f2a161 */
  if ((!C.cf&&!C.zf)) goto L_10f2a161;
  /* 10f2a152 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f2a155 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a15a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a15f jne 0x10f2a196 */
  if (!C.zf) goto L_10f2a196;
L_10f2a161:;
  /* 10f2a161 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a165 jne 0x10f2a193 */
  if (!C.zf) goto L_10f2a193;
  /* 10f2a167 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 10f2a16b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a16f jne 0x10f2a18e */
  if (!C.zf) goto L_10f2a18e;
  /* 10f2a171 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 10f2a175 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a17b jne 0x10f2a188 */
  if (!C.zf) goto L_10f2a188;
  /* 10f2a17d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 10f2a180 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 10f2a186 jmp 0x10f2a196 */
  goto L_10f2a196;
L_10f2a188:;
  /* 10f2a188 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 10f2a18c jmp 0x10f2a196 */
  goto L_10f2a196;
L_10f2a18e:;
  /* 10f2a18e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 10f2a191 jmp 0x10f2a196 */
  goto L_10f2a196;
L_10f2a193:;
  /* 10f2a193 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_10f2a196:;
  /* 10f2a196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2a199 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a19d jae 0x10f2a1ba */
  if (!C.cf) goto L_10f2a1ba;
  /* 10f2a19f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 10f2a1a3 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a1a5 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 10f2a1a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f2a1ab mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 10f2a1ae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f2a1b1 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_10f2a1b4:;
  /* 10f2a1b4 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 10f2a1b8 jmp 0x10f2a1d5 */
  goto L_10f2a1d5;
L_10f2a1ba:;
  /* 10f2a1ba neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 10f2a1bd sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2a1bf and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10f2a1c3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 10f2a1c9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a1cf and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10f2a1d2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_10f2a1d5:;
  /* 10f2a1d5 pop edi */
  EDI = (pop32());
  /* 10f2a1d6 pop esi */
  ESI = (pop32());
  /* 10f2a1d7 pop ebx */
  EBX = (pop32());
  /* 10f2a1d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2a1d9 ret  */
  ESPCHK(0x10f29fbau, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1da @ 0x10f2a1da (124 bytes, 52 insns) */
void f_10f2a1da(void) {
  FTRACE(0x10f2a1dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a1da push ebp */
  push32((uint32_t)(EBP));
  /* 10f2a1db mov ebp, esp */
  EBP = (ESP);
  /* 10f2a1dd sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2a1e0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a1e1 mov ebx, 0x10f32130 */
  EBX = (0x10f32130u);
  /* 10f2a1e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f2a1e8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f2a1eb cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a1ee je 0x10f2a253 */
  if (C.zf) goto L_10f2a253;
  /* 10f2a1f0 jge 0x10f2a202 */
  if ((C.sf==C.of)) goto L_10f2a202;
  /* 10f2a1f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2a1f5 mov ebx, 0x10f32290 */
  EBX = (0x10f32290u);
  /* 10f2a1fa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f2a1fc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f2a1ff sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_10f2a202:;
  /* 10f2a202 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a205 jne 0x10f2a20d */
  if (!C.zf) goto L_10f2a20d;
  /* 10f2a207 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f2a20a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_10f2a20d:;
  /* 10f2a20d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a210 je 0x10f2a253 */
  if (C.zf) goto L_10f2a253;
  /* 10f2a212 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a213 push edi */
  push32((uint32_t)(EDI));
L_10f2a214:;
  /* 10f2a214 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f2a217 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a21a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 10f2a21e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a221 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a223 je 0x10f2a24c */
  if (C.zf) goto L_10f2a24c;
  /* 10f2a225 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10f2a228 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10f2a22e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 10f2a231 jb 0x10f2a23f */
  if (C.cf) goto L_10f2a23f;
  /* 10f2a233 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 10f2a236 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f2a237 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f2a238 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10f2a239 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 10f2a23c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_10f2a23f:;
  /* 10f2a23f push esi */
  push32((uint32_t)(ESI));
  /* 10f2a240 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10f2a243 call 0x10f29fba */
  push32(0x10f2a248u); f_10f29fba();
  /* 10f2a248 pop ecx */
  ECX = (pop32());
  /* 10f2a249 pop ecx */
  ECX = (pop32());
  /* 10f2a24a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_10f2a24c:;
  /* 10f2a24c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a24f jne 0x10f2a214 */
  if (!C.zf) goto L_10f2a214;
  /* 10f2a251 pop edi */
  EDI = (pop32());
  /* 10f2a252 pop esi */
  ESI = (pop32());
L_10f2a253:;
  /* 10f2a253 pop ebx */
  EBX = (pop32());
  /* 10f2a254 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f2a255 ret  */
  ESPCHK(0x10f2a1dau, _esp0);
  ESP += 4; return;
}

/* FUN_1000a256 @ 0x10f2a256 (49 bytes, 20 insns) */
void f_10f2a256(void) {
  FTRACE(0x10f2a256u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a256 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a257 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2a25b push edi */
  push32((uint32_t)(EDI));
  /* 10f2a25c or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 10f2a25f test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 10f2a263 je 0x10f2a26b */
  if (C.zf) goto L_10f2a26b;
  /* 10f2a265 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10f2a269 jmp 0x10f2a282 */
  goto L_10f2a282;
L_10f2a26b:;
  /* 10f2a26b push esi */
  push32((uint32_t)(ESI));
  /* 10f2a26c call 0x10f28096 */
  push32(0x10f2a271u); f_10f28096();
  /* 10f2a271 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a272 call 0x10f2a287 */
  push32(0x10f2a277u); f_10f2a287();
  /* 10f2a277 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a278 mov edi, eax */
  EDI = (EAX);
  /* 10f2a27a call 0x10f280e8 */
  push32(0x10f2a27fu); f_10f280e8();
  /* 10f2a27f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f2a282:;
  /* 10f2a282 mov eax, edi */
  EAX = (EDI);
  /* 10f2a284 pop edi */
  EDI = (pop32());
  /* 10f2a285 pop esi */
  ESI = (pop32());
  /* 10f2a286 ret  */
  ESPCHK(0x10f2a256u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a287 @ 0x10f2a287 (76 bytes, 30 insns) */
void f_10f2a287(void) {
  FTRACE(0x10f2a287u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a287 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a288 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2a28c push edi */
  push32((uint32_t)(EDI));
  /* 10f2a28d or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 10f2a290 test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 10f2a294 je 0x10f2a2ca */
  if (C.zf) goto L_10f2a2ca;
  /* 10f2a296 push esi */
  push32((uint32_t)(ESI));
  /* 10f2a297 call 0x10f29c60 */
  push32(0x10f2a29cu); f_10f29c60();
  /* 10f2a29c push esi */
  push32((uint32_t)(ESI));
  /* 10f2a29d mov edi, eax */
  EDI = (EAX);
  /* 10f2a29f call 0x10f2a621 */
  push32(0x10f2a2a4u); f_10f2a621();
  /* 10f2a2a4 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10f2a2a7 call 0x10f2a541 */
  push32(0x10f2a2acu); f_10f2a541();
  /* 10f2a2ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f2a2af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2a2b1 jge 0x10f2a2b8 */
  if ((C.sf==C.of)) goto L_10f2a2b8;
  /* 10f2a2b3 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 10f2a2b6 jmp 0x10f2a2ca */
  goto L_10f2a2ca;
L_10f2a2b8:;
  /* 10f2a2b8 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 10f2a2bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2a2bd je 0x10f2a2ca */
  if (C.zf) goto L_10f2a2ca;
  /* 10f2a2bf push eax */
  push32((uint32_t)(EAX));
  /* 10f2a2c0 call 0x10f23e12 */
  push32(0x10f2a2c5u); f_10f23e12();
  /* 10f2a2c5 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 10f2a2c9 pop ecx */
  ECX = (pop32());
L_10f2a2ca:;
  /* 10f2a2ca and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 10f2a2ce mov eax, edi */
  EAX = (EDI);
  /* 10f2a2d0 pop edi */
  EDI = (pop32());
  /* 10f2a2d1 pop esi */
  ESI = (pop32());
  /* 10f2a2d2 ret  */
  ESPCHK(0x10f2a287u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2d3 @ 0x10f2a2d3 (147 bytes, 52 insns) */
void f_10f2a2d3(void) {
  FTRACE(0x10f2a2d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f2a2d3 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a2d4 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f2a2d8 cmp ebx, dword ptr [0x10f49100] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10f49100))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f2a2de push esi */
  push32((uint32_t)(ESI));
  /* 10f2a2df push edi */
  push32((uint32_t)(EDI));
  /* 10f2a2e0 jae 0x10f2a354 */
  if (!C.cf) goto L_10f2a354;
  /* 10f2a2e2 mov eax, ebx */
  EAX = (EBX);
  /* 10f2a2e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f2a2e7 lea edi, [eax*4 + 0x10f49000] */
  EDI = ((uint32_t)(EAX*4 + 0x10f49000));
  /* 10f2a2ee mov eax, ebx */
  EAX = (EBX);
  /* 10f2a2f0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f2a2f3 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 10f2a2f6 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f2a2f8 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 10f2a2fb test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10f2a300 je 0x10f2a354 */
  if (C.zf) goto L_10f2a354;
  /* 10f2a302 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a303 call 0x10f29b30 */
  push32(0x10f2a308u); f_10f29b30();
  /* 10f2a308 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 10f2a30a pop ecx */
  ECX = (pop32());
  /* 10f2a30b test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10f2a310 je 0x10f2a33b */
  if (C.zf) goto L_10f2a33b;
  /* 10f2a312 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a313 call 0x10f29aee */
  push32(0x10f2a318u); f_10f29aee();
  /* 10f2a318 pop ecx */
  ECX = (pop32());
  /* 10f2a319 push eax */
  push32((uint32_t)(EAX));
  /* 10f2a31a call dword ptr [0x10f2d01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d01c))), 0x10f2a320u);
  /* 10f2a320 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f2a322 jne 0x10f2a32e */
  if (!C.zf) goto L_10f2a32e;
  /* 10f2a324 call dword ptr [0x10f2d0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f2d0b0))), 0x10f2a32au);
  /* 10f2a32a mov esi, eax */
  ESI = (EAX);
  /* 10f2a32c jmp 0x10f2a330 */
  goto L_10f2a330;
L_10f2a32e:;
  /* 10f2a32e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10f2a330:;
  /* 10f2a330 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10f2a332 je 0x10f2a349 */
  if (C.zf) goto L_10f2a349;
  /* 10f2a334 call 0x10f29a66 */
  push32(0x10f2a339u); f_10f29a66();
  /* 10f2a339 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_10f2a33b:;
  /* 10f2a33b call 0x10f29a5d */
  push32(0x10f2a340u); f_10f29a5d();
  /* 10f2a340 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f2a346 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10f2a349:;
  /* 10f2a349 push ebx */
  push32((uint32_t)(EBX));
  /* 10f2a34a call 0x10f29b8f */
  push32(0x10f2a34fu); f_10f29b8f();
  /* 10f2a34f pop ecx */
  ECX = (pop32());
  /* 10f2a350 mov eax, esi */
  EAX = (ESI);
  /* 10f2a352 jmp 0x10f2a362 */
  goto L_10f2a362;
L_10f2a354:;
  /* 10f2a354 call 0x10f29a5d */
  push32(0x10f2a359u); f_10f29a5d();
  /* 10f2a359 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10f2a35f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f2a362:;
  /* 10f2a362 pop edi */
  EDI = (pop32());
  /* 10f2a363 pop esi */
  ESI = (pop32());
  /* 10f2a364 pop ebx */
  EBX = (pop32());
  /* 10f2a365 ret  */
  ESPCHK(0x10f2a2d3u, _esp0);
  ESP += 4; return;
}

