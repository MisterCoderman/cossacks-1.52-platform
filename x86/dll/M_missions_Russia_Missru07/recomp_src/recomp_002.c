#include "recomp.h"

/* FUN_10010920 @ 0x10b10920 (289 bytes, 97 insns) */
void f_10b10920(void) {
  FTRACE(0x10b10920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10920 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10921 mov ebp, esp */
  EBP = (ESP);
  /* 10b10923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10926 push esi */
  push32((uint32_t)(ESI));
  /* 10b10927 mov eax, dword ptr [0x10b2ec98] */
  EAX = (r32((uint32_t)(0x10b2ec98)));
  /* 10b1092c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b1092f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b10936 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b1093d jmp 0x10b10948 */
  goto L_10b10948;
L_10b1093f:;
  /* 10b1093f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10942 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10945 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b10948:;
  /* 10b10948 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1094c jae 0x10b10981 */
  if (!C.cf) goto L_10b10981;
  /* 10b1094e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10951 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10954 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b10957 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10958 call 0x10b06a00 */
  push32(0x10b1095du); f_10b06a00();
  /* 10b1095d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10960 mov esi, eax */
  ESI = (EAX);
  /* 10b10962 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10965 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10968 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10b1096c push ecx */
  push32((uint32_t)(ECX));
  /* 10b1096d call 0x10b06a00 */
  push32(0x10b10972u); f_10b06a00();
  /* 10b10972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10975 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10978 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b1097c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b1097f jmp 0x10b1093f */
  goto L_10b1093f;
L_10b10981:;
  /* 10b10981 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b10984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10987 push eax */
  push32((uint32_t)(EAX));
  /* 10b10988 call 0x10b03bb0 */
  push32(0x10b1098du); f_10b03bb0();
  /* 10b1098d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10990 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b10993 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10997 je 0x10b10a39 */
  if (C.zf) goto L_10b10a39;
  /* 10b1099d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b109a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b109a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b109aa jmp 0x10b109b5 */
  goto L_10b109b5;
L_10b109ac:;
  /* 10b109ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b109af add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b109b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b109b5:;
  /* 10b109b5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b109b9 jae 0x10b10a2a */
  if (!C.cf) goto L_10b10a2a;
  /* 10b109bb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b109be mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10b109c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b109c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b109c7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b109ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b109cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b109d0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b109d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b109d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b109d7 push edx */
  push32((uint32_t)(EDX));
  /* 10b109d8 call 0x10b06b80 */
  push32(0x10b109ddu); f_10b06b80();
  /* 10b109dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b109e0 push eax */
  push32((uint32_t)(EAX));
  /* 10b109e1 call 0x10b06a00 */
  push32(0x10b109e6u); f_10b06a00();
  /* 10b109e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b109e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b109ec add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b109ee mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b109f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b109f4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10b109f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b109fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b109fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b10a00 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10a03 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10a06 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10b10a0a push eax */
  push32((uint32_t)(EAX));
  /* 10b10a0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10a0e push ecx */
  push32((uint32_t)(ECX));
  /* 10b10a0f call 0x10b06b80 */
  push32(0x10b10a14u); f_10b06b80();
  /* 10b10a14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10a17 push eax */
  push32((uint32_t)(EAX));
  /* 10b10a18 call 0x10b06a00 */
  push32(0x10b10a1du); f_10b06a00();
  /* 10b10a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10a20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10a23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10a25 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b10a28 jmp 0x10b109ac */
  goto L_10b109ac;
L_10b10a2a:;
  /* 10b10a2a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10a2d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b10a30 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10a33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10a36 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10b10a39:;
  /* 10b10a39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10a3c pop esi */
  ESI = (pop32());
  /* 10b10a3d mov esp, ebp */
  ESP = (EBP);
  /* 10b10a3f pop ebp */
  EBP = (pop32());
  /* 10b10a40 ret  */
  ESPCHK(0x10b10920u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a50 @ 0x10b10a50 (291 bytes, 97 insns) */
void f_10b10a50(void) {
  FTRACE(0x10b10a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10a51 mov ebp, esp */
  EBP = (ESP);
  /* 10b10a53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10a56 push esi */
  push32((uint32_t)(ESI));
  /* 10b10a57 mov eax, dword ptr [0x10b2ec98] */
  EAX = (r32((uint32_t)(0x10b2ec98)));
  /* 10b10a5c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b10a5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b10a66 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b10a6d jmp 0x10b10a78 */
  goto L_10b10a78;
L_10b10a6f:;
  /* 10b10a6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10a72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10a75 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b10a78:;
  /* 10b10a78 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10a7c jae 0x10b10ab2 */
  if (!C.cf) goto L_10b10ab2;
  /* 10b10a7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10a81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10a84 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10b10a88 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10a89 call 0x10b06a00 */
  push32(0x10b10a8eu); f_10b06a00();
  /* 10b10a8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10a91 mov esi, eax */
  ESI = (EAX);
  /* 10b10a93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10a96 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10a99 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10b10a9d push ecx */
  push32((uint32_t)(ECX));
  /* 10b10a9e call 0x10b06a00 */
  push32(0x10b10aa3u); f_10b06a00();
  /* 10b10aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10aa6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10aa9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b10aad mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b10ab0 jmp 0x10b10a6f */
  goto L_10b10a6f;
L_10b10ab2:;
  /* 10b10ab2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b10ab5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10ab8 push eax */
  push32((uint32_t)(EAX));
  /* 10b10ab9 call 0x10b03bb0 */
  push32(0x10b10abeu); f_10b03bb0();
  /* 10b10abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10ac1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b10ac4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10ac8 je 0x10b10b6b */
  if (C.zf) goto L_10b10b6b;
  /* 10b10ace mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10ad1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b10ad4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b10adb jmp 0x10b10ae6 */
  goto L_10b10ae6;
L_10b10add:;
  /* 10b10add mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10ae0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10ae3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b10ae6:;
  /* 10b10ae6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10aea jae 0x10b10b5c */
  if (!C.cf) goto L_10b10b5c;
  /* 10b10aec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10aef mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10b10af2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10af5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10af8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b10afb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10afe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10b01 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10b10b05 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10b06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10b09 push edx */
  push32((uint32_t)(EDX));
  /* 10b10b0a call 0x10b06b80 */
  push32(0x10b10b0fu); f_10b06b80();
  /* 10b10b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10b12 push eax */
  push32((uint32_t)(EAX));
  /* 10b10b13 call 0x10b06a00 */
  push32(0x10b10b18u); f_10b06a00();
  /* 10b10b18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10b1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10b1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10b20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b10b23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10b26 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10b10b29 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10b2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10b2f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b10b32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10b35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10b38 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10b10b3c push eax */
  push32((uint32_t)(EAX));
  /* 10b10b3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10b40 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10b41 call 0x10b06b80 */
  push32(0x10b10b46u); f_10b06b80();
  /* 10b10b46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10b49 push eax */
  push32((uint32_t)(EAX));
  /* 10b10b4a call 0x10b06a00 */
  push32(0x10b10b4fu); f_10b06a00();
  /* 10b10b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10b52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10b55 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10b57 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b10b5a jmp 0x10b10add */
  goto L_10b10add;
L_10b10b5c:;
  /* 10b10b5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10b5f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b10b62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10b65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10b68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10b10b6b:;
  /* 10b10b6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10b6e pop esi */
  ESI = (pop32());
  /* 10b10b6f mov esp, ebp */
  ESP = (EBP);
  /* 10b10b71 pop ebp */
  EBP = (pop32());
  /* 10b10b72 ret  */
  ESPCHK(0x10b10a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b80 @ 0x10b10b80 (878 bytes, 273 insns) */
void f_10b10b80(void) {
  FTRACE(0x10b10b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10b81 mov ebp, esp */
  EBP = (ESP);
  /* 10b10b83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10b86 push esi */
  push32((uint32_t)(ESI));
  /* 10b10b87 mov eax, dword ptr [0x10b2ec98] */
  EAX = (r32((uint32_t)(0x10b2ec98)));
  /* 10b10b8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b10b8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b10b96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b10b9d jmp 0x10b10ba8 */
  goto L_10b10ba8;
L_10b10b9f:;
  /* 10b10b9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10ba2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10ba5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b10ba8:;
  /* 10b10ba8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10bac jae 0x10b10be1 */
  if (!C.cf) goto L_10b10be1;
  /* 10b10bae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10bb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10bb4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b10bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10bb8 call 0x10b06a00 */
  push32(0x10b10bbdu); f_10b06a00();
  /* 10b10bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10bc0 mov esi, eax */
  ESI = (EAX);
  /* 10b10bc2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10bc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10bc8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10b10bcc push ecx */
  push32((uint32_t)(ECX));
  /* 10b10bcd call 0x10b06a00 */
  push32(0x10b10bd2u); f_10b06a00();
  /* 10b10bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10bd5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10bd8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b10bdc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b10bdf jmp 0x10b10b9f */
  goto L_10b10b9f;
L_10b10be1:;
  /* 10b10be1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b10be8 jmp 0x10b10bf3 */
  goto L_10b10bf3;
L_10b10bea:;
  /* 10b10bea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10bed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10bf0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b10bf3:;
  /* 10b10bf3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10bf7 jae 0x10b10c2d */
  if (!C.cf) goto L_10b10c2d;
  /* 10b10bf9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10bfc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10bff mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10b10c03 push eax */
  push32((uint32_t)(EAX));
  /* 10b10c04 call 0x10b06a00 */
  push32(0x10b10c09u); f_10b06a00();
  /* 10b10c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10c0c mov esi, eax */
  ESI = (EAX);
  /* 10b10c0e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10c11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10c14 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10b10c18 push eax */
  push32((uint32_t)(EAX));
  /* 10b10c19 call 0x10b06a00 */
  push32(0x10b10c1eu); f_10b06a00();
  /* 10b10c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10c21 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10c24 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b10c28 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b10c2b jmp 0x10b10bea */
  goto L_10b10bea;
L_10b10c2d:;
  /* 10b10c2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10c30 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10b10c36 push eax */
  push32((uint32_t)(EAX));
  /* 10b10c37 call 0x10b06a00 */
  push32(0x10b10c3cu); f_10b06a00();
  /* 10b10c3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10c3f mov esi, eax */
  ESI = (EAX);
  /* 10b10c41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10c44 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10b10c4a push edx */
  push32((uint32_t)(EDX));
  /* 10b10c4b call 0x10b06a00 */
  push32(0x10b10c50u); f_10b06a00();
  /* 10b10c50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10c53 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10c56 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10b10c5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b10c5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10c60 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10b10c66 push edx */
  push32((uint32_t)(EDX));
  /* 10b10c67 call 0x10b06a00 */
  push32(0x10b10c6cu); f_10b06a00();
  /* 10b10c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10c6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b10c72 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b10c76 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b10c79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10c7c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10b10c82 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10c83 call 0x10b06a00 */
  push32(0x10b10c88u); f_10b06a00();
  /* 10b10c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10c8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b10c8e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b10c92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b10c95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10c98 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10b10c9e push edx */
  push32((uint32_t)(EDX));
  /* 10b10c9f call 0x10b06a00 */
  push32(0x10b10ca4u); f_10b06a00();
  /* 10b10ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10ca7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b10caa lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b10cae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b10cb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b10cb4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10cb9 push eax */
  push32((uint32_t)(EAX));
  /* 10b10cba call 0x10b03bb0 */
  push32(0x10b10cbfu); f_10b03bb0();
  /* 10b10cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10cc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b10cc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10cc9 je 0x10b10ee6 */
  if (C.zf) goto L_10b10ee6;
  /* 10b10ccf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10cd2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b10cd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10cd8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10cde mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b10ce1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10b10ce6 mov eax, dword ptr [0x10b2ec98] */
  EAX = (r32((uint32_t)(0x10b2ec98)));
  /* 10b10ceb push eax */
  push32((uint32_t)(EAX));
  /* 10b10cec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10cef push ecx */
  push32((uint32_t)(ECX));
  /* 10b10cf0 call 0x10b0a4b0 */
  push32(0x10b10cf5u); f_10b0a4b0();
  /* 10b10cf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10cf8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b10cff jmp 0x10b10d0a */
  goto L_10b10d0a;
L_10b10d01:;
  /* 10b10d01 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10d04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10d07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b10d0a:;
  /* 10b10d0a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10d0e jae 0x10b10d7e */
  if (!C.cf) goto L_10b10d7e;
  /* 10b10d10 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10d13 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b10d16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10d19 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10b10d1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10d1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10d22 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b10d25 push edx */
  push32((uint32_t)(EDX));
  /* 10b10d26 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10d29 push eax */
  push32((uint32_t)(EAX));
  /* 10b10d2a call 0x10b06b80 */
  push32(0x10b10d2fu); f_10b06b80();
  /* 10b10d2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10d32 push eax */
  push32((uint32_t)(EAX));
  /* 10b10d33 call 0x10b06a00 */
  push32(0x10b10d38u); f_10b06a00();
  /* 10b10d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10d3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10d3e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b10d42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b10d45 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10d48 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b10d4b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10d4e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10b10d52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10d55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10d58 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10b10d5c push edx */
  push32((uint32_t)(EDX));
  /* 10b10d5d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10d60 push eax */
  push32((uint32_t)(EAX));
  /* 10b10d61 call 0x10b06b80 */
  push32(0x10b10d66u); f_10b06b80();
  /* 10b10d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10d69 push eax */
  push32((uint32_t)(EAX));
  /* 10b10d6a call 0x10b06a00 */
  push32(0x10b10d6fu); f_10b06a00();
  /* 10b10d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10d72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10d75 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b10d79 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b10d7c jmp 0x10b10d01 */
  goto L_10b10d01;
L_10b10d7e:;
  /* 10b10d7e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b10d85 jmp 0x10b10d90 */
  goto L_10b10d90;
L_10b10d87:;
  /* 10b10d87 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10d8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10d8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b10d90:;
  /* 10b10d90 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10d94 jae 0x10b10e06 */
  if (!C.cf) goto L_10b10e06;
  /* 10b10d96 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10d99 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b10d9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10d9f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10b10da3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10da6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10da9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10b10dad push eax */
  push32((uint32_t)(EAX));
  /* 10b10dae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10db1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10db2 call 0x10b06b80 */
  push32(0x10b10db7u); f_10b06b80();
  /* 10b10db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10dba push eax */
  push32((uint32_t)(EAX));
  /* 10b10dbb call 0x10b06a00 */
  push32(0x10b10dc0u); f_10b06a00();
  /* 10b10dc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10dc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10dc6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b10dca mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b10dcd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10dd0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b10dd3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10dd6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10b10dda mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10ddd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10de0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10b10de4 push eax */
  push32((uint32_t)(EAX));
  /* 10b10de5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10de8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10de9 call 0x10b06b80 */
  push32(0x10b10deeu); f_10b06b80();
  /* 10b10dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10df1 push eax */
  push32((uint32_t)(EAX));
  /* 10b10df2 call 0x10b06a00 */
  push32(0x10b10df7u); f_10b06a00();
  /* 10b10df7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10dfa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10dfd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b10e01 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b10e04 jmp 0x10b10d87 */
  goto L_10b10d87;
L_10b10e06:;
  /* 10b10e06 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b10e09 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10e0c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10b10e12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10e15 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10b10e1b push ecx */
  push32((uint32_t)(ECX));
  /* 10b10e1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10e1f push edx */
  push32((uint32_t)(EDX));
  /* 10b10e20 call 0x10b06b80 */
  push32(0x10b10e25u); f_10b06b80();
  /* 10b10e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10e28 push eax */
  push32((uint32_t)(EAX));
  /* 10b10e29 call 0x10b06a00 */
  push32(0x10b10e2eu); f_10b06a00();
  /* 10b10e2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10e31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10e34 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b10e38 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b10e3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b10e3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10e41 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10b10e47 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10e4a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10b10e50 push eax */
  push32((uint32_t)(EAX));
  /* 10b10e51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10e54 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10e55 call 0x10b06b80 */
  push32(0x10b10e5au); f_10b06b80();
  /* 10b10e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10e5d push eax */
  push32((uint32_t)(EAX));
  /* 10b10e5e call 0x10b06a00 */
  push32(0x10b10e63u); f_10b06a00();
  /* 10b10e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10e66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10e69 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b10e6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b10e70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b10e73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10e76 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10b10e7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10e7f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10b10e85 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10e86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10e89 push edx */
  push32((uint32_t)(EDX));
  /* 10b10e8a call 0x10b06b80 */
  push32(0x10b10e8fu); f_10b06b80();
  /* 10b10e8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10e92 push eax */
  push32((uint32_t)(EAX));
  /* 10b10e93 call 0x10b06a00 */
  push32(0x10b10e98u); f_10b06a00();
  /* 10b10e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10e9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10e9e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10b10ea2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b10ea5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b10ea8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10eab mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10b10eb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10eb4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10b10eba push eax */
  push32((uint32_t)(EAX));
  /* 10b10ebb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10ebe push ecx */
  push32((uint32_t)(ECX));
  /* 10b10ebf call 0x10b06b80 */
  push32(0x10b10ec4u); f_10b06b80();
  /* 10b10ec4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10ec7 push eax */
  push32((uint32_t)(EAX));
  /* 10b10ec8 call 0x10b06a00 */
  push32(0x10b10ecdu); f_10b06a00();
  /* 10b10ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10ed0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10ed3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10b10ed7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b10eda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b10edd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b10ee0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10b10ee6:;
  /* 10b10ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10ee9 pop esi */
  ESI = (pop32());
  /* 10b10eea mov esp, ebp */
  ESP = (EBP);
  /* 10b10eec pop ebp */
  EBP = (pop32());
  /* 10b10eed ret  */
  ESPCHK(0x10b10b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ef0 @ 0x10b10ef0 (31 bytes, 15 insns) */
void f_10b10ef0(void) {
  FTRACE(0x10b10ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10b10ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b10ef5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b10ef8 push eax */
  push32((uint32_t)(EAX));
  /* 10b10ef9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b10efc push ecx */
  push32((uint32_t)(ECX));
  /* 10b10efd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b10f00 push edx */
  push32((uint32_t)(EDX));
  /* 10b10f01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10f04 push eax */
  push32((uint32_t)(EAX));
  /* 10b10f05 call 0x10b10f10 */
  push32(0x10b10f0au); f_10b10f10();
  /* 10b10f0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10f0d pop ebp */
  EBP = (pop32());
  /* 10b10f0e ret  */
  ESPCHK(0x10b10ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f10 @ 0x10b10f10 (393 bytes, 123 insns) */
void f_10b10f10(void) {
  FTRACE(0x10b10f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10f11 mov ebp, esp */
  EBP = (ESP);
  /* 10b10f13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10f16 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10f1a jne 0x10b10f26 */
  if (!C.zf) goto L_10b10f26;
  /* 10b10f1c mov eax, dword ptr [0x10b2ec98] */
  EAX = (r32((uint32_t)(0x10b2ec98)));
  /* 10b10f21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b10f24 jmp 0x10b10f2c */
  goto L_10b10f2c;
L_10b10f26:;
  /* 10b10f26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b10f29 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b10f2c:;
  /* 10b10f2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b10f2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b10f32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b10f35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b10f38 push 0x10b2f89c */
  push32((uint32_t)(0x10b2f89cu));
  /* 10b10f3d call dword ptr [0x10b32344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32344))), 0x10b10f43u);
  /* 10b10f43 cmp dword ptr [0x10b2f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10f4a je 0x10b10f6a */
  if (C.zf) goto L_10b10f6a;
  /* 10b10f4c push 0x10b2f89c */
  push32((uint32_t)(0x10b2f89cu));
  /* 10b10f51 call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b10f57u);
  /* 10b10f57 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b10f59 call 0x10b075d0 */
  push32(0x10b10f5eu); f_10b075d0();
  /* 10b10f5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10f61 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b10f68 jmp 0x10b10f71 */
  goto L_10b10f71;
L_10b10f6a:;
  /* 10b10f6a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b10f71:;
  /* 10b10f71 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10f75 jbe 0x10b11062 */
  if ((C.cf||C.zf)) goto L_10b11062;
  /* 10b10f7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b10f7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b10f80 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10b10f83 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b10f87 je 0x10b10f91 */
  if (C.zf) goto L_10b10f91;
  /* 10b10f89 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b10f8d je 0x10b10f96 */
  if (C.zf) goto L_10b10f96;
  /* 10b10f8f jmp 0x10b10ff0 */
  goto L_10b10ff0;
L_10b10f91:;
  /* 10b10f91 jmp 0x10b11062 */
  goto L_10b11062;
L_10b10f96:;
  /* 10b10f96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b10f99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10f9c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10b10f9f mov dword ptr [0x10b2f878], 0 */
  w32((uint32_t)(0x10b2f878), (0x0u));
  /* 10b10fa9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b10fac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b10faf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10fb2 jne 0x10b10fc7 */
  if (!C.zf) goto L_10b10fc7;
  /* 10b10fb4 mov dword ptr [0x10b2f878], 1 */
  w32((uint32_t)(0x10b2f878), (0x1u));
  /* 10b10fbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b10fc1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10fc4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10b10fc7:;
  /* 10b10fc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10fca push ecx */
  push32((uint32_t)(ECX));
  /* 10b10fcb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10b10fce push edx */
  push32((uint32_t)(EDX));
  /* 10b10fcf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10b10fd2 push eax */
  push32((uint32_t)(EAX));
  /* 10b10fd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b10fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10fd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b10fda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b10fdc push eax */
  push32((uint32_t)(EAX));
  /* 10b10fdd call 0x10b110a0 */
  push32(0x10b10fe2u); f_10b110a0();
  /* 10b10fe2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10fe5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b10fe8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10feb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b10fee jmp 0x10b1105d */
  goto L_10b1105d;
L_10b10ff0:;
  /* 10b10ff0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b10ff3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b10ff5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b10ff7 mov ecx, dword ptr [0x10b2dc98] */
  ECX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b10ffd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b10fff mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b11003 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b11009 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b1100b je 0x10b11038 */
  if (C.zf) goto L_10b11038;
  /* 10b1100d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11011 jbe 0x10b11038 */
  if ((C.cf||C.zf)) goto L_10b11038;
  /* 10b11013 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11016 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11019 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b1101b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b1101d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11020 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11023 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b11026 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11029 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1102c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b1102f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11032 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11035 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b11038:;
  /* 10b11038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1103b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1103e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b11040 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b11042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11045 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11048 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b1104b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1104e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11051 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10b11054 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11057 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b1105a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b1105d:;
  /* 10b1105d jmp 0x10b10f71 */
  goto L_10b10f71;
L_10b11062:;
  /* 10b11062 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11066 je 0x10b11074 */
  if (C.zf) goto L_10b11074;
  /* 10b11068 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b1106a call 0x10b07670 */
  push32(0x10b1106fu); f_10b07670();
  /* 10b1106f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11072 jmp 0x10b1107f */
  goto L_10b1107f;
L_10b11074:;
  /* 10b11074 push 0x10b2f89c */
  push32((uint32_t)(0x10b2f89cu));
  /* 10b11079 call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b1107fu);
L_10b1107f:;
  /* 10b1107f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11083 jbe 0x10b11093 */
  if ((C.cf||C.zf)) goto L_10b11093;
  /* 10b11085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11088 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b1108b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1108e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11091 jmp 0x10b11095 */
  goto L_10b11095;
L_10b11093:;
  /* 10b11093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b11095:;
  /* 10b11095 mov esp, ebp */
  ESP = (EBP);
  /* 10b11097 pop ebp */
  EBP = (pop32());
  /* 10b11098 ret  */
  ESPCHK(0x10b10f10u, _esp0);
  ESP += 4; return;
}

/* FUN_100110a0 @ 0x10b110a0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10b110a0(void) {
  FTRACE(0x10b110a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b110a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b110a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b110a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b110a6 push esi */
  push32((uint32_t)(ESI));
  /* 10b110a7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10b110ab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b110ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b110b1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b110b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b110b7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b110bb ja 0x10b11608 */
  if ((!C.cf&&!C.zf)) goto L_10b11608;
  /* 10b110c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b110c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b110c6 mov dl, byte ptr [eax + 0x10b11669] */
  DL = (r8((uint32_t)(EAX + 0x10b11669)));
  /* 10b110cc jmp dword ptr [edx*4 + 0x10b1160d] */
  switch (EDX) {
    case 0: goto L_10b115e6;
    case 1: goto L_10b110f5;
    case 2: goto L_10b1113b;
    case 3: goto L_10b11288;
    case 4: goto L_10b112b0;
    case 5: goto L_10b1134f;
    case 6: goto L_10b113bb;
    case 7: goto L_10b113e4;
    case 8: goto L_10b11425;
    case 9: goto L_10b11507;
    case 10: goto L_10b1156e;
    case 11: goto L_10b115bb;
    case 12: goto L_10b110d3;
    case 13: goto L_10b11118;
    case 14: goto L_10b1115e;
    case 15: goto L_10b1125e;
    case 16: goto L_10b112f5;
    case 17: goto L_10b11322;
    case 18: goto L_10b11377;
    case 19: goto L_10b113fb;
    case 20: goto L_10b114a9;
    case 21: goto L_10b11538;
    case 22: goto L_10b11608;
    default: x86_unimpl("switch@0x10b110cc out of table"); return;
  }
L_10b110d3:;
  /* 10b110d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b110d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b110d7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b110da push edx */
  push32((uint32_t)(EDX));
  /* 10b110db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b110de mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b110e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b110e4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10b110e7 push eax */
  push32((uint32_t)(EAX));
  /* 10b110e8 call 0x10b116c0 */
  push32(0x10b110edu); f_10b116c0();
  /* 10b110ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b110f0 jmp 0x10b11608 */
  goto L_10b11608;
L_10b110f5:;
  /* 10b110f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b110f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b110f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b110fc push edx */
  push32((uint32_t)(EDX));
  /* 10b110fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11100 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10b11103 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b11106 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10b1110a push eax */
  push32((uint32_t)(EAX));
  /* 10b1110b call 0x10b116c0 */
  push32(0x10b11110u); f_10b116c0();
  /* 10b11110 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11113 jmp 0x10b11608 */
  goto L_10b11608;
L_10b11118:;
  /* 10b11118 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1111b push ecx */
  push32((uint32_t)(ECX));
  /* 10b1111c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1111f push edx */
  push32((uint32_t)(EDX));
  /* 10b11120 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11123 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b11126 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b11129 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10b1112d push eax */
  push32((uint32_t)(EAX));
  /* 10b1112e call 0x10b116c0 */
  push32(0x10b11133u); f_10b116c0();
  /* 10b11133 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11136 jmp 0x10b11608 */
  goto L_10b11608;
L_10b1113b:;
  /* 10b1113b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1113e push ecx */
  push32((uint32_t)(ECX));
  /* 10b1113f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11142 push edx */
  push32((uint32_t)(EDX));
  /* 10b11143 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11146 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b11149 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b1114c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10b11150 push eax */
  push32((uint32_t)(EAX));
  /* 10b11151 call 0x10b116c0 */
  push32(0x10b11156u); f_10b116c0();
  /* 10b11156 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11159 jmp 0x10b11608 */
  goto L_10b11608;
L_10b1115e:;
  /* 10b1115e cmp dword ptr [0x10b2f878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11165 je 0x10b111e6 */
  if (C.zf) goto L_10b111e6;
  /* 10b11167 mov dword ptr [0x10b2f878], 0 */
  w32((uint32_t)(0x10b2f878), (0x0u));
  /* 10b11171 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b11174 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11175 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11178 push edx */
  push32((uint32_t)(EDX));
  /* 10b11179 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1117c push eax */
  push32((uint32_t)(EAX));
  /* 10b1117d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11180 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11181 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b11184 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10b1118a push eax */
  push32((uint32_t)(EAX));
  /* 10b1118b call 0x10b11870 */
  push32(0x10b11190u); f_10b11870();
  /* 10b11190 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11193 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11196 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11199 jne 0x10b111a0 */
  if (!C.zf) goto L_10b111a0;
  /* 10b1119b jmp 0x10b11608 */
  goto L_10b11608;
L_10b111a0:;
  /* 10b111a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b111a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b111a5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10b111a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b111ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b111ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b111b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b111b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b111b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b111b8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b111ba sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b111bd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b111c0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b111c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b111c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b111c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b111c9 push edx */
  push32((uint32_t)(EDX));
  /* 10b111ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b111cd push eax */
  push32((uint32_t)(EAX));
  /* 10b111ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b111d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b111d2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b111d5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10b111db push eax */
  push32((uint32_t)(EAX));
  /* 10b111dc call 0x10b11870 */
  push32(0x10b111e1u); f_10b11870();
  /* 10b111e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b111e4 jmp 0x10b11259 */
  goto L_10b11259;
L_10b111e6:;
  /* 10b111e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b111e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b111ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b111ed push edx */
  push32((uint32_t)(EDX));
  /* 10b111ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b111f1 push eax */
  push32((uint32_t)(EAX));
  /* 10b111f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b111f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b111f6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b111f9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10b111ff push eax */
  push32((uint32_t)(EAX));
  /* 10b11200 call 0x10b11870 */
  push32(0x10b11205u); f_10b11870();
  /* 10b11205 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11208 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1120b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1120e jne 0x10b11215 */
  if (!C.zf) goto L_10b11215;
  /* 10b11210 jmp 0x10b11608 */
  goto L_10b11608;
L_10b11215:;
  /* 10b11215 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11218 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b1121a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10b1121d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11220 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b11222 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11225 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11228 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b1122a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1122d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b1122f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11232 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11235 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b11237 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b1123a push ecx */
  push32((uint32_t)(ECX));
  /* 10b1123b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1123e push edx */
  push32((uint32_t)(EDX));
  /* 10b1123f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11242 push eax */
  push32((uint32_t)(EAX));
  /* 10b11243 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11246 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11247 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b1124a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10b11250 push eax */
  push32((uint32_t)(EAX));
  /* 10b11251 call 0x10b11870 */
  push32(0x10b11256u); f_10b11870();
  /* 10b11256 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b11259:;
  /* 10b11259 jmp 0x10b11608 */
  goto L_10b11608;
L_10b1125e:;
  /* 10b1125e mov ecx, dword ptr [0x10b2f878] */
  ECX = (r32((uint32_t)(0x10b2f878)));
  /* 10b11264 mov dword ptr [0x10b2f888], ecx */
  w32((uint32_t)(0x10b2f888), (ECX));
  /* 10b1126a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1126d push edx */
  push32((uint32_t)(EDX));
  /* 10b1126e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11271 push eax */
  push32((uint32_t)(EAX));
  /* 10b11272 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b11274 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11277 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b1127a push edx */
  push32((uint32_t)(EDX));
  /* 10b1127b call 0x10b11710 */
  push32(0x10b11280u); f_10b11710();
  /* 10b11280 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11283 jmp 0x10b11608 */
  goto L_10b11608;
L_10b11288:;
  /* 10b11288 mov eax, dword ptr [0x10b2f878] */
  EAX = (r32((uint32_t)(0x10b2f878)));
  /* 10b1128d mov dword ptr [0x10b2f888], eax */
  w32((uint32_t)(0x10b2f888), (EAX));
  /* 10b11292 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11295 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11296 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11299 push edx */
  push32((uint32_t)(EDX));
  /* 10b1129a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b1129c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1129f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b112a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b112a3 call 0x10b11710 */
  push32(0x10b112a8u); f_10b11710();
  /* 10b112a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b112ab jmp 0x10b11608 */
  goto L_10b11608;
L_10b112b0:;
  /* 10b112b0 mov edx, dword ptr [0x10b2f878] */
  EDX = (r32((uint32_t)(0x10b2f878)));
  /* 10b112b6 mov dword ptr [0x10b2f888], edx */
  w32((uint32_t)(0x10b2f888), (EDX));
  /* 10b112bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b112bf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b112c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b112c3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10b112c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b112ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b112cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b112d1 jne 0x10b112da */
  if (!C.zf) goto L_10b112da;
  /* 10b112d3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10b112da:;
  /* 10b112da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b112dd push edx */
  push32((uint32_t)(EDX));
  /* 10b112de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b112e1 push eax */
  push32((uint32_t)(EAX));
  /* 10b112e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b112e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b112e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b112e8 call 0x10b11710 */
  push32(0x10b112edu); f_10b11710();
  /* 10b112ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b112f0 jmp 0x10b11608 */
  goto L_10b11608;
L_10b112f5:;
  /* 10b112f5 mov edx, dword ptr [0x10b2f878] */
  EDX = (r32((uint32_t)(0x10b2f878)));
  /* 10b112fb mov dword ptr [0x10b2f888], edx */
  w32((uint32_t)(0x10b2f888), (EDX));
  /* 10b11301 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11304 push eax */
  push32((uint32_t)(EAX));
  /* 10b11305 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11308 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11309 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b1130b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1130e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b11311 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11314 push eax */
  push32((uint32_t)(EAX));
  /* 10b11315 call 0x10b11710 */
  push32(0x10b1131au); f_10b11710();
  /* 10b1131a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1131d jmp 0x10b11608 */
  goto L_10b11608;
L_10b11322:;
  /* 10b11322 mov ecx, dword ptr [0x10b2f878] */
  ECX = (r32((uint32_t)(0x10b2f878)));
  /* 10b11328 mov dword ptr [0x10b2f888], ecx */
  w32((uint32_t)(0x10b2f888), (ECX));
  /* 10b1132e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11331 push edx */
  push32((uint32_t)(EDX));
  /* 10b11332 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11335 push eax */
  push32((uint32_t)(EAX));
  /* 10b11336 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b11338 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1133b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b1133e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11341 push edx */
  push32((uint32_t)(EDX));
  /* 10b11342 call 0x10b11710 */
  push32(0x10b11347u); f_10b11710();
  /* 10b11347 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1134a jmp 0x10b11608 */
  goto L_10b11608;
L_10b1134f:;
  /* 10b1134f mov eax, dword ptr [0x10b2f878] */
  EAX = (r32((uint32_t)(0x10b2f878)));
  /* 10b11354 mov dword ptr [0x10b2f888], eax */
  w32((uint32_t)(0x10b2f888), (EAX));
  /* 10b11359 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1135c push ecx */
  push32((uint32_t)(ECX));
  /* 10b1135d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11360 push edx */
  push32((uint32_t)(EDX));
  /* 10b11361 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b11363 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11366 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b11369 push ecx */
  push32((uint32_t)(ECX));
  /* 10b1136a call 0x10b11710 */
  push32(0x10b1136fu); f_10b11710();
  /* 10b1136f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11372 jmp 0x10b11608 */
  goto L_10b11608;
L_10b11377:;
  /* 10b11377 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1137a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1137e jg 0x10b1139c */
  if ((!C.zf&&C.sf==C.of)) goto L_10b1139c;
  /* 10b11380 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11383 push eax */
  push32((uint32_t)(EAX));
  /* 10b11384 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11387 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11388 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b1138b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10b11391 push eax */
  push32((uint32_t)(EAX));
  /* 10b11392 call 0x10b116c0 */
  push32(0x10b11397u); f_10b116c0();
  /* 10b11397 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1139a jmp 0x10b113b6 */
  goto L_10b113b6;
L_10b1139c:;
  /* 10b1139c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1139f push ecx */
  push32((uint32_t)(ECX));
  /* 10b113a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b113a3 push edx */
  push32((uint32_t)(EDX));
  /* 10b113a4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b113a7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10b113ad push ecx */
  push32((uint32_t)(ECX));
  /* 10b113ae call 0x10b116c0 */
  push32(0x10b113b3u); f_10b116c0();
  /* 10b113b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b113b6:;
  /* 10b113b6 jmp 0x10b11608 */
  goto L_10b11608;
L_10b113bb:;
  /* 10b113bb mov edx, dword ptr [0x10b2f878] */
  EDX = (r32((uint32_t)(0x10b2f878)));
  /* 10b113c1 mov dword ptr [0x10b2f888], edx */
  w32((uint32_t)(0x10b2f888), (EDX));
  /* 10b113c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b113ca push eax */
  push32((uint32_t)(EAX));
  /* 10b113cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b113ce push ecx */
  push32((uint32_t)(ECX));
  /* 10b113cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10b113d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b113d4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b113d6 push eax */
  push32((uint32_t)(EAX));
  /* 10b113d7 call 0x10b11710 */
  push32(0x10b113dcu); f_10b11710();
  /* 10b113dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b113df jmp 0x10b11608 */
  goto L_10b11608;
L_10b113e4:;
  /* 10b113e4 mov ecx, dword ptr [0x10b2f878] */
  ECX = (r32((uint32_t)(0x10b2f878)));
  /* 10b113ea mov dword ptr [0x10b2f888], ecx */
  w32((uint32_t)(0x10b2f888), (ECX));
  /* 10b113f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b113f3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10b113f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b113f9 jmp 0x10b1144d */
  goto L_10b1144d;
L_10b113fb:;
  /* 10b113fb mov ecx, dword ptr [0x10b2f878] */
  ECX = (r32((uint32_t)(0x10b2f878)));
  /* 10b11401 mov dword ptr [0x10b2f888], ecx */
  w32((uint32_t)(0x10b2f888), (ECX));
  /* 10b11407 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1140a push edx */
  push32((uint32_t)(EDX));
  /* 10b1140b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1140e push eax */
  push32((uint32_t)(EAX));
  /* 10b1140f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b11411 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11414 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b11417 push edx */
  push32((uint32_t)(EDX));
  /* 10b11418 call 0x10b11710 */
  push32(0x10b1141du); f_10b11710();
  /* 10b1141d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11420 jmp 0x10b11608 */
  goto L_10b11608;
L_10b11425:;
  /* 10b11425 mov eax, dword ptr [0x10b2f878] */
  EAX = (r32((uint32_t)(0x10b2f878)));
  /* 10b1142a mov dword ptr [0x10b2f888], eax */
  w32((uint32_t)(0x10b2f888), (EAX));
  /* 10b1142f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11432 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11436 jne 0x10b11441 */
  if (!C.zf) goto L_10b11441;
  /* 10b11438 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10b1143f jmp 0x10b1144d */
  goto L_10b1144d;
L_10b11441:;
  /* 10b11441 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11444 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10b11447 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b1144a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b1144d:;
  /* 10b1144d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11450 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b11453 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11456 jge 0x10b11461 */
  if ((C.sf==C.of)) goto L_10b11461;
  /* 10b11458 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b1145f jmp 0x10b1148e */
  goto L_10b1148e;
L_10b11461:;
  /* 10b11461 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11464 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b11467 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b11468 mov ecx, 7 */
  ECX = (0x7u);
  /* 10b1146d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b1146f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b11472 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11475 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b11478 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b11479 mov ecx, 7 */
  ECX = (0x7u);
  /* 10b1147e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b11480 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11483 jl 0x10b1148e */
  if ((C.sf!=C.of)) goto L_10b1148e;
  /* 10b11485 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b11488 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1148b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b1148e:;
  /* 10b1148e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11491 push eax */
  push32((uint32_t)(EAX));
  /* 10b11492 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11495 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11496 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b11498 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1149b push edx */
  push32((uint32_t)(EDX));
  /* 10b1149c call 0x10b11710 */
  push32(0x10b114a1u); f_10b11710();
  /* 10b114a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b114a4 jmp 0x10b11608 */
  goto L_10b11608;
L_10b114a9:;
  /* 10b114a9 cmp dword ptr [0x10b2f878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b114b0 je 0x10b114e0 */
  if (C.zf) goto L_10b114e0;
  /* 10b114b2 mov dword ptr [0x10b2f878], 0 */
  w32((uint32_t)(0x10b2f878), (0x0u));
  /* 10b114bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b114bf push eax */
  push32((uint32_t)(EAX));
  /* 10b114c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b114c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b114c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b114c7 push edx */
  push32((uint32_t)(EDX));
  /* 10b114c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b114cb push eax */
  push32((uint32_t)(EAX));
  /* 10b114cc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b114cf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10b114d5 push edx */
  push32((uint32_t)(EDX));
  /* 10b114d6 call 0x10b11870 */
  push32(0x10b114dbu); f_10b11870();
  /* 10b114db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b114de jmp 0x10b11502 */
  goto L_10b11502;
L_10b114e0:;
  /* 10b114e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b114e3 push eax */
  push32((uint32_t)(EAX));
  /* 10b114e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b114e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b114e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b114eb push edx */
  push32((uint32_t)(EDX));
  /* 10b114ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b114ef push eax */
  push32((uint32_t)(EAX));
  /* 10b114f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b114f3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10b114f9 push edx */
  push32((uint32_t)(EDX));
  /* 10b114fa call 0x10b11870 */
  push32(0x10b114ffu); f_10b11870();
  /* 10b114ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b11502:;
  /* 10b11502 jmp 0x10b11608 */
  goto L_10b11608;
L_10b11507:;
  /* 10b11507 mov dword ptr [0x10b2f878], 0 */
  w32((uint32_t)(0x10b2f878), (0x0u));
  /* 10b11511 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b11514 push eax */
  push32((uint32_t)(EAX));
  /* 10b11515 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11518 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11519 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1151c push edx */
  push32((uint32_t)(EDX));
  /* 10b1151d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11520 push eax */
  push32((uint32_t)(EAX));
  /* 10b11521 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b11524 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10b1152a push edx */
  push32((uint32_t)(EDX));
  /* 10b1152b call 0x10b11870 */
  push32(0x10b11530u); f_10b11870();
  /* 10b11530 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11533 jmp 0x10b11608 */
  goto L_10b11608;
L_10b11538:;
  /* 10b11538 mov eax, dword ptr [0x10b2f878] */
  EAX = (r32((uint32_t)(0x10b2f878)));
  /* 10b1153d mov dword ptr [0x10b2f888], eax */
  w32((uint32_t)(0x10b2f888), (EAX));
  /* 10b11542 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11545 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b11548 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b11549 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10b1154e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b11550 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b11553 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11556 push edx */
  push32((uint32_t)(EDX));
  /* 10b11557 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1155a push eax */
  push32((uint32_t)(EAX));
  /* 10b1155b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b1155d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b11560 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11561 call 0x10b11710 */
  push32(0x10b11566u); f_10b11710();
  /* 10b11566 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11569 jmp 0x10b11608 */
  goto L_10b11608;
L_10b1156e:;
  /* 10b1156e mov edx, dword ptr [0x10b2f878] */
  EDX = (r32((uint32_t)(0x10b2f878)));
  /* 10b11574 mov dword ptr [0x10b2f888], edx */
  w32((uint32_t)(0x10b2f888), (EDX));
  /* 10b1157a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1157d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b11580 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b11581 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10b11586 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b11588 mov ecx, eax */
  ECX = (EAX);
  /* 10b1158a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1158d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b11590 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11593 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b11596 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b11597 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10b1159c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b1159e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b115a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b115a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b115a6 push eax */
  push32((uint32_t)(EAX));
  /* 10b115a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b115aa push ecx */
  push32((uint32_t)(ECX));
  /* 10b115ab push 4 */
  push32((uint32_t)(0x4u));
  /* 10b115ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b115b0 push edx */
  push32((uint32_t)(EDX));
  /* 10b115b1 call 0x10b11710 */
  push32(0x10b115b6u); f_10b11710();
  /* 10b115b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b115b9 jmp 0x10b11608 */
  goto L_10b11608;
L_10b115bb:;
  /* 10b115bb call 0x10b126d0 */
  push32(0x10b115c0u); f_10b126d0();
  /* 10b115c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b115c3 push eax */
  push32((uint32_t)(EAX));
  /* 10b115c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b115c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b115c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b115cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b115cd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b115d1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10b115d4 mov ecx, dword ptr [eax*4 + 0x10b2ee1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b2ee1c)));
  /* 10b115db push ecx */
  push32((uint32_t)(ECX));
  /* 10b115dc call 0x10b116c0 */
  push32(0x10b115e1u); f_10b116c0();
  /* 10b115e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b115e4 jmp 0x10b11608 */
  goto L_10b11608;
L_10b115e6:;
  /* 10b115e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b115e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b115eb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10b115ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b115f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b115f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b115f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b115f9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b115fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b115fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b11600 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11603 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11606 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b11608:;
  /* 10b11608 pop esi */
  ESI = (pop32());
  /* 10b11609 mov esp, ebp */
  ESP = (EBP);
  /* 10b1160b pop ebp */
  EBP = (pop32());
  /* 10b1160c ret  */
  ESPCHK(0x10b110a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10b116c0 (72 bytes, 30 insns) */
void f_10b116c0(void) {
  FTRACE(0x10b116c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b116c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b116c1 mov ebp, esp */
  EBP = (ESP);
L_10b116c3:;
  /* 10b116c3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b116c6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b116c9 je 0x10b11706 */
  if (C.zf) goto L_10b11706;
  /* 10b116cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b116ce movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b116d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b116d3 je 0x10b11706 */
  if (C.zf) goto L_10b11706;
  /* 10b116d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b116d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b116da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b116dd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b116df mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b116e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b116e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b116e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b116e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b116ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b116ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b116f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b116f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b116f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b116fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b116fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b116ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11702 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b11704 jmp 0x10b116c3 */
  goto L_10b116c3;
L_10b11706:;
  /* 10b11706 pop ebp */
  EBP = (pop32());
  /* 10b11707 ret  */
  ESPCHK(0x10b116c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011710 @ 0x10b11710 (173 bytes, 64 insns) */
void f_10b11710(void) {
  FTRACE(0x10b11710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b11710 push ebp */
  push32((uint32_t)(EBP));
  /* 10b11711 mov ebp, esp */
  EBP = (ESP);
  /* 10b11713 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11714 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b1171b cmp dword ptr [0x10b2f888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11722 je 0x10b1173a */
  if (C.zf) goto L_10b1173a;
  /* 10b11724 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11727 push eax */
  push32((uint32_t)(EAX));
  /* 10b11728 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1172b push ecx */
  push32((uint32_t)(ECX));
  /* 10b1172c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1172f push edx */
  push32((uint32_t)(EDX));
  /* 10b11730 call 0x10b117c0 */
  push32(0x10b11735u); f_10b117c0();
  /* 10b11735 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11738 jmp 0x10b117b9 */
  goto L_10b117b9;
L_10b1173a:;
  /* 10b1173a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1173d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11740 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11742 jae 0x10b117b0 */
  if (!C.cf) goto L_10b117b0;
  /* 10b11744 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11747 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b1174a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10b1174d jmp 0x10b11758 */
  goto L_10b11758;
L_10b1174f:;
  /* 10b1174f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11752 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11755 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10b11758:;
  /* 10b11758 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1175b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1175e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b11760 je 0x10b11794 */
  if (C.zf) goto L_10b11794;
  /* 10b11762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11765 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b11766 mov ecx, 0xa */
  ECX = (0xau);
  /* 10b1176b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b1176d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11770 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11773 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11775 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11778 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10b1177b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1177e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b1177f mov ecx, 0xa */
  ECX = (0xau);
  /* 10b11784 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b11786 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b11789 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1178c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1178f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b11792 jmp 0x10b1174f */
  goto L_10b1174f;
L_10b11794:;
  /* 10b11794 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11797 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11799 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1179c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1179f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b117a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b117a4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b117a6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b117a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b117ac mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b117ae jmp 0x10b117b9 */
  goto L_10b117b9;
L_10b117b0:;
  /* 10b117b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b117b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10b117b9:;
  /* 10b117b9 mov esp, ebp */
  ESP = (EBP);
  /* 10b117bb pop ebp */
  EBP = (pop32());
  /* 10b117bc ret  */
  ESPCHK(0x10b11710u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10b117c0 (172 bytes, 65 insns) */
void f_10b117c0(void) {
  FTRACE(0x10b117c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b117c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b117c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b117c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b117c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b117c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b117cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b117ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b117d1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b117d4 jbe 0x10b1181b */
  if ((C.cf||C.zf)) goto L_10b1181b;
L_10b117d6:;
  /* 10b117d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b117d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b117da mov ecx, 0xa */
  ECX = (0xau);
  /* 10b117df idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b117e1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b117e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b117e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b117e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b117ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b117ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b117f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b117f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b117f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b117fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b117fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b117ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11802 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b11803 mov ecx, 0xa */
  ECX = (0xau);
  /* 10b11808 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b1180a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b1180d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11811 jle 0x10b1181b */
  if ((C.zf||C.sf!=C.of)) goto L_10b1181b;
  /* 10b11813 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11816 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11819 ja 0x10b117d6 */
  if ((!C.cf&&!C.zf)) goto L_10b117d6;
L_10b1181b:;
  /* 10b1181b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1181e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11820 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b11823 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11826 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b11829 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b1182b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1182e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11831 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b11834:;
  /* 10b11834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b11837 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b11839 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10b1183c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1183f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b11842 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b11844 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b11846 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b11849 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b1184c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b1184f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b11852 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b11855 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10b11857 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b1185a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1185d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b11860 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b11863 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11866 jb 0x10b11834 */
  if (C.cf) goto L_10b11834;
  /* 10b11868 mov esp, ebp */
  ESP = (EBP);
  /* 10b1186a pop ebp */
  EBP = (pop32());
  /* 10b1186b ret  */
  ESPCHK(0x10b117c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011870 @ 0x10b11870 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10b11870(void) {
  FTRACE(0x10b11870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b11870 push ebp */
  push32((uint32_t)(EBP));
  /* 10b11871 mov ebp, esp */
  EBP = (ESP);
  /* 10b11873 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10b11876:;
  /* 10b11876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11879 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b1187c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b1187e je 0x10b11cec */
  if (C.zf) goto L_10b11cec;
  /* 10b11884 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11887 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1188a je 0x10b11cec */
  if (C.zf) goto L_10b11cec;
  /* 10b11890 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b11894 mov dword ptr [0x10b2f888], 0 */
  w32((uint32_t)(0x10b2f888), (0x0u));
  /* 10b1189e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b118a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b118a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b118ab jmp 0x10b118b6 */
  goto L_10b118b6;
L_10b118ad:;
  /* 10b118ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b118b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b118b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b118b6:;
  /* 10b118b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b118b9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b118bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b118bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b118c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b118c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b118c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b118cb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b118cd jne 0x10b118d1 */
  if (!C.zf) goto L_10b118d1;
  /* 10b118cf jmp 0x10b118ad */
  goto L_10b118ad;
L_10b118d1:;
  /* 10b118d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b118d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b118d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b118da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b118dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b118e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b118e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b118e6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b118e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b118ec cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b118f0 ja 0x10b11c40 */
  if ((!C.cf&&!C.zf)) goto L_10b11c40;
  /* 10b118f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b118f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b118fb mov al, byte ptr [ecx + 0x10b11d1c] */
  AL = (r8((uint32_t)(ECX + 0x10b11d1c)));
  /* 10b11901 jmp dword ptr [eax*4 + 0x10b11cf0] */
  switch (EAX) {
    case 0: goto L_10b11b5f;
    case 1: goto L_10b11a43;
    case 2: goto L_10b119ce;
    case 3: goto L_10b11908;
    case 4: goto L_10b11946;
    case 5: goto L_10b119a7;
    case 6: goto L_10b119f5;
    case 7: goto L_10b11a1c;
    case 8: goto L_10b11a8a;
    case 9: goto L_10b11984;
    case 10: goto L_10b11c40;
    default: x86_unimpl("switch@0x10b11901 out of table"); return;
  }
L_10b11908:;
  /* 10b11908 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b1190b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b1190e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b11911 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11914 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b11917 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1191b ja 0x10b11941 */
  if ((!C.cf&&!C.zf)) goto L_10b11941;
  /* 10b1191d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b11920 jmp dword ptr [ecx*4 + 0x10b11d6f] */
  switch (ECX) {
    case 0: goto L_10b11927;
    case 1: goto L_10b11931;
    case 2: goto L_10b11937;
    case 3: goto L_10b1193d;
    case 4: goto L_10b11965;
    case 5: goto L_10b1196f;
    case 6: goto L_10b11975;
    case 7: goto L_10b1197b;
    default: x86_unimpl("switch@0x10b11920 out of table"); return;
  }
L_10b11927:;
  /* 10b11927 mov dword ptr [0x10b2f888], 1 */
  w32((uint32_t)(0x10b2f888), (0x1u));
L_10b11931:;
  /* 10b11931 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10b11935 jmp 0x10b11941 */
  goto L_10b11941;
L_10b11937:;
  /* 10b11937 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10b1193b jmp 0x10b11941 */
  goto L_10b11941;
L_10b1193d:;
  /* 10b1193d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10b11941:;
  /* 10b11941 jmp 0x10b11c40 */
  goto L_10b11c40;
L_10b11946:;
  /* 10b11946 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11949 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b1194c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b1194f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11952 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b11955 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11959 ja 0x10b1197f */
  if ((!C.cf&&!C.zf)) goto L_10b1197f;
  /* 10b1195b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b1195e jmp dword ptr [ecx*4 + 0x10b11d7f] */
  switch (ECX) {
    case 0: goto L_10b11965;
    case 1: goto L_10b1196f;
    case 2: goto L_10b11975;
    case 3: goto L_10b1197b;
    default: x86_unimpl("switch@0x10b1195e out of table"); return;
  }
L_10b11965:;
  /* 10b11965 mov dword ptr [0x10b2f888], 1 */
  w32((uint32_t)(0x10b2f888), (0x1u));
L_10b1196f:;
  /* 10b1196f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10b11973 jmp 0x10b1197f */
  goto L_10b1197f;
L_10b11975:;
  /* 10b11975 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10b11979 jmp 0x10b1197f */
  goto L_10b1197f;
L_10b1197b:;
  /* 10b1197b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10b1197f:;
  /* 10b1197f jmp 0x10b11c40 */
  goto L_10b11c40;
L_10b11984:;
  /* 10b11984 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11987 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b1198a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1198e je 0x10b11998 */
  if (C.zf) goto L_10b11998;
  /* 10b11990 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11994 je 0x10b1199e */
  if (C.zf) goto L_10b1199e;
  /* 10b11996 jmp 0x10b119a2 */
  goto L_10b119a2;
L_10b11998:;
  /* 10b11998 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10b1199c jmp 0x10b119a2 */
  goto L_10b119a2;
L_10b1199e:;
  /* 10b1199e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10b119a2:;
  /* 10b119a2 jmp 0x10b11c40 */
  goto L_10b11c40;
L_10b119a7:;
  /* 10b119a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b119aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b119ad cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b119b1 je 0x10b119bb */
  if (C.zf) goto L_10b119bb;
  /* 10b119b3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b119b7 je 0x10b119c5 */
  if (C.zf) goto L_10b119c5;
  /* 10b119b9 jmp 0x10b119c9 */
  goto L_10b119c9;
L_10b119bb:;
  /* 10b119bb mov dword ptr [0x10b2f888], 1 */
  w32((uint32_t)(0x10b2f888), (0x1u));
L_10b119c5:;
  /* 10b119c5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10b119c9:;
  /* 10b119c9 jmp 0x10b11c40 */
  goto L_10b11c40;
L_10b119ce:;
  /* 10b119ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b119d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10b119d4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b119d8 je 0x10b119e2 */
  if (C.zf) goto L_10b119e2;
  /* 10b119da cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b119de je 0x10b119ec */
  if (C.zf) goto L_10b119ec;
  /* 10b119e0 jmp 0x10b119f0 */
  goto L_10b119f0;
L_10b119e2:;
  /* 10b119e2 mov dword ptr [0x10b2f888], 1 */
  w32((uint32_t)(0x10b2f888), (0x1u));
L_10b119ec:;
  /* 10b119ec mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10b119f0:;
  /* 10b119f0 jmp 0x10b11c40 */
  goto L_10b11c40;
L_10b119f5:;
  /* 10b119f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b119f8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10b119fb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b119ff je 0x10b11a09 */
  if (C.zf) goto L_10b11a09;
  /* 10b11a01 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11a05 je 0x10b11a13 */
  if (C.zf) goto L_10b11a13;
  /* 10b11a07 jmp 0x10b11a17 */
  goto L_10b11a17;
L_10b11a09:;
  /* 10b11a09 mov dword ptr [0x10b2f888], 1 */
  w32((uint32_t)(0x10b2f888), (0x1u));
L_10b11a13:;
  /* 10b11a13 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10b11a17:;
  /* 10b11a17 jmp 0x10b11c40 */
  goto L_10b11c40;
L_10b11a1c:;
  /* 10b11a1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11a1f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10b11a22 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11a26 je 0x10b11a30 */
  if (C.zf) goto L_10b11a30;
  /* 10b11a28 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11a2c je 0x10b11a3a */
  if (C.zf) goto L_10b11a3a;
  /* 10b11a2e jmp 0x10b11a3e */
  goto L_10b11a3e;
L_10b11a30:;
  /* 10b11a30 mov dword ptr [0x10b2f888], 1 */
  w32((uint32_t)(0x10b2f888), (0x1u));
L_10b11a3a:;
  /* 10b11a3a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10b11a3e:;
  /* 10b11a3e jmp 0x10b11c40 */
  goto L_10b11c40;
L_10b11a43:;
  /* 10b11a43 push 0x10b2ba2c */
  push32((uint32_t)(0x10b2ba2cu));
  /* 10b11a48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11a4b push ecx */
  push32((uint32_t)(ECX));
  /* 10b11a4c call 0x10b122a0 */
  push32(0x10b11a51u); f_10b122a0();
  /* 10b11a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b11a56 jne 0x10b11a63 */
  if (!C.zf) goto L_10b11a63;
  /* 10b11a58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11a5b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11a5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b11a61 jmp 0x10b11a81 */
  goto L_10b11a81;
L_10b11a63:;
  /* 10b11a63 push 0x10b2ba28 */
  push32((uint32_t)(0x10b2ba28u));
  /* 10b11a68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11a6b push eax */
  push32((uint32_t)(EAX));
  /* 10b11a6c call 0x10b122a0 */
  push32(0x10b11a71u); f_10b122a0();
  /* 10b11a71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b11a76 jne 0x10b11a81 */
  if (!C.zf) goto L_10b11a81;
  /* 10b11a78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11a7b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11a7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b11a81:;
  /* 10b11a81 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10b11a85 jmp 0x10b11c40 */
  goto L_10b11c40;
L_10b11a8a:;
  /* 10b11a8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11a8d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11a91 jg 0x10b11aa1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b11aa1;
  /* 10b11a93 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b11a96 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10b11a9c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b11a9f jmp 0x10b11aad */
  goto L_10b11aad;
L_10b11aa1:;
  /* 10b11aa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b11aa4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10b11aaa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b11aad:;
  /* 10b11aad cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11ab1 jle 0x10b11b54 */
  if ((C.zf||C.sf!=C.of)) goto L_10b11b54;
  /* 10b11ab7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11aba cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11abd jbe 0x10b11b54 */
  if ((C.cf||C.zf)) goto L_10b11b54;
  /* 10b11ac3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b11ac6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b11ac8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b11aca mov ecx, dword ptr [0x10b2dc98] */
  ECX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b11ad0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b11ad2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b11ad6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b11adc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b11ade je 0x10b11b17 */
  if (C.zf) goto L_10b11b17;
  /* 10b11ae0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11ae3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11ae6 jbe 0x10b11b17 */
  if ((C.cf||C.zf)) goto L_10b11b17;
  /* 10b11ae8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11aeb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b11aed mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b11af0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b11af2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b11af4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11af7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b11af9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11afc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11aff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b11b01 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b11b04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11b07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b11b0a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11b0d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11b0f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11b12 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11b15 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b11b17:;
  /* 10b11b17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11b1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11b1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b11b1f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b11b21 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b11b23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11b26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b11b28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11b2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11b2e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b11b30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b11b33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11b36 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b11b39 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11b3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b11b3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11b41 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11b44 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b11b46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11b49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11b4c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b11b4f jmp 0x10b11aad */
  goto L_10b11aad;
L_10b11b54:;
  /* 10b11b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b11b57 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b11b5a jmp 0x10b11876 */
  goto L_10b11876;
L_10b11b5f:;
  /* 10b11b5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11b62 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b11b65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b11b67 je 0x10b11c32 */
  if (C.zf) goto L_10b11c32;
  /* 10b11b6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11b70 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11b73 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10b11b76:;
  /* 10b11b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11b79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b11b7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b11b7e je 0x10b11c30 */
  if (C.zf) goto L_10b11c30;
  /* 10b11b84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11b87 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11b8a je 0x10b11c30 */
  if (C.zf) goto L_10b11c30;
  /* 10b11b90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11b93 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b11b96 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11b99 jne 0x10b11ba9 */
  if (!C.zf) goto L_10b11ba9;
  /* 10b11b9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11b9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11ba1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b11ba4 jmp 0x10b11c30 */
  goto L_10b11c30;
L_10b11ba9:;
  /* 10b11ba9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11bac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b11bae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b11bb0 mov edx, dword ptr [0x10b2dc98] */
  EDX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b11bb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b11bb8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10b11bbc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10b11bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b11bc3 je 0x10b11bfc */
  if (C.zf) goto L_10b11bfc;
  /* 10b11bc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11bc8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11bcb jbe 0x10b11bfc */
  if ((C.cf||C.zf)) goto L_10b11bfc;
  /* 10b11bcd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11bd0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b11bd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11bd5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b11bd7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b11bd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11bdc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11bde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11be1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11be4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b11be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11be9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11bec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b11bef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11bf2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b11bf4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11bf7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11bfa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b11bfc:;
  /* 10b11bfc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11bff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b11c01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11c04 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b11c06 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b11c08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11c0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b11c0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11c10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11c13 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b11c15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11c18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11c1b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b11c1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11c21 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11c23 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11c26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11c29 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b11c2b jmp 0x10b11b76 */
  goto L_10b11b76;
L_10b11c30:;
  /* 10b11c30 jmp 0x10b11c3b */
  goto L_10b11c3b;
L_10b11c32:;
  /* 10b11c32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11c35 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11c38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b11c3b:;
  /* 10b11c3b jmp 0x10b11876 */
  goto L_10b11876;
L_10b11c40:;
  /* 10b11c40 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b11c44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b11c46 je 0x10b11c6c */
  if (C.zf) goto L_10b11c6c;
  /* 10b11c48 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b11c4b push edx */
  push32((uint32_t)(EDX));
  /* 10b11c4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11c4f push eax */
  push32((uint32_t)(EAX));
  /* 10b11c50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11c53 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11c54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11c57 push edx */
  push32((uint32_t)(EDX));
  /* 10b11c58 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10b11c5b push eax */
  push32((uint32_t)(EAX));
  /* 10b11c5c call 0x10b110a0 */
  push32(0x10b11c61u); f_10b110a0();
  /* 10b11c61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11c64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b11c67 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b11c6a jmp 0x10b11ce7 */
  goto L_10b11ce7;
L_10b11c6c:;
  /* 10b11c6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11c6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b11c71 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b11c73 mov ecx, dword ptr [0x10b2dc98] */
  ECX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b11c79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b11c7b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b11c7f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b11c85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b11c87 je 0x10b11cb8 */
  if (C.zf) goto L_10b11cb8;
  /* 10b11c89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11c8c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11c91 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b11c93 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b11c95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11c98 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b11c9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11c9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11ca0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b11ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11ca5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11ca8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b11cab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11cae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b11cb0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11cb3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11cb6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10b11cb8:;
  /* 10b11cb8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11cbb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b11cbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11cc0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b11cc2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10b11cc4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11cc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11cc9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11ccc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11ccf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b11cd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b11cd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11cd7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b11cda mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11cdd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b11cdf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11ce2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11ce5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b11ce7:;
  /* 10b11ce7 jmp 0x10b11876 */
  goto L_10b11876;
L_10b11cec:;
  /* 10b11cec mov esp, ebp */
  ESP = (EBP);
  /* 10b11cee pop ebp */
  EBP = (pop32());
  /* 10b11cef ret  */
  ESPCHK(0x10b11870u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d90 @ 0x10b11d90 (650 bytes, 178 insns) */
void f_10b11d90(void) {
  FTRACE(0x10b11d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b11d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b11d91 mov ebp, esp */
  EBP = (ESP);
  /* 10b11d93 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b11d99 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11d9d jne 0x10b11ef9 */
  if (!C.zf) goto L_10b11ef9;
  /* 10b11da3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11da6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10b11dac lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10b11db2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b11db5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b11dbc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10b11dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b11dc8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10b11dce push edx */
  push32((uint32_t)(EDX));
  /* 10b11dcf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11dd2 push eax */
  push32((uint32_t)(EAX));
  /* 10b11dd3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11dd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11dd7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11dda push edx */
  push32((uint32_t)(EDX));
  /* 10b11ddb call 0x10b131b0 */
  push32(0x10b11de0u); f_10b131b0();
  /* 10b11de0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11de3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b11de6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11dea jne 0x10b11e7f */
  if (!C.zf) goto L_10b11e7f;
  /* 10b11df0 call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b11df6u);
  /* 10b11df6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11df9 je 0x10b11e00 */
  if (C.zf) goto L_10b11e00;
  /* 10b11dfb jmp 0x10b11edd */
  goto L_10b11edd;
L_10b11e00:;
  /* 10b11e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b11e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b11e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b11e06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11e09 push eax */
  push32((uint32_t)(EAX));
  /* 10b11e0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11e0d push ecx */
  push32((uint32_t)(ECX));
  /* 10b11e0e call 0x10b131b0 */
  push32(0x10b11e13u); f_10b131b0();
  /* 10b11e13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11e16 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10b11e1c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11e23 jne 0x10b11e2a */
  if (!C.zf) goto L_10b11e2a;
  /* 10b11e25 jmp 0x10b11edd */
  goto L_10b11edd;
L_10b11e2a:;
  /* 10b11e2a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10b11e2c push 0x10b2ba34 */
  push32((uint32_t)(0x10b2ba34u));
  /* 10b11e31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b11e33 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10b11e39 push edx */
  push32((uint32_t)(EDX));
  /* 10b11e3a call 0x10b03bd0 */
  push32(0x10b11e3fu); f_10b03bd0();
  /* 10b11e3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11e42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b11e45 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11e49 jne 0x10b11e50 */
  if (!C.zf) goto L_10b11e50;
  /* 10b11e4b jmp 0x10b11edd */
  goto L_10b11edd;
L_10b11e50:;
  /* 10b11e50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b11e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b11e59 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10b11e5f push eax */
  push32((uint32_t)(EAX));
  /* 10b11e60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11e64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11e67 push edx */
  push32((uint32_t)(EDX));
  /* 10b11e68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11e6b push eax */
  push32((uint32_t)(EAX));
  /* 10b11e6c call 0x10b131b0 */
  push32(0x10b11e71u); f_10b131b0();
  /* 10b11e71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11e74 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b11e77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11e7b jne 0x10b11e7f */
  if (!C.zf) goto L_10b11e7f;
  /* 10b11e7d jmp 0x10b11edd */
  goto L_10b11edd;
L_10b11e7f:;
  /* 10b11e7f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10b11e81 push 0x10b2ba34 */
  push32((uint32_t)(0x10b2ba34u));
  /* 10b11e86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b11e88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b11e8b push ecx */
  push32((uint32_t)(ECX));
  /* 10b11e8c call 0x10b03bd0 */
  push32(0x10b11e91u); f_10b03bd0();
  /* 10b11e91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11e94 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10b11e9a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b11e9c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10b11ea2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11ea5 jne 0x10b11ea9 */
  if (!C.zf) goto L_10b11ea9;
  /* 10b11ea7 jmp 0x10b11edd */
  goto L_10b11edd;
L_10b11ea9:;
  /* 10b11ea9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b11eac push ecx */
  push32((uint32_t)(ECX));
  /* 10b11ead mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11eb0 push edx */
  push32((uint32_t)(EDX));
  /* 10b11eb1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10b11eb7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b11eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b11eba call 0x10b073f0 */
  push32(0x10b11ebfu); f_10b073f0();
  /* 10b11ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11ec2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11ec6 je 0x10b11ed6 */
  if (C.zf) goto L_10b11ed6;
  /* 10b11ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b11eca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11ecd push edx */
  push32((uint32_t)(EDX));
  /* 10b11ece call 0x10b04660 */
  push32(0x10b11ed3u); f_10b04660();
  /* 10b11ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b11ed6:;
  /* 10b11ed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b11ed8 jmp 0x10b12016 */
  goto L_10b12016;
L_10b11edd:;
  /* 10b11edd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11ee1 je 0x10b11ef1 */
  if (C.zf) goto L_10b11ef1;
  /* 10b11ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b11ee5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b11ee8 push eax */
  push32((uint32_t)(EAX));
  /* 10b11ee9 call 0x10b04660 */
  push32(0x10b11eeeu); f_10b04660();
  /* 10b11eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b11ef1:;
  /* 10b11ef1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b11ef4 jmp 0x10b12016 */
  goto L_10b12016;
L_10b11ef9:;
  /* 10b11ef9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11efd jne 0x10b12013 */
  if (!C.zf) goto L_10b12013;
  /* 10b11f03 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10b11f0d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b11f10 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10b11f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b11f18 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10b11f1e push edx */
  push32((uint32_t)(EDX));
  /* 10b11f1f push 0x10b2f7a0 */
  push32((uint32_t)(0x10b2f7a0u));
  /* 10b11f24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b11f27 push eax */
  push32((uint32_t)(EAX));
  /* 10b11f28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b11f2b push ecx */
  push32((uint32_t)(ECX));
  /* 10b11f2c call 0x10b13010 */
  push32(0x10b11f31u); f_10b13010();
  /* 10b11f31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11f34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b11f36 jne 0x10b11f40 */
  if (!C.zf) goto L_10b11f40;
  /* 10b11f38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b11f3b jmp 0x10b12016 */
  goto L_10b12016;
L_10b11f40:;
  /* 10b11f40 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b11f46 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b11f49 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10b11f53 jmp 0x10b11f64 */
  goto L_10b11f64;
L_10b11f55:;
  /* 10b11f55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b11f5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11f5e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10b11f64:;
  /* 10b11f64 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11f6b jge 0x10b1200f */
  if ((C.sf==C.of)) goto L_10b1200f;
  /* 10b11f71 cmp dword ptr [0x10b2dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11f78 jle 0x10b11fab */
  if ((C.zf||C.sf!=C.of)) goto L_10b11fab;
  /* 10b11f7a push 4 */
  push32((uint32_t)(0x4u));
  /* 10b11f7c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b11f82 mov dl, byte ptr [ecx*2 + 0x10b2f7a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x10b2f7a0)));
  /* 10b11f89 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10b11f8f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10b11f95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b11f9a push eax */
  push32((uint32_t)(EAX));
  /* 10b11f9b call 0x10b09be0 */
  push32(0x10b11fa0u); f_10b09be0();
  /* 10b11fa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b11fa3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10b11fa9 jmp 0x10b11fde */
  goto L_10b11fde;
L_10b11fab:;
  /* 10b11fab mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b11fb1 mov dl, byte ptr [ecx*2 + 0x10b2f7a0] */
  DL = (r8((uint32_t)(ECX*2 + 0x10b2f7a0)));
  /* 10b11fb8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10b11fbe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10b11fc4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b11fc9 mov ecx, dword ptr [0x10b2dc98] */
  ECX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b11fcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b11fd1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b11fd5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b11fd8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10b11fde:;
  /* 10b11fde cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b11fe5 je 0x10b12008 */
  if (C.zf) goto L_10b12008;
  /* 10b11fe7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b11fed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b11ff0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b11ff3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10b11ffa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10b11ffe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b12004 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b12006 jmp 0x10b1200a */
  goto L_10b1200a;
L_10b12008:;
  /* 10b12008 jmp 0x10b1200f */
  goto L_10b1200f;
L_10b1200a:;
  /* 10b1200a jmp 0x10b11f55 */
  goto L_10b11f55;
L_10b1200f:;
  /* 10b1200f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12011 jmp 0x10b12016 */
  goto L_10b12016;
L_10b12013:;
  /* 10b12013 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b12016:;
  /* 10b12016 mov esp, ebp */
  ESP = (EBP);
  /* 10b12018 pop ebp */
  EBP = (pop32());
  /* 10b12019 ret  */
  ESPCHK(0x10b11d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012020 @ 0x10b12020 (10 bytes, 5 insns) */
void f_10b12020(void) {
  FTRACE(0x10b12020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12020 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12021 mov ebp, esp */
  EBP = (ESP);
  /* 10b12023 mov eax, dword ptr [0x10b2ed88] */
  EAX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b12028 pop ebp */
  EBP = (pop32());
  /* 10b12029 ret  */
  ESPCHK(0x10b12020u, _esp0);
  ESP += 4; return;
}

/* FUN_10012030 @ 0x10b12030 (575 bytes, 196 insns) */
void f_10b12030(void) {
  FTRACE(0x10b12030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12030 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12031 mov ebp, esp */
  EBP = (ESP);
  /* 10b12033 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b12035 push 0x10b2ba40 */
  push32((uint32_t)(0x10b2ba40u));
  /* 10b1203a push 0x10b0ccd8 */
  push32((uint32_t)(0x10b0ccd8u));
  /* 10b1203f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b12045 push eax */
  push32((uint32_t)(EAX));
  /* 10b12046 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b1204d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12050 push ebx */
  push32((uint32_t)(EBX));
  /* 10b12051 push esi */
  push32((uint32_t)(ESI));
  /* 10b12052 push edi */
  push32((uint32_t)(EDI));
  /* 10b12053 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b12056 cmp dword ptr [0x10b2f7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1205d jne 0x10b120ae */
  if (!C.zf) goto L_10b120ae;
  /* 10b1205f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10b12062 push eax */
  push32((uint32_t)(EAX));
  /* 10b12063 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12065 push 0x10b2b174 */
  push32((uint32_t)(0x10b2b174u));
  /* 10b1206a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b1206c call dword ptr [0x10b322e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e4))), 0x10b12072u);
  /* 10b12072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b12074 je 0x10b12082 */
  if (C.zf) goto L_10b12082;
  /* 10b12076 mov dword ptr [0x10b2f7ac], 1 */
  w32((uint32_t)(0x10b2f7ac), (0x1u));
  /* 10b12080 jmp 0x10b120ae */
  goto L_10b120ae;
L_10b12082:;
  /* 10b12082 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10b12085 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12086 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12088 push 0x10b2b170 */
  push32((uint32_t)(0x10b2b170u));
  /* 10b1208d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b1208f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12091 call dword ptr [0x10b322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322f4))), 0x10b12097u);
  /* 10b12097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b12099 je 0x10b120a7 */
  if (C.zf) goto L_10b120a7;
  /* 10b1209b mov dword ptr [0x10b2f7ac], 2 */
  w32((uint32_t)(0x10b2f7ac), (0x2u));
  /* 10b120a5 jmp 0x10b120ae */
  goto L_10b120ae;
L_10b120a7:;
  /* 10b120a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b120a9 jmp 0x10b12289 */
  goto L_10b12289;
L_10b120ae:;
  /* 10b120ae cmp dword ptr [0x10b2f7ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f7ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b120b5 jne 0x10b120d2 */
  if (!C.zf) goto L_10b120d2;
  /* 10b120b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b120ba push edx */
  push32((uint32_t)(EDX));
  /* 10b120bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b120be push eax */
  push32((uint32_t)(EAX));
  /* 10b120bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b120c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b120c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b120c6 push edx */
  push32((uint32_t)(EDX));
  /* 10b120c7 call dword ptr [0x10b322e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e4))), 0x10b120cdu);
  /* 10b120cd jmp 0x10b12289 */
  goto L_10b12289;
L_10b120d2:;
  /* 10b120d2 cmp dword ptr [0x10b2f7ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f7ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b120d9 jne 0x10b12287 */
  if (!C.zf) goto L_10b12287;
  /* 10b120df cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b120e3 jne 0x10b120ed */
  if (!C.zf) goto L_10b120ed;
  /* 10b120e5 mov eax, dword ptr [0x10b2f720] */
  EAX = (r32((uint32_t)(0x10b2f720)));
  /* 10b120ea mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10b120ed:;
  /* 10b120ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10b120ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10b120f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b120f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b120f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b120f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b120f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b120fc push edx */
  push32((uint32_t)(EDX));
  /* 10b120fd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b12102 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b12105 push eax */
  push32((uint32_t)(EAX));
  /* 10b12106 call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b1210cu);
  /* 10b1210c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b1210f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12113 jne 0x10b1211c */
  if (!C.zf) goto L_10b1211c;
  /* 10b12115 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12117 jmp 0x10b12289 */
  goto L_10b12289;
L_10b1211c:;
  /* 10b1211c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b12123 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b12126 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12129 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b1212b call 0x10b06d70 */
  push32(0x10b12130u); f_10b06d70();
  /* 10b12130 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10b12133 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b12136 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b12139 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b1213c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b1213f push edx */
  push32((uint32_t)(EDX));
  /* 10b12140 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12142 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b12145 push eax */
  push32((uint32_t)(EAX));
  /* 10b12146 call 0x10b07940 */
  push32(0x10b1214bu); f_10b07940();
  /* 10b1214b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1214e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b12155 jmp 0x10b1216e */
  goto L_10b1216e;
  /* 10b12157 mov eax, 1 */
  EAX = (0x1u);
  /* 10b1215c ret  */
  ESPCHK(0x10b12030u, _esp0);
  ESP += 4; return;
  /* 10b1215d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b12160 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10b12167 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b1216e:;
  /* 10b1216e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12172 jne 0x10b1217b */
  if (!C.zf) goto L_10b1217b;
  /* 10b12174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12176 jmp 0x10b12289 */
  goto L_10b12289;
L_10b1217b:;
  /* 10b1217b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b1217d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b1217f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b12182 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12183 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b12186 push edx */
  push32((uint32_t)(EDX));
  /* 10b12187 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1218a push eax */
  push32((uint32_t)(EAX));
  /* 10b1218b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1218e push ecx */
  push32((uint32_t)(ECX));
  /* 10b1218f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b12194 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b12197 push edx */
  push32((uint32_t)(EDX));
  /* 10b12198 call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b1219eu);
  /* 10b1219e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b121a0 jne 0x10b121a9 */
  if (!C.zf) goto L_10b121a9;
  /* 10b121a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b121a4 jmp 0x10b12289 */
  goto L_10b12289;
L_10b121a9:;
  /* 10b121a9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b121b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b121b3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10b121b7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b121ba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b121bc call 0x10b06d70 */
  push32(0x10b121c1u); f_10b06d70();
  /* 10b121c1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10b121c4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b121c7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b121ca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b121cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b121d4 jmp 0x10b121ed */
  goto L_10b121ed;
  /* 10b121d6 mov eax, 1 */
  EAX = (0x1u);
  /* 10b121db ret  */
  ESPCHK(0x10b12030u, _esp0);
  ESP += 4; return;
  /* 10b121dc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b121df mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b121e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b121ed:;
  /* 10b121ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b121f1 jne 0x10b121fa */
  if (!C.zf) goto L_10b121fa;
  /* 10b121f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b121f5 jmp 0x10b12289 */
  goto L_10b12289;
L_10b121fa:;
  /* 10b121fa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b121fe jne 0x10b12209 */
  if (!C.zf) goto L_10b12209;
  /* 10b12200 mov edx, dword ptr [0x10b2f710] */
  EDX = (r32((uint32_t)(0x10b2f710)));
  /* 10b12206 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10b12209:;
  /* 10b12209 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1220c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b1220f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10b12215 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12218 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b1221b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10b12222 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b12225 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12226 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b12229 push edx */
  push32((uint32_t)(EDX));
  /* 10b1222a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b1222d push eax */
  push32((uint32_t)(EAX));
  /* 10b1222e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12231 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12232 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b12235 push edx */
  push32((uint32_t)(EDX));
  /* 10b12236 call dword ptr [0x10b322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322f4))), 0x10b1223cu);
  /* 10b1223c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b1223f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12242 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b12245 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12247 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10b1224c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12252 je 0x10b12268 */
  if (C.zf) goto L_10b12268;
  /* 10b12254 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12257 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b1225a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b1225c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b12260 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12266 je 0x10b1226c */
  if (C.zf) goto L_10b1226c;
L_10b12268:;
  /* 10b12268 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1226a jmp 0x10b12289 */
  goto L_10b12289;
L_10b1226c:;
  /* 10b1226c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1226f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b12271 push eax */
  push32((uint32_t)(EAX));
  /* 10b12272 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b12275 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12276 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b12279 push edx */
  push32((uint32_t)(EDX));
  /* 10b1227a call 0x10b0bac0 */
  push32(0x10b1227fu); f_10b0bac0();
  /* 10b1227f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12282 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b12285 jmp 0x10b12289 */
  goto L_10b12289;
L_10b12287:;
  /* 10b12287 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b12289:;
  /* 10b12289 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10b1228c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b1228f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b12296 pop edi */
  EDI = (pop32());
  /* 10b12297 pop esi */
  ESI = (pop32());
  /* 10b12298 pop ebx */
  EBX = (pop32());
  /* 10b12299 mov esp, ebp */
  ESP = (EBP);
  /* 10b1229b pop ebp */
  EBP = (pop32());
  /* 10b1229c ret  */
  ESPCHK(0x10b12030u, _esp0);
  ESP += 4; return;
}

/* FUN_100122a0 @ 0x10b122a0 (208 bytes, 85 insns) */
void f_10b122a0(void) {
  FTRACE(0x10b122a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b122a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b122a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b122a3 push edi */
  push32((uint32_t)(EDI));
  /* 10b122a4 push esi */
  push32((uint32_t)(ESI));
  /* 10b122a5 push ebx */
  push32((uint32_t)(EBX));
  /* 10b122a6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b122a9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b122ac lea eax, [0x10b2f708] */
  EAX = ((uint32_t)(0x10b2f708));
  /* 10b122b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b122b6 jne 0x10b122f3 */
  if (!C.zf) goto L_10b122f3;
  /* 10b122b8 mov al, 0xff */
  AL = (0xffu);
  /* 10b122ba mov edi, edi */
  EDI = (EDI);
L_10b122bc:;
  /* 10b122bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b122be je 0x10b122ee */
  if (C.zf) goto L_10b122ee;
  /* 10b122c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b122c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b122c3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10b122c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b122c6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b122c8 je 0x10b122bc */
  if (C.zf) goto L_10b122bc;
  /* 10b122ca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b122cc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b122ce sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b122d0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10b122d3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b122d5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b122d7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10b122d9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b122db cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b122dd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b122df and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10b122e2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b122e4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b122e6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b122e8 je 0x10b122bc */
  if (C.zf) goto L_10b122bc;
  /* 10b122ea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b122ec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10b122ee:;
  /* 10b122ee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10b122f1 jmp 0x10b1236b */
  goto L_10b1236b;
L_10b122f3:;
  /* 10b122f3 lock inc dword ptr [0x10b2f89c] */
  x86_unimpl("lock inc @ 0x10b122f3");
  /* 10b122fa cmp dword ptr [0x10b2f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12301 jg 0x10b12307 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b12307;
  /* 10b12303 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12305 jmp 0x10b1231c */
  goto L_10b1231c;
L_10b12307:;
  /* 10b12307 lock dec dword ptr [0x10b2f89c] */
  x86_unimpl("lock dec @ 0x10b12307");
  /* 10b1230e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b12310 call 0x10b075d0 */
  push32(0x10b12315u); f_10b075d0();
  /* 10b12315 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10b1231c:;
  /* 10b1231c mov eax, 0xff */
  EAX = (0xffu);
  /* 10b12321 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b12323 nop  */
  /* nop */
L_10b12324:;
  /* 10b12324 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b12326 je 0x10b1234f */
  if (C.zf) goto L_10b1234f;
  /* 10b12328 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b1232a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b1232b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10b1232d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b1232e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b12330 je 0x10b12324 */
  if (C.zf) goto L_10b12324;
  /* 10b12332 push eax */
  push32((uint32_t)(EAX));
  /* 10b12333 push ebx */
  push32((uint32_t)(EBX));
  /* 10b12334 call 0x10b13410 */
  push32(0x10b12339u); f_10b13410();
  /* 10b12339 mov ebx, eax */
  EBX = (EAX);
  /* 10b1233b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1233e call 0x10b13410 */
  push32(0x10b12343u); f_10b13410();
  /* 10b12343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12346 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b12348 je 0x10b12324 */
  if (C.zf) goto L_10b12324;
  /* 10b1234a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b1234c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10b1234f:;
  /* 10b1234f mov ebx, eax */
  EBX = (EAX);
  /* 10b12351 pop eax */
  EAX = (pop32());
  /* 10b12352 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12354 jne 0x10b1235f */
  if (!C.zf) goto L_10b1235f;
  /* 10b12356 lock dec dword ptr [0x10b2f89c] */
  x86_unimpl("lock dec @ 0x10b12356");
  /* 10b1235d jmp 0x10b12369 */
  goto L_10b12369;
L_10b1235f:;
  /* 10b1235f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b12361 call 0x10b07670 */
  push32(0x10b12366u); f_10b07670();
  /* 10b12366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b12369:;
  /* 10b12369 mov eax, ebx */
  EAX = (EBX);
L_10b1236b:;
  /* 10b1236b pop ebx */
  EBX = (pop32());
  /* 10b1236c pop esi */
  ESI = (pop32());
  /* 10b1236d pop edi */
  EDI = (pop32());
  /* 10b1236e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b1236f ret  */
  ESPCHK(0x10b122a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012370 @ 0x10b12370 (257 bytes, 103 insns) */
void f_10b12370(void) {
  FTRACE(0x10b12370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12370 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12371 mov ebp, esp */
  EBP = (ESP);
  /* 10b12373 push edi */
  push32((uint32_t)(EDI));
  /* 10b12374 push esi */
  push32((uint32_t)(ESI));
  /* 10b12375 push ebx */
  push32((uint32_t)(EBX));
  /* 10b12376 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12379 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b1237b je 0x10b1246a */
  if (C.zf) goto L_10b1246a;
  /* 10b12381 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12384 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b12387 lea eax, [0x10b2f708] */
  EAX = ((uint32_t)(0x10b2f708));
  /* 10b1238d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12391 jne 0x10b123e1 */
  if (!C.zf) goto L_10b123e1;
  /* 10b12393 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10b12395 mov bl, 0x5a */
  BL = (0x5au);
  /* 10b12397 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10b12399 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b1239c:;
  /* 10b1239c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10b1239e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10b123a0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10b123a2 je 0x10b123c5 */
  if (C.zf) goto L_10b123c5;
  /* 10b123a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b123a6 je 0x10b123c5 */
  if (C.zf) goto L_10b123c5;
  /* 10b123a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b123a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b123aa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b123ac jb 0x10b123b4 */
  if (C.cf) goto L_10b123b4;
  /* 10b123ae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b123b0 ja 0x10b123b4 */
  if ((!C.cf&&!C.zf)) goto L_10b123b4;
  /* 10b123b2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10b123b4:;
  /* 10b123b4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b123b6 jb 0x10b123be */
  if (C.cf) goto L_10b123be;
  /* 10b123b8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b123ba ja 0x10b123be */
  if ((!C.cf&&!C.zf)) goto L_10b123be;
  /* 10b123bc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10b123be:;
  /* 10b123be cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b123c0 jne 0x10b123cf */
  if (!C.zf) goto L_10b123cf;
  /* 10b123c2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b123c3 jne 0x10b1239c */
  if (!C.zf) goto L_10b1239c;
L_10b123c5:;
  /* 10b123c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b123c7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b123c9 je 0x10b1246a */
  if (C.zf) goto L_10b1246a;
L_10b123cf:;
  /* 10b123cf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10b123d4 jb 0x10b1246a */
  if (C.cf) goto L_10b1246a;
  /* 10b123da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b123dc jmp 0x10b1246a */
  goto L_10b1246a;
L_10b123e1:;
  /* 10b123e1 lock inc dword ptr [0x10b2f89c] */
  x86_unimpl("lock inc @ 0x10b123e1");
  /* 10b123e8 cmp dword ptr [0x10b2f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b123ef jg 0x10b123f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b123f5;
  /* 10b123f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b123f3 jmp 0x10b1240e */
  goto L_10b1240e;
L_10b123f5:;
  /* 10b123f5 lock dec dword ptr [0x10b2f89c] */
  x86_unimpl("lock dec @ 0x10b123f5");
  /* 10b123fc mov ebx, ecx */
  EBX = (ECX);
  /* 10b123fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b12400 call 0x10b075d0 */
  push32(0x10b12405u); f_10b075d0();
  /* 10b12405 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10b1240c mov ecx, ebx */
  ECX = (EBX);
L_10b1240e:;
  /* 10b1240e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12410 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b12412 mov edi, edi */
  EDI = (EDI);
L_10b12414:;
  /* 10b12414 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b12416 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12418 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10b1241a je 0x10b1243f */
  if (C.zf) goto L_10b1243f;
  /* 10b1241c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b1241e je 0x10b1243f */
  if (C.zf) goto L_10b1243f;
  /* 10b12420 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b12421 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b12422 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12423 push eax */
  push32((uint32_t)(EAX));
  /* 10b12424 push ebx */
  push32((uint32_t)(EBX));
  /* 10b12425 call 0x10b13410 */
  push32(0x10b1242au); f_10b13410();
  /* 10b1242a mov ebx, eax */
  EBX = (EAX);
  /* 10b1242c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1242f call 0x10b13410 */
  push32(0x10b12434u); f_10b13410();
  /* 10b12434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12437 pop ecx */
  ECX = (pop32());
  /* 10b12438 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1243a jne 0x10b12445 */
  if (!C.zf) goto L_10b12445;
  /* 10b1243c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b1243d jne 0x10b12414 */
  if (!C.zf) goto L_10b12414;
L_10b1243f:;
  /* 10b1243f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12441 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12443 je 0x10b1244e */
  if (C.zf) goto L_10b1244e;
L_10b12445:;
  /* 10b12445 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10b1244a jb 0x10b1244e */
  if (C.cf) goto L_10b1244e;
  /* 10b1244c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10b1244e:;
  /* 10b1244e pop eax */
  EAX = (pop32());
  /* 10b1244f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12451 jne 0x10b1245c */
  if (!C.zf) goto L_10b1245c;
  /* 10b12453 lock dec dword ptr [0x10b2f89c] */
  x86_unimpl("lock dec @ 0x10b12453");
  /* 10b1245a jmp 0x10b1246a */
  goto L_10b1246a;
L_10b1245c:;
  /* 10b1245c mov ebx, ecx */
  EBX = (ECX);
  /* 10b1245e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b12460 call 0x10b07670 */
  push32(0x10b12465u); f_10b07670();
  /* 10b12465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12468 mov ecx, ebx */
  ECX = (EBX);
L_10b1246a:;
  /* 10b1246a mov eax, ecx */
  EAX = (ECX);
  /* 10b1246c pop ebx */
  EBX = (pop32());
  /* 10b1246d pop esi */
  ESI = (pop32());
  /* 10b1246e pop edi */
  EDI = (pop32());
  /* 10b1246f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b12470 ret  */
  ESPCHK(0x10b12370u, _esp0);
  ESP += 4; return;
}

/* FUN_10012480 @ 0x10b12480 (255 bytes, 88 insns) */
void f_10b12480(void) {
  FTRACE(0x10b12480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12480 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12481 mov ebp, esp */
  EBP = (ESP);
  /* 10b12483 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10b12486:;
  /* 10b12486 cmp dword ptr [0x10b2dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1248d jle 0x10b124a6 */
  if ((C.zf||C.sf!=C.of)) goto L_10b124a6;
  /* 10b1248f push 8 */
  push32((uint32_t)(0x8u));
  /* 10b12491 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12494 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12496 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b12498 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12499 call 0x10b09be0 */
  push32(0x10b1249eu); f_10b09be0();
  /* 10b1249e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b124a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b124a4 jmp 0x10b124bf */
  goto L_10b124bf;
L_10b124a6:;
  /* 10b124a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b124a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b124ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b124ad mov ecx, dword ptr [0x10b2dc98] */
  ECX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b124b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b124b5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b124b9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10b124bc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b124bf:;
  /* 10b124bf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b124c3 je 0x10b124d0 */
  if (C.zf) goto L_10b124d0;
  /* 10b124c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b124c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b124cb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b124ce jmp 0x10b12486 */
  goto L_10b12486;
L_10b124d0:;
  /* 10b124d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b124d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b124d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b124d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b124da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b124dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b124e0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b124e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b124e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b124e9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b124ed je 0x10b124f5 */
  if (C.zf) goto L_10b124f5;
  /* 10b124ef cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b124f3 jne 0x10b12508 */
  if (!C.zf) goto L_10b12508;
L_10b124f5:;
  /* 10b124f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b124f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b124fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b124fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b124ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12502 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12505 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10b12508:;
  /* 10b12508 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b1250f:;
  /* 10b1250f cmp dword ptr [0x10b2dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12516 jle 0x10b1252b */
  if ((C.zf||C.sf!=C.of)) goto L_10b1252b;
  /* 10b12518 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b1251a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1251d push edx */
  push32((uint32_t)(EDX));
  /* 10b1251e call 0x10b09be0 */
  push32(0x10b12523u); f_10b09be0();
  /* 10b12523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12526 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b12529 jmp 0x10b12540 */
  goto L_10b12540;
L_10b1252b:;
  /* 10b1252b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1252e mov ecx, dword ptr [0x10b2dc98] */
  ECX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b12534 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12536 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b1253a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b1253d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10b12540:;
  /* 10b12540 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12544 je 0x10b1256b */
  if (C.zf) goto L_10b1256b;
  /* 10b12546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b12549 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b1254c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1254f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10b12553 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b12556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12559 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b1255b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b1255d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b12560 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12563 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12566 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b12569 jmp 0x10b1250f */
  goto L_10b1250f;
L_10b1256b:;
  /* 10b1256b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1256f jne 0x10b12578 */
  if (!C.zf) goto L_10b12578;
  /* 10b12571 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b12574 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b12576 jmp 0x10b1257b */
  goto L_10b1257b;
L_10b12578:;
  /* 10b12578 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b1257b:;
  /* 10b1257b mov esp, ebp */
  ESP = (EBP);
  /* 10b1257d pop ebp */
  EBP = (pop32());
  /* 10b1257e ret  */
  ESPCHK(0x10b12480u, _esp0);
  ESP += 4; return;
}

/* FUN_10012580 @ 0x10b12580 (17 bytes, 8 insns) */
void f_10b12580(void) {
  FTRACE(0x10b12580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12580 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12581 mov ebp, esp */
  EBP = (ESP);
  /* 10b12583 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12586 push eax */
  push32((uint32_t)(EAX));
  /* 10b12587 call 0x10b12480 */
  push32(0x10b1258cu); f_10b12480();
  /* 10b1258c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1258f pop ebp */
  EBP = (pop32());
  /* 10b12590 ret  */
  ESPCHK(0x10b12580u, _esp0);
  ESP += 4; return;
}

/* FUN_100125a0 @ 0x10b125a0 (297 bytes, 106 insns) */
void f_10b125a0(void) {
  FTRACE(0x10b125a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b125a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b125a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b125a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b125a6 push esi */
  push32((uint32_t)(ESI));
L_10b125a7:;
  /* 10b125a7 cmp dword ptr [0x10b2dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b125ae jle 0x10b125c7 */
  if ((C.zf||C.sf!=C.of)) goto L_10b125c7;
  /* 10b125b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b125b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b125b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b125b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b125b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b125ba call 0x10b09be0 */
  push32(0x10b125bfu); f_10b09be0();
  /* 10b125bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b125c2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b125c5 jmp 0x10b125e0 */
  goto L_10b125e0;
L_10b125c7:;
  /* 10b125c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b125ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b125cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b125ce mov ecx, dword ptr [0x10b2dc98] */
  ECX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b125d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b125d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b125da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10b125dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10b125e0:;
  /* 10b125e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b125e4 je 0x10b125f1 */
  if (C.zf) goto L_10b125f1;
  /* 10b125e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b125e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b125ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b125ef jmp 0x10b125a7 */
  goto L_10b125a7;
L_10b125f1:;
  /* 10b125f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b125f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b125f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b125f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b125fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b125fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12601 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b12604 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b12607 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b1260a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1260e je 0x10b12616 */
  if (C.zf) goto L_10b12616;
  /* 10b12610 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12614 jne 0x10b12629 */
  if (!C.zf) goto L_10b12629;
L_10b12616:;
  /* 10b12616 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1261b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b1261d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b12620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12623 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12626 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10b12629:;
  /* 10b12629 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b12630 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b12637:;
  /* 10b12637 cmp dword ptr [0x10b2dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1263e jle 0x10b12653 */
  if ((C.zf||C.sf!=C.of)) goto L_10b12653;
  /* 10b12640 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b12642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b12645 push edx */
  push32((uint32_t)(EDX));
  /* 10b12646 call 0x10b09be0 */
  push32(0x10b1264bu); f_10b09be0();
  /* 10b1264b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1264e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b12651 jmp 0x10b12668 */
  goto L_10b12668;
L_10b12653:;
  /* 10b12653 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b12656 mov ecx, dword ptr [0x10b2dc98] */
  ECX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b1265c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b1265e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10b12662 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b12665 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10b12668:;
  /* 10b12668 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1266c je 0x10b126a9 */
  if (C.zf) goto L_10b126a9;
  /* 10b1266e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12670 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b12672 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b12675 push eax */
  push32((uint32_t)(EAX));
  /* 10b12676 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12679 push ecx */
  push32((uint32_t)(ECX));
  /* 10b1267a call 0x10b13540 */
  push32(0x10b1267fu); f_10b13540();
  /* 10b1267f mov ecx, eax */
  ECX = (EAX);
  /* 10b12681 mov esi, edx */
  ESI = (EDX);
  /* 10b12683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b12686 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12689 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b1268a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1268c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1268e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b12691 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10b12694 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12697 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12699 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b1269b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b1269e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b126a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b126a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b126a7 jmp 0x10b12637 */
  goto L_10b12637;
L_10b126a9:;
  /* 10b126a9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b126ad jne 0x10b126be */
  if (!C.zf) goto L_10b126be;
  /* 10b126af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b126b2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b126b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b126b7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b126ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b126bc jmp 0x10b126c4 */
  goto L_10b126c4;
L_10b126be:;
  /* 10b126be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b126c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10b126c4:;
  /* 10b126c4 pop esi */
  ESI = (pop32());
  /* 10b126c5 mov esp, ebp */
  ESP = (EBP);
  /* 10b126c7 pop ebp */
  EBP = (pop32());
  /* 10b126c8 ret  */
  ESPCHK(0x10b125a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126d0 @ 0x10b126d0 (61 bytes, 18 insns) */
void f_10b126d0(void) {
  FTRACE(0x10b126d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b126d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b126d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b126d3 cmp dword ptr [0x10b2f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b126da jne 0x10b1270b */
  if (!C.zf) goto L_10b1270b;
  /* 10b126dc push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b126de call 0x10b075d0 */
  push32(0x10b126e3u); f_10b075d0();
  /* 10b126e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b126e6 cmp dword ptr [0x10b2f868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b126ed jne 0x10b12701 */
  if (!C.zf) goto L_10b12701;
  /* 10b126ef call 0x10b12730 */
  push32(0x10b126f4u); f_10b12730();
  /* 10b126f4 mov eax, dword ptr [0x10b2f868] */
  EAX = (r32((uint32_t)(0x10b2f868)));
  /* 10b126f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b126fc mov dword ptr [0x10b2f868], eax */
  w32((uint32_t)(0x10b2f868), (EAX));
L_10b12701:;
  /* 10b12701 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b12703 call 0x10b07670 */
  push32(0x10b12708u); f_10b07670();
  /* 10b12708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b1270b:;
  /* 10b1270b pop ebp */
  EBP = (pop32());
  /* 10b1270c ret  */
  ESPCHK(0x10b126d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012710 @ 0x10b12710 (30 bytes, 11 insns) */
void f_10b12710(void) {
  FTRACE(0x10b12710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12710 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12711 mov ebp, esp */
  EBP = (ESP);
  /* 10b12713 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b12715 call 0x10b075d0 */
  push32(0x10b1271au); f_10b075d0();
  /* 10b1271a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1271d call 0x10b12730 */
  push32(0x10b12722u); f_10b12730();
  /* 10b12722 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b12724 call 0x10b07670 */
  push32(0x10b12729u); f_10b07670();
  /* 10b12729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1272c pop ebp */
  EBP = (pop32());
  /* 10b1272d ret  */
  ESPCHK(0x10b12710u, _esp0);
  ESP += 4; return;
}

/* FUN_10012730 @ 0x10b12730 (939 bytes, 266 insns) */
void f_10b12730(void) {
  FTRACE(0x10b12730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12730 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12731 mov ebp, esp */
  EBP = (ESP);
  /* 10b12733 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12736 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b1273d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b1273f call 0x10b075d0 */
  push32(0x10b12744u); f_10b075d0();
  /* 10b12744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12747 mov dword ptr [0x10b2f7b0], 0 */
  w32((uint32_t)(0x10b2f7b0), (0x0u));
  /* 10b12751 mov dword ptr [0x10b2ee38], 0xffffffff */
  w32((uint32_t)(0x10b2ee38), (0xffffffffu));
  /* 10b1275b mov eax, dword ptr [0x10b2ee38] */
  EAX = (r32((uint32_t)(0x10b2ee38)));
  /* 10b12760 mov dword ptr [0x10b2ee28], eax */
  w32((uint32_t)(0x10b2ee28), (EAX));
  /* 10b12765 push 0x10b2baa0 */
  push32((uint32_t)(0x10b2baa0u));
  /* 10b1276a call 0x10b135b0 */
  push32(0x10b1276fu); f_10b135b0();
  /* 10b1276f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12772 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b12775 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12779 jne 0x10b128b3 */
  if (!C.zf) goto L_10b128b3;
  /* 10b1277f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b12781 call 0x10b07670 */
  push32(0x10b12786u); f_10b07670();
  /* 10b12786 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12789 push 0x10b2f7b8 */
  push32((uint32_t)(0x10b2f7b8u));
  /* 10b1278e call dword ptr [0x10b322a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322a8))), 0x10b12794u);
  /* 10b12794 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12797 je 0x10b128ae */
  if (C.zf) goto L_10b128ae;
  /* 10b1279d mov dword ptr [0x10b2f7b0], 1 */
  w32((uint32_t)(0x10b2f7b0), (0x1u));
  /* 10b127a7 mov ecx, dword ptr [0x10b2f7b8] */
  ECX = (r32((uint32_t)(0x10b2f7b8)));
  /* 10b127ad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b127b0 mov dword ptr [0x10b2ed90], ecx */
  w32((uint32_t)(0x10b2ed90), (ECX));
  /* 10b127b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b127b8 mov dx, word ptr [0x10b2f7fe] */
  DX = (r16((uint32_t)(0x10b2f7fe)));
  /* 10b127bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b127c1 je 0x10b127d9 */
  if (C.zf) goto L_10b127d9;
  /* 10b127c3 mov eax, dword ptr [0x10b2f80c] */
  EAX = (r32((uint32_t)(0x10b2f80c)));
  /* 10b127c8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b127cb mov ecx, dword ptr [0x10b2ed90] */
  ECX = (r32((uint32_t)(0x10b2ed90)));
  /* 10b127d1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b127d3 mov dword ptr [0x10b2ed90], ecx */
  w32((uint32_t)(0x10b2ed90), (ECX));
L_10b127d9:;
  /* 10b127d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b127db mov dx, word ptr [0x10b2f852] */
  DX = (r16((uint32_t)(0x10b2f852)));
  /* 10b127e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b127e4 je 0x10b1280e */
  if (C.zf) goto L_10b1280e;
  /* 10b127e6 cmp dword ptr [0x10b2f860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b127ed je 0x10b1280e */
  if (C.zf) goto L_10b1280e;
  /* 10b127ef mov dword ptr [0x10b2ed94], 1 */
  w32((uint32_t)(0x10b2ed94), (0x1u));
  /* 10b127f9 mov eax, dword ptr [0x10b2f860] */
  EAX = (r32((uint32_t)(0x10b2f860)));
  /* 10b127fe sub eax, dword ptr [0x10b2f80c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2f80c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12804 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12807 mov dword ptr [0x10b2ed98], eax */
  w32((uint32_t)(0x10b2ed98), (EAX));
  /* 10b1280c jmp 0x10b12822 */
  goto L_10b12822;
L_10b1280e:;
  /* 10b1280e mov dword ptr [0x10b2ed94], 0 */
  w32((uint32_t)(0x10b2ed94), (0x0u));
  /* 10b12818 mov dword ptr [0x10b2ed98], 0 */
  w32((uint32_t)(0x10b2ed98), (0x0u));
L_10b12822:;
  /* 10b12822 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10b12825 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12826 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12828 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b1282a mov edx, dword ptr [0x10b2ee1c] */
  EDX = (r32((uint32_t)(0x10b2ee1c)));
  /* 10b12830 push edx */
  push32((uint32_t)(EDX));
  /* 10b12831 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b12833 push 0x10b2f7bc */
  push32((uint32_t)(0x10b2f7bcu));
  /* 10b12838 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b1283d mov eax, dword ptr [0x10b2f720] */
  EAX = (r32((uint32_t)(0x10b2f720)));
  /* 10b12842 push eax */
  push32((uint32_t)(EAX));
  /* 10b12843 call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b12849u);
  /* 10b12849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b1284b je 0x10b1285f */
  if (C.zf) goto L_10b1285f;
  /* 10b1284d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12851 jne 0x10b1285f */
  if (!C.zf) goto L_10b1285f;
  /* 10b12853 mov ecx, dword ptr [0x10b2ee1c] */
  ECX = (r32((uint32_t)(0x10b2ee1c)));
  /* 10b12859 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10b1285d jmp 0x10b12868 */
  goto L_10b12868;
L_10b1285f:;
  /* 10b1285f mov edx, dword ptr [0x10b2ee1c] */
  EDX = (r32((uint32_t)(0x10b2ee1c)));
  /* 10b12865 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10b12868:;
  /* 10b12868 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b1286b push eax */
  push32((uint32_t)(EAX));
  /* 10b1286c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b1286e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b12870 mov ecx, dword ptr [0x10b2ee20] */
  ECX = (r32((uint32_t)(0x10b2ee20)));
  /* 10b12876 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12877 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b12879 push 0x10b2f810 */
  push32((uint32_t)(0x10b2f810u));
  /* 10b1287e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b12883 mov edx, dword ptr [0x10b2f720] */
  EDX = (r32((uint32_t)(0x10b2f720)));
  /* 10b12889 push edx */
  push32((uint32_t)(EDX));
  /* 10b1288a call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b12890u);
  /* 10b12890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b12892 je 0x10b128a5 */
  if (C.zf) goto L_10b128a5;
  /* 10b12894 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12898 jne 0x10b128a5 */
  if (!C.zf) goto L_10b128a5;
  /* 10b1289a mov eax, dword ptr [0x10b2ee20] */
  EAX = (r32((uint32_t)(0x10b2ee20)));
  /* 10b1289f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10b128a3 jmp 0x10b128ae */
  goto L_10b128ae;
L_10b128a5:;
  /* 10b128a5 mov ecx, dword ptr [0x10b2ee20] */
  ECX = (r32((uint32_t)(0x10b2ee20)));
  /* 10b128ab mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10b128ae:;
  /* 10b128ae jmp 0x10b12ad7 */
  goto L_10b12ad7;
L_10b128b3:;
  /* 10b128b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b128b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b128b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b128bb je 0x10b128dd */
  if (C.zf) goto L_10b128dd;
  /* 10b128bd cmp dword ptr [0x10b2f864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b128c4 je 0x10b128ec */
  if (C.zf) goto L_10b128ec;
  /* 10b128c6 mov ecx, dword ptr [0x10b2f864] */
  ECX = (r32((uint32_t)(0x10b2f864)));
  /* 10b128cc push ecx */
  push32((uint32_t)(ECX));
  /* 10b128cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b128d0 push edx */
  push32((uint32_t)(EDX));
  /* 10b128d1 call 0x10b0f860 */
  push32(0x10b128d6u); f_10b0f860();
  /* 10b128d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b128d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b128db jne 0x10b128ec */
  if (!C.zf) goto L_10b128ec;
L_10b128dd:;
  /* 10b128dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b128df call 0x10b07670 */
  push32(0x10b128e4u); f_10b07670();
  /* 10b128e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b128e7 jmp 0x10b12ad7 */
  goto L_10b12ad7;
L_10b128ec:;
  /* 10b128ec push 2 */
  push32((uint32_t)(0x2u));
  /* 10b128ee mov eax, dword ptr [0x10b2f864] */
  EAX = (r32((uint32_t)(0x10b2f864)));
  /* 10b128f3 push eax */
  push32((uint32_t)(EAX));
  /* 10b128f4 call 0x10b04660 */
  push32(0x10b128f9u); f_10b04660();
  /* 10b128f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b128fc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10b12901 push 0x10b2ba98 */
  push32((uint32_t)(0x10b2ba98u));
  /* 10b12906 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b12908 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b1290b push ecx */
  push32((uint32_t)(ECX));
  /* 10b1290c call 0x10b06a00 */
  push32(0x10b12911u); f_10b06a00();
  /* 10b12911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12914 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12917 push eax */
  push32((uint32_t)(EAX));
  /* 10b12918 call 0x10b03bd0 */
  push32(0x10b1291du); f_10b03bd0();
  /* 10b1291d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12920 mov dword ptr [0x10b2f864], eax */
  w32((uint32_t)(0x10b2f864), (EAX));
  /* 10b12925 cmp dword ptr [0x10b2f864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1292c jne 0x10b1293d */
  if (!C.zf) goto L_10b1293d;
  /* 10b1292e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b12930 call 0x10b07670 */
  push32(0x10b12935u); f_10b07670();
  /* 10b12935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12938 jmp 0x10b12ad7 */
  goto L_10b12ad7;
L_10b1293d:;
  /* 10b1293d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12940 push edx */
  push32((uint32_t)(EDX));
  /* 10b12941 mov eax, dword ptr [0x10b2f864] */
  EAX = (r32((uint32_t)(0x10b2f864)));
  /* 10b12946 push eax */
  push32((uint32_t)(EAX));
  /* 10b12947 call 0x10b06b80 */
  push32(0x10b1294cu); f_10b06b80();
  /* 10b1294c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1294f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b12951 call 0x10b07670 */
  push32(0x10b12956u); f_10b07670();
  /* 10b12956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12959 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b1295b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b1295e push ecx */
  push32((uint32_t)(ECX));
  /* 10b1295f mov edx, dword ptr [0x10b2ee1c] */
  EDX = (r32((uint32_t)(0x10b2ee1c)));
  /* 10b12965 push edx */
  push32((uint32_t)(EDX));
  /* 10b12966 call 0x10b073f0 */
  push32(0x10b1296bu); f_10b073f0();
  /* 10b1296b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1296e mov eax, dword ptr [0x10b2ee1c] */
  EAX = (r32((uint32_t)(0x10b2ee1c)));
  /* 10b12973 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10b12977 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b1297a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1297d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b12980 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12983 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b12986 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12989 jne 0x10b1299d */
  if (!C.zf) goto L_10b1299d;
  /* 10b1298b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1298e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12991 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b12994 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12997 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1299a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b1299d:;
  /* 10b1299d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b129a0 push eax */
  push32((uint32_t)(EAX));
  /* 10b129a1 call 0x10b12480 */
  push32(0x10b129a6u); f_10b12480();
  /* 10b129a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b129a9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b129af mov dword ptr [0x10b2ed90], eax */
  w32((uint32_t)(0x10b2ed90), (EAX));
L_10b129b4:;
  /* 10b129b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b129b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b129ba cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b129bd je 0x10b129d5 */
  if (C.zf) goto L_10b129d5;
  /* 10b129bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b129c2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b129c5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b129c8 jl 0x10b129e0 */
  if ((C.sf!=C.of)) goto L_10b129e0;
  /* 10b129ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b129cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b129d0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b129d3 jg 0x10b129e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b129e0;
L_10b129d5:;
  /* 10b129d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b129d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b129db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b129de jmp 0x10b129b4 */
  goto L_10b129b4;
L_10b129e0:;
  /* 10b129e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b129e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b129e6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b129e9 jne 0x10b12a85 */
  if (!C.zf) goto L_10b12a85;
  /* 10b129ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b129f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b129f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b129f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b129fb push edx */
  push32((uint32_t)(EDX));
  /* 10b129fc call 0x10b12480 */
  push32(0x10b12a01u); f_10b12480();
  /* 10b12a01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12a04 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12a07 mov ecx, dword ptr [0x10b2ed90] */
  ECX = (r32((uint32_t)(0x10b2ed90)));
  /* 10b12a0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12a0f mov dword ptr [0x10b2ed90], ecx */
  w32((uint32_t)(0x10b2ed90), (ECX));
L_10b12a15:;
  /* 10b12a15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a18 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b12a1b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12a1e jl 0x10b12a36 */
  if ((C.sf!=C.of)) goto L_10b12a36;
  /* 10b12a20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a23 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b12a26 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12a29 jg 0x10b12a36 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b12a36;
  /* 10b12a2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12a31 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b12a34 jmp 0x10b12a15 */
  goto L_10b12a15;
L_10b12a36:;
  /* 10b12a36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a39 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b12a3c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12a3f jne 0x10b12a85 */
  if (!C.zf) goto L_10b12a85;
  /* 10b12a41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12a47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b12a4a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a4d push ecx */
  push32((uint32_t)(ECX));
  /* 10b12a4e call 0x10b12480 */
  push32(0x10b12a53u); f_10b12480();
  /* 10b12a53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12a56 mov edx, dword ptr [0x10b2ed90] */
  EDX = (r32((uint32_t)(0x10b2ed90)));
  /* 10b12a5c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12a5e mov dword ptr [0x10b2ed90], edx */
  w32((uint32_t)(0x10b2ed90), (EDX));
L_10b12a64:;
  /* 10b12a64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b12a6a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12a6d jl 0x10b12a85 */
  if ((C.sf!=C.of)) goto L_10b12a85;
  /* 10b12a6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b12a75 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12a78 jg 0x10b12a85 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b12a85;
  /* 10b12a7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12a80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b12a83 jmp 0x10b12a64 */
  goto L_10b12a64;
L_10b12a85:;
  /* 10b12a85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12a89 je 0x10b12a99 */
  if (C.zf) goto L_10b12a99;
  /* 10b12a8b mov edx, dword ptr [0x10b2ed90] */
  EDX = (r32((uint32_t)(0x10b2ed90)));
  /* 10b12a91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b12a93 mov dword ptr [0x10b2ed90], edx */
  w32((uint32_t)(0x10b2ed90), (EDX));
L_10b12a99:;
  /* 10b12a99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12a9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b12a9f mov dword ptr [0x10b2ed94], ecx */
  w32((uint32_t)(0x10b2ed94), (ECX));
  /* 10b12aa5 cmp dword ptr [0x10b2ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12aac je 0x10b12ace */
  if (C.zf) goto L_10b12ace;
  /* 10b12aae push 3 */
  push32((uint32_t)(0x3u));
  /* 10b12ab0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12ab3 push edx */
  push32((uint32_t)(EDX));
  /* 10b12ab4 mov eax, dword ptr [0x10b2ee20] */
  EAX = (r32((uint32_t)(0x10b2ee20)));
  /* 10b12ab9 push eax */
  push32((uint32_t)(EAX));
  /* 10b12aba call 0x10b073f0 */
  push32(0x10b12abfu); f_10b073f0();
  /* 10b12abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12ac2 mov ecx, dword ptr [0x10b2ee20] */
  ECX = (r32((uint32_t)(0x10b2ee20)));
  /* 10b12ac8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10b12acc jmp 0x10b12ad7 */
  goto L_10b12ad7;
L_10b12ace:;
  /* 10b12ace mov edx, dword ptr [0x10b2ee20] */
  EDX = (r32((uint32_t)(0x10b2ee20)));
  /* 10b12ad4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10b12ad7:;
  /* 10b12ad7 mov esp, ebp */
  ESP = (EBP);
  /* 10b12ad9 pop ebp */
  EBP = (pop32());
  /* 10b12ada ret  */
  ESPCHK(0x10b12730u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ae0 @ 0x10b12ae0 (46 bytes, 18 insns) */
void f_10b12ae0(void) {
  FTRACE(0x10b12ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10b12ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12ae4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b12ae6 call 0x10b075d0 */
  push32(0x10b12aebu); f_10b075d0();
  /* 10b12aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12aee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12af1 push eax */
  push32((uint32_t)(EAX));
  /* 10b12af2 call 0x10b12b10 */
  push32(0x10b12af7u); f_10b12b10();
  /* 10b12af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12afa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b12afd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b12aff call 0x10b07670 */
  push32(0x10b12b04u); f_10b07670();
  /* 10b12b04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b12b0a mov esp, ebp */
  ESP = (EBP);
  /* 10b12b0c pop ebp */
  EBP = (pop32());
  /* 10b12b0d ret  */
  ESPCHK(0x10b12ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b10 @ 0x10b12b10 (762 bytes, 246 insns) */
void f_10b12b10(void) {
  FTRACE(0x10b12b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12b11 mov ebp, esp */
  EBP = (ESP);
  /* 10b12b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12b14 cmp dword ptr [0x10b2ed94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2ed94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12b1b jne 0x10b12b24 */
  if (!C.zf) goto L_10b12b24;
  /* 10b12b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12b1f jmp 0x10b12e06 */
  goto L_10b12e06;
L_10b12b24:;
  /* 10b12b24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12b27 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b12b2a cmp ecx, dword ptr [0x10b2ee28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b2ee28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12b30 jne 0x10b12b44 */
  if (!C.zf) goto L_10b12b44;
  /* 10b12b32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12b35 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b12b38 cmp eax, dword ptr [0x10b2ee38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2ee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12b3e je 0x10b12d0b */
  if (C.zf) goto L_10b12d0b;
L_10b12b44:;
  /* 10b12b44 cmp dword ptr [0x10b2f7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12b4b je 0x10b12cc5 */
  if (C.zf) goto L_10b12cc5;
  /* 10b12b51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12b53 mov cx, word ptr [0x10b2f850] */
  CX = (r16((uint32_t)(0x10b2f850)));
  /* 10b12b5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b12b5c jne 0x10b12bb9 */
  if (!C.zf) goto L_10b12bb9;
  /* 10b12b5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12b60 mov dx, word ptr [0x10b2f85e] */
  DX = (r16((uint32_t)(0x10b2f85e)));
  /* 10b12b67 push edx */
  push32((uint32_t)(EDX));
  /* 10b12b68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12b6a mov ax, word ptr [0x10b2f85c] */
  AX = (r16((uint32_t)(0x10b2f85c)));
  /* 10b12b70 push eax */
  push32((uint32_t)(EAX));
  /* 10b12b71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12b73 mov cx, word ptr [0x10b2f85a] */
  CX = (r16((uint32_t)(0x10b2f85a)));
  /* 10b12b7a push ecx */
  push32((uint32_t)(ECX));
  /* 10b12b7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12b7d mov dx, word ptr [0x10b2f858] */
  DX = (r16((uint32_t)(0x10b2f858)));
  /* 10b12b84 push edx */
  push32((uint32_t)(EDX));
  /* 10b12b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12b87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12b89 mov ax, word ptr [0x10b2f854] */
  AX = (r16((uint32_t)(0x10b2f854)));
  /* 10b12b8f push eax */
  push32((uint32_t)(EAX));
  /* 10b12b90 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12b92 mov cx, word ptr [0x10b2f856] */
  CX = (r16((uint32_t)(0x10b2f856)));
  /* 10b12b99 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12b9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12b9c mov dx, word ptr [0x10b2f852] */
  DX = (r16((uint32_t)(0x10b2f852)));
  /* 10b12ba3 push edx */
  push32((uint32_t)(EDX));
  /* 10b12ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12ba7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b12baa push ecx */
  push32((uint32_t)(ECX));
  /* 10b12bab push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12bad push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12baf call 0x10b12e10 */
  push32(0x10b12bb4u); f_10b12e10();
  /* 10b12bb4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12bb7 jmp 0x10b12c0a */
  goto L_10b12c0a;
L_10b12bb9:;
  /* 10b12bb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12bbb mov dx, word ptr [0x10b2f85e] */
  DX = (r16((uint32_t)(0x10b2f85e)));
  /* 10b12bc2 push edx */
  push32((uint32_t)(EDX));
  /* 10b12bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12bc5 mov ax, word ptr [0x10b2f85c] */
  AX = (r16((uint32_t)(0x10b2f85c)));
  /* 10b12bcb push eax */
  push32((uint32_t)(EAX));
  /* 10b12bcc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12bce mov cx, word ptr [0x10b2f85a] */
  CX = (r16((uint32_t)(0x10b2f85a)));
  /* 10b12bd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12bd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12bd8 mov dx, word ptr [0x10b2f858] */
  DX = (r16((uint32_t)(0x10b2f858)));
  /* 10b12bdf push edx */
  push32((uint32_t)(EDX));
  /* 10b12be0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12be2 mov ax, word ptr [0x10b2f856] */
  AX = (r16((uint32_t)(0x10b2f856)));
  /* 10b12be8 push eax */
  push32((uint32_t)(EAX));
  /* 10b12be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12beb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12bed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12bef mov cx, word ptr [0x10b2f852] */
  CX = (r16((uint32_t)(0x10b2f852)));
  /* 10b12bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12bf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12bfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b12bfd push eax */
  push32((uint32_t)(EAX));
  /* 10b12bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12c00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12c02 call 0x10b12e10 */
  push32(0x10b12c07u); f_10b12e10();
  /* 10b12c07 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b12c0a:;
  /* 10b12c0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12c0c mov cx, word ptr [0x10b2f7fc] */
  CX = (r16((uint32_t)(0x10b2f7fc)));
  /* 10b12c13 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b12c15 jne 0x10b12c72 */
  if (!C.zf) goto L_10b12c72;
  /* 10b12c17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12c19 mov dx, word ptr [0x10b2f80a] */
  DX = (r16((uint32_t)(0x10b2f80a)));
  /* 10b12c20 push edx */
  push32((uint32_t)(EDX));
  /* 10b12c21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12c23 mov ax, word ptr [0x10b2f808] */
  AX = (r16((uint32_t)(0x10b2f808)));
  /* 10b12c29 push eax */
  push32((uint32_t)(EAX));
  /* 10b12c2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12c2c mov cx, word ptr [0x10b2f806] */
  CX = (r16((uint32_t)(0x10b2f806)));
  /* 10b12c33 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12c34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12c36 mov dx, word ptr [0x10b2f804] */
  DX = (r16((uint32_t)(0x10b2f804)));
  /* 10b12c3d push edx */
  push32((uint32_t)(EDX));
  /* 10b12c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12c40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12c42 mov ax, word ptr [0x10b2f800] */
  AX = (r16((uint32_t)(0x10b2f800)));
  /* 10b12c48 push eax */
  push32((uint32_t)(EAX));
  /* 10b12c49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12c4b mov cx, word ptr [0x10b2f802] */
  CX = (r16((uint32_t)(0x10b2f802)));
  /* 10b12c52 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12c53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12c55 mov dx, word ptr [0x10b2f7fe] */
  DX = (r16((uint32_t)(0x10b2f7fe)));
  /* 10b12c5c push edx */
  push32((uint32_t)(EDX));
  /* 10b12c5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12c60 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b12c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10b12c64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12c68 call 0x10b12e10 */
  push32(0x10b12c6du); f_10b12e10();
  /* 10b12c6d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12c70 jmp 0x10b12cc3 */
  goto L_10b12cc3;
L_10b12c72:;
  /* 10b12c72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12c74 mov dx, word ptr [0x10b2f80a] */
  DX = (r16((uint32_t)(0x10b2f80a)));
  /* 10b12c7b push edx */
  push32((uint32_t)(EDX));
  /* 10b12c7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12c7e mov ax, word ptr [0x10b2f808] */
  AX = (r16((uint32_t)(0x10b2f808)));
  /* 10b12c84 push eax */
  push32((uint32_t)(EAX));
  /* 10b12c85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12c87 mov cx, word ptr [0x10b2f806] */
  CX = (r16((uint32_t)(0x10b2f806)));
  /* 10b12c8e push ecx */
  push32((uint32_t)(ECX));
  /* 10b12c8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b12c91 mov dx, word ptr [0x10b2f804] */
  DX = (r16((uint32_t)(0x10b2f804)));
  /* 10b12c98 push edx */
  push32((uint32_t)(EDX));
  /* 10b12c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12c9b mov ax, word ptr [0x10b2f802] */
  AX = (r16((uint32_t)(0x10b2f802)));
  /* 10b12ca1 push eax */
  push32((uint32_t)(EAX));
  /* 10b12ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12ca6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b12ca8 mov cx, word ptr [0x10b2f7fe] */
  CX = (r16((uint32_t)(0x10b2f7fe)));
  /* 10b12caf push ecx */
  push32((uint32_t)(ECX));
  /* 10b12cb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12cb3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b12cb6 push eax */
  push32((uint32_t)(EAX));
  /* 10b12cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cbb call 0x10b12e10 */
  push32(0x10b12cc0u); f_10b12e10();
  /* 10b12cc0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b12cc3:;
  /* 10b12cc3 jmp 0x10b12d0b */
  goto L_10b12d0b;
L_10b12cc5:;
  /* 10b12cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12ccb push 2 */
  push32((uint32_t)(0x2u));
  /* 10b12ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12cd3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b12cd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12cd8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10b12cdb push edx */
  push32((uint32_t)(EDX));
  /* 10b12cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12cde push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12ce0 call 0x10b12e10 */
  push32(0x10b12ce5u); f_10b12e10();
  /* 10b12ce5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12ce8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cea push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cec push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cee push 2 */
  push32((uint32_t)(0x2u));
  /* 10b12cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12cf4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b12cf6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b12cf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12cfb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10b12cfe push ecx */
  push32((uint32_t)(ECX));
  /* 10b12cff push 1 */
  push32((uint32_t)(0x1u));
  /* 10b12d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b12d03 call 0x10b12e10 */
  push32(0x10b12d08u); f_10b12e10();
  /* 10b12d08 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b12d0b:;
  /* 10b12d0b mov edx, dword ptr [0x10b2ee2c] */
  EDX = (r32((uint32_t)(0x10b2ee2c)));
  /* 10b12d11 cmp edx, dword ptr [0x10b2ee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b2ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12d17 jge 0x10b12d64 */
  if ((C.sf==C.of)) goto L_10b12d64;
  /* 10b12d19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12d1c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b12d1f cmp ecx, dword ptr [0x10b2ee2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b2ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12d25 jl 0x10b12d35 */
  if ((C.sf!=C.of)) goto L_10b12d35;
  /* 10b12d27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12d2a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b12d2d cmp eax, dword ptr [0x10b2ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12d33 jle 0x10b12d3c */
  if ((C.zf||C.sf!=C.of)) goto L_10b12d3c;
L_10b12d35:;
  /* 10b12d35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12d37 jmp 0x10b12e06 */
  goto L_10b12e06;
L_10b12d3c:;
  /* 10b12d3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12d3f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b12d42 cmp edx, dword ptr [0x10b2ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b2ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12d48 jle 0x10b12d62 */
  if ((C.zf||C.sf!=C.of)) goto L_10b12d62;
  /* 10b12d4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12d4d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b12d50 cmp ecx, dword ptr [0x10b2ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b2ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12d56 jge 0x10b12d62 */
  if ((C.sf==C.of)) goto L_10b12d62;
  /* 10b12d58 mov eax, 1 */
  EAX = (0x1u);
  /* 10b12d5d jmp 0x10b12e06 */
  goto L_10b12e06;
L_10b12d62:;
  /* 10b12d62 jmp 0x10b12da7 */
  goto L_10b12da7;
L_10b12d64:;
  /* 10b12d64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12d67 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b12d6a cmp eax, dword ptr [0x10b2ee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12d70 jl 0x10b12d80 */
  if ((C.sf!=C.of)) goto L_10b12d80;
  /* 10b12d72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12d75 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b12d78 cmp edx, dword ptr [0x10b2ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b2ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12d7e jle 0x10b12d87 */
  if ((C.zf||C.sf!=C.of)) goto L_10b12d87;
L_10b12d80:;
  /* 10b12d80 mov eax, 1 */
  EAX = (0x1u);
  /* 10b12d85 jmp 0x10b12e06 */
  goto L_10b12e06;
L_10b12d87:;
  /* 10b12d87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12d8a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b12d8d cmp ecx, dword ptr [0x10b2ee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b2ee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12d93 jle 0x10b12da7 */
  if ((C.zf||C.sf!=C.of)) goto L_10b12da7;
  /* 10b12d95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12d98 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b12d9b cmp eax, dword ptr [0x10b2ee2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12da1 jge 0x10b12da7 */
  if ((C.sf==C.of)) goto L_10b12da7;
  /* 10b12da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12da5 jmp 0x10b12e06 */
  goto L_10b12e06;
L_10b12da7:;
  /* 10b12da7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12daa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b12dad imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12db3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b12db5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12db7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12dba mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b12dbd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12dc3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12dc5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12dcb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b12dce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b12dd1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b12dd4 cmp edx, dword ptr [0x10b2ee2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b2ee2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12dda jne 0x10b12df2 */
  if (!C.zf) goto L_10b12df2;
  /* 10b12ddc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b12ddf cmp eax, dword ptr [0x10b2ee30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2ee30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12de5 jl 0x10b12dee */
  if ((C.sf!=C.of)) goto L_10b12dee;
  /* 10b12de7 mov eax, 1 */
  EAX = (0x1u);
  /* 10b12dec jmp 0x10b12e06 */
  goto L_10b12e06;
L_10b12dee:;
  /* 10b12dee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b12df0 jmp 0x10b12e06 */
  goto L_10b12e06;
L_10b12df2:;
  /* 10b12df2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b12df5 cmp ecx, dword ptr [0x10b2ee40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b2ee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12dfb jge 0x10b12e04 */
  if ((C.sf==C.of)) goto L_10b12e04;
  /* 10b12dfd mov eax, 1 */
  EAX = (0x1u);
  /* 10b12e02 jmp 0x10b12e06 */
  goto L_10b12e06;
L_10b12e04:;
  /* 10b12e04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b12e06:;
  /* 10b12e06 mov esp, ebp */
  ESP = (EBP);
  /* 10b12e08 pop ebp */
  EBP = (pop32());
  /* 10b12e09 ret  */
  ESPCHK(0x10b12b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e10 @ 0x10b12e10 (504 bytes, 145 insns) */
void f_10b12e10(void) {
  FTRACE(0x10b12e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b12e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b12e11 mov ebp, esp */
  EBP = (ESP);
  /* 10b12e13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12e16 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12e1a jne 0x10b12eec */
  if (!C.zf) goto L_10b12eec;
  /* 10b12e20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12e23 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b12e26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b12e28 jne 0x10b12e39 */
  if (!C.zf) goto L_10b12e39;
  /* 10b12e2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b12e2d mov edx, dword ptr [ecx*4 + 0x10b2ee4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2ee4c)));
  /* 10b12e34 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b12e37 jmp 0x10b12e46 */
  goto L_10b12e46;
L_10b12e39:;
  /* 10b12e39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b12e3c mov ecx, dword ptr [eax*4 + 0x10b2ee80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b2ee80)));
  /* 10b12e43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b12e46:;
  /* 10b12e46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b12e49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12e4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b12e4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12e52 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12e55 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12e5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b12e5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12e60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12e63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12e66 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10b12e69 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10b12e6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b12e6e mov ecx, 7 */
  ECX = (0x7u);
  /* 10b12e73 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b12e75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b12e78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b12e7b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12e7e jge 0x10b12e99 */
  if ((C.sf==C.of)) goto L_10b12e99;
  /* 10b12e80 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b12e83 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12e86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b12e89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12e8c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12e8f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12e92 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12e94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b12e97 jmp 0x10b12ead */
  goto L_10b12ead;
L_10b12e99:;
  /* 10b12e99 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b12e9c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12e9f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b12ea2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12ea5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12ea8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12eaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b12ead:;
  /* 10b12ead cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12eb1 jne 0x10b12eea */
  if (!C.zf) goto L_10b12eea;
  /* 10b12eb3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12eb6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10b12eb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b12ebb jne 0x10b12ecc */
  if (!C.zf) goto L_10b12ecc;
  /* 10b12ebd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b12ec0 mov eax, dword ptr [edx*4 + 0x10b2ee50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b2ee50)));
  /* 10b12ec7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b12eca jmp 0x10b12ed9 */
  goto L_10b12ed9;
L_10b12ecc:;
  /* 10b12ecc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b12ecf mov edx, dword ptr [ecx*4 + 0x10b2ee84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b2ee84)));
  /* 10b12ed6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b12ed9:;
  /* 10b12ed9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b12edc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12edf jle 0x10b12eea */
  if ((C.zf||C.sf!=C.of)) goto L_10b12eea;
  /* 10b12ee1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b12ee4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12ee7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b12eea:;
  /* 10b12eea jmp 0x10b12f21 */
  goto L_10b12f21;
L_10b12eec:;
  /* 10b12eec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12eef and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b12ef2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b12ef4 jne 0x10b12f05 */
  if (!C.zf) goto L_10b12f05;
  /* 10b12ef6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b12ef9 mov ecx, dword ptr [eax*4 + 0x10b2ee4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10b2ee4c)));
  /* 10b12f00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b12f03 jmp 0x10b12f12 */
  goto L_10b12f12;
L_10b12f05:;
  /* 10b12f05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b12f08 mov eax, dword ptr [edx*4 + 0x10b2ee80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b2ee80)));
  /* 10b12f0f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10b12f12:;
  /* 10b12f12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b12f15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b12f18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b12f1b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12f1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b12f21:;
  /* 10b12f21 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12f25 jne 0x10b12f61 */
  if (!C.zf) goto L_10b12f61;
  /* 10b12f27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b12f2a mov dword ptr [0x10b2ee2c], eax */
  w32((uint32_t)(0x10b2ee2c), (EAX));
  /* 10b12f2f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10b12f32 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12f35 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10b12f38 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12f3a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12f3d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10b12f40 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12f42 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12f48 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10b12f4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12f4d mov dword ptr [0x10b2ee30], ecx */
  w32((uint32_t)(0x10b2ee30), (ECX));
  /* 10b12f53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12f56 mov dword ptr [0x10b2ee28], edx */
  w32((uint32_t)(0x10b2ee28), (EDX));
  /* 10b12f5c jmp 0x10b13004 */
  goto L_10b13004;
L_10b12f61:;
  /* 10b12f61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b12f64 mov dword ptr [0x10b2ee3c], eax */
  w32((uint32_t)(0x10b2ee3c), (EAX));
  /* 10b12f69 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10b12f6c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12f6f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10b12f72 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12f74 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12f77 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10b12f7a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12f7c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12f82 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10b12f85 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12f87 mov dword ptr [0x10b2ee40], ecx */
  w32((uint32_t)(0x10b2ee40), (ECX));
  /* 10b12f8d mov edx, dword ptr [0x10b2ed98] */
  EDX = (r32((uint32_t)(0x10b2ed98)));
  /* 10b12f93 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b12f99 mov eax, dword ptr [0x10b2ee40] */
  EAX = (r32((uint32_t)(0x10b2ee40)));
  /* 10b12f9e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12fa0 mov dword ptr [0x10b2ee40], eax */
  w32((uint32_t)(0x10b2ee40), (EAX));
  /* 10b12fa5 cmp dword ptr [0x10b2ee40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2ee40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12fac jge 0x10b12fd1 */
  if ((C.sf==C.of)) goto L_10b12fd1;
  /* 10b12fae mov ecx, dword ptr [0x10b2ee40] */
  ECX = (r32((uint32_t)(0x10b2ee40)));
  /* 10b12fb4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12fba mov dword ptr [0x10b2ee40], ecx */
  w32((uint32_t)(0x10b2ee40), (ECX));
  /* 10b12fc0 mov edx, dword ptr [0x10b2ee3c] */
  EDX = (r32((uint32_t)(0x10b2ee3c)));
  /* 10b12fc6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12fc9 mov dword ptr [0x10b2ee3c], edx */
  w32((uint32_t)(0x10b2ee3c), (EDX));
  /* 10b12fcf jmp 0x10b12ffb */
  goto L_10b12ffb;
L_10b12fd1:;
  /* 10b12fd1 cmp dword ptr [0x10b2ee40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10b2ee40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b12fdb jl 0x10b12ffb */
  if ((C.sf!=C.of)) goto L_10b12ffb;
  /* 10b12fdd mov eax, dword ptr [0x10b2ee40] */
  EAX = (r32((uint32_t)(0x10b2ee40)));
  /* 10b12fe2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b12fe7 mov dword ptr [0x10b2ee40], eax */
  w32((uint32_t)(0x10b2ee40), (EAX));
  /* 10b12fec mov ecx, dword ptr [0x10b2ee3c] */
  ECX = (r32((uint32_t)(0x10b2ee3c)));
  /* 10b12ff2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b12ff5 mov dword ptr [0x10b2ee3c], ecx */
  w32((uint32_t)(0x10b2ee3c), (ECX));
L_10b12ffb:;
  /* 10b12ffb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b12ffe mov dword ptr [0x10b2ee38], edx */
  w32((uint32_t)(0x10b2ee38), (EDX));
L_10b13004:;
  /* 10b13004 mov esp, ebp */
  ESP = (EBP);
  /* 10b13006 pop ebp */
  EBP = (pop32());
  /* 10b13007 ret  */
  ESPCHK(0x10b12e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013010 @ 0x10b13010 (382 bytes, 135 insns) */
void f_10b13010(void) {
  FTRACE(0x10b13010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13010 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13011 mov ebp, esp */
  EBP = (ESP);
  /* 10b13013 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b13015 push 0x10b2baa8 */
  push32((uint32_t)(0x10b2baa8u));
  /* 10b1301a push 0x10b0ccd8 */
  push32((uint32_t)(0x10b0ccd8u));
  /* 10b1301f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b13025 push eax */
  push32((uint32_t)(EAX));
  /* 10b13026 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b1302d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13030 push ebx */
  push32((uint32_t)(EBX));
  /* 10b13031 push esi */
  push32((uint32_t)(ESI));
  /* 10b13032 push edi */
  push32((uint32_t)(EDI));
  /* 10b13033 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b13036 cmp dword ptr [0x10b2f86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1303d jne 0x10b13082 */
  if (!C.zf) goto L_10b13082;
  /* 10b1303f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13041 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13043 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b13045 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13047 call dword ptr [0x10b322a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322a4))), 0x10b1304du);
  /* 10b1304d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b1304f je 0x10b1305d */
  if (C.zf) goto L_10b1305d;
  /* 10b13051 mov dword ptr [0x10b2f86c], 1 */
  w32((uint32_t)(0x10b2f86c), (0x1u));
  /* 10b1305b jmp 0x10b13082 */
  goto L_10b13082;
L_10b1305d:;
  /* 10b1305d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b1305f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13061 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b13063 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13065 call dword ptr [0x10b322bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322bc))), 0x10b1306bu);
  /* 10b1306b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b1306d je 0x10b1307b */
  if (C.zf) goto L_10b1307b;
  /* 10b1306f mov dword ptr [0x10b2f86c], 2 */
  w32((uint32_t)(0x10b2f86c), (0x2u));
  /* 10b13079 jmp 0x10b13082 */
  goto L_10b13082;
L_10b1307b:;
  /* 10b1307b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1307d jmp 0x10b13191 */
  goto L_10b13191;
L_10b13082:;
  /* 10b13082 cmp dword ptr [0x10b2f86c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f86c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13089 jne 0x10b130a6 */
  if (!C.zf) goto L_10b130a6;
  /* 10b1308b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1308e push eax */
  push32((uint32_t)(EAX));
  /* 10b1308f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b13092 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13093 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13096 push edx */
  push32((uint32_t)(EDX));
  /* 10b13097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1309a push eax */
  push32((uint32_t)(EAX));
  /* 10b1309b call dword ptr [0x10b322a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322a4))), 0x10b130a1u);
  /* 10b130a1 jmp 0x10b13191 */
  goto L_10b13191;
L_10b130a6:;
  /* 10b130a6 cmp dword ptr [0x10b2f86c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f86c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b130ad jne 0x10b1318f */
  if (!C.zf) goto L_10b1318f;
  /* 10b130b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b130b7 jne 0x10b130c2 */
  if (!C.zf) goto L_10b130c2;
  /* 10b130b9 mov ecx, dword ptr [0x10b2f720] */
  ECX = (r32((uint32_t)(0x10b2f720)));
  /* 10b130bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10b130c2:;
  /* 10b130c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b130c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b130c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b130c9 push edx */
  push32((uint32_t)(EDX));
  /* 10b130ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b130cd push eax */
  push32((uint32_t)(EAX));
  /* 10b130ce call dword ptr [0x10b322bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322bc))), 0x10b130d4u);
  /* 10b130d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b130d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b130db jne 0x10b130e4 */
  if (!C.zf) goto L_10b130e4;
  /* 10b130dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b130df jmp 0x10b13191 */
  goto L_10b13191;
L_10b130e4:;
  /* 10b130e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b130eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b130ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b130f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b130f3 call 0x10b06d70 */
  push32(0x10b130f8u); f_10b06d70();
  /* 10b130f8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10b130fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b130fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b13101 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b13104 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b1310b jmp 0x10b13124 */
  goto L_10b13124;
  /* 10b1310d mov eax, 1 */
  EAX = (0x1u);
  /* 10b13112 ret  */
  ESPCHK(0x10b13010u, _esp0);
  ESP += 4; return;
  /* 10b13113 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b13116 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b1311d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b13124:;
  /* 10b13124 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13128 jne 0x10b1312e */
  if (!C.zf) goto L_10b1312e;
  /* 10b1312a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1312c jmp 0x10b13191 */
  goto L_10b13191;
L_10b1312e:;
  /* 10b1312e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b13131 push edx */
  push32((uint32_t)(EDX));
  /* 10b13132 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b13135 push eax */
  push32((uint32_t)(EAX));
  /* 10b13136 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13139 push ecx */
  push32((uint32_t)(ECX));
  /* 10b1313a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1313d push edx */
  push32((uint32_t)(EDX));
  /* 10b1313e call dword ptr [0x10b322bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322bc))), 0x10b13144u);
  /* 10b13144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b13146 jne 0x10b1314c */
  if (!C.zf) goto L_10b1314c;
  /* 10b13148 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1314a jmp 0x10b13191 */
  goto L_10b13191;
L_10b1314c:;
  /* 10b1314c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13150 jne 0x10b1316d */
  if (!C.zf) goto L_10b1316d;
  /* 10b13152 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13154 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13156 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b13158 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b1315b push eax */
  push32((uint32_t)(EAX));
  /* 10b1315c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b1315e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b13161 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13162 call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b13168u);
  /* 10b13168 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b1316b jmp 0x10b1318a */
  goto L_10b1318a;
L_10b1316d:;
  /* 10b1316d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b13170 push edx */
  push32((uint32_t)(EDX));
  /* 10b13171 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b13174 push eax */
  push32((uint32_t)(EAX));
  /* 10b13175 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b13177 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b1317a push ecx */
  push32((uint32_t)(ECX));
  /* 10b1317b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b1317d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b13180 push edx */
  push32((uint32_t)(EDX));
  /* 10b13181 call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b13187u);
  /* 10b13187 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b1318a:;
  /* 10b1318a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b1318d jmp 0x10b13191 */
  goto L_10b13191;
L_10b1318f:;
  /* 10b1318f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b13191:;
  /* 10b13191 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10b13194 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b13197 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b1319e pop edi */
  EDI = (pop32());
  /* 10b1319f pop esi */
  ESI = (pop32());
  /* 10b131a0 pop ebx */
  EBX = (pop32());
  /* 10b131a1 mov esp, ebp */
  ESP = (EBP);
  /* 10b131a3 pop ebp */
  EBP = (pop32());
  /* 10b131a4 ret  */
  ESPCHK(0x10b13010u, _esp0);
  ESP += 4; return;
}

/* FUN_100131b0 @ 0x10b131b0 (398 bytes, 140 insns) */
void f_10b131b0(void) {
  FTRACE(0x10b131b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b131b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b131b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b131b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b131b5 push 0x10b2bab8 */
  push32((uint32_t)(0x10b2bab8u));
  /* 10b131ba push 0x10b0ccd8 */
  push32((uint32_t)(0x10b0ccd8u));
  /* 10b131bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b131c5 push eax */
  push32((uint32_t)(EAX));
  /* 10b131c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b131cd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b131d0 push ebx */
  push32((uint32_t)(EBX));
  /* 10b131d1 push esi */
  push32((uint32_t)(ESI));
  /* 10b131d2 push edi */
  push32((uint32_t)(EDI));
  /* 10b131d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b131d6 cmp dword ptr [0x10b2f870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b131dd jne 0x10b13222 */
  if (!C.zf) goto L_10b13222;
  /* 10b131df push 0 */
  push32((uint32_t)(0x0u));
  /* 10b131e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b131e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b131e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b131e7 call dword ptr [0x10b322a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322a4))), 0x10b131edu);
  /* 10b131ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b131ef je 0x10b131fd */
  if (C.zf) goto L_10b131fd;
  /* 10b131f1 mov dword ptr [0x10b2f870], 1 */
  w32((uint32_t)(0x10b2f870), (0x1u));
  /* 10b131fb jmp 0x10b13222 */
  goto L_10b13222;
L_10b131fd:;
  /* 10b131fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b131ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13201 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b13203 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13205 call dword ptr [0x10b322bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322bc))), 0x10b1320bu);
  /* 10b1320b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b1320d je 0x10b1321b */
  if (C.zf) goto L_10b1321b;
  /* 10b1320f mov dword ptr [0x10b2f870], 2 */
  w32((uint32_t)(0x10b2f870), (0x2u));
  /* 10b13219 jmp 0x10b13222 */
  goto L_10b13222;
L_10b1321b:;
  /* 10b1321b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1321d jmp 0x10b13341 */
  goto L_10b13341;
L_10b13222:;
  /* 10b13222 cmp dword ptr [0x10b2f870], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f870))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13229 jne 0x10b13246 */
  if (!C.zf) goto L_10b13246;
  /* 10b1322b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1322e push eax */
  push32((uint32_t)(EAX));
  /* 10b1322f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b13232 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13233 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13236 push edx */
  push32((uint32_t)(EDX));
  /* 10b13237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1323a push eax */
  push32((uint32_t)(EAX));
  /* 10b1323b call dword ptr [0x10b322bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322bc))), 0x10b13241u);
  /* 10b13241 jmp 0x10b13341 */
  goto L_10b13341;
L_10b13246:;
  /* 10b13246 cmp dword ptr [0x10b2f870], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f870))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1324d jne 0x10b1333f */
  if (!C.zf) goto L_10b1333f;
  /* 10b13253 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13257 jne 0x10b13262 */
  if (!C.zf) goto L_10b13262;
  /* 10b13259 mov ecx, dword ptr [0x10b2f720] */
  ECX = (r32((uint32_t)(0x10b2f720)));
  /* 10b1325f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10b13262:;
  /* 10b13262 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13264 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13266 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13269 push edx */
  push32((uint32_t)(EDX));
  /* 10b1326a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1326d push eax */
  push32((uint32_t)(EAX));
  /* 10b1326e call dword ptr [0x10b322a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322a4))), 0x10b13274u);
  /* 10b13274 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b13277 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1327b jne 0x10b13284 */
  if (!C.zf) goto L_10b13284;
  /* 10b1327d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1327f jmp 0x10b13341 */
  goto L_10b13341;
L_10b13284:;
  /* 10b13284 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b1328b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b1328e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b13290 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13293 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b13295 call 0x10b06d70 */
  push32(0x10b1329au); f_10b06d70();
  /* 10b1329a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10b1329d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b132a0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b132a3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b132a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b132ad jmp 0x10b132c6 */
  goto L_10b132c6;
  /* 10b132af mov eax, 1 */
  EAX = (0x1u);
  /* 10b132b4 ret  */
  ESPCHK(0x10b131b0u, _esp0);
  ESP += 4; return;
  /* 10b132b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b132b8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b132bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b132c6:;
  /* 10b132c6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b132ca jne 0x10b132d0 */
  if (!C.zf) goto L_10b132d0;
  /* 10b132cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b132ce jmp 0x10b13341 */
  goto L_10b13341;
L_10b132d0:;
  /* 10b132d0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b132d3 push edx */
  push32((uint32_t)(EDX));
  /* 10b132d4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b132d7 push eax */
  push32((uint32_t)(EAX));
  /* 10b132d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b132db push ecx */
  push32((uint32_t)(ECX));
  /* 10b132dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b132df push edx */
  push32((uint32_t)(EDX));
  /* 10b132e0 call dword ptr [0x10b322a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322a4))), 0x10b132e6u);
  /* 10b132e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b132e8 jne 0x10b132ee */
  if (!C.zf) goto L_10b132ee;
  /* 10b132ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b132ec jmp 0x10b13341 */
  goto L_10b13341;
L_10b132ee:;
  /* 10b132ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b132f2 jne 0x10b13316 */
  if (!C.zf) goto L_10b13316;
  /* 10b132f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b132f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b132f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b132fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10b132fc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b132fe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b13301 push eax */
  push32((uint32_t)(EAX));
  /* 10b13302 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b13307 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b1330a push ecx */
  push32((uint32_t)(ECX));
  /* 10b1330b call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b13311u);
  /* 10b13311 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b13314 jmp 0x10b1333a */
  goto L_10b1333a;
L_10b13316:;
  /* 10b13316 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13318 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b1331a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1331d push edx */
  push32((uint32_t)(EDX));
  /* 10b1331e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b13321 push eax */
  push32((uint32_t)(EAX));
  /* 10b13322 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b13324 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b13327 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13328 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b1332d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b13330 push edx */
  push32((uint32_t)(EDX));
  /* 10b13331 call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b13337u);
  /* 10b13337 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b1333a:;
  /* 10b1333a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b1333d jmp 0x10b13341 */
  goto L_10b13341;
L_10b1333f:;
  /* 10b1333f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b13341:;
  /* 10b13341 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10b13344 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b13347 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b1334e pop edi */
  EDI = (pop32());
  /* 10b1334f pop esi */
  ESI = (pop32());
  /* 10b13350 pop ebx */
  EBX = (pop32());
  /* 10b13351 mov esp, ebp */
  ESP = (EBP);
  /* 10b13353 pop ebp */
  EBP = (pop32());
  /* 10b13354 ret  */
  ESPCHK(0x10b131b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013360 @ 0x10b13360 (11 bytes, 6 insns) */
void f_10b13360(void) {
  FTRACE(0x10b13360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13360 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13361 mov ebp, esp */
  EBP = (ESP);
  /* 10b13363 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13366 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13369 pop ebp */
  EBP = (pop32());
  /* 10b1336a ret  */
  ESPCHK(0x10b13360u, _esp0);
  ESP += 4; return;
}

/* FUN_10013370 @ 0x10b13370 (147 bytes, 43 insns) */
void f_10b13370(void) {
  FTRACE(0x10b13370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13370 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13371 mov ebp, esp */
  EBP = (ESP);
  /* 10b13373 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13374 cmp dword ptr [0x10b2f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1337b jne 0x10b13397 */
  if (!C.zf) goto L_10b13397;
  /* 10b1337d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13381 jl 0x10b13392 */
  if ((C.sf!=C.of)) goto L_10b13392;
  /* 10b13383 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13387 jg 0x10b13392 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b13392;
  /* 10b13389 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1338c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1338f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b13392:;
  /* 10b13392 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13395 jmp 0x10b133ff */
  goto L_10b133ff;
L_10b13397:;
  /* 10b13397 push 0x10b2f89c */
  push32((uint32_t)(0x10b2f89cu));
  /* 10b1339c call dword ptr [0x10b32344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32344))), 0x10b133a2u);
  /* 10b133a2 cmp dword ptr [0x10b2f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b133a9 je 0x10b133c9 */
  if (C.zf) goto L_10b133c9;
  /* 10b133ab push 0x10b2f89c */
  push32((uint32_t)(0x10b2f89cu));
  /* 10b133b0 call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b133b6u);
  /* 10b133b6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b133b8 call 0x10b075d0 */
  push32(0x10b133bdu); f_10b075d0();
  /* 10b133bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b133c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b133c7 jmp 0x10b133d0 */
  goto L_10b133d0;
L_10b133c9:;
  /* 10b133c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b133d0:;
  /* 10b133d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b133d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b133d4 call 0x10b13410 */
  push32(0x10b133d9u); f_10b13410();
  /* 10b133d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b133dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b133df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b133e3 je 0x10b133f1 */
  if (C.zf) goto L_10b133f1;
  /* 10b133e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b133e7 call 0x10b07670 */
  push32(0x10b133ecu); f_10b07670();
  /* 10b133ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b133ef jmp 0x10b133fc */
  goto L_10b133fc;
L_10b133f1:;
  /* 10b133f1 push 0x10b2f89c */
  push32((uint32_t)(0x10b2f89cu));
  /* 10b133f6 call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b133fcu);
L_10b133fc:;
  /* 10b133fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10b133ff:;
  /* 10b133ff mov esp, ebp */
  ESP = (EBP);
  /* 10b13401 pop ebp */
  EBP = (pop32());
  /* 10b13402 ret  */
  ESPCHK(0x10b13370u, _esp0);
  ESP += 4; return;
}

/* FUN_10013410 @ 0x10b13410 (299 bytes, 91 insns) */
void f_10b13410(void) {
  FTRACE(0x10b13410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13410 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13411 mov ebp, esp */
  EBP = (ESP);
  /* 10b13413 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13416 cmp dword ptr [0x10b2f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1341d jne 0x10b1343c */
  if (!C.zf) goto L_10b1343c;
  /* 10b1341f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13423 jl 0x10b13434 */
  if ((C.sf!=C.of)) goto L_10b13434;
  /* 10b13425 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13429 jg 0x10b13434 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b13434;
  /* 10b1342b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1342e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13431 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b13434:;
  /* 10b13434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13437 jmp 0x10b13537 */
  goto L_10b13537;
L_10b1343c:;
  /* 10b1343c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13443 jge 0x10b13483 */
  if ((C.sf==C.of)) goto L_10b13483;
  /* 10b13445 cmp dword ptr [0x10b2dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1344c jle 0x10b13461 */
  if ((C.zf||C.sf!=C.of)) goto L_10b13461;
  /* 10b1344e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b13450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13453 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13454 call 0x10b09be0 */
  push32(0x10b13459u); f_10b09be0();
  /* 10b13459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1345c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b1345f jmp 0x10b13475 */
  goto L_10b13475;
L_10b13461:;
  /* 10b13461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13464 mov eax, dword ptr [0x10b2dc98] */
  EAX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b13469 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b1346b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10b1346f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b13472 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b13475:;
  /* 10b13475 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13479 jne 0x10b13483 */
  if (!C.zf) goto L_10b13483;
  /* 10b1347b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1347e jmp 0x10b13537 */
  goto L_10b13537;
L_10b13483:;
  /* 10b13483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13486 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10b13489 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b1348f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b13495 mov eax, dword ptr [0x10b2dc98] */
  EAX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b1349a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b1349c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10b134a0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10b134a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b134a8 je 0x10b134cc */
  if (C.zf) goto L_10b134cc;
  /* 10b134aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b134ad sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10b134b0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b134b6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10b134b9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b134bc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10b134bf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10b134c3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10b134ca jmp 0x10b134dd */
  goto L_10b134dd;
L_10b134cc:;
  /* 10b134cc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b134cf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10b134d2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10b134d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10b134dd:;
  /* 10b134dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10b134df push 0 */
  push32((uint32_t)(0x0u));
  /* 10b134e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b134e3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10b134e6 push edx */
  push32((uint32_t)(EDX));
  /* 10b134e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b134ea push eax */
  push32((uint32_t)(EAX));
  /* 10b134eb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10b134ee push ecx */
  push32((uint32_t)(ECX));
  /* 10b134ef push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b134f4 mov edx, dword ptr [0x10b2f710] */
  EDX = (r32((uint32_t)(0x10b2f710)));
  /* 10b134fa push edx */
  push32((uint32_t)(EDX));
  /* 10b134fb call 0x10b0bfc0 */
  push32(0x10b13500u); f_10b0bfc0();
  /* 10b13500 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13503 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b13506 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1350a jne 0x10b13511 */
  if (!C.zf) goto L_10b13511;
  /* 10b1350c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1350f jmp 0x10b13537 */
  goto L_10b13537;
L_10b13511:;
  /* 10b13511 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13515 jne 0x10b13521 */
  if (!C.zf) goto L_10b13521;
  /* 10b13517 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b1351a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b1351f jmp 0x10b13537 */
  goto L_10b13537;
L_10b13521:;
  /* 10b13521 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13524 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b13529 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10b1352c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b13532 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10b13535 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10b13537:;
  /* 10b13537 mov esp, ebp */
  ESP = (EBP);
  /* 10b13539 pop ebp */
  EBP = (pop32());
  /* 10b1353a ret  */
  ESPCHK(0x10b13410u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10b13540 (52 bytes, 19 insns) */
void f_10b13540(void) {
  FTRACE(0x10b13540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13540 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b13544 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b13548 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b1354a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b1354e jne 0x10b13559 */
  if (!C.zf) goto L_10b13559;
  /* 10b13550 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b13554 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b13556 ret 0x10 */
  ESPCHK(0x10b13540u, _esp0);
  ESP += 20; return;
L_10b13559:;
  /* 10b13559 push ebx */
  push32((uint32_t)(EBX));
  /* 10b1355a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b1355c mov ebx, eax */
  EBX = (EAX);
  /* 10b1355e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b13562 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b13566 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13568 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b1356c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b1356e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13570 pop ebx */
  EBX = (pop32());
  /* 10b13571 ret 0x10 */
  ESPCHK(0x10b13540u, _esp0);
  ESP += 20; return;
}

/* FUN_10013580 @ 0x10b13580 (46 bytes, 18 insns) */
void f_10b13580(void) {
  FTRACE(0x10b13580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13580 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13581 mov ebp, esp */
  EBP = (ESP);
  /* 10b13583 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13584 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b13586 call 0x10b075d0 */
  push32(0x10b1358bu); f_10b075d0();
  /* 10b1358b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1358e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13591 push eax */
  push32((uint32_t)(EAX));
  /* 10b13592 call 0x10b135b0 */
  push32(0x10b13597u); f_10b135b0();
  /* 10b13597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1359a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b1359d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b1359f call 0x10b07670 */
  push32(0x10b135a4u); f_10b07670();
  /* 10b135a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b135a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b135aa mov esp, ebp */
  ESP = (EBP);
  /* 10b135ac pop ebp */
  EBP = (pop32());
  /* 10b135ad ret  */
  ESPCHK(0x10b13580u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10b135b0 (198 bytes, 69 insns) */
void f_10b135b0(void) {
  FTRACE(0x10b135b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b135b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b135b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b135b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b135b6 mov eax, dword ptr [0x10b2f52c] */
  EAX = (r32((uint32_t)(0x10b2f52c)));
  /* 10b135bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b135be cmp dword ptr [0x10b31020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b31020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b135c5 jne 0x10b135ce */
  if (!C.zf) goto L_10b135ce;
  /* 10b135c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b135c9 jmp 0x10b13672 */
  goto L_10b13672;
L_10b135ce:;
  /* 10b135ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b135d2 jne 0x10b135f6 */
  if (!C.zf) goto L_10b135f6;
  /* 10b135d4 cmp dword ptr [0x10b2f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b135db je 0x10b135f6 */
  if (C.zf) goto L_10b135f6;
  /* 10b135dd call 0x10b136d0 */
  push32(0x10b135e2u); f_10b136d0();
  /* 10b135e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b135e4 je 0x10b135ed */
  if (C.zf) goto L_10b135ed;
  /* 10b135e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b135e8 jmp 0x10b13672 */
  goto L_10b13672;
L_10b135ed:;
  /* 10b135ed mov ecx, dword ptr [0x10b2f52c] */
  ECX = (r32((uint32_t)(0x10b2f52c)));
  /* 10b135f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b135f6:;
  /* 10b135f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b135fa je 0x10b13670 */
  if (C.zf) goto L_10b13670;
  /* 10b135fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13600 je 0x10b13670 */
  if (C.zf) goto L_10b13670;
  /* 10b13602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13605 push edx */
  push32((uint32_t)(EDX));
  /* 10b13606 call 0x10b06a00 */
  push32(0x10b1360bu); f_10b06a00();
  /* 10b1360b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1360e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b13611:;
  /* 10b13611 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13614 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13617 je 0x10b13670 */
  if (C.zf) goto L_10b13670;
  /* 10b13619 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b1361c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b1361e push edx */
  push32((uint32_t)(EDX));
  /* 10b1361f call 0x10b06a00 */
  push32(0x10b13624u); f_10b06a00();
  /* 10b13624 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13627 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1362a jbe 0x10b13665 */
  if ((C.cf||C.zf)) goto L_10b13665;
  /* 10b1362c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b1362f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b13631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13634 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10b13638 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1363b jne 0x10b13665 */
  if (!C.zf) goto L_10b13665;
  /* 10b1363d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13640 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13644 push edx */
  push32((uint32_t)(EDX));
  /* 10b13645 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13648 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b1364a push ecx */
  push32((uint32_t)(ECX));
  /* 10b1364b call 0x10b13680 */
  push32(0x10b13650u); f_10b13680();
  /* 10b13650 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13653 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b13655 jne 0x10b13665 */
  if (!C.zf) goto L_10b13665;
  /* 10b13657 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b1365a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b1365c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1365f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10b13663 jmp 0x10b13672 */
  goto L_10b13672;
L_10b13665:;
  /* 10b13665 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13668 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1366b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b1366e jmp 0x10b13611 */
  goto L_10b13611;
L_10b13670:;
  /* 10b13670 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b13672:;
  /* 10b13672 mov esp, ebp */
  ESP = (EBP);
  /* 10b13674 pop ebp */
  EBP = (pop32());
  /* 10b13675 ret  */
  ESPCHK(0x10b135b0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10b13680 (79 bytes, 32 insns) */
void f_10b13680(void) {
  FTRACE(0x10b13680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13680 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13681 mov ebp, esp */
  EBP = (ESP);
  /* 10b13683 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13684 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13688 jne 0x10b1368e */
  if (!C.zf) goto L_10b1368e;
  /* 10b1368a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1368c jmp 0x10b136cb */
  goto L_10b136cb;
L_10b1368e:;
  /* 10b1368e mov eax, dword ptr [0x10b30be4] */
  EAX = (r32((uint32_t)(0x10b30be4)));
  /* 10b13693 push eax */
  push32((uint32_t)(EAX));
  /* 10b13694 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b13697 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13698 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1369b push edx */
  push32((uint32_t)(EDX));
  /* 10b1369c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1369f push eax */
  push32((uint32_t)(EAX));
  /* 10b136a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b136a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b136a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b136a6 mov edx, dword ptr [0x10b30e84] */
  EDX = (r32((uint32_t)(0x10b30e84)));
  /* 10b136ac push edx */
  push32((uint32_t)(EDX));
  /* 10b136ad call 0x10b13780 */
  push32(0x10b136b2u); f_10b13780();
  /* 10b136b2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b136b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b136b8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b136bc jne 0x10b136c5 */
  if (!C.zf) goto L_10b136c5;
  /* 10b136be mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10b136c3 jmp 0x10b136cb */
  goto L_10b136cb;
L_10b136c5:;
  /* 10b136c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b136c8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10b136cb:;
  /* 10b136cb mov esp, ebp */
  ESP = (EBP);
  /* 10b136cd pop ebp */
  EBP = (pop32());
  /* 10b136ce ret  */
  ESPCHK(0x10b13680u, _esp0);
  ESP += 4; return;
}

/* FUN_100136d0 @ 0x10b136d0 (174 bytes, 66 insns) */
void f_10b136d0(void) {
  FTRACE(0x10b136d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b136d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b136d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b136d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b136d6 mov eax, dword ptr [0x10b2f534] */
  EAX = (r32((uint32_t)(0x10b2f534)));
  /* 10b136db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b136de:;
  /* 10b136de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b136e1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b136e4 je 0x10b13778 */
  if (C.zf) goto L_10b13778;
  /* 10b136ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10b136ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10b136ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10b136f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b136f2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b136f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b136f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b136f9 push eax */
  push32((uint32_t)(EAX));
  /* 10b136fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10b136fc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b136fe call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b13704u);
  /* 10b13704 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b13707 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1370b jne 0x10b13712 */
  if (!C.zf) goto L_10b13712;
  /* 10b1370d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b13710 jmp 0x10b1377a */
  goto L_10b1377a;
L_10b13712:;
  /* 10b13712 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10b13714 push 0x10b2bac4 */
  push32((uint32_t)(0x10b2bac4u));
  /* 10b13719 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b1371b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b1371e push ecx */
  push32((uint32_t)(ECX));
  /* 10b1371f call 0x10b03bd0 */
  push32(0x10b13724u); f_10b03bd0();
  /* 10b13724 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13727 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b1372a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1372e jne 0x10b13735 */
  if (!C.zf) goto L_10b13735;
  /* 10b13730 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b13733 jmp 0x10b1377a */
  goto L_10b1377a;
L_10b13735:;
  /* 10b13735 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13737 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13739 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b1373c push edx */
  push32((uint32_t)(EDX));
  /* 10b1373d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13740 push eax */
  push32((uint32_t)(EAX));
  /* 10b13741 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b13743 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13746 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b13748 push edx */
  push32((uint32_t)(EDX));
  /* 10b13749 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b1374b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b1374d call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b13753u);
  /* 10b13753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b13755 jne 0x10b1375c */
  if (!C.zf) goto L_10b1375c;
  /* 10b13757 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b1375a jmp 0x10b1377a */
  goto L_10b1377a;
L_10b1375c:;
  /* 10b1375c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b1375e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13761 push eax */
  push32((uint32_t)(EAX));
  /* 10b13762 call 0x10b13bd0 */
  push32(0x10b13767u); f_10b13bd0();
  /* 10b13767 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1376a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1376d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13770 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b13773 jmp 0x10b136de */
  goto L_10b136de;
L_10b13778:;
  /* 10b13778 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b1377a:;
  /* 10b1377a mov esp, ebp */
  ESP = (EBP);
  /* 10b1377c pop ebp */
  EBP = (pop32());
  /* 10b1377d ret  */
  ESPCHK(0x10b136d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013780 @ 0x10b13780 (970 bytes, 340 insns) */
void f_10b13780(void) {
  FTRACE(0x10b13780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13780 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13781 mov ebp, esp */
  EBP = (ESP);
  /* 10b13783 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b13785 push 0x10b2bb18 */
  push32((uint32_t)(0x10b2bb18u));
  /* 10b1378a push 0x10b0ccd8 */
  push32((uint32_t)(0x10b0ccd8u));
  /* 10b1378f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b13795 push eax */
  push32((uint32_t)(EAX));
  /* 10b13796 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b1379d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b137a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10b137a1 push esi */
  push32((uint32_t)(ESI));
  /* 10b137a2 push edi */
  push32((uint32_t)(EDI));
  /* 10b137a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b137a6 cmp dword ptr [0x10b2f874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b137ad jne 0x10b13806 */
  if (!C.zf) goto L_10b13806;
  /* 10b137af push 1 */
  push32((uint32_t)(0x1u));
  /* 10b137b1 push 0x10b2b174 */
  push32((uint32_t)(0x10b2b174u));
  /* 10b137b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b137b8 push 0x10b2b174 */
  push32((uint32_t)(0x10b2b174u));
  /* 10b137bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b137bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10b137c1 call dword ptr [0x10b322a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322a0))), 0x10b137c7u);
  /* 10b137c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b137c9 je 0x10b137d7 */
  if (C.zf) goto L_10b137d7;
  /* 10b137cb mov dword ptr [0x10b2f874], 1 */
  w32((uint32_t)(0x10b2f874), (0x1u));
  /* 10b137d5 jmp 0x10b13806 */
  goto L_10b13806;
L_10b137d7:;
  /* 10b137d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b137d9 push 0x10b2b170 */
  push32((uint32_t)(0x10b2b170u));
  /* 10b137de push 1 */
  push32((uint32_t)(0x1u));
  /* 10b137e0 push 0x10b2b170 */
  push32((uint32_t)(0x10b2b170u));
  /* 10b137e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b137e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b137e9 call dword ptr [0x10b322ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ac))), 0x10b137efu);
  /* 10b137ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b137f1 je 0x10b137ff */
  if (C.zf) goto L_10b137ff;
  /* 10b137f3 mov dword ptr [0x10b2f874], 2 */
  w32((uint32_t)(0x10b2f874), (0x2u));
  /* 10b137fd jmp 0x10b13806 */
  goto L_10b13806;
L_10b137ff:;
  /* 10b137ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13801 jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13806:;
  /* 10b13806 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1380a jle 0x10b1381f */
  if ((C.zf||C.sf!=C.of)) goto L_10b1381f;
  /* 10b1380c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1380f push eax */
  push32((uint32_t)(EAX));
  /* 10b13810 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b13813 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13814 call 0x10b13b80 */
  push32(0x10b13819u); f_10b13b80();
  /* 10b13819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1381c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10b1381f:;
  /* 10b1381f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13823 jle 0x10b13838 */
  if ((C.zf||C.sf!=C.of)) goto L_10b13838;
  /* 10b13825 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b13828 push edx */
  push32((uint32_t)(EDX));
  /* 10b13829 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b1382c push eax */
  push32((uint32_t)(EAX));
  /* 10b1382d call 0x10b13b80 */
  push32(0x10b13832u); f_10b13b80();
  /* 10b13832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13835 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10b13838:;
  /* 10b13838 cmp dword ptr [0x10b2f874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1383f jne 0x10b13864 */
  if (!C.zf) goto L_10b13864;
  /* 10b13841 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b13844 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13845 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b13848 push edx */
  push32((uint32_t)(EDX));
  /* 10b13849 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1384c push eax */
  push32((uint32_t)(EAX));
  /* 10b1384d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b13850 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13851 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13854 push edx */
  push32((uint32_t)(EDX));
  /* 10b13855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13858 push eax */
  push32((uint32_t)(EAX));
  /* 10b13859 call dword ptr [0x10b322ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ac))), 0x10b1385fu);
  /* 10b1385f jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13864:;
  /* 10b13864 cmp dword ptr [0x10b2f874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1386b jne 0x10b13b62 */
  if (!C.zf) goto L_10b13b62;
  /* 10b13871 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13875 jne 0x10b13880 */
  if (!C.zf) goto L_10b13880;
  /* 10b13877 mov ecx, dword ptr [0x10b2f720] */
  ECX = (r32((uint32_t)(0x10b2f720)));
  /* 10b1387d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10b13880:;
  /* 10b13880 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13884 je 0x10b13890 */
  if (C.zf) goto L_10b13890;
  /* 10b13886 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1388a jne 0x10b13a0c */
  if (!C.zf) goto L_10b13a0c;
L_10b13890:;
  /* 10b13890 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b13893 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13896 jne 0x10b138a2 */
  if (!C.zf) goto L_10b138a2;
  /* 10b13898 mov eax, 2 */
  EAX = (0x2u);
  /* 10b1389d jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b138a2:;
  /* 10b138a2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b138a6 jle 0x10b138b2 */
  if ((C.zf||C.sf!=C.of)) goto L_10b138b2;
  /* 10b138a8 mov eax, 1 */
  EAX = (0x1u);
  /* 10b138ad jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b138b2:;
  /* 10b138b2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b138b6 jle 0x10b138c2 */
  if ((C.zf||C.sf!=C.of)) goto L_10b138c2;
  /* 10b138b8 mov eax, 3 */
  EAX = (0x3u);
  /* 10b138bd jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b138c2:;
  /* 10b138c2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10b138c5 push eax */
  push32((uint32_t)(EAX));
  /* 10b138c6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b138c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b138ca call dword ptr [0x10b322f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322f8))), 0x10b138d0u);
  /* 10b138d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b138d2 jne 0x10b138db */
  if (!C.zf) goto L_10b138db;
  /* 10b138d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b138d6 jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b138db:;
  /* 10b138db cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b138df jne 0x10b138e7 */
  if (!C.zf) goto L_10b138e7;
  /* 10b138e1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b138e5 je 0x10b13914 */
  if (C.zf) goto L_10b13914;
L_10b138e7:;
  /* 10b138e7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b138eb jne 0x10b138f3 */
  if (!C.zf) goto L_10b138f3;
  /* 10b138ed cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b138f1 je 0x10b13914 */
  if (C.zf) goto L_10b13914;
L_10b138f3:;
  /* 10b138f3 push 0x10b2bad8 */
  push32((uint32_t)(0x10b2bad8u));
  /* 10b138f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b138fa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10b138ff push 0x10b2bad0 */
  push32((uint32_t)(0x10b2bad0u));
  /* 10b13904 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13906 call 0x10b02c90 */
  push32(0x10b1390bu); f_10b02c90();
  /* 10b1390b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1390e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13911 jne 0x10b13914 */
  if (!C.zf) goto L_10b13914;
  /* 10b13913 int3  */
  x86_unimpl("int3 @ 0x10b13913");
L_10b13914:;
  /* 10b13914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b13916 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b13918 jne 0x10b138db */
  if (!C.zf) goto L_10b138db;
  /* 10b1391a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1391e jle 0x10b13993 */
  if ((C.zf||C.sf!=C.of)) goto L_10b13993;
  /* 10b13920 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13924 jae 0x10b13930 */
  if (!C.cf) goto L_10b13930;
  /* 10b13926 mov eax, 3 */
  EAX = (0x3u);
  /* 10b1392b jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13930:;
  /* 10b13930 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10b13933 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10b13936 jmp 0x10b13941 */
  goto L_10b13941;
L_10b13938:;
  /* 10b13938 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b1393b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1393e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10b13941:;
  /* 10b13941 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b13944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13946 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b13948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b1394a je 0x10b13989 */
  if (C.zf) goto L_10b13989;
  /* 10b1394c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b1394f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b13951 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b13954 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b13956 je 0x10b13989 */
  if (C.zf) goto L_10b13989;
  /* 10b13958 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1395b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b1395d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b1395f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b13962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13964 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b13966 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13968 jl 0x10b13987 */
  if ((C.sf!=C.of)) goto L_10b13987;
  /* 10b1396a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1396d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b1396f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b13971 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b13974 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b13976 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b13979 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1397b jg 0x10b13987 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b13987;
  /* 10b1397d mov eax, 2 */
  EAX = (0x2u);
  /* 10b13982 jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13987:;
  /* 10b13987 jmp 0x10b13938 */
  goto L_10b13938;
L_10b13989:;
  /* 10b13989 mov eax, 3 */
  EAX = (0x3u);
  /* 10b1398e jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13993:;
  /* 10b13993 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13997 jle 0x10b13a0c */
  if ((C.zf||C.sf!=C.of)) goto L_10b13a0c;
  /* 10b13999 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1399d jae 0x10b139a9 */
  if (!C.cf) goto L_10b139a9;
  /* 10b1399f mov eax, 1 */
  EAX = (0x1u);
  /* 10b139a4 jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b139a9:;
  /* 10b139a9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10b139ac mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10b139af jmp 0x10b139ba */
  goto L_10b139ba;
L_10b139b1:;
  /* 10b139b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b139b4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b139b7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10b139ba:;
  /* 10b139ba mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b139bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b139bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b139c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b139c3 je 0x10b13a02 */
  if (C.zf) goto L_10b13a02;
  /* 10b139c5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b139c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b139ca mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b139cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b139cf je 0x10b13a02 */
  if (C.zf) goto L_10b13a02;
  /* 10b139d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b139d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b139d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b139d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b139db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b139dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b139df cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b139e1 jl 0x10b13a00 */
  if ((C.sf!=C.of)) goto L_10b13a00;
  /* 10b139e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b139e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b139e8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b139ea mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10b139ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b139ef mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b139f2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b139f4 jg 0x10b13a00 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b13a00;
  /* 10b139f6 mov eax, 2 */
  EAX = (0x2u);
  /* 10b139fb jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13a00:;
  /* 10b13a00 jmp 0x10b139b1 */
  goto L_10b139b1;
L_10b13a02:;
  /* 10b13a02 mov eax, 1 */
  EAX = (0x1u);
  /* 10b13a07 jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13a0c:;
  /* 10b13a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13a10 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b13a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13a14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b13a17 push edx */
  push32((uint32_t)(EDX));
  /* 10b13a18 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b13a1a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b13a1d push eax */
  push32((uint32_t)(EAX));
  /* 10b13a1e call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b13a24u);
  /* 10b13a24 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b13a27 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13a2b jne 0x10b13a34 */
  if (!C.zf) goto L_10b13a34;
  /* 10b13a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13a2f jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13a34:;
  /* 10b13a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b13a3b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b13a3e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b13a40 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13a43 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b13a45 call 0x10b06d70 */
  push32(0x10b13a4au); f_10b06d70();
  /* 10b13a4a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10b13a4d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b13a50 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10b13a53 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b13a56 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b13a5d jmp 0x10b13a76 */
  goto L_10b13a76;
  /* 10b13a5f mov eax, 1 */
  EAX = (0x1u);
  /* 10b13a64 ret  */
  ESPCHK(0x10b13780u, _esp0);
  ESP += 4; return;
  /* 10b13a65 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b13a68 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b13a6f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b13a76:;
  /* 10b13a76 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13a7a jne 0x10b13a83 */
  if (!C.zf) goto L_10b13a83;
  /* 10b13a7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13a7e jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13a83:;
  /* 10b13a83 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b13a86 push edx */
  push32((uint32_t)(EDX));
  /* 10b13a87 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b13a8a push eax */
  push32((uint32_t)(EAX));
  /* 10b13a8b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b13a8e push ecx */
  push32((uint32_t)(ECX));
  /* 10b13a8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b13a92 push edx */
  push32((uint32_t)(EDX));
  /* 10b13a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b13a95 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b13a98 push eax */
  push32((uint32_t)(EAX));
  /* 10b13a99 call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b13a9fu);
  /* 10b13a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b13aa1 jne 0x10b13aaa */
  if (!C.zf) goto L_10b13aaa;
  /* 10b13aa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13aa5 jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13aaa:;
  /* 10b13aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13aac push 0 */
  push32((uint32_t)(0x0u));
  /* 10b13aae mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b13ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13ab2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b13ab5 push edx */
  push32((uint32_t)(EDX));
  /* 10b13ab6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b13ab8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b13abb push eax */
  push32((uint32_t)(EAX));
  /* 10b13abc call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b13ac2u);
  /* 10b13ac2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b13ac5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13ac9 jne 0x10b13ad2 */
  if (!C.zf) goto L_10b13ad2;
  /* 10b13acb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13acd jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13ad2:;
  /* 10b13ad2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b13ad9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b13adc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b13ade add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13ae1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b13ae3 call 0x10b06d70 */
  push32(0x10b13ae8u); f_10b06d70();
  /* 10b13ae8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10b13aeb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b13aee mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10b13af1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10b13af4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b13afb jmp 0x10b13b14 */
  goto L_10b13b14;
  /* 10b13afd mov eax, 1 */
  EAX = (0x1u);
  /* 10b13b02 ret  */
  ESPCHK(0x10b13780u, _esp0);
  ESP += 4; return;
  /* 10b13b03 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b13b06 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10b13b0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b13b14:;
  /* 10b13b14 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13b18 jne 0x10b13b1e */
  if (!C.zf) goto L_10b13b1e;
  /* 10b13b1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13b1c jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13b1e:;
  /* 10b13b1e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b13b21 push edx */
  push32((uint32_t)(EDX));
  /* 10b13b22 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b13b25 push eax */
  push32((uint32_t)(EAX));
  /* 10b13b26 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b13b29 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13b2a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b13b2d push edx */
  push32((uint32_t)(EDX));
  /* 10b13b2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b13b30 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b13b33 push eax */
  push32((uint32_t)(EAX));
  /* 10b13b34 call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b13b3au);
  /* 10b13b3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b13b3c jne 0x10b13b42 */
  if (!C.zf) goto L_10b13b42;
  /* 10b13b3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13b40 jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13b42:;
  /* 10b13b42 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b13b45 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13b46 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b13b49 push edx */
  push32((uint32_t)(EDX));
  /* 10b13b4a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b13b4d push eax */
  push32((uint32_t)(EAX));
  /* 10b13b4e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b13b51 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13b52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13b55 push edx */
  push32((uint32_t)(EDX));
  /* 10b13b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13b59 push eax */
  push32((uint32_t)(EAX));
  /* 10b13b5a call dword ptr [0x10b322a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322a0))), 0x10b13b60u);
  /* 10b13b60 jmp 0x10b13b64 */
  goto L_10b13b64;
L_10b13b62:;
  /* 10b13b62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b13b64:;
  /* 10b13b64 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10b13b67 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b13b6a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b13b71 pop edi */
  EDI = (pop32());
  /* 10b13b72 pop esi */
  ESI = (pop32());
  /* 10b13b73 pop ebx */
  EBX = (pop32());
  /* 10b13b74 mov esp, ebp */
  ESP = (EBP);
  /* 10b13b76 pop ebp */
  EBP = (pop32());
  /* 10b13b77 ret  */
  ESPCHK(0x10b13780u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x10b13b80 (80 bytes, 32 insns) */
void f_10b13b80(void) {
  FTRACE(0x10b13b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13b81 mov ebp, esp */
  EBP = (ESP);
  /* 10b13b83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13b86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13b89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b13b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13b8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b13b92:;
  /* 10b13b92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13b95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13b98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13b9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b13b9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b13ba0 je 0x10b13bb7 */
  if (C.zf) goto L_10b13bb7;
  /* 10b13ba2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13ba5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b13ba8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b13baa je 0x10b13bb7 */
  if (C.zf) goto L_10b13bb7;
  /* 10b13bac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13baf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13bb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b13bb5 jmp 0x10b13b92 */
  goto L_10b13b92;
L_10b13bb7:;
  /* 10b13bb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13bba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b13bbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b13bbf jne 0x10b13bc9 */
  if (!C.zf) goto L_10b13bc9;
  /* 10b13bc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13bc4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13bc7 jmp 0x10b13bcc */
  goto L_10b13bcc;
L_10b13bc9:;
  /* 10b13bc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10b13bcc:;
  /* 10b13bcc mov esp, ebp */
  ESP = (EBP);
  /* 10b13bce pop ebp */
  EBP = (pop32());
  /* 10b13bcf ret  */
  ESPCHK(0x10b13b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bd0 @ 0x10b13bd0 (736 bytes, 224 insns) */
void f_10b13bd0(void) {
  FTRACE(0x10b13bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b13bd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13bd6 push esi */
  push32((uint32_t)(ESI));
  /* 10b13bd7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13bdb je 0x10b13bfc */
  if (C.zf) goto L_10b13bfc;
  /* 10b13bdd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10b13bdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13be2 push eax */
  push32((uint32_t)(EAX));
  /* 10b13be3 call 0x10b14020 */
  push32(0x10b13be8u); f_10b14020();
  /* 10b13be8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13beb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b13bee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13bf2 je 0x10b13bfc */
  if (C.zf) goto L_10b13bfc;
  /* 10b13bf4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13bf7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13bfa jne 0x10b13c04 */
  if (!C.zf) goto L_10b13c04;
L_10b13bfc:;
  /* 10b13bfc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b13bff jmp 0x10b13eab */
  goto L_10b13eab;
L_10b13c04:;
  /* 10b13c04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b13c07 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b13c0b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b13c0d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13c0f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b13c10 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b13c13 mov ecx, dword ptr [0x10b2f52c] */
  ECX = (r32((uint32_t)(0x10b2f52c)));
  /* 10b13c19 cmp ecx, dword ptr [0x10b2f530] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b2f530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13c1f jne 0x10b13c35 */
  if (!C.zf) goto L_10b13c35;
  /* 10b13c21 mov edx, dword ptr [0x10b2f52c] */
  EDX = (r32((uint32_t)(0x10b2f52c)));
  /* 10b13c27 push edx */
  push32((uint32_t)(EDX));
  /* 10b13c28 call 0x10b13f30 */
  push32(0x10b13c2du); f_10b13f30();
  /* 10b13c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13c30 mov dword ptr [0x10b2f52c], eax */
  w32((uint32_t)(0x10b2f52c), (EAX));
L_10b13c35:;
  /* 10b13c35 cmp dword ptr [0x10b2f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13c3c jne 0x10b13cf5 */
  if (!C.zf) goto L_10b13cf5;
  /* 10b13c42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13c46 je 0x10b13c67 */
  if (C.zf) goto L_10b13c67;
  /* 10b13c48 cmp dword ptr [0x10b2f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13c4f je 0x10b13c67 */
  if (C.zf) goto L_10b13c67;
  /* 10b13c51 call 0x10b136d0 */
  push32(0x10b13c56u); f_10b136d0();
  /* 10b13c56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b13c58 je 0x10b13c62 */
  if (C.zf) goto L_10b13c62;
  /* 10b13c5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b13c5d jmp 0x10b13eab */
  goto L_10b13eab;
L_10b13c62:;
  /* 10b13c62 jmp 0x10b13cf5 */
  goto L_10b13cf5;
L_10b13c67:;
  /* 10b13c67 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13c6b je 0x10b13c74 */
  if (C.zf) goto L_10b13c74;
  /* 10b13c6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13c6f jmp 0x10b13eab */
  goto L_10b13eab;
L_10b13c74:;
  /* 10b13c74 cmp dword ptr [0x10b2f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13c7b jne 0x10b13cb4 */
  if (!C.zf) goto L_10b13cb4;
  /* 10b13c7d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10b13c82 push 0x10b2bb30 */
  push32((uint32_t)(0x10b2bb30u));
  /* 10b13c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13c89 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b13c8b call 0x10b03bd0 */
  push32(0x10b13c90u); f_10b03bd0();
  /* 10b13c90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13c93 mov dword ptr [0x10b2f52c], eax */
  w32((uint32_t)(0x10b2f52c), (EAX));
  /* 10b13c98 cmp dword ptr [0x10b2f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13c9f jne 0x10b13ca9 */
  if (!C.zf) goto L_10b13ca9;
  /* 10b13ca1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b13ca4 jmp 0x10b13eab */
  goto L_10b13eab;
L_10b13ca9:;
  /* 10b13ca9 mov eax, dword ptr [0x10b2f52c] */
  EAX = (r32((uint32_t)(0x10b2f52c)));
  /* 10b13cae mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10b13cb4:;
  /* 10b13cb4 cmp dword ptr [0x10b2f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13cbb jne 0x10b13cf5 */
  if (!C.zf) goto L_10b13cf5;
  /* 10b13cbd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10b13cc2 push 0x10b2bb30 */
  push32((uint32_t)(0x10b2bb30u));
  /* 10b13cc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13cc9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b13ccb call 0x10b03bd0 */
  push32(0x10b13cd0u); f_10b03bd0();
  /* 10b13cd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13cd3 mov dword ptr [0x10b2f534], eax */
  w32((uint32_t)(0x10b2f534), (EAX));
  /* 10b13cd8 cmp dword ptr [0x10b2f534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13cdf jne 0x10b13ce9 */
  if (!C.zf) goto L_10b13ce9;
  /* 10b13ce1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b13ce4 jmp 0x10b13eab */
  goto L_10b13eab;
L_10b13ce9:;
  /* 10b13ce9 mov ecx, dword ptr [0x10b2f534] */
  ECX = (r32((uint32_t)(0x10b2f534)));
  /* 10b13cef mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10b13cf5:;
  /* 10b13cf5 mov edx, dword ptr [0x10b2f52c] */
  EDX = (r32((uint32_t)(0x10b2f52c)));
  /* 10b13cfb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b13cfe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b13d01 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13d04 push eax */
  push32((uint32_t)(EAX));
  /* 10b13d05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13d08 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13d09 call 0x10b13eb0 */
  push32(0x10b13d0eu); f_10b13eb0();
  /* 10b13d0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13d11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b13d14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13d18 jl 0x10b13db1 */
  if ((C.sf!=C.of)) goto L_10b13db1;
  /* 10b13d1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13d21 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13d24 je 0x10b13db1 */
  if (C.zf) goto L_10b13db1;
  /* 10b13d2a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13d2e je 0x10b13da3 */
  if (C.zf) goto L_10b13da3;
  /* 10b13d30 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13d32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13d35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13d38 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b13d3b push edx */
  push32((uint32_t)(EDX));
  /* 10b13d3c call 0x10b04660 */
  push32(0x10b13d41u); f_10b04660();
  /* 10b13d41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13d44 jmp 0x10b13d4f */
  goto L_10b13d4f;
L_10b13d46:;
  /* 10b13d46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13d4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b13d4f:;
  /* 10b13d4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13d52 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13d55 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13d59 je 0x10b13d70 */
  if (C.zf) goto L_10b13d70;
  /* 10b13d5b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13d5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13d61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13d64 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13d67 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10b13d6b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10b13d6e jmp 0x10b13d46 */
  goto L_10b13d46;
L_10b13d70:;
  /* 10b13d70 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10b13d75 push 0x10b2bb30 */
  push32((uint32_t)(0x10b2bb30u));
  /* 10b13d7a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13d7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13d7f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b13d82 push eax */
  push32((uint32_t)(EAX));
  /* 10b13d83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13d86 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13d87 call 0x10b04060 */
  push32(0x10b13d8cu); f_10b04060();
  /* 10b13d8c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13d8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b13d92 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13d96 je 0x10b13da1 */
  if (C.zf) goto L_10b13da1;
  /* 10b13d98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13d9b mov dword ptr [0x10b2f52c], edx */
  w32((uint32_t)(0x10b2f52c), (EDX));
L_10b13da1:;
  /* 10b13da1 jmp 0x10b13daf */
  goto L_10b13daf;
L_10b13da3:;
  /* 10b13da3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13da6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13da9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13dac mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10b13daf:;
  /* 10b13daf jmp 0x10b13e24 */
  goto L_10b13e24;
L_10b13db1:;
  /* 10b13db1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13db5 jne 0x10b13e1d */
  if (!C.zf) goto L_10b13e1d;
  /* 10b13db7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13dbb jge 0x10b13dc5 */
  if ((C.sf==C.of)) goto L_10b13dc5;
  /* 10b13dbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13dc0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b13dc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b13dc5:;
  /* 10b13dc5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10b13dca push 0x10b2bb30 */
  push32((uint32_t)(0x10b2bb30u));
  /* 10b13dcf push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13dd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13dd4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10b13ddb push edx */
  push32((uint32_t)(EDX));
  /* 10b13ddc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13ddf push eax */
  push32((uint32_t)(EAX));
  /* 10b13de0 call 0x10b04060 */
  push32(0x10b13de5u); f_10b04060();
  /* 10b13de5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13de8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b13deb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13def jne 0x10b13df9 */
  if (!C.zf) goto L_10b13df9;
  /* 10b13df1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b13df4 jmp 0x10b13eab */
  goto L_10b13eab;
L_10b13df9:;
  /* 10b13df9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13dfc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13dff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13e02 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10b13e05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13e08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13e0b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10b13e13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13e16 mov dword ptr [0x10b2f52c], eax */
  w32((uint32_t)(0x10b2f52c), (EAX));
  /* 10b13e1b jmp 0x10b13e24 */
  goto L_10b13e24;
L_10b13e1d:;
  /* 10b13e1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13e1f jmp 0x10b13eab */
  goto L_10b13eab;
L_10b13e24:;
  /* 10b13e24 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13e28 je 0x10b13ea9 */
  if (C.zf) goto L_10b13ea9;
  /* 10b13e2a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10b13e2f push 0x10b2bb30 */
  push32((uint32_t)(0x10b2bb30u));
  /* 10b13e34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13e36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13e39 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13e3a call 0x10b06a00 */
  push32(0x10b13e3fu); f_10b06a00();
  /* 10b13e3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13e42 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13e45 push eax */
  push32((uint32_t)(EAX));
  /* 10b13e46 call 0x10b03bd0 */
  push32(0x10b13e4bu); f_10b03bd0();
  /* 10b13e4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13e4e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b13e51 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13e55 je 0x10b13ea9 */
  if (C.zf) goto L_10b13ea9;
  /* 10b13e57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13e5a push edx */
  push32((uint32_t)(EDX));
  /* 10b13e5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b13e5e push eax */
  push32((uint32_t)(EAX));
  /* 10b13e5f call 0x10b06b80 */
  push32(0x10b13e64u); f_10b06b80();
  /* 10b13e64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13e67 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b13e6a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13e6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b13e70 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13e72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b13e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13e78 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b13e7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13e7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13e81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b13e84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b13e87 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b13e89 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13e8b not edx */
  EDX = (~(EDX));
  /* 10b13e8d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10b13e90 push edx */
  push32((uint32_t)(EDX));
  /* 10b13e91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b13e94 push eax */
  push32((uint32_t)(EAX));
  /* 10b13e95 call dword ptr [0x10b3229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3229c))), 0x10b13e9bu);
  /* 10b13e9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13e9d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b13ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13ea1 call 0x10b04660 */
  push32(0x10b13ea6u); f_10b04660();
  /* 10b13ea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b13ea9:;
  /* 10b13ea9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b13eab:;
  /* 10b13eab pop esi */
  ESI = (pop32());
  /* 10b13eac mov esp, ebp */
  ESP = (EBP);
  /* 10b13eae pop ebp */
  EBP = (pop32());
  /* 10b13eaf ret  */
  ESPCHK(0x10b13bd0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10b13eb0 (124 bytes, 47 insns) */
void f_10b13eb0(void) {
  FTRACE(0x10b13eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10b13eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b13eb4 mov eax, dword ptr [0x10b2f52c] */
  EAX = (r32((uint32_t)(0x10b2f52c)));
  /* 10b13eb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b13ebc jmp 0x10b13ec7 */
  goto L_10b13ec7;
L_10b13ebe:;
  /* 10b13ebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13ec1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13ec4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b13ec7:;
  /* 10b13ec7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13eca cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13ecd je 0x10b13f1a */
  if (C.zf) goto L_10b13f1a;
  /* 10b13ecf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13ed2 push eax */
  push32((uint32_t)(EAX));
  /* 10b13ed3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13ed6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b13ed8 push edx */
  push32((uint32_t)(EDX));
  /* 10b13ed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13edc push eax */
  push32((uint32_t)(EAX));
  /* 10b13edd call 0x10b13680 */
  push32(0x10b13ee2u); f_10b13680();
  /* 10b13ee2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13ee5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b13ee7 jne 0x10b13f18 */
  if (!C.zf) goto L_10b13f18;
  /* 10b13ee9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13eec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b13eee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13ef1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10b13ef5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13ef8 je 0x10b13f0a */
  if (C.zf) goto L_10b13f0a;
  /* 10b13efa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13efd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b13eff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b13f02 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10b13f06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b13f08 jne 0x10b13f18 */
  if (!C.zf) goto L_10b13f18;
L_10b13f0a:;
  /* 10b13f0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13f0d sub eax, dword ptr [0x10b2f52c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2f52c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13f13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b13f16 jmp 0x10b13f28 */
  goto L_10b13f28;
L_10b13f18:;
  /* 10b13f18 jmp 0x10b13ebe */
  goto L_10b13ebe;
L_10b13f1a:;
  /* 10b13f1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b13f1d sub eax, dword ptr [0x10b2f52c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2f52c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13f23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b13f26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10b13f28:;
  /* 10b13f28 mov esp, ebp */
  ESP = (EBP);
  /* 10b13f2a pop ebp */
  EBP = (pop32());
  /* 10b13f2b ret  */
  ESPCHK(0x10b13eb0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10b13f30 (238 bytes, 80 insns) */
void f_10b13f30(void) {
  FTRACE(0x10b13f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b13f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b13f31 mov ebp, esp */
  EBP = (ESP);
  /* 10b13f33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b13f36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b13f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13f40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b13f43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13f47 jne 0x10b13f50 */
  if (!C.zf) goto L_10b13f50;
  /* 10b13f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b13f4b jmp 0x10b1401a */
  goto L_10b1401a;
L_10b13f50:;
  /* 10b13f50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13f53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b13f55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13f58 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13f5b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b13f5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b13f60 je 0x10b13f6d */
  if (C.zf) goto L_10b13f6d;
  /* 10b13f62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b13f65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13f68 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b13f6b jmp 0x10b13f50 */
  goto L_10b13f50;
L_10b13f6d:;
  /* 10b13f6d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10b13f72 push 0x10b2bb30 */
  push32((uint32_t)(0x10b2bb30u));
  /* 10b13f77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13f79 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b13f7c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10b13f83 push eax */
  push32((uint32_t)(EAX));
  /* 10b13f84 call 0x10b03bd0 */
  push32(0x10b13f89u); f_10b03bd0();
  /* 10b13f89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13f8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b13f8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13f92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b13f95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13f99 jne 0x10b13fa5 */
  if (!C.zf) goto L_10b13fa5;
  /* 10b13f9b push 9 */
  push32((uint32_t)(0x9u));
  /* 10b13f9d call 0x10b02b40 */
  push32(0x10b13fa2u); f_10b02b40();
  /* 10b13fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b13fa5:;
  /* 10b13fa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b13fa8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b13fab:;
  /* 10b13fab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13fae cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13fb1 je 0x10b1400e */
  if (C.zf) goto L_10b1400e;
  /* 10b13fb3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10b13fb8 push 0x10b2bb30 */
  push32((uint32_t)(0x10b2bb30u));
  /* 10b13fbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b13fbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13fc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b13fc4 push edx */
  push32((uint32_t)(EDX));
  /* 10b13fc5 call 0x10b06a00 */
  push32(0x10b13fcau); f_10b06a00();
  /* 10b13fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13fcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13fd0 push eax */
  push32((uint32_t)(EAX));
  /* 10b13fd1 call 0x10b03bd0 */
  push32(0x10b13fd6u); f_10b03bd0();
  /* 10b13fd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b13fd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13fdc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b13fde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13fe1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b13fe4 je 0x10b13ffa */
  if (C.zf) goto L_10b13ffa;
  /* 10b13fe6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13fe9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b13feb push ecx */
  push32((uint32_t)(ECX));
  /* 10b13fec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b13fef mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b13ff1 push eax */
  push32((uint32_t)(EAX));
  /* 10b13ff2 call 0x10b06b80 */
  push32(0x10b13ff7u); f_10b06b80();
  /* 10b13ff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b13ffa:;
  /* 10b13ffa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b13ffd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b14000 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b14003 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b14006 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b14009 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b1400c jmp 0x10b13fab */
  goto L_10b13fab;
L_10b1400e:;
  /* 10b1400e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b14011 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b14017 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b1401a:;
  /* 10b1401a mov esp, ebp */
  ESP = (EBP);
  /* 10b1401c pop ebp */
  EBP = (pop32());
  /* 10b1401d ret  */
  ESPCHK(0x10b13f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014020 @ 0x10b14020 (237 bytes, 81 insns) */
void f_10b14020(void) {
  FTRACE(0x10b14020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b14020 push ebp */
  push32((uint32_t)(EBP));
  /* 10b14021 mov ebp, esp */
  EBP = (ESP);
  /* 10b14023 push ecx */
  push32((uint32_t)(ECX));
  /* 10b14024 cmp dword ptr [0x10b30c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b30c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1402b jne 0x10b14042 */
  if (!C.zf) goto L_10b14042;
  /* 10b1402d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b14030 push eax */
  push32((uint32_t)(EAX));
  /* 10b14031 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b14034 push ecx */
  push32((uint32_t)(ECX));
  /* 10b14035 call 0x10b14120 */
  push32(0x10b1403au); f_10b14120();
  /* 10b1403a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1403d jmp 0x10b14109 */
  goto L_10b14109;
L_10b14042:;
  /* 10b14042 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b14044 call 0x10b075d0 */
  push32(0x10b14049u); f_10b075d0();
  /* 10b14049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1404c jmp 0x10b14057 */
  goto L_10b14057;
L_10b1404e:;
  /* 10b1404e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b14051 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b14054 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10b14057:;
  /* 10b14057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1405a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10b1405e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10b14062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b14065 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b1406b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b1406d je 0x10b140eb */
  if (C.zf) goto L_10b140eb;
  /* 10b1406f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b14072 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b14077 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b14079 mov cl, byte ptr [eax + 0x10b30d81] */
  CL = (r8((uint32_t)(EAX + 0x10b30d81)));
  /* 10b1407f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b14082 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b14084 je 0x10b140d6 */
  if (C.zf) goto L_10b140d6;
  /* 10b14086 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b14089 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1408c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b1408f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b14092 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b14094 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b14096 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b14098 jne 0x10b140a8 */
  if (!C.zf) goto L_10b140a8;
  /* 10b1409a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b1409c call 0x10b07670 */
  push32(0x10b140a1u); f_10b07670();
  /* 10b140a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b140a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b140a6 jmp 0x10b14109 */
  goto L_10b14109;
L_10b140a8:;
  /* 10b140a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b140ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b140b1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10b140b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b140b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b140b9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b140bb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b140bd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b140c0 jne 0x10b140d4 */
  if (!C.zf) goto L_10b140d4;
  /* 10b140c2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b140c4 call 0x10b07670 */
  push32(0x10b140c9u); f_10b07670();
  /* 10b140c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b140cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b140cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b140d2 jmp 0x10b14109 */
  goto L_10b14109;
L_10b140d4:;
  /* 10b140d4 jmp 0x10b140e6 */
  goto L_10b140e6;
L_10b140d6:;
  /* 10b140d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b140d9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b140df cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b140e2 jne 0x10b140e6 */
  if (!C.zf) goto L_10b140e6;
  /* 10b140e4 jmp 0x10b140eb */
  goto L_10b140eb;
L_10b140e6:;
  /* 10b140e6 jmp 0x10b1404e */
  goto L_10b1404e;
L_10b140eb:;
  /* 10b140eb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b140ed call 0x10b07670 */
  push32(0x10b140f2u); f_10b07670();
  /* 10b140f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b140f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b140f8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b140fd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b14100 jne 0x10b14107 */
  if (!C.zf) goto L_10b14107;
  /* 10b14102 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b14105 jmp 0x10b14109 */
  goto L_10b14109;
L_10b14107:;
  /* 10b14107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b14109:;
  /* 10b14109 mov esp, ebp */
  ESP = (EBP);
  /* 10b1410b pop ebp */
  EBP = (pop32());
  /* 10b1410c ret  */
  ESPCHK(0x10b14020u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10b14120 (193 bytes, 87 insns) */
void f_10b14120(void) {
  FTRACE(0x10b14120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b14120 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b14122 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10b14126 push ebx */
  push32((uint32_t)(EBX));
  /* 10b14127 mov ebx, eax */
  EBX = (EAX);
  /* 10b14129 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b1412c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b14130 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10b14136 je 0x10b1414b */
  if (C.zf) goto L_10b1414b;
L_10b14138:;
  /* 10b14138 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10b1413a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b1413b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b1413d je 0x10b14110 */
  if (C.zf) { jmp_ind(0x10b14110u); return; }
  /* 10b1413f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10b14141 je 0x10b14194 */
  if (C.zf) goto L_10b14194;
  /* 10b14143 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10b14149 jne 0x10b14138 */
  if (!C.zf) goto L_10b14138;
L_10b1414b:;
  /* 10b1414b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10b1414d push edi */
  push32((uint32_t)(EDI));
  /* 10b1414e mov eax, ebx */
  EAX = (EBX);
  /* 10b14150 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10b14153 push esi */
  push32((uint32_t)(ESI));
  /* 10b14154 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10b14156:;
  /* 10b14156 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10b14158 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10b1415d mov eax, ecx */
  EAX = (ECX);
  /* 10b1415f mov esi, edi */
  ESI = (EDI);
  /* 10b14161 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10b14163 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b14165 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b14167 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b1416a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b1416d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10b1416f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10b14171 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b14174 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10b1417a jne 0x10b14198 */
  if (!C.zf) goto L_10b14198;
  /* 10b1417c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10b14181 je 0x10b14156 */
  if (C.zf) goto L_10b14156;
  /* 10b14183 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10b14188 jne 0x10b14192 */
  if (!C.zf) goto L_10b14192;
  /* 10b1418a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10b14190 jne 0x10b14156 */
  if (!C.zf) goto L_10b14156;
L_10b14192:;
  /* 10b14192 pop esi */
  ESI = (pop32());
  /* 10b14193 pop edi */
  EDI = (pop32());
L_10b14194:;
  /* 10b14194 pop ebx */
  EBX = (pop32());
  /* 10b14195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b14197 ret  */
  ESPCHK(0x10b14120u, _esp0);
  ESP += 4; return;
L_10b14198:;
  /* 10b14198 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10b1419b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b1419d je 0x10b141d5 */
  if (C.zf) goto L_10b141d5;
  /* 10b1419f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b141a1 je 0x10b14192 */
  if (C.zf) goto L_10b14192;
  /* 10b141a3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b141a5 je 0x10b141ce */
  if (C.zf) goto L_10b141ce;
  /* 10b141a7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b141a9 je 0x10b14192 */
  if (C.zf) goto L_10b14192;
  /* 10b141ab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b141ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b141b0 je 0x10b141c7 */
  if (C.zf) goto L_10b141c7;
  /* 10b141b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b141b4 je 0x10b14192 */
  if (C.zf) goto L_10b14192;
  /* 10b141b6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b141b8 je 0x10b141c0 */
  if (C.zf) goto L_10b141c0;
  /* 10b141ba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b141bc je 0x10b14192 */
  if (C.zf) goto L_10b14192;
  /* 10b141be jmp 0x10b14156 */
  goto L_10b14156;
L_10b141c0:;
  /* 10b141c0 pop esi */
  ESI = (pop32());
  /* 10b141c1 pop edi */
  EDI = (pop32());
  /* 10b141c2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10b141c5 pop ebx */
  EBX = (pop32());
  /* 10b141c6 ret  */
  ESPCHK(0x10b14120u, _esp0);
  ESP += 4; return;
L_10b141c7:;
  /* 10b141c7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10b141ca pop esi */
  ESI = (pop32());
  /* 10b141cb pop edi */
  EDI = (pop32());
  /* 10b141cc pop ebx */
  EBX = (pop32());
  /* 10b141cd ret  */
  ESPCHK(0x10b14120u, _esp0);
  ESP += 4; return;
L_10b141ce:;
  /* 10b141ce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10b141d1 pop esi */
  ESI = (pop32());
  /* 10b141d2 pop edi */
  EDI = (pop32());
  /* 10b141d3 pop ebx */
  EBX = (pop32());
  /* 10b141d4 ret  */
  ESPCHK(0x10b14120u, _esp0);
  ESP += 4; return;
L_10b141d5:;
  /* 10b141d5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10b141d8 pop esi */
  ESI = (pop32());
  /* 10b141d9 pop edi */
  EDI = (pop32());
  /* 10b141da pop ebx */
  EBX = (pop32());
  /* 10b141db ret  */
  ESPCHK(0x10b14120u, _esp0);
  ESP += 4; return;
  /* 10b141dc jmp dword ptr [0x10b32320] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b32320)))); return;
}

/* RtlUnwind @ 0x10b1432c (6 bytes, 1 insns) */
void f_10b1432c(void) {
  FTRACE(0x10b1432cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b1432c jmp dword ptr [0x10b322d4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b322d4)))); return;
}

