#include "recomp.h"

/* FUN_10017940 @ 0x12267940 (393 bytes, 123 insns) */
void f_12267940(void) {
  FTRACE(0x12267940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12267940 push ebp */
  push32((uint32_t)(EBP));
  /* 12267941 mov ebp, esp */
  EBP = (ESP);
  /* 12267943 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267946 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226794a jne 0x12267956 */
  if (!C.zf) goto L_12267956;
  /* 1226794c mov eax, dword ptr [0x12285c98] */
  EAX = (r32((uint32_t)(0x12285c98)));
  /* 12267951 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12267954 jmp 0x1226795c */
  goto L_1226795c;
L_12267956:;
  /* 12267956 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267959 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1226795c:;
  /* 1226795c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226795f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12267962 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267965 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12267968 push 0x12286b1c */
  push32((uint32_t)(0x12286b1cu));
  /* 1226796d call dword ptr [0x122893b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893b4))), 0x12267973u);
  /* 12267973 cmp dword ptr [0x12286b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226797a je 0x1226799a */
  if (C.zf) goto L_1226799a;
  /* 1226797c push 0x12286b1c */
  push32((uint32_t)(0x12286b1cu));
  /* 12267981 call dword ptr [0x122893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893a4))), 0x12267987u);
  /* 12267987 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12267989 call 0x1225e000 */
  push32(0x1226798eu); f_1225e000();
  /* 1226798e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267991 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12267998 jmp 0x122679a1 */
  goto L_122679a1;
L_1226799a:;
  /* 1226799a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122679a1:;
  /* 122679a1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122679a5 jbe 0x12267a92 */
  if ((C.cf||C.zf)) goto L_12267a92;
  /* 122679ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122679ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122679b0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 122679b3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122679b7 je 0x122679c1 */
  if (C.zf) goto L_122679c1;
  /* 122679b9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122679bd je 0x122679c6 */
  if (C.zf) goto L_122679c6;
  /* 122679bf jmp 0x12267a20 */
  goto L_12267a20;
L_122679c1:;
  /* 122679c1 jmp 0x12267a92 */
  goto L_12267a92;
L_122679c6:;
  /* 122679c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122679c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122679cc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 122679cf mov dword ptr [0x12286af8], 0 */
  w32((uint32_t)(0x12286af8), (0x0u));
  /* 122679d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122679dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122679df cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122679e2 jne 0x122679f7 */
  if (!C.zf) goto L_122679f7;
  /* 122679e4 mov dword ptr [0x12286af8], 1 */
  w32((uint32_t)(0x12286af8), (0x1u));
  /* 122679ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122679f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122679f4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_122679f7:;
  /* 122679f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122679fa push ecx */
  push32((uint32_t)(ECX));
  /* 122679fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 122679fe push edx */
  push32((uint32_t)(EDX));
  /* 122679ff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12267a02 push eax */
  push32((uint32_t)(EAX));
  /* 12267a03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267a06 push ecx */
  push32((uint32_t)(ECX));
  /* 12267a07 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267a0a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12267a0c push eax */
  push32((uint32_t)(EAX));
  /* 12267a0d call 0x12267ad0 */
  push32(0x12267a12u); f_12267ad0();
  /* 12267a12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267a15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267a18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267a1b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12267a1e jmp 0x12267a8d */
  goto L_12267a8d;
L_12267a20:;
  /* 12267a20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12267a25 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12267a27 mov ecx, dword ptr [0x12284c98] */
  ECX = (r32((uint32_t)(0x12284c98)));
  /* 12267a2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12267a2f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12267a33 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12267a39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12267a3b je 0x12267a68 */
  if (C.zf) goto L_12267a68;
  /* 12267a3d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267a41 jbe 0x12267a68 */
  if ((C.cf||C.zf)) goto L_12267a68;
  /* 12267a43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267a46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267a49 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12267a4b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12267a4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267a50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267a53 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12267a56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267a59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267a5c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12267a5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267a62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267a65 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12267a68:;
  /* 12267a68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267a6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267a6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12267a70 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12267a72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267a75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267a78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12267a7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267a7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267a81 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12267a84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267a87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267a8a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12267a8d:;
  /* 12267a8d jmp 0x122679a1 */
  goto L_122679a1;
L_12267a92:;
  /* 12267a92 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267a96 je 0x12267aa4 */
  if (C.zf) goto L_12267aa4;
  /* 12267a98 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12267a9a call 0x1225e0a0 */
  push32(0x12267a9fu); f_1225e0a0();
  /* 12267a9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267aa2 jmp 0x12267aaf */
  goto L_12267aaf;
L_12267aa4:;
  /* 12267aa4 push 0x12286b1c */
  push32((uint32_t)(0x12286b1cu));
  /* 12267aa9 call dword ptr [0x122893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893a4))), 0x12267aafu);
L_12267aaf:;
  /* 12267aaf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267ab3 jbe 0x12267ac3 */
  if ((C.cf||C.zf)) goto L_12267ac3;
  /* 12267ab5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12267ab8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12267abb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267abe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267ac1 jmp 0x12267ac5 */
  goto L_12267ac5;
L_12267ac3:;
  /* 12267ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12267ac5:;
  /* 12267ac5 mov esp, ebp */
  ESP = (EBP);
  /* 12267ac7 pop ebp */
  EBP = (pop32());
  /* 12267ac8 ret  */
  ESPCHK(0x12267940u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ad0 @ 0x12267ad0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12267ad0(void) {
  FTRACE(0x12267ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12267ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12267ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12267ad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267ad6 push esi */
  push32((uint32_t)(ESI));
  /* 12267ad7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12267adb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12267ade mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267ae1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267ae4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12267ae7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267aeb ja 0x12268038 */
  if ((!C.cf&&!C.zf)) goto L_12268038;
  /* 12267af1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12267af4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12267af6 mov dl, byte ptr [eax + 0x12268099] */
  DL = (r8((uint32_t)(EAX + 0x12268099)));
  /* 12267afc jmp dword ptr [edx*4 + 0x1226803d] */
  switch (EDX) {
    case 0: goto L_12268016;
    case 1: goto L_12267b25;
    case 2: goto L_12267b6b;
    case 3: goto L_12267cb8;
    case 4: goto L_12267ce0;
    case 5: goto L_12267d7f;
    case 6: goto L_12267deb;
    case 7: goto L_12267e14;
    case 8: goto L_12267e55;
    case 9: goto L_12267f37;
    case 10: goto L_12267f9e;
    case 11: goto L_12267feb;
    case 12: goto L_12267b03;
    case 13: goto L_12267b48;
    case 14: goto L_12267b8e;
    case 15: goto L_12267c8e;
    case 16: goto L_12267d25;
    case 17: goto L_12267d52;
    case 18: goto L_12267da7;
    case 19: goto L_12267e2b;
    case 20: goto L_12267ed9;
    case 21: goto L_12267f68;
    case 22: goto L_12268038;
    default: x86_unimpl("switch@0x12267afc out of table"); return;
  }
L_12267b03:;
  /* 12267b03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267b06 push ecx */
  push32((uint32_t)(ECX));
  /* 12267b07 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267b0a push edx */
  push32((uint32_t)(EDX));
  /* 12267b0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267b0e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12267b11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267b14 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12267b17 push eax */
  push32((uint32_t)(EAX));
  /* 12267b18 call 0x122680f0 */
  push32(0x12267b1du); f_122680f0();
  /* 12267b1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267b20 jmp 0x12268038 */
  goto L_12268038;
L_12267b25:;
  /* 12267b25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267b28 push ecx */
  push32((uint32_t)(ECX));
  /* 12267b29 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267b2c push edx */
  push32((uint32_t)(EDX));
  /* 12267b2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267b30 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12267b33 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267b36 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12267b3a push eax */
  push32((uint32_t)(EAX));
  /* 12267b3b call 0x122680f0 */
  push32(0x12267b40u); f_122680f0();
  /* 12267b40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267b43 jmp 0x12268038 */
  goto L_12268038;
L_12267b48:;
  /* 12267b48 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267b4b push ecx */
  push32((uint32_t)(ECX));
  /* 12267b4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267b4f push edx */
  push32((uint32_t)(EDX));
  /* 12267b50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267b53 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12267b56 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267b59 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12267b5d push eax */
  push32((uint32_t)(EAX));
  /* 12267b5e call 0x122680f0 */
  push32(0x12267b63u); f_122680f0();
  /* 12267b63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267b66 jmp 0x12268038 */
  goto L_12268038;
L_12267b6b:;
  /* 12267b6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267b6e push ecx */
  push32((uint32_t)(ECX));
  /* 12267b6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267b72 push edx */
  push32((uint32_t)(EDX));
  /* 12267b73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267b76 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12267b79 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267b7c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12267b80 push eax */
  push32((uint32_t)(EAX));
  /* 12267b81 call 0x122680f0 */
  push32(0x12267b86u); f_122680f0();
  /* 12267b86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267b89 jmp 0x12268038 */
  goto L_12268038;
L_12267b8e:;
  /* 12267b8e cmp dword ptr [0x12286af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267b95 je 0x12267c16 */
  if (C.zf) goto L_12267c16;
  /* 12267b97 mov dword ptr [0x12286af8], 0 */
  w32((uint32_t)(0x12286af8), (0x0u));
  /* 12267ba1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267ba4 push ecx */
  push32((uint32_t)(ECX));
  /* 12267ba5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267ba8 push edx */
  push32((uint32_t)(EDX));
  /* 12267ba9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267bac push eax */
  push32((uint32_t)(EAX));
  /* 12267bad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12267bb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267bb4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12267bba push eax */
  push32((uint32_t)(EAX));
  /* 12267bbb call 0x122682a0 */
  push32(0x12267bc0u); f_122682a0();
  /* 12267bc0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267bc3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267bc6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267bc9 jne 0x12267bd0 */
  if (!C.zf) goto L_12267bd0;
  /* 12267bcb jmp 0x12268038 */
  goto L_12268038;
L_12267bd0:;
  /* 12267bd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267bd3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12267bd5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12267bd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267bdb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12267bdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267be0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267be3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12267be5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267be8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12267bea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267bed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267bf0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12267bf2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12267bf6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267bf9 push edx */
  push32((uint32_t)(EDX));
  /* 12267bfa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267bfd push eax */
  push32((uint32_t)(EAX));
  /* 12267bfe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267c01 push ecx */
  push32((uint32_t)(ECX));
  /* 12267c02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267c05 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12267c0b push eax */
  push32((uint32_t)(EAX));
  /* 12267c0c call 0x122682a0 */
  push32(0x12267c11u); f_122682a0();
  /* 12267c11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267c14 jmp 0x12267c89 */
  goto L_12267c89;
L_12267c16:;
  /* 12267c16 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267c19 push ecx */
  push32((uint32_t)(ECX));
  /* 12267c1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267c1d push edx */
  push32((uint32_t)(EDX));
  /* 12267c1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267c21 push eax */
  push32((uint32_t)(EAX));
  /* 12267c22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267c25 push ecx */
  push32((uint32_t)(ECX));
  /* 12267c26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267c29 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12267c2f push eax */
  push32((uint32_t)(EAX));
  /* 12267c30 call 0x122682a0 */
  push32(0x12267c35u); f_122682a0();
  /* 12267c35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267c38 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267c3b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267c3e jne 0x12267c45 */
  if (!C.zf) goto L_12267c45;
  /* 12267c40 jmp 0x12268038 */
  goto L_12268038;
L_12267c45:;
  /* 12267c45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267c48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12267c4a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12267c4d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267c50 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12267c52 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267c55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267c58 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12267c5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267c5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12267c5f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267c62 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267c65 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12267c67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267c6a push ecx */
  push32((uint32_t)(ECX));
  /* 12267c6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267c6e push edx */
  push32((uint32_t)(EDX));
  /* 12267c6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267c72 push eax */
  push32((uint32_t)(EAX));
  /* 12267c73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267c76 push ecx */
  push32((uint32_t)(ECX));
  /* 12267c77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267c7a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12267c80 push eax */
  push32((uint32_t)(EAX));
  /* 12267c81 call 0x122682a0 */
  push32(0x12267c86u); f_122682a0();
  /* 12267c86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12267c89:;
  /* 12267c89 jmp 0x12268038 */
  goto L_12268038;
L_12267c8e:;
  /* 12267c8e mov ecx, dword ptr [0x12286af8] */
  ECX = (r32((uint32_t)(0x12286af8)));
  /* 12267c94 mov dword ptr [0x12286b08], ecx */
  w32((uint32_t)(0x12286b08), (ECX));
  /* 12267c9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267c9d push edx */
  push32((uint32_t)(EDX));
  /* 12267c9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267ca1 push eax */
  push32((uint32_t)(EAX));
  /* 12267ca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12267ca4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267ca7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12267caa push edx */
  push32((uint32_t)(EDX));
  /* 12267cab call 0x12268140 */
  push32(0x12267cb0u); f_12268140();
  /* 12267cb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267cb3 jmp 0x12268038 */
  goto L_12268038;
L_12267cb8:;
  /* 12267cb8 mov eax, dword ptr [0x12286af8] */
  EAX = (r32((uint32_t)(0x12286af8)));
  /* 12267cbd mov dword ptr [0x12286b08], eax */
  w32((uint32_t)(0x12286b08), (EAX));
  /* 12267cc2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12267cc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267cc9 push edx */
  push32((uint32_t)(EDX));
  /* 12267cca push 2 */
  push32((uint32_t)(0x2u));
  /* 12267ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267ccf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12267cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12267cd3 call 0x12268140 */
  push32(0x12267cd8u); f_12268140();
  /* 12267cd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267cdb jmp 0x12268038 */
  goto L_12268038;
L_12267ce0:;
  /* 12267ce0 mov edx, dword ptr [0x12286af8] */
  EDX = (r32((uint32_t)(0x12286af8)));
  /* 12267ce6 mov dword ptr [0x12286b08], edx */
  w32((uint32_t)(0x12286b08), (EDX));
  /* 12267cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267cef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12267cf2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12267cf3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12267cf8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12267cfa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12267cfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267d01 jne 0x12267d0a */
  if (!C.zf) goto L_12267d0a;
  /* 12267d03 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12267d0a:;
  /* 12267d0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267d0d push edx */
  push32((uint32_t)(EDX));
  /* 12267d0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267d11 push eax */
  push32((uint32_t)(EAX));
  /* 12267d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12267d14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267d17 push ecx */
  push32((uint32_t)(ECX));
  /* 12267d18 call 0x12268140 */
  push32(0x12267d1du); f_12268140();
  /* 12267d1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267d20 jmp 0x12268038 */
  goto L_12268038;
L_12267d25:;
  /* 12267d25 mov edx, dword ptr [0x12286af8] */
  EDX = (r32((uint32_t)(0x12286af8)));
  /* 12267d2b mov dword ptr [0x12286b08], edx */
  w32((uint32_t)(0x12286b08), (EDX));
  /* 12267d31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267d34 push eax */
  push32((uint32_t)(EAX));
  /* 12267d35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267d38 push ecx */
  push32((uint32_t)(ECX));
  /* 12267d39 push 3 */
  push32((uint32_t)(0x3u));
  /* 12267d3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267d3e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12267d41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267d44 push eax */
  push32((uint32_t)(EAX));
  /* 12267d45 call 0x12268140 */
  push32(0x12267d4au); f_12268140();
  /* 12267d4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267d4d jmp 0x12268038 */
  goto L_12268038;
L_12267d52:;
  /* 12267d52 mov ecx, dword ptr [0x12286af8] */
  ECX = (r32((uint32_t)(0x12286af8)));
  /* 12267d58 mov dword ptr [0x12286b08], ecx */
  w32((uint32_t)(0x12286b08), (ECX));
  /* 12267d5e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267d61 push edx */
  push32((uint32_t)(EDX));
  /* 12267d62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267d65 push eax */
  push32((uint32_t)(EAX));
  /* 12267d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12267d68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267d6b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12267d6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267d71 push edx */
  push32((uint32_t)(EDX));
  /* 12267d72 call 0x12268140 */
  push32(0x12267d77u); f_12268140();
  /* 12267d77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267d7a jmp 0x12268038 */
  goto L_12268038;
L_12267d7f:;
  /* 12267d7f mov eax, dword ptr [0x12286af8] */
  EAX = (r32((uint32_t)(0x12286af8)));
  /* 12267d84 mov dword ptr [0x12286b08], eax */
  w32((uint32_t)(0x12286b08), (EAX));
  /* 12267d89 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267d8c push ecx */
  push32((uint32_t)(ECX));
  /* 12267d8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267d90 push edx */
  push32((uint32_t)(EDX));
  /* 12267d91 push 2 */
  push32((uint32_t)(0x2u));
  /* 12267d93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267d96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12267d99 push ecx */
  push32((uint32_t)(ECX));
  /* 12267d9a call 0x12268140 */
  push32(0x12267d9fu); f_12268140();
  /* 12267d9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267da2 jmp 0x12268038 */
  goto L_12268038;
L_12267da7:;
  /* 12267da7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267daa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267dae jg 0x12267dcc */
  if ((!C.zf&&C.sf==C.of)) goto L_12267dcc;
  /* 12267db0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267db3 push eax */
  push32((uint32_t)(EAX));
  /* 12267db4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267db7 push ecx */
  push32((uint32_t)(ECX));
  /* 12267db8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267dbb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12267dc1 push eax */
  push32((uint32_t)(EAX));
  /* 12267dc2 call 0x122680f0 */
  push32(0x12267dc7u); f_122680f0();
  /* 12267dc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267dca jmp 0x12267de6 */
  goto L_12267de6;
L_12267dcc:;
  /* 12267dcc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267dcf push ecx */
  push32((uint32_t)(ECX));
  /* 12267dd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267dd3 push edx */
  push32((uint32_t)(EDX));
  /* 12267dd4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267dd7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12267ddd push ecx */
  push32((uint32_t)(ECX));
  /* 12267dde call 0x122680f0 */
  push32(0x12267de3u); f_122680f0();
  /* 12267de3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12267de6:;
  /* 12267de6 jmp 0x12268038 */
  goto L_12268038;
L_12267deb:;
  /* 12267deb mov edx, dword ptr [0x12286af8] */
  EDX = (r32((uint32_t)(0x12286af8)));
  /* 12267df1 mov dword ptr [0x12286b08], edx */
  w32((uint32_t)(0x12286b08), (EDX));
  /* 12267df7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267dfa push eax */
  push32((uint32_t)(EAX));
  /* 12267dfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267dfe push ecx */
  push32((uint32_t)(ECX));
  /* 12267dff push 2 */
  push32((uint32_t)(0x2u));
  /* 12267e01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267e04 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12267e06 push eax */
  push32((uint32_t)(EAX));
  /* 12267e07 call 0x12268140 */
  push32(0x12267e0cu); f_12268140();
  /* 12267e0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267e0f jmp 0x12268038 */
  goto L_12268038;
L_12267e14:;
  /* 12267e14 mov ecx, dword ptr [0x12286af8] */
  ECX = (r32((uint32_t)(0x12286af8)));
  /* 12267e1a mov dword ptr [0x12286b08], ecx */
  w32((uint32_t)(0x12286b08), (ECX));
  /* 12267e20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267e23 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12267e26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12267e29 jmp 0x12267e7d */
  goto L_12267e7d;
L_12267e2b:;
  /* 12267e2b mov ecx, dword ptr [0x12286af8] */
  ECX = (r32((uint32_t)(0x12286af8)));
  /* 12267e31 mov dword ptr [0x12286b08], ecx */
  w32((uint32_t)(0x12286b08), (ECX));
  /* 12267e37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267e3a push edx */
  push32((uint32_t)(EDX));
  /* 12267e3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267e3e push eax */
  push32((uint32_t)(EAX));
  /* 12267e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12267e41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267e44 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12267e47 push edx */
  push32((uint32_t)(EDX));
  /* 12267e48 call 0x12268140 */
  push32(0x12267e4du); f_12268140();
  /* 12267e4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267e50 jmp 0x12268038 */
  goto L_12268038;
L_12267e55:;
  /* 12267e55 mov eax, dword ptr [0x12286af8] */
  EAX = (r32((uint32_t)(0x12286af8)));
  /* 12267e5a mov dword ptr [0x12286b08], eax */
  w32((uint32_t)(0x12286b08), (EAX));
  /* 12267e5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267e62 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267e66 jne 0x12267e71 */
  if (!C.zf) goto L_12267e71;
  /* 12267e68 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12267e6f jmp 0x12267e7d */
  goto L_12267e7d;
L_12267e71:;
  /* 12267e71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267e74 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12267e77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12267e7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12267e7d:;
  /* 12267e7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267e80 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12267e83 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267e86 jge 0x12267e91 */
  if ((C.sf==C.of)) goto L_12267e91;
  /* 12267e88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12267e8f jmp 0x12267ebe */
  goto L_12267ebe;
L_12267e91:;
  /* 12267e91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267e94 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12267e97 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12267e98 mov ecx, 7 */
  ECX = (0x7u);
  /* 12267e9d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12267e9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12267ea2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267ea5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12267ea8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12267ea9 mov ecx, 7 */
  ECX = (0x7u);
  /* 12267eae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12267eb0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267eb3 jl 0x12267ebe */
  if ((C.sf!=C.of)) goto L_12267ebe;
  /* 12267eb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267eb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267ebb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12267ebe:;
  /* 12267ebe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267ec1 push eax */
  push32((uint32_t)(EAX));
  /* 12267ec2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 12267ec6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12267ec8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267ecb push edx */
  push32((uint32_t)(EDX));
  /* 12267ecc call 0x12268140 */
  push32(0x12267ed1u); f_12268140();
  /* 12267ed1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267ed4 jmp 0x12268038 */
  goto L_12268038;
L_12267ed9:;
  /* 12267ed9 cmp dword ptr [0x12286af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12267ee0 je 0x12267f10 */
  if (C.zf) goto L_12267f10;
  /* 12267ee2 mov dword ptr [0x12286af8], 0 */
  w32((uint32_t)(0x12286af8), (0x0u));
  /* 12267eec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267eef push eax */
  push32((uint32_t)(EAX));
  /* 12267ef0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12267ef4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267ef7 push edx */
  push32((uint32_t)(EDX));
  /* 12267ef8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267efb push eax */
  push32((uint32_t)(EAX));
  /* 12267efc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267eff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12267f05 push edx */
  push32((uint32_t)(EDX));
  /* 12267f06 call 0x122682a0 */
  push32(0x12267f0bu); f_122682a0();
  /* 12267f0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267f0e jmp 0x12267f32 */
  goto L_12267f32;
L_12267f10:;
  /* 12267f10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267f13 push eax */
  push32((uint32_t)(EAX));
  /* 12267f14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267f17 push ecx */
  push32((uint32_t)(ECX));
  /* 12267f18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267f1b push edx */
  push32((uint32_t)(EDX));
  /* 12267f1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267f1f push eax */
  push32((uint32_t)(EAX));
  /* 12267f20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267f23 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12267f29 push edx */
  push32((uint32_t)(EDX));
  /* 12267f2a call 0x122682a0 */
  push32(0x12267f2fu); f_122682a0();
  /* 12267f2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12267f32:;
  /* 12267f32 jmp 0x12268038 */
  goto L_12268038;
L_12267f37:;
  /* 12267f37 mov dword ptr [0x12286af8], 0 */
  w32((uint32_t)(0x12286af8), (0x0u));
  /* 12267f41 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267f44 push eax */
  push32((uint32_t)(EAX));
  /* 12267f45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267f48 push ecx */
  push32((uint32_t)(ECX));
  /* 12267f49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267f4c push edx */
  push32((uint32_t)(EDX));
  /* 12267f4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267f50 push eax */
  push32((uint32_t)(EAX));
  /* 12267f51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12267f54 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12267f5a push edx */
  push32((uint32_t)(EDX));
  /* 12267f5b call 0x122682a0 */
  push32(0x12267f60u); f_122682a0();
  /* 12267f60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267f63 jmp 0x12268038 */
  goto L_12268038;
L_12267f68:;
  /* 12267f68 mov eax, dword ptr [0x12286af8] */
  EAX = (r32((uint32_t)(0x12286af8)));
  /* 12267f6d mov dword ptr [0x12286b08], eax */
  w32((uint32_t)(0x12286b08), (EAX));
  /* 12267f72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267f75 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12267f78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12267f79 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12267f7e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12267f80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12267f83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267f86 push edx */
  push32((uint32_t)(EDX));
  /* 12267f87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267f8a push eax */
  push32((uint32_t)(EAX));
  /* 12267f8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12267f8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267f90 push ecx */
  push32((uint32_t)(ECX));
  /* 12267f91 call 0x12268140 */
  push32(0x12267f96u); f_12268140();
  /* 12267f96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267f99 jmp 0x12268038 */
  goto L_12268038;
L_12267f9e:;
  /* 12267f9e mov edx, dword ptr [0x12286af8] */
  EDX = (r32((uint32_t)(0x12286af8)));
  /* 12267fa4 mov dword ptr [0x12286b08], edx */
  w32((uint32_t)(0x12286b08), (EDX));
  /* 12267faa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267fad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12267fb0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12267fb1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12267fb6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12267fb8 mov ecx, eax */
  ECX = (EAX);
  /* 12267fba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267fbd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12267fc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267fc3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12267fc6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12267fc7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12267fcc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12267fce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12267fd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12267fd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267fd6 push eax */
  push32((uint32_t)(EAX));
  /* 12267fd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267fda push ecx */
  push32((uint32_t)(ECX));
  /* 12267fdb push 4 */
  push32((uint32_t)(0x4u));
  /* 12267fdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12267fe0 push edx */
  push32((uint32_t)(EDX));
  /* 12267fe1 call 0x12268140 */
  push32(0x12267fe6u); f_12268140();
  /* 12267fe6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12267fe9 jmp 0x12268038 */
  goto L_12268038;
L_12267feb:;
  /* 12267feb call 0x12269100 */
  push32(0x12267ff0u); f_12269100();
  /* 12267ff0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12267ff3 push eax */
  push32((uint32_t)(EAX));
  /* 12267ff4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12267ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 12267ff8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12267ffb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12267ffd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268001 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12268004 mov ecx, dword ptr [eax*4 + 0x12285e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12285e1c)));
  /* 1226800b push ecx */
  push32((uint32_t)(ECX));
  /* 1226800c call 0x122680f0 */
  push32(0x12268011u); f_122680f0();
  /* 12268011 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268014 jmp 0x12268038 */
  goto L_12268038;
L_12268016:;
  /* 12268016 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268019 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1226801b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1226801e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268021 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12268023 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268026 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268029 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1226802b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226802e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12268030 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268033 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268036 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12268038:;
  /* 12268038 pop esi */
  ESI = (pop32());
  /* 12268039 mov esp, ebp */
  ESP = (EBP);
  /* 1226803b pop ebp */
  EBP = (pop32());
  /* 1226803c ret  */
  ESPCHK(0x12267ad0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x122680f0 (72 bytes, 30 insns) */
void f_122680f0(void) {
  FTRACE(0x122680f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122680f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122680f1 mov ebp, esp */
  EBP = (ESP);
L_122680f3:;
  /* 122680f3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122680f6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122680f9 je 0x12268136 */
  if (C.zf) goto L_12268136;
  /* 122680fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122680fe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12268101 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12268103 je 0x12268136 */
  if (C.zf) goto L_12268136;
  /* 12268105 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268108 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1226810a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226810d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1226810f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12268111 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268114 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12268116 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268119 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226811c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1226811e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268124 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12268127 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226812a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1226812c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226812f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268132 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12268134 jmp 0x122680f3 */
  goto L_122680f3;
L_12268136:;
  /* 12268136 pop ebp */
  EBP = (pop32());
  /* 12268137 ret  */
  ESPCHK(0x122680f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018140 @ 0x12268140 (173 bytes, 64 insns) */
void f_12268140(void) {
  FTRACE(0x12268140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12268140 push ebp */
  push32((uint32_t)(EBP));
  /* 12268141 mov ebp, esp */
  EBP = (ESP);
  /* 12268143 push ecx */
  push32((uint32_t)(ECX));
  /* 12268144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1226814b cmp dword ptr [0x12286b08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286b08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268152 je 0x1226816a */
  if (C.zf) goto L_1226816a;
  /* 12268154 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268157 push eax */
  push32((uint32_t)(EAX));
  /* 12268158 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226815b push ecx */
  push32((uint32_t)(ECX));
  /* 1226815c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226815f push edx */
  push32((uint32_t)(EDX));
  /* 12268160 call 0x122681f0 */
  push32(0x12268165u); f_122681f0();
  /* 12268165 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268168 jmp 0x122681e9 */
  goto L_122681e9;
L_1226816a:;
  /* 1226816a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226816d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268170 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268172 jae 0x122681e0 */
  if (!C.cf) goto L_122681e0;
  /* 12268174 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268177 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226817a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1226817d jmp 0x12268188 */
  goto L_12268188;
L_1226817f:;
  /* 1226817f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268182 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268185 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12268188:;
  /* 12268188 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226818b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226818e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12268190 je 0x122681c4 */
  if (C.zf) goto L_122681c4;
  /* 12268192 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268195 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12268196 mov ecx, 0xa */
  ECX = (0xau);
  /* 1226819b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1226819d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122681a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122681a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122681a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122681a8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 122681ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122681ae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122681af mov ecx, 0xa */
  ECX = (0xau);
  /* 122681b4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122681b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122681b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122681bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122681bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122681c2 jmp 0x1226817f */
  goto L_1226817f;
L_122681c4:;
  /* 122681c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122681c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122681c9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122681cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122681cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122681d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122681d4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122681d6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122681d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122681dc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122681de jmp 0x122681e9 */
  goto L_122681e9;
L_122681e0:;
  /* 122681e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122681e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_122681e9:;
  /* 122681e9 mov esp, ebp */
  ESP = (EBP);
  /* 122681eb pop ebp */
  EBP = (pop32());
  /* 122681ec ret  */
  ESPCHK(0x12268140u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x122681f0 (172 bytes, 65 insns) */
void f_122681f0(void) {
  FTRACE(0x122681f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122681f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122681f1 mov ebp, esp */
  EBP = (ESP);
  /* 122681f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122681f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122681f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122681fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122681fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268201 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268204 jbe 0x1226824b */
  if ((C.cf||C.zf)) goto L_1226824b;
L_12268206:;
  /* 12268206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268209 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1226820a mov ecx, 0xa */
  ECX = (0xau);
  /* 1226820f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12268211 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268214 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268217 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12268219 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226821c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226821f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12268222 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268225 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12268227 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226822a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226822d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1226822f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268232 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12268233 mov ecx, 0xa */
  ECX = (0xau);
  /* 12268238 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1226823a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1226823d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268241 jle 0x1226824b */
  if ((C.zf||C.sf!=C.of)) goto L_1226824b;
  /* 12268243 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268246 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268249 ja 0x12268206 */
  if ((!C.cf&&!C.zf)) goto L_12268206;
L_1226824b:;
  /* 1226824b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226824e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12268250 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12268253 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268259 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1226825b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226825e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12268264:;
  /* 12268264 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268267 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12268269 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1226826c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226826f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12268272 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12268274 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12268276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268279 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226827c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1226827f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12268282 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12268285 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12268287 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226828a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226828d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12268290 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12268293 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268296 jb 0x12268264 */
  if (C.cf) goto L_12268264;
  /* 12268298 mov esp, ebp */
  ESP = (EBP);
  /* 1226829a pop ebp */
  EBP = (pop32());
  /* 1226829b ret  */
  ESPCHK(0x122681f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100182a0 @ 0x122682a0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_122682a0(void) {
  FTRACE(0x122682a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122682a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122682a1 mov ebp, esp */
  EBP = (ESP);
  /* 122682a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_122682a6:;
  /* 122682a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122682a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122682ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122682ae je 0x1226871c */
  if (C.zf) goto L_1226871c;
  /* 122682b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122682b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122682ba je 0x1226871c */
  if (C.zf) goto L_1226871c;
  /* 122682c0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 122682c4 mov dword ptr [0x12286b08], 0 */
  w32((uint32_t)(0x12286b08), (0x0u));
  /* 122682ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122682d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122682d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122682db jmp 0x122682e6 */
  goto L_122682e6;
L_122682dd:;
  /* 122682dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122682e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122682e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122682e6:;
  /* 122682e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122682e9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122682ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122682ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122682f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122682f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122682f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122682fb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122682fd jne 0x12268301 */
  if (!C.zf) goto L_12268301;
  /* 122682ff jmp 0x122682dd */
  goto L_122682dd;
L_12268301:;
  /* 12268301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268304 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268307 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1226830a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226830d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12268310 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12268313 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12268316 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268319 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1226831c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268320 ja 0x12268670 */
  if ((!C.cf&&!C.zf)) goto L_12268670;
  /* 12268326 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12268329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226832b mov al, byte ptr [ecx + 0x1226874c] */
  AL = (r8((uint32_t)(ECX + 0x1226874c)));
  /* 12268331 jmp dword ptr [eax*4 + 0x12268720] */
  switch (EAX) {
    case 0: goto L_1226858f;
    case 1: goto L_12268473;
    case 2: goto L_122683fe;
    case 3: goto L_12268338;
    case 4: goto L_12268376;
    case 5: goto L_122683d7;
    case 6: goto L_12268425;
    case 7: goto L_1226844c;
    case 8: goto L_122684ba;
    case 9: goto L_122683b4;
    case 10: goto L_12268670;
    default: x86_unimpl("switch@0x12268331 out of table"); return;
  }
L_12268338:;
  /* 12268338 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226833b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1226833e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12268341 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268344 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12268347 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226834b ja 0x12268371 */
  if ((!C.cf&&!C.zf)) goto L_12268371;
  /* 1226834d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12268350 jmp dword ptr [ecx*4 + 0x1226879f] */
  switch (ECX) {
    case 0: goto L_12268357;
    case 1: goto L_12268361;
    case 2: goto L_12268367;
    case 3: goto L_1226836d;
    case 4: goto L_12268395;
    case 5: goto L_1226839f;
    case 6: goto L_122683a5;
    case 7: goto L_122683ab;
    default: x86_unimpl("switch@0x12268350 out of table"); return;
  }
L_12268357:;
  /* 12268357 mov dword ptr [0x12286b08], 1 */
  w32((uint32_t)(0x12286b08), (0x1u));
L_12268361:;
  /* 12268361 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12268365 jmp 0x12268371 */
  goto L_12268371;
L_12268367:;
  /* 12268367 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1226836b jmp 0x12268371 */
  goto L_12268371;
L_1226836d:;
  /* 1226836d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12268371:;
  /* 12268371 jmp 0x12268670 */
  goto L_12268670;
L_12268376:;
  /* 12268376 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12268379 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1226837c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1226837f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268382 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12268385 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268389 ja 0x122683af */
  if ((!C.cf&&!C.zf)) goto L_122683af;
  /* 1226838b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1226838e jmp dword ptr [ecx*4 + 0x122687af] */
  switch (ECX) {
    case 0: goto L_12268395;
    case 1: goto L_1226839f;
    case 2: goto L_122683a5;
    case 3: goto L_122683ab;
    default: x86_unimpl("switch@0x1226838e out of table"); return;
  }
L_12268395:;
  /* 12268395 mov dword ptr [0x12286b08], 1 */
  w32((uint32_t)(0x12286b08), (0x1u));
L_1226839f:;
  /* 1226839f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 122683a3 jmp 0x122683af */
  goto L_122683af;
L_122683a5:;
  /* 122683a5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 122683a9 jmp 0x122683af */
  goto L_122683af;
L_122683ab:;
  /* 122683ab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_122683af:;
  /* 122683af jmp 0x12268670 */
  goto L_12268670;
L_122683b4:;
  /* 122683b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122683b7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 122683ba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122683be je 0x122683c8 */
  if (C.zf) goto L_122683c8;
  /* 122683c0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122683c4 je 0x122683ce */
  if (C.zf) goto L_122683ce;
  /* 122683c6 jmp 0x122683d2 */
  goto L_122683d2;
L_122683c8:;
  /* 122683c8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 122683cc jmp 0x122683d2 */
  goto L_122683d2;
L_122683ce:;
  /* 122683ce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_122683d2:;
  /* 122683d2 jmp 0x12268670 */
  goto L_12268670;
L_122683d7:;
  /* 122683d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122683da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122683dd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122683e1 je 0x122683eb */
  if (C.zf) goto L_122683eb;
  /* 122683e3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122683e7 je 0x122683f5 */
  if (C.zf) goto L_122683f5;
  /* 122683e9 jmp 0x122683f9 */
  goto L_122683f9;
L_122683eb:;
  /* 122683eb mov dword ptr [0x12286b08], 1 */
  w32((uint32_t)(0x12286b08), (0x1u));
L_122683f5:;
  /* 122683f5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_122683f9:;
  /* 122683f9 jmp 0x12268670 */
  goto L_12268670;
L_122683fe:;
  /* 122683fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12268401 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12268404 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268408 je 0x12268412 */
  if (C.zf) goto L_12268412;
  /* 1226840a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226840e je 0x1226841c */
  if (C.zf) goto L_1226841c;
  /* 12268410 jmp 0x12268420 */
  goto L_12268420;
L_12268412:;
  /* 12268412 mov dword ptr [0x12286b08], 1 */
  w32((uint32_t)(0x12286b08), (0x1u));
L_1226841c:;
  /* 1226841c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12268420:;
  /* 12268420 jmp 0x12268670 */
  goto L_12268670;
L_12268425:;
  /* 12268425 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12268428 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1226842b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226842f je 0x12268439 */
  if (C.zf) goto L_12268439;
  /* 12268431 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268435 je 0x12268443 */
  if (C.zf) goto L_12268443;
  /* 12268437 jmp 0x12268447 */
  goto L_12268447;
L_12268439:;
  /* 12268439 mov dword ptr [0x12286b08], 1 */
  w32((uint32_t)(0x12286b08), (0x1u));
L_12268443:;
  /* 12268443 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12268447:;
  /* 12268447 jmp 0x12268670 */
  goto L_12268670;
L_1226844c:;
  /* 1226844c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226844f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12268452 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268456 je 0x12268460 */
  if (C.zf) goto L_12268460;
  /* 12268458 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226845c je 0x1226846a */
  if (C.zf) goto L_1226846a;
  /* 1226845e jmp 0x1226846e */
  goto L_1226846e;
L_12268460:;
  /* 12268460 mov dword ptr [0x12286b08], 1 */
  w32((uint32_t)(0x12286b08), (0x1u));
L_1226846a:;
  /* 1226846a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1226846e:;
  /* 1226846e jmp 0x12268670 */
  goto L_12268670;
L_12268473:;
  /* 12268473 push 0x12282cac */
  push32((uint32_t)(0x12282cacu));
  /* 12268478 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226847b push ecx */
  push32((uint32_t)(ECX));
  /* 1226847c call 0x12268cd0 */
  push32(0x12268481u); f_12268cd0();
  /* 12268481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12268486 jne 0x12268493 */
  if (!C.zf) goto L_12268493;
  /* 12268488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226848b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226848e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12268491 jmp 0x122684b1 */
  goto L_122684b1;
L_12268493:;
  /* 12268493 push 0x12282ca8 */
  push32((uint32_t)(0x12282ca8u));
  /* 12268498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226849b push eax */
  push32((uint32_t)(EAX));
  /* 1226849c call 0x12268cd0 */
  push32(0x122684a1u); f_12268cd0();
  /* 122684a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122684a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122684a6 jne 0x122684b1 */
  if (!C.zf) goto L_122684b1;
  /* 122684a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122684ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122684ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122684b1:;
  /* 122684b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 122684b5 jmp 0x12268670 */
  goto L_12268670;
L_122684ba:;
  /* 122684ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122684bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122684c1 jg 0x122684d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_122684d1;
  /* 122684c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122684c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 122684cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122684cf jmp 0x122684dd */
  goto L_122684dd;
L_122684d1:;
  /* 122684d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122684d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 122684da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122684dd:;
  /* 122684dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122684e1 jle 0x12268584 */
  if ((C.zf||C.sf!=C.of)) goto L_12268584;
  /* 122684e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122684ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122684ed jbe 0x12268584 */
  if ((C.cf||C.zf)) goto L_12268584;
  /* 122684f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122684f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122684f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122684fa mov ecx, dword ptr [0x12284c98] */
  ECX = (r32((uint32_t)(0x12284c98)));
  /* 12268500 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12268502 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12268506 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1226850c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226850e je 0x12268547 */
  if (C.zf) goto L_12268547;
  /* 12268510 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268513 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268516 jbe 0x12268547 */
  if ((C.cf||C.zf)) goto L_12268547;
  /* 12268518 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226851b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226851d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12268520 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12268522 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12268524 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268527 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12268529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226852c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226852f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12268531 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12268534 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268537 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1226853a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226853d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1226853f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268542 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268545 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12268547:;
  /* 12268547 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226854a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1226854c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226854f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12268551 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12268553 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268556 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12268558 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226855b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226855e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12268560 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12268563 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268566 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12268569 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226856c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1226856e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268571 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268574 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12268576 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12268579 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226857c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1226857f jmp 0x122684dd */
  goto L_122684dd;
L_12268584:;
  /* 12268584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268587 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1226858a jmp 0x122682a6 */
  goto L_122682a6;
L_1226858f:;
  /* 1226858f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12268592 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12268595 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12268597 je 0x12268662 */
  if (C.zf) goto L_12268662;
  /* 1226859d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122685a0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122685a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_122685a6:;
  /* 122685a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122685a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122685ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122685ae je 0x12268660 */
  if (C.zf) goto L_12268660;
  /* 122685b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122685b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122685ba je 0x12268660 */
  if (C.zf) goto L_12268660;
  /* 122685c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122685c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122685c6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122685c9 jne 0x122685d9 */
  if (!C.zf) goto L_122685d9;
  /* 122685cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122685ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122685d1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122685d4 jmp 0x12268660 */
  goto L_12268660;
L_122685d9:;
  /* 122685d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122685dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122685de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122685e0 mov edx, dword ptr [0x12284c98] */
  EDX = (r32((uint32_t)(0x12284c98)));
  /* 122685e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122685e8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 122685ec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 122685f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122685f3 je 0x1226862c */
  if (C.zf) goto L_1226862c;
  /* 122685f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122685f8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122685fb jbe 0x1226862c */
  if ((C.cf||C.zf)) goto L_1226862c;
  /* 122685fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268600 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12268602 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268605 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12268607 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12268609 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226860c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1226860e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268611 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268614 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12268616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268619 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226861c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1226861f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268622 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12268624 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268627 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226862a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1226862c:;
  /* 1226862c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226862f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12268631 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268634 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12268636 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12268638 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226863b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1226863d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268640 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268643 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12268645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268648 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226864b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1226864e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268651 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12268653 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268656 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268659 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1226865b jmp 0x122685a6 */
  goto L_122685a6;
L_12268660:;
  /* 12268660 jmp 0x1226866b */
  goto L_1226866b;
L_12268662:;
  /* 12268662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268665 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268668 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1226866b:;
  /* 1226866b jmp 0x122682a6 */
  goto L_122682a6;
L_12268670:;
  /* 12268670 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12268674 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12268676 je 0x1226869c */
  if (C.zf) goto L_1226869c;
  /* 12268678 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1226867b push edx */
  push32((uint32_t)(EDX));
  /* 1226867c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226867f push eax */
  push32((uint32_t)(EAX));
  /* 12268680 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268683 push ecx */
  push32((uint32_t)(ECX));
  /* 12268684 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268687 push edx */
  push32((uint32_t)(EDX));
  /* 12268688 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1226868b push eax */
  push32((uint32_t)(EAX));
  /* 1226868c call 0x12267ad0 */
  push32(0x12268691u); f_12267ad0();
  /* 12268691 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268694 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268697 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1226869a jmp 0x12268717 */
  goto L_12268717;
L_1226869c:;
  /* 1226869c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226869f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122686a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122686a3 mov ecx, dword ptr [0x12284c98] */
  ECX = (r32((uint32_t)(0x12284c98)));
  /* 122686a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122686ab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122686af and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 122686b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122686b7 je 0x122686e8 */
  if (C.zf) goto L_122686e8;
  /* 122686b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122686bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122686be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122686c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122686c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122686c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122686c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122686ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122686cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122686d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122686d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122686d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122686d8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122686db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122686de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122686e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122686e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122686e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_122686e8:;
  /* 122686e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122686eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122686ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122686f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122686f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122686f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122686f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122686f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122686fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122686ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12268701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268704 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268707 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1226870a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226870d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226870f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268712 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268715 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12268717:;
  /* 12268717 jmp 0x122682a6 */
  goto L_122682a6;
L_1226871c:;
  /* 1226871c mov esp, ebp */
  ESP = (EBP);
  /* 1226871e pop ebp */
  EBP = (pop32());
  /* 1226871f ret  */
  ESPCHK(0x122682a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100187c0 @ 0x122687c0 (650 bytes, 178 insns) */
void f_122687c0(void) {
  FTRACE(0x122687c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122687c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122687c1 mov ebp, esp */
  EBP = (ESP);
  /* 122687c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122687c9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122687cd jne 0x12268929 */
  if (!C.zf) goto L_12268929;
  /* 122687d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122687d6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 122687dc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 122687e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122687e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122687ec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 122687f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122687f8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 122687fe push edx */
  push32((uint32_t)(EDX));
  /* 122687ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12268802 push eax */
  push32((uint32_t)(EAX));
  /* 12268803 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268806 push ecx */
  push32((uint32_t)(ECX));
  /* 12268807 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226880a push edx */
  push32((uint32_t)(EDX));
  /* 1226880b call 0x12269be0 */
  push32(0x12268810u); f_12269be0();
  /* 12268810 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268813 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12268816 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226881a jne 0x122688af */
  if (!C.zf) goto L_122688af;
  /* 12268820 call dword ptr [0x122893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893dc))), 0x12268826u);
  /* 12268826 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268829 je 0x12268830 */
  if (C.zf) goto L_12268830;
  /* 1226882b jmp 0x1226890d */
  goto L_1226890d;
L_12268830:;
  /* 12268830 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268832 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268834 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268836 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268839 push eax */
  push32((uint32_t)(EAX));
  /* 1226883a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226883d push ecx */
  push32((uint32_t)(ECX));
  /* 1226883e call 0x12269be0 */
  push32(0x12268843u); f_12269be0();
  /* 12268843 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268846 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1226884c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268853 jne 0x1226885a */
  if (!C.zf) goto L_1226885a;
  /* 12268855 jmp 0x1226890d */
  goto L_1226890d;
L_1226885a:;
  /* 1226885a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1226885c push 0x12282cb4 */
  push32((uint32_t)(0x12282cb4u));
  /* 12268861 push 2 */
  push32((uint32_t)(0x2u));
  /* 12268863 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12268869 push edx */
  push32((uint32_t)(EDX));
  /* 1226886a call 0x1225a600 */
  push32(0x1226886fu); f_1225a600();
  /* 1226886f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268872 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12268875 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268879 jne 0x12268880 */
  if (!C.zf) goto L_12268880;
  /* 1226887b jmp 0x1226890d */
  goto L_1226890d;
L_12268880:;
  /* 12268880 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12268887 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268889 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1226888f push eax */
  push32((uint32_t)(EAX));
  /* 12268890 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12268893 push ecx */
  push32((uint32_t)(ECX));
  /* 12268894 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268897 push edx */
  push32((uint32_t)(EDX));
  /* 12268898 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226889b push eax */
  push32((uint32_t)(EAX));
  /* 1226889c call 0x12269be0 */
  push32(0x122688a1u); f_12269be0();
  /* 122688a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122688a4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122688a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122688ab jne 0x122688af */
  if (!C.zf) goto L_122688af;
  /* 122688ad jmp 0x1226890d */
  goto L_1226890d;
L_122688af:;
  /* 122688af push 0x63 */
  push32((uint32_t)(0x63u));
  /* 122688b1 push 0x12282cb4 */
  push32((uint32_t)(0x12282cb4u));
  /* 122688b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122688b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122688bb push ecx */
  push32((uint32_t)(ECX));
  /* 122688bc call 0x1225a600 */
  push32(0x122688c1u); f_1225a600();
  /* 122688c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122688c4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 122688ca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122688cc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 122688d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122688d5 jne 0x122688d9 */
  if (!C.zf) goto L_122688d9;
  /* 122688d7 jmp 0x1226890d */
  goto L_1226890d;
L_122688d9:;
  /* 122688d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122688dc push ecx */
  push32((uint32_t)(ECX));
  /* 122688dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122688e0 push edx */
  push32((uint32_t)(EDX));
  /* 122688e1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 122688e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122688e9 push ecx */
  push32((uint32_t)(ECX));
  /* 122688ea call 0x1225de20 */
  push32(0x122688efu); f_1225de20();
  /* 122688ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122688f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122688f6 je 0x12268906 */
  if (C.zf) goto L_12268906;
  /* 122688f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 122688fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122688fd push edx */
  push32((uint32_t)(EDX));
  /* 122688fe call 0x1225b090 */
  push32(0x12268903u); f_1225b090();
  /* 12268903 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12268906:;
  /* 12268906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268908 jmp 0x12268a46 */
  goto L_12268a46;
L_1226890d:;
  /* 1226890d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268911 je 0x12268921 */
  if (C.zf) goto L_12268921;
  /* 12268913 push 2 */
  push32((uint32_t)(0x2u));
  /* 12268915 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12268918 push eax */
  push32((uint32_t)(EAX));
  /* 12268919 call 0x1225b090 */
  push32(0x1226891eu); f_1225b090();
  /* 1226891e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12268921:;
  /* 12268921 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12268924 jmp 0x12268a46 */
  goto L_12268a46;
L_12268929:;
  /* 12268929 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226892d jne 0x12268a43 */
  if (!C.zf) goto L_12268a43;
  /* 12268933 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1226893d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268940 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12268946 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268948 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1226894e push edx */
  push32((uint32_t)(EDX));
  /* 1226894f push 0x12286a20 */
  push32((uint32_t)(0x12286a20u));
  /* 12268954 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268957 push eax */
  push32((uint32_t)(EAX));
  /* 12268958 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226895b push ecx */
  push32((uint32_t)(ECX));
  /* 1226895c call 0x12269a40 */
  push32(0x12268961u); f_12269a40();
  /* 12268961 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12268966 jne 0x12268970 */
  if (!C.zf) goto L_12268970;
  /* 12268968 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226896b jmp 0x12268a46 */
  goto L_12268a46;
L_12268970:;
  /* 12268970 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12268976 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12268979 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12268983 jmp 0x12268994 */
  goto L_12268994;
L_12268985:;
  /* 12268985 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1226898b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226898e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12268994:;
  /* 12268994 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226899b jge 0x12268a3f */
  if ((C.sf==C.of)) goto L_12268a3f;
  /* 122689a1 cmp dword ptr [0x12284ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12284ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122689a8 jle 0x122689db */
  if ((C.zf||C.sf!=C.of)) goto L_122689db;
  /* 122689aa push 4 */
  push32((uint32_t)(0x4u));
  /* 122689ac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122689b2 mov dl, byte ptr [ecx*2 + 0x12286a20] */
  DL = (r8((uint32_t)(ECX*2 + 0x12286a20)));
  /* 122689b9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 122689bf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 122689c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122689ca push eax */
  push32((uint32_t)(EAX));
  /* 122689cb call 0x12260610 */
  push32(0x122689d0u); f_12260610();
  /* 122689d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122689d3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 122689d9 jmp 0x12268a0e */
  goto L_12268a0e;
L_122689db:;
  /* 122689db mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122689e1 mov dl, byte ptr [ecx*2 + 0x12286a20] */
  DL = (r8((uint32_t)(ECX*2 + 0x12286a20)));
  /* 122689e8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 122689ee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 122689f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122689f9 mov ecx, dword ptr [0x12284c98] */
  ECX = (r32((uint32_t)(0x12284c98)));
  /* 122689ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12268a01 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12268a05 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12268a08 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12268a0e:;
  /* 12268a0e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268a15 je 0x12268a38 */
  if (C.zf) goto L_12268a38;
  /* 12268a17 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12268a1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12268a20 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12268a23 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12268a2a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12268a2e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12268a34 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12268a36 jmp 0x12268a3a */
  goto L_12268a3a;
L_12268a38:;
  /* 12268a38 jmp 0x12268a3f */
  goto L_12268a3f;
L_12268a3a:;
  /* 12268a3a jmp 0x12268985 */
  goto L_12268985;
L_12268a3f:;
  /* 12268a3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268a41 jmp 0x12268a46 */
  goto L_12268a46;
L_12268a43:;
  /* 12268a43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12268a46:;
  /* 12268a46 mov esp, ebp */
  ESP = (EBP);
  /* 12268a48 pop ebp */
  EBP = (pop32());
  /* 12268a49 ret  */
  ESPCHK(0x122687c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a50 @ 0x12268a50 (10 bytes, 5 insns) */
void f_12268a50(void) {
  FTRACE(0x12268a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12268a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12268a51 mov ebp, esp */
  EBP = (ESP);
  /* 12268a53 mov eax, dword ptr [0x12285d88] */
  EAX = (r32((uint32_t)(0x12285d88)));
  /* 12268a58 pop ebp */
  EBP = (pop32());
  /* 12268a59 ret  */
  ESPCHK(0x12268a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a60 @ 0x12268a60 (575 bytes, 196 insns) */
void f_12268a60(void) {
  FTRACE(0x12268a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12268a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12268a61 mov ebp, esp */
  EBP = (ESP);
  /* 12268a63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12268a65 push 0x12282cc0 */
  push32((uint32_t)(0x12282cc0u));
  /* 12268a6a push 0x12263708 */
  push32((uint32_t)(0x12263708u));
  /* 12268a6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12268a75 push eax */
  push32((uint32_t)(EAX));
  /* 12268a76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12268a7d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268a80 push ebx */
  push32((uint32_t)(EBX));
  /* 12268a81 push esi */
  push32((uint32_t)(ESI));
  /* 12268a82 push edi */
  push32((uint32_t)(EDI));
  /* 12268a83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12268a86 cmp dword ptr [0x12286a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268a8d jne 0x12268ade */
  if (!C.zf) goto L_12268ade;
  /* 12268a8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12268a92 push eax */
  push32((uint32_t)(EAX));
  /* 12268a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 12268a95 push 0x122823f4 */
  push32((uint32_t)(0x122823f4u));
  /* 12268a9a push 1 */
  push32((uint32_t)(0x1u));
  /* 12268a9c call dword ptr [0x12289324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289324))), 0x12268aa2u);
  /* 12268aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12268aa4 je 0x12268ab2 */
  if (C.zf) goto L_12268ab2;
  /* 12268aa6 mov dword ptr [0x12286a2c], 1 */
  w32((uint32_t)(0x12286a2c), (0x1u));
  /* 12268ab0 jmp 0x12268ade */
  goto L_12268ade;
L_12268ab2:;
  /* 12268ab2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12268ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 12268ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12268ab8 push 0x122823f0 */
  push32((uint32_t)(0x122823f0u));
  /* 12268abd push 1 */
  push32((uint32_t)(0x1u));
  /* 12268abf push 0 */
  push32((uint32_t)(0x0u));
  /* 12268ac1 call dword ptr [0x12289328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289328))), 0x12268ac7u);
  /* 12268ac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12268ac9 je 0x12268ad7 */
  if (C.zf) goto L_12268ad7;
  /* 12268acb mov dword ptr [0x12286a2c], 2 */
  w32((uint32_t)(0x12286a2c), (0x2u));
  /* 12268ad5 jmp 0x12268ade */
  goto L_12268ade;
L_12268ad7:;
  /* 12268ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268ad9 jmp 0x12268cb9 */
  goto L_12268cb9;
L_12268ade:;
  /* 12268ade cmp dword ptr [0x12286a2c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12286a2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268ae5 jne 0x12268b02 */
  if (!C.zf) goto L_12268b02;
  /* 12268ae7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268aea push edx */
  push32((uint32_t)(EDX));
  /* 12268aeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268aee push eax */
  push32((uint32_t)(EAX));
  /* 12268aef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268af2 push ecx */
  push32((uint32_t)(ECX));
  /* 12268af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268af6 push edx */
  push32((uint32_t)(EDX));
  /* 12268af7 call dword ptr [0x12289324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289324))), 0x12268afdu);
  /* 12268afd jmp 0x12268cb9 */
  goto L_12268cb9;
L_12268b02:;
  /* 12268b02 cmp dword ptr [0x12286a2c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12286a2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268b09 jne 0x12268cb7 */
  if (!C.zf) goto L_12268cb7;
  /* 12268b0f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268b13 jne 0x12268b1d */
  if (!C.zf) goto L_12268b1d;
  /* 12268b15 mov eax, dword ptr [0x122869a0] */
  EAX = (r32((uint32_t)(0x122869a0)));
  /* 12268b1a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12268b1d:;
  /* 12268b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12268b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12268b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268b25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268b28 push ecx */
  push32((uint32_t)(ECX));
  /* 12268b29 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268b2c push edx */
  push32((uint32_t)(EDX));
  /* 12268b2d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12268b32 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12268b35 push eax */
  push32((uint32_t)(EAX));
  /* 12268b36 call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x12268b3cu);
  /* 12268b3c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12268b3f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268b43 jne 0x12268b4c */
  if (!C.zf) goto L_12268b4c;
  /* 12268b45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268b47 jmp 0x12268cb9 */
  goto L_12268cb9;
L_12268b4c:;
  /* 12268b4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12268b53 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12268b56 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268b59 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12268b5b call 0x1225d7a0 */
  push32(0x12268b60u); f_1225d7a0();
  /* 12268b60 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12268b63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12268b66 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12268b69 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12268b6c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12268b6f push edx */
  push32((uint32_t)(EDX));
  /* 12268b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268b72 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12268b75 push eax */
  push32((uint32_t)(EAX));
  /* 12268b76 call 0x1225e370 */
  push32(0x12268b7bu); f_1225e370();
  /* 12268b7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268b7e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12268b85 jmp 0x12268b9e */
  goto L_12268b9e;
  /* 12268b87 mov eax, 1 */
  EAX = (0x1u);
  /* 12268b8c ret  */
  ESPCHK(0x12268a60u, _esp0);
  ESP += 4; return;
  /* 12268b8d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12268b90 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12268b97 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12268b9e:;
  /* 12268b9e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268ba2 jne 0x12268bab */
  if (!C.zf) goto L_12268bab;
  /* 12268ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268ba6 jmp 0x12268cb9 */
  goto L_12268cb9;
L_12268bab:;
  /* 12268bab push 0 */
  push32((uint32_t)(0x0u));
  /* 12268bad push 0 */
  push32((uint32_t)(0x0u));
  /* 12268baf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12268bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12268bb3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12268bb6 push edx */
  push32((uint32_t)(EDX));
  /* 12268bb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268bba push eax */
  push32((uint32_t)(EAX));
  /* 12268bbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12268bbe push ecx */
  push32((uint32_t)(ECX));
  /* 12268bbf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12268bc4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12268bc7 push edx */
  push32((uint32_t)(EDX));
  /* 12268bc8 call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x12268bceu);
  /* 12268bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12268bd0 jne 0x12268bd9 */
  if (!C.zf) goto L_12268bd9;
  /* 12268bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268bd4 jmp 0x12268cb9 */
  goto L_12268cb9;
L_12268bd9:;
  /* 12268bd9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12268be0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12268be3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12268be7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268bea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12268bec call 0x1225d7a0 */
  push32(0x12268bf1u); f_1225d7a0();
  /* 12268bf1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12268bf4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12268bf7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12268bfa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12268bfd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12268c04 jmp 0x12268c1d */
  goto L_12268c1d;
  /* 12268c06 mov eax, 1 */
  EAX = (0x1u);
  /* 12268c0b ret  */
  ESPCHK(0x12268a60u, _esp0);
  ESP += 4; return;
  /* 12268c0c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12268c0f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12268c16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12268c1d:;
  /* 12268c1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268c21 jne 0x12268c2a */
  if (!C.zf) goto L_12268c2a;
  /* 12268c23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268c25 jmp 0x12268cb9 */
  goto L_12268cb9;
L_12268c2a:;
  /* 12268c2a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268c2e jne 0x12268c39 */
  if (!C.zf) goto L_12268c39;
  /* 12268c30 mov edx, dword ptr [0x12286990] */
  EDX = (r32((uint32_t)(0x12286990)));
  /* 12268c36 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12268c39:;
  /* 12268c39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268c3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12268c3f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12268c45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268c48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12268c4b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12268c52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12268c55 push ecx */
  push32((uint32_t)(ECX));
  /* 12268c56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12268c59 push edx */
  push32((uint32_t)(EDX));
  /* 12268c5a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12268c5d push eax */
  push32((uint32_t)(EAX));
  /* 12268c5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268c61 push ecx */
  push32((uint32_t)(ECX));
  /* 12268c62 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12268c65 push edx */
  push32((uint32_t)(EDX));
  /* 12268c66 call dword ptr [0x12289328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289328))), 0x12268c6cu);
  /* 12268c6c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12268c6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268c72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12268c75 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12268c77 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12268c7c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268c82 je 0x12268c98 */
  if (C.zf) goto L_12268c98;
  /* 12268c84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268c87 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12268c8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12268c8c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12268c90 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268c96 je 0x12268c9c */
  if (C.zf) goto L_12268c9c;
L_12268c98:;
  /* 12268c98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268c9a jmp 0x12268cb9 */
  goto L_12268cb9;
L_12268c9c:;
  /* 12268c9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268c9f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12268ca1 push eax */
  push32((uint32_t)(EAX));
  /* 12268ca2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12268ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12268ca6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12268ca9 push edx */
  push32((uint32_t)(EDX));
  /* 12268caa call 0x122624f0 */
  push32(0x12268cafu); f_122624f0();
  /* 12268caf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268cb2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12268cb5 jmp 0x12268cb9 */
  goto L_12268cb9;
L_12268cb7:;
  /* 12268cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12268cb9:;
  /* 12268cb9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12268cbc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12268cbf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12268cc6 pop edi */
  EDI = (pop32());
  /* 12268cc7 pop esi */
  ESI = (pop32());
  /* 12268cc8 pop ebx */
  EBX = (pop32());
  /* 12268cc9 mov esp, ebp */
  ESP = (EBP);
  /* 12268ccb pop ebp */
  EBP = (pop32());
  /* 12268ccc ret  */
  ESPCHK(0x12268a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10018cd0 @ 0x12268cd0 (208 bytes, 85 insns) */
void f_12268cd0(void) {
  FTRACE(0x12268cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12268cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12268cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12268cd3 push edi */
  push32((uint32_t)(EDI));
  /* 12268cd4 push esi */
  push32((uint32_t)(ESI));
  /* 12268cd5 push ebx */
  push32((uint32_t)(EBX));
  /* 12268cd6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12268cd9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12268cdc lea eax, [0x12286988] */
  EAX = ((uint32_t)(0x12286988));
  /* 12268ce2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268ce6 jne 0x12268d23 */
  if (!C.zf) goto L_12268d23;
  /* 12268ce8 mov al, 0xff */
  AL = (0xffu);
  /* 12268cea mov edi, edi */
  EDI = (EDI);
L_12268cec:;
  /* 12268cec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12268cee je 0x12268d1e */
  if (C.zf) goto L_12268d1e;
  /* 12268cf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12268cf2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12268cf3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12268cf5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12268cf6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268cf8 je 0x12268cec */
  if (C.zf) goto L_12268cec;
  /* 12268cfa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12268cfc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268cfe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12268d00 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12268d03 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12268d05 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12268d07 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12268d09 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12268d0b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268d0d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12268d0f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12268d12 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12268d14 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12268d16 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268d18 je 0x12268cec */
  if (C.zf) goto L_12268cec;
  /* 12268d1a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12268d1c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12268d1e:;
  /* 12268d1e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12268d21 jmp 0x12268d9b */
  goto L_12268d9b;
L_12268d23:;
  /* 12268d23 lock inc dword ptr [0x12286b1c] */
  x86_unimpl("lock inc @ 0x12268d23");
  /* 12268d2a cmp dword ptr [0x12286b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268d31 jg 0x12268d37 */
  if ((!C.zf&&C.sf==C.of)) goto L_12268d37;
  /* 12268d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268d35 jmp 0x12268d4c */
  goto L_12268d4c;
L_12268d37:;
  /* 12268d37 lock dec dword ptr [0x12286b1c] */
  x86_unimpl("lock dec @ 0x12268d37");
  /* 12268d3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12268d40 call 0x1225e000 */
  push32(0x12268d45u); f_1225e000();
  /* 12268d45 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12268d4c:;
  /* 12268d4c mov eax, 0xff */
  EAX = (0xffu);
  /* 12268d51 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12268d53 nop  */
  /* nop */
L_12268d54:;
  /* 12268d54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12268d56 je 0x12268d7f */
  if (C.zf) goto L_12268d7f;
  /* 12268d58 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12268d5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12268d5b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12268d5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12268d5e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268d60 je 0x12268d54 */
  if (C.zf) goto L_12268d54;
  /* 12268d62 push eax */
  push32((uint32_t)(EAX));
  /* 12268d63 push ebx */
  push32((uint32_t)(EBX));
  /* 12268d64 call 0x12269e40 */
  push32(0x12268d69u); f_12269e40();
  /* 12268d69 mov ebx, eax */
  EBX = (EAX);
  /* 12268d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268d6e call 0x12269e40 */
  push32(0x12268d73u); f_12269e40();
  /* 12268d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268d76 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268d78 je 0x12268d54 */
  if (C.zf) goto L_12268d54;
  /* 12268d7a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268d7c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12268d7f:;
  /* 12268d7f mov ebx, eax */
  EBX = (EAX);
  /* 12268d81 pop eax */
  EAX = (pop32());
  /* 12268d82 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268d84 jne 0x12268d8f */
  if (!C.zf) goto L_12268d8f;
  /* 12268d86 lock dec dword ptr [0x12286b1c] */
  x86_unimpl("lock dec @ 0x12268d86");
  /* 12268d8d jmp 0x12268d99 */
  goto L_12268d99;
L_12268d8f:;
  /* 12268d8f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12268d91 call 0x1225e0a0 */
  push32(0x12268d96u); f_1225e0a0();
  /* 12268d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12268d99:;
  /* 12268d99 mov eax, ebx */
  EAX = (EBX);
L_12268d9b:;
  /* 12268d9b pop ebx */
  EBX = (pop32());
  /* 12268d9c pop esi */
  ESI = (pop32());
  /* 12268d9d pop edi */
  EDI = (pop32());
  /* 12268d9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12268d9f ret  */
  ESPCHK(0x12268cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018da0 @ 0x12268da0 (257 bytes, 103 insns) */
void f_12268da0(void) {
  FTRACE(0x12268da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12268da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12268da1 mov ebp, esp */
  EBP = (ESP);
  /* 12268da3 push edi */
  push32((uint32_t)(EDI));
  /* 12268da4 push esi */
  push32((uint32_t)(ESI));
  /* 12268da5 push ebx */
  push32((uint32_t)(EBX));
  /* 12268da6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12268da9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12268dab je 0x12268e9a */
  if (C.zf) goto L_12268e9a;
  /* 12268db1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12268db4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12268db7 lea eax, [0x12286988] */
  EAX = ((uint32_t)(0x12286988));
  /* 12268dbd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268dc1 jne 0x12268e11 */
  if (!C.zf) goto L_12268e11;
  /* 12268dc3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12268dc5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12268dc7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12268dc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12268dcc:;
  /* 12268dcc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12268dce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12268dd0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12268dd2 je 0x12268df5 */
  if (C.zf) goto L_12268df5;
  /* 12268dd4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12268dd6 je 0x12268df5 */
  if (C.zf) goto L_12268df5;
  /* 12268dd8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12268dd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12268dda cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268ddc jb 0x12268de4 */
  if (C.cf) goto L_12268de4;
  /* 12268dde cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268de0 ja 0x12268de4 */
  if ((!C.cf&&!C.zf)) goto L_12268de4;
  /* 12268de2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12268de4:;
  /* 12268de4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268de6 jb 0x12268dee */
  if (C.cf) goto L_12268dee;
  /* 12268de8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268dea ja 0x12268dee */
  if ((!C.cf&&!C.zf)) goto L_12268dee;
  /* 12268dec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12268dee:;
  /* 12268dee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268df0 jne 0x12268dff */
  if (!C.zf) goto L_12268dff;
  /* 12268df2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12268df3 jne 0x12268dcc */
  if (!C.zf) goto L_12268dcc;
L_12268df5:;
  /* 12268df5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12268df7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12268df9 je 0x12268e9a */
  if (C.zf) goto L_12268e9a;
L_12268dff:;
  /* 12268dff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12268e04 jb 0x12268e9a */
  if (C.cf) goto L_12268e9a;
  /* 12268e0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12268e0c jmp 0x12268e9a */
  goto L_12268e9a;
L_12268e11:;
  /* 12268e11 lock inc dword ptr [0x12286b1c] */
  x86_unimpl("lock inc @ 0x12268e11");
  /* 12268e18 cmp dword ptr [0x12286b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268e1f jg 0x12268e25 */
  if ((!C.zf&&C.sf==C.of)) goto L_12268e25;
  /* 12268e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12268e23 jmp 0x12268e3e */
  goto L_12268e3e;
L_12268e25:;
  /* 12268e25 lock dec dword ptr [0x12286b1c] */
  x86_unimpl("lock dec @ 0x12268e25");
  /* 12268e2c mov ebx, ecx */
  EBX = (ECX);
  /* 12268e2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12268e30 call 0x1225e000 */
  push32(0x12268e35u); f_1225e000();
  /* 12268e35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12268e3c mov ecx, ebx */
  ECX = (EBX);
L_12268e3e:;
  /* 12268e3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268e40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12268e42 mov edi, edi */
  EDI = (EDI);
L_12268e44:;
  /* 12268e44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12268e46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268e48 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12268e4a je 0x12268e6f */
  if (C.zf) goto L_12268e6f;
  /* 12268e4c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12268e4e je 0x12268e6f */
  if (C.zf) goto L_12268e6f;
  /* 12268e50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12268e51 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12268e52 push ecx */
  push32((uint32_t)(ECX));
  /* 12268e53 push eax */
  push32((uint32_t)(EAX));
  /* 12268e54 push ebx */
  push32((uint32_t)(EBX));
  /* 12268e55 call 0x12269e40 */
  push32(0x12268e5au); f_12269e40();
  /* 12268e5a mov ebx, eax */
  EBX = (EAX);
  /* 12268e5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268e5f call 0x12269e40 */
  push32(0x12268e64u); f_12269e40();
  /* 12268e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268e67 pop ecx */
  ECX = (pop32());
  /* 12268e68 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268e6a jne 0x12268e75 */
  if (!C.zf) goto L_12268e75;
  /* 12268e6c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12268e6d jne 0x12268e44 */
  if (!C.zf) goto L_12268e44;
L_12268e6f:;
  /* 12268e6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12268e71 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268e73 je 0x12268e7e */
  if (C.zf) goto L_12268e7e;
L_12268e75:;
  /* 12268e75 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12268e7a jb 0x12268e7e */
  if (C.cf) goto L_12268e7e;
  /* 12268e7c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12268e7e:;
  /* 12268e7e pop eax */
  EAX = (pop32());
  /* 12268e7f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268e81 jne 0x12268e8c */
  if (!C.zf) goto L_12268e8c;
  /* 12268e83 lock dec dword ptr [0x12286b1c] */
  x86_unimpl("lock dec @ 0x12268e83");
  /* 12268e8a jmp 0x12268e9a */
  goto L_12268e9a;
L_12268e8c:;
  /* 12268e8c mov ebx, ecx */
  EBX = (ECX);
  /* 12268e8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12268e90 call 0x1225e0a0 */
  push32(0x12268e95u); f_1225e0a0();
  /* 12268e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268e98 mov ecx, ebx */
  ECX = (EBX);
L_12268e9a:;
  /* 12268e9a mov eax, ecx */
  EAX = (ECX);
  /* 12268e9c pop ebx */
  EBX = (pop32());
  /* 12268e9d pop esi */
  ESI = (pop32());
  /* 12268e9e pop edi */
  EDI = (pop32());
  /* 12268e9f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12268ea0 ret  */
  ESPCHK(0x12268da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018eb0 @ 0x12268eb0 (255 bytes, 88 insns) */
void f_12268eb0(void) {
  FTRACE(0x12268eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12268eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12268eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12268eb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12268eb6:;
  /* 12268eb6 cmp dword ptr [0x12284ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12284ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268ebd jle 0x12268ed6 */
  if ((C.zf||C.sf!=C.of)) goto L_12268ed6;
  /* 12268ebf push 8 */
  push32((uint32_t)(0x8u));
  /* 12268ec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268ec4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12268ec6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12268ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 12268ec9 call 0x12260610 */
  push32(0x12268eceu); f_12260610();
  /* 12268ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268ed1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12268ed4 jmp 0x12268eef */
  goto L_12268eef;
L_12268ed6:;
  /* 12268ed6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268edb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12268edd mov ecx, dword ptr [0x12284c98] */
  ECX = (r32((uint32_t)(0x12284c98)));
  /* 12268ee3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12268ee5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12268ee9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12268eec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12268eef:;
  /* 12268eef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268ef3 je 0x12268f00 */
  if (C.zf) goto L_12268f00;
  /* 12268ef5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268ef8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268efb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12268efe jmp 0x12268eb6 */
  goto L_12268eb6;
L_12268f00:;
  /* 12268f00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268f03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12268f05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12268f07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12268f0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268f0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268f10 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12268f13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268f16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12268f19 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268f1d je 0x12268f25 */
  if (C.zf) goto L_12268f25;
  /* 12268f1f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268f23 jne 0x12268f38 */
  if (!C.zf) goto L_12268f38;
L_12268f25:;
  /* 12268f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268f28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268f2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12268f2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12268f2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268f32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268f35 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12268f38:;
  /* 12268f38 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12268f3f:;
  /* 12268f3f cmp dword ptr [0x12284ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12284ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268f46 jle 0x12268f5b */
  if ((C.zf||C.sf!=C.of)) goto L_12268f5b;
  /* 12268f48 push 4 */
  push32((uint32_t)(0x4u));
  /* 12268f4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268f4d push edx */
  push32((uint32_t)(EDX));
  /* 12268f4e call 0x12260610 */
  push32(0x12268f53u); f_12260610();
  /* 12268f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268f56 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12268f59 jmp 0x12268f70 */
  goto L_12268f70;
L_12268f5b:;
  /* 12268f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268f5e mov ecx, dword ptr [0x12284c98] */
  ECX = (r32((uint32_t)(0x12284c98)));
  /* 12268f64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12268f66 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12268f6a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12268f6d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12268f70:;
  /* 12268f70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268f74 je 0x12268f9b */
  if (C.zf) goto L_12268f9b;
  /* 12268f76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12268f79 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12268f7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12268f7f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12268f83 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12268f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268f89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12268f8b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12268f8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12268f90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268f93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12268f96 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12268f99 jmp 0x12268f3f */
  goto L_12268f3f;
L_12268f9b:;
  /* 12268f9b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268f9f jne 0x12268fa8 */
  if (!C.zf) goto L_12268fa8;
  /* 12268fa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12268fa4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12268fa6 jmp 0x12268fab */
  goto L_12268fab;
L_12268fa8:;
  /* 12268fa8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12268fab:;
  /* 12268fab mov esp, ebp */
  ESP = (EBP);
  /* 12268fad pop ebp */
  EBP = (pop32());
  /* 12268fae ret  */
  ESPCHK(0x12268eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fb0 @ 0x12268fb0 (17 bytes, 8 insns) */
void f_12268fb0(void) {
  FTRACE(0x12268fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12268fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12268fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12268fb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268fb6 push eax */
  push32((uint32_t)(EAX));
  /* 12268fb7 call 0x12268eb0 */
  push32(0x12268fbcu); f_12268eb0();
  /* 12268fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268fbf pop ebp */
  EBP = (pop32());
  /* 12268fc0 ret  */
  ESPCHK(0x12268fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fd0 @ 0x12268fd0 (297 bytes, 106 insns) */
void f_12268fd0(void) {
  FTRACE(0x12268fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12268fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12268fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12268fd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12268fd6 push esi */
  push32((uint32_t)(ESI));
L_12268fd7:;
  /* 12268fd7 cmp dword ptr [0x12284ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12284ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12268fde jle 0x12268ff7 */
  if ((C.zf||C.sf!=C.of)) goto L_12268ff7;
  /* 12268fe0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12268fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268fe5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12268fe7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12268fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 12268fea call 0x12260610 */
  push32(0x12268fefu); f_12260610();
  /* 12268fef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12268ff2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12268ff5 jmp 0x12269010 */
  goto L_12269010;
L_12268ff7:;
  /* 12268ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12268ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12268ffc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12268ffe mov ecx, dword ptr [0x12284c98] */
  ECX = (r32((uint32_t)(0x12284c98)));
  /* 12269004 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12269006 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1226900a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1226900d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12269010:;
  /* 12269010 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269014 je 0x12269021 */
  if (C.zf) goto L_12269021;
  /* 12269016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269019 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226901c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1226901f jmp 0x12268fd7 */
  goto L_12268fd7;
L_12269021:;
  /* 12269021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269024 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12269026 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12269028 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1226902b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226902e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269031 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12269034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12269037 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1226903a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226903e je 0x12269046 */
  if (C.zf) goto L_12269046;
  /* 12269040 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269044 jne 0x12269059 */
  if (!C.zf) goto L_12269059;
L_12269046:;
  /* 12269046 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269049 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226904b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1226904d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12269050 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269053 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269056 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12269059:;
  /* 12269059 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12269060 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12269067:;
  /* 12269067 cmp dword ptr [0x12284ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12284ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226906e jle 0x12269083 */
  if ((C.zf||C.sf!=C.of)) goto L_12269083;
  /* 12269070 push 4 */
  push32((uint32_t)(0x4u));
  /* 12269072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12269075 push edx */
  push32((uint32_t)(EDX));
  /* 12269076 call 0x12260610 */
  push32(0x1226907bu); f_12260610();
  /* 1226907b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226907e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12269081 jmp 0x12269098 */
  goto L_12269098;
L_12269083:;
  /* 12269083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12269086 mov ecx, dword ptr [0x12284c98] */
  ECX = (r32((uint32_t)(0x12284c98)));
  /* 1226908c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226908e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12269092 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12269095 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12269098:;
  /* 12269098 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226909c je 0x122690d9 */
  if (C.zf) goto L_122690d9;
  /* 1226909e push 0 */
  push32((uint32_t)(0x0u));
  /* 122690a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 122690a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122690a5 push eax */
  push32((uint32_t)(EAX));
  /* 122690a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122690a9 push ecx */
  push32((uint32_t)(ECX));
  /* 122690aa call 0x12269f70 */
  push32(0x122690afu); f_12269f70();
  /* 122690af mov ecx, eax */
  ECX = (EAX);
  /* 122690b1 mov esi, edx */
  ESI = (EDX);
  /* 122690b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122690b6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122690b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122690ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122690bc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122690be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122690c1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 122690c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122690c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122690c9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122690cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122690ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122690d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122690d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122690d7 jmp 0x12269067 */
  goto L_12269067;
L_122690d9:;
  /* 122690d9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122690dd jne 0x122690ee */
  if (!C.zf) goto L_122690ee;
  /* 122690df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122690e2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122690e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122690e7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122690ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122690ec jmp 0x122690f4 */
  goto L_122690f4;
L_122690ee:;
  /* 122690ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122690f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_122690f4:;
  /* 122690f4 pop esi */
  ESI = (pop32());
  /* 122690f5 mov esp, ebp */
  ESP = (EBP);
  /* 122690f7 pop ebp */
  EBP = (pop32());
  /* 122690f8 ret  */
  ESPCHK(0x12268fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019100 @ 0x12269100 (61 bytes, 18 insns) */
void f_12269100(void) {
  FTRACE(0x12269100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269100 push ebp */
  push32((uint32_t)(EBP));
  /* 12269101 mov ebp, esp */
  EBP = (ESP);
  /* 12269103 cmp dword ptr [0x12286ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226910a jne 0x1226913b */
  if (!C.zf) goto L_1226913b;
  /* 1226910c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1226910e call 0x1225e000 */
  push32(0x12269113u); f_1225e000();
  /* 12269113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269116 cmp dword ptr [0x12286ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226911d jne 0x12269131 */
  if (!C.zf) goto L_12269131;
  /* 1226911f call 0x12269160 */
  push32(0x12269124u); f_12269160();
  /* 12269124 mov eax, dword ptr [0x12286ae8] */
  EAX = (r32((uint32_t)(0x12286ae8)));
  /* 12269129 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226912c mov dword ptr [0x12286ae8], eax */
  w32((uint32_t)(0x12286ae8), (EAX));
L_12269131:;
  /* 12269131 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12269133 call 0x1225e0a0 */
  push32(0x12269138u); f_1225e0a0();
  /* 12269138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226913b:;
  /* 1226913b pop ebp */
  EBP = (pop32());
  /* 1226913c ret  */
  ESPCHK(0x12269100u, _esp0);
  ESP += 4; return;
}

/* FUN_10019140 @ 0x12269140 (30 bytes, 11 insns) */
void f_12269140(void) {
  FTRACE(0x12269140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269140 push ebp */
  push32((uint32_t)(EBP));
  /* 12269141 mov ebp, esp */
  EBP = (ESP);
  /* 12269143 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12269145 call 0x1225e000 */
  push32(0x1226914au); f_1225e000();
  /* 1226914a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226914d call 0x12269160 */
  push32(0x12269152u); f_12269160();
  /* 12269152 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12269154 call 0x1225e0a0 */
  push32(0x12269159u); f_1225e0a0();
  /* 12269159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226915c pop ebp */
  EBP = (pop32());
  /* 1226915d ret  */
  ESPCHK(0x12269140u, _esp0);
  ESP += 4; return;
}

/* FUN_10019160 @ 0x12269160 (939 bytes, 266 insns) */
void f_12269160(void) {
  FTRACE(0x12269160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269160 push ebp */
  push32((uint32_t)(EBP));
  /* 12269161 mov ebp, esp */
  EBP = (ESP);
  /* 12269163 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12269166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1226916d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1226916f call 0x1225e000 */
  push32(0x12269174u); f_1225e000();
  /* 12269174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269177 mov dword ptr [0x12286a30], 0 */
  w32((uint32_t)(0x12286a30), (0x0u));
  /* 12269181 mov dword ptr [0x12285e38], 0xffffffff */
  w32((uint32_t)(0x12285e38), (0xffffffffu));
  /* 1226918b mov eax, dword ptr [0x12285e38] */
  EAX = (r32((uint32_t)(0x12285e38)));
  /* 12269190 mov dword ptr [0x12285e28], eax */
  w32((uint32_t)(0x12285e28), (EAX));
  /* 12269195 push 0x12282d20 */
  push32((uint32_t)(0x12282d20u));
  /* 1226919a call 0x12269fe0 */
  push32(0x1226919fu); f_12269fe0();
  /* 1226919f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122691a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122691a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122691a9 jne 0x122692e3 */
  if (!C.zf) goto L_122692e3;
  /* 122691af push 0xc */
  push32((uint32_t)(0xcu));
  /* 122691b1 call 0x1225e0a0 */
  push32(0x122691b6u); f_1225e0a0();
  /* 122691b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122691b9 push 0x12286a38 */
  push32((uint32_t)(0x12286a38u));
  /* 122691be call dword ptr [0x122892e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892e8))), 0x122691c4u);
  /* 122691c4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122691c7 je 0x122692de */
  if (C.zf) goto L_122692de;
  /* 122691cd mov dword ptr [0x12286a30], 1 */
  w32((uint32_t)(0x12286a30), (0x1u));
  /* 122691d7 mov ecx, dword ptr [0x12286a38] */
  ECX = (r32((uint32_t)(0x12286a38)));
  /* 122691dd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122691e0 mov dword ptr [0x12285d90], ecx */
  w32((uint32_t)(0x12285d90), (ECX));
  /* 122691e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122691e8 mov dx, word ptr [0x12286a7e] */
  DX = (r16((uint32_t)(0x12286a7e)));
  /* 122691ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122691f1 je 0x12269209 */
  if (C.zf) goto L_12269209;
  /* 122691f3 mov eax, dword ptr [0x12286a8c] */
  EAX = (r32((uint32_t)(0x12286a8c)));
  /* 122691f8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122691fb mov ecx, dword ptr [0x12285d90] */
  ECX = (r32((uint32_t)(0x12285d90)));
  /* 12269201 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269203 mov dword ptr [0x12285d90], ecx */
  w32((uint32_t)(0x12285d90), (ECX));
L_12269209:;
  /* 12269209 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226920b mov dx, word ptr [0x12286ad2] */
  DX = (r16((uint32_t)(0x12286ad2)));
  /* 12269212 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12269214 je 0x1226923e */
  if (C.zf) goto L_1226923e;
  /* 12269216 cmp dword ptr [0x12286ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226921d je 0x1226923e */
  if (C.zf) goto L_1226923e;
  /* 1226921f mov dword ptr [0x12285d94], 1 */
  w32((uint32_t)(0x12285d94), (0x1u));
  /* 12269229 mov eax, dword ptr [0x12286ae0] */
  EAX = (r32((uint32_t)(0x12286ae0)));
  /* 1226922e sub eax, dword ptr [0x12286a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12286a8c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12269234 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12269237 mov dword ptr [0x12285d98], eax */
  w32((uint32_t)(0x12285d98), (EAX));
  /* 1226923c jmp 0x12269252 */
  goto L_12269252;
L_1226923e:;
  /* 1226923e mov dword ptr [0x12285d94], 0 */
  w32((uint32_t)(0x12285d94), (0x0u));
  /* 12269248 mov dword ptr [0x12285d98], 0 */
  w32((uint32_t)(0x12285d98), (0x0u));
L_12269252:;
  /* 12269252 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12269255 push ecx */
  push32((uint32_t)(ECX));
  /* 12269256 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269258 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1226925a mov edx, dword ptr [0x12285e1c] */
  EDX = (r32((uint32_t)(0x12285e1c)));
  /* 12269260 push edx */
  push32((uint32_t)(EDX));
  /* 12269261 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12269263 push 0x12286a3c */
  push32((uint32_t)(0x12286a3cu));
  /* 12269268 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1226926d mov eax, dword ptr [0x122869a0] */
  EAX = (r32((uint32_t)(0x122869a0)));
  /* 12269272 push eax */
  push32((uint32_t)(EAX));
  /* 12269273 call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x12269279u);
  /* 12269279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226927b je 0x1226928f */
  if (C.zf) goto L_1226928f;
  /* 1226927d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269281 jne 0x1226928f */
  if (!C.zf) goto L_1226928f;
  /* 12269283 mov ecx, dword ptr [0x12285e1c] */
  ECX = (r32((uint32_t)(0x12285e1c)));
  /* 12269289 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1226928d jmp 0x12269298 */
  goto L_12269298;
L_1226928f:;
  /* 1226928f mov edx, dword ptr [0x12285e1c] */
  EDX = (r32((uint32_t)(0x12285e1c)));
  /* 12269295 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12269298:;
  /* 12269298 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1226929b push eax */
  push32((uint32_t)(EAX));
  /* 1226929c push 0 */
  push32((uint32_t)(0x0u));
  /* 1226929e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 122692a0 mov ecx, dword ptr [0x12285e20] */
  ECX = (r32((uint32_t)(0x12285e20)));
  /* 122692a6 push ecx */
  push32((uint32_t)(ECX));
  /* 122692a7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122692a9 push 0x12286a90 */
  push32((uint32_t)(0x12286a90u));
  /* 122692ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122692b3 mov edx, dword ptr [0x122869a0] */
  EDX = (r32((uint32_t)(0x122869a0)));
  /* 122692b9 push edx */
  push32((uint32_t)(EDX));
  /* 122692ba call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x122692c0u);
  /* 122692c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122692c2 je 0x122692d5 */
  if (C.zf) goto L_122692d5;
  /* 122692c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122692c8 jne 0x122692d5 */
  if (!C.zf) goto L_122692d5;
  /* 122692ca mov eax, dword ptr [0x12285e20] */
  EAX = (r32((uint32_t)(0x12285e20)));
  /* 122692cf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 122692d3 jmp 0x122692de */
  goto L_122692de;
L_122692d5:;
  /* 122692d5 mov ecx, dword ptr [0x12285e20] */
  ECX = (r32((uint32_t)(0x12285e20)));
  /* 122692db mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_122692de:;
  /* 122692de jmp 0x12269507 */
  goto L_12269507;
L_122692e3:;
  /* 122692e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122692e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122692e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122692eb je 0x1226930d */
  if (C.zf) goto L_1226930d;
  /* 122692ed cmp dword ptr [0x12286ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122692f4 je 0x1226931c */
  if (C.zf) goto L_1226931c;
  /* 122692f6 mov ecx, dword ptr [0x12286ae4] */
  ECX = (r32((uint32_t)(0x12286ae4)));
  /* 122692fc push ecx */
  push32((uint32_t)(ECX));
  /* 122692fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269300 push edx */
  push32((uint32_t)(EDX));
  /* 12269301 call 0x12266290 */
  push32(0x12269306u); f_12266290();
  /* 12269306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226930b jne 0x1226931c */
  if (!C.zf) goto L_1226931c;
L_1226930d:;
  /* 1226930d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1226930f call 0x1225e0a0 */
  push32(0x12269314u); f_1225e0a0();
  /* 12269314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269317 jmp 0x12269507 */
  goto L_12269507;
L_1226931c:;
  /* 1226931c push 2 */
  push32((uint32_t)(0x2u));
  /* 1226931e mov eax, dword ptr [0x12286ae4] */
  EAX = (r32((uint32_t)(0x12286ae4)));
  /* 12269323 push eax */
  push32((uint32_t)(EAX));
  /* 12269324 call 0x1225b090 */
  push32(0x12269329u); f_1225b090();
  /* 12269329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226932c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12269331 push 0x12282d18 */
  push32((uint32_t)(0x12282d18u));
  /* 12269336 push 2 */
  push32((uint32_t)(0x2u));
  /* 12269338 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226933b push ecx */
  push32((uint32_t)(ECX));
  /* 1226933c call 0x1225d430 */
  push32(0x12269341u); f_1225d430();
  /* 12269341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269344 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269347 push eax */
  push32((uint32_t)(EAX));
  /* 12269348 call 0x1225a600 */
  push32(0x1226934du); f_1225a600();
  /* 1226934d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269350 mov dword ptr [0x12286ae4], eax */
  w32((uint32_t)(0x12286ae4), (EAX));
  /* 12269355 cmp dword ptr [0x12286ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226935c jne 0x1226936d */
  if (!C.zf) goto L_1226936d;
  /* 1226935e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12269360 call 0x1225e0a0 */
  push32(0x12269365u); f_1225e0a0();
  /* 12269365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269368 jmp 0x12269507 */
  goto L_12269507;
L_1226936d:;
  /* 1226936d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269370 push edx */
  push32((uint32_t)(EDX));
  /* 12269371 mov eax, dword ptr [0x12286ae4] */
  EAX = (r32((uint32_t)(0x12286ae4)));
  /* 12269376 push eax */
  push32((uint32_t)(EAX));
  /* 12269377 call 0x1225d5b0 */
  push32(0x1226937cu); f_1225d5b0();
  /* 1226937c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226937f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12269381 call 0x1225e0a0 */
  push32(0x12269386u); f_1225e0a0();
  /* 12269386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269389 push 3 */
  push32((uint32_t)(0x3u));
  /* 1226938b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226938e push ecx */
  push32((uint32_t)(ECX));
  /* 1226938f mov edx, dword ptr [0x12285e1c] */
  EDX = (r32((uint32_t)(0x12285e1c)));
  /* 12269395 push edx */
  push32((uint32_t)(EDX));
  /* 12269396 call 0x1225de20 */
  push32(0x1226939bu); f_1225de20();
  /* 1226939b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226939e mov eax, dword ptr [0x12285e1c] */
  EAX = (r32((uint32_t)(0x12285e1c)));
  /* 122693a3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 122693a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122693aa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122693ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122693b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122693b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122693b6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122693b9 jne 0x122693cd */
  if (!C.zf) goto L_122693cd;
  /* 122693bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122693be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122693c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122693c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122693c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122693ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122693cd:;
  /* 122693cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122693d0 push eax */
  push32((uint32_t)(EAX));
  /* 122693d1 call 0x12268eb0 */
  push32(0x122693d6u); f_12268eb0();
  /* 122693d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122693d9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122693df mov dword ptr [0x12285d90], eax */
  w32((uint32_t)(0x12285d90), (EAX));
L_122693e4:;
  /* 122693e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122693e7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122693ea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122693ed je 0x12269405 */
  if (C.zf) goto L_12269405;
  /* 122693ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122693f2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122693f5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122693f8 jl 0x12269410 */
  if ((C.sf!=C.of)) goto L_12269410;
  /* 122693fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122693fd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12269400 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269403 jg 0x12269410 */
  if ((!C.zf&&C.sf==C.of)) goto L_12269410;
L_12269405:;
  /* 12269405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269408 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226940b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1226940e jmp 0x122693e4 */
  goto L_122693e4;
L_12269410:;
  /* 12269410 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269413 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12269416 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269419 jne 0x122694b5 */
  if (!C.zf) goto L_122694b5;
  /* 1226941f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269422 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269425 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12269428 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226942b push edx */
  push32((uint32_t)(EDX));
  /* 1226942c call 0x12268eb0 */
  push32(0x12269431u); f_12268eb0();
  /* 12269431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269434 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12269437 mov ecx, dword ptr [0x12285d90] */
  ECX = (r32((uint32_t)(0x12285d90)));
  /* 1226943d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226943f mov dword ptr [0x12285d90], ecx */
  w32((uint32_t)(0x12285d90), (ECX));
L_12269445:;
  /* 12269445 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269448 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1226944b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226944e jl 0x12269466 */
  if ((C.sf!=C.of)) goto L_12269466;
  /* 12269450 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269453 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12269456 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269459 jg 0x12269466 */
  if ((!C.zf&&C.sf==C.of)) goto L_12269466;
  /* 1226945b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226945e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269461 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12269464 jmp 0x12269445 */
  goto L_12269445;
L_12269466:;
  /* 12269466 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269469 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1226946c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226946f jne 0x122694b5 */
  if (!C.zf) goto L_122694b5;
  /* 12269471 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269474 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269477 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1226947a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226947d push ecx */
  push32((uint32_t)(ECX));
  /* 1226947e call 0x12268eb0 */
  push32(0x12269483u); f_12268eb0();
  /* 12269483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269486 mov edx, dword ptr [0x12285d90] */
  EDX = (r32((uint32_t)(0x12285d90)));
  /* 1226948c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226948e mov dword ptr [0x12285d90], edx */
  w32((uint32_t)(0x12285d90), (EDX));
L_12269494:;
  /* 12269494 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269497 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1226949a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226949d jl 0x122694b5 */
  if ((C.sf!=C.of)) goto L_122694b5;
  /* 1226949f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122694a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122694a5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122694a8 jg 0x122694b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_122694b5;
  /* 122694aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122694ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122694b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122694b3 jmp 0x12269494 */
  goto L_12269494;
L_122694b5:;
  /* 122694b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122694b9 je 0x122694c9 */
  if (C.zf) goto L_122694c9;
  /* 122694bb mov edx, dword ptr [0x12285d90] */
  EDX = (r32((uint32_t)(0x12285d90)));
  /* 122694c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122694c3 mov dword ptr [0x12285d90], edx */
  w32((uint32_t)(0x12285d90), (EDX));
L_122694c9:;
  /* 122694c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122694cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122694cf mov dword ptr [0x12285d94], ecx */
  w32((uint32_t)(0x12285d94), (ECX));
  /* 122694d5 cmp dword ptr [0x12285d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12285d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122694dc je 0x122694fe */
  if (C.zf) goto L_122694fe;
  /* 122694de push 3 */
  push32((uint32_t)(0x3u));
  /* 122694e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122694e3 push edx */
  push32((uint32_t)(EDX));
  /* 122694e4 mov eax, dword ptr [0x12285e20] */
  EAX = (r32((uint32_t)(0x12285e20)));
  /* 122694e9 push eax */
  push32((uint32_t)(EAX));
  /* 122694ea call 0x1225de20 */
  push32(0x122694efu); f_1225de20();
  /* 122694ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122694f2 mov ecx, dword ptr [0x12285e20] */
  ECX = (r32((uint32_t)(0x12285e20)));
  /* 122694f8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 122694fc jmp 0x12269507 */
  goto L_12269507;
L_122694fe:;
  /* 122694fe mov edx, dword ptr [0x12285e20] */
  EDX = (r32((uint32_t)(0x12285e20)));
  /* 12269504 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12269507:;
  /* 12269507 mov esp, ebp */
  ESP = (EBP);
  /* 12269509 pop ebp */
  EBP = (pop32());
  /* 1226950a ret  */
  ESPCHK(0x12269160u, _esp0);
  ESP += 4; return;
}

/* FUN_10019510 @ 0x12269510 (46 bytes, 18 insns) */
void f_12269510(void) {
  FTRACE(0x12269510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269510 push ebp */
  push32((uint32_t)(EBP));
  /* 12269511 mov ebp, esp */
  EBP = (ESP);
  /* 12269513 push ecx */
  push32((uint32_t)(ECX));
  /* 12269514 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12269516 call 0x1225e000 */
  push32(0x1226951bu); f_1225e000();
  /* 1226951b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226951e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269521 push eax */
  push32((uint32_t)(EAX));
  /* 12269522 call 0x12269540 */
  push32(0x12269527u); f_12269540();
  /* 12269527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226952a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1226952d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1226952f call 0x1225e0a0 */
  push32(0x12269534u); f_1225e0a0();
  /* 12269534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269537 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226953a mov esp, ebp */
  ESP = (EBP);
  /* 1226953c pop ebp */
  EBP = (pop32());
  /* 1226953d ret  */
  ESPCHK(0x12269510u, _esp0);
  ESP += 4; return;
}

/* FUN_10019540 @ 0x12269540 (762 bytes, 246 insns) */
void f_12269540(void) {
  FTRACE(0x12269540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269540 push ebp */
  push32((uint32_t)(EBP));
  /* 12269541 mov ebp, esp */
  EBP = (ESP);
  /* 12269543 push ecx */
  push32((uint32_t)(ECX));
  /* 12269544 cmp dword ptr [0x12285d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12285d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226954b jne 0x12269554 */
  if (!C.zf) goto L_12269554;
  /* 1226954d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226954f jmp 0x12269836 */
  goto L_12269836;
L_12269554:;
  /* 12269554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269557 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1226955a cmp ecx, dword ptr [0x12285e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12285e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269560 jne 0x12269574 */
  if (!C.zf) goto L_12269574;
  /* 12269562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269565 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12269568 cmp eax, dword ptr [0x12285e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12285e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226956e je 0x1226973b */
  if (C.zf) goto L_1226973b;
L_12269574:;
  /* 12269574 cmp dword ptr [0x12286a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226957b je 0x122696f5 */
  if (C.zf) goto L_122696f5;
  /* 12269581 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12269583 mov cx, word ptr [0x12286ad0] */
  CX = (r16((uint32_t)(0x12286ad0)));
  /* 1226958a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1226958c jne 0x122695e9 */
  if (!C.zf) goto L_122695e9;
  /* 1226958e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12269590 mov dx, word ptr [0x12286ade] */
  DX = (r16((uint32_t)(0x12286ade)));
  /* 12269597 push edx */
  push32((uint32_t)(EDX));
  /* 12269598 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226959a mov ax, word ptr [0x12286adc] */
  AX = (r16((uint32_t)(0x12286adc)));
  /* 122695a0 push eax */
  push32((uint32_t)(EAX));
  /* 122695a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122695a3 mov cx, word ptr [0x12286ada] */
  CX = (r16((uint32_t)(0x12286ada)));
  /* 122695aa push ecx */
  push32((uint32_t)(ECX));
  /* 122695ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122695ad mov dx, word ptr [0x12286ad8] */
  DX = (r16((uint32_t)(0x12286ad8)));
  /* 122695b4 push edx */
  push32((uint32_t)(EDX));
  /* 122695b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122695b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122695b9 mov ax, word ptr [0x12286ad4] */
  AX = (r16((uint32_t)(0x12286ad4)));
  /* 122695bf push eax */
  push32((uint32_t)(EAX));
  /* 122695c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122695c2 mov cx, word ptr [0x12286ad6] */
  CX = (r16((uint32_t)(0x12286ad6)));
  /* 122695c9 push ecx */
  push32((uint32_t)(ECX));
  /* 122695ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122695cc mov dx, word ptr [0x12286ad2] */
  DX = (r16((uint32_t)(0x12286ad2)));
  /* 122695d3 push edx */
  push32((uint32_t)(EDX));
  /* 122695d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122695d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122695da push ecx */
  push32((uint32_t)(ECX));
  /* 122695db push 1 */
  push32((uint32_t)(0x1u));
  /* 122695dd push 1 */
  push32((uint32_t)(0x1u));
  /* 122695df call 0x12269840 */
  push32(0x122695e4u); f_12269840();
  /* 122695e4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122695e7 jmp 0x1226963a */
  goto L_1226963a;
L_122695e9:;
  /* 122695e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122695eb mov dx, word ptr [0x12286ade] */
  DX = (r16((uint32_t)(0x12286ade)));
  /* 122695f2 push edx */
  push32((uint32_t)(EDX));
  /* 122695f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122695f5 mov ax, word ptr [0x12286adc] */
  AX = (r16((uint32_t)(0x12286adc)));
  /* 122695fb push eax */
  push32((uint32_t)(EAX));
  /* 122695fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122695fe mov cx, word ptr [0x12286ada] */
  CX = (r16((uint32_t)(0x12286ada)));
  /* 12269605 push ecx */
  push32((uint32_t)(ECX));
  /* 12269606 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12269608 mov dx, word ptr [0x12286ad8] */
  DX = (r16((uint32_t)(0x12286ad8)));
  /* 1226960f push edx */
  push32((uint32_t)(EDX));
  /* 12269610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269612 mov ax, word ptr [0x12286ad6] */
  AX = (r16((uint32_t)(0x12286ad6)));
  /* 12269618 push eax */
  push32((uint32_t)(EAX));
  /* 12269619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226961b push 0 */
  push32((uint32_t)(0x0u));
  /* 1226961d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226961f mov cx, word ptr [0x12286ad2] */
  CX = (r16((uint32_t)(0x12286ad2)));
  /* 12269626 push ecx */
  push32((uint32_t)(ECX));
  /* 12269627 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226962a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1226962d push eax */
  push32((uint32_t)(EAX));
  /* 1226962e push 0 */
  push32((uint32_t)(0x0u));
  /* 12269630 push 1 */
  push32((uint32_t)(0x1u));
  /* 12269632 call 0x12269840 */
  push32(0x12269637u); f_12269840();
  /* 12269637 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226963a:;
  /* 1226963a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226963c mov cx, word ptr [0x12286a7c] */
  CX = (r16((uint32_t)(0x12286a7c)));
  /* 12269643 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12269645 jne 0x122696a2 */
  if (!C.zf) goto L_122696a2;
  /* 12269647 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12269649 mov dx, word ptr [0x12286a8a] */
  DX = (r16((uint32_t)(0x12286a8a)));
  /* 12269650 push edx */
  push32((uint32_t)(EDX));
  /* 12269651 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269653 mov ax, word ptr [0x12286a88] */
  AX = (r16((uint32_t)(0x12286a88)));
  /* 12269659 push eax */
  push32((uint32_t)(EAX));
  /* 1226965a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226965c mov cx, word ptr [0x12286a86] */
  CX = (r16((uint32_t)(0x12286a86)));
  /* 12269663 push ecx */
  push32((uint32_t)(ECX));
  /* 12269664 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12269666 mov dx, word ptr [0x12286a84] */
  DX = (r16((uint32_t)(0x12286a84)));
  /* 1226966d push edx */
  push32((uint32_t)(EDX));
  /* 1226966e push 0 */
  push32((uint32_t)(0x0u));
  /* 12269670 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269672 mov ax, word ptr [0x12286a80] */
  AX = (r16((uint32_t)(0x12286a80)));
  /* 12269678 push eax */
  push32((uint32_t)(EAX));
  /* 12269679 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226967b mov cx, word ptr [0x12286a82] */
  CX = (r16((uint32_t)(0x12286a82)));
  /* 12269682 push ecx */
  push32((uint32_t)(ECX));
  /* 12269683 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12269685 mov dx, word ptr [0x12286a7e] */
  DX = (r16((uint32_t)(0x12286a7e)));
  /* 1226968c push edx */
  push32((uint32_t)(EDX));
  /* 1226968d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269690 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12269693 push ecx */
  push32((uint32_t)(ECX));
  /* 12269694 push 1 */
  push32((uint32_t)(0x1u));
  /* 12269696 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269698 call 0x12269840 */
  push32(0x1226969du); f_12269840();
  /* 1226969d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122696a0 jmp 0x122696f3 */
  goto L_122696f3;
L_122696a2:;
  /* 122696a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122696a4 mov dx, word ptr [0x12286a8a] */
  DX = (r16((uint32_t)(0x12286a8a)));
  /* 122696ab push edx */
  push32((uint32_t)(EDX));
  /* 122696ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122696ae mov ax, word ptr [0x12286a88] */
  AX = (r16((uint32_t)(0x12286a88)));
  /* 122696b4 push eax */
  push32((uint32_t)(EAX));
  /* 122696b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122696b7 mov cx, word ptr [0x12286a86] */
  CX = (r16((uint32_t)(0x12286a86)));
  /* 122696be push ecx */
  push32((uint32_t)(ECX));
  /* 122696bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122696c1 mov dx, word ptr [0x12286a84] */
  DX = (r16((uint32_t)(0x12286a84)));
  /* 122696c8 push edx */
  push32((uint32_t)(EDX));
  /* 122696c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122696cb mov ax, word ptr [0x12286a82] */
  AX = (r16((uint32_t)(0x12286a82)));
  /* 122696d1 push eax */
  push32((uint32_t)(EAX));
  /* 122696d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122696d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122696d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122696d8 mov cx, word ptr [0x12286a7e] */
  CX = (r16((uint32_t)(0x12286a7e)));
  /* 122696df push ecx */
  push32((uint32_t)(ECX));
  /* 122696e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122696e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122696e6 push eax */
  push32((uint32_t)(EAX));
  /* 122696e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122696e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122696eb call 0x12269840 */
  push32(0x122696f0u); f_12269840();
  /* 122696f0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122696f3:;
  /* 122696f3 jmp 0x1226973b */
  goto L_1226973b;
L_122696f5:;
  /* 122696f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122696f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122696f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122696fb push 2 */
  push32((uint32_t)(0x2u));
  /* 122696fd push 0 */
  push32((uint32_t)(0x0u));
  /* 122696ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12269701 push 1 */
  push32((uint32_t)(0x1u));
  /* 12269703 push 4 */
  push32((uint32_t)(0x4u));
  /* 12269705 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269708 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1226970b push edx */
  push32((uint32_t)(EDX));
  /* 1226970c push 1 */
  push32((uint32_t)(0x1u));
  /* 1226970e push 1 */
  push32((uint32_t)(0x1u));
  /* 12269710 call 0x12269840 */
  push32(0x12269715u); f_12269840();
  /* 12269715 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226971a push 0 */
  push32((uint32_t)(0x0u));
  /* 1226971c push 0 */
  push32((uint32_t)(0x0u));
  /* 1226971e push 2 */
  push32((uint32_t)(0x2u));
  /* 12269720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269722 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269724 push 5 */
  push32((uint32_t)(0x5u));
  /* 12269726 push 0xa */
  push32((uint32_t)(0xau));
  /* 12269728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226972b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1226972e push ecx */
  push32((uint32_t)(ECX));
  /* 1226972f push 1 */
  push32((uint32_t)(0x1u));
  /* 12269731 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269733 call 0x12269840 */
  push32(0x12269738u); f_12269840();
  /* 12269738 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226973b:;
  /* 1226973b mov edx, dword ptr [0x12285e2c] */
  EDX = (r32((uint32_t)(0x12285e2c)));
  /* 12269741 cmp edx, dword ptr [0x12285e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12285e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269747 jge 0x12269794 */
  if ((C.sf==C.of)) goto L_12269794;
  /* 12269749 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226974c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1226974f cmp ecx, dword ptr [0x12285e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12285e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269755 jl 0x12269765 */
  if ((C.sf!=C.of)) goto L_12269765;
  /* 12269757 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226975a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1226975d cmp eax, dword ptr [0x12285e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12285e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269763 jle 0x1226976c */
  if ((C.zf||C.sf!=C.of)) goto L_1226976c;
L_12269765:;
  /* 12269765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269767 jmp 0x12269836 */
  goto L_12269836;
L_1226976c:;
  /* 1226976c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226976f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12269772 cmp edx, dword ptr [0x12285e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12285e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269778 jle 0x12269792 */
  if ((C.zf||C.sf!=C.of)) goto L_12269792;
  /* 1226977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226977d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12269780 cmp ecx, dword ptr [0x12285e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12285e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269786 jge 0x12269792 */
  if ((C.sf==C.of)) goto L_12269792;
  /* 12269788 mov eax, 1 */
  EAX = (0x1u);
  /* 1226978d jmp 0x12269836 */
  goto L_12269836;
L_12269792:;
  /* 12269792 jmp 0x122697d7 */
  goto L_122697d7;
L_12269794:;
  /* 12269794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269797 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1226979a cmp eax, dword ptr [0x12285e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12285e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122697a0 jl 0x122697b0 */
  if ((C.sf!=C.of)) goto L_122697b0;
  /* 122697a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122697a5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122697a8 cmp edx, dword ptr [0x12285e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12285e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122697ae jle 0x122697b7 */
  if ((C.zf||C.sf!=C.of)) goto L_122697b7;
L_122697b0:;
  /* 122697b0 mov eax, 1 */
  EAX = (0x1u);
  /* 122697b5 jmp 0x12269836 */
  goto L_12269836;
L_122697b7:;
  /* 122697b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122697ba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122697bd cmp ecx, dword ptr [0x12285e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12285e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122697c3 jle 0x122697d7 */
  if ((C.zf||C.sf!=C.of)) goto L_122697d7;
  /* 122697c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122697c8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122697cb cmp eax, dword ptr [0x12285e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12285e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122697d1 jge 0x122697d7 */
  if ((C.sf==C.of)) goto L_122697d7;
  /* 122697d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122697d5 jmp 0x12269836 */
  goto L_12269836;
L_122697d7:;
  /* 122697d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122697da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122697dd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122697e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122697e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122697e5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122697e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122697ea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122697ed imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122697f3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122697f5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122697fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122697fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269801 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12269804 cmp edx, dword ptr [0x12285e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12285e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226980a jne 0x12269822 */
  if (!C.zf) goto L_12269822;
  /* 1226980c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226980f cmp eax, dword ptr [0x12285e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12285e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269815 jl 0x1226981e */
  if ((C.sf!=C.of)) goto L_1226981e;
  /* 12269817 mov eax, 1 */
  EAX = (0x1u);
  /* 1226981c jmp 0x12269836 */
  goto L_12269836;
L_1226981e:;
  /* 1226981e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269820 jmp 0x12269836 */
  goto L_12269836;
L_12269822:;
  /* 12269822 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12269825 cmp ecx, dword ptr [0x12285e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12285e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226982b jge 0x12269834 */
  if ((C.sf==C.of)) goto L_12269834;
  /* 1226982d mov eax, 1 */
  EAX = (0x1u);
  /* 12269832 jmp 0x12269836 */
  goto L_12269836;
L_12269834:;
  /* 12269834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12269836:;
  /* 12269836 mov esp, ebp */
  ESP = (EBP);
  /* 12269838 pop ebp */
  EBP = (pop32());
  /* 12269839 ret  */
  ESPCHK(0x12269540u, _esp0);
  ESP += 4; return;
}

/* FUN_10019840 @ 0x12269840 (504 bytes, 145 insns) */
void f_12269840(void) {
  FTRACE(0x12269840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269840 push ebp */
  push32((uint32_t)(EBP));
  /* 12269841 mov ebp, esp */
  EBP = (ESP);
  /* 12269843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12269846 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226984a jne 0x1226991c */
  if (!C.zf) goto L_1226991c;
  /* 12269850 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12269853 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12269856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12269858 jne 0x12269869 */
  if (!C.zf) goto L_12269869;
  /* 1226985a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226985d mov edx, dword ptr [ecx*4 + 0x12285e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12285e4c)));
  /* 12269864 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12269867 jmp 0x12269876 */
  goto L_12269876;
L_12269869:;
  /* 12269869 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226986c mov ecx, dword ptr [eax*4 + 0x12285e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12285e80)));
  /* 12269873 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12269876:;
  /* 12269876 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269879 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226987c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1226987f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12269882 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12269885 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226988b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226988e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269890 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12269893 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12269896 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12269899 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1226989d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1226989e mov ecx, 7 */
  ECX = (0x7u);
  /* 122698a3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122698a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122698a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122698ab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122698ae jge 0x122698c9 */
  if ((C.sf==C.of)) goto L_122698c9;
  /* 122698b0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122698b3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122698b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122698b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122698bc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122698bf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122698c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122698c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122698c7 jmp 0x122698dd */
  goto L_122698dd;
L_122698c9:;
  /* 122698c9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122698cc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122698cf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122698d2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122698d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122698d8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122698da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122698dd:;
  /* 122698dd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122698e1 jne 0x1226991a */
  if (!C.zf) goto L_1226991a;
  /* 122698e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122698e6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 122698e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122698eb jne 0x122698fc */
  if (!C.zf) goto L_122698fc;
  /* 122698ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122698f0 mov eax, dword ptr [edx*4 + 0x12285e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12285e50)));
  /* 122698f7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122698fa jmp 0x12269909 */
  goto L_12269909;
L_122698fc:;
  /* 122698fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122698ff mov edx, dword ptr [ecx*4 + 0x12285e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12285e84)));
  /* 12269906 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12269909:;
  /* 12269909 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226990c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226990f jle 0x1226991a */
  if ((C.zf||C.sf!=C.of)) goto L_1226991a;
  /* 12269911 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12269914 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12269917 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1226991a:;
  /* 1226991a jmp 0x12269951 */
  goto L_12269951;
L_1226991c:;
  /* 1226991c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226991f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12269922 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12269924 jne 0x12269935 */
  if (!C.zf) goto L_12269935;
  /* 12269926 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12269929 mov ecx, dword ptr [eax*4 + 0x12285e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12285e4c)));
  /* 12269930 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12269933 jmp 0x12269942 */
  goto L_12269942;
L_12269935:;
  /* 12269935 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12269938 mov eax, dword ptr [edx*4 + 0x12285e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12285e80)));
  /* 1226993f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12269942:;
  /* 12269942 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12269945 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12269948 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226994b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226994e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12269951:;
  /* 12269951 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269955 jne 0x12269991 */
  if (!C.zf) goto L_12269991;
  /* 12269957 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226995a mov dword ptr [0x12285e2c], eax */
  w32((uint32_t)(0x12285e2c), (EAX));
  /* 1226995f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12269962 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12269965 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12269968 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226996a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226996d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12269970 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269972 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12269978 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1226997b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226997d mov dword ptr [0x12285e30], ecx */
  w32((uint32_t)(0x12285e30), (ECX));
  /* 12269983 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12269986 mov dword ptr [0x12285e28], edx */
  w32((uint32_t)(0x12285e28), (EDX));
  /* 1226998c jmp 0x12269a34 */
  goto L_12269a34;
L_12269991:;
  /* 12269991 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12269994 mov dword ptr [0x12285e3c], eax */
  w32((uint32_t)(0x12285e3c), (EAX));
  /* 12269999 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1226999c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1226999f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 122699a2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122699a4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122699a7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 122699aa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122699ac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122699b2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 122699b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122699b7 mov dword ptr [0x12285e40], ecx */
  w32((uint32_t)(0x12285e40), (ECX));
  /* 122699bd mov edx, dword ptr [0x12285d98] */
  EDX = (r32((uint32_t)(0x12285d98)));
  /* 122699c3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122699c9 mov eax, dword ptr [0x12285e40] */
  EAX = (r32((uint32_t)(0x12285e40)));
  /* 122699ce add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122699d0 mov dword ptr [0x12285e40], eax */
  w32((uint32_t)(0x12285e40), (EAX));
  /* 122699d5 cmp dword ptr [0x12285e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12285e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122699dc jge 0x12269a01 */
  if ((C.sf==C.of)) goto L_12269a01;
  /* 122699de mov ecx, dword ptr [0x12285e40] */
  ECX = (r32((uint32_t)(0x12285e40)));
  /* 122699e4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122699ea mov dword ptr [0x12285e40], ecx */
  w32((uint32_t)(0x12285e40), (ECX));
  /* 122699f0 mov edx, dword ptr [0x12285e3c] */
  EDX = (r32((uint32_t)(0x12285e3c)));
  /* 122699f6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122699f9 mov dword ptr [0x12285e3c], edx */
  w32((uint32_t)(0x12285e3c), (EDX));
  /* 122699ff jmp 0x12269a2b */
  goto L_12269a2b;
L_12269a01:;
  /* 12269a01 cmp dword ptr [0x12285e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12285e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269a0b jl 0x12269a2b */
  if ((C.sf!=C.of)) goto L_12269a2b;
  /* 12269a0d mov eax, dword ptr [0x12285e40] */
  EAX = (r32((uint32_t)(0x12285e40)));
  /* 12269a12 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12269a17 mov dword ptr [0x12285e40], eax */
  w32((uint32_t)(0x12285e40), (EAX));
  /* 12269a1c mov ecx, dword ptr [0x12285e3c] */
  ECX = (r32((uint32_t)(0x12285e3c)));
  /* 12269a22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269a25 mov dword ptr [0x12285e3c], ecx */
  w32((uint32_t)(0x12285e3c), (ECX));
L_12269a2b:;
  /* 12269a2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12269a2e mov dword ptr [0x12285e38], edx */
  w32((uint32_t)(0x12285e38), (EDX));
L_12269a34:;
  /* 12269a34 mov esp, ebp */
  ESP = (EBP);
  /* 12269a36 pop ebp */
  EBP = (pop32());
  /* 12269a37 ret  */
  ESPCHK(0x12269840u, _esp0);
  ESP += 4; return;
}

/* FUN_10019a40 @ 0x12269a40 (382 bytes, 135 insns) */
void f_12269a40(void) {
  FTRACE(0x12269a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12269a41 mov ebp, esp */
  EBP = (ESP);
  /* 12269a43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12269a45 push 0x12282d28 */
  push32((uint32_t)(0x12282d28u));
  /* 12269a4a push 0x12263708 */
  push32((uint32_t)(0x12263708u));
  /* 12269a4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12269a55 push eax */
  push32((uint32_t)(EAX));
  /* 12269a56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12269a5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269a60 push ebx */
  push32((uint32_t)(EBX));
  /* 12269a61 push esi */
  push32((uint32_t)(ESI));
  /* 12269a62 push edi */
  push32((uint32_t)(EDI));
  /* 12269a63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12269a66 cmp dword ptr [0x12286aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269a6d jne 0x12269ab2 */
  if (!C.zf) goto L_12269ab2;
  /* 12269a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12269a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12269a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269a77 call dword ptr [0x122892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892e4))), 0x12269a7du);
  /* 12269a7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12269a7f je 0x12269a8d */
  if (C.zf) goto L_12269a8d;
  /* 12269a81 mov dword ptr [0x12286aec], 1 */
  w32((uint32_t)(0x12286aec), (0x1u));
  /* 12269a8b jmp 0x12269ab2 */
  goto L_12269ab2;
L_12269a8d:;
  /* 12269a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12269a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12269a91 push 1 */
  push32((uint32_t)(0x1u));
  /* 12269a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269a95 call dword ptr [0x122892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892fc))), 0x12269a9bu);
  /* 12269a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12269a9d je 0x12269aab */
  if (C.zf) goto L_12269aab;
  /* 12269a9f mov dword ptr [0x12286aec], 2 */
  w32((uint32_t)(0x12286aec), (0x2u));
  /* 12269aa9 jmp 0x12269ab2 */
  goto L_12269ab2;
L_12269aab:;
  /* 12269aab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269aad jmp 0x12269bc1 */
  goto L_12269bc1;
L_12269ab2:;
  /* 12269ab2 cmp dword ptr [0x12286aec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12286aec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269ab9 jne 0x12269ad6 */
  if (!C.zf) goto L_12269ad6;
  /* 12269abb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12269abe push eax */
  push32((uint32_t)(EAX));
  /* 12269abf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12269ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 12269ac3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12269ac6 push edx */
  push32((uint32_t)(EDX));
  /* 12269ac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269aca push eax */
  push32((uint32_t)(EAX));
  /* 12269acb call dword ptr [0x122892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892e4))), 0x12269ad1u);
  /* 12269ad1 jmp 0x12269bc1 */
  goto L_12269bc1;
L_12269ad6:;
  /* 12269ad6 cmp dword ptr [0x12286aec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12286aec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269add jne 0x12269bbf */
  if (!C.zf) goto L_12269bbf;
  /* 12269ae3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269ae7 jne 0x12269af2 */
  if (!C.zf) goto L_12269af2;
  /* 12269ae9 mov ecx, dword ptr [0x122869a0] */
  ECX = (r32((uint32_t)(0x122869a0)));
  /* 12269aef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12269af2:;
  /* 12269af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269af6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12269af9 push edx */
  push32((uint32_t)(EDX));
  /* 12269afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269afd push eax */
  push32((uint32_t)(EAX));
  /* 12269afe call dword ptr [0x122892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892fc))), 0x12269b04u);
  /* 12269b04 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12269b07 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269b0b jne 0x12269b14 */
  if (!C.zf) goto L_12269b14;
  /* 12269b0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269b0f jmp 0x12269bc1 */
  goto L_12269bc1;
L_12269b14:;
  /* 12269b14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12269b1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12269b1e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269b21 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12269b23 call 0x1225d7a0 */
  push32(0x12269b28u); f_1225d7a0();
  /* 12269b28 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12269b2b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12269b2e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12269b31 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12269b34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12269b3b jmp 0x12269b54 */
  goto L_12269b54;
  /* 12269b3d mov eax, 1 */
  EAX = (0x1u);
  /* 12269b42 ret  */
  ESPCHK(0x12269a40u, _esp0);
  ESP += 4; return;
  /* 12269b43 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12269b46 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12269b4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12269b54:;
  /* 12269b54 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269b58 jne 0x12269b5e */
  if (!C.zf) goto L_12269b5e;
  /* 12269b5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269b5c jmp 0x12269bc1 */
  goto L_12269bc1;
L_12269b5e:;
  /* 12269b5e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12269b61 push edx */
  push32((uint32_t)(EDX));
  /* 12269b62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12269b65 push eax */
  push32((uint32_t)(EAX));
  /* 12269b66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12269b69 push ecx */
  push32((uint32_t)(ECX));
  /* 12269b6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269b6d push edx */
  push32((uint32_t)(EDX));
  /* 12269b6e call dword ptr [0x122892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892fc))), 0x12269b74u);
  /* 12269b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12269b76 jne 0x12269b7c */
  if (!C.zf) goto L_12269b7c;
  /* 12269b78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269b7a jmp 0x12269bc1 */
  goto L_12269bc1;
L_12269b7c:;
  /* 12269b7c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269b80 jne 0x12269b9d */
  if (!C.zf) goto L_12269b9d;
  /* 12269b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269b86 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12269b88 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12269b8b push eax */
  push32((uint32_t)(EAX));
  /* 12269b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 12269b8e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12269b91 push ecx */
  push32((uint32_t)(ECX));
  /* 12269b92 call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x12269b98u);
  /* 12269b98 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12269b9b jmp 0x12269bba */
  goto L_12269bba;
L_12269b9d:;
  /* 12269b9d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12269ba0 push edx */
  push32((uint32_t)(EDX));
  /* 12269ba1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12269ba4 push eax */
  push32((uint32_t)(EAX));
  /* 12269ba5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12269ba7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12269baa push ecx */
  push32((uint32_t)(ECX));
  /* 12269bab push 1 */
  push32((uint32_t)(0x1u));
  /* 12269bad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12269bb0 push edx */
  push32((uint32_t)(EDX));
  /* 12269bb1 call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x12269bb7u);
  /* 12269bb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12269bba:;
  /* 12269bba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12269bbd jmp 0x12269bc1 */
  goto L_12269bc1;
L_12269bbf:;
  /* 12269bbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12269bc1:;
  /* 12269bc1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12269bc4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12269bc7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12269bce pop edi */
  EDI = (pop32());
  /* 12269bcf pop esi */
  ESI = (pop32());
  /* 12269bd0 pop ebx */
  EBX = (pop32());
  /* 12269bd1 mov esp, ebp */
  ESP = (EBP);
  /* 12269bd3 pop ebp */
  EBP = (pop32());
  /* 12269bd4 ret  */
  ESPCHK(0x12269a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10019be0 @ 0x12269be0 (398 bytes, 140 insns) */
void f_12269be0(void) {
  FTRACE(0x12269be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12269be1 mov ebp, esp */
  EBP = (ESP);
  /* 12269be3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12269be5 push 0x12282d38 */
  push32((uint32_t)(0x12282d38u));
  /* 12269bea push 0x12263708 */
  push32((uint32_t)(0x12263708u));
  /* 12269bef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12269bf5 push eax */
  push32((uint32_t)(EAX));
  /* 12269bf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12269bfd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269c00 push ebx */
  push32((uint32_t)(EBX));
  /* 12269c01 push esi */
  push32((uint32_t)(ESI));
  /* 12269c02 push edi */
  push32((uint32_t)(EDI));
  /* 12269c03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12269c06 cmp dword ptr [0x12286af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269c0d jne 0x12269c52 */
  if (!C.zf) goto L_12269c52;
  /* 12269c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12269c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12269c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269c17 call dword ptr [0x122892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892e4))), 0x12269c1du);
  /* 12269c1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12269c1f je 0x12269c2d */
  if (C.zf) goto L_12269c2d;
  /* 12269c21 mov dword ptr [0x12286af0], 1 */
  w32((uint32_t)(0x12286af0), (0x1u));
  /* 12269c2b jmp 0x12269c52 */
  goto L_12269c52;
L_12269c2d:;
  /* 12269c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12269c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12269c31 push 1 */
  push32((uint32_t)(0x1u));
  /* 12269c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269c35 call dword ptr [0x122892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892fc))), 0x12269c3bu);
  /* 12269c3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12269c3d je 0x12269c4b */
  if (C.zf) goto L_12269c4b;
  /* 12269c3f mov dword ptr [0x12286af0], 2 */
  w32((uint32_t)(0x12286af0), (0x2u));
  /* 12269c49 jmp 0x12269c52 */
  goto L_12269c52;
L_12269c4b:;
  /* 12269c4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269c4d jmp 0x12269d71 */
  goto L_12269d71;
L_12269c52:;
  /* 12269c52 cmp dword ptr [0x12286af0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12286af0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269c59 jne 0x12269c76 */
  if (!C.zf) goto L_12269c76;
  /* 12269c5b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12269c5e push eax */
  push32((uint32_t)(EAX));
  /* 12269c5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12269c62 push ecx */
  push32((uint32_t)(ECX));
  /* 12269c63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12269c66 push edx */
  push32((uint32_t)(EDX));
  /* 12269c67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269c6a push eax */
  push32((uint32_t)(EAX));
  /* 12269c6b call dword ptr [0x122892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892fc))), 0x12269c71u);
  /* 12269c71 jmp 0x12269d71 */
  goto L_12269d71;
L_12269c76:;
  /* 12269c76 cmp dword ptr [0x12286af0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12286af0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269c7d jne 0x12269d6f */
  if (!C.zf) goto L_12269d6f;
  /* 12269c83 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269c87 jne 0x12269c92 */
  if (!C.zf) goto L_12269c92;
  /* 12269c89 mov ecx, dword ptr [0x122869a0] */
  ECX = (r32((uint32_t)(0x122869a0)));
  /* 12269c8f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12269c92:;
  /* 12269c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269c94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269c96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12269c99 push edx */
  push32((uint32_t)(EDX));
  /* 12269c9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269c9d push eax */
  push32((uint32_t)(EAX));
  /* 12269c9e call dword ptr [0x122892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892e4))), 0x12269ca4u);
  /* 12269ca4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12269ca7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269cab jne 0x12269cb4 */
  if (!C.zf) goto L_12269cb4;
  /* 12269cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269caf jmp 0x12269d71 */
  goto L_12269d71;
L_12269cb4:;
  /* 12269cb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12269cbb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12269cbe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12269cc0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269cc3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12269cc5 call 0x1225d7a0 */
  push32(0x12269ccau); f_1225d7a0();
  /* 12269cca mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12269ccd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12269cd0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12269cd3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12269cd6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12269cdd jmp 0x12269cf6 */
  goto L_12269cf6;
  /* 12269cdf mov eax, 1 */
  EAX = (0x1u);
  /* 12269ce4 ret  */
  ESPCHK(0x12269be0u, _esp0);
  ESP += 4; return;
  /* 12269ce5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12269ce8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12269cef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12269cf6:;
  /* 12269cf6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269cfa jne 0x12269d00 */
  if (!C.zf) goto L_12269d00;
  /* 12269cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269cfe jmp 0x12269d71 */
  goto L_12269d71;
L_12269d00:;
  /* 12269d00 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12269d03 push edx */
  push32((uint32_t)(EDX));
  /* 12269d04 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12269d07 push eax */
  push32((uint32_t)(EAX));
  /* 12269d08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12269d0b push ecx */
  push32((uint32_t)(ECX));
  /* 12269d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269d0f push edx */
  push32((uint32_t)(EDX));
  /* 12269d10 call dword ptr [0x122892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892e4))), 0x12269d16u);
  /* 12269d16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12269d18 jne 0x12269d1e */
  if (!C.zf) goto L_12269d1e;
  /* 12269d1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269d1c jmp 0x12269d71 */
  goto L_12269d71;
L_12269d1e:;
  /* 12269d1e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269d22 jne 0x12269d46 */
  if (!C.zf) goto L_12269d46;
  /* 12269d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12269d2c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12269d2e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12269d31 push eax */
  push32((uint32_t)(EAX));
  /* 12269d32 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12269d37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12269d3a push ecx */
  push32((uint32_t)(ECX));
  /* 12269d3b call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x12269d41u);
  /* 12269d41 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12269d44 jmp 0x12269d6a */
  goto L_12269d6a;
L_12269d46:;
  /* 12269d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12269d4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12269d4d push edx */
  push32((uint32_t)(EDX));
  /* 12269d4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12269d51 push eax */
  push32((uint32_t)(EAX));
  /* 12269d52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12269d54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12269d57 push ecx */
  push32((uint32_t)(ECX));
  /* 12269d58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12269d5d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12269d60 push edx */
  push32((uint32_t)(EDX));
  /* 12269d61 call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x12269d67u);
  /* 12269d67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12269d6a:;
  /* 12269d6a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12269d6d jmp 0x12269d71 */
  goto L_12269d71;
L_12269d6f:;
  /* 12269d6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12269d71:;
  /* 12269d71 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12269d74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12269d77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12269d7e pop edi */
  EDI = (pop32());
  /* 12269d7f pop esi */
  ESI = (pop32());
  /* 12269d80 pop ebx */
  EBX = (pop32());
  /* 12269d81 mov esp, ebp */
  ESP = (EBP);
  /* 12269d83 pop ebp */
  EBP = (pop32());
  /* 12269d84 ret  */
  ESPCHK(0x12269be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019d90 @ 0x12269d90 (11 bytes, 6 insns) */
void f_12269d90(void) {
  FTRACE(0x12269d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12269d91 mov ebp, esp */
  EBP = (ESP);
  /* 12269d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269d96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269d99 pop ebp */
  EBP = (pop32());
  /* 12269d9a ret  */
  ESPCHK(0x12269d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10019da0 @ 0x12269da0 (147 bytes, 43 insns) */
void f_12269da0(void) {
  FTRACE(0x12269da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12269da1 mov ebp, esp */
  EBP = (ESP);
  /* 12269da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12269da4 cmp dword ptr [0x12286990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269dab jne 0x12269dc7 */
  if (!C.zf) goto L_12269dc7;
  /* 12269dad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269db1 jl 0x12269dc2 */
  if ((C.sf!=C.of)) goto L_12269dc2;
  /* 12269db3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269db7 jg 0x12269dc2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12269dc2;
  /* 12269db9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269dbc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269dbf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12269dc2:;
  /* 12269dc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269dc5 jmp 0x12269e2f */
  goto L_12269e2f;
L_12269dc7:;
  /* 12269dc7 push 0x12286b1c */
  push32((uint32_t)(0x12286b1cu));
  /* 12269dcc call dword ptr [0x122893b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893b4))), 0x12269dd2u);
  /* 12269dd2 cmp dword ptr [0x12286b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269dd9 je 0x12269df9 */
  if (C.zf) goto L_12269df9;
  /* 12269ddb push 0x12286b1c */
  push32((uint32_t)(0x12286b1cu));
  /* 12269de0 call dword ptr [0x122893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893a4))), 0x12269de6u);
  /* 12269de6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12269de8 call 0x1225e000 */
  push32(0x12269dedu); f_1225e000();
  /* 12269ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269df0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12269df7 jmp 0x12269e00 */
  goto L_12269e00;
L_12269df9:;
  /* 12269df9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12269e00:;
  /* 12269e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269e03 push ecx */
  push32((uint32_t)(ECX));
  /* 12269e04 call 0x12269e40 */
  push32(0x12269e09u); f_12269e40();
  /* 12269e09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269e0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12269e0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269e13 je 0x12269e21 */
  if (C.zf) goto L_12269e21;
  /* 12269e15 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12269e17 call 0x1225e0a0 */
  push32(0x12269e1cu); f_1225e0a0();
  /* 12269e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269e1f jmp 0x12269e2c */
  goto L_12269e2c;
L_12269e21:;
  /* 12269e21 push 0x12286b1c */
  push32((uint32_t)(0x12286b1cu));
  /* 12269e26 call dword ptr [0x122893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122893a4))), 0x12269e2cu);
L_12269e2c:;
  /* 12269e2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12269e2f:;
  /* 12269e2f mov esp, ebp */
  ESP = (EBP);
  /* 12269e31 pop ebp */
  EBP = (pop32());
  /* 12269e32 ret  */
  ESPCHK(0x12269da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019e40 @ 0x12269e40 (299 bytes, 91 insns) */
void f_12269e40(void) {
  FTRACE(0x12269e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12269e41 mov ebp, esp */
  EBP = (ESP);
  /* 12269e43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12269e46 cmp dword ptr [0x12286990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269e4d jne 0x12269e6c */
  if (!C.zf) goto L_12269e6c;
  /* 12269e4f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269e53 jl 0x12269e64 */
  if ((C.sf!=C.of)) goto L_12269e64;
  /* 12269e55 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269e59 jg 0x12269e64 */
  if ((!C.zf&&C.sf==C.of)) goto L_12269e64;
  /* 12269e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269e5e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269e61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12269e64:;
  /* 12269e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269e67 jmp 0x12269f67 */
  goto L_12269f67;
L_12269e6c:;
  /* 12269e6c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269e73 jge 0x12269eb3 */
  if ((C.sf==C.of)) goto L_12269eb3;
  /* 12269e75 cmp dword ptr [0x12284ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12284ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269e7c jle 0x12269e91 */
  if ((C.zf||C.sf!=C.of)) goto L_12269e91;
  /* 12269e7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12269e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269e83 push ecx */
  push32((uint32_t)(ECX));
  /* 12269e84 call 0x12260610 */
  push32(0x12269e89u); f_12260610();
  /* 12269e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269e8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12269e8f jmp 0x12269ea5 */
  goto L_12269ea5;
L_12269e91:;
  /* 12269e91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269e94 mov eax, dword ptr [0x12284c98] */
  EAX = (r32((uint32_t)(0x12284c98)));
  /* 12269e99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12269e9b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12269e9f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12269ea2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12269ea5:;
  /* 12269ea5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269ea9 jne 0x12269eb3 */
  if (!C.zf) goto L_12269eb3;
  /* 12269eab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269eae jmp 0x12269f67 */
  goto L_12269f67;
L_12269eb3:;
  /* 12269eb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269eb6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12269eb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12269ebf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12269ec5 mov eax, dword ptr [0x12284c98] */
  EAX = (r32((uint32_t)(0x12284c98)));
  /* 12269eca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12269ecc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12269ed0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12269ed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12269ed8 je 0x12269efc */
  if (C.zf) goto L_12269efc;
  /* 12269eda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269edd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12269ee0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12269ee6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12269ee9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12269eec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12269eef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12269ef3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12269efa jmp 0x12269f0d */
  goto L_12269f0d;
L_12269efc:;
  /* 12269efc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12269eff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12269f02 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12269f06 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12269f0d:;
  /* 12269f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 12269f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12269f11 push 3 */
  push32((uint32_t)(0x3u));
  /* 12269f13 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12269f16 push edx */
  push32((uint32_t)(EDX));
  /* 12269f17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12269f1a push eax */
  push32((uint32_t)(EAX));
  /* 12269f1b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12269f1e push ecx */
  push32((uint32_t)(ECX));
  /* 12269f1f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12269f24 mov edx, dword ptr [0x12286990] */
  EDX = (r32((uint32_t)(0x12286990)));
  /* 12269f2a push edx */
  push32((uint32_t)(EDX));
  /* 12269f2b call 0x122629f0 */
  push32(0x12269f30u); f_122629f0();
  /* 12269f30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269f33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12269f36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269f3a jne 0x12269f41 */
  if (!C.zf) goto L_12269f41;
  /* 12269f3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269f3f jmp 0x12269f67 */
  goto L_12269f67;
L_12269f41:;
  /* 12269f41 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269f45 jne 0x12269f51 */
  if (!C.zf) goto L_12269f51;
  /* 12269f47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269f4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12269f4f jmp 0x12269f67 */
  goto L_12269f67;
L_12269f51:;
  /* 12269f51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12269f54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12269f59 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12269f5c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12269f62 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12269f65 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12269f67:;
  /* 12269f67 mov esp, ebp */
  ESP = (EBP);
  /* 12269f69 pop ebp */
  EBP = (pop32());
  /* 12269f6a ret  */
  ESPCHK(0x12269e40u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12269f70 (52 bytes, 19 insns) */
void f_12269f70(void) {
  FTRACE(0x12269f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269f70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12269f74 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12269f78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12269f7a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12269f7e jne 0x12269f89 */
  if (!C.zf) goto L_12269f89;
  /* 12269f80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12269f84 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12269f86 ret 0x10 */
  ESPCHK(0x12269f70u, _esp0);
  ESP += 20; return;
L_12269f89:;
  /* 12269f89 push ebx */
  push32((uint32_t)(EBX));
  /* 12269f8a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12269f8c mov ebx, eax */
  EBX = (EAX);
  /* 12269f8e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12269f92 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12269f96 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269f98 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12269f9c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12269f9e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12269fa0 pop ebx */
  EBX = (pop32());
  /* 12269fa1 ret 0x10 */
  ESPCHK(0x12269f70u, _esp0);
  ESP += 20; return;
}

/* FUN_10019fb0 @ 0x12269fb0 (46 bytes, 18 insns) */
void f_12269fb0(void) {
  FTRACE(0x12269fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12269fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12269fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12269fb4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12269fb6 call 0x1225e000 */
  push32(0x12269fbbu); f_1225e000();
  /* 12269fbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269fbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12269fc1 push eax */
  push32((uint32_t)(EAX));
  /* 12269fc2 call 0x12269fe0 */
  push32(0x12269fc7u); f_12269fe0();
  /* 12269fc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269fca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12269fcd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12269fcf call 0x1225e0a0 */
  push32(0x12269fd4u); f_1225e0a0();
  /* 12269fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12269fd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12269fda mov esp, ebp */
  ESP = (EBP);
  /* 12269fdc pop ebp */
  EBP = (pop32());
  /* 12269fdd ret  */
  ESPCHK(0x12269fb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12269fe0 (198 bytes, 69 insns) */
void f_12269fe0(void) {
  FTRACE(0x12269fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12269fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12269fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12269fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12269fe6 mov eax, dword ptr [0x122867ac] */
  EAX = (r32((uint32_t)(0x122867ac)));
  /* 12269feb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12269fee cmp dword ptr [0x122882a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122882a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12269ff5 jne 0x12269ffe */
  if (!C.zf) goto L_12269ffe;
  /* 12269ff7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12269ff9 jmp 0x1226a0a2 */
  goto L_1226a0a2;
L_12269ffe:;
  /* 12269ffe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a002 jne 0x1226a026 */
  if (!C.zf) goto L_1226a026;
  /* 1226a004 cmp dword ptr [0x122867b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122867b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a00b je 0x1226a026 */
  if (C.zf) goto L_1226a026;
  /* 1226a00d call 0x1226a100 */
  push32(0x1226a012u); f_1226a100();
  /* 1226a012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a014 je 0x1226a01d */
  if (C.zf) goto L_1226a01d;
  /* 1226a016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a018 jmp 0x1226a0a2 */
  goto L_1226a0a2;
L_1226a01d:;
  /* 1226a01d mov ecx, dword ptr [0x122867ac] */
  ECX = (r32((uint32_t)(0x122867ac)));
  /* 1226a023 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1226a026:;
  /* 1226a026 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a02a je 0x1226a0a0 */
  if (C.zf) goto L_1226a0a0;
  /* 1226a02c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a030 je 0x1226a0a0 */
  if (C.zf) goto L_1226a0a0;
  /* 1226a032 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a035 push edx */
  push32((uint32_t)(EDX));
  /* 1226a036 call 0x1225d430 */
  push32(0x1226a03bu); f_1225d430();
  /* 1226a03b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a03e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1226a041:;
  /* 1226a041 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a044 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a047 je 0x1226a0a0 */
  if (C.zf) goto L_1226a0a0;
  /* 1226a049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a04c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226a04e push edx */
  push32((uint32_t)(EDX));
  /* 1226a04f call 0x1225d430 */
  push32(0x1226a054u); f_1225d430();
  /* 1226a054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a057 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a05a jbe 0x1226a095 */
  if ((C.cf||C.zf)) goto L_1226a095;
  /* 1226a05c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a05f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1226a061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a064 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 1226a068 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a06b jne 0x1226a095 */
  if (!C.zf) goto L_1226a095;
  /* 1226a06d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a070 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a074 push edx */
  push32((uint32_t)(EDX));
  /* 1226a075 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a078 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1226a07a push ecx */
  push32((uint32_t)(ECX));
  /* 1226a07b call 0x1226a0b0 */
  push32(0x1226a080u); f_1226a0b0();
  /* 1226a080 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a083 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a085 jne 0x1226a095 */
  if (!C.zf) goto L_1226a095;
  /* 1226a087 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a08a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1226a08c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a08f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 1226a093 jmp 0x1226a0a2 */
  goto L_1226a0a2;
L_1226a095:;
  /* 1226a095 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a098 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a09b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1226a09e jmp 0x1226a041 */
  goto L_1226a041;
L_1226a0a0:;
  /* 1226a0a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1226a0a2:;
  /* 1226a0a2 mov esp, ebp */
  ESP = (EBP);
  /* 1226a0a4 pop ebp */
  EBP = (pop32());
  /* 1226a0a5 ret  */
  ESPCHK(0x12269fe0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x1226a0b0 (79 bytes, 32 insns) */
void f_1226a0b0(void) {
  FTRACE(0x1226a0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226a0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1226a0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1226a0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a0b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a0b8 jne 0x1226a0be */
  if (!C.zf) goto L_1226a0be;
  /* 1226a0ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a0bc jmp 0x1226a0fb */
  goto L_1226a0fb;
L_1226a0be:;
  /* 1226a0be mov eax, dword ptr [0x12287e64] */
  EAX = (r32((uint32_t)(0x12287e64)));
  /* 1226a0c3 push eax */
  push32((uint32_t)(EAX));
  /* 1226a0c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226a0c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a0c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226a0cb push edx */
  push32((uint32_t)(EDX));
  /* 1226a0cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226a0cf push eax */
  push32((uint32_t)(EAX));
  /* 1226a0d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a0d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1226a0d6 mov edx, dword ptr [0x12288104] */
  EDX = (r32((uint32_t)(0x12288104)));
  /* 1226a0dc push edx */
  push32((uint32_t)(EDX));
  /* 1226a0dd call 0x1226a1b0 */
  push32(0x1226a0e2u); f_1226a1b0();
  /* 1226a0e2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a0e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1226a0e8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a0ec jne 0x1226a0f5 */
  if (!C.zf) goto L_1226a0f5;
  /* 1226a0ee mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 1226a0f3 jmp 0x1226a0fb */
  goto L_1226a0fb;
L_1226a0f5:;
  /* 1226a0f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a0f8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1226a0fb:;
  /* 1226a0fb mov esp, ebp */
  ESP = (EBP);
  /* 1226a0fd pop ebp */
  EBP = (pop32());
  /* 1226a0fe ret  */
  ESPCHK(0x1226a0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a100 @ 0x1226a100 (174 bytes, 66 insns) */
void f_1226a100(void) {
  FTRACE(0x1226a100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226a100 push ebp */
  push32((uint32_t)(EBP));
  /* 1226a101 mov ebp, esp */
  EBP = (ESP);
  /* 1226a103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a106 mov eax, dword ptr [0x122867b4] */
  EAX = (r32((uint32_t)(0x122867b4)));
  /* 1226a10b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1226a10e:;
  /* 1226a10e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a111 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a114 je 0x1226a1a8 */
  if (C.zf) goto L_1226a1a8;
  /* 1226a11a push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a11c push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a11e push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a120 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a122 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1226a124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a127 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1226a129 push eax */
  push32((uint32_t)(EAX));
  /* 1226a12a push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a12c push 1 */
  push32((uint32_t)(0x1u));
  /* 1226a12e call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x1226a134u);
  /* 1226a134 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1226a137 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a13b jne 0x1226a142 */
  if (!C.zf) goto L_1226a142;
  /* 1226a13d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226a140 jmp 0x1226a1aa */
  goto L_1226a1aa;
L_1226a142:;
  /* 1226a142 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1226a144 push 0x12282d44 */
  push32((uint32_t)(0x12282d44u));
  /* 1226a149 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a14b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a14e push ecx */
  push32((uint32_t)(ECX));
  /* 1226a14f call 0x1225a600 */
  push32(0x1226a154u); f_1225a600();
  /* 1226a154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a157 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1226a15a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a15e jne 0x1226a165 */
  if (!C.zf) goto L_1226a165;
  /* 1226a160 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226a163 jmp 0x1226a1aa */
  goto L_1226a1aa;
L_1226a165:;
  /* 1226a165 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a167 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a169 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a16c push edx */
  push32((uint32_t)(EDX));
  /* 1226a16d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a170 push eax */
  push32((uint32_t)(EAX));
  /* 1226a171 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1226a173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a176 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226a178 push edx */
  push32((uint32_t)(EDX));
  /* 1226a179 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a17b push 1 */
  push32((uint32_t)(0x1u));
  /* 1226a17d call dword ptr [0x12289378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289378))), 0x1226a183u);
  /* 1226a183 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a185 jne 0x1226a18c */
  if (!C.zf) goto L_1226a18c;
  /* 1226a187 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226a18a jmp 0x1226a1aa */
  goto L_1226a1aa;
L_1226a18c:;
  /* 1226a18c push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a18e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a191 push eax */
  push32((uint32_t)(EAX));
  /* 1226a192 call 0x1226a600 */
  push32(0x1226a197u); f_1226a600();
  /* 1226a197 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a19a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a19d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a1a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1226a1a3 jmp 0x1226a10e */
  goto L_1226a10e;
L_1226a1a8:;
  /* 1226a1a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1226a1aa:;
  /* 1226a1aa mov esp, ebp */
  ESP = (EBP);
  /* 1226a1ac pop ebp */
  EBP = (pop32());
  /* 1226a1ad ret  */
  ESPCHK(0x1226a100u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a1b0 @ 0x1226a1b0 (970 bytes, 340 insns) */
void f_1226a1b0(void) {
  FTRACE(0x1226a1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226a1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1226a1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1226a1b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1226a1b5 push 0x12282d98 */
  push32((uint32_t)(0x12282d98u));
  /* 1226a1ba push 0x12263708 */
  push32((uint32_t)(0x12263708u));
  /* 1226a1bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1226a1c5 push eax */
  push32((uint32_t)(EAX));
  /* 1226a1c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1226a1cd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a1d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1226a1d1 push esi */
  push32((uint32_t)(ESI));
  /* 1226a1d2 push edi */
  push32((uint32_t)(EDI));
  /* 1226a1d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1226a1d6 cmp dword ptr [0x12286af4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12286af4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a1dd jne 0x1226a236 */
  if (!C.zf) goto L_1226a236;
  /* 1226a1df push 1 */
  push32((uint32_t)(0x1u));
  /* 1226a1e1 push 0x122823f4 */
  push32((uint32_t)(0x122823f4u));
  /* 1226a1e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1226a1e8 push 0x122823f4 */
  push32((uint32_t)(0x122823f4u));
  /* 1226a1ed push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a1ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a1f1 call dword ptr [0x122892dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892dc))), 0x1226a1f7u);
  /* 1226a1f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a1f9 je 0x1226a207 */
  if (C.zf) goto L_1226a207;
  /* 1226a1fb mov dword ptr [0x12286af4], 1 */
  w32((uint32_t)(0x12286af4), (0x1u));
  /* 1226a205 jmp 0x1226a236 */
  goto L_1226a236;
L_1226a207:;
  /* 1226a207 push 1 */
  push32((uint32_t)(0x1u));
  /* 1226a209 push 0x122823f0 */
  push32((uint32_t)(0x122823f0u));
  /* 1226a20e push 1 */
  push32((uint32_t)(0x1u));
  /* 1226a210 push 0x122823f0 */
  push32((uint32_t)(0x122823f0u));
  /* 1226a215 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a217 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a219 call dword ptr [0x122892e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892e0))), 0x1226a21fu);
  /* 1226a21f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a221 je 0x1226a22f */
  if (C.zf) goto L_1226a22f;
  /* 1226a223 mov dword ptr [0x12286af4], 2 */
  w32((uint32_t)(0x12286af4), (0x2u));
  /* 1226a22d jmp 0x1226a236 */
  goto L_1226a236;
L_1226a22f:;
  /* 1226a22f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a231 jmp 0x1226a594 */
  goto L_1226a594;
L_1226a236:;
  /* 1226a236 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a23a jle 0x1226a24f */
  if ((C.zf||C.sf!=C.of)) goto L_1226a24f;
  /* 1226a23c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226a23f push eax */
  push32((uint32_t)(EAX));
  /* 1226a240 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226a243 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a244 call 0x1226a5b0 */
  push32(0x1226a249u); f_1226a5b0();
  /* 1226a249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a24c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1226a24f:;
  /* 1226a24f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a253 jle 0x1226a268 */
  if ((C.zf||C.sf!=C.of)) goto L_1226a268;
  /* 1226a255 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1226a258 push edx */
  push32((uint32_t)(EDX));
  /* 1226a259 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1226a25c push eax */
  push32((uint32_t)(EAX));
  /* 1226a25d call 0x1226a5b0 */
  push32(0x1226a262u); f_1226a5b0();
  /* 1226a262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a265 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_1226a268:;
  /* 1226a268 cmp dword ptr [0x12286af4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12286af4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a26f jne 0x1226a294 */
  if (!C.zf) goto L_1226a294;
  /* 1226a271 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1226a274 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a275 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1226a278 push edx */
  push32((uint32_t)(EDX));
  /* 1226a279 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226a27c push eax */
  push32((uint32_t)(EAX));
  /* 1226a27d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226a280 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a281 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226a284 push edx */
  push32((uint32_t)(EDX));
  /* 1226a285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a288 push eax */
  push32((uint32_t)(EAX));
  /* 1226a289 call dword ptr [0x122892e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892e0))), 0x1226a28fu);
  /* 1226a28f jmp 0x1226a594 */
  goto L_1226a594;
L_1226a294:;
  /* 1226a294 cmp dword ptr [0x12286af4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12286af4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a29b jne 0x1226a592 */
  if (!C.zf) goto L_1226a592;
  /* 1226a2a1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a2a5 jne 0x1226a2b0 */
  if (!C.zf) goto L_1226a2b0;
  /* 1226a2a7 mov ecx, dword ptr [0x122869a0] */
  ECX = (r32((uint32_t)(0x122869a0)));
  /* 1226a2ad mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_1226a2b0:;
  /* 1226a2b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a2b4 je 0x1226a2c0 */
  if (C.zf) goto L_1226a2c0;
  /* 1226a2b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a2ba jne 0x1226a43c */
  if (!C.zf) goto L_1226a43c;
L_1226a2c0:;
  /* 1226a2c0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226a2c3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a2c6 jne 0x1226a2d2 */
  if (!C.zf) goto L_1226a2d2;
  /* 1226a2c8 mov eax, 2 */
  EAX = (0x2u);
  /* 1226a2cd jmp 0x1226a594 */
  goto L_1226a594;
L_1226a2d2:;
  /* 1226a2d2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a2d6 jle 0x1226a2e2 */
  if ((C.zf||C.sf!=C.of)) goto L_1226a2e2;
  /* 1226a2d8 mov eax, 1 */
  EAX = (0x1u);
  /* 1226a2dd jmp 0x1226a594 */
  goto L_1226a594;
L_1226a2e2:;
  /* 1226a2e2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a2e6 jle 0x1226a2f2 */
  if ((C.zf||C.sf!=C.of)) goto L_1226a2f2;
  /* 1226a2e8 mov eax, 3 */
  EAX = (0x3u);
  /* 1226a2ed jmp 0x1226a594 */
  goto L_1226a594;
L_1226a2f2:;
  /* 1226a2f2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 1226a2f5 push eax */
  push32((uint32_t)(EAX));
  /* 1226a2f6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1226a2f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a2fa call dword ptr [0x12289338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12289338))), 0x1226a300u);
  /* 1226a300 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a302 jne 0x1226a30b */
  if (!C.zf) goto L_1226a30b;
  /* 1226a304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a306 jmp 0x1226a594 */
  goto L_1226a594;
L_1226a30b:;
  /* 1226a30b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a30f jne 0x1226a317 */
  if (!C.zf) goto L_1226a317;
  /* 1226a311 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a315 je 0x1226a344 */
  if (C.zf) goto L_1226a344;
L_1226a317:;
  /* 1226a317 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a31b jne 0x1226a323 */
  if (!C.zf) goto L_1226a323;
  /* 1226a31d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a321 je 0x1226a344 */
  if (C.zf) goto L_1226a344;
L_1226a323:;
  /* 1226a323 push 0x12282d58 */
  push32((uint32_t)(0x12282d58u));
  /* 1226a328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a32a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1226a32f push 0x12282d50 */
  push32((uint32_t)(0x12282d50u));
  /* 1226a334 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a336 call 0x122596c0 */
  push32(0x1226a33bu); f_122596c0();
  /* 1226a33b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a33e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a341 jne 0x1226a344 */
  if (!C.zf) goto L_1226a344;
  /* 1226a343 int3  */
  x86_unimpl("int3 @ 0x1226a343");
L_1226a344:;
  /* 1226a344 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226a346 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226a348 jne 0x1226a30b */
  if (!C.zf) goto L_1226a30b;
  /* 1226a34a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a34e jle 0x1226a3c3 */
  if ((C.zf||C.sf!=C.of)) goto L_1226a3c3;
  /* 1226a350 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a354 jae 0x1226a360 */
  if (!C.cf) goto L_1226a360;
  /* 1226a356 mov eax, 3 */
  EAX = (0x3u);
  /* 1226a35b jmp 0x1226a594 */
  goto L_1226a594;
L_1226a360:;
  /* 1226a360 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 1226a363 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 1226a366 jmp 0x1226a371 */
  goto L_1226a371;
L_1226a368:;
  /* 1226a368 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a36b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a36e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_1226a371:;
  /* 1226a371 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a374 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a376 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1226a378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a37a je 0x1226a3b9 */
  if (C.zf) goto L_1226a3b9;
  /* 1226a37c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a37f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226a381 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1226a384 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226a386 je 0x1226a3b9 */
  if (C.zf) goto L_1226a3b9;
  /* 1226a388 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226a38b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226a38d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1226a38f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a394 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1226a396 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a398 jl 0x1226a3b7 */
  if ((C.sf!=C.of)) goto L_1226a3b7;
  /* 1226a39a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226a39d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226a39f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1226a3a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a3a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226a3a6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1226a3a9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a3ab jg 0x1226a3b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1226a3b7;
  /* 1226a3ad mov eax, 2 */
  EAX = (0x2u);
  /* 1226a3b2 jmp 0x1226a594 */
  goto L_1226a594;
L_1226a3b7:;
  /* 1226a3b7 jmp 0x1226a368 */
  goto L_1226a368;
L_1226a3b9:;
  /* 1226a3b9 mov eax, 3 */
  EAX = (0x3u);
  /* 1226a3be jmp 0x1226a594 */
  goto L_1226a594;
L_1226a3c3:;
  /* 1226a3c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a3c7 jle 0x1226a43c */
  if ((C.zf||C.sf!=C.of)) goto L_1226a43c;
  /* 1226a3c9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a3cd jae 0x1226a3d9 */
  if (!C.cf) goto L_1226a3d9;
  /* 1226a3cf mov eax, 1 */
  EAX = (0x1u);
  /* 1226a3d4 jmp 0x1226a594 */
  goto L_1226a594;
L_1226a3d9:;
  /* 1226a3d9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1226a3dc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1226a3df jmp 0x1226a3ea */
  goto L_1226a3ea;
L_1226a3e1:;
  /* 1226a3e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a3e4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a3e7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1226a3ea:;
  /* 1226a3ea mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a3ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226a3ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1226a3f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226a3f3 je 0x1226a432 */
  if (C.zf) goto L_1226a432;
  /* 1226a3f5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a3f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226a3fa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1226a3fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1226a3ff je 0x1226a432 */
  if (C.zf) goto L_1226a432;
  /* 1226a401 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1226a404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a406 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1226a408 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a40b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1226a40d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1226a40f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a411 jl 0x1226a430 */
  if ((C.sf!=C.of)) goto L_1226a430;
  /* 1226a413 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1226a416 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226a418 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1226a41a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1226a41d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a41f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1226a422 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a424 jg 0x1226a430 */
  if ((!C.zf&&C.sf==C.of)) goto L_1226a430;
  /* 1226a426 mov eax, 2 */
  EAX = (0x2u);
  /* 1226a42b jmp 0x1226a594 */
  goto L_1226a594;
L_1226a430:;
  /* 1226a430 jmp 0x1226a3e1 */
  goto L_1226a3e1;
L_1226a432:;
  /* 1226a432 mov eax, 1 */
  EAX = (0x1u);
  /* 1226a437 jmp 0x1226a594 */
  goto L_1226a594;
L_1226a43c:;
  /* 1226a43c push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a43e push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a440 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226a443 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a444 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226a447 push edx */
  push32((uint32_t)(EDX));
  /* 1226a448 push 9 */
  push32((uint32_t)(0x9u));
  /* 1226a44a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1226a44d push eax */
  push32((uint32_t)(EAX));
  /* 1226a44e call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x1226a454u);
  /* 1226a454 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1226a457 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a45b jne 0x1226a464 */
  if (!C.zf) goto L_1226a464;
  /* 1226a45d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a45f jmp 0x1226a594 */
  goto L_1226a594;
L_1226a464:;
  /* 1226a464 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1226a46b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1226a46e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1226a470 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a473 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1226a475 call 0x1225d7a0 */
  push32(0x1226a47au); f_1225d7a0();
  /* 1226a47a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1226a47d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1226a480 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 1226a483 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1226a486 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1226a48d jmp 0x1226a4a6 */
  goto L_1226a4a6;
  /* 1226a48f mov eax, 1 */
  EAX = (0x1u);
  /* 1226a494 ret  */
  ESPCHK(0x1226a1b0u, _esp0);
  ESP += 4; return;
  /* 1226a495 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1226a498 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1226a49f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1226a4a6:;
  /* 1226a4a6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a4aa jne 0x1226a4b3 */
  if (!C.zf) goto L_1226a4b3;
  /* 1226a4ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a4ae jmp 0x1226a594 */
  goto L_1226a594;
L_1226a4b3:;
  /* 1226a4b3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1226a4b6 push edx */
  push32((uint32_t)(EDX));
  /* 1226a4b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1226a4ba push eax */
  push32((uint32_t)(EAX));
  /* 1226a4bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1226a4be push ecx */
  push32((uint32_t)(ECX));
  /* 1226a4bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1226a4c2 push edx */
  push32((uint32_t)(EDX));
  /* 1226a4c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1226a4c5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1226a4c8 push eax */
  push32((uint32_t)(EAX));
  /* 1226a4c9 call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x1226a4cfu);
  /* 1226a4cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a4d1 jne 0x1226a4da */
  if (!C.zf) goto L_1226a4da;
  /* 1226a4d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a4d5 jmp 0x1226a594 */
  goto L_1226a594;
L_1226a4da:;
  /* 1226a4da push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a4dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1226a4de mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1226a4e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a4e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1226a4e5 push edx */
  push32((uint32_t)(EDX));
  /* 1226a4e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 1226a4e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1226a4eb push eax */
  push32((uint32_t)(EAX));
  /* 1226a4ec call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x1226a4f2u);
  /* 1226a4f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1226a4f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a4f9 jne 0x1226a502 */
  if (!C.zf) goto L_1226a502;
  /* 1226a4fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a4fd jmp 0x1226a594 */
  goto L_1226a594;
L_1226a502:;
  /* 1226a502 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1226a509 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1226a50c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1226a50e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a511 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1226a513 call 0x1225d7a0 */
  push32(0x1226a518u); f_1225d7a0();
  /* 1226a518 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1226a51b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1226a51e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 1226a521 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1226a524 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1226a52b jmp 0x1226a544 */
  goto L_1226a544;
  /* 1226a52d mov eax, 1 */
  EAX = (0x1u);
  /* 1226a532 ret  */
  ESPCHK(0x1226a1b0u, _esp0);
  ESP += 4; return;
  /* 1226a533 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1226a536 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1226a53d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1226a544:;
  /* 1226a544 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a548 jne 0x1226a54e */
  if (!C.zf) goto L_1226a54e;
  /* 1226a54a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a54c jmp 0x1226a594 */
  goto L_1226a594;
L_1226a54e:;
  /* 1226a54e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1226a551 push edx */
  push32((uint32_t)(EDX));
  /* 1226a552 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1226a555 push eax */
  push32((uint32_t)(EAX));
  /* 1226a556 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1226a559 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a55a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1226a55d push edx */
  push32((uint32_t)(EDX));
  /* 1226a55e push 1 */
  push32((uint32_t)(0x1u));
  /* 1226a560 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1226a563 push eax */
  push32((uint32_t)(EAX));
  /* 1226a564 call dword ptr [0x1228932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1228932c))), 0x1226a56au);
  /* 1226a56a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a56c jne 0x1226a572 */
  if (!C.zf) goto L_1226a572;
  /* 1226a56e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a570 jmp 0x1226a594 */
  goto L_1226a594;
L_1226a572:;
  /* 1226a572 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1226a575 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a576 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1226a579 push edx */
  push32((uint32_t)(EDX));
  /* 1226a57a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1226a57d push eax */
  push32((uint32_t)(EAX));
  /* 1226a57e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1226a581 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a582 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226a585 push edx */
  push32((uint32_t)(EDX));
  /* 1226a586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a589 push eax */
  push32((uint32_t)(EAX));
  /* 1226a58a call dword ptr [0x122892dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892dc))), 0x1226a590u);
  /* 1226a590 jmp 0x1226a594 */
  goto L_1226a594;
L_1226a592:;
  /* 1226a592 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1226a594:;
  /* 1226a594 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 1226a597 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226a59a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1226a5a1 pop edi */
  EDI = (pop32());
  /* 1226a5a2 pop esi */
  ESI = (pop32());
  /* 1226a5a3 pop ebx */
  EBX = (pop32());
  /* 1226a5a4 mov esp, ebp */
  ESP = (EBP);
  /* 1226a5a6 pop ebp */
  EBP = (pop32());
  /* 1226a5a7 ret  */
  ESPCHK(0x1226a1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a5b0 @ 0x1226a5b0 (80 bytes, 32 insns) */
void f_1226a5b0(void) {
  FTRACE(0x1226a5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226a5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1226a5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1226a5b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a5b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226a5b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1226a5bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a5bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1226a5c2:;
  /* 1226a5c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a5c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a5c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a5cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1226a5ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226a5d0 je 0x1226a5e7 */
  if (C.zf) goto L_1226a5e7;
  /* 1226a5d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a5d5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1226a5d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226a5da je 0x1226a5e7 */
  if (C.zf) goto L_1226a5e7;
  /* 1226a5dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a5df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a5e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1226a5e5 jmp 0x1226a5c2 */
  goto L_1226a5c2;
L_1226a5e7:;
  /* 1226a5e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a5ea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1226a5ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226a5ef jne 0x1226a5f9 */
  if (!C.zf) goto L_1226a5f9;
  /* 1226a5f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a5f4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a5f7 jmp 0x1226a5fc */
  goto L_1226a5fc;
L_1226a5f9:;
  /* 1226a5f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1226a5fc:;
  /* 1226a5fc mov esp, ebp */
  ESP = (EBP);
  /* 1226a5fe pop ebp */
  EBP = (pop32());
  /* 1226a5ff ret  */
  ESPCHK(0x1226a5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a600 @ 0x1226a600 (736 bytes, 224 insns) */
void f_1226a600(void) {
  FTRACE(0x1226a600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226a600 push ebp */
  push32((uint32_t)(EBP));
  /* 1226a601 mov ebp, esp */
  EBP = (ESP);
  /* 1226a603 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a606 push esi */
  push32((uint32_t)(ESI));
  /* 1226a607 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a60b je 0x1226a62c */
  if (C.zf) goto L_1226a62c;
  /* 1226a60d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1226a60f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a612 push eax */
  push32((uint32_t)(EAX));
  /* 1226a613 call 0x1226aa50 */
  push32(0x1226a618u); f_1226aa50();
  /* 1226a618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a61b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1226a61e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a622 je 0x1226a62c */
  if (C.zf) goto L_1226a62c;
  /* 1226a624 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a627 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a62a jne 0x1226a634 */
  if (!C.zf) goto L_1226a634;
L_1226a62c:;
  /* 1226a62c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226a62f jmp 0x1226a8db */
  goto L_1226a8db;
L_1226a634:;
  /* 1226a634 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226a637 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1226a63b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1226a63d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a63f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1226a640 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1226a643 mov ecx, dword ptr [0x122867ac] */
  ECX = (r32((uint32_t)(0x122867ac)));
  /* 1226a649 cmp ecx, dword ptr [0x122867b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122867b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a64f jne 0x1226a665 */
  if (!C.zf) goto L_1226a665;
  /* 1226a651 mov edx, dword ptr [0x122867ac] */
  EDX = (r32((uint32_t)(0x122867ac)));
  /* 1226a657 push edx */
  push32((uint32_t)(EDX));
  /* 1226a658 call 0x1226a960 */
  push32(0x1226a65du); f_1226a960();
  /* 1226a65d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a660 mov dword ptr [0x122867ac], eax */
  w32((uint32_t)(0x122867ac), (EAX));
L_1226a665:;
  /* 1226a665 cmp dword ptr [0x122867ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122867ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a66c jne 0x1226a725 */
  if (!C.zf) goto L_1226a725;
  /* 1226a672 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a676 je 0x1226a697 */
  if (C.zf) goto L_1226a697;
  /* 1226a678 cmp dword ptr [0x122867b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122867b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a67f je 0x1226a697 */
  if (C.zf) goto L_1226a697;
  /* 1226a681 call 0x1226a100 */
  push32(0x1226a686u); f_1226a100();
  /* 1226a686 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a688 je 0x1226a692 */
  if (C.zf) goto L_1226a692;
  /* 1226a68a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226a68d jmp 0x1226a8db */
  goto L_1226a8db;
L_1226a692:;
  /* 1226a692 jmp 0x1226a725 */
  goto L_1226a725;
L_1226a697:;
  /* 1226a697 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a69b je 0x1226a6a4 */
  if (C.zf) goto L_1226a6a4;
  /* 1226a69d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a69f jmp 0x1226a8db */
  goto L_1226a8db;
L_1226a6a4:;
  /* 1226a6a4 cmp dword ptr [0x122867ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122867ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a6ab jne 0x1226a6e4 */
  if (!C.zf) goto L_1226a6e4;
  /* 1226a6ad push 0x87 */
  push32((uint32_t)(0x87u));
  /* 1226a6b2 push 0x12282db0 */
  push32((uint32_t)(0x12282db0u));
  /* 1226a6b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a6b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 1226a6bb call 0x1225a600 */
  push32(0x1226a6c0u); f_1225a600();
  /* 1226a6c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a6c3 mov dword ptr [0x122867ac], eax */
  w32((uint32_t)(0x122867ac), (EAX));
  /* 1226a6c8 cmp dword ptr [0x122867ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122867ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a6cf jne 0x1226a6d9 */
  if (!C.zf) goto L_1226a6d9;
  /* 1226a6d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226a6d4 jmp 0x1226a8db */
  goto L_1226a8db;
L_1226a6d9:;
  /* 1226a6d9 mov eax, dword ptr [0x122867ac] */
  EAX = (r32((uint32_t)(0x122867ac)));
  /* 1226a6de mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1226a6e4:;
  /* 1226a6e4 cmp dword ptr [0x122867b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122867b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a6eb jne 0x1226a725 */
  if (!C.zf) goto L_1226a725;
  /* 1226a6ed push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 1226a6f2 push 0x12282db0 */
  push32((uint32_t)(0x12282db0u));
  /* 1226a6f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a6f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 1226a6fb call 0x1225a600 */
  push32(0x1226a700u); f_1225a600();
  /* 1226a700 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a703 mov dword ptr [0x122867b4], eax */
  w32((uint32_t)(0x122867b4), (EAX));
  /* 1226a708 cmp dword ptr [0x122867b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122867b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a70f jne 0x1226a719 */
  if (!C.zf) goto L_1226a719;
  /* 1226a711 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226a714 jmp 0x1226a8db */
  goto L_1226a8db;
L_1226a719:;
  /* 1226a719 mov ecx, dword ptr [0x122867b4] */
  ECX = (r32((uint32_t)(0x122867b4)));
  /* 1226a71f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_1226a725:;
  /* 1226a725 mov edx, dword ptr [0x122867ac] */
  EDX = (r32((uint32_t)(0x122867ac)));
  /* 1226a72b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1226a72e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226a731 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a734 push eax */
  push32((uint32_t)(EAX));
  /* 1226a735 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a738 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a739 call 0x1226a8e0 */
  push32(0x1226a73eu); f_1226a8e0();
  /* 1226a73e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a741 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1226a744 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a748 jl 0x1226a7e1 */
  if ((C.sf!=C.of)) goto L_1226a7e1;
  /* 1226a74e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a751 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a754 je 0x1226a7e1 */
  if (C.zf) goto L_1226a7e1;
  /* 1226a75a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a75e je 0x1226a7d3 */
  if (C.zf) goto L_1226a7d3;
  /* 1226a760 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a762 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a765 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a768 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1226a76b push edx */
  push32((uint32_t)(EDX));
  /* 1226a76c call 0x1225b090 */
  push32(0x1226a771u); f_1225b090();
  /* 1226a771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a774 jmp 0x1226a77f */
  goto L_1226a77f;
L_1226a776:;
  /* 1226a776 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a779 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a77c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1226a77f:;
  /* 1226a77f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a782 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a785 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a789 je 0x1226a7a0 */
  if (C.zf) goto L_1226a7a0;
  /* 1226a78b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a78e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a791 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a794 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a797 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1226a79b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1226a79e jmp 0x1226a776 */
  goto L_1226a776;
L_1226a7a0:;
  /* 1226a7a0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 1226a7a5 push 0x12282db0 */
  push32((uint32_t)(0x12282db0u));
  /* 1226a7aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a7ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a7af shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1226a7b2 push eax */
  push32((uint32_t)(EAX));
  /* 1226a7b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a7b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a7b7 call 0x1225aa90 */
  push32(0x1226a7bcu); f_1225aa90();
  /* 1226a7bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a7bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1226a7c2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a7c6 je 0x1226a7d1 */
  if (C.zf) goto L_1226a7d1;
  /* 1226a7c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a7cb mov dword ptr [0x122867ac], edx */
  w32((uint32_t)(0x122867ac), (EDX));
L_1226a7d1:;
  /* 1226a7d1 jmp 0x1226a7df */
  goto L_1226a7df;
L_1226a7d3:;
  /* 1226a7d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a7d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a7d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a7dc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1226a7df:;
  /* 1226a7df jmp 0x1226a854 */
  goto L_1226a854;
L_1226a7e1:;
  /* 1226a7e1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a7e5 jne 0x1226a84d */
  if (!C.zf) goto L_1226a84d;
  /* 1226a7e7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a7eb jge 0x1226a7f5 */
  if ((C.sf==C.of)) goto L_1226a7f5;
  /* 1226a7ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a7f0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1226a7f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1226a7f5:;
  /* 1226a7f5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1226a7fa push 0x12282db0 */
  push32((uint32_t)(0x12282db0u));
  /* 1226a7ff push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a801 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a804 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1226a80b push edx */
  push32((uint32_t)(EDX));
  /* 1226a80c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a80f push eax */
  push32((uint32_t)(EAX));
  /* 1226a810 call 0x1225aa90 */
  push32(0x1226a815u); f_1225aa90();
  /* 1226a815 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a818 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1226a81b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a81f jne 0x1226a829 */
  if (!C.zf) goto L_1226a829;
  /* 1226a821 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226a824 jmp 0x1226a8db */
  goto L_1226a8db;
L_1226a829:;
  /* 1226a829 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a82c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a82f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a832 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1226a835 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a838 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a83b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 1226a843 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a846 mov dword ptr [0x122867ac], eax */
  w32((uint32_t)(0x122867ac), (EAX));
  /* 1226a84b jmp 0x1226a854 */
  goto L_1226a854;
L_1226a84d:;
  /* 1226a84d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a84f jmp 0x1226a8db */
  goto L_1226a8db;
L_1226a854:;
  /* 1226a854 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a858 je 0x1226a8d9 */
  if (C.zf) goto L_1226a8d9;
  /* 1226a85a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1226a85f push 0x12282db0 */
  push32((uint32_t)(0x12282db0u));
  /* 1226a864 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a866 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a869 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a86a call 0x1225d430 */
  push32(0x1226a86fu); f_1225d430();
  /* 1226a86f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a872 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a875 push eax */
  push32((uint32_t)(EAX));
  /* 1226a876 call 0x1225a600 */
  push32(0x1226a87bu); f_1225a600();
  /* 1226a87b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a87e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1226a881 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a885 je 0x1226a8d9 */
  if (C.zf) goto L_1226a8d9;
  /* 1226a887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a88a push edx */
  push32((uint32_t)(EDX));
  /* 1226a88b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226a88e push eax */
  push32((uint32_t)(EAX));
  /* 1226a88f call 0x1225d5b0 */
  push32(0x1226a894u); f_1225d5b0();
  /* 1226a894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a897 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1226a89a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a89d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226a8a0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a8a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1226a8a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a8a8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1226a8ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a8ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a8b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1226a8b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1226a8b7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1226a8b9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a8bb not edx */
  EDX = (~(EDX));
  /* 1226a8bd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1226a8c0 push edx */
  push32((uint32_t)(EDX));
  /* 1226a8c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226a8c4 push eax */
  push32((uint32_t)(EAX));
  /* 1226a8c5 call dword ptr [0x122892d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122892d8))), 0x1226a8cbu);
  /* 1226a8cb push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a8cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226a8d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a8d1 call 0x1225b090 */
  push32(0x1226a8d6u); f_1225b090();
  /* 1226a8d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226a8d9:;
  /* 1226a8d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1226a8db:;
  /* 1226a8db pop esi */
  ESI = (pop32());
  /* 1226a8dc mov esp, ebp */
  ESP = (EBP);
  /* 1226a8de pop ebp */
  EBP = (pop32());
  /* 1226a8df ret  */
  ESPCHK(0x1226a600u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x1226a8e0 (124 bytes, 47 insns) */
void f_1226a8e0(void) {
  FTRACE(0x1226a8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226a8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1226a8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1226a8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1226a8e4 mov eax, dword ptr [0x122867ac] */
  EAX = (r32((uint32_t)(0x122867ac)));
  /* 1226a8e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1226a8ec jmp 0x1226a8f7 */
  goto L_1226a8f7;
L_1226a8ee:;
  /* 1226a8ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a8f1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a8f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1226a8f7:;
  /* 1226a8f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a8fa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a8fd je 0x1226a94a */
  if (C.zf) goto L_1226a94a;
  /* 1226a8ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226a902 push eax */
  push32((uint32_t)(EAX));
  /* 1226a903 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a906 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226a908 push edx */
  push32((uint32_t)(EDX));
  /* 1226a909 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a90c push eax */
  push32((uint32_t)(EAX));
  /* 1226a90d call 0x1226a0b0 */
  push32(0x1226a912u); f_1226a0b0();
  /* 1226a912 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1226a917 jne 0x1226a948 */
  if (!C.zf) goto L_1226a948;
  /* 1226a919 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a91c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226a91e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226a921 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 1226a925 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a928 je 0x1226a93a */
  if (C.zf) goto L_1226a93a;
  /* 1226a92a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a92d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1226a92f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226a932 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 1226a936 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226a938 jne 0x1226a948 */
  if (!C.zf) goto L_1226a948;
L_1226a93a:;
  /* 1226a93a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a93d sub eax, dword ptr [0x122867ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122867ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a943 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1226a946 jmp 0x1226a958 */
  goto L_1226a958;
L_1226a948:;
  /* 1226a948 jmp 0x1226a8ee */
  goto L_1226a8ee;
L_1226a94a:;
  /* 1226a94a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226a94d sub eax, dword ptr [0x122867ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122867ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a953 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1226a956 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1226a958:;
  /* 1226a958 mov esp, ebp */
  ESP = (EBP);
  /* 1226a95a pop ebp */
  EBP = (pop32());
  /* 1226a95b ret  */
  ESPCHK(0x1226a8e0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x1226a960 (238 bytes, 80 insns) */
void f_1226a960(void) {
  FTRACE(0x1226a960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226a960 push ebp */
  push32((uint32_t)(EBP));
  /* 1226a961 mov ebp, esp */
  EBP = (ESP);
  /* 1226a963 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226a966 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1226a96d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a970 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1226a973 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a977 jne 0x1226a980 */
  if (!C.zf) goto L_1226a980;
  /* 1226a979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226a97b jmp 0x1226aa4a */
  goto L_1226aa4a;
L_1226a980:;
  /* 1226a980 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a983 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226a985 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a988 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a98b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1226a98e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226a990 je 0x1226a99d */
  if (C.zf) goto L_1226a99d;
  /* 1226a992 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226a995 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a998 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1226a99b jmp 0x1226a980 */
  goto L_1226a980;
L_1226a99d:;
  /* 1226a99d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 1226a9a2 push 0x12282db0 */
  push32((uint32_t)(0x12282db0u));
  /* 1226a9a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a9a9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1226a9ac lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 1226a9b3 push eax */
  push32((uint32_t)(EAX));
  /* 1226a9b4 call 0x1225a600 */
  push32(0x1226a9b9u); f_1225a600();
  /* 1226a9b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a9bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1226a9bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226a9c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1226a9c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a9c9 jne 0x1226a9d5 */
  if (!C.zf) goto L_1226a9d5;
  /* 1226a9cb push 9 */
  push32((uint32_t)(0x9u));
  /* 1226a9cd call 0x12259570 */
  push32(0x1226a9d2u); f_12259570();
  /* 1226a9d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226a9d5:;
  /* 1226a9d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226a9d8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1226a9db:;
  /* 1226a9db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a9de cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226a9e1 je 0x1226aa3e */
  if (C.zf) goto L_1226aa3e;
  /* 1226a9e3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 1226a9e8 push 0x12282db0 */
  push32((uint32_t)(0x12282db0u));
  /* 1226a9ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1226a9ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226a9f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1226a9f4 push edx */
  push32((uint32_t)(EDX));
  /* 1226a9f5 call 0x1225d430 */
  push32(0x1226a9fau); f_1225d430();
  /* 1226a9fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226a9fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aa00 push eax */
  push32((uint32_t)(EAX));
  /* 1226aa01 call 0x1225a600 */
  push32(0x1226aa06u); f_1225a600();
  /* 1226aa06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aa09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226aa0c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1226aa0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226aa11 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226aa14 je 0x1226aa2a */
  if (C.zf) goto L_1226aa2a;
  /* 1226aa16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226aa19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1226aa1b push ecx */
  push32((uint32_t)(ECX));
  /* 1226aa1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226aa1f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1226aa21 push eax */
  push32((uint32_t)(EAX));
  /* 1226aa22 call 0x1225d5b0 */
  push32(0x1226aa27u); f_1225d5b0();
  /* 1226aa27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1226aa2a:;
  /* 1226aa2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1226aa2d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aa30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1226aa33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226aa36 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aa39 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1226aa3c jmp 0x1226a9db */
  goto L_1226a9db;
L_1226aa3e:;
  /* 1226aa3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1226aa41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1226aa47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1226aa4a:;
  /* 1226aa4a mov esp, ebp */
  ESP = (EBP);
  /* 1226aa4c pop ebp */
  EBP = (pop32());
  /* 1226aa4d ret  */
  ESPCHK(0x1226a960u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa50 @ 0x1226aa50 (237 bytes, 81 insns) */
void f_1226aa50(void) {
  FTRACE(0x1226aa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226aa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1226aa51 mov ebp, esp */
  EBP = (ESP);
  /* 1226aa53 push ecx */
  push32((uint32_t)(ECX));
  /* 1226aa54 cmp dword ptr [0x12287eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12287eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226aa5b jne 0x1226aa72 */
  if (!C.zf) goto L_1226aa72;
  /* 1226aa5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1226aa60 push eax */
  push32((uint32_t)(EAX));
  /* 1226aa61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226aa64 push ecx */
  push32((uint32_t)(ECX));
  /* 1226aa65 call 0x1226ab50 */
  push32(0x1226aa6au); f_1226ab50();
  /* 1226aa6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aa6d jmp 0x1226ab39 */
  goto L_1226ab39;
L_1226aa72:;
  /* 1226aa72 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1226aa74 call 0x1225e000 */
  push32(0x1226aa79u); f_1225e000();
  /* 1226aa79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aa7c jmp 0x1226aa87 */
  goto L_1226aa87;
L_1226aa7e:;
  /* 1226aa7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226aa81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aa84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1226aa87:;
  /* 1226aa87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226aa8a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1226aa8e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1226aa92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226aa95 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1226aa9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1226aa9d je 0x1226ab1b */
  if (C.zf) goto L_1226ab1b;
  /* 1226aa9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226aaa2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226aaa7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226aaa9 mov cl, byte ptr [eax + 0x12288001] */
  CL = (r8((uint32_t)(EAX + 0x12288001)));
  /* 1226aaaf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1226aab2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1226aab4 je 0x1226ab06 */
  if (C.zf) goto L_1226ab06;
  /* 1226aab6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226aab9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aabc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1226aabf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226aac2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226aac4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1226aac6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1226aac8 jne 0x1226aad8 */
  if (!C.zf) goto L_1226aad8;
  /* 1226aaca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1226aacc call 0x1225e0a0 */
  push32(0x1226aad1u); f_1225e0a0();
  /* 1226aad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226aad6 jmp 0x1226ab39 */
  goto L_1226ab39;
L_1226aad8:;
  /* 1226aad8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226aadb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1226aae1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1226aae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226aae7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1226aae9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1226aaeb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1226aaed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226aaf0 jne 0x1226ab04 */
  if (!C.zf) goto L_1226ab04;
  /* 1226aaf2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1226aaf4 call 0x1225e0a0 */
  push32(0x1226aaf9u); f_1225e0a0();
  /* 1226aaf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aafc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226aaff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1226ab02 jmp 0x1226ab39 */
  goto L_1226ab39;
L_1226ab04:;
  /* 1226ab04 jmp 0x1226ab16 */
  goto L_1226ab16;
L_1226ab06:;
  /* 1226ab06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226ab09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1226ab0f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226ab12 jne 0x1226ab16 */
  if (!C.zf) goto L_1226ab16;
  /* 1226ab14 jmp 0x1226ab1b */
  goto L_1226ab1b;
L_1226ab16:;
  /* 1226ab16 jmp 0x1226aa7e */
  goto L_1226aa7e;
L_1226ab1b:;
  /* 1226ab1b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1226ab1d call 0x1225e0a0 */
  push32(0x1226ab22u); f_1225e0a0();
  /* 1226ab22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1226ab25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1226ab28 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226ab2d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1226ab30 jne 0x1226ab37 */
  if (!C.zf) goto L_1226ab37;
  /* 1226ab32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1226ab35 jmp 0x1226ab39 */
  goto L_1226ab39;
L_1226ab37:;
  /* 1226ab37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1226ab39:;
  /* 1226ab39 mov esp, ebp */
  ESP = (EBP);
  /* 1226ab3b pop ebp */
  EBP = (pop32());
  /* 1226ab3c ret  */
  ESPCHK(0x1226aa50u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1226ab50 (193 bytes, 87 insns) */
void f_1226ab50(void) {
  FTRACE(0x1226ab50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226ab50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226ab52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1226ab56 push ebx */
  push32((uint32_t)(EBX));
  /* 1226ab57 mov ebx, eax */
  EBX = (EAX);
  /* 1226ab59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1226ab5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1226ab60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1226ab66 je 0x1226ab7b */
  if (C.zf) goto L_1226ab7b;
L_1226ab68:;
  /* 1226ab68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1226ab6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1226ab6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1226ab6d je 0x1226ab40 */
  if (C.zf) { jmp_ind(0x1226ab40u); return; }
  /* 1226ab6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1226ab71 je 0x1226abc4 */
  if (C.zf) goto L_1226abc4;
  /* 1226ab73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1226ab79 jne 0x1226ab68 */
  if (!C.zf) goto L_1226ab68;
L_1226ab7b:;
  /* 1226ab7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1226ab7d push edi */
  push32((uint32_t)(EDI));
  /* 1226ab7e mov eax, ebx */
  EAX = (EBX);
  /* 1226ab80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1226ab83 push esi */
  push32((uint32_t)(ESI));
  /* 1226ab84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1226ab86:;
  /* 1226ab86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1226ab88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1226ab8d mov eax, ecx */
  EAX = (ECX);
  /* 1226ab8f mov esi, edi */
  ESI = (EDI);
  /* 1226ab91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1226ab93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1226ab95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1226ab97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1226ab9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1226ab9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1226ab9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1226aba1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1226aba4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1226abaa jne 0x1226abc8 */
  if (!C.zf) goto L_1226abc8;
  /* 1226abac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1226abb1 je 0x1226ab86 */
  if (C.zf) goto L_1226ab86;
  /* 1226abb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1226abb8 jne 0x1226abc2 */
  if (!C.zf) goto L_1226abc2;
  /* 1226abba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1226abc0 jne 0x1226ab86 */
  if (!C.zf) goto L_1226ab86;
L_1226abc2:;
  /* 1226abc2 pop esi */
  ESI = (pop32());
  /* 1226abc3 pop edi */
  EDI = (pop32());
L_1226abc4:;
  /* 1226abc4 pop ebx */
  EBX = (pop32());
  /* 1226abc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1226abc7 ret  */
  ESPCHK(0x1226ab50u, _esp0);
  ESP += 4; return;
L_1226abc8:;
  /* 1226abc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1226abcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1226abcd je 0x1226ac05 */
  if (C.zf) goto L_1226ac05;
  /* 1226abcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1226abd1 je 0x1226abc2 */
  if (C.zf) goto L_1226abc2;
  /* 1226abd3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1226abd5 je 0x1226abfe */
  if (C.zf) goto L_1226abfe;
  /* 1226abd7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1226abd9 je 0x1226abc2 */
  if (C.zf) goto L_1226abc2;
  /* 1226abdb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1226abde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1226abe0 je 0x1226abf7 */
  if (C.zf) goto L_1226abf7;
  /* 1226abe2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1226abe4 je 0x1226abc2 */
  if (C.zf) goto L_1226abc2;
  /* 1226abe6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1226abe8 je 0x1226abf0 */
  if (C.zf) goto L_1226abf0;
  /* 1226abea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1226abec je 0x1226abc2 */
  if (C.zf) goto L_1226abc2;
  /* 1226abee jmp 0x1226ab86 */
  goto L_1226ab86;
L_1226abf0:;
  /* 1226abf0 pop esi */
  ESI = (pop32());
  /* 1226abf1 pop edi */
  EDI = (pop32());
  /* 1226abf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1226abf5 pop ebx */
  EBX = (pop32());
  /* 1226abf6 ret  */
  ESPCHK(0x1226ab50u, _esp0);
  ESP += 4; return;
L_1226abf7:;
  /* 1226abf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1226abfa pop esi */
  ESI = (pop32());
  /* 1226abfb pop edi */
  EDI = (pop32());
  /* 1226abfc pop ebx */
  EBX = (pop32());
  /* 1226abfd ret  */
  ESPCHK(0x1226ab50u, _esp0);
  ESP += 4; return;
L_1226abfe:;
  /* 1226abfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1226ac01 pop esi */
  ESI = (pop32());
  /* 1226ac02 pop edi */
  EDI = (pop32());
  /* 1226ac03 pop ebx */
  EBX = (pop32());
  /* 1226ac04 ret  */
  ESPCHK(0x1226ab50u, _esp0);
  ESP += 4; return;
L_1226ac05:;
  /* 1226ac05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1226ac08 pop esi */
  ESI = (pop32());
  /* 1226ac09 pop edi */
  EDI = (pop32());
  /* 1226ac0a pop ebx */
  EBX = (pop32());
  /* 1226ac0b ret  */
  ESPCHK(0x1226ab50u, _esp0);
  ESP += 4; return;
  /* 1226ac0c jmp dword ptr [0x12289390] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12289390)))); return;
}

/* RtlUnwind @ 0x1226ad5c (6 bytes, 1 insns) */
void f_1226ad5c(void) {
  FTRACE(0x1226ad5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1226ad5c jmp dword ptr [0x12289314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12289314)))); return;
}

