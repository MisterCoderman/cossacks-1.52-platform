#include "recomp.h"

/* FUN_10017940 @ 0x11067940 (393 bytes, 123 insns) */
void f_11067940(void) {
  FTRACE(0x11067940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11067940 push ebp */
  push32((uint32_t)(EBP));
  /* 11067941 mov ebp, esp */
  EBP = (ESP);
  /* 11067943 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067946 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106794a jne 0x11067956 */
  if (!C.zf) goto L_11067956;
  /* 1106794c mov eax, dword ptr [0x11085c98] */
  EAX = (r32((uint32_t)(0x11085c98)));
  /* 11067951 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11067954 jmp 0x1106795c */
  goto L_1106795c;
L_11067956:;
  /* 11067956 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067959 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1106795c:;
  /* 1106795c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106795f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11067962 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067965 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11067968 push 0x11086b1c */
  push32((uint32_t)(0x11086b1cu));
  /* 1106796d call dword ptr [0x110893b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893b4))), 0x11067973u);
  /* 11067973 cmp dword ptr [0x11086b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106797a je 0x1106799a */
  if (C.zf) goto L_1106799a;
  /* 1106797c push 0x11086b1c */
  push32((uint32_t)(0x11086b1cu));
  /* 11067981 call dword ptr [0x110893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893a4))), 0x11067987u);
  /* 11067987 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11067989 call 0x1105e000 */
  push32(0x1106798eu); f_1105e000();
  /* 1106798e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067991 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11067998 jmp 0x110679a1 */
  goto L_110679a1;
L_1106799a:;
  /* 1106799a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_110679a1:;
  /* 110679a1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110679a5 jbe 0x11067a92 */
  if ((C.cf||C.zf)) goto L_11067a92;
  /* 110679ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110679ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110679b0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 110679b3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110679b7 je 0x110679c1 */
  if (C.zf) goto L_110679c1;
  /* 110679b9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110679bd je 0x110679c6 */
  if (C.zf) goto L_110679c6;
  /* 110679bf jmp 0x11067a20 */
  goto L_11067a20;
L_110679c1:;
  /* 110679c1 jmp 0x11067a92 */
  goto L_11067a92;
L_110679c6:;
  /* 110679c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110679c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110679cc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 110679cf mov dword ptr [0x11086af8], 0 */
  w32((uint32_t)(0x11086af8), (0x0u));
  /* 110679d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110679dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110679df cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110679e2 jne 0x110679f7 */
  if (!C.zf) goto L_110679f7;
  /* 110679e4 mov dword ptr [0x11086af8], 1 */
  w32((uint32_t)(0x11086af8), (0x1u));
  /* 110679ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110679f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110679f4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_110679f7:;
  /* 110679f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110679fa push ecx */
  push32((uint32_t)(ECX));
  /* 110679fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 110679fe push edx */
  push32((uint32_t)(EDX));
  /* 110679ff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11067a02 push eax */
  push32((uint32_t)(EAX));
  /* 11067a03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067a06 push ecx */
  push32((uint32_t)(ECX));
  /* 11067a07 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067a0a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11067a0c push eax */
  push32((uint32_t)(EAX));
  /* 11067a0d call 0x11067ad0 */
  push32(0x11067a12u); f_11067ad0();
  /* 11067a12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067a15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067a18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067a1b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11067a1e jmp 0x11067a8d */
  goto L_11067a8d;
L_11067a20:;
  /* 11067a20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11067a25 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11067a27 mov ecx, dword ptr [0x11084c98] */
  ECX = (r32((uint32_t)(0x11084c98)));
  /* 11067a2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11067a2f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11067a33 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11067a39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11067a3b je 0x11067a68 */
  if (C.zf) goto L_11067a68;
  /* 11067a3d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067a41 jbe 0x11067a68 */
  if ((C.cf||C.zf)) goto L_11067a68;
  /* 11067a43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067a46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067a49 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11067a4b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11067a4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067a50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067a53 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11067a56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067a59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067a5c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11067a5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067a62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067a65 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11067a68:;
  /* 11067a68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067a6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067a6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11067a70 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11067a72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067a75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067a78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11067a7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067a7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067a81 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11067a84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067a87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067a8a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11067a8d:;
  /* 11067a8d jmp 0x110679a1 */
  goto L_110679a1;
L_11067a92:;
  /* 11067a92 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067a96 je 0x11067aa4 */
  if (C.zf) goto L_11067aa4;
  /* 11067a98 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11067a9a call 0x1105e0a0 */
  push32(0x11067a9fu); f_1105e0a0();
  /* 11067a9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067aa2 jmp 0x11067aaf */
  goto L_11067aaf;
L_11067aa4:;
  /* 11067aa4 push 0x11086b1c */
  push32((uint32_t)(0x11086b1cu));
  /* 11067aa9 call dword ptr [0x110893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893a4))), 0x11067aafu);
L_11067aaf:;
  /* 11067aaf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067ab3 jbe 0x11067ac3 */
  if ((C.cf||C.zf)) goto L_11067ac3;
  /* 11067ab5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11067ab8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11067abb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067abe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067ac1 jmp 0x11067ac5 */
  goto L_11067ac5;
L_11067ac3:;
  /* 11067ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11067ac5:;
  /* 11067ac5 mov esp, ebp */
  ESP = (EBP);
  /* 11067ac7 pop ebp */
  EBP = (pop32());
  /* 11067ac8 ret  */
  ESPCHK(0x11067940u, _esp0);
  ESP += 4; return;
}

/* FUN_10017ad0 @ 0x11067ad0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11067ad0(void) {
  FTRACE(0x11067ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11067ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11067ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11067ad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067ad6 push esi */
  push32((uint32_t)(ESI));
  /* 11067ad7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11067adb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11067ade mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067ae1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067ae4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11067ae7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067aeb ja 0x11068038 */
  if ((!C.cf&&!C.zf)) goto L_11068038;
  /* 11067af1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11067af4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11067af6 mov dl, byte ptr [eax + 0x11068099] */
  DL = (r8((uint32_t)(EAX + 0x11068099)));
  /* 11067afc jmp dword ptr [edx*4 + 0x1106803d] */
  switch (EDX) {
    case 0: goto L_11068016;
    case 1: goto L_11067b25;
    case 2: goto L_11067b6b;
    case 3: goto L_11067cb8;
    case 4: goto L_11067ce0;
    case 5: goto L_11067d7f;
    case 6: goto L_11067deb;
    case 7: goto L_11067e14;
    case 8: goto L_11067e55;
    case 9: goto L_11067f37;
    case 10: goto L_11067f9e;
    case 11: goto L_11067feb;
    case 12: goto L_11067b03;
    case 13: goto L_11067b48;
    case 14: goto L_11067b8e;
    case 15: goto L_11067c8e;
    case 16: goto L_11067d25;
    case 17: goto L_11067d52;
    case 18: goto L_11067da7;
    case 19: goto L_11067e2b;
    case 20: goto L_11067ed9;
    case 21: goto L_11067f68;
    case 22: goto L_11068038;
    default: x86_unimpl("switch@0x11067afc out of table"); return;
  }
L_11067b03:;
  /* 11067b03 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067b06 push ecx */
  push32((uint32_t)(ECX));
  /* 11067b07 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067b0a push edx */
  push32((uint32_t)(EDX));
  /* 11067b0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067b0e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11067b11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067b14 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11067b17 push eax */
  push32((uint32_t)(EAX));
  /* 11067b18 call 0x110680f0 */
  push32(0x11067b1du); f_110680f0();
  /* 11067b1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067b20 jmp 0x11068038 */
  goto L_11068038;
L_11067b25:;
  /* 11067b25 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067b28 push ecx */
  push32((uint32_t)(ECX));
  /* 11067b29 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067b2c push edx */
  push32((uint32_t)(EDX));
  /* 11067b2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067b30 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11067b33 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067b36 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11067b3a push eax */
  push32((uint32_t)(EAX));
  /* 11067b3b call 0x110680f0 */
  push32(0x11067b40u); f_110680f0();
  /* 11067b40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067b43 jmp 0x11068038 */
  goto L_11068038;
L_11067b48:;
  /* 11067b48 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067b4b push ecx */
  push32((uint32_t)(ECX));
  /* 11067b4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067b4f push edx */
  push32((uint32_t)(EDX));
  /* 11067b50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067b53 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11067b56 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067b59 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11067b5d push eax */
  push32((uint32_t)(EAX));
  /* 11067b5e call 0x110680f0 */
  push32(0x11067b63u); f_110680f0();
  /* 11067b63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067b66 jmp 0x11068038 */
  goto L_11068038;
L_11067b6b:;
  /* 11067b6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067b6e push ecx */
  push32((uint32_t)(ECX));
  /* 11067b6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067b72 push edx */
  push32((uint32_t)(EDX));
  /* 11067b73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067b76 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11067b79 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067b7c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11067b80 push eax */
  push32((uint32_t)(EAX));
  /* 11067b81 call 0x110680f0 */
  push32(0x11067b86u); f_110680f0();
  /* 11067b86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067b89 jmp 0x11068038 */
  goto L_11068038;
L_11067b8e:;
  /* 11067b8e cmp dword ptr [0x11086af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067b95 je 0x11067c16 */
  if (C.zf) goto L_11067c16;
  /* 11067b97 mov dword ptr [0x11086af8], 0 */
  w32((uint32_t)(0x11086af8), (0x0u));
  /* 11067ba1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067ba4 push ecx */
  push32((uint32_t)(ECX));
  /* 11067ba5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067ba8 push edx */
  push32((uint32_t)(EDX));
  /* 11067ba9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067bac push eax */
  push32((uint32_t)(EAX));
  /* 11067bad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11067bb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067bb4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11067bba push eax */
  push32((uint32_t)(EAX));
  /* 11067bbb call 0x110682a0 */
  push32(0x11067bc0u); f_110682a0();
  /* 11067bc0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067bc3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067bc6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067bc9 jne 0x11067bd0 */
  if (!C.zf) goto L_11067bd0;
  /* 11067bcb jmp 0x11068038 */
  goto L_11068038;
L_11067bd0:;
  /* 11067bd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067bd3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11067bd5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11067bd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067bdb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11067bdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067be0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067be3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11067be5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067be8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11067bea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067bed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067bf0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11067bf2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11067bf6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067bf9 push edx */
  push32((uint32_t)(EDX));
  /* 11067bfa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067bfd push eax */
  push32((uint32_t)(EAX));
  /* 11067bfe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067c01 push ecx */
  push32((uint32_t)(ECX));
  /* 11067c02 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067c05 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11067c0b push eax */
  push32((uint32_t)(EAX));
  /* 11067c0c call 0x110682a0 */
  push32(0x11067c11u); f_110682a0();
  /* 11067c11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067c14 jmp 0x11067c89 */
  goto L_11067c89;
L_11067c16:;
  /* 11067c16 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067c19 push ecx */
  push32((uint32_t)(ECX));
  /* 11067c1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067c1d push edx */
  push32((uint32_t)(EDX));
  /* 11067c1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067c21 push eax */
  push32((uint32_t)(EAX));
  /* 11067c22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067c25 push ecx */
  push32((uint32_t)(ECX));
  /* 11067c26 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067c29 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11067c2f push eax */
  push32((uint32_t)(EAX));
  /* 11067c30 call 0x110682a0 */
  push32(0x11067c35u); f_110682a0();
  /* 11067c35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067c38 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067c3b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067c3e jne 0x11067c45 */
  if (!C.zf) goto L_11067c45;
  /* 11067c40 jmp 0x11068038 */
  goto L_11068038;
L_11067c45:;
  /* 11067c45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067c48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11067c4a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11067c4d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067c50 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11067c52 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067c55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067c58 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11067c5a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067c5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11067c5f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067c62 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067c65 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11067c67 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067c6a push ecx */
  push32((uint32_t)(ECX));
  /* 11067c6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067c6e push edx */
  push32((uint32_t)(EDX));
  /* 11067c6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067c72 push eax */
  push32((uint32_t)(EAX));
  /* 11067c73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067c76 push ecx */
  push32((uint32_t)(ECX));
  /* 11067c77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067c7a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11067c80 push eax */
  push32((uint32_t)(EAX));
  /* 11067c81 call 0x110682a0 */
  push32(0x11067c86u); f_110682a0();
  /* 11067c86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11067c89:;
  /* 11067c89 jmp 0x11068038 */
  goto L_11068038;
L_11067c8e:;
  /* 11067c8e mov ecx, dword ptr [0x11086af8] */
  ECX = (r32((uint32_t)(0x11086af8)));
  /* 11067c94 mov dword ptr [0x11086b08], ecx */
  w32((uint32_t)(0x11086b08), (ECX));
  /* 11067c9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067c9d push edx */
  push32((uint32_t)(EDX));
  /* 11067c9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067ca1 push eax */
  push32((uint32_t)(EAX));
  /* 11067ca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11067ca4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067ca7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11067caa push edx */
  push32((uint32_t)(EDX));
  /* 11067cab call 0x11068140 */
  push32(0x11067cb0u); f_11068140();
  /* 11067cb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067cb3 jmp 0x11068038 */
  goto L_11068038;
L_11067cb8:;
  /* 11067cb8 mov eax, dword ptr [0x11086af8] */
  EAX = (r32((uint32_t)(0x11086af8)));
  /* 11067cbd mov dword ptr [0x11086b08], eax */
  w32((uint32_t)(0x11086b08), (EAX));
  /* 11067cc2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067cc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11067cc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067cc9 push edx */
  push32((uint32_t)(EDX));
  /* 11067cca push 2 */
  push32((uint32_t)(0x2u));
  /* 11067ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067ccf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11067cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11067cd3 call 0x11068140 */
  push32(0x11067cd8u); f_11068140();
  /* 11067cd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067cdb jmp 0x11068038 */
  goto L_11068038;
L_11067ce0:;
  /* 11067ce0 mov edx, dword ptr [0x11086af8] */
  EDX = (r32((uint32_t)(0x11086af8)));
  /* 11067ce6 mov dword ptr [0x11086b08], edx */
  w32((uint32_t)(0x11086b08), (EDX));
  /* 11067cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067cef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11067cf2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11067cf3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11067cf8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11067cfa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11067cfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067d01 jne 0x11067d0a */
  if (!C.zf) goto L_11067d0a;
  /* 11067d03 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11067d0a:;
  /* 11067d0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067d0d push edx */
  push32((uint32_t)(EDX));
  /* 11067d0e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067d11 push eax */
  push32((uint32_t)(EAX));
  /* 11067d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 11067d14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067d17 push ecx */
  push32((uint32_t)(ECX));
  /* 11067d18 call 0x11068140 */
  push32(0x11067d1du); f_11068140();
  /* 11067d1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067d20 jmp 0x11068038 */
  goto L_11068038;
L_11067d25:;
  /* 11067d25 mov edx, dword ptr [0x11086af8] */
  EDX = (r32((uint32_t)(0x11086af8)));
  /* 11067d2b mov dword ptr [0x11086b08], edx */
  w32((uint32_t)(0x11086b08), (EDX));
  /* 11067d31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067d34 push eax */
  push32((uint32_t)(EAX));
  /* 11067d35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067d38 push ecx */
  push32((uint32_t)(ECX));
  /* 11067d39 push 3 */
  push32((uint32_t)(0x3u));
  /* 11067d3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067d3e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11067d41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067d44 push eax */
  push32((uint32_t)(EAX));
  /* 11067d45 call 0x11068140 */
  push32(0x11067d4au); f_11068140();
  /* 11067d4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067d4d jmp 0x11068038 */
  goto L_11068038;
L_11067d52:;
  /* 11067d52 mov ecx, dword ptr [0x11086af8] */
  ECX = (r32((uint32_t)(0x11086af8)));
  /* 11067d58 mov dword ptr [0x11086b08], ecx */
  w32((uint32_t)(0x11086b08), (ECX));
  /* 11067d5e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067d61 push edx */
  push32((uint32_t)(EDX));
  /* 11067d62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067d65 push eax */
  push32((uint32_t)(EAX));
  /* 11067d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11067d68 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067d6b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11067d6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067d71 push edx */
  push32((uint32_t)(EDX));
  /* 11067d72 call 0x11068140 */
  push32(0x11067d77u); f_11068140();
  /* 11067d77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067d7a jmp 0x11068038 */
  goto L_11068038;
L_11067d7f:;
  /* 11067d7f mov eax, dword ptr [0x11086af8] */
  EAX = (r32((uint32_t)(0x11086af8)));
  /* 11067d84 mov dword ptr [0x11086b08], eax */
  w32((uint32_t)(0x11086b08), (EAX));
  /* 11067d89 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067d8c push ecx */
  push32((uint32_t)(ECX));
  /* 11067d8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067d90 push edx */
  push32((uint32_t)(EDX));
  /* 11067d91 push 2 */
  push32((uint32_t)(0x2u));
  /* 11067d93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067d96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11067d99 push ecx */
  push32((uint32_t)(ECX));
  /* 11067d9a call 0x11068140 */
  push32(0x11067d9fu); f_11068140();
  /* 11067d9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067da2 jmp 0x11068038 */
  goto L_11068038;
L_11067da7:;
  /* 11067da7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067daa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067dae jg 0x11067dcc */
  if ((!C.zf&&C.sf==C.of)) goto L_11067dcc;
  /* 11067db0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067db3 push eax */
  push32((uint32_t)(EAX));
  /* 11067db4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067db7 push ecx */
  push32((uint32_t)(ECX));
  /* 11067db8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067dbb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11067dc1 push eax */
  push32((uint32_t)(EAX));
  /* 11067dc2 call 0x110680f0 */
  push32(0x11067dc7u); f_110680f0();
  /* 11067dc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067dca jmp 0x11067de6 */
  goto L_11067de6;
L_11067dcc:;
  /* 11067dcc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067dcf push ecx */
  push32((uint32_t)(ECX));
  /* 11067dd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067dd3 push edx */
  push32((uint32_t)(EDX));
  /* 11067dd4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067dd7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11067ddd push ecx */
  push32((uint32_t)(ECX));
  /* 11067dde call 0x110680f0 */
  push32(0x11067de3u); f_110680f0();
  /* 11067de3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11067de6:;
  /* 11067de6 jmp 0x11068038 */
  goto L_11068038;
L_11067deb:;
  /* 11067deb mov edx, dword ptr [0x11086af8] */
  EDX = (r32((uint32_t)(0x11086af8)));
  /* 11067df1 mov dword ptr [0x11086b08], edx */
  w32((uint32_t)(0x11086b08), (EDX));
  /* 11067df7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067dfa push eax */
  push32((uint32_t)(EAX));
  /* 11067dfb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067dfe push ecx */
  push32((uint32_t)(ECX));
  /* 11067dff push 2 */
  push32((uint32_t)(0x2u));
  /* 11067e01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067e04 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11067e06 push eax */
  push32((uint32_t)(EAX));
  /* 11067e07 call 0x11068140 */
  push32(0x11067e0cu); f_11068140();
  /* 11067e0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067e0f jmp 0x11068038 */
  goto L_11068038;
L_11067e14:;
  /* 11067e14 mov ecx, dword ptr [0x11086af8] */
  ECX = (r32((uint32_t)(0x11086af8)));
  /* 11067e1a mov dword ptr [0x11086b08], ecx */
  w32((uint32_t)(0x11086b08), (ECX));
  /* 11067e20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067e23 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11067e26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11067e29 jmp 0x11067e7d */
  goto L_11067e7d;
L_11067e2b:;
  /* 11067e2b mov ecx, dword ptr [0x11086af8] */
  ECX = (r32((uint32_t)(0x11086af8)));
  /* 11067e31 mov dword ptr [0x11086b08], ecx */
  w32((uint32_t)(0x11086b08), (ECX));
  /* 11067e37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067e3a push edx */
  push32((uint32_t)(EDX));
  /* 11067e3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067e3e push eax */
  push32((uint32_t)(EAX));
  /* 11067e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11067e41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067e44 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11067e47 push edx */
  push32((uint32_t)(EDX));
  /* 11067e48 call 0x11068140 */
  push32(0x11067e4du); f_11068140();
  /* 11067e4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067e50 jmp 0x11068038 */
  goto L_11068038;
L_11067e55:;
  /* 11067e55 mov eax, dword ptr [0x11086af8] */
  EAX = (r32((uint32_t)(0x11086af8)));
  /* 11067e5a mov dword ptr [0x11086b08], eax */
  w32((uint32_t)(0x11086b08), (EAX));
  /* 11067e5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067e62 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067e66 jne 0x11067e71 */
  if (!C.zf) goto L_11067e71;
  /* 11067e68 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11067e6f jmp 0x11067e7d */
  goto L_11067e7d;
L_11067e71:;
  /* 11067e71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067e74 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11067e77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11067e7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11067e7d:;
  /* 11067e7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067e80 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11067e83 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067e86 jge 0x11067e91 */
  if ((C.sf==C.of)) goto L_11067e91;
  /* 11067e88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11067e8f jmp 0x11067ebe */
  goto L_11067ebe;
L_11067e91:;
  /* 11067e91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067e94 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11067e97 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11067e98 mov ecx, 7 */
  ECX = (0x7u);
  /* 11067e9d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11067e9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11067ea2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067ea5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11067ea8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11067ea9 mov ecx, 7 */
  ECX = (0x7u);
  /* 11067eae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11067eb0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067eb3 jl 0x11067ebe */
  if ((C.sf!=C.of)) goto L_11067ebe;
  /* 11067eb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067eb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067ebb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11067ebe:;
  /* 11067ebe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067ec1 push eax */
  push32((uint32_t)(EAX));
  /* 11067ec2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 11067ec6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11067ec8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067ecb push edx */
  push32((uint32_t)(EDX));
  /* 11067ecc call 0x11068140 */
  push32(0x11067ed1u); f_11068140();
  /* 11067ed1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067ed4 jmp 0x11068038 */
  goto L_11068038;
L_11067ed9:;
  /* 11067ed9 cmp dword ptr [0x11086af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11067ee0 je 0x11067f10 */
  if (C.zf) goto L_11067f10;
  /* 11067ee2 mov dword ptr [0x11086af8], 0 */
  w32((uint32_t)(0x11086af8), (0x0u));
  /* 11067eec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067eef push eax */
  push32((uint32_t)(EAX));
  /* 11067ef0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11067ef4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067ef7 push edx */
  push32((uint32_t)(EDX));
  /* 11067ef8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067efb push eax */
  push32((uint32_t)(EAX));
  /* 11067efc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067eff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11067f05 push edx */
  push32((uint32_t)(EDX));
  /* 11067f06 call 0x110682a0 */
  push32(0x11067f0bu); f_110682a0();
  /* 11067f0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067f0e jmp 0x11067f32 */
  goto L_11067f32;
L_11067f10:;
  /* 11067f10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067f13 push eax */
  push32((uint32_t)(EAX));
  /* 11067f14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067f17 push ecx */
  push32((uint32_t)(ECX));
  /* 11067f18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067f1b push edx */
  push32((uint32_t)(EDX));
  /* 11067f1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067f1f push eax */
  push32((uint32_t)(EAX));
  /* 11067f20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067f23 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11067f29 push edx */
  push32((uint32_t)(EDX));
  /* 11067f2a call 0x110682a0 */
  push32(0x11067f2fu); f_110682a0();
  /* 11067f2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11067f32:;
  /* 11067f32 jmp 0x11068038 */
  goto L_11068038;
L_11067f37:;
  /* 11067f37 mov dword ptr [0x11086af8], 0 */
  w32((uint32_t)(0x11086af8), (0x0u));
  /* 11067f41 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067f44 push eax */
  push32((uint32_t)(EAX));
  /* 11067f45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067f48 push ecx */
  push32((uint32_t)(ECX));
  /* 11067f49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067f4c push edx */
  push32((uint32_t)(EDX));
  /* 11067f4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067f50 push eax */
  push32((uint32_t)(EAX));
  /* 11067f51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11067f54 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11067f5a push edx */
  push32((uint32_t)(EDX));
  /* 11067f5b call 0x110682a0 */
  push32(0x11067f60u); f_110682a0();
  /* 11067f60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067f63 jmp 0x11068038 */
  goto L_11068038;
L_11067f68:;
  /* 11067f68 mov eax, dword ptr [0x11086af8] */
  EAX = (r32((uint32_t)(0x11086af8)));
  /* 11067f6d mov dword ptr [0x11086b08], eax */
  w32((uint32_t)(0x11086b08), (EAX));
  /* 11067f72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067f75 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11067f78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11067f79 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11067f7e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11067f80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11067f83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067f86 push edx */
  push32((uint32_t)(EDX));
  /* 11067f87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067f8a push eax */
  push32((uint32_t)(EAX));
  /* 11067f8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11067f8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067f90 push ecx */
  push32((uint32_t)(ECX));
  /* 11067f91 call 0x11068140 */
  push32(0x11067f96u); f_11068140();
  /* 11067f96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067f99 jmp 0x11068038 */
  goto L_11068038;
L_11067f9e:;
  /* 11067f9e mov edx, dword ptr [0x11086af8] */
  EDX = (r32((uint32_t)(0x11086af8)));
  /* 11067fa4 mov dword ptr [0x11086b08], edx */
  w32((uint32_t)(0x11086b08), (EDX));
  /* 11067faa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067fad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11067fb0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11067fb1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11067fb6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11067fb8 mov ecx, eax */
  ECX = (EAX);
  /* 11067fba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067fbd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11067fc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067fc3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11067fc6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11067fc7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11067fcc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11067fce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11067fd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11067fd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067fd6 push eax */
  push32((uint32_t)(EAX));
  /* 11067fd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067fda push ecx */
  push32((uint32_t)(ECX));
  /* 11067fdb push 4 */
  push32((uint32_t)(0x4u));
  /* 11067fdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11067fe0 push edx */
  push32((uint32_t)(EDX));
  /* 11067fe1 call 0x11068140 */
  push32(0x11067fe6u); f_11068140();
  /* 11067fe6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11067fe9 jmp 0x11068038 */
  goto L_11068038;
L_11067feb:;
  /* 11067feb call 0x11069100 */
  push32(0x11067ff0u); f_11069100();
  /* 11067ff0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11067ff3 push eax */
  push32((uint32_t)(EAX));
  /* 11067ff4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11067ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 11067ff8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11067ffb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11067ffd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068001 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11068004 mov ecx, dword ptr [eax*4 + 0x11085e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11085e1c)));
  /* 1106800b push ecx */
  push32((uint32_t)(ECX));
  /* 1106800c call 0x110680f0 */
  push32(0x11068011u); f_110680f0();
  /* 11068011 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068014 jmp 0x11068038 */
  goto L_11068038;
L_11068016:;
  /* 11068016 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068019 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1106801b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1106801e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068021 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11068023 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068026 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068029 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1106802b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106802e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11068030 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068033 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068036 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11068038:;
  /* 11068038 pop esi */
  ESI = (pop32());
  /* 11068039 mov esp, ebp */
  ESP = (EBP);
  /* 1106803b pop ebp */
  EBP = (pop32());
  /* 1106803c ret  */
  ESPCHK(0x11067ad0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x110680f0 (72 bytes, 30 insns) */
void f_110680f0(void) {
  FTRACE(0x110680f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110680f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110680f1 mov ebp, esp */
  EBP = (ESP);
L_110680f3:;
  /* 110680f3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110680f6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110680f9 je 0x11068136 */
  if (C.zf) goto L_11068136;
  /* 110680fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110680fe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11068101 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11068103 je 0x11068136 */
  if (C.zf) goto L_11068136;
  /* 11068105 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068108 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1106810a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106810d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1106810f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11068111 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068114 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11068116 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068119 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106811c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1106811e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068124 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11068127 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106812a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1106812c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106812f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068132 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11068134 jmp 0x110680f3 */
  goto L_110680f3;
L_11068136:;
  /* 11068136 pop ebp */
  EBP = (pop32());
  /* 11068137 ret  */
  ESPCHK(0x110680f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018140 @ 0x11068140 (173 bytes, 64 insns) */
void f_11068140(void) {
  FTRACE(0x11068140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11068140 push ebp */
  push32((uint32_t)(EBP));
  /* 11068141 mov ebp, esp */
  EBP = (ESP);
  /* 11068143 push ecx */
  push32((uint32_t)(ECX));
  /* 11068144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1106814b cmp dword ptr [0x11086b08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086b08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068152 je 0x1106816a */
  if (C.zf) goto L_1106816a;
  /* 11068154 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068157 push eax */
  push32((uint32_t)(EAX));
  /* 11068158 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106815b push ecx */
  push32((uint32_t)(ECX));
  /* 1106815c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106815f push edx */
  push32((uint32_t)(EDX));
  /* 11068160 call 0x110681f0 */
  push32(0x11068165u); f_110681f0();
  /* 11068165 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068168 jmp 0x110681e9 */
  goto L_110681e9;
L_1106816a:;
  /* 1106816a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106816d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068170 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068172 jae 0x110681e0 */
  if (!C.cf) goto L_110681e0;
  /* 11068174 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068177 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106817a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1106817d jmp 0x11068188 */
  goto L_11068188;
L_1106817f:;
  /* 1106817f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068182 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068185 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11068188:;
  /* 11068188 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106818b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106818e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11068190 je 0x110681c4 */
  if (C.zf) goto L_110681c4;
  /* 11068192 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068195 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11068196 mov ecx, 0xa */
  ECX = (0xau);
  /* 1106819b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1106819d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110681a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110681a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110681a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110681a8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 110681ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110681ae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110681af mov ecx, 0xa */
  ECX = (0xau);
  /* 110681b4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110681b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110681b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110681bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110681bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110681c2 jmp 0x1106817f */
  goto L_1106817f;
L_110681c4:;
  /* 110681c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110681c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110681c9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110681cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110681cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110681d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110681d4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110681d6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110681d9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110681dc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110681de jmp 0x110681e9 */
  goto L_110681e9;
L_110681e0:;
  /* 110681e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110681e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_110681e9:;
  /* 110681e9 mov esp, ebp */
  ESP = (EBP);
  /* 110681eb pop ebp */
  EBP = (pop32());
  /* 110681ec ret  */
  ESPCHK(0x11068140u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x110681f0 (172 bytes, 65 insns) */
void f_110681f0(void) {
  FTRACE(0x110681f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110681f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110681f1 mov ebp, esp */
  EBP = (ESP);
  /* 110681f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110681f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110681f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110681fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110681fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068201 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068204 jbe 0x1106824b */
  if ((C.cf||C.zf)) goto L_1106824b;
L_11068206:;
  /* 11068206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068209 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1106820a mov ecx, 0xa */
  ECX = (0xau);
  /* 1106820f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11068211 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068214 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068217 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11068219 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106821c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106821f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11068222 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068225 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11068227 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106822a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106822d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1106822f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068232 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11068233 mov ecx, 0xa */
  ECX = (0xau);
  /* 11068238 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1106823a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1106823d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068241 jle 0x1106824b */
  if ((C.zf||C.sf!=C.of)) goto L_1106824b;
  /* 11068243 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068246 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068249 ja 0x11068206 */
  if ((!C.cf&&!C.zf)) goto L_11068206;
L_1106824b:;
  /* 1106824b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106824e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11068250 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11068253 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068259 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1106825b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106825e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11068264:;
  /* 11068264 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068267 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11068269 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1106826c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106826f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11068272 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11068274 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11068276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068279 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106827c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1106827f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11068282 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11068285 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11068287 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106828a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106828d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11068290 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11068293 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068296 jb 0x11068264 */
  if (C.cf) goto L_11068264;
  /* 11068298 mov esp, ebp */
  ESP = (EBP);
  /* 1106829a pop ebp */
  EBP = (pop32());
  /* 1106829b ret  */
  ESPCHK(0x110681f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100182a0 @ 0x110682a0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_110682a0(void) {
  FTRACE(0x110682a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110682a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110682a1 mov ebp, esp */
  EBP = (ESP);
  /* 110682a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_110682a6:;
  /* 110682a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110682a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110682ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110682ae je 0x1106871c */
  if (C.zf) goto L_1106871c;
  /* 110682b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110682b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110682ba je 0x1106871c */
  if (C.zf) goto L_1106871c;
  /* 110682c0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 110682c4 mov dword ptr [0x11086b08], 0 */
  w32((uint32_t)(0x11086b08), (0x0u));
  /* 110682ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 110682d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110682d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110682db jmp 0x110682e6 */
  goto L_110682e6;
L_110682dd:;
  /* 110682dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110682e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110682e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_110682e6:;
  /* 110682e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110682e9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110682ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110682ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110682f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110682f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110682f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110682fb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110682fd jne 0x11068301 */
  if (!C.zf) goto L_11068301;
  /* 110682ff jmp 0x110682dd */
  goto L_110682dd;
L_11068301:;
  /* 11068301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068304 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068307 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1106830a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106830d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11068310 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11068313 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11068316 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068319 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1106831c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068320 ja 0x11068670 */
  if ((!C.cf&&!C.zf)) goto L_11068670;
  /* 11068326 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11068329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106832b mov al, byte ptr [ecx + 0x1106874c] */
  AL = (r8((uint32_t)(ECX + 0x1106874c)));
  /* 11068331 jmp dword ptr [eax*4 + 0x11068720] */
  switch (EAX) {
    case 0: goto L_1106858f;
    case 1: goto L_11068473;
    case 2: goto L_110683fe;
    case 3: goto L_11068338;
    case 4: goto L_11068376;
    case 5: goto L_110683d7;
    case 6: goto L_11068425;
    case 7: goto L_1106844c;
    case 8: goto L_110684ba;
    case 9: goto L_110683b4;
    case 10: goto L_11068670;
    default: x86_unimpl("switch@0x11068331 out of table"); return;
  }
L_11068338:;
  /* 11068338 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106833b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1106833e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11068341 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068344 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11068347 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106834b ja 0x11068371 */
  if ((!C.cf&&!C.zf)) goto L_11068371;
  /* 1106834d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11068350 jmp dword ptr [ecx*4 + 0x1106879f] */
  switch (ECX) {
    case 0: goto L_11068357;
    case 1: goto L_11068361;
    case 2: goto L_11068367;
    case 3: goto L_1106836d;
    case 4: goto L_11068395;
    case 5: goto L_1106839f;
    case 6: goto L_110683a5;
    case 7: goto L_110683ab;
    default: x86_unimpl("switch@0x11068350 out of table"); return;
  }
L_11068357:;
  /* 11068357 mov dword ptr [0x11086b08], 1 */
  w32((uint32_t)(0x11086b08), (0x1u));
L_11068361:;
  /* 11068361 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11068365 jmp 0x11068371 */
  goto L_11068371;
L_11068367:;
  /* 11068367 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1106836b jmp 0x11068371 */
  goto L_11068371;
L_1106836d:;
  /* 1106836d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11068371:;
  /* 11068371 jmp 0x11068670 */
  goto L_11068670;
L_11068376:;
  /* 11068376 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11068379 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1106837c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1106837f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068382 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11068385 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068389 ja 0x110683af */
  if ((!C.cf&&!C.zf)) goto L_110683af;
  /* 1106838b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1106838e jmp dword ptr [ecx*4 + 0x110687af] */
  switch (ECX) {
    case 0: goto L_11068395;
    case 1: goto L_1106839f;
    case 2: goto L_110683a5;
    case 3: goto L_110683ab;
    default: x86_unimpl("switch@0x1106838e out of table"); return;
  }
L_11068395:;
  /* 11068395 mov dword ptr [0x11086b08], 1 */
  w32((uint32_t)(0x11086b08), (0x1u));
L_1106839f:;
  /* 1106839f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 110683a3 jmp 0x110683af */
  goto L_110683af;
L_110683a5:;
  /* 110683a5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 110683a9 jmp 0x110683af */
  goto L_110683af;
L_110683ab:;
  /* 110683ab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_110683af:;
  /* 110683af jmp 0x11068670 */
  goto L_11068670;
L_110683b4:;
  /* 110683b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110683b7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 110683ba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110683be je 0x110683c8 */
  if (C.zf) goto L_110683c8;
  /* 110683c0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110683c4 je 0x110683ce */
  if (C.zf) goto L_110683ce;
  /* 110683c6 jmp 0x110683d2 */
  goto L_110683d2;
L_110683c8:;
  /* 110683c8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 110683cc jmp 0x110683d2 */
  goto L_110683d2;
L_110683ce:;
  /* 110683ce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_110683d2:;
  /* 110683d2 jmp 0x11068670 */
  goto L_11068670;
L_110683d7:;
  /* 110683d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110683da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110683dd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110683e1 je 0x110683eb */
  if (C.zf) goto L_110683eb;
  /* 110683e3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110683e7 je 0x110683f5 */
  if (C.zf) goto L_110683f5;
  /* 110683e9 jmp 0x110683f9 */
  goto L_110683f9;
L_110683eb:;
  /* 110683eb mov dword ptr [0x11086b08], 1 */
  w32((uint32_t)(0x11086b08), (0x1u));
L_110683f5:;
  /* 110683f5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_110683f9:;
  /* 110683f9 jmp 0x11068670 */
  goto L_11068670;
L_110683fe:;
  /* 110683fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11068401 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11068404 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068408 je 0x11068412 */
  if (C.zf) goto L_11068412;
  /* 1106840a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106840e je 0x1106841c */
  if (C.zf) goto L_1106841c;
  /* 11068410 jmp 0x11068420 */
  goto L_11068420;
L_11068412:;
  /* 11068412 mov dword ptr [0x11086b08], 1 */
  w32((uint32_t)(0x11086b08), (0x1u));
L_1106841c:;
  /* 1106841c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11068420:;
  /* 11068420 jmp 0x11068670 */
  goto L_11068670;
L_11068425:;
  /* 11068425 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11068428 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1106842b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106842f je 0x11068439 */
  if (C.zf) goto L_11068439;
  /* 11068431 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068435 je 0x11068443 */
  if (C.zf) goto L_11068443;
  /* 11068437 jmp 0x11068447 */
  goto L_11068447;
L_11068439:;
  /* 11068439 mov dword ptr [0x11086b08], 1 */
  w32((uint32_t)(0x11086b08), (0x1u));
L_11068443:;
  /* 11068443 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11068447:;
  /* 11068447 jmp 0x11068670 */
  goto L_11068670;
L_1106844c:;
  /* 1106844c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106844f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11068452 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068456 je 0x11068460 */
  if (C.zf) goto L_11068460;
  /* 11068458 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106845c je 0x1106846a */
  if (C.zf) goto L_1106846a;
  /* 1106845e jmp 0x1106846e */
  goto L_1106846e;
L_11068460:;
  /* 11068460 mov dword ptr [0x11086b08], 1 */
  w32((uint32_t)(0x11086b08), (0x1u));
L_1106846a:;
  /* 1106846a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1106846e:;
  /* 1106846e jmp 0x11068670 */
  goto L_11068670;
L_11068473:;
  /* 11068473 push 0x11082cac */
  push32((uint32_t)(0x11082cacu));
  /* 11068478 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106847b push ecx */
  push32((uint32_t)(ECX));
  /* 1106847c call 0x11068cd0 */
  push32(0x11068481u); f_11068cd0();
  /* 11068481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11068486 jne 0x11068493 */
  if (!C.zf) goto L_11068493;
  /* 11068488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106848b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106848e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11068491 jmp 0x110684b1 */
  goto L_110684b1;
L_11068493:;
  /* 11068493 push 0x11082ca8 */
  push32((uint32_t)(0x11082ca8u));
  /* 11068498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106849b push eax */
  push32((uint32_t)(EAX));
  /* 1106849c call 0x11068cd0 */
  push32(0x110684a1u); f_11068cd0();
  /* 110684a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110684a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110684a6 jne 0x110684b1 */
  if (!C.zf) goto L_110684b1;
  /* 110684a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110684ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110684ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110684b1:;
  /* 110684b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 110684b5 jmp 0x11068670 */
  goto L_11068670;
L_110684ba:;
  /* 110684ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110684bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110684c1 jg 0x110684d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_110684d1;
  /* 110684c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110684c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 110684cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110684cf jmp 0x110684dd */
  goto L_110684dd;
L_110684d1:;
  /* 110684d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110684d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 110684da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_110684dd:;
  /* 110684dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110684e1 jle 0x11068584 */
  if ((C.zf||C.sf!=C.of)) goto L_11068584;
  /* 110684e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110684ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110684ed jbe 0x11068584 */
  if ((C.cf||C.zf)) goto L_11068584;
  /* 110684f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110684f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110684f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110684fa mov ecx, dword ptr [0x11084c98] */
  ECX = (r32((uint32_t)(0x11084c98)));
  /* 11068500 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11068502 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11068506 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1106850c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106850e je 0x11068547 */
  if (C.zf) goto L_11068547;
  /* 11068510 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068513 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068516 jbe 0x11068547 */
  if ((C.cf||C.zf)) goto L_11068547;
  /* 11068518 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106851b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106851d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11068520 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11068522 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11068524 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068527 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11068529 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106852c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106852f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11068531 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11068534 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068537 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1106853a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106853d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1106853f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068542 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068545 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11068547:;
  /* 11068547 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106854a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1106854c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106854f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11068551 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11068553 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068556 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11068558 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106855b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106855e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11068560 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11068563 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068566 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11068569 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106856c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1106856e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068571 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068574 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11068576 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11068579 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106857c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1106857f jmp 0x110684dd */
  goto L_110684dd;
L_11068584:;
  /* 11068584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068587 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1106858a jmp 0x110682a6 */
  goto L_110682a6;
L_1106858f:;
  /* 1106858f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11068592 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11068595 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11068597 je 0x11068662 */
  if (C.zf) goto L_11068662;
  /* 1106859d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110685a0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110685a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_110685a6:;
  /* 110685a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110685a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110685ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110685ae je 0x11068660 */
  if (C.zf) goto L_11068660;
  /* 110685b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110685b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110685ba je 0x11068660 */
  if (C.zf) goto L_11068660;
  /* 110685c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110685c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110685c6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110685c9 jne 0x110685d9 */
  if (!C.zf) goto L_110685d9;
  /* 110685cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110685ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110685d1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 110685d4 jmp 0x11068660 */
  goto L_11068660;
L_110685d9:;
  /* 110685d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110685dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110685de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110685e0 mov edx, dword ptr [0x11084c98] */
  EDX = (r32((uint32_t)(0x11084c98)));
  /* 110685e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110685e8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 110685ec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 110685f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110685f3 je 0x1106862c */
  if (C.zf) goto L_1106862c;
  /* 110685f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110685f8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110685fb jbe 0x1106862c */
  if ((C.cf||C.zf)) goto L_1106862c;
  /* 110685fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068600 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11068602 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068605 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11068607 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11068609 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106860c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1106860e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068611 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068614 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11068616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068619 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106861c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1106861f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068622 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11068624 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068627 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106862a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1106862c:;
  /* 1106862c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106862f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11068631 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068634 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11068636 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11068638 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106863b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1106863d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068640 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068643 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11068645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068648 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106864b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1106864e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068651 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11068653 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068656 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068659 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1106865b jmp 0x110685a6 */
  goto L_110685a6;
L_11068660:;
  /* 11068660 jmp 0x1106866b */
  goto L_1106866b;
L_11068662:;
  /* 11068662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068665 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068668 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1106866b:;
  /* 1106866b jmp 0x110682a6 */
  goto L_110682a6;
L_11068670:;
  /* 11068670 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11068674 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11068676 je 0x1106869c */
  if (C.zf) goto L_1106869c;
  /* 11068678 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1106867b push edx */
  push32((uint32_t)(EDX));
  /* 1106867c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106867f push eax */
  push32((uint32_t)(EAX));
  /* 11068680 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068683 push ecx */
  push32((uint32_t)(ECX));
  /* 11068684 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068687 push edx */
  push32((uint32_t)(EDX));
  /* 11068688 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1106868b push eax */
  push32((uint32_t)(EAX));
  /* 1106868c call 0x11067ad0 */
  push32(0x11068691u); f_11067ad0();
  /* 11068691 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068694 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068697 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1106869a jmp 0x11068717 */
  goto L_11068717;
L_1106869c:;
  /* 1106869c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106869f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110686a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110686a3 mov ecx, dword ptr [0x11084c98] */
  ECX = (r32((uint32_t)(0x11084c98)));
  /* 110686a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110686ab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110686af and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 110686b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110686b7 je 0x110686e8 */
  if (C.zf) goto L_110686e8;
  /* 110686b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110686bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110686be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110686c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110686c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110686c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110686c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110686ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110686cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110686d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110686d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110686d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110686d8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110686db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110686de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110686e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110686e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110686e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_110686e8:;
  /* 110686e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110686eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110686ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110686f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110686f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110686f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110686f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110686f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110686fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110686ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11068701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068704 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068707 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1106870a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106870d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106870f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068712 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068715 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11068717:;
  /* 11068717 jmp 0x110682a6 */
  goto L_110682a6;
L_1106871c:;
  /* 1106871c mov esp, ebp */
  ESP = (EBP);
  /* 1106871e pop ebp */
  EBP = (pop32());
  /* 1106871f ret  */
  ESPCHK(0x110682a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100187c0 @ 0x110687c0 (650 bytes, 178 insns) */
void f_110687c0(void) {
  FTRACE(0x110687c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110687c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110687c1 mov ebp, esp */
  EBP = (ESP);
  /* 110687c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110687c9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110687cd jne 0x11068929 */
  if (!C.zf) goto L_11068929;
  /* 110687d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110687d6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 110687dc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 110687e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110687e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110687ec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 110687f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110687f8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 110687fe push edx */
  push32((uint32_t)(EDX));
  /* 110687ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11068802 push eax */
  push32((uint32_t)(EAX));
  /* 11068803 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068806 push ecx */
  push32((uint32_t)(ECX));
  /* 11068807 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106880a push edx */
  push32((uint32_t)(EDX));
  /* 1106880b call 0x11069be0 */
  push32(0x11068810u); f_11069be0();
  /* 11068810 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068813 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11068816 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106881a jne 0x110688af */
  if (!C.zf) goto L_110688af;
  /* 11068820 call dword ptr [0x110893dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893dc))), 0x11068826u);
  /* 11068826 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068829 je 0x11068830 */
  if (C.zf) goto L_11068830;
  /* 1106882b jmp 0x1106890d */
  goto L_1106890d;
L_11068830:;
  /* 11068830 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068832 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068834 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068836 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068839 push eax */
  push32((uint32_t)(EAX));
  /* 1106883a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106883d push ecx */
  push32((uint32_t)(ECX));
  /* 1106883e call 0x11069be0 */
  push32(0x11068843u); f_11069be0();
  /* 11068843 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068846 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1106884c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068853 jne 0x1106885a */
  if (!C.zf) goto L_1106885a;
  /* 11068855 jmp 0x1106890d */
  goto L_1106890d;
L_1106885a:;
  /* 1106885a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1106885c push 0x11082cb4 */
  push32((uint32_t)(0x11082cb4u));
  /* 11068861 push 2 */
  push32((uint32_t)(0x2u));
  /* 11068863 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11068869 push edx */
  push32((uint32_t)(EDX));
  /* 1106886a call 0x1105a600 */
  push32(0x1106886fu); f_1105a600();
  /* 1106886f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068872 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11068875 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068879 jne 0x11068880 */
  if (!C.zf) goto L_11068880;
  /* 1106887b jmp 0x1106890d */
  goto L_1106890d;
L_11068880:;
  /* 11068880 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11068887 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068889 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1106888f push eax */
  push32((uint32_t)(EAX));
  /* 11068890 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11068893 push ecx */
  push32((uint32_t)(ECX));
  /* 11068894 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068897 push edx */
  push32((uint32_t)(EDX));
  /* 11068898 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106889b push eax */
  push32((uint32_t)(EAX));
  /* 1106889c call 0x11069be0 */
  push32(0x110688a1u); f_11069be0();
  /* 110688a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110688a4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110688a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110688ab jne 0x110688af */
  if (!C.zf) goto L_110688af;
  /* 110688ad jmp 0x1106890d */
  goto L_1106890d;
L_110688af:;
  /* 110688af push 0x63 */
  push32((uint32_t)(0x63u));
  /* 110688b1 push 0x11082cb4 */
  push32((uint32_t)(0x11082cb4u));
  /* 110688b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110688b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110688bb push ecx */
  push32((uint32_t)(ECX));
  /* 110688bc call 0x1105a600 */
  push32(0x110688c1u); f_1105a600();
  /* 110688c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110688c4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 110688ca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 110688cc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 110688d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110688d5 jne 0x110688d9 */
  if (!C.zf) goto L_110688d9;
  /* 110688d7 jmp 0x1106890d */
  goto L_1106890d;
L_110688d9:;
  /* 110688d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110688dc push ecx */
  push32((uint32_t)(ECX));
  /* 110688dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110688e0 push edx */
  push32((uint32_t)(EDX));
  /* 110688e1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 110688e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110688e9 push ecx */
  push32((uint32_t)(ECX));
  /* 110688ea call 0x1105de20 */
  push32(0x110688efu); f_1105de20();
  /* 110688ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110688f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110688f6 je 0x11068906 */
  if (C.zf) goto L_11068906;
  /* 110688f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 110688fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110688fd push edx */
  push32((uint32_t)(EDX));
  /* 110688fe call 0x1105b090 */
  push32(0x11068903u); f_1105b090();
  /* 11068903 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11068906:;
  /* 11068906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068908 jmp 0x11068a46 */
  goto L_11068a46;
L_1106890d:;
  /* 1106890d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068911 je 0x11068921 */
  if (C.zf) goto L_11068921;
  /* 11068913 push 2 */
  push32((uint32_t)(0x2u));
  /* 11068915 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11068918 push eax */
  push32((uint32_t)(EAX));
  /* 11068919 call 0x1105b090 */
  push32(0x1106891eu); f_1105b090();
  /* 1106891e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11068921:;
  /* 11068921 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11068924 jmp 0x11068a46 */
  goto L_11068a46;
L_11068929:;
  /* 11068929 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106892d jne 0x11068a43 */
  if (!C.zf) goto L_11068a43;
  /* 11068933 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1106893d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068940 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11068946 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068948 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1106894e push edx */
  push32((uint32_t)(EDX));
  /* 1106894f push 0x11086a20 */
  push32((uint32_t)(0x11086a20u));
  /* 11068954 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068957 push eax */
  push32((uint32_t)(EAX));
  /* 11068958 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106895b push ecx */
  push32((uint32_t)(ECX));
  /* 1106895c call 0x11069a40 */
  push32(0x11068961u); f_11069a40();
  /* 11068961 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11068966 jne 0x11068970 */
  if (!C.zf) goto L_11068970;
  /* 11068968 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106896b jmp 0x11068a46 */
  goto L_11068a46;
L_11068970:;
  /* 11068970 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11068976 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11068979 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11068983 jmp 0x11068994 */
  goto L_11068994;
L_11068985:;
  /* 11068985 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1106898b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106898e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11068994:;
  /* 11068994 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106899b jge 0x11068a3f */
  if ((C.sf==C.of)) goto L_11068a3f;
  /* 110689a1 cmp dword ptr [0x11084ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11084ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110689a8 jle 0x110689db */
  if ((C.zf||C.sf!=C.of)) goto L_110689db;
  /* 110689aa push 4 */
  push32((uint32_t)(0x4u));
  /* 110689ac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 110689b2 mov dl, byte ptr [ecx*2 + 0x11086a20] */
  DL = (r8((uint32_t)(ECX*2 + 0x11086a20)));
  /* 110689b9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 110689bf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 110689c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110689ca push eax */
  push32((uint32_t)(EAX));
  /* 110689cb call 0x11060610 */
  push32(0x110689d0u); f_11060610();
  /* 110689d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110689d3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 110689d9 jmp 0x11068a0e */
  goto L_11068a0e;
L_110689db:;
  /* 110689db mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 110689e1 mov dl, byte ptr [ecx*2 + 0x11086a20] */
  DL = (r8((uint32_t)(ECX*2 + 0x11086a20)));
  /* 110689e8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 110689ee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 110689f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110689f9 mov ecx, dword ptr [0x11084c98] */
  ECX = (r32((uint32_t)(0x11084c98)));
  /* 110689ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11068a01 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11068a05 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11068a08 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11068a0e:;
  /* 11068a0e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068a15 je 0x11068a38 */
  if (C.zf) goto L_11068a38;
  /* 11068a17 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11068a1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11068a20 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11068a23 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11068a2a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11068a2e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11068a34 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11068a36 jmp 0x11068a3a */
  goto L_11068a3a;
L_11068a38:;
  /* 11068a38 jmp 0x11068a3f */
  goto L_11068a3f;
L_11068a3a:;
  /* 11068a3a jmp 0x11068985 */
  goto L_11068985;
L_11068a3f:;
  /* 11068a3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068a41 jmp 0x11068a46 */
  goto L_11068a46;
L_11068a43:;
  /* 11068a43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11068a46:;
  /* 11068a46 mov esp, ebp */
  ESP = (EBP);
  /* 11068a48 pop ebp */
  EBP = (pop32());
  /* 11068a49 ret  */
  ESPCHK(0x110687c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a50 @ 0x11068a50 (10 bytes, 5 insns) */
void f_11068a50(void) {
  FTRACE(0x11068a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11068a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11068a51 mov ebp, esp */
  EBP = (ESP);
  /* 11068a53 mov eax, dword ptr [0x11085d88] */
  EAX = (r32((uint32_t)(0x11085d88)));
  /* 11068a58 pop ebp */
  EBP = (pop32());
  /* 11068a59 ret  */
  ESPCHK(0x11068a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a60 @ 0x11068a60 (575 bytes, 196 insns) */
void f_11068a60(void) {
  FTRACE(0x11068a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11068a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11068a61 mov ebp, esp */
  EBP = (ESP);
  /* 11068a63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11068a65 push 0x11082cc0 */
  push32((uint32_t)(0x11082cc0u));
  /* 11068a6a push 0x11063708 */
  push32((uint32_t)(0x11063708u));
  /* 11068a6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11068a75 push eax */
  push32((uint32_t)(EAX));
  /* 11068a76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11068a7d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068a80 push ebx */
  push32((uint32_t)(EBX));
  /* 11068a81 push esi */
  push32((uint32_t)(ESI));
  /* 11068a82 push edi */
  push32((uint32_t)(EDI));
  /* 11068a83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11068a86 cmp dword ptr [0x11086a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068a8d jne 0x11068ade */
  if (!C.zf) goto L_11068ade;
  /* 11068a8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11068a92 push eax */
  push32((uint32_t)(EAX));
  /* 11068a93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11068a95 push 0x110823f4 */
  push32((uint32_t)(0x110823f4u));
  /* 11068a9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11068a9c call dword ptr [0x11089324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089324))), 0x11068aa2u);
  /* 11068aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11068aa4 je 0x11068ab2 */
  if (C.zf) goto L_11068ab2;
  /* 11068aa6 mov dword ptr [0x11086a2c], 1 */
  w32((uint32_t)(0x11086a2c), (0x1u));
  /* 11068ab0 jmp 0x11068ade */
  goto L_11068ade;
L_11068ab2:;
  /* 11068ab2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11068ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 11068ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11068ab8 push 0x110823f0 */
  push32((uint32_t)(0x110823f0u));
  /* 11068abd push 1 */
  push32((uint32_t)(0x1u));
  /* 11068abf push 0 */
  push32((uint32_t)(0x0u));
  /* 11068ac1 call dword ptr [0x11089328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089328))), 0x11068ac7u);
  /* 11068ac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11068ac9 je 0x11068ad7 */
  if (C.zf) goto L_11068ad7;
  /* 11068acb mov dword ptr [0x11086a2c], 2 */
  w32((uint32_t)(0x11086a2c), (0x2u));
  /* 11068ad5 jmp 0x11068ade */
  goto L_11068ade;
L_11068ad7:;
  /* 11068ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068ad9 jmp 0x11068cb9 */
  goto L_11068cb9;
L_11068ade:;
  /* 11068ade cmp dword ptr [0x11086a2c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11086a2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068ae5 jne 0x11068b02 */
  if (!C.zf) goto L_11068b02;
  /* 11068ae7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068aea push edx */
  push32((uint32_t)(EDX));
  /* 11068aeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068aee push eax */
  push32((uint32_t)(EAX));
  /* 11068aef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068af2 push ecx */
  push32((uint32_t)(ECX));
  /* 11068af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068af6 push edx */
  push32((uint32_t)(EDX));
  /* 11068af7 call dword ptr [0x11089324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089324))), 0x11068afdu);
  /* 11068afd jmp 0x11068cb9 */
  goto L_11068cb9;
L_11068b02:;
  /* 11068b02 cmp dword ptr [0x11086a2c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11086a2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068b09 jne 0x11068cb7 */
  if (!C.zf) goto L_11068cb7;
  /* 11068b0f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068b13 jne 0x11068b1d */
  if (!C.zf) goto L_11068b1d;
  /* 11068b15 mov eax, dword ptr [0x110869a0] */
  EAX = (r32((uint32_t)(0x110869a0)));
  /* 11068b1a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11068b1d:;
  /* 11068b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11068b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11068b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068b25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068b28 push ecx */
  push32((uint32_t)(ECX));
  /* 11068b29 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068b2c push edx */
  push32((uint32_t)(EDX));
  /* 11068b2d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11068b32 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11068b35 push eax */
  push32((uint32_t)(EAX));
  /* 11068b36 call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x11068b3cu);
  /* 11068b3c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11068b3f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068b43 jne 0x11068b4c */
  if (!C.zf) goto L_11068b4c;
  /* 11068b45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068b47 jmp 0x11068cb9 */
  goto L_11068cb9;
L_11068b4c:;
  /* 11068b4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11068b53 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11068b56 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068b59 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11068b5b call 0x1105d7a0 */
  push32(0x11068b60u); f_1105d7a0();
  /* 11068b60 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11068b63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11068b66 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11068b69 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11068b6c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11068b6f push edx */
  push32((uint32_t)(EDX));
  /* 11068b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068b72 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11068b75 push eax */
  push32((uint32_t)(EAX));
  /* 11068b76 call 0x1105e370 */
  push32(0x11068b7bu); f_1105e370();
  /* 11068b7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068b7e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11068b85 jmp 0x11068b9e */
  goto L_11068b9e;
  /* 11068b87 mov eax, 1 */
  EAX = (0x1u);
  /* 11068b8c ret  */
  ESPCHK(0x11068a60u, _esp0);
  ESP += 4; return;
  /* 11068b8d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11068b90 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11068b97 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11068b9e:;
  /* 11068b9e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068ba2 jne 0x11068bab */
  if (!C.zf) goto L_11068bab;
  /* 11068ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068ba6 jmp 0x11068cb9 */
  goto L_11068cb9;
L_11068bab:;
  /* 11068bab push 0 */
  push32((uint32_t)(0x0u));
  /* 11068bad push 0 */
  push32((uint32_t)(0x0u));
  /* 11068baf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11068bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11068bb3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11068bb6 push edx */
  push32((uint32_t)(EDX));
  /* 11068bb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068bba push eax */
  push32((uint32_t)(EAX));
  /* 11068bbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11068bbe push ecx */
  push32((uint32_t)(ECX));
  /* 11068bbf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11068bc4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11068bc7 push edx */
  push32((uint32_t)(EDX));
  /* 11068bc8 call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x11068bceu);
  /* 11068bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11068bd0 jne 0x11068bd9 */
  if (!C.zf) goto L_11068bd9;
  /* 11068bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068bd4 jmp 0x11068cb9 */
  goto L_11068cb9;
L_11068bd9:;
  /* 11068bd9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11068be0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11068be3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11068be7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068bea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11068bec call 0x1105d7a0 */
  push32(0x11068bf1u); f_1105d7a0();
  /* 11068bf1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11068bf4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11068bf7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11068bfa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11068bfd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11068c04 jmp 0x11068c1d */
  goto L_11068c1d;
  /* 11068c06 mov eax, 1 */
  EAX = (0x1u);
  /* 11068c0b ret  */
  ESPCHK(0x11068a60u, _esp0);
  ESP += 4; return;
  /* 11068c0c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11068c0f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11068c16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11068c1d:;
  /* 11068c1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068c21 jne 0x11068c2a */
  if (!C.zf) goto L_11068c2a;
  /* 11068c23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068c25 jmp 0x11068cb9 */
  goto L_11068cb9;
L_11068c2a:;
  /* 11068c2a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068c2e jne 0x11068c39 */
  if (!C.zf) goto L_11068c39;
  /* 11068c30 mov edx, dword ptr [0x11086990] */
  EDX = (r32((uint32_t)(0x11086990)));
  /* 11068c36 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11068c39:;
  /* 11068c39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068c3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11068c3f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11068c45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068c48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11068c4b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11068c52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11068c55 push ecx */
  push32((uint32_t)(ECX));
  /* 11068c56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11068c59 push edx */
  push32((uint32_t)(EDX));
  /* 11068c5a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11068c5d push eax */
  push32((uint32_t)(EAX));
  /* 11068c5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068c61 push ecx */
  push32((uint32_t)(ECX));
  /* 11068c62 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11068c65 push edx */
  push32((uint32_t)(EDX));
  /* 11068c66 call dword ptr [0x11089328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089328))), 0x11068c6cu);
  /* 11068c6c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11068c6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068c72 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11068c75 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11068c77 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11068c7c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068c82 je 0x11068c98 */
  if (C.zf) goto L_11068c98;
  /* 11068c84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068c87 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11068c8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11068c8c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11068c90 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068c96 je 0x11068c9c */
  if (C.zf) goto L_11068c9c;
L_11068c98:;
  /* 11068c98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068c9a jmp 0x11068cb9 */
  goto L_11068cb9;
L_11068c9c:;
  /* 11068c9c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068c9f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11068ca1 push eax */
  push32((uint32_t)(EAX));
  /* 11068ca2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11068ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 11068ca6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11068ca9 push edx */
  push32((uint32_t)(EDX));
  /* 11068caa call 0x110624f0 */
  push32(0x11068cafu); f_110624f0();
  /* 11068caf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068cb2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11068cb5 jmp 0x11068cb9 */
  goto L_11068cb9;
L_11068cb7:;
  /* 11068cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11068cb9:;
  /* 11068cb9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11068cbc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11068cbf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11068cc6 pop edi */
  EDI = (pop32());
  /* 11068cc7 pop esi */
  ESI = (pop32());
  /* 11068cc8 pop ebx */
  EBX = (pop32());
  /* 11068cc9 mov esp, ebp */
  ESP = (EBP);
  /* 11068ccb pop ebp */
  EBP = (pop32());
  /* 11068ccc ret  */
  ESPCHK(0x11068a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10018cd0 @ 0x11068cd0 (208 bytes, 85 insns) */
void f_11068cd0(void) {
  FTRACE(0x11068cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11068cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11068cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11068cd3 push edi */
  push32((uint32_t)(EDI));
  /* 11068cd4 push esi */
  push32((uint32_t)(ESI));
  /* 11068cd5 push ebx */
  push32((uint32_t)(EBX));
  /* 11068cd6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11068cd9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11068cdc lea eax, [0x11086988] */
  EAX = ((uint32_t)(0x11086988));
  /* 11068ce2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068ce6 jne 0x11068d23 */
  if (!C.zf) goto L_11068d23;
  /* 11068ce8 mov al, 0xff */
  AL = (0xffu);
  /* 11068cea mov edi, edi */
  EDI = (EDI);
L_11068cec:;
  /* 11068cec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11068cee je 0x11068d1e */
  if (C.zf) goto L_11068d1e;
  /* 11068cf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11068cf2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11068cf3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11068cf5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11068cf6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068cf8 je 0x11068cec */
  if (C.zf) goto L_11068cec;
  /* 11068cfa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11068cfc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068cfe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11068d00 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11068d03 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11068d05 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11068d07 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11068d09 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11068d0b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068d0d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11068d0f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11068d12 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11068d14 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11068d16 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068d18 je 0x11068cec */
  if (C.zf) goto L_11068cec;
  /* 11068d1a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11068d1c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11068d1e:;
  /* 11068d1e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11068d21 jmp 0x11068d9b */
  goto L_11068d9b;
L_11068d23:;
  /* 11068d23 lock inc dword ptr [0x11086b1c] */
  x86_unimpl("lock inc @ 0x11068d23");
  /* 11068d2a cmp dword ptr [0x11086b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068d31 jg 0x11068d37 */
  if ((!C.zf&&C.sf==C.of)) goto L_11068d37;
  /* 11068d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068d35 jmp 0x11068d4c */
  goto L_11068d4c;
L_11068d37:;
  /* 11068d37 lock dec dword ptr [0x11086b1c] */
  x86_unimpl("lock dec @ 0x11068d37");
  /* 11068d3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11068d40 call 0x1105e000 */
  push32(0x11068d45u); f_1105e000();
  /* 11068d45 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11068d4c:;
  /* 11068d4c mov eax, 0xff */
  EAX = (0xffu);
  /* 11068d51 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11068d53 nop  */
  /* nop */
L_11068d54:;
  /* 11068d54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11068d56 je 0x11068d7f */
  if (C.zf) goto L_11068d7f;
  /* 11068d58 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11068d5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11068d5b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11068d5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11068d5e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068d60 je 0x11068d54 */
  if (C.zf) goto L_11068d54;
  /* 11068d62 push eax */
  push32((uint32_t)(EAX));
  /* 11068d63 push ebx */
  push32((uint32_t)(EBX));
  /* 11068d64 call 0x11069e40 */
  push32(0x11068d69u); f_11069e40();
  /* 11068d69 mov ebx, eax */
  EBX = (EAX);
  /* 11068d6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068d6e call 0x11069e40 */
  push32(0x11068d73u); f_11069e40();
  /* 11068d73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068d76 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068d78 je 0x11068d54 */
  if (C.zf) goto L_11068d54;
  /* 11068d7a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068d7c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11068d7f:;
  /* 11068d7f mov ebx, eax */
  EBX = (EAX);
  /* 11068d81 pop eax */
  EAX = (pop32());
  /* 11068d82 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068d84 jne 0x11068d8f */
  if (!C.zf) goto L_11068d8f;
  /* 11068d86 lock dec dword ptr [0x11086b1c] */
  x86_unimpl("lock dec @ 0x11068d86");
  /* 11068d8d jmp 0x11068d99 */
  goto L_11068d99;
L_11068d8f:;
  /* 11068d8f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11068d91 call 0x1105e0a0 */
  push32(0x11068d96u); f_1105e0a0();
  /* 11068d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11068d99:;
  /* 11068d99 mov eax, ebx */
  EAX = (EBX);
L_11068d9b:;
  /* 11068d9b pop ebx */
  EBX = (pop32());
  /* 11068d9c pop esi */
  ESI = (pop32());
  /* 11068d9d pop edi */
  EDI = (pop32());
  /* 11068d9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11068d9f ret  */
  ESPCHK(0x11068cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018da0 @ 0x11068da0 (257 bytes, 103 insns) */
void f_11068da0(void) {
  FTRACE(0x11068da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11068da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11068da1 mov ebp, esp */
  EBP = (ESP);
  /* 11068da3 push edi */
  push32((uint32_t)(EDI));
  /* 11068da4 push esi */
  push32((uint32_t)(ESI));
  /* 11068da5 push ebx */
  push32((uint32_t)(EBX));
  /* 11068da6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11068da9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11068dab je 0x11068e9a */
  if (C.zf) goto L_11068e9a;
  /* 11068db1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11068db4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11068db7 lea eax, [0x11086988] */
  EAX = ((uint32_t)(0x11086988));
  /* 11068dbd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068dc1 jne 0x11068e11 */
  if (!C.zf) goto L_11068e11;
  /* 11068dc3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11068dc5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11068dc7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11068dc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11068dcc:;
  /* 11068dcc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11068dce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11068dd0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11068dd2 je 0x11068df5 */
  if (C.zf) goto L_11068df5;
  /* 11068dd4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11068dd6 je 0x11068df5 */
  if (C.zf) goto L_11068df5;
  /* 11068dd8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11068dd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11068dda cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068ddc jb 0x11068de4 */
  if (C.cf) goto L_11068de4;
  /* 11068dde cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068de0 ja 0x11068de4 */
  if ((!C.cf&&!C.zf)) goto L_11068de4;
  /* 11068de2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11068de4:;
  /* 11068de4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068de6 jb 0x11068dee */
  if (C.cf) goto L_11068dee;
  /* 11068de8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068dea ja 0x11068dee */
  if ((!C.cf&&!C.zf)) goto L_11068dee;
  /* 11068dec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11068dee:;
  /* 11068dee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068df0 jne 0x11068dff */
  if (!C.zf) goto L_11068dff;
  /* 11068df2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11068df3 jne 0x11068dcc */
  if (!C.zf) goto L_11068dcc;
L_11068df5:;
  /* 11068df5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11068df7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11068df9 je 0x11068e9a */
  if (C.zf) goto L_11068e9a;
L_11068dff:;
  /* 11068dff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11068e04 jb 0x11068e9a */
  if (C.cf) goto L_11068e9a;
  /* 11068e0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11068e0c jmp 0x11068e9a */
  goto L_11068e9a;
L_11068e11:;
  /* 11068e11 lock inc dword ptr [0x11086b1c] */
  x86_unimpl("lock inc @ 0x11068e11");
  /* 11068e18 cmp dword ptr [0x11086b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068e1f jg 0x11068e25 */
  if ((!C.zf&&C.sf==C.of)) goto L_11068e25;
  /* 11068e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11068e23 jmp 0x11068e3e */
  goto L_11068e3e;
L_11068e25:;
  /* 11068e25 lock dec dword ptr [0x11086b1c] */
  x86_unimpl("lock dec @ 0x11068e25");
  /* 11068e2c mov ebx, ecx */
  EBX = (ECX);
  /* 11068e2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11068e30 call 0x1105e000 */
  push32(0x11068e35u); f_1105e000();
  /* 11068e35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11068e3c mov ecx, ebx */
  ECX = (EBX);
L_11068e3e:;
  /* 11068e3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068e40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11068e42 mov edi, edi */
  EDI = (EDI);
L_11068e44:;
  /* 11068e44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11068e46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068e48 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11068e4a je 0x11068e6f */
  if (C.zf) goto L_11068e6f;
  /* 11068e4c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11068e4e je 0x11068e6f */
  if (C.zf) goto L_11068e6f;
  /* 11068e50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11068e51 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11068e52 push ecx */
  push32((uint32_t)(ECX));
  /* 11068e53 push eax */
  push32((uint32_t)(EAX));
  /* 11068e54 push ebx */
  push32((uint32_t)(EBX));
  /* 11068e55 call 0x11069e40 */
  push32(0x11068e5au); f_11069e40();
  /* 11068e5a mov ebx, eax */
  EBX = (EAX);
  /* 11068e5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068e5f call 0x11069e40 */
  push32(0x11068e64u); f_11069e40();
  /* 11068e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068e67 pop ecx */
  ECX = (pop32());
  /* 11068e68 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068e6a jne 0x11068e75 */
  if (!C.zf) goto L_11068e75;
  /* 11068e6c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11068e6d jne 0x11068e44 */
  if (!C.zf) goto L_11068e44;
L_11068e6f:;
  /* 11068e6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11068e71 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068e73 je 0x11068e7e */
  if (C.zf) goto L_11068e7e;
L_11068e75:;
  /* 11068e75 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11068e7a jb 0x11068e7e */
  if (C.cf) goto L_11068e7e;
  /* 11068e7c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11068e7e:;
  /* 11068e7e pop eax */
  EAX = (pop32());
  /* 11068e7f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068e81 jne 0x11068e8c */
  if (!C.zf) goto L_11068e8c;
  /* 11068e83 lock dec dword ptr [0x11086b1c] */
  x86_unimpl("lock dec @ 0x11068e83");
  /* 11068e8a jmp 0x11068e9a */
  goto L_11068e9a;
L_11068e8c:;
  /* 11068e8c mov ebx, ecx */
  EBX = (ECX);
  /* 11068e8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11068e90 call 0x1105e0a0 */
  push32(0x11068e95u); f_1105e0a0();
  /* 11068e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068e98 mov ecx, ebx */
  ECX = (EBX);
L_11068e9a:;
  /* 11068e9a mov eax, ecx */
  EAX = (ECX);
  /* 11068e9c pop ebx */
  EBX = (pop32());
  /* 11068e9d pop esi */
  ESI = (pop32());
  /* 11068e9e pop edi */
  EDI = (pop32());
  /* 11068e9f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11068ea0 ret  */
  ESPCHK(0x11068da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018eb0 @ 0x11068eb0 (255 bytes, 88 insns) */
void f_11068eb0(void) {
  FTRACE(0x11068eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11068eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11068eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11068eb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11068eb6:;
  /* 11068eb6 cmp dword ptr [0x11084ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11084ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068ebd jle 0x11068ed6 */
  if ((C.zf||C.sf!=C.of)) goto L_11068ed6;
  /* 11068ebf push 8 */
  push32((uint32_t)(0x8u));
  /* 11068ec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068ec4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11068ec6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11068ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 11068ec9 call 0x11060610 */
  push32(0x11068eceu); f_11060610();
  /* 11068ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068ed1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11068ed4 jmp 0x11068eef */
  goto L_11068eef;
L_11068ed6:;
  /* 11068ed6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068edb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11068edd mov ecx, dword ptr [0x11084c98] */
  ECX = (r32((uint32_t)(0x11084c98)));
  /* 11068ee3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11068ee5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11068ee9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11068eec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11068eef:;
  /* 11068eef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068ef3 je 0x11068f00 */
  if (C.zf) goto L_11068f00;
  /* 11068ef5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068ef8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068efb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11068efe jmp 0x11068eb6 */
  goto L_11068eb6;
L_11068f00:;
  /* 11068f00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068f03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11068f05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11068f07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11068f0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068f0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068f10 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11068f13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068f16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11068f19 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068f1d je 0x11068f25 */
  if (C.zf) goto L_11068f25;
  /* 11068f1f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068f23 jne 0x11068f38 */
  if (!C.zf) goto L_11068f38;
L_11068f25:;
  /* 11068f25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068f28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068f2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11068f2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11068f2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068f32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068f35 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11068f38:;
  /* 11068f38 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11068f3f:;
  /* 11068f3f cmp dword ptr [0x11084ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11084ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068f46 jle 0x11068f5b */
  if ((C.zf||C.sf!=C.of)) goto L_11068f5b;
  /* 11068f48 push 4 */
  push32((uint32_t)(0x4u));
  /* 11068f4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068f4d push edx */
  push32((uint32_t)(EDX));
  /* 11068f4e call 0x11060610 */
  push32(0x11068f53u); f_11060610();
  /* 11068f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068f56 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11068f59 jmp 0x11068f70 */
  goto L_11068f70;
L_11068f5b:;
  /* 11068f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068f5e mov ecx, dword ptr [0x11084c98] */
  ECX = (r32((uint32_t)(0x11084c98)));
  /* 11068f64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11068f66 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11068f6a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11068f6d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11068f70:;
  /* 11068f70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068f74 je 0x11068f9b */
  if (C.zf) goto L_11068f9b;
  /* 11068f76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11068f79 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11068f7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11068f7f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11068f83 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11068f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068f89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11068f8b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11068f8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11068f90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068f93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11068f96 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11068f99 jmp 0x11068f3f */
  goto L_11068f3f;
L_11068f9b:;
  /* 11068f9b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068f9f jne 0x11068fa8 */
  if (!C.zf) goto L_11068fa8;
  /* 11068fa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11068fa4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11068fa6 jmp 0x11068fab */
  goto L_11068fab;
L_11068fa8:;
  /* 11068fa8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11068fab:;
  /* 11068fab mov esp, ebp */
  ESP = (EBP);
  /* 11068fad pop ebp */
  EBP = (pop32());
  /* 11068fae ret  */
  ESPCHK(0x11068eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fb0 @ 0x11068fb0 (17 bytes, 8 insns) */
void f_11068fb0(void) {
  FTRACE(0x11068fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11068fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11068fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11068fb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068fb6 push eax */
  push32((uint32_t)(EAX));
  /* 11068fb7 call 0x11068eb0 */
  push32(0x11068fbcu); f_11068eb0();
  /* 11068fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068fbf pop ebp */
  EBP = (pop32());
  /* 11068fc0 ret  */
  ESPCHK(0x11068fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fd0 @ 0x11068fd0 (297 bytes, 106 insns) */
void f_11068fd0(void) {
  FTRACE(0x11068fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11068fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11068fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11068fd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11068fd6 push esi */
  push32((uint32_t)(ESI));
L_11068fd7:;
  /* 11068fd7 cmp dword ptr [0x11084ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11084ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11068fde jle 0x11068ff7 */
  if ((C.zf||C.sf!=C.of)) goto L_11068ff7;
  /* 11068fe0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11068fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068fe5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11068fe7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11068fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11068fea call 0x11060610 */
  push32(0x11068fefu); f_11060610();
  /* 11068fef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11068ff2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11068ff5 jmp 0x11069010 */
  goto L_11069010;
L_11068ff7:;
  /* 11068ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11068ffa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11068ffc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11068ffe mov ecx, dword ptr [0x11084c98] */
  ECX = (r32((uint32_t)(0x11084c98)));
  /* 11069004 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11069006 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1106900a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1106900d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11069010:;
  /* 11069010 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069014 je 0x11069021 */
  if (C.zf) goto L_11069021;
  /* 11069016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069019 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106901c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1106901f jmp 0x11068fd7 */
  goto L_11068fd7;
L_11069021:;
  /* 11069021 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069024 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11069026 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11069028 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1106902b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106902e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069031 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11069034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11069037 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1106903a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106903e je 0x11069046 */
  if (C.zf) goto L_11069046;
  /* 11069040 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069044 jne 0x11069059 */
  if (!C.zf) goto L_11069059;
L_11069046:;
  /* 11069046 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069049 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106904b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1106904d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11069050 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069053 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069056 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11069059:;
  /* 11069059 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11069060 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11069067:;
  /* 11069067 cmp dword ptr [0x11084ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11084ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106906e jle 0x11069083 */
  if ((C.zf||C.sf!=C.of)) goto L_11069083;
  /* 11069070 push 4 */
  push32((uint32_t)(0x4u));
  /* 11069072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11069075 push edx */
  push32((uint32_t)(EDX));
  /* 11069076 call 0x11060610 */
  push32(0x1106907bu); f_11060610();
  /* 1106907b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106907e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11069081 jmp 0x11069098 */
  goto L_11069098;
L_11069083:;
  /* 11069083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11069086 mov ecx, dword ptr [0x11084c98] */
  ECX = (r32((uint32_t)(0x11084c98)));
  /* 1106908c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106908e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11069092 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11069095 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11069098:;
  /* 11069098 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106909c je 0x110690d9 */
  if (C.zf) goto L_110690d9;
  /* 1106909e push 0 */
  push32((uint32_t)(0x0u));
  /* 110690a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 110690a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110690a5 push eax */
  push32((uint32_t)(EAX));
  /* 110690a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110690a9 push ecx */
  push32((uint32_t)(ECX));
  /* 110690aa call 0x11069f70 */
  push32(0x110690afu); f_11069f70();
  /* 110690af mov ecx, eax */
  ECX = (EAX);
  /* 110690b1 mov esi, edx */
  ESI = (EDX);
  /* 110690b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110690b6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110690b9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110690ba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110690bc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110690be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110690c1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 110690c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110690c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110690c9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110690cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110690ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110690d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110690d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110690d7 jmp 0x11069067 */
  goto L_11069067;
L_110690d9:;
  /* 110690d9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110690dd jne 0x110690ee */
  if (!C.zf) goto L_110690ee;
  /* 110690df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110690e2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110690e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110690e7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110690ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110690ec jmp 0x110690f4 */
  goto L_110690f4;
L_110690ee:;
  /* 110690ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110690f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_110690f4:;
  /* 110690f4 pop esi */
  ESI = (pop32());
  /* 110690f5 mov esp, ebp */
  ESP = (EBP);
  /* 110690f7 pop ebp */
  EBP = (pop32());
  /* 110690f8 ret  */
  ESPCHK(0x11068fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019100 @ 0x11069100 (61 bytes, 18 insns) */
void f_11069100(void) {
  FTRACE(0x11069100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069100 push ebp */
  push32((uint32_t)(EBP));
  /* 11069101 mov ebp, esp */
  EBP = (ESP);
  /* 11069103 cmp dword ptr [0x11086ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106910a jne 0x1106913b */
  if (!C.zf) goto L_1106913b;
  /* 1106910c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1106910e call 0x1105e000 */
  push32(0x11069113u); f_1105e000();
  /* 11069113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069116 cmp dword ptr [0x11086ae8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086ae8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106911d jne 0x11069131 */
  if (!C.zf) goto L_11069131;
  /* 1106911f call 0x11069160 */
  push32(0x11069124u); f_11069160();
  /* 11069124 mov eax, dword ptr [0x11086ae8] */
  EAX = (r32((uint32_t)(0x11086ae8)));
  /* 11069129 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106912c mov dword ptr [0x11086ae8], eax */
  w32((uint32_t)(0x11086ae8), (EAX));
L_11069131:;
  /* 11069131 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11069133 call 0x1105e0a0 */
  push32(0x11069138u); f_1105e0a0();
  /* 11069138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106913b:;
  /* 1106913b pop ebp */
  EBP = (pop32());
  /* 1106913c ret  */
  ESPCHK(0x11069100u, _esp0);
  ESP += 4; return;
}

/* FUN_10019140 @ 0x11069140 (30 bytes, 11 insns) */
void f_11069140(void) {
  FTRACE(0x11069140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069140 push ebp */
  push32((uint32_t)(EBP));
  /* 11069141 mov ebp, esp */
  EBP = (ESP);
  /* 11069143 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11069145 call 0x1105e000 */
  push32(0x1106914au); f_1105e000();
  /* 1106914a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106914d call 0x11069160 */
  push32(0x11069152u); f_11069160();
  /* 11069152 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11069154 call 0x1105e0a0 */
  push32(0x11069159u); f_1105e0a0();
  /* 11069159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106915c pop ebp */
  EBP = (pop32());
  /* 1106915d ret  */
  ESPCHK(0x11069140u, _esp0);
  ESP += 4; return;
}

/* FUN_10019160 @ 0x11069160 (939 bytes, 266 insns) */
void f_11069160(void) {
  FTRACE(0x11069160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069160 push ebp */
  push32((uint32_t)(EBP));
  /* 11069161 mov ebp, esp */
  EBP = (ESP);
  /* 11069163 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11069166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1106916d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1106916f call 0x1105e000 */
  push32(0x11069174u); f_1105e000();
  /* 11069174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069177 mov dword ptr [0x11086a30], 0 */
  w32((uint32_t)(0x11086a30), (0x0u));
  /* 11069181 mov dword ptr [0x11085e38], 0xffffffff */
  w32((uint32_t)(0x11085e38), (0xffffffffu));
  /* 1106918b mov eax, dword ptr [0x11085e38] */
  EAX = (r32((uint32_t)(0x11085e38)));
  /* 11069190 mov dword ptr [0x11085e28], eax */
  w32((uint32_t)(0x11085e28), (EAX));
  /* 11069195 push 0x11082d20 */
  push32((uint32_t)(0x11082d20u));
  /* 1106919a call 0x11069fe0 */
  push32(0x1106919fu); f_11069fe0();
  /* 1106919f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110691a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110691a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110691a9 jne 0x110692e3 */
  if (!C.zf) goto L_110692e3;
  /* 110691af push 0xc */
  push32((uint32_t)(0xcu));
  /* 110691b1 call 0x1105e0a0 */
  push32(0x110691b6u); f_1105e0a0();
  /* 110691b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110691b9 push 0x11086a38 */
  push32((uint32_t)(0x11086a38u));
  /* 110691be call dword ptr [0x110892e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892e8))), 0x110691c4u);
  /* 110691c4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110691c7 je 0x110692de */
  if (C.zf) goto L_110692de;
  /* 110691cd mov dword ptr [0x11086a30], 1 */
  w32((uint32_t)(0x11086a30), (0x1u));
  /* 110691d7 mov ecx, dword ptr [0x11086a38] */
  ECX = (r32((uint32_t)(0x11086a38)));
  /* 110691dd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110691e0 mov dword ptr [0x11085d90], ecx */
  w32((uint32_t)(0x11085d90), (ECX));
  /* 110691e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110691e8 mov dx, word ptr [0x11086a7e] */
  DX = (r16((uint32_t)(0x11086a7e)));
  /* 110691ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110691f1 je 0x11069209 */
  if (C.zf) goto L_11069209;
  /* 110691f3 mov eax, dword ptr [0x11086a8c] */
  EAX = (r32((uint32_t)(0x11086a8c)));
  /* 110691f8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110691fb mov ecx, dword ptr [0x11085d90] */
  ECX = (r32((uint32_t)(0x11085d90)));
  /* 11069201 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069203 mov dword ptr [0x11085d90], ecx */
  w32((uint32_t)(0x11085d90), (ECX));
L_11069209:;
  /* 11069209 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106920b mov dx, word ptr [0x11086ad2] */
  DX = (r16((uint32_t)(0x11086ad2)));
  /* 11069212 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11069214 je 0x1106923e */
  if (C.zf) goto L_1106923e;
  /* 11069216 cmp dword ptr [0x11086ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106921d je 0x1106923e */
  if (C.zf) goto L_1106923e;
  /* 1106921f mov dword ptr [0x11085d94], 1 */
  w32((uint32_t)(0x11085d94), (0x1u));
  /* 11069229 mov eax, dword ptr [0x11086ae0] */
  EAX = (r32((uint32_t)(0x11086ae0)));
  /* 1106922e sub eax, dword ptr [0x11086a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11086a8c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11069234 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11069237 mov dword ptr [0x11085d98], eax */
  w32((uint32_t)(0x11085d98), (EAX));
  /* 1106923c jmp 0x11069252 */
  goto L_11069252;
L_1106923e:;
  /* 1106923e mov dword ptr [0x11085d94], 0 */
  w32((uint32_t)(0x11085d94), (0x0u));
  /* 11069248 mov dword ptr [0x11085d98], 0 */
  w32((uint32_t)(0x11085d98), (0x0u));
L_11069252:;
  /* 11069252 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11069255 push ecx */
  push32((uint32_t)(ECX));
  /* 11069256 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069258 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1106925a mov edx, dword ptr [0x11085e1c] */
  EDX = (r32((uint32_t)(0x11085e1c)));
  /* 11069260 push edx */
  push32((uint32_t)(EDX));
  /* 11069261 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11069263 push 0x11086a3c */
  push32((uint32_t)(0x11086a3cu));
  /* 11069268 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1106926d mov eax, dword ptr [0x110869a0] */
  EAX = (r32((uint32_t)(0x110869a0)));
  /* 11069272 push eax */
  push32((uint32_t)(EAX));
  /* 11069273 call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x11069279u);
  /* 11069279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106927b je 0x1106928f */
  if (C.zf) goto L_1106928f;
  /* 1106927d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069281 jne 0x1106928f */
  if (!C.zf) goto L_1106928f;
  /* 11069283 mov ecx, dword ptr [0x11085e1c] */
  ECX = (r32((uint32_t)(0x11085e1c)));
  /* 11069289 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1106928d jmp 0x11069298 */
  goto L_11069298;
L_1106928f:;
  /* 1106928f mov edx, dword ptr [0x11085e1c] */
  EDX = (r32((uint32_t)(0x11085e1c)));
  /* 11069295 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11069298:;
  /* 11069298 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1106929b push eax */
  push32((uint32_t)(EAX));
  /* 1106929c push 0 */
  push32((uint32_t)(0x0u));
  /* 1106929e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110692a0 mov ecx, dword ptr [0x11085e20] */
  ECX = (r32((uint32_t)(0x11085e20)));
  /* 110692a6 push ecx */
  push32((uint32_t)(ECX));
  /* 110692a7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110692a9 push 0x11086a90 */
  push32((uint32_t)(0x11086a90u));
  /* 110692ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110692b3 mov edx, dword ptr [0x110869a0] */
  EDX = (r32((uint32_t)(0x110869a0)));
  /* 110692b9 push edx */
  push32((uint32_t)(EDX));
  /* 110692ba call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x110692c0u);
  /* 110692c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110692c2 je 0x110692d5 */
  if (C.zf) goto L_110692d5;
  /* 110692c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110692c8 jne 0x110692d5 */
  if (!C.zf) goto L_110692d5;
  /* 110692ca mov eax, dword ptr [0x11085e20] */
  EAX = (r32((uint32_t)(0x11085e20)));
  /* 110692cf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 110692d3 jmp 0x110692de */
  goto L_110692de;
L_110692d5:;
  /* 110692d5 mov ecx, dword ptr [0x11085e20] */
  ECX = (r32((uint32_t)(0x11085e20)));
  /* 110692db mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_110692de:;
  /* 110692de jmp 0x11069507 */
  goto L_11069507;
L_110692e3:;
  /* 110692e3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110692e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110692e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110692eb je 0x1106930d */
  if (C.zf) goto L_1106930d;
  /* 110692ed cmp dword ptr [0x11086ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110692f4 je 0x1106931c */
  if (C.zf) goto L_1106931c;
  /* 110692f6 mov ecx, dword ptr [0x11086ae4] */
  ECX = (r32((uint32_t)(0x11086ae4)));
  /* 110692fc push ecx */
  push32((uint32_t)(ECX));
  /* 110692fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069300 push edx */
  push32((uint32_t)(EDX));
  /* 11069301 call 0x11066290 */
  push32(0x11069306u); f_11066290();
  /* 11069306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106930b jne 0x1106931c */
  if (!C.zf) goto L_1106931c;
L_1106930d:;
  /* 1106930d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1106930f call 0x1105e0a0 */
  push32(0x11069314u); f_1105e0a0();
  /* 11069314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069317 jmp 0x11069507 */
  goto L_11069507;
L_1106931c:;
  /* 1106931c push 2 */
  push32((uint32_t)(0x2u));
  /* 1106931e mov eax, dword ptr [0x11086ae4] */
  EAX = (r32((uint32_t)(0x11086ae4)));
  /* 11069323 push eax */
  push32((uint32_t)(EAX));
  /* 11069324 call 0x1105b090 */
  push32(0x11069329u); f_1105b090();
  /* 11069329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106932c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11069331 push 0x11082d18 */
  push32((uint32_t)(0x11082d18u));
  /* 11069336 push 2 */
  push32((uint32_t)(0x2u));
  /* 11069338 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106933b push ecx */
  push32((uint32_t)(ECX));
  /* 1106933c call 0x1105d430 */
  push32(0x11069341u); f_1105d430();
  /* 11069341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069344 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069347 push eax */
  push32((uint32_t)(EAX));
  /* 11069348 call 0x1105a600 */
  push32(0x1106934du); f_1105a600();
  /* 1106934d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069350 mov dword ptr [0x11086ae4], eax */
  w32((uint32_t)(0x11086ae4), (EAX));
  /* 11069355 cmp dword ptr [0x11086ae4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086ae4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106935c jne 0x1106936d */
  if (!C.zf) goto L_1106936d;
  /* 1106935e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11069360 call 0x1105e0a0 */
  push32(0x11069365u); f_1105e0a0();
  /* 11069365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069368 jmp 0x11069507 */
  goto L_11069507;
L_1106936d:;
  /* 1106936d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069370 push edx */
  push32((uint32_t)(EDX));
  /* 11069371 mov eax, dword ptr [0x11086ae4] */
  EAX = (r32((uint32_t)(0x11086ae4)));
  /* 11069376 push eax */
  push32((uint32_t)(EAX));
  /* 11069377 call 0x1105d5b0 */
  push32(0x1106937cu); f_1105d5b0();
  /* 1106937c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106937f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11069381 call 0x1105e0a0 */
  push32(0x11069386u); f_1105e0a0();
  /* 11069386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069389 push 3 */
  push32((uint32_t)(0x3u));
  /* 1106938b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106938e push ecx */
  push32((uint32_t)(ECX));
  /* 1106938f mov edx, dword ptr [0x11085e1c] */
  EDX = (r32((uint32_t)(0x11085e1c)));
  /* 11069395 push edx */
  push32((uint32_t)(EDX));
  /* 11069396 call 0x1105de20 */
  push32(0x1106939bu); f_1105de20();
  /* 1106939b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106939e mov eax, dword ptr [0x11085e1c] */
  EAX = (r32((uint32_t)(0x11085e1c)));
  /* 110693a3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 110693a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110693aa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110693ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110693b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110693b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110693b6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110693b9 jne 0x110693cd */
  if (!C.zf) goto L_110693cd;
  /* 110693bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110693be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110693c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110693c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110693c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110693ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_110693cd:;
  /* 110693cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110693d0 push eax */
  push32((uint32_t)(EAX));
  /* 110693d1 call 0x11068eb0 */
  push32(0x110693d6u); f_11068eb0();
  /* 110693d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110693d9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110693df mov dword ptr [0x11085d90], eax */
  w32((uint32_t)(0x11085d90), (EAX));
L_110693e4:;
  /* 110693e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110693e7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110693ea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110693ed je 0x11069405 */
  if (C.zf) goto L_11069405;
  /* 110693ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110693f2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110693f5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110693f8 jl 0x11069410 */
  if ((C.sf!=C.of)) goto L_11069410;
  /* 110693fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110693fd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11069400 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069403 jg 0x11069410 */
  if ((!C.zf&&C.sf==C.of)) goto L_11069410;
L_11069405:;
  /* 11069405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069408 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106940b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1106940e jmp 0x110693e4 */
  goto L_110693e4;
L_11069410:;
  /* 11069410 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069413 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11069416 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069419 jne 0x110694b5 */
  if (!C.zf) goto L_110694b5;
  /* 1106941f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069422 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069425 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11069428 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106942b push edx */
  push32((uint32_t)(EDX));
  /* 1106942c call 0x11068eb0 */
  push32(0x11069431u); f_11068eb0();
  /* 11069431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069434 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11069437 mov ecx, dword ptr [0x11085d90] */
  ECX = (r32((uint32_t)(0x11085d90)));
  /* 1106943d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106943f mov dword ptr [0x11085d90], ecx */
  w32((uint32_t)(0x11085d90), (ECX));
L_11069445:;
  /* 11069445 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069448 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1106944b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106944e jl 0x11069466 */
  if ((C.sf!=C.of)) goto L_11069466;
  /* 11069450 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069453 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11069456 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069459 jg 0x11069466 */
  if ((!C.zf&&C.sf==C.of)) goto L_11069466;
  /* 1106945b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106945e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069461 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11069464 jmp 0x11069445 */
  goto L_11069445;
L_11069466:;
  /* 11069466 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069469 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1106946c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106946f jne 0x110694b5 */
  if (!C.zf) goto L_110694b5;
  /* 11069471 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069474 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069477 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1106947a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106947d push ecx */
  push32((uint32_t)(ECX));
  /* 1106947e call 0x11068eb0 */
  push32(0x11069483u); f_11068eb0();
  /* 11069483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069486 mov edx, dword ptr [0x11085d90] */
  EDX = (r32((uint32_t)(0x11085d90)));
  /* 1106948c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106948e mov dword ptr [0x11085d90], edx */
  w32((uint32_t)(0x11085d90), (EDX));
L_11069494:;
  /* 11069494 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069497 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1106949a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106949d jl 0x110694b5 */
  if ((C.sf!=C.of)) goto L_110694b5;
  /* 1106949f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110694a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110694a5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110694a8 jg 0x110694b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_110694b5;
  /* 110694aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110694ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110694b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110694b3 jmp 0x11069494 */
  goto L_11069494;
L_110694b5:;
  /* 110694b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110694b9 je 0x110694c9 */
  if (C.zf) goto L_110694c9;
  /* 110694bb mov edx, dword ptr [0x11085d90] */
  EDX = (r32((uint32_t)(0x11085d90)));
  /* 110694c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110694c3 mov dword ptr [0x11085d90], edx */
  w32((uint32_t)(0x11085d90), (EDX));
L_110694c9:;
  /* 110694c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110694cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110694cf mov dword ptr [0x11085d94], ecx */
  w32((uint32_t)(0x11085d94), (ECX));
  /* 110694d5 cmp dword ptr [0x11085d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11085d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110694dc je 0x110694fe */
  if (C.zf) goto L_110694fe;
  /* 110694de push 3 */
  push32((uint32_t)(0x3u));
  /* 110694e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110694e3 push edx */
  push32((uint32_t)(EDX));
  /* 110694e4 mov eax, dword ptr [0x11085e20] */
  EAX = (r32((uint32_t)(0x11085e20)));
  /* 110694e9 push eax */
  push32((uint32_t)(EAX));
  /* 110694ea call 0x1105de20 */
  push32(0x110694efu); f_1105de20();
  /* 110694ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110694f2 mov ecx, dword ptr [0x11085e20] */
  ECX = (r32((uint32_t)(0x11085e20)));
  /* 110694f8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 110694fc jmp 0x11069507 */
  goto L_11069507;
L_110694fe:;
  /* 110694fe mov edx, dword ptr [0x11085e20] */
  EDX = (r32((uint32_t)(0x11085e20)));
  /* 11069504 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11069507:;
  /* 11069507 mov esp, ebp */
  ESP = (EBP);
  /* 11069509 pop ebp */
  EBP = (pop32());
  /* 1106950a ret  */
  ESPCHK(0x11069160u, _esp0);
  ESP += 4; return;
}

/* FUN_10019510 @ 0x11069510 (46 bytes, 18 insns) */
void f_11069510(void) {
  FTRACE(0x11069510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069510 push ebp */
  push32((uint32_t)(EBP));
  /* 11069511 mov ebp, esp */
  EBP = (ESP);
  /* 11069513 push ecx */
  push32((uint32_t)(ECX));
  /* 11069514 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11069516 call 0x1105e000 */
  push32(0x1106951bu); f_1105e000();
  /* 1106951b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106951e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069521 push eax */
  push32((uint32_t)(EAX));
  /* 11069522 call 0x11069540 */
  push32(0x11069527u); f_11069540();
  /* 11069527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106952a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1106952d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1106952f call 0x1105e0a0 */
  push32(0x11069534u); f_1105e0a0();
  /* 11069534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069537 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106953a mov esp, ebp */
  ESP = (EBP);
  /* 1106953c pop ebp */
  EBP = (pop32());
  /* 1106953d ret  */
  ESPCHK(0x11069510u, _esp0);
  ESP += 4; return;
}

/* FUN_10019540 @ 0x11069540 (762 bytes, 246 insns) */
void f_11069540(void) {
  FTRACE(0x11069540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069540 push ebp */
  push32((uint32_t)(EBP));
  /* 11069541 mov ebp, esp */
  EBP = (ESP);
  /* 11069543 push ecx */
  push32((uint32_t)(ECX));
  /* 11069544 cmp dword ptr [0x11085d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11085d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106954b jne 0x11069554 */
  if (!C.zf) goto L_11069554;
  /* 1106954d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106954f jmp 0x11069836 */
  goto L_11069836;
L_11069554:;
  /* 11069554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069557 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1106955a cmp ecx, dword ptr [0x11085e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11085e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069560 jne 0x11069574 */
  if (!C.zf) goto L_11069574;
  /* 11069562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069565 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11069568 cmp eax, dword ptr [0x11085e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11085e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106956e je 0x1106973b */
  if (C.zf) goto L_1106973b;
L_11069574:;
  /* 11069574 cmp dword ptr [0x11086a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106957b je 0x110696f5 */
  if (C.zf) goto L_110696f5;
  /* 11069581 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11069583 mov cx, word ptr [0x11086ad0] */
  CX = (r16((uint32_t)(0x11086ad0)));
  /* 1106958a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1106958c jne 0x110695e9 */
  if (!C.zf) goto L_110695e9;
  /* 1106958e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11069590 mov dx, word ptr [0x11086ade] */
  DX = (r16((uint32_t)(0x11086ade)));
  /* 11069597 push edx */
  push32((uint32_t)(EDX));
  /* 11069598 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106959a mov ax, word ptr [0x11086adc] */
  AX = (r16((uint32_t)(0x11086adc)));
  /* 110695a0 push eax */
  push32((uint32_t)(EAX));
  /* 110695a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110695a3 mov cx, word ptr [0x11086ada] */
  CX = (r16((uint32_t)(0x11086ada)));
  /* 110695aa push ecx */
  push32((uint32_t)(ECX));
  /* 110695ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110695ad mov dx, word ptr [0x11086ad8] */
  DX = (r16((uint32_t)(0x11086ad8)));
  /* 110695b4 push edx */
  push32((uint32_t)(EDX));
  /* 110695b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110695b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110695b9 mov ax, word ptr [0x11086ad4] */
  AX = (r16((uint32_t)(0x11086ad4)));
  /* 110695bf push eax */
  push32((uint32_t)(EAX));
  /* 110695c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110695c2 mov cx, word ptr [0x11086ad6] */
  CX = (r16((uint32_t)(0x11086ad6)));
  /* 110695c9 push ecx */
  push32((uint32_t)(ECX));
  /* 110695ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110695cc mov dx, word ptr [0x11086ad2] */
  DX = (r16((uint32_t)(0x11086ad2)));
  /* 110695d3 push edx */
  push32((uint32_t)(EDX));
  /* 110695d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110695d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 110695da push ecx */
  push32((uint32_t)(ECX));
  /* 110695db push 1 */
  push32((uint32_t)(0x1u));
  /* 110695dd push 1 */
  push32((uint32_t)(0x1u));
  /* 110695df call 0x11069840 */
  push32(0x110695e4u); f_11069840();
  /* 110695e4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110695e7 jmp 0x1106963a */
  goto L_1106963a;
L_110695e9:;
  /* 110695e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110695eb mov dx, word ptr [0x11086ade] */
  DX = (r16((uint32_t)(0x11086ade)));
  /* 110695f2 push edx */
  push32((uint32_t)(EDX));
  /* 110695f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110695f5 mov ax, word ptr [0x11086adc] */
  AX = (r16((uint32_t)(0x11086adc)));
  /* 110695fb push eax */
  push32((uint32_t)(EAX));
  /* 110695fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110695fe mov cx, word ptr [0x11086ada] */
  CX = (r16((uint32_t)(0x11086ada)));
  /* 11069605 push ecx */
  push32((uint32_t)(ECX));
  /* 11069606 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11069608 mov dx, word ptr [0x11086ad8] */
  DX = (r16((uint32_t)(0x11086ad8)));
  /* 1106960f push edx */
  push32((uint32_t)(EDX));
  /* 11069610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069612 mov ax, word ptr [0x11086ad6] */
  AX = (r16((uint32_t)(0x11086ad6)));
  /* 11069618 push eax */
  push32((uint32_t)(EAX));
  /* 11069619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106961b push 0 */
  push32((uint32_t)(0x0u));
  /* 1106961d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106961f mov cx, word ptr [0x11086ad2] */
  CX = (r16((uint32_t)(0x11086ad2)));
  /* 11069626 push ecx */
  push32((uint32_t)(ECX));
  /* 11069627 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106962a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1106962d push eax */
  push32((uint32_t)(EAX));
  /* 1106962e push 0 */
  push32((uint32_t)(0x0u));
  /* 11069630 push 1 */
  push32((uint32_t)(0x1u));
  /* 11069632 call 0x11069840 */
  push32(0x11069637u); f_11069840();
  /* 11069637 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106963a:;
  /* 1106963a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106963c mov cx, word ptr [0x11086a7c] */
  CX = (r16((uint32_t)(0x11086a7c)));
  /* 11069643 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11069645 jne 0x110696a2 */
  if (!C.zf) goto L_110696a2;
  /* 11069647 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11069649 mov dx, word ptr [0x11086a8a] */
  DX = (r16((uint32_t)(0x11086a8a)));
  /* 11069650 push edx */
  push32((uint32_t)(EDX));
  /* 11069651 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069653 mov ax, word ptr [0x11086a88] */
  AX = (r16((uint32_t)(0x11086a88)));
  /* 11069659 push eax */
  push32((uint32_t)(EAX));
  /* 1106965a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106965c mov cx, word ptr [0x11086a86] */
  CX = (r16((uint32_t)(0x11086a86)));
  /* 11069663 push ecx */
  push32((uint32_t)(ECX));
  /* 11069664 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11069666 mov dx, word ptr [0x11086a84] */
  DX = (r16((uint32_t)(0x11086a84)));
  /* 1106966d push edx */
  push32((uint32_t)(EDX));
  /* 1106966e push 0 */
  push32((uint32_t)(0x0u));
  /* 11069670 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069672 mov ax, word ptr [0x11086a80] */
  AX = (r16((uint32_t)(0x11086a80)));
  /* 11069678 push eax */
  push32((uint32_t)(EAX));
  /* 11069679 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106967b mov cx, word ptr [0x11086a82] */
  CX = (r16((uint32_t)(0x11086a82)));
  /* 11069682 push ecx */
  push32((uint32_t)(ECX));
  /* 11069683 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11069685 mov dx, word ptr [0x11086a7e] */
  DX = (r16((uint32_t)(0x11086a7e)));
  /* 1106968c push edx */
  push32((uint32_t)(EDX));
  /* 1106968d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069690 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11069693 push ecx */
  push32((uint32_t)(ECX));
  /* 11069694 push 1 */
  push32((uint32_t)(0x1u));
  /* 11069696 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069698 call 0x11069840 */
  push32(0x1106969du); f_11069840();
  /* 1106969d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110696a0 jmp 0x110696f3 */
  goto L_110696f3;
L_110696a2:;
  /* 110696a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110696a4 mov dx, word ptr [0x11086a8a] */
  DX = (r16((uint32_t)(0x11086a8a)));
  /* 110696ab push edx */
  push32((uint32_t)(EDX));
  /* 110696ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110696ae mov ax, word ptr [0x11086a88] */
  AX = (r16((uint32_t)(0x11086a88)));
  /* 110696b4 push eax */
  push32((uint32_t)(EAX));
  /* 110696b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110696b7 mov cx, word ptr [0x11086a86] */
  CX = (r16((uint32_t)(0x11086a86)));
  /* 110696be push ecx */
  push32((uint32_t)(ECX));
  /* 110696bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110696c1 mov dx, word ptr [0x11086a84] */
  DX = (r16((uint32_t)(0x11086a84)));
  /* 110696c8 push edx */
  push32((uint32_t)(EDX));
  /* 110696c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110696cb mov ax, word ptr [0x11086a82] */
  AX = (r16((uint32_t)(0x11086a82)));
  /* 110696d1 push eax */
  push32((uint32_t)(EAX));
  /* 110696d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110696d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110696d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110696d8 mov cx, word ptr [0x11086a7e] */
  CX = (r16((uint32_t)(0x11086a7e)));
  /* 110696df push ecx */
  push32((uint32_t)(ECX));
  /* 110696e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110696e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110696e6 push eax */
  push32((uint32_t)(EAX));
  /* 110696e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110696e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110696eb call 0x11069840 */
  push32(0x110696f0u); f_11069840();
  /* 110696f0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110696f3:;
  /* 110696f3 jmp 0x1106973b */
  goto L_1106973b;
L_110696f5:;
  /* 110696f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110696f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110696f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110696fb push 2 */
  push32((uint32_t)(0x2u));
  /* 110696fd push 0 */
  push32((uint32_t)(0x0u));
  /* 110696ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11069701 push 1 */
  push32((uint32_t)(0x1u));
  /* 11069703 push 4 */
  push32((uint32_t)(0x4u));
  /* 11069705 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069708 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1106970b push edx */
  push32((uint32_t)(EDX));
  /* 1106970c push 1 */
  push32((uint32_t)(0x1u));
  /* 1106970e push 1 */
  push32((uint32_t)(0x1u));
  /* 11069710 call 0x11069840 */
  push32(0x11069715u); f_11069840();
  /* 11069715 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106971a push 0 */
  push32((uint32_t)(0x0u));
  /* 1106971c push 0 */
  push32((uint32_t)(0x0u));
  /* 1106971e push 2 */
  push32((uint32_t)(0x2u));
  /* 11069720 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069722 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069724 push 5 */
  push32((uint32_t)(0x5u));
  /* 11069726 push 0xa */
  push32((uint32_t)(0xau));
  /* 11069728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106972b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1106972e push ecx */
  push32((uint32_t)(ECX));
  /* 1106972f push 1 */
  push32((uint32_t)(0x1u));
  /* 11069731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069733 call 0x11069840 */
  push32(0x11069738u); f_11069840();
  /* 11069738 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106973b:;
  /* 1106973b mov edx, dword ptr [0x11085e2c] */
  EDX = (r32((uint32_t)(0x11085e2c)));
  /* 11069741 cmp edx, dword ptr [0x11085e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11085e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069747 jge 0x11069794 */
  if ((C.sf==C.of)) goto L_11069794;
  /* 11069749 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106974c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1106974f cmp ecx, dword ptr [0x11085e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11085e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069755 jl 0x11069765 */
  if ((C.sf!=C.of)) goto L_11069765;
  /* 11069757 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106975a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1106975d cmp eax, dword ptr [0x11085e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11085e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069763 jle 0x1106976c */
  if ((C.zf||C.sf!=C.of)) goto L_1106976c;
L_11069765:;
  /* 11069765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069767 jmp 0x11069836 */
  goto L_11069836;
L_1106976c:;
  /* 1106976c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106976f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11069772 cmp edx, dword ptr [0x11085e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11085e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069778 jle 0x11069792 */
  if ((C.zf||C.sf!=C.of)) goto L_11069792;
  /* 1106977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106977d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11069780 cmp ecx, dword ptr [0x11085e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11085e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069786 jge 0x11069792 */
  if ((C.sf==C.of)) goto L_11069792;
  /* 11069788 mov eax, 1 */
  EAX = (0x1u);
  /* 1106978d jmp 0x11069836 */
  goto L_11069836;
L_11069792:;
  /* 11069792 jmp 0x110697d7 */
  goto L_110697d7;
L_11069794:;
  /* 11069794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069797 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1106979a cmp eax, dword ptr [0x11085e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11085e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110697a0 jl 0x110697b0 */
  if ((C.sf!=C.of)) goto L_110697b0;
  /* 110697a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110697a5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110697a8 cmp edx, dword ptr [0x11085e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11085e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110697ae jle 0x110697b7 */
  if ((C.zf||C.sf!=C.of)) goto L_110697b7;
L_110697b0:;
  /* 110697b0 mov eax, 1 */
  EAX = (0x1u);
  /* 110697b5 jmp 0x11069836 */
  goto L_11069836;
L_110697b7:;
  /* 110697b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110697ba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 110697bd cmp ecx, dword ptr [0x11085e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11085e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110697c3 jle 0x110697d7 */
  if ((C.zf||C.sf!=C.of)) goto L_110697d7;
  /* 110697c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110697c8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110697cb cmp eax, dword ptr [0x11085e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11085e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110697d1 jge 0x110697d7 */
  if ((C.sf==C.of)) goto L_110697d7;
  /* 110697d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110697d5 jmp 0x11069836 */
  goto L_11069836;
L_110697d7:;
  /* 110697d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110697da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110697dd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110697e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110697e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110697e5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110697e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110697ea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 110697ed imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110697f3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110697f5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110697fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110697fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069801 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11069804 cmp edx, dword ptr [0x11085e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11085e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106980a jne 0x11069822 */
  if (!C.zf) goto L_11069822;
  /* 1106980c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106980f cmp eax, dword ptr [0x11085e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11085e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069815 jl 0x1106981e */
  if ((C.sf!=C.of)) goto L_1106981e;
  /* 11069817 mov eax, 1 */
  EAX = (0x1u);
  /* 1106981c jmp 0x11069836 */
  goto L_11069836;
L_1106981e:;
  /* 1106981e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069820 jmp 0x11069836 */
  goto L_11069836;
L_11069822:;
  /* 11069822 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11069825 cmp ecx, dword ptr [0x11085e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11085e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106982b jge 0x11069834 */
  if ((C.sf==C.of)) goto L_11069834;
  /* 1106982d mov eax, 1 */
  EAX = (0x1u);
  /* 11069832 jmp 0x11069836 */
  goto L_11069836;
L_11069834:;
  /* 11069834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11069836:;
  /* 11069836 mov esp, ebp */
  ESP = (EBP);
  /* 11069838 pop ebp */
  EBP = (pop32());
  /* 11069839 ret  */
  ESPCHK(0x11069540u, _esp0);
  ESP += 4; return;
}

/* FUN_10019840 @ 0x11069840 (504 bytes, 145 insns) */
void f_11069840(void) {
  FTRACE(0x11069840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069840 push ebp */
  push32((uint32_t)(EBP));
  /* 11069841 mov ebp, esp */
  EBP = (ESP);
  /* 11069843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11069846 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106984a jne 0x1106991c */
  if (!C.zf) goto L_1106991c;
  /* 11069850 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11069853 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11069856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11069858 jne 0x11069869 */
  if (!C.zf) goto L_11069869;
  /* 1106985a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106985d mov edx, dword ptr [ecx*4 + 0x11085e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11085e4c)));
  /* 11069864 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11069867 jmp 0x11069876 */
  goto L_11069876;
L_11069869:;
  /* 11069869 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106986c mov ecx, dword ptr [eax*4 + 0x11085e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11085e80)));
  /* 11069873 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11069876:;
  /* 11069876 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069879 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106987c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1106987f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11069882 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11069885 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106988b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106988e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069890 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11069893 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11069896 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11069899 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 1106989d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1106989e mov ecx, 7 */
  ECX = (0x7u);
  /* 110698a3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110698a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110698a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110698ab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110698ae jge 0x110698c9 */
  if ((C.sf==C.of)) goto L_110698c9;
  /* 110698b0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110698b3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110698b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110698b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110698bc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110698bf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110698c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110698c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110698c7 jmp 0x110698dd */
  goto L_110698dd;
L_110698c9:;
  /* 110698c9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110698cc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110698cf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110698d2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110698d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110698d8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110698da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110698dd:;
  /* 110698dd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110698e1 jne 0x1106991a */
  if (!C.zf) goto L_1106991a;
  /* 110698e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110698e6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110698e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110698eb jne 0x110698fc */
  if (!C.zf) goto L_110698fc;
  /* 110698ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110698f0 mov eax, dword ptr [edx*4 + 0x11085e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11085e50)));
  /* 110698f7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110698fa jmp 0x11069909 */
  goto L_11069909;
L_110698fc:;
  /* 110698fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110698ff mov edx, dword ptr [ecx*4 + 0x11085e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11085e84)));
  /* 11069906 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11069909:;
  /* 11069909 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106990c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106990f jle 0x1106991a */
  if ((C.zf||C.sf!=C.of)) goto L_1106991a;
  /* 11069911 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11069914 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11069917 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1106991a:;
  /* 1106991a jmp 0x11069951 */
  goto L_11069951;
L_1106991c:;
  /* 1106991c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106991f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11069922 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11069924 jne 0x11069935 */
  if (!C.zf) goto L_11069935;
  /* 11069926 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11069929 mov ecx, dword ptr [eax*4 + 0x11085e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11085e4c)));
  /* 11069930 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11069933 jmp 0x11069942 */
  goto L_11069942;
L_11069935:;
  /* 11069935 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11069938 mov eax, dword ptr [edx*4 + 0x11085e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11085e80)));
  /* 1106993f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11069942:;
  /* 11069942 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11069945 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11069948 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106994b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106994e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11069951:;
  /* 11069951 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069955 jne 0x11069991 */
  if (!C.zf) goto L_11069991;
  /* 11069957 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106995a mov dword ptr [0x11085e2c], eax */
  w32((uint32_t)(0x11085e2c), (EAX));
  /* 1106995f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11069962 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11069965 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11069968 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106996a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106996d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11069970 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069972 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11069978 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1106997b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106997d mov dword ptr [0x11085e30], ecx */
  w32((uint32_t)(0x11085e30), (ECX));
  /* 11069983 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11069986 mov dword ptr [0x11085e28], edx */
  w32((uint32_t)(0x11085e28), (EDX));
  /* 1106998c jmp 0x11069a34 */
  goto L_11069a34;
L_11069991:;
  /* 11069991 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11069994 mov dword ptr [0x11085e3c], eax */
  w32((uint32_t)(0x11085e3c), (EAX));
  /* 11069999 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 1106999c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1106999f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 110699a2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110699a4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110699a7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 110699aa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110699ac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110699b2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 110699b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110699b7 mov dword ptr [0x11085e40], ecx */
  w32((uint32_t)(0x11085e40), (ECX));
  /* 110699bd mov edx, dword ptr [0x11085d98] */
  EDX = (r32((uint32_t)(0x11085d98)));
  /* 110699c3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110699c9 mov eax, dword ptr [0x11085e40] */
  EAX = (r32((uint32_t)(0x11085e40)));
  /* 110699ce add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110699d0 mov dword ptr [0x11085e40], eax */
  w32((uint32_t)(0x11085e40), (EAX));
  /* 110699d5 cmp dword ptr [0x11085e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11085e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110699dc jge 0x11069a01 */
  if ((C.sf==C.of)) goto L_11069a01;
  /* 110699de mov ecx, dword ptr [0x11085e40] */
  ECX = (r32((uint32_t)(0x11085e40)));
  /* 110699e4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110699ea mov dword ptr [0x11085e40], ecx */
  w32((uint32_t)(0x11085e40), (ECX));
  /* 110699f0 mov edx, dword ptr [0x11085e3c] */
  EDX = (r32((uint32_t)(0x11085e3c)));
  /* 110699f6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110699f9 mov dword ptr [0x11085e3c], edx */
  w32((uint32_t)(0x11085e3c), (EDX));
  /* 110699ff jmp 0x11069a2b */
  goto L_11069a2b;
L_11069a01:;
  /* 11069a01 cmp dword ptr [0x11085e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11085e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069a0b jl 0x11069a2b */
  if ((C.sf!=C.of)) goto L_11069a2b;
  /* 11069a0d mov eax, dword ptr [0x11085e40] */
  EAX = (r32((uint32_t)(0x11085e40)));
  /* 11069a12 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11069a17 mov dword ptr [0x11085e40], eax */
  w32((uint32_t)(0x11085e40), (EAX));
  /* 11069a1c mov ecx, dword ptr [0x11085e3c] */
  ECX = (r32((uint32_t)(0x11085e3c)));
  /* 11069a22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069a25 mov dword ptr [0x11085e3c], ecx */
  w32((uint32_t)(0x11085e3c), (ECX));
L_11069a2b:;
  /* 11069a2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11069a2e mov dword ptr [0x11085e38], edx */
  w32((uint32_t)(0x11085e38), (EDX));
L_11069a34:;
  /* 11069a34 mov esp, ebp */
  ESP = (EBP);
  /* 11069a36 pop ebp */
  EBP = (pop32());
  /* 11069a37 ret  */
  ESPCHK(0x11069840u, _esp0);
  ESP += 4; return;
}

/* FUN_10019a40 @ 0x11069a40 (382 bytes, 135 insns) */
void f_11069a40(void) {
  FTRACE(0x11069a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11069a41 mov ebp, esp */
  EBP = (ESP);
  /* 11069a43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11069a45 push 0x11082d28 */
  push32((uint32_t)(0x11082d28u));
  /* 11069a4a push 0x11063708 */
  push32((uint32_t)(0x11063708u));
  /* 11069a4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11069a55 push eax */
  push32((uint32_t)(EAX));
  /* 11069a56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11069a5d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069a60 push ebx */
  push32((uint32_t)(EBX));
  /* 11069a61 push esi */
  push32((uint32_t)(ESI));
  /* 11069a62 push edi */
  push32((uint32_t)(EDI));
  /* 11069a63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11069a66 cmp dword ptr [0x11086aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069a6d jne 0x11069ab2 */
  if (!C.zf) goto L_11069ab2;
  /* 11069a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11069a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11069a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069a77 call dword ptr [0x110892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892e4))), 0x11069a7du);
  /* 11069a7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11069a7f je 0x11069a8d */
  if (C.zf) goto L_11069a8d;
  /* 11069a81 mov dword ptr [0x11086aec], 1 */
  w32((uint32_t)(0x11086aec), (0x1u));
  /* 11069a8b jmp 0x11069ab2 */
  goto L_11069ab2;
L_11069a8d:;
  /* 11069a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11069a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11069a91 push 1 */
  push32((uint32_t)(0x1u));
  /* 11069a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069a95 call dword ptr [0x110892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892fc))), 0x11069a9bu);
  /* 11069a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11069a9d je 0x11069aab */
  if (C.zf) goto L_11069aab;
  /* 11069a9f mov dword ptr [0x11086aec], 2 */
  w32((uint32_t)(0x11086aec), (0x2u));
  /* 11069aa9 jmp 0x11069ab2 */
  goto L_11069ab2;
L_11069aab:;
  /* 11069aab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069aad jmp 0x11069bc1 */
  goto L_11069bc1;
L_11069ab2:;
  /* 11069ab2 cmp dword ptr [0x11086aec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11086aec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069ab9 jne 0x11069ad6 */
  if (!C.zf) goto L_11069ad6;
  /* 11069abb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11069abe push eax */
  push32((uint32_t)(EAX));
  /* 11069abf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11069ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 11069ac3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11069ac6 push edx */
  push32((uint32_t)(EDX));
  /* 11069ac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069aca push eax */
  push32((uint32_t)(EAX));
  /* 11069acb call dword ptr [0x110892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892e4))), 0x11069ad1u);
  /* 11069ad1 jmp 0x11069bc1 */
  goto L_11069bc1;
L_11069ad6:;
  /* 11069ad6 cmp dword ptr [0x11086aec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11086aec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069add jne 0x11069bbf */
  if (!C.zf) goto L_11069bbf;
  /* 11069ae3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069ae7 jne 0x11069af2 */
  if (!C.zf) goto L_11069af2;
  /* 11069ae9 mov ecx, dword ptr [0x110869a0] */
  ECX = (r32((uint32_t)(0x110869a0)));
  /* 11069aef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11069af2:;
  /* 11069af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069af6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11069af9 push edx */
  push32((uint32_t)(EDX));
  /* 11069afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069afd push eax */
  push32((uint32_t)(EAX));
  /* 11069afe call dword ptr [0x110892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892fc))), 0x11069b04u);
  /* 11069b04 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11069b07 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069b0b jne 0x11069b14 */
  if (!C.zf) goto L_11069b14;
  /* 11069b0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069b0f jmp 0x11069bc1 */
  goto L_11069bc1;
L_11069b14:;
  /* 11069b14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11069b1b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11069b1e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069b21 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11069b23 call 0x1105d7a0 */
  push32(0x11069b28u); f_1105d7a0();
  /* 11069b28 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11069b2b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11069b2e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11069b31 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11069b34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11069b3b jmp 0x11069b54 */
  goto L_11069b54;
  /* 11069b3d mov eax, 1 */
  EAX = (0x1u);
  /* 11069b42 ret  */
  ESPCHK(0x11069a40u, _esp0);
  ESP += 4; return;
  /* 11069b43 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11069b46 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11069b4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11069b54:;
  /* 11069b54 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069b58 jne 0x11069b5e */
  if (!C.zf) goto L_11069b5e;
  /* 11069b5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069b5c jmp 0x11069bc1 */
  goto L_11069bc1;
L_11069b5e:;
  /* 11069b5e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11069b61 push edx */
  push32((uint32_t)(EDX));
  /* 11069b62 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11069b65 push eax */
  push32((uint32_t)(EAX));
  /* 11069b66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11069b69 push ecx */
  push32((uint32_t)(ECX));
  /* 11069b6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069b6d push edx */
  push32((uint32_t)(EDX));
  /* 11069b6e call dword ptr [0x110892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892fc))), 0x11069b74u);
  /* 11069b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11069b76 jne 0x11069b7c */
  if (!C.zf) goto L_11069b7c;
  /* 11069b78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069b7a jmp 0x11069bc1 */
  goto L_11069bc1;
L_11069b7c:;
  /* 11069b7c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069b80 jne 0x11069b9d */
  if (!C.zf) goto L_11069b9d;
  /* 11069b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069b86 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11069b88 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11069b8b push eax */
  push32((uint32_t)(EAX));
  /* 11069b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11069b8e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11069b91 push ecx */
  push32((uint32_t)(ECX));
  /* 11069b92 call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x11069b98u);
  /* 11069b98 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11069b9b jmp 0x11069bba */
  goto L_11069bba;
L_11069b9d:;
  /* 11069b9d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11069ba0 push edx */
  push32((uint32_t)(EDX));
  /* 11069ba1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11069ba4 push eax */
  push32((uint32_t)(EAX));
  /* 11069ba5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11069ba7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11069baa push ecx */
  push32((uint32_t)(ECX));
  /* 11069bab push 1 */
  push32((uint32_t)(0x1u));
  /* 11069bad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11069bb0 push edx */
  push32((uint32_t)(EDX));
  /* 11069bb1 call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x11069bb7u);
  /* 11069bb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11069bba:;
  /* 11069bba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11069bbd jmp 0x11069bc1 */
  goto L_11069bc1;
L_11069bbf:;
  /* 11069bbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11069bc1:;
  /* 11069bc1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11069bc4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11069bc7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11069bce pop edi */
  EDI = (pop32());
  /* 11069bcf pop esi */
  ESI = (pop32());
  /* 11069bd0 pop ebx */
  EBX = (pop32());
  /* 11069bd1 mov esp, ebp */
  ESP = (EBP);
  /* 11069bd3 pop ebp */
  EBP = (pop32());
  /* 11069bd4 ret  */
  ESPCHK(0x11069a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10019be0 @ 0x11069be0 (398 bytes, 140 insns) */
void f_11069be0(void) {
  FTRACE(0x11069be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11069be1 mov ebp, esp */
  EBP = (ESP);
  /* 11069be3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11069be5 push 0x11082d38 */
  push32((uint32_t)(0x11082d38u));
  /* 11069bea push 0x11063708 */
  push32((uint32_t)(0x11063708u));
  /* 11069bef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11069bf5 push eax */
  push32((uint32_t)(EAX));
  /* 11069bf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11069bfd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069c00 push ebx */
  push32((uint32_t)(EBX));
  /* 11069c01 push esi */
  push32((uint32_t)(ESI));
  /* 11069c02 push edi */
  push32((uint32_t)(EDI));
  /* 11069c03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11069c06 cmp dword ptr [0x11086af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069c0d jne 0x11069c52 */
  if (!C.zf) goto L_11069c52;
  /* 11069c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11069c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069c13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11069c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069c17 call dword ptr [0x110892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892e4))), 0x11069c1du);
  /* 11069c1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11069c1f je 0x11069c2d */
  if (C.zf) goto L_11069c2d;
  /* 11069c21 mov dword ptr [0x11086af0], 1 */
  w32((uint32_t)(0x11086af0), (0x1u));
  /* 11069c2b jmp 0x11069c52 */
  goto L_11069c52;
L_11069c2d:;
  /* 11069c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11069c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11069c31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11069c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069c35 call dword ptr [0x110892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892fc))), 0x11069c3bu);
  /* 11069c3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11069c3d je 0x11069c4b */
  if (C.zf) goto L_11069c4b;
  /* 11069c3f mov dword ptr [0x11086af0], 2 */
  w32((uint32_t)(0x11086af0), (0x2u));
  /* 11069c49 jmp 0x11069c52 */
  goto L_11069c52;
L_11069c4b:;
  /* 11069c4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069c4d jmp 0x11069d71 */
  goto L_11069d71;
L_11069c52:;
  /* 11069c52 cmp dword ptr [0x11086af0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11086af0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069c59 jne 0x11069c76 */
  if (!C.zf) goto L_11069c76;
  /* 11069c5b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11069c5e push eax */
  push32((uint32_t)(EAX));
  /* 11069c5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11069c62 push ecx */
  push32((uint32_t)(ECX));
  /* 11069c63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11069c66 push edx */
  push32((uint32_t)(EDX));
  /* 11069c67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069c6a push eax */
  push32((uint32_t)(EAX));
  /* 11069c6b call dword ptr [0x110892fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892fc))), 0x11069c71u);
  /* 11069c71 jmp 0x11069d71 */
  goto L_11069d71;
L_11069c76:;
  /* 11069c76 cmp dword ptr [0x11086af0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11086af0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069c7d jne 0x11069d6f */
  if (!C.zf) goto L_11069d6f;
  /* 11069c83 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069c87 jne 0x11069c92 */
  if (!C.zf) goto L_11069c92;
  /* 11069c89 mov ecx, dword ptr [0x110869a0] */
  ECX = (r32((uint32_t)(0x110869a0)));
  /* 11069c8f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11069c92:;
  /* 11069c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069c94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069c96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11069c99 push edx */
  push32((uint32_t)(EDX));
  /* 11069c9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069c9d push eax */
  push32((uint32_t)(EAX));
  /* 11069c9e call dword ptr [0x110892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892e4))), 0x11069ca4u);
  /* 11069ca4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11069ca7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069cab jne 0x11069cb4 */
  if (!C.zf) goto L_11069cb4;
  /* 11069cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069caf jmp 0x11069d71 */
  goto L_11069d71;
L_11069cb4:;
  /* 11069cb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11069cbb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11069cbe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11069cc0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069cc3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11069cc5 call 0x1105d7a0 */
  push32(0x11069ccau); f_1105d7a0();
  /* 11069cca mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11069ccd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11069cd0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11069cd3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11069cd6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11069cdd jmp 0x11069cf6 */
  goto L_11069cf6;
  /* 11069cdf mov eax, 1 */
  EAX = (0x1u);
  /* 11069ce4 ret  */
  ESPCHK(0x11069be0u, _esp0);
  ESP += 4; return;
  /* 11069ce5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11069ce8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11069cef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11069cf6:;
  /* 11069cf6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069cfa jne 0x11069d00 */
  if (!C.zf) goto L_11069d00;
  /* 11069cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069cfe jmp 0x11069d71 */
  goto L_11069d71;
L_11069d00:;
  /* 11069d00 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11069d03 push edx */
  push32((uint32_t)(EDX));
  /* 11069d04 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11069d07 push eax */
  push32((uint32_t)(EAX));
  /* 11069d08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11069d0b push ecx */
  push32((uint32_t)(ECX));
  /* 11069d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069d0f push edx */
  push32((uint32_t)(EDX));
  /* 11069d10 call dword ptr [0x110892e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892e4))), 0x11069d16u);
  /* 11069d16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11069d18 jne 0x11069d1e */
  if (!C.zf) goto L_11069d1e;
  /* 11069d1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069d1c jmp 0x11069d71 */
  goto L_11069d71;
L_11069d1e:;
  /* 11069d1e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069d22 jne 0x11069d46 */
  if (!C.zf) goto L_11069d46;
  /* 11069d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11069d2c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11069d2e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11069d31 push eax */
  push32((uint32_t)(EAX));
  /* 11069d32 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11069d37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11069d3a push ecx */
  push32((uint32_t)(ECX));
  /* 11069d3b call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x11069d41u);
  /* 11069d41 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11069d44 jmp 0x11069d6a */
  goto L_11069d6a;
L_11069d46:;
  /* 11069d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11069d4a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11069d4d push edx */
  push32((uint32_t)(EDX));
  /* 11069d4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11069d51 push eax */
  push32((uint32_t)(EAX));
  /* 11069d52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11069d54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11069d57 push ecx */
  push32((uint32_t)(ECX));
  /* 11069d58 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11069d5d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11069d60 push edx */
  push32((uint32_t)(EDX));
  /* 11069d61 call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x11069d67u);
  /* 11069d67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11069d6a:;
  /* 11069d6a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11069d6d jmp 0x11069d71 */
  goto L_11069d71;
L_11069d6f:;
  /* 11069d6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11069d71:;
  /* 11069d71 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11069d74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11069d77 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11069d7e pop edi */
  EDI = (pop32());
  /* 11069d7f pop esi */
  ESI = (pop32());
  /* 11069d80 pop ebx */
  EBX = (pop32());
  /* 11069d81 mov esp, ebp */
  ESP = (EBP);
  /* 11069d83 pop ebp */
  EBP = (pop32());
  /* 11069d84 ret  */
  ESPCHK(0x11069be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019d90 @ 0x11069d90 (11 bytes, 6 insns) */
void f_11069d90(void) {
  FTRACE(0x11069d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11069d91 mov ebp, esp */
  EBP = (ESP);
  /* 11069d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069d96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069d99 pop ebp */
  EBP = (pop32());
  /* 11069d9a ret  */
  ESPCHK(0x11069d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10019da0 @ 0x11069da0 (147 bytes, 43 insns) */
void f_11069da0(void) {
  FTRACE(0x11069da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11069da1 mov ebp, esp */
  EBP = (ESP);
  /* 11069da3 push ecx */
  push32((uint32_t)(ECX));
  /* 11069da4 cmp dword ptr [0x11086990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069dab jne 0x11069dc7 */
  if (!C.zf) goto L_11069dc7;
  /* 11069dad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069db1 jl 0x11069dc2 */
  if ((C.sf!=C.of)) goto L_11069dc2;
  /* 11069db3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069db7 jg 0x11069dc2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11069dc2;
  /* 11069db9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069dbc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069dbf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11069dc2:;
  /* 11069dc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069dc5 jmp 0x11069e2f */
  goto L_11069e2f;
L_11069dc7:;
  /* 11069dc7 push 0x11086b1c */
  push32((uint32_t)(0x11086b1cu));
  /* 11069dcc call dword ptr [0x110893b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893b4))), 0x11069dd2u);
  /* 11069dd2 cmp dword ptr [0x11086b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069dd9 je 0x11069df9 */
  if (C.zf) goto L_11069df9;
  /* 11069ddb push 0x11086b1c */
  push32((uint32_t)(0x11086b1cu));
  /* 11069de0 call dword ptr [0x110893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893a4))), 0x11069de6u);
  /* 11069de6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11069de8 call 0x1105e000 */
  push32(0x11069dedu); f_1105e000();
  /* 11069ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069df0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11069df7 jmp 0x11069e00 */
  goto L_11069e00;
L_11069df9:;
  /* 11069df9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11069e00:;
  /* 11069e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11069e04 call 0x11069e40 */
  push32(0x11069e09u); f_11069e40();
  /* 11069e09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069e0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11069e0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069e13 je 0x11069e21 */
  if (C.zf) goto L_11069e21;
  /* 11069e15 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11069e17 call 0x1105e0a0 */
  push32(0x11069e1cu); f_1105e0a0();
  /* 11069e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069e1f jmp 0x11069e2c */
  goto L_11069e2c;
L_11069e21:;
  /* 11069e21 push 0x11086b1c */
  push32((uint32_t)(0x11086b1cu));
  /* 11069e26 call dword ptr [0x110893a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110893a4))), 0x11069e2cu);
L_11069e2c:;
  /* 11069e2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11069e2f:;
  /* 11069e2f mov esp, ebp */
  ESP = (EBP);
  /* 11069e31 pop ebp */
  EBP = (pop32());
  /* 11069e32 ret  */
  ESPCHK(0x11069da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019e40 @ 0x11069e40 (299 bytes, 91 insns) */
void f_11069e40(void) {
  FTRACE(0x11069e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11069e41 mov ebp, esp */
  EBP = (ESP);
  /* 11069e43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11069e46 cmp dword ptr [0x11086990], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086990))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069e4d jne 0x11069e6c */
  if (!C.zf) goto L_11069e6c;
  /* 11069e4f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069e53 jl 0x11069e64 */
  if ((C.sf!=C.of)) goto L_11069e64;
  /* 11069e55 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069e59 jg 0x11069e64 */
  if ((!C.zf&&C.sf==C.of)) goto L_11069e64;
  /* 11069e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069e5e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069e61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11069e64:;
  /* 11069e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069e67 jmp 0x11069f67 */
  goto L_11069f67;
L_11069e6c:;
  /* 11069e6c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069e73 jge 0x11069eb3 */
  if ((C.sf==C.of)) goto L_11069eb3;
  /* 11069e75 cmp dword ptr [0x11084ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11084ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069e7c jle 0x11069e91 */
  if ((C.zf||C.sf!=C.of)) goto L_11069e91;
  /* 11069e7e push 1 */
  push32((uint32_t)(0x1u));
  /* 11069e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069e83 push ecx */
  push32((uint32_t)(ECX));
  /* 11069e84 call 0x11060610 */
  push32(0x11069e89u); f_11060610();
  /* 11069e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069e8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11069e8f jmp 0x11069ea5 */
  goto L_11069ea5;
L_11069e91:;
  /* 11069e91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069e94 mov eax, dword ptr [0x11084c98] */
  EAX = (r32((uint32_t)(0x11084c98)));
  /* 11069e99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11069e9b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11069e9f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11069ea2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11069ea5:;
  /* 11069ea5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069ea9 jne 0x11069eb3 */
  if (!C.zf) goto L_11069eb3;
  /* 11069eab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069eae jmp 0x11069f67 */
  goto L_11069f67;
L_11069eb3:;
  /* 11069eb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069eb6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11069eb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11069ebf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11069ec5 mov eax, dword ptr [0x11084c98] */
  EAX = (r32((uint32_t)(0x11084c98)));
  /* 11069eca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11069ecc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11069ed0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11069ed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11069ed8 je 0x11069efc */
  if (C.zf) goto L_11069efc;
  /* 11069eda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069edd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11069ee0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11069ee6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11069ee9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11069eec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11069eef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11069ef3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11069efa jmp 0x11069f0d */
  goto L_11069f0d;
L_11069efc:;
  /* 11069efc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11069eff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11069f02 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11069f06 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11069f0d:;
  /* 11069f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 11069f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11069f11 push 3 */
  push32((uint32_t)(0x3u));
  /* 11069f13 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11069f16 push edx */
  push32((uint32_t)(EDX));
  /* 11069f17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11069f1a push eax */
  push32((uint32_t)(EAX));
  /* 11069f1b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11069f1e push ecx */
  push32((uint32_t)(ECX));
  /* 11069f1f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11069f24 mov edx, dword ptr [0x11086990] */
  EDX = (r32((uint32_t)(0x11086990)));
  /* 11069f2a push edx */
  push32((uint32_t)(EDX));
  /* 11069f2b call 0x110629f0 */
  push32(0x11069f30u); f_110629f0();
  /* 11069f30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069f33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11069f36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069f3a jne 0x11069f41 */
  if (!C.zf) goto L_11069f41;
  /* 11069f3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069f3f jmp 0x11069f67 */
  goto L_11069f67;
L_11069f41:;
  /* 11069f41 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069f45 jne 0x11069f51 */
  if (!C.zf) goto L_11069f51;
  /* 11069f47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069f4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11069f4f jmp 0x11069f67 */
  goto L_11069f67;
L_11069f51:;
  /* 11069f51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11069f54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11069f59 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11069f5c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11069f62 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11069f65 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11069f67:;
  /* 11069f67 mov esp, ebp */
  ESP = (EBP);
  /* 11069f69 pop ebp */
  EBP = (pop32());
  /* 11069f6a ret  */
  ESPCHK(0x11069e40u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11069f70 (52 bytes, 19 insns) */
void f_11069f70(void) {
  FTRACE(0x11069f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069f70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11069f74 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11069f78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11069f7a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11069f7e jne 0x11069f89 */
  if (!C.zf) goto L_11069f89;
  /* 11069f80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11069f84 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11069f86 ret 0x10 */
  ESPCHK(0x11069f70u, _esp0);
  ESP += 20; return;
L_11069f89:;
  /* 11069f89 push ebx */
  push32((uint32_t)(EBX));
  /* 11069f8a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11069f8c mov ebx, eax */
  EBX = (EAX);
  /* 11069f8e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11069f92 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11069f96 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069f98 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11069f9c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11069f9e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11069fa0 pop ebx */
  EBX = (pop32());
  /* 11069fa1 ret 0x10 */
  ESPCHK(0x11069f70u, _esp0);
  ESP += 20; return;
}

/* FUN_10019fb0 @ 0x11069fb0 (46 bytes, 18 insns) */
void f_11069fb0(void) {
  FTRACE(0x11069fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11069fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11069fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11069fb4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11069fb6 call 0x1105e000 */
  push32(0x11069fbbu); f_1105e000();
  /* 11069fbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069fbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11069fc1 push eax */
  push32((uint32_t)(EAX));
  /* 11069fc2 call 0x11069fe0 */
  push32(0x11069fc7u); f_11069fe0();
  /* 11069fc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069fca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11069fcd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11069fcf call 0x1105e0a0 */
  push32(0x11069fd4u); f_1105e0a0();
  /* 11069fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11069fd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11069fda mov esp, ebp */
  ESP = (EBP);
  /* 11069fdc pop ebp */
  EBP = (pop32());
  /* 11069fdd ret  */
  ESPCHK(0x11069fb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11069fe0 (198 bytes, 69 insns) */
void f_11069fe0(void) {
  FTRACE(0x11069fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11069fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11069fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11069fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11069fe6 mov eax, dword ptr [0x110867ac] */
  EAX = (r32((uint32_t)(0x110867ac)));
  /* 11069feb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11069fee cmp dword ptr [0x110882a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110882a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11069ff5 jne 0x11069ffe */
  if (!C.zf) goto L_11069ffe;
  /* 11069ff7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11069ff9 jmp 0x1106a0a2 */
  goto L_1106a0a2;
L_11069ffe:;
  /* 11069ffe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a002 jne 0x1106a026 */
  if (!C.zf) goto L_1106a026;
  /* 1106a004 cmp dword ptr [0x110867b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110867b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a00b je 0x1106a026 */
  if (C.zf) goto L_1106a026;
  /* 1106a00d call 0x1106a100 */
  push32(0x1106a012u); f_1106a100();
  /* 1106a012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a014 je 0x1106a01d */
  if (C.zf) goto L_1106a01d;
  /* 1106a016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a018 jmp 0x1106a0a2 */
  goto L_1106a0a2;
L_1106a01d:;
  /* 1106a01d mov ecx, dword ptr [0x110867ac] */
  ECX = (r32((uint32_t)(0x110867ac)));
  /* 1106a023 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1106a026:;
  /* 1106a026 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a02a je 0x1106a0a0 */
  if (C.zf) goto L_1106a0a0;
  /* 1106a02c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a030 je 0x1106a0a0 */
  if (C.zf) goto L_1106a0a0;
  /* 1106a032 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a035 push edx */
  push32((uint32_t)(EDX));
  /* 1106a036 call 0x1105d430 */
  push32(0x1106a03bu); f_1105d430();
  /* 1106a03b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a03e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1106a041:;
  /* 1106a041 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a044 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a047 je 0x1106a0a0 */
  if (C.zf) goto L_1106a0a0;
  /* 1106a049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a04c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106a04e push edx */
  push32((uint32_t)(EDX));
  /* 1106a04f call 0x1105d430 */
  push32(0x1106a054u); f_1105d430();
  /* 1106a054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a057 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a05a jbe 0x1106a095 */
  if ((C.cf||C.zf)) goto L_1106a095;
  /* 1106a05c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a05f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1106a061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a064 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 1106a068 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a06b jne 0x1106a095 */
  if (!C.zf) goto L_1106a095;
  /* 1106a06d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a070 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a071 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a074 push edx */
  push32((uint32_t)(EDX));
  /* 1106a075 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a078 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1106a07a push ecx */
  push32((uint32_t)(ECX));
  /* 1106a07b call 0x1106a0b0 */
  push32(0x1106a080u); f_1106a0b0();
  /* 1106a080 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a083 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a085 jne 0x1106a095 */
  if (!C.zf) goto L_1106a095;
  /* 1106a087 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a08a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1106a08c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a08f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 1106a093 jmp 0x1106a0a2 */
  goto L_1106a0a2;
L_1106a095:;
  /* 1106a095 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a098 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a09b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1106a09e jmp 0x1106a041 */
  goto L_1106a041;
L_1106a0a0:;
  /* 1106a0a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1106a0a2:;
  /* 1106a0a2 mov esp, ebp */
  ESP = (EBP);
  /* 1106a0a4 pop ebp */
  EBP = (pop32());
  /* 1106a0a5 ret  */
  ESPCHK(0x11069fe0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x1106a0b0 (79 bytes, 32 insns) */
void f_1106a0b0(void) {
  FTRACE(0x1106a0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106a0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1106a0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1106a0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a0b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a0b8 jne 0x1106a0be */
  if (!C.zf) goto L_1106a0be;
  /* 1106a0ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a0bc jmp 0x1106a0fb */
  goto L_1106a0fb;
L_1106a0be:;
  /* 1106a0be mov eax, dword ptr [0x11087e64] */
  EAX = (r32((uint32_t)(0x11087e64)));
  /* 1106a0c3 push eax */
  push32((uint32_t)(EAX));
  /* 1106a0c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106a0c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a0c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106a0cb push edx */
  push32((uint32_t)(EDX));
  /* 1106a0cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106a0cf push eax */
  push32((uint32_t)(EAX));
  /* 1106a0d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a0d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1106a0d6 mov edx, dword ptr [0x11088104] */
  EDX = (r32((uint32_t)(0x11088104)));
  /* 1106a0dc push edx */
  push32((uint32_t)(EDX));
  /* 1106a0dd call 0x1106a1b0 */
  push32(0x1106a0e2u); f_1106a1b0();
  /* 1106a0e2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a0e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1106a0e8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a0ec jne 0x1106a0f5 */
  if (!C.zf) goto L_1106a0f5;
  /* 1106a0ee mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 1106a0f3 jmp 0x1106a0fb */
  goto L_1106a0fb;
L_1106a0f5:;
  /* 1106a0f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a0f8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1106a0fb:;
  /* 1106a0fb mov esp, ebp */
  ESP = (EBP);
  /* 1106a0fd pop ebp */
  EBP = (pop32());
  /* 1106a0fe ret  */
  ESPCHK(0x1106a0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a100 @ 0x1106a100 (174 bytes, 66 insns) */
void f_1106a100(void) {
  FTRACE(0x1106a100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106a100 push ebp */
  push32((uint32_t)(EBP));
  /* 1106a101 mov ebp, esp */
  EBP = (ESP);
  /* 1106a103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a106 mov eax, dword ptr [0x110867b4] */
  EAX = (r32((uint32_t)(0x110867b4)));
  /* 1106a10b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1106a10e:;
  /* 1106a10e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a111 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a114 je 0x1106a1a8 */
  if (C.zf) goto L_1106a1a8;
  /* 1106a11a push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a11c push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a11e push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a120 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a122 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1106a124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a127 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1106a129 push eax */
  push32((uint32_t)(EAX));
  /* 1106a12a push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a12c push 1 */
  push32((uint32_t)(0x1u));
  /* 1106a12e call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x1106a134u);
  /* 1106a134 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1106a137 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a13b jne 0x1106a142 */
  if (!C.zf) goto L_1106a142;
  /* 1106a13d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106a140 jmp 0x1106a1aa */
  goto L_1106a1aa;
L_1106a142:;
  /* 1106a142 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1106a144 push 0x11082d44 */
  push32((uint32_t)(0x11082d44u));
  /* 1106a149 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a14b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a14e push ecx */
  push32((uint32_t)(ECX));
  /* 1106a14f call 0x1105a600 */
  push32(0x1106a154u); f_1105a600();
  /* 1106a154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a157 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1106a15a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a15e jne 0x1106a165 */
  if (!C.zf) goto L_1106a165;
  /* 1106a160 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106a163 jmp 0x1106a1aa */
  goto L_1106a1aa;
L_1106a165:;
  /* 1106a165 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a167 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a169 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a16c push edx */
  push32((uint32_t)(EDX));
  /* 1106a16d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a170 push eax */
  push32((uint32_t)(EAX));
  /* 1106a171 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1106a173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a176 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106a178 push edx */
  push32((uint32_t)(EDX));
  /* 1106a179 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a17b push 1 */
  push32((uint32_t)(0x1u));
  /* 1106a17d call dword ptr [0x11089378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089378))), 0x1106a183u);
  /* 1106a183 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a185 jne 0x1106a18c */
  if (!C.zf) goto L_1106a18c;
  /* 1106a187 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106a18a jmp 0x1106a1aa */
  goto L_1106a1aa;
L_1106a18c:;
  /* 1106a18c push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a18e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a191 push eax */
  push32((uint32_t)(EAX));
  /* 1106a192 call 0x1106a600 */
  push32(0x1106a197u); f_1106a600();
  /* 1106a197 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a19a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a19d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a1a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1106a1a3 jmp 0x1106a10e */
  goto L_1106a10e;
L_1106a1a8:;
  /* 1106a1a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1106a1aa:;
  /* 1106a1aa mov esp, ebp */
  ESP = (EBP);
  /* 1106a1ac pop ebp */
  EBP = (pop32());
  /* 1106a1ad ret  */
  ESPCHK(0x1106a100u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a1b0 @ 0x1106a1b0 (970 bytes, 340 insns) */
void f_1106a1b0(void) {
  FTRACE(0x1106a1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106a1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1106a1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1106a1b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1106a1b5 push 0x11082d98 */
  push32((uint32_t)(0x11082d98u));
  /* 1106a1ba push 0x11063708 */
  push32((uint32_t)(0x11063708u));
  /* 1106a1bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1106a1c5 push eax */
  push32((uint32_t)(EAX));
  /* 1106a1c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1106a1cd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a1d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1106a1d1 push esi */
  push32((uint32_t)(ESI));
  /* 1106a1d2 push edi */
  push32((uint32_t)(EDI));
  /* 1106a1d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1106a1d6 cmp dword ptr [0x11086af4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11086af4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a1dd jne 0x1106a236 */
  if (!C.zf) goto L_1106a236;
  /* 1106a1df push 1 */
  push32((uint32_t)(0x1u));
  /* 1106a1e1 push 0x110823f4 */
  push32((uint32_t)(0x110823f4u));
  /* 1106a1e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1106a1e8 push 0x110823f4 */
  push32((uint32_t)(0x110823f4u));
  /* 1106a1ed push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a1ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a1f1 call dword ptr [0x110892dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892dc))), 0x1106a1f7u);
  /* 1106a1f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a1f9 je 0x1106a207 */
  if (C.zf) goto L_1106a207;
  /* 1106a1fb mov dword ptr [0x11086af4], 1 */
  w32((uint32_t)(0x11086af4), (0x1u));
  /* 1106a205 jmp 0x1106a236 */
  goto L_1106a236;
L_1106a207:;
  /* 1106a207 push 1 */
  push32((uint32_t)(0x1u));
  /* 1106a209 push 0x110823f0 */
  push32((uint32_t)(0x110823f0u));
  /* 1106a20e push 1 */
  push32((uint32_t)(0x1u));
  /* 1106a210 push 0x110823f0 */
  push32((uint32_t)(0x110823f0u));
  /* 1106a215 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a217 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a219 call dword ptr [0x110892e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892e0))), 0x1106a21fu);
  /* 1106a21f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a221 je 0x1106a22f */
  if (C.zf) goto L_1106a22f;
  /* 1106a223 mov dword ptr [0x11086af4], 2 */
  w32((uint32_t)(0x11086af4), (0x2u));
  /* 1106a22d jmp 0x1106a236 */
  goto L_1106a236;
L_1106a22f:;
  /* 1106a22f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a231 jmp 0x1106a594 */
  goto L_1106a594;
L_1106a236:;
  /* 1106a236 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a23a jle 0x1106a24f */
  if ((C.zf||C.sf!=C.of)) goto L_1106a24f;
  /* 1106a23c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106a23f push eax */
  push32((uint32_t)(EAX));
  /* 1106a240 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106a243 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a244 call 0x1106a5b0 */
  push32(0x1106a249u); f_1106a5b0();
  /* 1106a249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a24c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1106a24f:;
  /* 1106a24f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a253 jle 0x1106a268 */
  if ((C.zf||C.sf!=C.of)) goto L_1106a268;
  /* 1106a255 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1106a258 push edx */
  push32((uint32_t)(EDX));
  /* 1106a259 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1106a25c push eax */
  push32((uint32_t)(EAX));
  /* 1106a25d call 0x1106a5b0 */
  push32(0x1106a262u); f_1106a5b0();
  /* 1106a262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a265 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_1106a268:;
  /* 1106a268 cmp dword ptr [0x11086af4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11086af4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a26f jne 0x1106a294 */
  if (!C.zf) goto L_1106a294;
  /* 1106a271 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1106a274 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a275 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1106a278 push edx */
  push32((uint32_t)(EDX));
  /* 1106a279 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106a27c push eax */
  push32((uint32_t)(EAX));
  /* 1106a27d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106a280 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a281 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106a284 push edx */
  push32((uint32_t)(EDX));
  /* 1106a285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a288 push eax */
  push32((uint32_t)(EAX));
  /* 1106a289 call dword ptr [0x110892e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892e0))), 0x1106a28fu);
  /* 1106a28f jmp 0x1106a594 */
  goto L_1106a594;
L_1106a294:;
  /* 1106a294 cmp dword ptr [0x11086af4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11086af4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a29b jne 0x1106a592 */
  if (!C.zf) goto L_1106a592;
  /* 1106a2a1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a2a5 jne 0x1106a2b0 */
  if (!C.zf) goto L_1106a2b0;
  /* 1106a2a7 mov ecx, dword ptr [0x110869a0] */
  ECX = (r32((uint32_t)(0x110869a0)));
  /* 1106a2ad mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_1106a2b0:;
  /* 1106a2b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a2b4 je 0x1106a2c0 */
  if (C.zf) goto L_1106a2c0;
  /* 1106a2b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a2ba jne 0x1106a43c */
  if (!C.zf) goto L_1106a43c;
L_1106a2c0:;
  /* 1106a2c0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106a2c3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a2c6 jne 0x1106a2d2 */
  if (!C.zf) goto L_1106a2d2;
  /* 1106a2c8 mov eax, 2 */
  EAX = (0x2u);
  /* 1106a2cd jmp 0x1106a594 */
  goto L_1106a594;
L_1106a2d2:;
  /* 1106a2d2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a2d6 jle 0x1106a2e2 */
  if ((C.zf||C.sf!=C.of)) goto L_1106a2e2;
  /* 1106a2d8 mov eax, 1 */
  EAX = (0x1u);
  /* 1106a2dd jmp 0x1106a594 */
  goto L_1106a594;
L_1106a2e2:;
  /* 1106a2e2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a2e6 jle 0x1106a2f2 */
  if ((C.zf||C.sf!=C.of)) goto L_1106a2f2;
  /* 1106a2e8 mov eax, 3 */
  EAX = (0x3u);
  /* 1106a2ed jmp 0x1106a594 */
  goto L_1106a594;
L_1106a2f2:;
  /* 1106a2f2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 1106a2f5 push eax */
  push32((uint32_t)(EAX));
  /* 1106a2f6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1106a2f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a2fa call dword ptr [0x11089338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11089338))), 0x1106a300u);
  /* 1106a300 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a302 jne 0x1106a30b */
  if (!C.zf) goto L_1106a30b;
  /* 1106a304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a306 jmp 0x1106a594 */
  goto L_1106a594;
L_1106a30b:;
  /* 1106a30b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a30f jne 0x1106a317 */
  if (!C.zf) goto L_1106a317;
  /* 1106a311 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a315 je 0x1106a344 */
  if (C.zf) goto L_1106a344;
L_1106a317:;
  /* 1106a317 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a31b jne 0x1106a323 */
  if (!C.zf) goto L_1106a323;
  /* 1106a31d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a321 je 0x1106a344 */
  if (C.zf) goto L_1106a344;
L_1106a323:;
  /* 1106a323 push 0x11082d58 */
  push32((uint32_t)(0x11082d58u));
  /* 1106a328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a32a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1106a32f push 0x11082d50 */
  push32((uint32_t)(0x11082d50u));
  /* 1106a334 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a336 call 0x110596c0 */
  push32(0x1106a33bu); f_110596c0();
  /* 1106a33b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a33e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a341 jne 0x1106a344 */
  if (!C.zf) goto L_1106a344;
  /* 1106a343 int3  */
  x86_unimpl("int3 @ 0x1106a343");
L_1106a344:;
  /* 1106a344 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106a346 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106a348 jne 0x1106a30b */
  if (!C.zf) goto L_1106a30b;
  /* 1106a34a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a34e jle 0x1106a3c3 */
  if ((C.zf||C.sf!=C.of)) goto L_1106a3c3;
  /* 1106a350 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a354 jae 0x1106a360 */
  if (!C.cf) goto L_1106a360;
  /* 1106a356 mov eax, 3 */
  EAX = (0x3u);
  /* 1106a35b jmp 0x1106a594 */
  goto L_1106a594;
L_1106a360:;
  /* 1106a360 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 1106a363 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 1106a366 jmp 0x1106a371 */
  goto L_1106a371;
L_1106a368:;
  /* 1106a368 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a36b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a36e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_1106a371:;
  /* 1106a371 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a374 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a376 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1106a378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a37a je 0x1106a3b9 */
  if (C.zf) goto L_1106a3b9;
  /* 1106a37c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a37f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106a381 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1106a384 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106a386 je 0x1106a3b9 */
  if (C.zf) goto L_1106a3b9;
  /* 1106a388 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106a38b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106a38d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1106a38f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a394 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1106a396 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a398 jl 0x1106a3b7 */
  if ((C.sf!=C.of)) goto L_1106a3b7;
  /* 1106a39a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106a39d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106a39f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1106a3a1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a3a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106a3a6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1106a3a9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a3ab jg 0x1106a3b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1106a3b7;
  /* 1106a3ad mov eax, 2 */
  EAX = (0x2u);
  /* 1106a3b2 jmp 0x1106a594 */
  goto L_1106a594;
L_1106a3b7:;
  /* 1106a3b7 jmp 0x1106a368 */
  goto L_1106a368;
L_1106a3b9:;
  /* 1106a3b9 mov eax, 3 */
  EAX = (0x3u);
  /* 1106a3be jmp 0x1106a594 */
  goto L_1106a594;
L_1106a3c3:;
  /* 1106a3c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a3c7 jle 0x1106a43c */
  if ((C.zf||C.sf!=C.of)) goto L_1106a43c;
  /* 1106a3c9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a3cd jae 0x1106a3d9 */
  if (!C.cf) goto L_1106a3d9;
  /* 1106a3cf mov eax, 1 */
  EAX = (0x1u);
  /* 1106a3d4 jmp 0x1106a594 */
  goto L_1106a594;
L_1106a3d9:;
  /* 1106a3d9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1106a3dc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1106a3df jmp 0x1106a3ea */
  goto L_1106a3ea;
L_1106a3e1:;
  /* 1106a3e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a3e4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a3e7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1106a3ea:;
  /* 1106a3ea mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a3ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106a3ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1106a3f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106a3f3 je 0x1106a432 */
  if (C.zf) goto L_1106a432;
  /* 1106a3f5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a3f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106a3fa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1106a3fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1106a3ff je 0x1106a432 */
  if (C.zf) goto L_1106a432;
  /* 1106a401 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1106a404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a406 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1106a408 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a40b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1106a40d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1106a40f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a411 jl 0x1106a430 */
  if ((C.sf!=C.of)) goto L_1106a430;
  /* 1106a413 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1106a416 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106a418 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1106a41a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1106a41d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a41f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1106a422 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a424 jg 0x1106a430 */
  if ((!C.zf&&C.sf==C.of)) goto L_1106a430;
  /* 1106a426 mov eax, 2 */
  EAX = (0x2u);
  /* 1106a42b jmp 0x1106a594 */
  goto L_1106a594;
L_1106a430:;
  /* 1106a430 jmp 0x1106a3e1 */
  goto L_1106a3e1;
L_1106a432:;
  /* 1106a432 mov eax, 1 */
  EAX = (0x1u);
  /* 1106a437 jmp 0x1106a594 */
  goto L_1106a594;
L_1106a43c:;
  /* 1106a43c push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a43e push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a440 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106a443 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a444 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106a447 push edx */
  push32((uint32_t)(EDX));
  /* 1106a448 push 9 */
  push32((uint32_t)(0x9u));
  /* 1106a44a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1106a44d push eax */
  push32((uint32_t)(EAX));
  /* 1106a44e call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x1106a454u);
  /* 1106a454 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1106a457 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a45b jne 0x1106a464 */
  if (!C.zf) goto L_1106a464;
  /* 1106a45d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a45f jmp 0x1106a594 */
  goto L_1106a594;
L_1106a464:;
  /* 1106a464 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1106a46b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1106a46e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1106a470 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a473 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1106a475 call 0x1105d7a0 */
  push32(0x1106a47au); f_1105d7a0();
  /* 1106a47a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1106a47d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1106a480 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 1106a483 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1106a486 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1106a48d jmp 0x1106a4a6 */
  goto L_1106a4a6;
  /* 1106a48f mov eax, 1 */
  EAX = (0x1u);
  /* 1106a494 ret  */
  ESPCHK(0x1106a1b0u, _esp0);
  ESP += 4; return;
  /* 1106a495 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1106a498 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1106a49f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1106a4a6:;
  /* 1106a4a6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a4aa jne 0x1106a4b3 */
  if (!C.zf) goto L_1106a4b3;
  /* 1106a4ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a4ae jmp 0x1106a594 */
  goto L_1106a594;
L_1106a4b3:;
  /* 1106a4b3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1106a4b6 push edx */
  push32((uint32_t)(EDX));
  /* 1106a4b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1106a4ba push eax */
  push32((uint32_t)(EAX));
  /* 1106a4bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1106a4be push ecx */
  push32((uint32_t)(ECX));
  /* 1106a4bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1106a4c2 push edx */
  push32((uint32_t)(EDX));
  /* 1106a4c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1106a4c5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1106a4c8 push eax */
  push32((uint32_t)(EAX));
  /* 1106a4c9 call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x1106a4cfu);
  /* 1106a4cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a4d1 jne 0x1106a4da */
  if (!C.zf) goto L_1106a4da;
  /* 1106a4d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a4d5 jmp 0x1106a594 */
  goto L_1106a594;
L_1106a4da:;
  /* 1106a4da push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a4dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1106a4de mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1106a4e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a4e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1106a4e5 push edx */
  push32((uint32_t)(EDX));
  /* 1106a4e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 1106a4e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1106a4eb push eax */
  push32((uint32_t)(EAX));
  /* 1106a4ec call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x1106a4f2u);
  /* 1106a4f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1106a4f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a4f9 jne 0x1106a502 */
  if (!C.zf) goto L_1106a502;
  /* 1106a4fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a4fd jmp 0x1106a594 */
  goto L_1106a594;
L_1106a502:;
  /* 1106a502 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1106a509 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1106a50c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1106a50e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a511 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1106a513 call 0x1105d7a0 */
  push32(0x1106a518u); f_1105d7a0();
  /* 1106a518 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1106a51b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1106a51e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 1106a521 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1106a524 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1106a52b jmp 0x1106a544 */
  goto L_1106a544;
  /* 1106a52d mov eax, 1 */
  EAX = (0x1u);
  /* 1106a532 ret  */
  ESPCHK(0x1106a1b0u, _esp0);
  ESP += 4; return;
  /* 1106a533 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1106a536 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1106a53d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1106a544:;
  /* 1106a544 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a548 jne 0x1106a54e */
  if (!C.zf) goto L_1106a54e;
  /* 1106a54a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a54c jmp 0x1106a594 */
  goto L_1106a594;
L_1106a54e:;
  /* 1106a54e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1106a551 push edx */
  push32((uint32_t)(EDX));
  /* 1106a552 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1106a555 push eax */
  push32((uint32_t)(EAX));
  /* 1106a556 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1106a559 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a55a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1106a55d push edx */
  push32((uint32_t)(EDX));
  /* 1106a55e push 1 */
  push32((uint32_t)(0x1u));
  /* 1106a560 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1106a563 push eax */
  push32((uint32_t)(EAX));
  /* 1106a564 call dword ptr [0x1108932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1108932c))), 0x1106a56au);
  /* 1106a56a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a56c jne 0x1106a572 */
  if (!C.zf) goto L_1106a572;
  /* 1106a56e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a570 jmp 0x1106a594 */
  goto L_1106a594;
L_1106a572:;
  /* 1106a572 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1106a575 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a576 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1106a579 push edx */
  push32((uint32_t)(EDX));
  /* 1106a57a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1106a57d push eax */
  push32((uint32_t)(EAX));
  /* 1106a57e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1106a581 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a582 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106a585 push edx */
  push32((uint32_t)(EDX));
  /* 1106a586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a589 push eax */
  push32((uint32_t)(EAX));
  /* 1106a58a call dword ptr [0x110892dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892dc))), 0x1106a590u);
  /* 1106a590 jmp 0x1106a594 */
  goto L_1106a594;
L_1106a592:;
  /* 1106a592 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1106a594:;
  /* 1106a594 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 1106a597 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106a59a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1106a5a1 pop edi */
  EDI = (pop32());
  /* 1106a5a2 pop esi */
  ESI = (pop32());
  /* 1106a5a3 pop ebx */
  EBX = (pop32());
  /* 1106a5a4 mov esp, ebp */
  ESP = (EBP);
  /* 1106a5a6 pop ebp */
  EBP = (pop32());
  /* 1106a5a7 ret  */
  ESPCHK(0x1106a1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a5b0 @ 0x1106a5b0 (80 bytes, 32 insns) */
void f_1106a5b0(void) {
  FTRACE(0x1106a5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106a5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1106a5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1106a5b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a5b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106a5b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1106a5bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a5bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1106a5c2:;
  /* 1106a5c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a5c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a5c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a5cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1106a5ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106a5d0 je 0x1106a5e7 */
  if (C.zf) goto L_1106a5e7;
  /* 1106a5d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a5d5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1106a5d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106a5da je 0x1106a5e7 */
  if (C.zf) goto L_1106a5e7;
  /* 1106a5dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a5df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a5e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1106a5e5 jmp 0x1106a5c2 */
  goto L_1106a5c2;
L_1106a5e7:;
  /* 1106a5e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a5ea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1106a5ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106a5ef jne 0x1106a5f9 */
  if (!C.zf) goto L_1106a5f9;
  /* 1106a5f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a5f4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a5f7 jmp 0x1106a5fc */
  goto L_1106a5fc;
L_1106a5f9:;
  /* 1106a5f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1106a5fc:;
  /* 1106a5fc mov esp, ebp */
  ESP = (EBP);
  /* 1106a5fe pop ebp */
  EBP = (pop32());
  /* 1106a5ff ret  */
  ESPCHK(0x1106a5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a600 @ 0x1106a600 (736 bytes, 224 insns) */
void f_1106a600(void) {
  FTRACE(0x1106a600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106a600 push ebp */
  push32((uint32_t)(EBP));
  /* 1106a601 mov ebp, esp */
  EBP = (ESP);
  /* 1106a603 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a606 push esi */
  push32((uint32_t)(ESI));
  /* 1106a607 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a60b je 0x1106a62c */
  if (C.zf) goto L_1106a62c;
  /* 1106a60d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1106a60f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a612 push eax */
  push32((uint32_t)(EAX));
  /* 1106a613 call 0x1106aa50 */
  push32(0x1106a618u); f_1106aa50();
  /* 1106a618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a61b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1106a61e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a622 je 0x1106a62c */
  if (C.zf) goto L_1106a62c;
  /* 1106a624 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a627 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a62a jne 0x1106a634 */
  if (!C.zf) goto L_1106a634;
L_1106a62c:;
  /* 1106a62c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106a62f jmp 0x1106a8db */
  goto L_1106a8db;
L_1106a634:;
  /* 1106a634 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106a637 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1106a63b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1106a63d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a63f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1106a640 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1106a643 mov ecx, dword ptr [0x110867ac] */
  ECX = (r32((uint32_t)(0x110867ac)));
  /* 1106a649 cmp ecx, dword ptr [0x110867b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110867b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a64f jne 0x1106a665 */
  if (!C.zf) goto L_1106a665;
  /* 1106a651 mov edx, dword ptr [0x110867ac] */
  EDX = (r32((uint32_t)(0x110867ac)));
  /* 1106a657 push edx */
  push32((uint32_t)(EDX));
  /* 1106a658 call 0x1106a960 */
  push32(0x1106a65du); f_1106a960();
  /* 1106a65d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a660 mov dword ptr [0x110867ac], eax */
  w32((uint32_t)(0x110867ac), (EAX));
L_1106a665:;
  /* 1106a665 cmp dword ptr [0x110867ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110867ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a66c jne 0x1106a725 */
  if (!C.zf) goto L_1106a725;
  /* 1106a672 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a676 je 0x1106a697 */
  if (C.zf) goto L_1106a697;
  /* 1106a678 cmp dword ptr [0x110867b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110867b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a67f je 0x1106a697 */
  if (C.zf) goto L_1106a697;
  /* 1106a681 call 0x1106a100 */
  push32(0x1106a686u); f_1106a100();
  /* 1106a686 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a688 je 0x1106a692 */
  if (C.zf) goto L_1106a692;
  /* 1106a68a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106a68d jmp 0x1106a8db */
  goto L_1106a8db;
L_1106a692:;
  /* 1106a692 jmp 0x1106a725 */
  goto L_1106a725;
L_1106a697:;
  /* 1106a697 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a69b je 0x1106a6a4 */
  if (C.zf) goto L_1106a6a4;
  /* 1106a69d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a69f jmp 0x1106a8db */
  goto L_1106a8db;
L_1106a6a4:;
  /* 1106a6a4 cmp dword ptr [0x110867ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110867ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a6ab jne 0x1106a6e4 */
  if (!C.zf) goto L_1106a6e4;
  /* 1106a6ad push 0x87 */
  push32((uint32_t)(0x87u));
  /* 1106a6b2 push 0x11082db0 */
  push32((uint32_t)(0x11082db0u));
  /* 1106a6b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a6b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 1106a6bb call 0x1105a600 */
  push32(0x1106a6c0u); f_1105a600();
  /* 1106a6c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a6c3 mov dword ptr [0x110867ac], eax */
  w32((uint32_t)(0x110867ac), (EAX));
  /* 1106a6c8 cmp dword ptr [0x110867ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110867ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a6cf jne 0x1106a6d9 */
  if (!C.zf) goto L_1106a6d9;
  /* 1106a6d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106a6d4 jmp 0x1106a8db */
  goto L_1106a8db;
L_1106a6d9:;
  /* 1106a6d9 mov eax, dword ptr [0x110867ac] */
  EAX = (r32((uint32_t)(0x110867ac)));
  /* 1106a6de mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1106a6e4:;
  /* 1106a6e4 cmp dword ptr [0x110867b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110867b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a6eb jne 0x1106a725 */
  if (!C.zf) goto L_1106a725;
  /* 1106a6ed push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 1106a6f2 push 0x11082db0 */
  push32((uint32_t)(0x11082db0u));
  /* 1106a6f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a6f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 1106a6fb call 0x1105a600 */
  push32(0x1106a700u); f_1105a600();
  /* 1106a700 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a703 mov dword ptr [0x110867b4], eax */
  w32((uint32_t)(0x110867b4), (EAX));
  /* 1106a708 cmp dword ptr [0x110867b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110867b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a70f jne 0x1106a719 */
  if (!C.zf) goto L_1106a719;
  /* 1106a711 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106a714 jmp 0x1106a8db */
  goto L_1106a8db;
L_1106a719:;
  /* 1106a719 mov ecx, dword ptr [0x110867b4] */
  ECX = (r32((uint32_t)(0x110867b4)));
  /* 1106a71f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_1106a725:;
  /* 1106a725 mov edx, dword ptr [0x110867ac] */
  EDX = (r32((uint32_t)(0x110867ac)));
  /* 1106a72b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1106a72e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106a731 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a734 push eax */
  push32((uint32_t)(EAX));
  /* 1106a735 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a738 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a739 call 0x1106a8e0 */
  push32(0x1106a73eu); f_1106a8e0();
  /* 1106a73e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a741 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1106a744 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a748 jl 0x1106a7e1 */
  if ((C.sf!=C.of)) goto L_1106a7e1;
  /* 1106a74e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a751 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a754 je 0x1106a7e1 */
  if (C.zf) goto L_1106a7e1;
  /* 1106a75a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a75e je 0x1106a7d3 */
  if (C.zf) goto L_1106a7d3;
  /* 1106a760 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a762 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a765 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a768 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1106a76b push edx */
  push32((uint32_t)(EDX));
  /* 1106a76c call 0x1105b090 */
  push32(0x1106a771u); f_1105b090();
  /* 1106a771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a774 jmp 0x1106a77f */
  goto L_1106a77f;
L_1106a776:;
  /* 1106a776 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a779 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a77c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1106a77f:;
  /* 1106a77f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a782 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a785 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a789 je 0x1106a7a0 */
  if (C.zf) goto L_1106a7a0;
  /* 1106a78b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a78e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a791 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a794 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a797 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 1106a79b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1106a79e jmp 0x1106a776 */
  goto L_1106a776;
L_1106a7a0:;
  /* 1106a7a0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 1106a7a5 push 0x11082db0 */
  push32((uint32_t)(0x11082db0u));
  /* 1106a7aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a7ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a7af shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1106a7b2 push eax */
  push32((uint32_t)(EAX));
  /* 1106a7b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a7b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a7b7 call 0x1105aa90 */
  push32(0x1106a7bcu); f_1105aa90();
  /* 1106a7bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a7bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1106a7c2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a7c6 je 0x1106a7d1 */
  if (C.zf) goto L_1106a7d1;
  /* 1106a7c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a7cb mov dword ptr [0x110867ac], edx */
  w32((uint32_t)(0x110867ac), (EDX));
L_1106a7d1:;
  /* 1106a7d1 jmp 0x1106a7df */
  goto L_1106a7df;
L_1106a7d3:;
  /* 1106a7d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a7d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a7d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a7dc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1106a7df:;
  /* 1106a7df jmp 0x1106a854 */
  goto L_1106a854;
L_1106a7e1:;
  /* 1106a7e1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a7e5 jne 0x1106a84d */
  if (!C.zf) goto L_1106a84d;
  /* 1106a7e7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a7eb jge 0x1106a7f5 */
  if ((C.sf==C.of)) goto L_1106a7f5;
  /* 1106a7ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a7f0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1106a7f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1106a7f5:;
  /* 1106a7f5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1106a7fa push 0x11082db0 */
  push32((uint32_t)(0x11082db0u));
  /* 1106a7ff push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a801 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a804 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1106a80b push edx */
  push32((uint32_t)(EDX));
  /* 1106a80c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a80f push eax */
  push32((uint32_t)(EAX));
  /* 1106a810 call 0x1105aa90 */
  push32(0x1106a815u); f_1105aa90();
  /* 1106a815 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a818 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1106a81b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a81f jne 0x1106a829 */
  if (!C.zf) goto L_1106a829;
  /* 1106a821 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106a824 jmp 0x1106a8db */
  goto L_1106a8db;
L_1106a829:;
  /* 1106a829 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a82c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a82f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a832 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1106a835 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a838 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a83b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 1106a843 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a846 mov dword ptr [0x110867ac], eax */
  w32((uint32_t)(0x110867ac), (EAX));
  /* 1106a84b jmp 0x1106a854 */
  goto L_1106a854;
L_1106a84d:;
  /* 1106a84d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a84f jmp 0x1106a8db */
  goto L_1106a8db;
L_1106a854:;
  /* 1106a854 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a858 je 0x1106a8d9 */
  if (C.zf) goto L_1106a8d9;
  /* 1106a85a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1106a85f push 0x11082db0 */
  push32((uint32_t)(0x11082db0u));
  /* 1106a864 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a866 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a869 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a86a call 0x1105d430 */
  push32(0x1106a86fu); f_1105d430();
  /* 1106a86f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a872 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a875 push eax */
  push32((uint32_t)(EAX));
  /* 1106a876 call 0x1105a600 */
  push32(0x1106a87bu); f_1105a600();
  /* 1106a87b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a87e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1106a881 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a885 je 0x1106a8d9 */
  if (C.zf) goto L_1106a8d9;
  /* 1106a887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a88a push edx */
  push32((uint32_t)(EDX));
  /* 1106a88b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106a88e push eax */
  push32((uint32_t)(EAX));
  /* 1106a88f call 0x1105d5b0 */
  push32(0x1106a894u); f_1105d5b0();
  /* 1106a894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a897 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1106a89a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a89d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106a8a0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a8a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1106a8a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a8a8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1106a8ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a8ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a8b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1106a8b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1106a8b7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1106a8b9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a8bb not edx */
  EDX = (~(EDX));
  /* 1106a8bd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1106a8c0 push edx */
  push32((uint32_t)(EDX));
  /* 1106a8c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106a8c4 push eax */
  push32((uint32_t)(EAX));
  /* 1106a8c5 call dword ptr [0x110892d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110892d8))), 0x1106a8cbu);
  /* 1106a8cb push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a8cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106a8d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a8d1 call 0x1105b090 */
  push32(0x1106a8d6u); f_1105b090();
  /* 1106a8d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106a8d9:;
  /* 1106a8d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1106a8db:;
  /* 1106a8db pop esi */
  ESI = (pop32());
  /* 1106a8dc mov esp, ebp */
  ESP = (EBP);
  /* 1106a8de pop ebp */
  EBP = (pop32());
  /* 1106a8df ret  */
  ESPCHK(0x1106a600u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x1106a8e0 (124 bytes, 47 insns) */
void f_1106a8e0(void) {
  FTRACE(0x1106a8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106a8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1106a8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1106a8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1106a8e4 mov eax, dword ptr [0x110867ac] */
  EAX = (r32((uint32_t)(0x110867ac)));
  /* 1106a8e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1106a8ec jmp 0x1106a8f7 */
  goto L_1106a8f7;
L_1106a8ee:;
  /* 1106a8ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a8f1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a8f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1106a8f7:;
  /* 1106a8f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a8fa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a8fd je 0x1106a94a */
  if (C.zf) goto L_1106a94a;
  /* 1106a8ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106a902 push eax */
  push32((uint32_t)(EAX));
  /* 1106a903 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a906 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106a908 push edx */
  push32((uint32_t)(EDX));
  /* 1106a909 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a90c push eax */
  push32((uint32_t)(EAX));
  /* 1106a90d call 0x1106a0b0 */
  push32(0x1106a912u); f_1106a0b0();
  /* 1106a912 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1106a917 jne 0x1106a948 */
  if (!C.zf) goto L_1106a948;
  /* 1106a919 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a91c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106a91e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106a921 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 1106a925 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a928 je 0x1106a93a */
  if (C.zf) goto L_1106a93a;
  /* 1106a92a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a92d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1106a92f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106a932 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 1106a936 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106a938 jne 0x1106a948 */
  if (!C.zf) goto L_1106a948;
L_1106a93a:;
  /* 1106a93a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a93d sub eax, dword ptr [0x110867ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110867ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a943 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1106a946 jmp 0x1106a958 */
  goto L_1106a958;
L_1106a948:;
  /* 1106a948 jmp 0x1106a8ee */
  goto L_1106a8ee;
L_1106a94a:;
  /* 1106a94a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106a94d sub eax, dword ptr [0x110867ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110867ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a953 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1106a956 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1106a958:;
  /* 1106a958 mov esp, ebp */
  ESP = (EBP);
  /* 1106a95a pop ebp */
  EBP = (pop32());
  /* 1106a95b ret  */
  ESPCHK(0x1106a8e0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x1106a960 (238 bytes, 80 insns) */
void f_1106a960(void) {
  FTRACE(0x1106a960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106a960 push ebp */
  push32((uint32_t)(EBP));
  /* 1106a961 mov ebp, esp */
  EBP = (ESP);
  /* 1106a963 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106a966 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1106a96d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a970 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1106a973 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a977 jne 0x1106a980 */
  if (!C.zf) goto L_1106a980;
  /* 1106a979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106a97b jmp 0x1106aa4a */
  goto L_1106aa4a;
L_1106a980:;
  /* 1106a980 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a983 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106a985 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a988 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a98b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1106a98e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106a990 je 0x1106a99d */
  if (C.zf) goto L_1106a99d;
  /* 1106a992 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106a995 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a998 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1106a99b jmp 0x1106a980 */
  goto L_1106a980;
L_1106a99d:;
  /* 1106a99d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 1106a9a2 push 0x11082db0 */
  push32((uint32_t)(0x11082db0u));
  /* 1106a9a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a9a9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1106a9ac lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 1106a9b3 push eax */
  push32((uint32_t)(EAX));
  /* 1106a9b4 call 0x1105a600 */
  push32(0x1106a9b9u); f_1105a600();
  /* 1106a9b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a9bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1106a9bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106a9c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1106a9c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a9c9 jne 0x1106a9d5 */
  if (!C.zf) goto L_1106a9d5;
  /* 1106a9cb push 9 */
  push32((uint32_t)(0x9u));
  /* 1106a9cd call 0x11059570 */
  push32(0x1106a9d2u); f_11059570();
  /* 1106a9d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106a9d5:;
  /* 1106a9d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106a9d8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1106a9db:;
  /* 1106a9db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a9de cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106a9e1 je 0x1106aa3e */
  if (C.zf) goto L_1106aa3e;
  /* 1106a9e3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 1106a9e8 push 0x11082db0 */
  push32((uint32_t)(0x11082db0u));
  /* 1106a9ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1106a9ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106a9f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1106a9f4 push edx */
  push32((uint32_t)(EDX));
  /* 1106a9f5 call 0x1105d430 */
  push32(0x1106a9fau); f_1105d430();
  /* 1106a9fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106a9fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aa00 push eax */
  push32((uint32_t)(EAX));
  /* 1106aa01 call 0x1105a600 */
  push32(0x1106aa06u); f_1105a600();
  /* 1106aa06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aa09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106aa0c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1106aa0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106aa11 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106aa14 je 0x1106aa2a */
  if (C.zf) goto L_1106aa2a;
  /* 1106aa16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106aa19 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1106aa1b push ecx */
  push32((uint32_t)(ECX));
  /* 1106aa1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106aa1f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1106aa21 push eax */
  push32((uint32_t)(EAX));
  /* 1106aa22 call 0x1105d5b0 */
  push32(0x1106aa27u); f_1105d5b0();
  /* 1106aa27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1106aa2a:;
  /* 1106aa2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1106aa2d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aa30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1106aa33 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106aa36 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aa39 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1106aa3c jmp 0x1106a9db */
  goto L_1106a9db;
L_1106aa3e:;
  /* 1106aa3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1106aa41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1106aa47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1106aa4a:;
  /* 1106aa4a mov esp, ebp */
  ESP = (EBP);
  /* 1106aa4c pop ebp */
  EBP = (pop32());
  /* 1106aa4d ret  */
  ESPCHK(0x1106a960u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aa50 @ 0x1106aa50 (237 bytes, 81 insns) */
void f_1106aa50(void) {
  FTRACE(0x1106aa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106aa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1106aa51 mov ebp, esp */
  EBP = (ESP);
  /* 1106aa53 push ecx */
  push32((uint32_t)(ECX));
  /* 1106aa54 cmp dword ptr [0x11087eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11087eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106aa5b jne 0x1106aa72 */
  if (!C.zf) goto L_1106aa72;
  /* 1106aa5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1106aa60 push eax */
  push32((uint32_t)(EAX));
  /* 1106aa61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106aa64 push ecx */
  push32((uint32_t)(ECX));
  /* 1106aa65 call 0x1106ab50 */
  push32(0x1106aa6au); f_1106ab50();
  /* 1106aa6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aa6d jmp 0x1106ab39 */
  goto L_1106ab39;
L_1106aa72:;
  /* 1106aa72 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1106aa74 call 0x1105e000 */
  push32(0x1106aa79u); f_1105e000();
  /* 1106aa79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aa7c jmp 0x1106aa87 */
  goto L_1106aa87;
L_1106aa7e:;
  /* 1106aa7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106aa81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aa84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1106aa87:;
  /* 1106aa87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106aa8a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1106aa8e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 1106aa92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106aa95 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1106aa9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1106aa9d je 0x1106ab1b */
  if (C.zf) goto L_1106ab1b;
  /* 1106aa9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106aaa2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106aaa7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106aaa9 mov cl, byte ptr [eax + 0x11088001] */
  CL = (r8((uint32_t)(EAX + 0x11088001)));
  /* 1106aaaf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1106aab2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1106aab4 je 0x1106ab06 */
  if (C.zf) goto L_1106ab06;
  /* 1106aab6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106aab9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aabc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1106aabf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106aac2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106aac4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1106aac6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1106aac8 jne 0x1106aad8 */
  if (!C.zf) goto L_1106aad8;
  /* 1106aaca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1106aacc call 0x1105e0a0 */
  push32(0x1106aad1u); f_1105e0a0();
  /* 1106aad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106aad6 jmp 0x1106ab39 */
  goto L_1106ab39;
L_1106aad8:;
  /* 1106aad8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106aadb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1106aae1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1106aae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106aae7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1106aae9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1106aaeb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1106aaed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106aaf0 jne 0x1106ab04 */
  if (!C.zf) goto L_1106ab04;
  /* 1106aaf2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1106aaf4 call 0x1105e0a0 */
  push32(0x1106aaf9u); f_1105e0a0();
  /* 1106aaf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aafc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106aaff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1106ab02 jmp 0x1106ab39 */
  goto L_1106ab39;
L_1106ab04:;
  /* 1106ab04 jmp 0x1106ab16 */
  goto L_1106ab16;
L_1106ab06:;
  /* 1106ab06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106ab09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1106ab0f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106ab12 jne 0x1106ab16 */
  if (!C.zf) goto L_1106ab16;
  /* 1106ab14 jmp 0x1106ab1b */
  goto L_1106ab1b;
L_1106ab16:;
  /* 1106ab16 jmp 0x1106aa7e */
  goto L_1106aa7e;
L_1106ab1b:;
  /* 1106ab1b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1106ab1d call 0x1105e0a0 */
  push32(0x1106ab22u); f_1105e0a0();
  /* 1106ab22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1106ab25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1106ab28 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106ab2d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1106ab30 jne 0x1106ab37 */
  if (!C.zf) goto L_1106ab37;
  /* 1106ab32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1106ab35 jmp 0x1106ab39 */
  goto L_1106ab39;
L_1106ab37:;
  /* 1106ab37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1106ab39:;
  /* 1106ab39 mov esp, ebp */
  ESP = (EBP);
  /* 1106ab3b pop ebp */
  EBP = (pop32());
  /* 1106ab3c ret  */
  ESPCHK(0x1106aa50u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1106ab50 (193 bytes, 87 insns) */
void f_1106ab50(void) {
  FTRACE(0x1106ab50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106ab50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106ab52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1106ab56 push ebx */
  push32((uint32_t)(EBX));
  /* 1106ab57 mov ebx, eax */
  EBX = (EAX);
  /* 1106ab59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1106ab5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1106ab60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1106ab66 je 0x1106ab7b */
  if (C.zf) goto L_1106ab7b;
L_1106ab68:;
  /* 1106ab68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1106ab6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1106ab6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1106ab6d je 0x1106ab40 */
  if (C.zf) { jmp_ind(0x1106ab40u); return; }
  /* 1106ab6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1106ab71 je 0x1106abc4 */
  if (C.zf) goto L_1106abc4;
  /* 1106ab73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1106ab79 jne 0x1106ab68 */
  if (!C.zf) goto L_1106ab68;
L_1106ab7b:;
  /* 1106ab7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1106ab7d push edi */
  push32((uint32_t)(EDI));
  /* 1106ab7e mov eax, ebx */
  EAX = (EBX);
  /* 1106ab80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1106ab83 push esi */
  push32((uint32_t)(ESI));
  /* 1106ab84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1106ab86:;
  /* 1106ab86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1106ab88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1106ab8d mov eax, ecx */
  EAX = (ECX);
  /* 1106ab8f mov esi, edi */
  ESI = (EDI);
  /* 1106ab91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1106ab93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1106ab95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1106ab97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1106ab9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1106ab9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1106ab9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1106aba1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1106aba4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1106abaa jne 0x1106abc8 */
  if (!C.zf) goto L_1106abc8;
  /* 1106abac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1106abb1 je 0x1106ab86 */
  if (C.zf) goto L_1106ab86;
  /* 1106abb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1106abb8 jne 0x1106abc2 */
  if (!C.zf) goto L_1106abc2;
  /* 1106abba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1106abc0 jne 0x1106ab86 */
  if (!C.zf) goto L_1106ab86;
L_1106abc2:;
  /* 1106abc2 pop esi */
  ESI = (pop32());
  /* 1106abc3 pop edi */
  EDI = (pop32());
L_1106abc4:;
  /* 1106abc4 pop ebx */
  EBX = (pop32());
  /* 1106abc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1106abc7 ret  */
  ESPCHK(0x1106ab50u, _esp0);
  ESP += 4; return;
L_1106abc8:;
  /* 1106abc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1106abcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1106abcd je 0x1106ac05 */
  if (C.zf) goto L_1106ac05;
  /* 1106abcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1106abd1 je 0x1106abc2 */
  if (C.zf) goto L_1106abc2;
  /* 1106abd3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1106abd5 je 0x1106abfe */
  if (C.zf) goto L_1106abfe;
  /* 1106abd7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1106abd9 je 0x1106abc2 */
  if (C.zf) goto L_1106abc2;
  /* 1106abdb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1106abde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1106abe0 je 0x1106abf7 */
  if (C.zf) goto L_1106abf7;
  /* 1106abe2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1106abe4 je 0x1106abc2 */
  if (C.zf) goto L_1106abc2;
  /* 1106abe6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1106abe8 je 0x1106abf0 */
  if (C.zf) goto L_1106abf0;
  /* 1106abea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1106abec je 0x1106abc2 */
  if (C.zf) goto L_1106abc2;
  /* 1106abee jmp 0x1106ab86 */
  goto L_1106ab86;
L_1106abf0:;
  /* 1106abf0 pop esi */
  ESI = (pop32());
  /* 1106abf1 pop edi */
  EDI = (pop32());
  /* 1106abf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1106abf5 pop ebx */
  EBX = (pop32());
  /* 1106abf6 ret  */
  ESPCHK(0x1106ab50u, _esp0);
  ESP += 4; return;
L_1106abf7:;
  /* 1106abf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1106abfa pop esi */
  ESI = (pop32());
  /* 1106abfb pop edi */
  EDI = (pop32());
  /* 1106abfc pop ebx */
  EBX = (pop32());
  /* 1106abfd ret  */
  ESPCHK(0x1106ab50u, _esp0);
  ESP += 4; return;
L_1106abfe:;
  /* 1106abfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1106ac01 pop esi */
  ESI = (pop32());
  /* 1106ac02 pop edi */
  EDI = (pop32());
  /* 1106ac03 pop ebx */
  EBX = (pop32());
  /* 1106ac04 ret  */
  ESPCHK(0x1106ab50u, _esp0);
  ESP += 4; return;
L_1106ac05:;
  /* 1106ac05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1106ac08 pop esi */
  ESI = (pop32());
  /* 1106ac09 pop edi */
  EDI = (pop32());
  /* 1106ac0a pop ebx */
  EBX = (pop32());
  /* 1106ac0b ret  */
  ESPCHK(0x1106ab50u, _esp0);
  ESP += 4; return;
  /* 1106ac0c jmp dword ptr [0x11089390] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11089390)))); return;
}

/* RtlUnwind @ 0x1106ad5c (6 bytes, 1 insns) */
void f_1106ad5c(void) {
  FTRACE(0x1106ad5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1106ad5c jmp dword ptr [0x11089314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11089314)))); return;
}

