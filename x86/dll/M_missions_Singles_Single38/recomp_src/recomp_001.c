#include "recomp.h"

/* FUN_10006d50 @ 0x11606d50 (1060 bytes, 360 insns) */
void f_11606d50(void) {
  FTRACE(0x11606d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11606d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11606d51 mov ebp, esp */
  EBP = (ESP);
  /* 11606d53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11606d56 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606d59 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11606d5f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11606d62 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11606d68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11606d6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11606d6e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606d72 je 0x11606d85 */
  if (C.zf) goto L_11606d85;
  /* 11606d74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11606d77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606d7a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11606d7c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11606d7f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606d82 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11606d85:;
  /* 11606d85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606d88 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11606d8b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606d8e jne 0x11606e5d */
  if (!C.zf) goto L_11606e5d;
L_11606d94:;
  /* 11606d94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606d97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606d9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11606d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606da0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11606da3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606da6 je 0x11606e22 */
  if (C.zf) goto L_11606e22;
  /* 11606da8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606dab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11606dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11606db0 je 0x11606e22 */
  if (C.zf) goto L_11606e22;
  /* 11606db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606db5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11606db7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11606db9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11606dbb mov al, byte ptr [edx + 0x11631fc1] */
  AL = (r8((uint32_t)(EDX + 0x11631fc1)));
  /* 11606dc1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11606dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11606dc6 je 0x11606df7 */
  if (C.zf) goto L_11606df7;
  /* 11606dc8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606dcb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11606dcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606dd0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606dd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11606dd5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606dd9 je 0x11606df7 */
  if (C.zf) goto L_11606df7;
  /* 11606ddb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606dde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606de1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11606de3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11606de5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606de8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606deb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11606dee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606df1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606df4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11606df7:;
  /* 11606df7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606dfa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11606dfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606dff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606e02 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11606e04 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606e08 je 0x11606e1d */
  if (C.zf) goto L_11606e1d;
  /* 11606e0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606e0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606e10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11606e12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11606e14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606e17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606e1a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11606e1d:;
  /* 11606e1d jmp 0x11606d94 */
  goto L_11606d94;
L_11606e22:;
  /* 11606e22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606e25 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11606e27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606e2a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606e2d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11606e2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606e33 je 0x11606e44 */
  if (C.zf) goto L_11606e44;
  /* 11606e35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606e38 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11606e3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606e3e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606e41 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11606e44:;
  /* 11606e44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606e47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11606e4a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606e4d jne 0x11606e58 */
  if (!C.zf) goto L_11606e58;
  /* 11606e4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606e52 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606e55 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11606e58:;
  /* 11606e58 jmp 0x11606f2c */
  goto L_11606f2c;
L_11606e5d:;
  /* 11606e5d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606e60 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11606e62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606e65 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606e68 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11606e6a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606e6e je 0x11606e83 */
  if (C.zf) goto L_11606e83;
  /* 11606e70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606e73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606e76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11606e78 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11606e7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606e7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606e80 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11606e83:;
  /* 11606e83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606e86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11606e88 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11606e8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606e8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606e91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11606e94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11606e97 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11606e9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11606e9f mov dl, byte ptr [ecx + 0x11631fc1] */
  DL = (r8((uint32_t)(ECX + 0x11631fc1)));
  /* 11606ea5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11606ea8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11606eaa je 0x11606edb */
  if (C.zf) goto L_11606edb;
  /* 11606eac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606eaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11606eb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606eb4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11606eb7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11606eb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606ebd je 0x11606ed2 */
  if (C.zf) goto L_11606ed2;
  /* 11606ebf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606ec2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606ec5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11606ec7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11606ec9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606ecc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606ecf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11606ed2:;
  /* 11606ed2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606ed8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11606edb:;
  /* 11606edb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11606ede and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11606ee4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606ee7 je 0x11606f07 */
  if (C.zf) goto L_11606f07;
  /* 11606ee9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11606eec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11606ef1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11606ef3 je 0x11606f07 */
  if (C.zf) goto L_11606f07;
  /* 11606ef5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11606ef8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11606efe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606f01 jne 0x11606e5d */
  if (!C.zf) goto L_11606e5d;
L_11606f07:;
  /* 11606f07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11606f0a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11606f10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11606f12 jne 0x11606f1f */
  if (!C.zf) goto L_11606f1f;
  /* 11606f14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606f17 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11606f1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11606f1d jmp 0x11606f2c */
  goto L_11606f2c;
L_11606f1f:;
  /* 11606f1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606f23 je 0x11606f2c */
  if (C.zf) goto L_11606f2c;
  /* 11606f25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606f28 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11606f2c:;
  /* 11606f2c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11606f33:;
  /* 11606f33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606f36 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11606f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11606f3b je 0x11606f5e */
  if (C.zf) goto L_11606f5e;
L_11606f3d:;
  /* 11606f3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606f40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11606f43 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606f46 je 0x11606f53 */
  if (C.zf) goto L_11606f53;
  /* 11606f48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606f4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11606f4e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606f51 jne 0x11606f5e */
  if (!C.zf) goto L_11606f5e;
L_11606f53:;
  /* 11606f53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606f56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606f59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11606f5c jmp 0x11606f3d */
  goto L_11606f3d;
L_11606f5e:;
  /* 11606f5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606f61 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11606f64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11606f66 jne 0x11606f6d */
  if (!C.zf) goto L_11606f6d;
  /* 11606f68 jmp 0x1160714b */
  goto L_1160714b;
L_11606f6d:;
  /* 11606f6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606f71 je 0x11606f84 */
  if (C.zf) goto L_11606f84;
  /* 11606f73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11606f76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11606f79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11606f7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11606f7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606f81 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11606f84:;
  /* 11606f84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11606f87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11606f89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606f8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11606f8f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11606f91:;
  /* 11606f91 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11606f98 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11606f9f:;
  /* 11606f9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606fa2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11606fa5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606fa8 jne 0x11606fbe */
  if (!C.zf) goto L_11606fbe;
  /* 11606faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606fad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606fb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11606fb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11606fb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606fb9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11606fbc jmp 0x11606f9f */
  goto L_11606f9f;
L_11606fbe:;
  /* 11606fbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606fc1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11606fc4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606fc7 jne 0x1160701a */
  if (!C.zf) goto L_1160701a;
  /* 11606fc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11606fcc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11606fce mov ecx, 2 */
  ECX = (0x2u);
  /* 11606fd3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11606fd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11606fd7 jne 0x11607012 */
  if (!C.zf) goto L_11607012;
  /* 11606fd9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606fdd je 0x11606fff */
  if (C.zf) goto L_11606fff;
  /* 11606fdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606fe2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11606fe6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11606fe9 jne 0x11606ff6 */
  if (!C.zf) goto L_11606ff6;
  /* 11606feb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11606fee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11606ff1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11606ff4 jmp 0x11606ffd */
  goto L_11606ffd;
L_11606ff6:;
  /* 11606ff6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11606ffd:;
  /* 11606ffd jmp 0x11607006 */
  goto L_11607006;
L_11606fff:;
  /* 11606fff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11607006:;
  /* 11607006 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11607008 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160700c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1160700f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11607012:;
  /* 11607012 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11607015 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11607017 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1160701a:;
  /* 1160701a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160701d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11607020 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607023 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11607026 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11607028 je 0x1160704e */
  if (C.zf) goto L_1160704e;
  /* 1160702a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160702e je 0x1160703f */
  if (C.zf) goto L_1160703f;
  /* 11607030 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11607033 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11607036 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11607039 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160703c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1160703f:;
  /* 1160703f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11607042 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11607044 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607047 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1160704a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1160704c jmp 0x1160701a */
  goto L_1160701a;
L_1160704e:;
  /* 1160704e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607051 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11607054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11607056 je 0x11607074 */
  if (C.zf) goto L_11607074;
  /* 11607058 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160705c jne 0x11607079 */
  if (!C.zf) goto L_11607079;
  /* 1160705e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607061 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11607064 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607067 je 0x11607074 */
  if (C.zf) goto L_11607074;
  /* 11607069 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160706c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160706f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607072 jne 0x11607079 */
  if (!C.zf) goto L_11607079;
L_11607074:;
  /* 11607074 jmp 0x11607124 */
  goto L_11607124;
L_11607079:;
  /* 11607079 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160707d je 0x11607116 */
  if (C.zf) goto L_11607116;
  /* 11607083 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607087 je 0x116070dd */
  if (C.zf) goto L_116070dd;
  /* 11607089 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160708c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160708e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11607090 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11607092 mov cl, byte ptr [eax + 0x11631fc1] */
  CL = (r8((uint32_t)(EAX + 0x11631fc1)));
  /* 11607098 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1160709b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160709d je 0x116070c8 */
  if (C.zf) goto L_116070c8;
  /* 1160709f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116070a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116070a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 116070a7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 116070a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116070ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116070af mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 116070b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116070b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116070b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116070bb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 116070be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116070c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116070c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116070c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116070c8:;
  /* 116070c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116070cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116070ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116070d0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 116070d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116070d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116070d8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116070db jmp 0x11607109 */
  goto L_11607109;
L_116070dd:;
  /* 116070dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116070e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116070e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116070e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116070e6 mov cl, byte ptr [eax + 0x11631fc1] */
  CL = (r8((uint32_t)(EAX + 0x11631fc1)));
  /* 116070ec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116070ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116070f1 je 0x11607109 */
  if (C.zf) goto L_11607109;
  /* 116070f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116070f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116070f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116070fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 116070ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11607101 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607104 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11607107 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11607109:;
  /* 11607109 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1160710c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160710e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607111 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11607114 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11607116:;
  /* 11607116 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607119 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160711c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160711f jmp 0x11606f91 */
  goto L_11606f91;
L_11607124:;
  /* 11607124 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607128 je 0x11607139 */
  if (C.zf) goto L_11607139;
  /* 1160712a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160712d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11607130 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11607133 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607136 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11607139:;
  /* 11607139 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1160713c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160713e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607141 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11607144 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11607146 jmp 0x11606f33 */
  goto L_11606f33;
L_1160714b:;
  /* 1160714b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160714f je 0x11607163 */
  if (C.zf) goto L_11607163;
  /* 11607151 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607154 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1160715a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160715d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607160 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11607163:;
  /* 11607163 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11607166 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11607168 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160716b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160716e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11607170 mov esp, ebp */
  ESP = (EBP);
  /* 11607172 pop ebp */
  EBP = (pop32());
  /* 11607173 ret  */
  ESPCHK(0x11606d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x11607180 (537 bytes, 173 insns) */
void f_11607180(void) {
  FTRACE(0x11607180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607180 push ebp */
  push32((uint32_t)(EBP));
  /* 11607181 mov ebp, esp */
  EBP = (ESP);
  /* 11607183 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607186 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1160718d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11607194 cmp dword ptr [0x116308a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116308a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160719b jne 0x116071da */
  if (!C.zf) goto L_116071da;
  /* 1160719d call dword ptr [0x11633368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633368))), 0x116071a3u);
  /* 116071a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116071a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116071aa je 0x116071b8 */
  if (C.zf) goto L_116071b8;
  /* 116071ac mov dword ptr [0x116308a0], 1 */
  w32((uint32_t)(0x116308a0), (0x1u));
  /* 116071b6 jmp 0x116071da */
  goto L_116071da;
L_116071b8:;
  /* 116071b8 call dword ptr [0x1163336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163336c))), 0x116071beu);
  /* 116071be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116071c1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116071c5 je 0x116071d3 */
  if (C.zf) goto L_116071d3;
  /* 116071c7 mov dword ptr [0x116308a0], 2 */
  w32((uint32_t)(0x116308a0), (0x2u));
  /* 116071d1 jmp 0x116071da */
  goto L_116071da;
L_116071d3:;
  /* 116071d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116071d5 jmp 0x11607395 */
  goto L_11607395;
L_116071da:;
  /* 116071da cmp dword ptr [0x116308a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116308a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116071e1 jne 0x116072de */
  if (!C.zf) goto L_116072de;
  /* 116071e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116071eb jne 0x11607203 */
  if (!C.zf) goto L_11607203;
  /* 116071ed call dword ptr [0x11633368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633368))), 0x116071f3u);
  /* 116071f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116071f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116071fa jne 0x11607203 */
  if (!C.zf) goto L_11607203;
  /* 116071fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116071fe jmp 0x11607395 */
  goto L_11607395;
L_11607203:;
  /* 11607203 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11607206 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11607209:;
  /* 11607209 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160720c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160720e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11607211 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11607213 je 0x11607235 */
  if (C.zf) goto L_11607235;
  /* 11607215 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607218 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160721b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160721e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607221 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11607223 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11607226 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11607228 jne 0x11607233 */
  if (!C.zf) goto L_11607233;
  /* 1160722a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160722d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607230 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11607233:;
  /* 11607233 jmp 0x11607209 */
  goto L_11607209;
L_11607235:;
  /* 11607235 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607238 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160723b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1160723d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607240 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11607243 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607245 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607247 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160724b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160724e push edx */
  push32((uint32_t)(EDX));
  /* 1160724f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11607252 push eax */
  push32((uint32_t)(EAX));
  /* 11607253 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607255 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607257 call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x1160725du);
  /* 1160725d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11607260 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607264 je 0x11607284 */
  if (C.zf) goto L_11607284;
  /* 11607266 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11607268 push 0x1162bb84 */
  push32((uint32_t)(0x1162bb84u));
  /* 1160726d push 2 */
  push32((uint32_t)(0x2u));
  /* 1160726f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11607272 push ecx */
  push32((uint32_t)(ECX));
  /* 11607273 call 0x11604bb0 */
  push32(0x11607278u); f_11604bb0();
  /* 11607278 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160727b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1160727e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607282 jne 0x11607295 */
  if (!C.zf) goto L_11607295;
L_11607284:;
  /* 11607284 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11607287 push edx */
  push32((uint32_t)(EDX));
  /* 11607288 call dword ptr [0x11633374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633374))), 0x1160728eu);
  /* 1160728e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11607290 jmp 0x11607395 */
  goto L_11607395;
L_11607295:;
  /* 11607295 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607297 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607299 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160729c push eax */
  push32((uint32_t)(EAX));
  /* 1160729d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116072a0 push ecx */
  push32((uint32_t)(ECX));
  /* 116072a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116072a4 push edx */
  push32((uint32_t)(EDX));
  /* 116072a5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116072a8 push eax */
  push32((uint32_t)(EAX));
  /* 116072a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116072ab push 0 */
  push32((uint32_t)(0x0u));
  /* 116072ad call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x116072b3u);
  /* 116072b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116072b5 jne 0x116072cc */
  if (!C.zf) goto L_116072cc;
  /* 116072b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116072b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116072bc push ecx */
  push32((uint32_t)(ECX));
  /* 116072bd call 0x11605640 */
  push32(0x116072c2u); f_11605640();
  /* 116072c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116072c5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_116072cc:;
  /* 116072cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116072cf push edx */
  push32((uint32_t)(EDX));
  /* 116072d0 call dword ptr [0x11633374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633374))), 0x116072d6u);
  /* 116072d6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116072d9 jmp 0x11607395 */
  goto L_11607395;
L_116072de:;
  /* 116072de cmp dword ptr [0x116308a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116308a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116072e5 jne 0x11607393 */
  if (!C.zf) goto L_11607393;
  /* 116072eb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116072ef jne 0x11607307 */
  if (!C.zf) goto L_11607307;
  /* 116072f1 call dword ptr [0x1163336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163336c))), 0x116072f7u);
  /* 116072f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116072fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116072fe jne 0x11607307 */
  if (!C.zf) goto L_11607307;
  /* 11607300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11607302 jmp 0x11607395 */
  goto L_11607395;
L_11607307:;
  /* 11607307 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160730a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1160730d:;
  /* 1160730d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11607310 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11607313 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11607315 je 0x11607335 */
  if (C.zf) goto L_11607335;
  /* 11607317 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160731a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160731d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11607320 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11607323 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11607326 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11607328 jne 0x11607333 */
  if (!C.zf) goto L_11607333;
  /* 1160732a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160732d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607330 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11607333:;
  /* 11607333 jmp 0x1160730d */
  goto L_1160730d;
L_11607335:;
  /* 11607335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11607338 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160733b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160733e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11607341 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11607346 push 0x1162bb84 */
  push32((uint32_t)(0x1162bb84u));
  /* 1160734b push 2 */
  push32((uint32_t)(0x2u));
  /* 1160734d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11607350 push edx */
  push32((uint32_t)(EDX));
  /* 11607351 call 0x11604bb0 */
  push32(0x11607356u); f_11604bb0();
  /* 11607356 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607359 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1160735c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607360 jne 0x11607370 */
  if (!C.zf) goto L_11607370;
  /* 11607362 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11607365 push eax */
  push32((uint32_t)(EAX));
  /* 11607366 call dword ptr [0x11633378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633378))), 0x1160736cu);
  /* 1160736c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160736e jmp 0x11607395 */
  goto L_11607395;
L_11607370:;
  /* 11607370 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11607373 push ecx */
  push32((uint32_t)(ECX));
  /* 11607374 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11607377 push edx */
  push32((uint32_t)(EDX));
  /* 11607378 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160737b push eax */
  push32((uint32_t)(EAX));
  /* 1160737c call 0x1160b490 */
  push32(0x11607381u); f_1160b490();
  /* 11607381 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607384 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11607387 push ecx */
  push32((uint32_t)(ECX));
  /* 11607388 call dword ptr [0x11633378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633378))), 0x1160738eu);
  /* 1160738e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11607391 jmp 0x11607395 */
  goto L_11607395;
L_11607393:;
  /* 11607393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11607395:;
  /* 11607395 mov esp, ebp */
  ESP = (EBP);
  /* 11607397 pop ebp */
  EBP = (pop32());
  /* 11607398 ret  */
  ESPCHK(0x11607180u, _esp0);
  ESP += 4; return;
}

/* FUN_100073a0 @ 0x116073a0 (77 bytes, 25 insns) */
void f_116073a0(void) {
  FTRACE(0x116073a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116073a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116073a1 mov ebp, esp */
  EBP = (ESP);
  /* 116073a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116073a5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116073aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116073ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116073b0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 116073b3 push eax */
  push32((uint32_t)(EAX));
  /* 116073b4 call dword ptr [0x11633360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633360))), 0x116073bau);
  /* 116073ba mov dword ptr [0x116320ec], eax */
  w32((uint32_t)(0x116320ec), (EAX));
  /* 116073bf cmp dword ptr [0x116320ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116320ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116073c6 jne 0x116073cc */
  if (!C.zf) goto L_116073cc;
  /* 116073c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116073ca jmp 0x116073eb */
  goto L_116073eb;
L_116073cc:;
  /* 116073cc call 0x11608e50 */
  push32(0x116073d1u); f_11608e50();
  /* 116073d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116073d3 jne 0x116073e6 */
  if (!C.zf) goto L_116073e6;
  /* 116073d5 mov ecx, dword ptr [0x116320ec] */
  ECX = (r32((uint32_t)(0x116320ec)));
  /* 116073db push ecx */
  push32((uint32_t)(ECX));
  /* 116073dc call dword ptr [0x11633364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633364))), 0x116073e2u);
  /* 116073e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116073e4 jmp 0x116073eb */
  goto L_116073eb;
L_116073e6:;
  /* 116073e6 mov eax, 1 */
  EAX = (0x1u);
L_116073eb:;
  /* 116073eb pop ebp */
  EBP = (pop32());
  /* 116073ec ret  */
  ESPCHK(0x116073a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073f0 @ 0x116073f0 (156 bytes, 48 insns) */
void f_116073f0(void) {
  FTRACE(0x116073f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116073f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116073f1 mov ebp, esp */
  EBP = (ESP);
  /* 116073f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116073f6 mov eax, dword ptr [0x116320e8] */
  EAX = (r32((uint32_t)(0x116320e8)));
  /* 116073fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116073fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11607405 jmp 0x11607410 */
  goto L_11607410;
L_11607407:;
  /* 11607407 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160740a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160740d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11607410:;
  /* 11607410 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607413 cmp edx, dword ptr [0x116320e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116320e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607419 jge 0x11607466 */
  if ((C.sf==C.of)) goto L_11607466;
  /* 1160741b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11607420 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11607425 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607428 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160742b push ecx */
  push32((uint32_t)(ECX));
  /* 1160742c call dword ptr [0x11633358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633358))), 0x11607432u);
  /* 11607432 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11607437 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607439 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160743c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1160743f push eax */
  push32((uint32_t)(EAX));
  /* 11607440 call dword ptr [0x11633358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633358))), 0x11607446u);
  /* 11607446 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607449 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1160744c push edx */
  push32((uint32_t)(EDX));
  /* 1160744d push 0 */
  push32((uint32_t)(0x0u));
  /* 1160744f mov eax, dword ptr [0x116320ec] */
  EAX = (r32((uint32_t)(0x116320ec)));
  /* 11607454 push eax */
  push32((uint32_t)(EAX));
  /* 11607455 call dword ptr [0x1163335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163335c))), 0x1160745bu);
  /* 1160745b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160745e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607461 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11607464 jmp 0x11607407 */
  goto L_11607407;
L_11607466:;
  /* 11607466 mov edx, dword ptr [0x116320e8] */
  EDX = (r32((uint32_t)(0x116320e8)));
  /* 1160746c push edx */
  push32((uint32_t)(EDX));
  /* 1160746d push 0 */
  push32((uint32_t)(0x0u));
  /* 1160746f mov eax, dword ptr [0x116320ec] */
  EAX = (r32((uint32_t)(0x116320ec)));
  /* 11607474 push eax */
  push32((uint32_t)(EAX));
  /* 11607475 call dword ptr [0x1163335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163335c))), 0x1160747bu);
  /* 1160747b mov ecx, dword ptr [0x116320ec] */
  ECX = (r32((uint32_t)(0x116320ec)));
  /* 11607481 push ecx */
  push32((uint32_t)(ECX));
  /* 11607482 call dword ptr [0x11633364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633364))), 0x11607488u);
  /* 11607488 mov esp, ebp */
  ESP = (EBP);
  /* 1160748a pop ebp */
  EBP = (pop32());
  /* 1160748b ret  */
  ESPCHK(0x116073f0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11607490 (73 bytes, 19 insns) */
void f_11607490(void) {
  FTRACE(0x11607490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607490 push ebp */
  push32((uint32_t)(EBP));
  /* 11607491 mov ebp, esp */
  EBP = (ESP);
  /* 11607493 cmp dword ptr [0x11630734], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630734))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160749a je 0x116074ae */
  if (C.zf) goto L_116074ae;
  /* 1160749c cmp dword ptr [0x11630734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116074a3 jne 0x116074d7 */
  if (!C.zf) goto L_116074d7;
  /* 116074a5 cmp dword ptr [0x11630738], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630738))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116074ac jne 0x116074d7 */
  if (!C.zf) goto L_116074d7;
L_116074ae:;
  /* 116074ae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 116074b3 call 0x116074e0 */
  push32(0x116074b8u); f_116074e0();
  /* 116074b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116074bb cmp dword ptr [0x116308a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116308a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116074c2 je 0x116074ca */
  if (C.zf) goto L_116074ca;
  /* 116074c4 call dword ptr [0x116308a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116308a4))), 0x116074cau);
L_116074ca:;
  /* 116074ca push 0xff */
  push32((uint32_t)(0xffu));
  /* 116074cf call 0x116074e0 */
  push32(0x116074d4u); f_116074e0();
  /* 116074d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116074d7:;
  /* 116074d7 pop ebp */
  EBP = (pop32());
  /* 116074d8 ret  */
  ESPCHK(0x11607490u, _esp0);
  ESP += 4; return;
}

/* FUN_100074e0 @ 0x116074e0 (447 bytes, 131 insns) */
void f_116074e0(void) {
  FTRACE(0x116074e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116074e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116074e1 mov ebp, esp */
  EBP = (ESP);
  /* 116074e3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116074e9 push ebx */
  push32((uint32_t)(EBX));
  /* 116074ea push esi */
  push32((uint32_t)(ESI));
  /* 116074eb push edi */
  push32((uint32_t)(EDI));
  /* 116074ec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116074f3 jmp 0x116074fe */
  goto L_116074fe;
L_116074f5:;
  /* 116074f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116074f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116074fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116074fe:;
  /* 116074fe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607502 jae 0x11607517 */
  if (!C.cf) goto L_11607517;
  /* 11607504 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160750a cmp edx, dword ptr [ecx*8 + 0x1162eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1162eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607511 jne 0x11607515 */
  if (!C.zf) goto L_11607515;
  /* 11607513 jmp 0x11607517 */
  goto L_11607517;
L_11607515:;
  /* 11607515 jmp 0x116074f5 */
  goto L_116074f5;
L_11607517:;
  /* 11607517 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160751a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160751d cmp ecx, dword ptr [eax*8 + 0x1162eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1162eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607524 jne 0x11607698 */
  if (!C.zf) goto L_11607698;
  /* 1160752a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607531 je 0x11607554 */
  if (C.zf) goto L_11607554;
  /* 11607533 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607536 mov eax, dword ptr [edx*8 + 0x1162eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1162eab4)));
  /* 1160753d push eax */
  push32((uint32_t)(EAX));
  /* 1160753e push 0 */
  push32((uint32_t)(0x0u));
  /* 11607540 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607542 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607544 push 1 */
  push32((uint32_t)(0x1u));
  /* 11607546 call 0x11603c70 */
  push32(0x1160754bu); f_11603c70();
  /* 1160754b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160754e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607551 jne 0x11607554 */
  if (!C.zf) goto L_11607554;
  /* 11607553 int3  */
  x86_unimpl("int3 @ 0x11607553");
L_11607554:;
  /* 11607554 cmp dword ptr [0x11630734], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630734))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160755b je 0x1160756f */
  if (C.zf) goto L_1160756f;
  /* 1160755d cmp dword ptr [0x11630734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607564 jne 0x116075a8 */
  if (!C.zf) goto L_116075a8;
  /* 11607566 cmp dword ptr [0x11630738], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630738))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160756d jne 0x116075a8 */
  if (!C.zf) goto L_116075a8;
L_1160756f:;
  /* 1160756f push 0 */
  push32((uint32_t)(0x0u));
  /* 11607571 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11607574 push ecx */
  push32((uint32_t)(ECX));
  /* 11607575 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607578 mov eax, dword ptr [edx*8 + 0x1162eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1162eab4)));
  /* 1160757f push eax */
  push32((uint32_t)(EAX));
  /* 11607580 call 0x116079e0 */
  push32(0x11607585u); f_116079e0();
  /* 11607585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607588 push eax */
  push32((uint32_t)(EAX));
  /* 11607589 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160758c mov edx, dword ptr [ecx*8 + 0x1162eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1162eab4)));
  /* 11607593 push edx */
  push32((uint32_t)(EDX));
  /* 11607594 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11607596 call dword ptr [0x1163338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163338c))), 0x1160759cu);
  /* 1160759c push eax */
  push32((uint32_t)(EAX));
  /* 1160759d call dword ptr [0x11633390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633390))), 0x116075a3u);
  /* 116075a3 jmp 0x11607698 */
  goto L_11607698;
L_116075a8:;
  /* 116075a8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116075af je 0x11607698 */
  if (C.zf) goto L_11607698;
  /* 116075b5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 116075ba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 116075c0 push eax */
  push32((uint32_t)(EAX));
  /* 116075c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116075c3 call dword ptr [0x116333a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333a8))), 0x116075c9u);
  /* 116075c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116075cb jne 0x116075e1 */
  if (!C.zf) goto L_116075e1;
  /* 116075cd push 0x1162b3ec */
  push32((uint32_t)(0x1162b3ecu));
  /* 116075d2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 116075d8 push ecx */
  push32((uint32_t)(ECX));
  /* 116075d9 call 0x11607b60 */
  push32(0x116075deu); f_11607b60();
  /* 116075de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116075e1:;
  /* 116075e1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 116075e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116075ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116075ed push eax */
  push32((uint32_t)(EAX));
  /* 116075ee call 0x116079e0 */
  push32(0x116075f3u); f_116079e0();
  /* 116075f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116075f6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116075f9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116075fc jbe 0x1160762a */
  if ((C.cf||C.zf)) goto L_1160762a;
  /* 116075fe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11607604 push ecx */
  push32((uint32_t)(ECX));
  /* 11607605 call 0x116079e0 */
  push32(0x1160760au); f_116079e0();
  /* 1160760a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160760d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11607610 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11607614 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11607617 push 3 */
  push32((uint32_t)(0x3u));
  /* 11607619 push 0x1162b3e8 */
  push32((uint32_t)(0x1162b3e8u));
  /* 1160761e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11607621 push ecx */
  push32((uint32_t)(ECX));
  /* 11607622 call 0x116083d0 */
  push32(0x11607627u); f_116083d0();
  /* 11607627 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160762a:;
  /* 1160762a push 0x1162be40 */
  push32((uint32_t)(0x1162be40u));
  /* 1160762f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11607635 push edx */
  push32((uint32_t)(EDX));
  /* 11607636 call 0x11607b60 */
  push32(0x1160763bu); f_11607b60();
  /* 1160763b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160763e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11607641 push eax */
  push32((uint32_t)(EAX));
  /* 11607642 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11607648 push ecx */
  push32((uint32_t)(ECX));
  /* 11607649 call 0x11607b70 */
  push32(0x1160764eu); f_11607b70();
  /* 1160764e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607651 push 0x1162b360 */
  push32((uint32_t)(0x1162b360u));
  /* 11607656 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1160765c push edx */
  push32((uint32_t)(EDX));
  /* 1160765d call 0x11607b70 */
  push32(0x11607662u); f_11607b70();
  /* 11607662 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607665 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607668 mov ecx, dword ptr [eax*8 + 0x1162eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1162eab4)));
  /* 1160766f push ecx */
  push32((uint32_t)(ECX));
  /* 11607670 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11607676 push edx */
  push32((uint32_t)(EDX));
  /* 11607677 call 0x11607b70 */
  push32(0x1160767cu); f_11607b70();
  /* 1160767c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160767f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11607684 push 0x1162be18 */
  push32((uint32_t)(0x1162be18u));
  /* 11607689 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1160768f push eax */
  push32((uint32_t)(EAX));
  /* 11607690 call 0x11608310 */
  push32(0x11607695u); f_11608310();
  /* 11607695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11607698:;
  /* 11607698 pop edi */
  EDI = (pop32());
  /* 11607699 pop esi */
  ESI = (pop32());
  /* 1160769a pop ebx */
  EBX = (pop32());
  /* 1160769b mov esp, ebp */
  ESP = (EBP);
  /* 1160769d pop ebp */
  EBP = (pop32());
  /* 1160769e ret  */
  ESPCHK(0x116074e0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x116076a0 (80 bytes, 27 insns) */
void f_116076a0(void) {
  FTRACE(0x116076a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116076a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116076a1 mov ebp, esp */
  EBP = (ESP);
  /* 116076a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116076a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116076ab jmp 0x116076b6 */
  goto L_116076b6;
L_116076ad:;
  /* 116076ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116076b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116076b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116076b6:;
  /* 116076b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116076ba jae 0x116076cf */
  if (!C.cf) goto L_116076cf;
  /* 116076bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116076bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116076c2 cmp edx, dword ptr [ecx*8 + 0x1162eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1162eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116076c9 jne 0x116076cd */
  if (!C.zf) goto L_116076cd;
  /* 116076cb jmp 0x116076cf */
  goto L_116076cf;
L_116076cd:;
  /* 116076cd jmp 0x116076ad */
  goto L_116076ad;
L_116076cf:;
  /* 116076cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116076d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116076d5 cmp ecx, dword ptr [eax*8 + 0x1162eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1162eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116076dc jne 0x116076ea */
  if (!C.zf) goto L_116076ea;
  /* 116076de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116076e1 mov eax, dword ptr [edx*8 + 0x1162eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1162eab4)));
  /* 116076e8 jmp 0x116076ec */
  goto L_116076ec;
L_116076ea:;
  /* 116076ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116076ec:;
  /* 116076ec mov esp, ebp */
  ESP = (EBP);
  /* 116076ee pop ebp */
  EBP = (pop32());
  /* 116076ef ret  */
  ESPCHK(0x116076a0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x116076f0 (66 bytes, 28 insns) */
void f_116076f0(void) {
  FTRACE(0x116076f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116076f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116076f1 mov ebp, esp */
  EBP = (ESP);
  /* 116076f3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116076f7 jne 0x11607717 */
  if (!C.zf) goto L_11607717;
  /* 116076f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116076fd jge 0x11607717 */
  if ((C.sf==C.of)) goto L_11607717;
  /* 116076ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11607701 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11607704 push eax */
  push32((uint32_t)(EAX));
  /* 11607705 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607708 push ecx */
  push32((uint32_t)(ECX));
  /* 11607709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160770c push edx */
  push32((uint32_t)(EDX));
  /* 1160770d call 0x11607740 */
  push32(0x11607712u); f_11607740();
  /* 11607712 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607715 jmp 0x1160772d */
  goto L_1160772d;
L_11607717:;
  /* 11607717 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607719 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160771c push eax */
  push32((uint32_t)(EAX));
  /* 1160771d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607720 push ecx */
  push32((uint32_t)(ECX));
  /* 11607721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607724 push edx */
  push32((uint32_t)(EDX));
  /* 11607725 call 0x11607740 */
  push32(0x1160772au); f_11607740();
  /* 1160772a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160772d:;
  /* 1160772d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607730 pop ebp */
  EBP = (pop32());
  /* 11607731 ret  */
  ESPCHK(0x116076f0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11607740 (194 bytes, 71 insns) */
void f_11607740(void) {
  FTRACE(0x11607740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607740 push ebp */
  push32((uint32_t)(EBP));
  /* 11607741 mov ebp, esp */
  EBP = (ESP);
  /* 11607743 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607746 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607749 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160774c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607750 je 0x11607769 */
  if (C.zf) goto L_11607769;
  /* 11607752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607755 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11607758 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160775b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160775e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11607761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607764 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11607766 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11607769:;
  /* 11607769 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160776c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1160776f:;
  /* 1160776f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607772 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11607774 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11607777 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1160777a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160777d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160777f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11607782 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11607785 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607789 jbe 0x116077a1 */
  if ((C.cf||C.zf)) goto L_116077a1;
  /* 1160778b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160778e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607794 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11607796 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607799 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160779c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1160779f jmp 0x116077b5 */
  goto L_116077b5;
L_116077a1:;
  /* 116077a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116077a4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116077a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116077aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116077ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116077af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116077b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116077b5:;
  /* 116077b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116077b9 ja 0x1160776f */
  if ((!C.cf&&!C.zf)) goto L_1160776f;
  /* 116077bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116077be mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116077c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116077c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116077c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116077ca:;
  /* 116077ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116077cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116077cf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 116077d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116077d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116077d8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116077da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116077dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116077df mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 116077e2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116077e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116077e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116077ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116077ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116077f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116077f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116077f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116077f9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116077fc jb 0x116077ca */
  if (C.cf) goto L_116077ca;
  /* 116077fe mov esp, ebp */
  ESP = (EBP);
  /* 11607800 pop ebp */
  EBP = (pop32());
  /* 11607801 ret  */
  ESPCHK(0x11607740u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11607810 (63 bytes, 24 insns) */
void f_11607810(void) {
  FTRACE(0x11607810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607810 push ebp */
  push32((uint32_t)(EBP));
  /* 11607811 mov ebp, esp */
  EBP = (ESP);
  /* 11607813 push ecx */
  push32((uint32_t)(ECX));
  /* 11607814 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607818 jne 0x11607829 */
  if (!C.zf) goto L_11607829;
  /* 1160781a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160781e jge 0x11607829 */
  if ((C.sf==C.of)) goto L_11607829;
  /* 11607820 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11607827 jmp 0x11607830 */
  goto L_11607830;
L_11607829:;
  /* 11607829 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11607830:;
  /* 11607830 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607833 push eax */
  push32((uint32_t)(EAX));
  /* 11607834 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11607837 push ecx */
  push32((uint32_t)(ECX));
  /* 11607838 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160783b push edx */
  push32((uint32_t)(EDX));
  /* 1160783c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160783f push eax */
  push32((uint32_t)(EAX));
  /* 11607840 call 0x11607740 */
  push32(0x11607845u); f_11607740();
  /* 11607845 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607848 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160784b mov esp, ebp */
  ESP = (EBP);
  /* 1160784d pop ebp */
  EBP = (pop32());
  /* 1160784e ret  */
  ESPCHK(0x11607810u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11607850 (30 bytes, 14 insns) */
void f_11607850(void) {
  FTRACE(0x11607850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607850 push ebp */
  push32((uint32_t)(EBP));
  /* 11607851 mov ebp, esp */
  EBP = (ESP);
  /* 11607853 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607855 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11607858 push eax */
  push32((uint32_t)(EAX));
  /* 11607859 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160785c push ecx */
  push32((uint32_t)(ECX));
  /* 1160785d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607860 push edx */
  push32((uint32_t)(EDX));
  /* 11607861 call 0x11607740 */
  push32(0x11607866u); f_11607740();
  /* 11607866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607869 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160786c pop ebp */
  EBP = (pop32());
  /* 1160786d ret  */
  ESPCHK(0x11607850u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11607870 (72 bytes, 28 insns) */
void f_11607870(void) {
  FTRACE(0x11607870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607870 push ebp */
  push32((uint32_t)(EBP));
  /* 11607871 mov ebp, esp */
  EBP = (ESP);
  /* 11607873 push ecx */
  push32((uint32_t)(ECX));
  /* 11607874 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607878 jne 0x11607891 */
  if (!C.zf) goto L_11607891;
  /* 1160787a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160787e jg 0x11607891 */
  if ((!C.zf&&C.sf==C.of)) goto L_11607891;
  /* 11607880 jl 0x11607888 */
  if ((C.sf!=C.of)) goto L_11607888;
  /* 11607882 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607886 jae 0x11607891 */
  if (!C.cf) goto L_11607891;
L_11607888:;
  /* 11607888 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1160788f jmp 0x11607898 */
  goto L_11607898;
L_11607891:;
  /* 11607891 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11607898:;
  /* 11607898 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160789b push eax */
  push32((uint32_t)(EAX));
  /* 1160789c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160789f push ecx */
  push32((uint32_t)(ECX));
  /* 116078a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116078a3 push edx */
  push32((uint32_t)(EDX));
  /* 116078a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116078a7 push eax */
  push32((uint32_t)(EAX));
  /* 116078a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116078ab push ecx */
  push32((uint32_t)(ECX));
  /* 116078ac call 0x116078c0 */
  push32(0x116078b1u); f_116078c0();
  /* 116078b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116078b4 mov esp, ebp */
  ESP = (EBP);
  /* 116078b6 pop ebp */
  EBP = (pop32());
  /* 116078b7 ret  */
  ESPCHK(0x11607870u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x116078c0 (242 bytes, 91 insns) */
void f_116078c0(void) {
  FTRACE(0x116078c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116078c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116078c1 mov ebp, esp */
  EBP = (ESP);
  /* 116078c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116078c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116078c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116078cc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116078d0 je 0x116078f4 */
  if (C.zf) goto L_116078f4;
  /* 116078d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116078d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 116078d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116078db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116078de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116078e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116078e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116078e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116078e9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116078ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116078ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116078f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_116078f4:;
  /* 116078f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116078f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116078fa:;
  /* 116078fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116078fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116078ff push ecx */
  push32((uint32_t)(ECX));
  /* 11607900 push eax */
  push32((uint32_t)(EAX));
  /* 11607901 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607904 push edx */
  push32((uint32_t)(EDX));
  /* 11607905 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607908 push eax */
  push32((uint32_t)(EAX));
  /* 11607909 call 0x1160b840 */
  push32(0x1160790eu); f_1160b840();
  /* 1160790e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11607911 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11607914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11607916 push edx */
  push32((uint32_t)(EDX));
  /* 11607917 push ecx */
  push32((uint32_t)(ECX));
  /* 11607918 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160791b push eax */
  push32((uint32_t)(EAX));
  /* 1160791c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160791f push ecx */
  push32((uint32_t)(ECX));
  /* 11607920 call 0x1160b7d0 */
  push32(0x11607925u); f_1160b7d0();
  /* 11607925 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11607928 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1160792b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160792f jbe 0x11607947 */
  if ((C.cf||C.zf)) goto L_11607947;
  /* 11607931 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11607934 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160793a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1160793c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160793f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607942 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11607945 jmp 0x1160795b */
  goto L_1160795b;
L_11607947:;
  /* 11607947 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160794a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160794d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607950 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11607952 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607955 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607958 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1160795b:;
  /* 1160795b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160795f ja 0x116078fa */
  if ((!C.cf&&!C.zf)) goto L_116078fa;
  /* 11607961 jb 0x11607969 */
  if (C.cf) goto L_11607969;
  /* 11607963 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607967 ja 0x116078fa */
  if ((!C.cf&&!C.zf)) goto L_116078fa;
L_11607969:;
  /* 11607969 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160796c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1160796f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607972 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11607978:;
  /* 11607978 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160797b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1160797d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11607980 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607983 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607986 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11607988 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1160798a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160798d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11607990 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11607992 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607995 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607998 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160799b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160799e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116079a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116079a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116079a7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116079aa jb 0x11607978 */
  if (C.cf) goto L_11607978;
  /* 116079ac mov esp, ebp */
  ESP = (EBP);
  /* 116079ae pop ebp */
  EBP = (pop32());
  /* 116079af ret 0x14 */
  ESPCHK(0x116078c0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x116079c0 (31 bytes, 15 insns) */
void f_116079c0(void) {
  FTRACE(0x116079c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116079c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116079c1 mov ebp, esp */
  EBP = (ESP);
  /* 116079c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116079c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116079c8 push eax */
  push32((uint32_t)(EAX));
  /* 116079c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116079cc push ecx */
  push32((uint32_t)(ECX));
  /* 116079cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116079d0 push edx */
  push32((uint32_t)(EDX));
  /* 116079d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116079d4 push eax */
  push32((uint32_t)(EAX));
  /* 116079d5 call 0x116078c0 */
  push32(0x116079dau); f_116078c0();
  /* 116079da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116079dd pop ebp */
  EBP = (pop32());
  /* 116079de ret  */
  ESPCHK(0x116079c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x116079e0 (123 bytes, 44 insns) */
void f_116079e0(void) {
  FTRACE(0x116079e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116079e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116079e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116079ea je 0x11607a00 */
  if (C.zf) goto L_11607a00;
L_116079ec:;
  /* 116079ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 116079ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116079ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116079f1 je 0x11607a33 */
  if (C.zf) goto L_11607a33;
  /* 116079f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116079f9 jne 0x116079ec */
  if (!C.zf) goto L_116079ec;
  /* 116079fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11607a00:;
  /* 11607a00 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11607a02 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11607a07 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607a09 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11607a0c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11607a0e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607a11 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11607a16 je 0x11607a00 */
  if (C.zf) goto L_11607a00;
  /* 11607a18 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11607a1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11607a1d je 0x11607a51 */
  if (C.zf) goto L_11607a51;
  /* 11607a1f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11607a21 je 0x11607a47 */
  if (C.zf) goto L_11607a47;
  /* 11607a23 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11607a28 je 0x11607a3d */
  if (C.zf) goto L_11607a3d;
  /* 11607a2a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11607a2f je 0x11607a33 */
  if (C.zf) goto L_11607a33;
  /* 11607a31 jmp 0x11607a00 */
  goto L_11607a00;
L_11607a33:;
  /* 11607a33 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11607a36 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11607a3a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607a3c ret  */
  ESPCHK(0x116079e0u, _esp0);
  ESP += 4; return;
L_11607a3d:;
  /* 11607a3d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11607a40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11607a44 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607a46 ret  */
  ESPCHK(0x116079e0u, _esp0);
  ESP += 4; return;
L_11607a47:;
  /* 11607a47 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11607a4a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11607a4e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607a50 ret  */
  ESPCHK(0x116079e0u, _esp0);
  ESP += 4; return;
L_11607a51:;
  /* 11607a51 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11607a54 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11607a58 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607a5a ret  */
  ESPCHK(0x116079e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x11607a60 (249 bytes, 93 insns) */
void f_11607a60(void) {
  FTRACE(0x11607a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11607a61 mov ebp, esp */
  EBP = (ESP);
  /* 11607a63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607a66 push ebx */
  push32((uint32_t)(EBX));
  /* 11607a67 push esi */
  push32((uint32_t)(ESI));
  /* 11607a68 push edi */
  push32((uint32_t)(EDI));
  /* 11607a69 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11607a6c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11607a6f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11607a72 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11607a75:;
  /* 11607a75 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607a79 jne 0x11607a99 */
  if (!C.zf) goto L_11607a99;
  /* 11607a7b push 0x1162be78 */
  push32((uint32_t)(0x1162be78u));
  /* 11607a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607a82 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11607a84 push 0x1162be6c */
  push32((uint32_t)(0x1162be6cu));
  /* 11607a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11607a8b call 0x11603c70 */
  push32(0x11607a90u); f_11603c70();
  /* 11607a90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607a93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607a96 jne 0x11607a99 */
  if (!C.zf) goto L_11607a99;
  /* 11607a98 int3  */
  x86_unimpl("int3 @ 0x11607a98");
L_11607a99:;
  /* 11607a99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11607a9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11607a9d jne 0x11607a75 */
  if (!C.zf) goto L_11607a75;
L_11607a9f:;
  /* 11607a9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607aa3 jne 0x11607ac3 */
  if (!C.zf) goto L_11607ac3;
  /* 11607aa5 push 0x1162be5c */
  push32((uint32_t)(0x1162be5cu));
  /* 11607aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 11607aac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11607aae push 0x1162be6c */
  push32((uint32_t)(0x1162be6cu));
  /* 11607ab3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11607ab5 call 0x11603c70 */
  push32(0x11607abau); f_11603c70();
  /* 11607aba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607abd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607ac0 jne 0x11607ac3 */
  if (!C.zf) goto L_11607ac3;
  /* 11607ac2 int3  */
  x86_unimpl("int3 @ 0x11607ac2");
L_11607ac3:;
  /* 11607ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11607ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11607ac7 jne 0x11607a9f */
  if (!C.zf) goto L_11607a9f;
  /* 11607ac9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607acc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11607ad3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607ad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607ad9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11607adc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607adf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607ae2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11607ae4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607ae7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607aea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11607aed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11607af0 push edx */
  push32((uint32_t)(EDX));
  /* 11607af1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11607af4 push eax */
  push32((uint32_t)(EAX));
  /* 11607af5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607af8 push ecx */
  push32((uint32_t)(ECX));
  /* 11607af9 call 0x1160bb40 */
  push32(0x11607afeu); f_1160bb40();
  /* 11607afe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607b01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11607b04 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607b07 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11607b0a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607b0d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607b10 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11607b13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607b16 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607b1a jl 0x11607b3e */
  if ((C.sf!=C.of)) goto L_11607b3e;
  /* 11607b1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607b1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11607b21 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11607b24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11607b26 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11607b2c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11607b2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607b32 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11607b34 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607b37 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607b3a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11607b3c jmp 0x11607b4f */
  goto L_11607b4f;
L_11607b3e:;
  /* 11607b3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607b41 push eax */
  push32((uint32_t)(EAX));
  /* 11607b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607b44 call 0x1160b8c0 */
  push32(0x11607b49u); f_1160b8c0();
  /* 11607b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607b4c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11607b4f:;
  /* 11607b4f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11607b52 pop edi */
  EDI = (pop32());
  /* 11607b53 pop esi */
  ESI = (pop32());
  /* 11607b54 pop ebx */
  EBX = (pop32());
  /* 11607b55 mov esp, ebp */
  ESP = (EBP);
  /* 11607b57 pop ebp */
  EBP = (pop32());
  /* 11607b58 ret  */
  ESPCHK(0x11607a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b60 @ 0x11607b60 (7 bytes, 3 insns) */
void f_11607b60(void) {
  FTRACE(0x11607b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607b60 push edi */
  push32((uint32_t)(EDI));
  /* 11607b61 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11607b65 jmp 0x11607bd1 */
  jmp_ind(0x11607bd1u); return;
}

/* FUN_10007b70 @ 0x11607b70 (224 bytes, 84 insns) */
void f_11607b70(void) {
  FTRACE(0x11607b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607b70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11607b74 push edi */
  push32((uint32_t)(EDI));
  /* 11607b75 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11607b7b je 0x11607b8c */
  if (C.zf) goto L_11607b8c;
L_11607b7d:;
  /* 11607b7d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11607b7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11607b80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11607b82 je 0x11607bbf */
  if (C.zf) goto L_11607bbf;
  /* 11607b84 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11607b8a jne 0x11607b7d */
  if (!C.zf) goto L_11607b7d;
L_11607b8c:;
  /* 11607b8c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11607b8e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11607b93 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607b95 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11607b98 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11607b9a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607b9d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11607ba2 je 0x11607b8c */
  if (C.zf) goto L_11607b8c;
  /* 11607ba4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11607ba7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11607ba9 je 0x11607bce */
  if (C.zf) goto L_11607bce;
  /* 11607bab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11607bad je 0x11607bc9 */
  if (C.zf) goto L_11607bc9;
  /* 11607baf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11607bb4 je 0x11607bc4 */
  if (C.zf) goto L_11607bc4;
  /* 11607bb6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11607bbb je 0x11607bbf */
  if (C.zf) goto L_11607bbf;
  /* 11607bbd jmp 0x11607b8c */
  goto L_11607b8c;
L_11607bbf:;
  /* 11607bbf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11607bc2 jmp 0x11607bd1 */
  goto L_11607bd1;
L_11607bc4:;
  /* 11607bc4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11607bc7 jmp 0x11607bd1 */
  goto L_11607bd1;
L_11607bc9:;
  /* 11607bc9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11607bcc jmp 0x11607bd1 */
  goto L_11607bd1;
L_11607bce:;
  /* 11607bce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11607bd1:;
  /* 11607bd1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11607bd5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11607bdb je 0x11607bf6 */
  if (C.zf) goto L_11607bf6;
L_11607bdd:;
  /* 11607bdd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11607bdf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11607be0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11607be2 je 0x11607c48 */
  if (C.zf) goto L_11607c48;
  /* 11607be4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11607be6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11607be7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11607bed jne 0x11607bdd */
  if (!C.zf) goto L_11607bdd;
  /* 11607bef jmp 0x11607bf6 */
  goto L_11607bf6;
L_11607bf1:;
  /* 11607bf1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11607bf3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11607bf6:;
  /* 11607bf6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11607bfb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11607bfd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607bff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11607c02 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11607c04 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11607c06 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607c09 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11607c0e je 0x11607bf1 */
  if (C.zf) goto L_11607bf1;
  /* 11607c10 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11607c12 je 0x11607c48 */
  if (C.zf) goto L_11607c48;
  /* 11607c14 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11607c16 je 0x11607c3f */
  if (C.zf) goto L_11607c3f;
  /* 11607c18 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11607c1e je 0x11607c32 */
  if (C.zf) goto L_11607c32;
  /* 11607c20 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11607c26 je 0x11607c2a */
  if (C.zf) goto L_11607c2a;
  /* 11607c28 jmp 0x11607bf1 */
  goto L_11607bf1;
L_11607c2a:;
  /* 11607c2a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11607c2c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11607c30 pop edi */
  EDI = (pop32());
  /* 11607c31 ret  */
  ESPCHK(0x11607b70u, _esp0);
  ESP += 4; return;
L_11607c32:;
  /* 11607c32 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11607c35 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11607c39 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11607c3d pop edi */
  EDI = (pop32());
  /* 11607c3e ret  */
  ESPCHK(0x11607b70u, _esp0);
  ESP += 4; return;
L_11607c3f:;
  /* 11607c3f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11607c42 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11607c46 pop edi */
  EDI = (pop32());
  /* 11607c47 ret  */
  ESPCHK(0x11607b70u, _esp0);
  ESP += 4; return;
L_11607c48:;
  /* 11607c48 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11607c4a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11607c4e pop edi */
  EDI = (pop32());
  /* 11607c4f ret  */
  ESPCHK(0x11607b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c50 @ 0x11607c50 (243 bytes, 91 insns) */
void f_11607c50(void) {
  FTRACE(0x11607c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11607c51 mov ebp, esp */
  EBP = (ESP);
  /* 11607c53 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607c56 push ebx */
  push32((uint32_t)(EBX));
  /* 11607c57 push esi */
  push32((uint32_t)(ESI));
  /* 11607c58 push edi */
  push32((uint32_t)(EDI));
  /* 11607c59 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11607c5c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11607c5f:;
  /* 11607c5f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607c63 jne 0x11607c83 */
  if (!C.zf) goto L_11607c83;
  /* 11607c65 push 0x1162be78 */
  push32((uint32_t)(0x1162be78u));
  /* 11607c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11607c6c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11607c6e push 0x1162be88 */
  push32((uint32_t)(0x1162be88u));
  /* 11607c73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11607c75 call 0x11603c70 */
  push32(0x11607c7au); f_11603c70();
  /* 11607c7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607c7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607c80 jne 0x11607c83 */
  if (!C.zf) goto L_11607c83;
  /* 11607c82 int3  */
  x86_unimpl("int3 @ 0x11607c82");
L_11607c83:;
  /* 11607c83 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11607c85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11607c87 jne 0x11607c5f */
  if (!C.zf) goto L_11607c5f;
L_11607c89:;
  /* 11607c89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607c8d jne 0x11607cad */
  if (!C.zf) goto L_11607cad;
  /* 11607c8f push 0x1162be5c */
  push32((uint32_t)(0x1162be5cu));
  /* 11607c94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11607c96 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11607c98 push 0x1162be88 */
  push32((uint32_t)(0x1162be88u));
  /* 11607c9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11607c9f call 0x11603c70 */
  push32(0x11607ca4u); f_11603c70();
  /* 11607ca4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607ca7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607caa jne 0x11607cad */
  if (!C.zf) goto L_11607cad;
  /* 11607cac int3  */
  x86_unimpl("int3 @ 0x11607cac");
L_11607cad:;
  /* 11607cad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11607caf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11607cb1 jne 0x11607c89 */
  if (!C.zf) goto L_11607c89;
  /* 11607cb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607cb6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11607cbd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607cc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607cc3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11607cc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607cc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607ccc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11607cce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607cd1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607cd4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11607cd7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11607cda push ecx */
  push32((uint32_t)(ECX));
  /* 11607cdb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11607cde push edx */
  push32((uint32_t)(EDX));
  /* 11607cdf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607ce2 push eax */
  push32((uint32_t)(EAX));
  /* 11607ce3 call 0x1160bb40 */
  push32(0x11607ce8u); f_1160bb40();
  /* 11607ce8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607ceb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11607cee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607cf1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11607cf4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607cf7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607cfa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11607cfd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607d00 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607d04 jl 0x11607d28 */
  if ((C.sf!=C.of)) goto L_11607d28;
  /* 11607d06 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607d09 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11607d0b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11607d0e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11607d10 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11607d16 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11607d19 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607d1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11607d1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607d21 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607d24 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11607d26 jmp 0x11607d39 */
  goto L_11607d39;
L_11607d28:;
  /* 11607d28 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11607d2b push edx */
  push32((uint32_t)(EDX));
  /* 11607d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11607d2e call 0x1160b8c0 */
  push32(0x11607d33u); f_1160b8c0();
  /* 11607d33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607d36 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11607d39:;
  /* 11607d39 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11607d3c pop edi */
  EDI = (pop32());
  /* 11607d3d pop esi */
  ESI = (pop32());
  /* 11607d3e pop ebx */
  EBX = (pop32());
  /* 11607d3f mov esp, ebp */
  ESP = (EBP);
  /* 11607d41 pop ebp */
  EBP = (pop32());
  /* 11607d42 ret  */
  ESPCHK(0x11607c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d50 @ 0x11607d50 (47 bytes, 17 insns) */
void f_11607d50(void) {
  FTRACE(0x11607d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607d50 push ecx */
  push32((uint32_t)(ECX));
  /* 11607d51 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607d56 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11607d5a jb 0x11607d70 */
  if (C.cf) goto L_11607d70;
L_11607d5c:;
  /* 11607d5c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607d62 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607d67 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11607d69 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607d6e jae 0x11607d5c */
  if (!C.cf) goto L_11607d5c;
L_11607d70:;
  /* 11607d70 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607d72 mov eax, esp */
  EAX = (ESP);
  /* 11607d74 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11607d76 mov esp, ecx */
  ESP = (ECX);
  /* 11607d78 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11607d7a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11607d7d push eax */
  push32((uint32_t)(EAX));
  /* 11607d7e ret  */
  ESPCHK(0x11607d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d80 @ 0x11607d80 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11607d80(void) {
  FTRACE(0x11607d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11607d81 mov ebp, esp */
  EBP = (ESP);
  /* 11607d83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607d86 push esi */
  push32((uint32_t)(ESI));
  /* 11607d87 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607d8b je 0x11607d93 */
  if (C.zf) goto L_11607d93;
  /* 11607d8d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607d91 jne 0x11607d98 */
  if (!C.zf) goto L_11607d98;
L_11607d93:;
  /* 11607d93 jmp 0x11607f68 */
  goto L_11607f68;
L_11607d98:;
  /* 11607d98 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607d9c je 0x11607db4 */
  if (C.zf) goto L_11607db4;
  /* 11607d9e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607da2 je 0x11607db4 */
  if (C.zf) goto L_11607db4;
  /* 11607da4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607da8 je 0x11607db4 */
  if (C.zf) goto L_11607db4;
  /* 11607daa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607dae jne 0x11607e91 */
  if (!C.zf) goto L_11607e91;
L_11607db4:;
  /* 11607db4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11607db6 call 0x116085b0 */
  push32(0x11607dbbu); f_116085b0();
  /* 11607dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607dbe cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607dc2 je 0x11607dca */
  if (C.zf) goto L_11607dca;
  /* 11607dc4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607dc8 jne 0x11607e0f */
  if (!C.zf) goto L_11607e0f;
L_11607dca:;
  /* 11607dca cmp dword ptr [0x116308b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116308b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607dd1 jne 0x11607e0f */
  if (!C.zf) goto L_11607e0f;
  /* 11607dd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11607dd5 push 0x11607fb0 */
  push32((uint32_t)(0x11607fb0u));
  /* 11607dda call dword ptr [0x11633354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633354))), 0x11607de0u);
  /* 11607de0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607de3 jne 0x11607df1 */
  if (!C.zf) goto L_11607df1;
  /* 11607de5 mov dword ptr [0x116308b8], 1 */
  w32((uint32_t)(0x116308b8), (0x1u));
  /* 11607def jmp 0x11607e0f */
  goto L_11607e0f;
L_11607df1:;
  /* 11607df1 call dword ptr [0x116333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333b4))), 0x11607df7u);
  /* 11607df7 mov esi, eax */
  ESI = (EAX);
  /* 11607df9 call 0x1160ca90 */
  push32(0x11607dfeu); f_1160ca90();
  /* 11607dfe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11607e00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11607e02 call 0x11608650 */
  push32(0x11607e07u); f_11608650();
  /* 11607e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607e0a jmp 0x11607f68 */
  goto L_11607f68;
L_11607e0f:;
  /* 11607e0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607e12 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11607e15 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11607e18 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607e1b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11607e1e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607e22 ja 0x11607e82 */
  if ((!C.cf&&!C.zf)) goto L_11607e82;
  /* 11607e24 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11607e27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11607e29 mov dl, byte ptr [eax + 0x11607f8f] */
  DL = (r8((uint32_t)(EAX + 0x11607f8f)));
  /* 11607e2f jmp dword ptr [edx*4 + 0x11607f7b] */
  switch (EDX) {
    case 0: goto L_11607e36;
    case 1: goto L_11607e70;
    case 2: goto L_11607e4a;
    case 3: goto L_11607e5d;
    case 4: goto L_11607e82;
    default: x86_unimpl("switch@0x11607e2f out of table"); return;
  }
L_11607e36:;
  /* 11607e36 mov ecx, dword ptr [0x116308a8] */
  ECX = (r32((uint32_t)(0x116308a8)));
  /* 11607e3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11607e3f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607e42 mov dword ptr [0x116308a8], edx */
  w32((uint32_t)(0x116308a8), (EDX));
  /* 11607e48 jmp 0x11607e82 */
  goto L_11607e82;
L_11607e4a:;
  /* 11607e4a mov eax, dword ptr [0x116308ac] */
  EAX = (r32((uint32_t)(0x116308ac)));
  /* 11607e4f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11607e52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607e55 mov dword ptr [0x116308ac], ecx */
  w32((uint32_t)(0x116308ac), (ECX));
  /* 11607e5b jmp 0x11607e82 */
  goto L_11607e82;
L_11607e5d:;
  /* 11607e5d mov edx, dword ptr [0x116308b0] */
  EDX = (r32((uint32_t)(0x116308b0)));
  /* 11607e63 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11607e66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607e69 mov dword ptr [0x116308b0], eax */
  w32((uint32_t)(0x116308b0), (EAX));
  /* 11607e6e jmp 0x11607e82 */
  goto L_11607e82;
L_11607e70:;
  /* 11607e70 mov ecx, dword ptr [0x116308b4] */
  ECX = (r32((uint32_t)(0x116308b4)));
  /* 11607e76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11607e79 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607e7c mov dword ptr [0x116308b4], edx */
  w32((uint32_t)(0x116308b4), (EDX));
L_11607e82:;
  /* 11607e82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11607e84 call 0x11608650 */
  push32(0x11607e89u); f_11608650();
  /* 11607e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607e8c jmp 0x11607f63 */
  goto L_11607f63;
L_11607e91:;
  /* 11607e91 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607e95 je 0x11607ea8 */
  if (C.zf) goto L_11607ea8;
  /* 11607e97 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607e9b je 0x11607ea8 */
  if (C.zf) goto L_11607ea8;
  /* 11607e9d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607ea1 je 0x11607ea8 */
  if (C.zf) goto L_11607ea8;
  /* 11607ea3 jmp 0x11607f68 */
  goto L_11607f68;
L_11607ea8:;
  /* 11607ea8 call 0x116045f0 */
  push32(0x11607eadu); f_116045f0();
  /* 11607ead mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11607eb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607eb3 cmp dword ptr [eax + 0x50], 0x1162ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1162ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607eba jne 0x11607f05 */
  if (!C.zf) goto L_11607f05;
  /* 11607ebc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11607ec1 push 0x1162be94 */
  push32((uint32_t)(0x1162be94u));
  /* 11607ec6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11607ec8 mov ecx, dword ptr [0x1162ec80] */
  ECX = (r32((uint32_t)(0x1162ec80)));
  /* 11607ece push ecx */
  push32((uint32_t)(ECX));
  /* 11607ecf call 0x11604bb0 */
  push32(0x11607ed4u); f_11604bb0();
  /* 11607ed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607ed7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607eda mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11607edd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607ee0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607ee4 je 0x11607f03 */
  if (C.zf) goto L_11607f03;
  /* 11607ee6 mov ecx, dword ptr [0x1162ec80] */
  ECX = (r32((uint32_t)(0x1162ec80)));
  /* 11607eec push ecx */
  push32((uint32_t)(ECX));
  /* 11607eed push 0x1162ec00 */
  push32((uint32_t)(0x1162ec00u));
  /* 11607ef2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607ef5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11607ef8 push eax */
  push32((uint32_t)(EAX));
  /* 11607ef9 call 0x1160b490 */
  push32(0x11607efeu); f_1160b490();
  /* 11607efe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607f01 jmp 0x11607f05 */
  goto L_11607f05;
L_11607f03:;
  /* 11607f03 jmp 0x11607f68 */
  goto L_11607f68;
L_11607f05:;
  /* 11607f05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607f08 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11607f0b push edx */
  push32((uint32_t)(EDX));
  /* 11607f0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11607f0f push eax */
  push32((uint32_t)(EAX));
  /* 11607f10 call 0x11608290 */
  push32(0x11607f15u); f_11608290();
  /* 11607f15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607f18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11607f1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607f1f jne 0x11607f23 */
  if (!C.zf) goto L_11607f23;
  /* 11607f21 jmp 0x11607f68 */
  goto L_11607f68;
L_11607f23:;
  /* 11607f23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607f26 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11607f29 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11607f2c:;
  /* 11607f2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607f2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11607f32 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607f35 jne 0x11607f63 */
  if (!C.zf) goto L_11607f63;
  /* 11607f37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607f3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11607f3d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11607f40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607f43 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607f46 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11607f49 mov edx, dword ptr [0x1162ec84] */
  EDX = (r32((uint32_t)(0x1162ec84)));
  /* 11607f4f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11607f52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11607f55 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11607f58 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11607f5a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607f5d jb 0x11607f61 */
  if (C.cf) goto L_11607f61;
  /* 11607f5f jmp 0x11607f63 */
  goto L_11607f63;
L_11607f61:;
  /* 11607f61 jmp 0x11607f2c */
  goto L_11607f2c;
L_11607f63:;
  /* 11607f63 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11607f66 jmp 0x11607f76 */
  goto L_11607f76;
L_11607f68:;
  /* 11607f68 call 0x1160ca80 */
  push32(0x11607f6du); f_1160ca80();
  /* 11607f6d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11607f73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11607f76:;
  /* 11607f76 pop esi */
  ESI = (pop32());
  /* 11607f77 mov esp, ebp */
  ESP = (EBP);
  /* 11607f79 pop ebp */
  EBP = (pop32());
  /* 11607f7a ret  */
  ESPCHK(0x11607d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x11607fb0 (146 bytes, 45 insns) */
void f_11607fb0(void) {
  FTRACE(0x11607fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11607fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11607fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11607fb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11607fb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11607fb8 call 0x116085b0 */
  push32(0x11607fbdu); f_116085b0();
  /* 11607fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11607fc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607fc4 jne 0x11607fde */
  if (!C.zf) goto L_11607fde;
  /* 11607fc6 mov dword ptr [ebp - 8], 0x116308a8 */
  w32((uint32_t)(EBP + -0x8), (0x116308a8u));
  /* 11607fcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607fd0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11607fd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11607fd5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11607fdc jmp 0x11607ff4 */
  goto L_11607ff4;
L_11607fde:;
  /* 11607fde mov dword ptr [ebp - 8], 0x116308ac */
  w32((uint32_t)(EBP + -0x8), (0x116308acu));
  /* 11607fe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11607fe8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11607fea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11607fed mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11607ff4:;
  /* 11607ff4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11607ff8 jne 0x11608008 */
  if (!C.zf) goto L_11608008;
  /* 11607ffa push 1 */
  push32((uint32_t)(0x1u));
  /* 11607ffc call 0x11608650 */
  push32(0x11608001u); f_11608650();
  /* 11608001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11608006 jmp 0x1160803c */
  goto L_1160803c;
L_11608008:;
  /* 11608008 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160800c je 0x1160802d */
  if (C.zf) goto L_1160802d;
  /* 1160800e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608011 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11608017 push 1 */
  push32((uint32_t)(0x1u));
  /* 11608019 call 0x11608650 */
  push32(0x1160801eu); f_11608650();
  /* 1160801e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608021 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608024 push edx */
  push32((uint32_t)(EDX));
  /* 11608025 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11608028u);
  /* 11608028 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160802b jmp 0x11608037 */
  goto L_11608037;
L_1160802d:;
  /* 1160802d push 1 */
  push32((uint32_t)(0x1u));
  /* 1160802f call 0x11608650 */
  push32(0x11608034u); f_11608650();
  /* 11608034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11608037:;
  /* 11608037 mov eax, 1 */
  EAX = (0x1u);
L_1160803c:;
  /* 1160803c mov esp, ebp */
  ESP = (EBP);
  /* 1160803e pop ebp */
  EBP = (pop32());
  /* 1160803f ret 4 */
  ESPCHK(0x11607fb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008050 @ 0x11608050 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11608050(void) {
  FTRACE(0x11608050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608050 push ebp */
  push32((uint32_t)(EBP));
  /* 11608051 mov ebp, esp */
  EBP = (ESP);
  /* 11608053 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608056 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160805d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608060 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11608063 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11608066 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608069 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1160806c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608070 ja 0x1160811e */
  if ((!C.cf&&!C.zf)) goto L_1160811e;
  /* 11608076 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11608079 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160807b mov dl, byte ptr [eax + 0x11608272] */
  DL = (r8((uint32_t)(EAX + 0x11608272)));
  /* 11608081 jmp dword ptr [edx*4 + 0x1160825a] */
  switch (EDX) {
    case 0: goto L_11608088;
    case 1: goto L_116080f3;
    case 2: goto L_116080d9;
    case 3: goto L_116080a5;
    case 4: goto L_116080bf;
    case 5: goto L_1160811e;
    default: x86_unimpl("switch@0x11608081 out of table"); return;
  }
L_11608088:;
  /* 11608088 mov dword ptr [ebp - 0x18], 0x116308a8 */
  w32((uint32_t)(EBP + -0x18), (0x116308a8u));
  /* 1160808f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11608092 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11608094 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11608097 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160809a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160809d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116080a0 jmp 0x11608126 */
  goto L_11608126;
L_116080a5:;
  /* 116080a5 mov dword ptr [ebp - 0x18], 0x116308ac */
  w32((uint32_t)(EBP + -0x18), (0x116308acu));
  /* 116080ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116080af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116080b1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116080b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116080b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116080ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116080bd jmp 0x11608126 */
  goto L_11608126;
L_116080bf:;
  /* 116080bf mov dword ptr [ebp - 0x18], 0x116308b0 */
  w32((uint32_t)(EBP + -0x18), (0x116308b0u));
  /* 116080c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116080c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116080cb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116080ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116080d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116080d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116080d7 jmp 0x11608126 */
  goto L_11608126;
L_116080d9:;
  /* 116080d9 mov dword ptr [ebp - 0x18], 0x116308b4 */
  w32((uint32_t)(EBP + -0x18), (0x116308b4u));
  /* 116080e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116080e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116080e5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116080e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116080eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116080ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116080f1 jmp 0x11608126 */
  goto L_11608126;
L_116080f3:;
  /* 116080f3 call 0x116045f0 */
  push32(0x116080f8u); f_116045f0();
  /* 116080f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116080fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116080fe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11608101 push edx */
  push32((uint32_t)(EDX));
  /* 11608102 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608105 push eax */
  push32((uint32_t)(EAX));
  /* 11608106 call 0x11608290 */
  push32(0x1160810bu); f_11608290();
  /* 1160810b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160810e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608111 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11608114 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11608117 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11608119 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1160811c jmp 0x11608126 */
  goto L_11608126;
L_1160811e:;
  /* 1160811e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11608121 jmp 0x11608256 */
  goto L_11608256;
L_11608126:;
  /* 11608126 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160812a je 0x11608136 */
  if (C.zf) goto L_11608136;
  /* 1160812c push 1 */
  push32((uint32_t)(0x1u));
  /* 1160812e call 0x116085b0 */
  push32(0x11608133u); f_116085b0();
  /* 11608133 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11608136:;
  /* 11608136 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160813a jne 0x11608153 */
  if (!C.zf) goto L_11608153;
  /* 1160813c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608140 je 0x1160814c */
  if (C.zf) goto L_1160814c;
  /* 11608142 push 1 */
  push32((uint32_t)(0x1u));
  /* 11608144 call 0x11608650 */
  push32(0x11608149u); f_11608650();
  /* 11608149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160814c:;
  /* 1160814c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160814e jmp 0x11608256 */
  goto L_11608256;
L_11608153:;
  /* 11608153 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608157 jne 0x11608170 */
  if (!C.zf) goto L_11608170;
  /* 11608159 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160815d je 0x11608169 */
  if (C.zf) goto L_11608169;
  /* 1160815f push 1 */
  push32((uint32_t)(0x1u));
  /* 11608161 call 0x11608650 */
  push32(0x11608166u); f_11608650();
  /* 11608166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11608169:;
  /* 11608169 push 3 */
  push32((uint32_t)(0x3u));
  /* 1160816b call 0x11604370 */
  push32(0x11608170u); f_11604370();
L_11608170:;
  /* 11608170 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608174 je 0x11608182 */
  if (C.zf) goto L_11608182;
  /* 11608176 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160817a je 0x11608182 */
  if (C.zf) goto L_11608182;
  /* 1160817c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608180 jne 0x116081ae */
  if (!C.zf) goto L_116081ae;
L_11608182:;
  /* 11608182 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608185 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11608188 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1160818b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160818e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11608195 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608199 jne 0x116081ae */
  if (!C.zf) goto L_116081ae;
  /* 1160819b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160819e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 116081a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116081a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116081a7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_116081ae:;
  /* 116081ae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116081b2 jne 0x116081f0 */
  if (!C.zf) goto L_116081f0;
  /* 116081b4 mov eax, dword ptr [0x1162ec78] */
  EAX = (r32((uint32_t)(0x1162ec78)));
  /* 116081b9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116081bc jmp 0x116081c7 */
  goto L_116081c7;
L_116081be:;
  /* 116081be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116081c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116081c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116081c7:;
  /* 116081c7 mov edx, dword ptr [0x1162ec78] */
  EDX = (r32((uint32_t)(0x1162ec78)));
  /* 116081cd add edx, dword ptr [0x1162ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1162ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116081d3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116081d6 jge 0x116081ee */
  if ((C.sf==C.of)) goto L_116081ee;
  /* 116081d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116081db imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116081de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116081e1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116081e4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 116081ec jmp 0x116081be */
  goto L_116081be;
L_116081ee:;
  /* 116081ee jmp 0x116081f9 */
  goto L_116081f9;
L_116081f0:;
  /* 116081f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116081f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116081f9:;
  /* 116081f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116081fd je 0x11608209 */
  if (C.zf) goto L_11608209;
  /* 116081ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11608201 call 0x11608650 */
  push32(0x11608206u); f_11608650();
  /* 11608206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11608209:;
  /* 11608209 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160820d jne 0x11608220 */
  if (!C.zf) goto L_11608220;
  /* 1160820f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608212 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11608215 push edx */
  push32((uint32_t)(EDX));
  /* 11608216 push 8 */
  push32((uint32_t)(0x8u));
  /* 11608218 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1160821bu);
  /* 1160821b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160821e jmp 0x1160822a */
  goto L_1160822a;
L_11608220:;
  /* 11608220 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608223 push eax */
  push32((uint32_t)(EAX));
  /* 11608224 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11608227u);
  /* 11608227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160822a:;
  /* 1160822a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160822e je 0x1160823c */
  if (C.zf) goto L_1160823c;
  /* 11608230 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608234 je 0x1160823c */
  if (C.zf) goto L_1160823c;
  /* 11608236 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160823a jne 0x11608254 */
  if (!C.zf) goto L_11608254;
L_1160823c:;
  /* 1160823c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160823f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11608242 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11608245 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608249 jne 0x11608254 */
  if (!C.zf) goto L_11608254;
  /* 1160824b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160824e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608251 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11608254:;
  /* 11608254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11608256:;
  /* 11608256 mov esp, ebp */
  ESP = (EBP);
  /* 11608258 pop ebp */
  EBP = (pop32());
  /* 11608259 ret  */
  ESPCHK(0x11608050u, _esp0);
  ESP += 4; return;
}

/* FUN_10008290 @ 0x11608290 (91 bytes, 35 insns) */
void f_11608290(void) {
  FTRACE(0x11608290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608290 push ebp */
  push32((uint32_t)(EBP));
  /* 11608291 mov ebp, esp */
  EBP = (ESP);
  /* 11608293 push ecx */
  push32((uint32_t)(ECX));
  /* 11608294 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608297 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160829a:;
  /* 1160829a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160829d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116082a0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116082a3 je 0x116082c3 */
  if (C.zf) goto L_116082c3;
  /* 116082a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116082a8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116082ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116082ae mov ecx, dword ptr [0x1162ec84] */
  ECX = (r32((uint32_t)(0x1162ec84)));
  /* 116082b4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116082b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116082ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116082bc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116082bf jae 0x116082c3 */
  if (!C.cf) goto L_116082c3;
  /* 116082c1 jmp 0x1160829a */
  goto L_1160829a;
L_116082c3:;
  /* 116082c3 mov eax, dword ptr [0x1162ec84] */
  EAX = (r32((uint32_t)(0x1162ec84)));
  /* 116082c8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116082cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116082ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116082d0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116082d3 jae 0x116082e5 */
  if (!C.cf) goto L_116082e5;
  /* 116082d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116082d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116082db cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116082de jne 0x116082e5 */
  if (!C.zf) goto L_116082e5;
  /* 116082e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116082e3 jmp 0x116082e7 */
  goto L_116082e7;
L_116082e5:;
  /* 116082e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116082e7:;
  /* 116082e7 mov esp, ebp */
  ESP = (EBP);
  /* 116082e9 pop ebp */
  EBP = (pop32());
  /* 116082ea ret  */
  ESPCHK(0x11608290u, _esp0);
  ESP += 4; return;
}

/* FUN_100082f0 @ 0x116082f0 (13 bytes, 6 insns) */
void f_116082f0(void) {
  FTRACE(0x116082f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116082f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116082f1 mov ebp, esp */
  EBP = (ESP);
  /* 116082f3 call 0x116045f0 */
  push32(0x116082f8u); f_116045f0();
  /* 116082f8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116082fb pop ebp */
  EBP = (pop32());
  /* 116082fc ret  */
  ESPCHK(0x116082f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008300 @ 0x11608300 (13 bytes, 6 insns) */
void f_11608300(void) {
  FTRACE(0x11608300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608300 push ebp */
  push32((uint32_t)(EBP));
  /* 11608301 mov ebp, esp */
  EBP = (ESP);
  /* 11608303 call 0x116045f0 */
  push32(0x11608308u); f_116045f0();
  /* 11608308 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160830b pop ebp */
  EBP = (pop32());
  /* 1160830c ret  */
  ESPCHK(0x11608300u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x11608310 (187 bytes, 54 insns) */
void f_11608310(void) {
  FTRACE(0x11608310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608310 push ebp */
  push32((uint32_t)(EBP));
  /* 11608311 mov ebp, esp */
  EBP = (ESP);
  /* 11608313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608316 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160831d cmp dword ptr [0x116308bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116308bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608324 jne 0x11608383 */
  if (!C.zf) goto L_11608383;
  /* 11608326 push 0x1162b2c0 */
  push32((uint32_t)(0x1162b2c0u));
  /* 1160832b call dword ptr [0x116333a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333a0))), 0x11608331u);
  /* 11608331 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11608334 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608338 je 0x11608357 */
  if (C.zf) goto L_11608357;
  /* 1160833a push 0x1162bec4 */
  push32((uint32_t)(0x1162bec4u));
  /* 1160833f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608342 push eax */
  push32((uint32_t)(EAX));
  /* 11608343 call dword ptr [0x1163339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163339c))), 0x11608349u);
  /* 11608349 mov dword ptr [0x116308bc], eax */
  w32((uint32_t)(0x116308bc), (EAX));
  /* 1160834e cmp dword ptr [0x116308bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116308bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608355 jne 0x1160835b */
  if (!C.zf) goto L_1160835b;
L_11608357:;
  /* 11608357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11608359 jmp 0x116083c7 */
  goto L_116083c7;
L_1160835b:;
  /* 1160835b push 0x1162beb4 */
  push32((uint32_t)(0x1162beb4u));
  /* 11608360 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608363 push ecx */
  push32((uint32_t)(ECX));
  /* 11608364 call dword ptr [0x1163339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163339c))), 0x1160836au);
  /* 1160836a mov dword ptr [0x116308c0], eax */
  w32((uint32_t)(0x116308c0), (EAX));
  /* 1160836f push 0x1162bea0 */
  push32((uint32_t)(0x1162bea0u));
  /* 11608374 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608377 push edx */
  push32((uint32_t)(EDX));
  /* 11608378 call dword ptr [0x1163339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163339c))), 0x1160837eu);
  /* 1160837e mov dword ptr [0x116308c4], eax */
  w32((uint32_t)(0x116308c4), (EAX));
L_11608383:;
  /* 11608383 cmp dword ptr [0x116308c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116308c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160838a je 0x11608395 */
  if (C.zf) goto L_11608395;
  /* 1160838c call dword ptr [0x116308c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116308c0))), 0x11608392u);
  /* 11608392 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11608395:;
  /* 11608395 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608399 je 0x116083b1 */
  if (C.zf) goto L_116083b1;
  /* 1160839b cmp dword ptr [0x116308c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116308c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116083a2 je 0x116083b1 */
  if (C.zf) goto L_116083b1;
  /* 116083a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116083a7 push eax */
  push32((uint32_t)(EAX));
  /* 116083a8 call dword ptr [0x116308c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116308c4))), 0x116083aeu);
  /* 116083ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116083b1:;
  /* 116083b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116083b4 push ecx */
  push32((uint32_t)(ECX));
  /* 116083b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116083b8 push edx */
  push32((uint32_t)(EDX));
  /* 116083b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116083bc push eax */
  push32((uint32_t)(EAX));
  /* 116083bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116083c0 push ecx */
  push32((uint32_t)(ECX));
  /* 116083c1 call dword ptr [0x116308bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116308bc))), 0x116083c7u);
L_116083c7:;
  /* 116083c7 mov esp, ebp */
  ESP = (EBP);
  /* 116083c9 pop ebp */
  EBP = (pop32());
  /* 116083ca ret  */
  ESPCHK(0x11608310u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x116083d0 (254 bytes, 109 insns) */
void f_116083d0(void) {
  FTRACE(0x116083d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116083d0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 116083d4 push edi */
  push32((uint32_t)(EDI));
  /* 116083d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116083d7 je 0x11608453 */
  if (C.zf) goto L_11608453;
  /* 116083d9 push esi */
  push32((uint32_t)(ESI));
  /* 116083da push ebx */
  push32((uint32_t)(EBX));
  /* 116083db mov ebx, ecx */
  EBX = (ECX);
  /* 116083dd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 116083e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 116083e7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 116083eb jne 0x116083f4 */
  if (!C.zf) goto L_116083f4;
  /* 116083ed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116083f0 jne 0x11608461 */
  if (!C.zf) goto L_11608461;
  /* 116083f2 jmp 0x11608415 */
  goto L_11608415;
L_116083f4:;
  /* 116083f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116083f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116083f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116083f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116083fa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116083fb je 0x11608422 */
  if (C.zf) goto L_11608422;
  /* 116083fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116083ff je 0x1160842a */
  if (C.zf) goto L_1160842a;
  /* 11608401 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11608407 jne 0x116083f4 */
  if (!C.zf) goto L_116083f4;
  /* 11608409 mov ebx, ecx */
  EBX = (ECX);
  /* 1160840b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160840e jne 0x11608461 */
  if (!C.zf) goto L_11608461;
L_11608410:;
  /* 11608410 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11608413 je 0x11608422 */
  if (C.zf) goto L_11608422;
L_11608415:;
  /* 11608415 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11608417 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11608418 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160841a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1160841b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1160841d je 0x1160844e */
  if (C.zf) goto L_1160844e;
  /* 1160841f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11608420 jne 0x11608415 */
  if (!C.zf) goto L_11608415;
L_11608422:;
  /* 11608422 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11608426 pop ebx */
  EBX = (pop32());
  /* 11608427 pop esi */
  ESI = (pop32());
  /* 11608428 pop edi */
  EDI = (pop32());
  /* 11608429 ret  */
  ESPCHK(0x116083d0u, _esp0);
  ESP += 4; return;
L_1160842a:;
  /* 1160842a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11608430 je 0x11608444 */
  if (C.zf) goto L_11608444;
L_11608432:;
  /* 11608432 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11608434 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11608435 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11608436 je 0x116084c6 */
  if (C.zf) goto L_116084c6;
  /* 1160843c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11608442 jne 0x11608432 */
  if (!C.zf) goto L_11608432;
L_11608444:;
  /* 11608444 mov ebx, ecx */
  EBX = (ECX);
  /* 11608446 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11608449 jne 0x116084b7 */
  if (!C.zf) goto L_116084b7;
L_1160844b:;
  /* 1160844b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160844d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1160844e:;
  /* 1160844e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1160844f jne 0x1160844b */
  if (!C.zf) goto L_1160844b;
  /* 11608451 pop ebx */
  EBX = (pop32());
  /* 11608452 pop esi */
  ESI = (pop32());
L_11608453:;
  /* 11608453 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11608457 pop edi */
  EDI = (pop32());
  /* 11608458 ret  */
  ESPCHK(0x116083d0u, _esp0);
  ESP += 4; return;
L_11608459:;
  /* 11608459 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1160845b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160845e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1160845f je 0x11608410 */
  if (C.zf) goto L_11608410;
L_11608461:;
  /* 11608461 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11608466 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11608468 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160846a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160846d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160846f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11608471 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11608474 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11608479 je 0x11608459 */
  if (C.zf) goto L_11608459;
  /* 1160847b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1160847d je 0x116084ab */
  if (C.zf) goto L_116084ab;
  /* 1160847f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11608481 je 0x116084a1 */
  if (C.zf) goto L_116084a1;
  /* 11608483 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11608489 je 0x11608497 */
  if (C.zf) goto L_11608497;
  /* 1160848b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11608491 jne 0x11608459 */
  if (!C.zf) goto L_11608459;
  /* 11608493 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11608495 jmp 0x116084af */
  goto L_116084af;
L_11608497:;
  /* 11608497 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1160849d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1160849f jmp 0x116084af */
  goto L_116084af;
L_116084a1:;
  /* 116084a1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116084a7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116084a9 jmp 0x116084af */
  goto L_116084af;
L_116084ab:;
  /* 116084ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116084ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_116084af:;
  /* 116084af add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116084b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116084b4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116084b5 je 0x116084c1 */
  if (C.zf) goto L_116084c1;
L_116084b7:;
  /* 116084b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116084b9:;
  /* 116084b9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 116084bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116084be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116084bf jne 0x116084b9 */
  if (!C.zf) goto L_116084b9;
L_116084c1:;
  /* 116084c1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 116084c4 jne 0x1160844b */
  if (!C.zf) goto L_1160844b;
L_116084c6:;
  /* 116084c6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 116084ca pop ebx */
  EBX = (pop32());
  /* 116084cb pop esi */
  ESI = (pop32());
  /* 116084cc pop edi */
  EDI = (pop32());
  /* 116084cd ret  */
  ESPCHK(0x116083d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100084d0 @ 0x116084d0 (55 bytes, 16 insns) */
void f_116084d0(void) {
  FTRACE(0x116084d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116084d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116084d1 mov ebp, esp */
  EBP = (ESP);
  /* 116084d3 mov eax, dword ptr [0x1162eb84] */
  EAX = (r32((uint32_t)(0x1162eb84)));
  /* 116084d8 push eax */
  push32((uint32_t)(EAX));
  /* 116084d9 call dword ptr [0x11633350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633350))), 0x116084dfu);
  /* 116084df mov ecx, dword ptr [0x1162eb74] */
  ECX = (r32((uint32_t)(0x1162eb74)));
  /* 116084e5 push ecx */
  push32((uint32_t)(ECX));
  /* 116084e6 call dword ptr [0x11633350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633350))), 0x116084ecu);
  /* 116084ec mov edx, dword ptr [0x1162eb64] */
  EDX = (r32((uint32_t)(0x1162eb64)));
  /* 116084f2 push edx */
  push32((uint32_t)(EDX));
  /* 116084f3 call dword ptr [0x11633350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633350))), 0x116084f9u);
  /* 116084f9 mov eax, dword ptr [0x1162eb44] */
  EAX = (r32((uint32_t)(0x1162eb44)));
  /* 116084fe push eax */
  push32((uint32_t)(EAX));
  /* 116084ff call dword ptr [0x11633350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633350))), 0x11608505u);
  /* 11608505 pop ebp */
  EBP = (pop32());
  /* 11608506 ret  */
  ESPCHK(0x116084d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008510 @ 0x11608510 (159 bytes, 47 insns) */
void f_11608510(void) {
  FTRACE(0x11608510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608510 push ebp */
  push32((uint32_t)(EBP));
  /* 11608511 mov ebp, esp */
  EBP = (ESP);
  /* 11608513 push ecx */
  push32((uint32_t)(ECX));
  /* 11608514 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160851b jmp 0x11608526 */
  goto L_11608526;
L_1160851d:;
  /* 1160851d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608520 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11608526:;
  /* 11608526 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160852a jge 0x11608579 */
  if ((C.sf==C.of)) goto L_11608579;
  /* 1160852c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160852f cmp dword ptr [ecx*4 + 0x1162eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1162eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608537 je 0x11608577 */
  if (C.zf) goto L_11608577;
  /* 11608539 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160853d je 0x11608577 */
  if (C.zf) goto L_11608577;
  /* 1160853f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608543 je 0x11608577 */
  if (C.zf) goto L_11608577;
  /* 11608545 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608549 je 0x11608577 */
  if (C.zf) goto L_11608577;
  /* 1160854b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160854f je 0x11608577 */
  if (C.zf) goto L_11608577;
  /* 11608551 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608554 mov eax, dword ptr [edx*4 + 0x1162eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1162eb40)));
  /* 1160855b push eax */
  push32((uint32_t)(EAX));
  /* 1160855c call dword ptr [0x116333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333e0))), 0x11608562u);
  /* 11608562 push 2 */
  push32((uint32_t)(0x2u));
  /* 11608564 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608567 mov edx, dword ptr [ecx*4 + 0x1162eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1162eb40)));
  /* 1160856e push edx */
  push32((uint32_t)(EDX));
  /* 1160856f call 0x11605640 */
  push32(0x11608574u); f_11605640();
  /* 11608574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11608577:;
  /* 11608577 jmp 0x1160851d */
  goto L_1160851d;
L_11608579:;
  /* 11608579 mov eax, dword ptr [0x1162eb64] */
  EAX = (r32((uint32_t)(0x1162eb64)));
  /* 1160857e push eax */
  push32((uint32_t)(EAX));
  /* 1160857f call dword ptr [0x116333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333e0))), 0x11608585u);
  /* 11608585 mov ecx, dword ptr [0x1162eb74] */
  ECX = (r32((uint32_t)(0x1162eb74)));
  /* 1160858b push ecx */
  push32((uint32_t)(ECX));
  /* 1160858c call dword ptr [0x116333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333e0))), 0x11608592u);
  /* 11608592 mov edx, dword ptr [0x1162eb84] */
  EDX = (r32((uint32_t)(0x1162eb84)));
  /* 11608598 push edx */
  push32((uint32_t)(EDX));
  /* 11608599 call dword ptr [0x116333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333e0))), 0x1160859fu);
  /* 1160859f mov eax, dword ptr [0x1162eb44] */
  EAX = (r32((uint32_t)(0x1162eb44)));
  /* 116085a4 push eax */
  push32((uint32_t)(EAX));
  /* 116085a5 call dword ptr [0x116333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333e0))), 0x116085abu);
  /* 116085ab mov esp, ebp */
  ESP = (EBP);
  /* 116085ad pop ebp */
  EBP = (pop32());
  /* 116085ae ret  */
  ESPCHK(0x11608510u, _esp0);
  ESP += 4; return;
}

/* FUN_100085b0 @ 0x116085b0 (151 bytes, 46 insns) */
void f_116085b0(void) {
  FTRACE(0x116085b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116085b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116085b1 mov ebp, esp */
  EBP = (ESP);
  /* 116085b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116085b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116085b7 cmp dword ptr [eax*4 + 0x1162eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1162eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116085bf jne 0x11608632 */
  if (!C.zf) goto L_11608632;
  /* 116085c1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 116085c6 push 0x1162bed0 */
  push32((uint32_t)(0x1162bed0u));
  /* 116085cb push 2 */
  push32((uint32_t)(0x2u));
  /* 116085cd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 116085cf call 0x11604bb0 */
  push32(0x116085d4u); f_11604bb0();
  /* 116085d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116085d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116085da cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116085de jne 0x116085ea */
  if (!C.zf) goto L_116085ea;
  /* 116085e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116085e2 call 0x11603b20 */
  push32(0x116085e7u); f_11603b20();
  /* 116085e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116085ea:;
  /* 116085ea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116085ec call 0x116085b0 */
  push32(0x116085f1u); f_116085b0();
  /* 116085f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116085f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116085f7 cmp dword ptr [ecx*4 + 0x1162eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1162eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116085ff jne 0x1160861a */
  if (!C.zf) goto L_1160861a;
  /* 11608601 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608604 push edx */
  push32((uint32_t)(EDX));
  /* 11608605 call dword ptr [0x11633350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633350))), 0x1160860bu);
  /* 1160860b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160860e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608611 mov dword ptr [eax*4 + 0x1162eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1162eb40), (ECX));
  /* 11608618 jmp 0x11608628 */
  goto L_11608628;
L_1160861a:;
  /* 1160861a push 2 */
  push32((uint32_t)(0x2u));
  /* 1160861c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160861f push edx */
  push32((uint32_t)(EDX));
  /* 11608620 call 0x11605640 */
  push32(0x11608625u); f_11605640();
  /* 11608625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11608628:;
  /* 11608628 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1160862a call 0x11608650 */
  push32(0x1160862fu); f_11608650();
  /* 1160862f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11608632:;
  /* 11608632 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608635 mov ecx, dword ptr [eax*4 + 0x1162eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1162eb40)));
  /* 1160863c push ecx */
  push32((uint32_t)(ECX));
  /* 1160863d call dword ptr [0x1163334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163334c))), 0x11608643u);
  /* 11608643 mov esp, ebp */
  ESP = (EBP);
  /* 11608645 pop ebp */
  EBP = (pop32());
  /* 11608646 ret  */
  ESPCHK(0x116085b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008650 @ 0x11608650 (22 bytes, 8 insns) */
void f_11608650(void) {
  FTRACE(0x11608650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608650 push ebp */
  push32((uint32_t)(EBP));
  /* 11608651 mov ebp, esp */
  EBP = (ESP);
  /* 11608653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608656 mov ecx, dword ptr [eax*4 + 0x1162eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1162eb40)));
  /* 1160865d push ecx */
  push32((uint32_t)(ECX));
  /* 1160865e call dword ptr [0x11633348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633348))), 0x11608664u);
  /* 11608664 pop ebp */
  EBP = (pop32());
  /* 11608665 ret  */
  ESPCHK(0x11608650u, _esp0);
  ESP += 4; return;
}

/* FUN_10008670 @ 0x11608670 (26 bytes, 10 insns) */
void f_11608670(void) {
  FTRACE(0x11608670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608670 push ebp */
  push32((uint32_t)(EBP));
  /* 11608671 mov ebp, esp */
  EBP = (ESP);
  /* 11608673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608676 push eax */
  push32((uint32_t)(EAX));
  /* 11608677 push 0 */
  push32((uint32_t)(0x0u));
  /* 11608679 call dword ptr [0x11633344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633344))), 0x1160867fu);
  /* 1160867f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11608684 call dword ptr [0x116333ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333ac))), 0x1160868au);
  /* 1160868a pop ebp */
  EBP = (pop32());
  /* 1160868b ret  */
  ESPCHK(0x11608670u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11608690 (446 bytes, 130 insns) */
void f_11608690(void) {
  FTRACE(0x11608690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608690 push ebp */
  push32((uint32_t)(EBP));
  /* 11608691 mov ebp, esp */
  EBP = (ESP);
  /* 11608693 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608696 call 0x116045f0 */
  push32(0x1160869bu); f_116045f0();
  /* 1160869b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160869e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116086a1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 116086a4 push ecx */
  push32((uint32_t)(ECX));
  /* 116086a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116086a8 push edx */
  push32((uint32_t)(EDX));
  /* 116086a9 call 0x11608850 */
  push32(0x116086aeu); f_11608850();
  /* 116086ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116086b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116086b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116086b8 je 0x116086c3 */
  if (C.zf) goto L_116086c3;
  /* 116086ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116086bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116086c1 jne 0x116086d2 */
  if (!C.zf) goto L_116086d2;
L_116086c3:;
  /* 116086c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116086c6 push ecx */
  push32((uint32_t)(ECX));
  /* 116086c7 call dword ptr [0x11633340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633340))), 0x116086cdu);
  /* 116086cd jmp 0x1160884a */
  goto L_1160884a;
L_116086d2:;
  /* 116086d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116086d5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116086d9 jne 0x116086ef */
  if (!C.zf) goto L_116086ef;
  /* 116086db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116086de mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 116086e5 mov eax, 1 */
  EAX = (0x1u);
  /* 116086ea jmp 0x1160884a */
  goto L_1160884a;
L_116086ef:;
  /* 116086ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116086f2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116086f6 jne 0x11608700 */
  if (!C.zf) goto L_11608700;
  /* 116086f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116086fb jmp 0x1160884a */
  goto L_1160884a;
L_11608700:;
  /* 11608700 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11608703 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11608706 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11608709 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160870c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1160870f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11608712 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608715 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608718 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1160871b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160871e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608722 jne 0x11608827 */
  if (!C.zf) goto L_11608827;
  /* 11608728 mov eax, dword ptr [0x1162ec78] */
  EAX = (r32((uint32_t)(0x1162ec78)));
  /* 1160872d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11608730 jmp 0x1160873b */
  goto L_1160873b;
L_11608732:;
  /* 11608732 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11608735 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608738 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1160873b:;
  /* 1160873b mov edx, dword ptr [0x1162ec78] */
  EDX = (r32((uint32_t)(0x1162ec78)));
  /* 11608741 add edx, dword ptr [0x1162ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1162ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608747 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160874a jge 0x11608762 */
  if ((C.sf==C.of)) goto L_11608762;
  /* 1160874c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160874f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11608752 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608755 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11608758 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11608760 jmp 0x11608732 */
  goto L_11608732;
L_11608762:;
  /* 11608762 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608765 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11608768 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160876b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160876e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608774 jne 0x11608785 */
  if (!C.zf) goto L_11608785;
  /* 11608776 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608779 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11608780 jmp 0x1160880d */
  goto L_1160880d;
L_11608785:;
  /* 11608785 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11608788 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160878e jne 0x1160879c */
  if (!C.zf) goto L_1160879c;
  /* 11608790 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608793 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1160879a jmp 0x1160880d */
  goto L_1160880d;
L_1160879c:;
  /* 1160879c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160879f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116087a5 jne 0x116087b3 */
  if (!C.zf) goto L_116087b3;
  /* 116087a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116087aa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 116087b1 jmp 0x1160880d */
  goto L_1160880d;
L_116087b3:;
  /* 116087b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116087b6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116087bc jne 0x116087ca */
  if (!C.zf) goto L_116087ca;
  /* 116087be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116087c1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 116087c8 jmp 0x1160880d */
  goto L_1160880d;
L_116087ca:;
  /* 116087ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116087cd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116087d3 jne 0x116087e1 */
  if (!C.zf) goto L_116087e1;
  /* 116087d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116087d8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 116087df jmp 0x1160880d */
  goto L_1160880d;
L_116087e1:;
  /* 116087e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116087e4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116087ea jne 0x116087f8 */
  if (!C.zf) goto L_116087f8;
  /* 116087ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116087ef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 116087f6 jmp 0x1160880d */
  goto L_1160880d;
L_116087f8:;
  /* 116087f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116087fb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608801 jne 0x1160880d */
  if (!C.zf) goto L_1160880d;
  /* 11608803 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608806 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1160880d:;
  /* 1160880d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608810 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11608813 push edx */
  push32((uint32_t)(EDX));
  /* 11608814 push 8 */
  push32((uint32_t)(0x8u));
  /* 11608816 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11608819u);
  /* 11608819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160881c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160881f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11608822 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11608825 jmp 0x1160883e */
  goto L_1160883e;
L_11608827:;
  /* 11608827 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160882a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11608831 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11608834 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11608837 push ecx */
  push32((uint32_t)(ECX));
  /* 11608838 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1160883bu);
  /* 1160883b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160883e:;
  /* 1160883e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608841 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11608844 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11608847 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1160884a:;
  /* 1160884a mov esp, ebp */
  ESP = (EBP);
  /* 1160884c pop ebp */
  EBP = (pop32());
  /* 1160884d ret  */
  ESPCHK(0x11608690u, _esp0);
  ESP += 4; return;
}

/* FUN_10008850 @ 0x11608850 (89 bytes, 35 insns) */
void f_11608850(void) {
  FTRACE(0x11608850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608850 push ebp */
  push32((uint32_t)(EBP));
  /* 11608851 mov ebp, esp */
  EBP = (ESP);
  /* 11608853 push ecx */
  push32((uint32_t)(ECX));
  /* 11608854 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608857 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160885a:;
  /* 1160885a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160885d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1160885f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608862 je 0x11608882 */
  if (C.zf) goto L_11608882;
  /* 11608864 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608867 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160886a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160886d mov ecx, dword ptr [0x1162ec84] */
  ECX = (r32((uint32_t)(0x1162ec84)));
  /* 11608873 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11608876 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608879 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160887b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160887e jae 0x11608882 */
  if (!C.cf) goto L_11608882;
  /* 11608880 jmp 0x1160885a */
  goto L_1160885a;
L_11608882:;
  /* 11608882 mov eax, dword ptr [0x1162ec84] */
  EAX = (r32((uint32_t)(0x1162ec84)));
  /* 11608887 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160888a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160888d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160888f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608892 jae 0x1160889e */
  if (!C.cf) goto L_1160889e;
  /* 11608894 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608897 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11608899 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160889c je 0x116088a2 */
  if (C.zf) goto L_116088a2;
L_1160889e:;
  /* 1160889e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116088a0 jmp 0x116088a5 */
  goto L_116088a5;
L_116088a2:;
  /* 116088a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116088a5:;
  /* 116088a5 mov esp, ebp */
  ESP = (EBP);
  /* 116088a7 pop ebp */
  EBP = (pop32());
  /* 116088a8 ret  */
  ESPCHK(0x11608850u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x116088b0 (48 bytes, 17 insns) */
void f_116088b0(void) {
  FTRACE(0x116088b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116088b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116088b1 mov ebp, esp */
  EBP = (ESP);
  /* 116088b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116088b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 116088b6 call 0x116085b0 */
  push32(0x116088bbu); f_116085b0();
  /* 116088bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116088be mov eax, dword ptr [0x1163092c] */
  EAX = (r32((uint32_t)(0x1163092c)));
  /* 116088c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116088c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116088c9 mov dword ptr [0x1163092c], ecx */
  w32((uint32_t)(0x1163092c), (ECX));
  /* 116088cf push 9 */
  push32((uint32_t)(0x9u));
  /* 116088d1 call 0x11608650 */
  push32(0x116088d6u); f_11608650();
  /* 116088d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116088d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116088dc mov esp, ebp */
  ESP = (EBP);
  /* 116088de pop ebp */
  EBP = (pop32());
  /* 116088df ret  */
  ESPCHK(0x116088b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088e0 @ 0x116088e0 (10 bytes, 5 insns) */
void f_116088e0(void) {
  FTRACE(0x116088e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116088e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116088e1 mov ebp, esp */
  EBP = (ESP);
  /* 116088e3 mov eax, dword ptr [0x1163092c] */
  EAX = (r32((uint32_t)(0x1163092c)));
  /* 116088e8 pop ebp */
  EBP = (pop32());
  /* 116088e9 ret  */
  ESPCHK(0x116088e0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x116088f0 (45 bytes, 19 insns) */
void f_116088f0(void) {
  FTRACE(0x116088f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116088f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116088f1 mov ebp, esp */
  EBP = (ESP);
  /* 116088f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116088f4 mov eax, dword ptr [0x1163092c] */
  EAX = (r32((uint32_t)(0x1163092c)));
  /* 116088f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116088fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608900 je 0x11608910 */
  if (C.zf) goto L_11608910;
  /* 11608902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608905 push ecx */
  push32((uint32_t)(ECX));
  /* 11608906 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11608909u);
  /* 11608909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160890c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160890e jne 0x11608914 */
  if (!C.zf) goto L_11608914;
L_11608910:;
  /* 11608910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11608912 jmp 0x11608919 */
  goto L_11608919;
L_11608914:;
  /* 11608914 mov eax, 1 */
  EAX = (0x1u);
L_11608919:;
  /* 11608919 mov esp, ebp */
  ESP = (EBP);
  /* 1160891b pop ebp */
  EBP = (pop32());
  /* 1160891c ret  */
  ESPCHK(0x116088f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11608920 (88 bytes, 40 insns) */
void f_11608920(void) {
  FTRACE(0x11608920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608920 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11608924 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11608928 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160892a je 0x11608973 */
  if (C.zf) goto L_11608973;
  /* 1160892c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160892e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11608932 push edi */
  push32((uint32_t)(EDI));
  /* 11608933 mov edi, ecx */
  EDI = (ECX);
  /* 11608935 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608938 jb 0x11608967 */
  if (C.cf) goto L_11608967;
  /* 1160893a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160893c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1160893f je 0x11608949 */
  if (C.zf) goto L_11608949;
  /* 11608941 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11608943:;
  /* 11608943 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11608945 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11608946 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11608947 jne 0x11608943 */
  if (!C.zf) goto L_11608943;
L_11608949:;
  /* 11608949 mov ecx, eax */
  ECX = (EAX);
  /* 1160894b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1160894e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608950 mov ecx, eax */
  ECX = (EAX);
  /* 11608952 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11608955 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608957 mov ecx, edx */
  ECX = (EDX);
  /* 11608959 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1160895c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160895f je 0x11608967 */
  if (C.zf) goto L_11608967;
  /* 11608961 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11608963 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11608965 je 0x1160896d */
  if (C.zf) goto L_1160896d;
L_11608967:;
  /* 11608967 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11608969 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1160896a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1160896b jne 0x11608967 */
  if (!C.zf) goto L_11608967;
L_1160896d:;
  /* 1160896d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11608971 pop edi */
  EDI = (pop32());
  /* 11608972 ret  */
  ESPCHK(0x11608920u, _esp0);
  ESP += 4; return;
L_11608973:;
  /* 11608973 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11608977 ret  */
  ESPCHK(0x11608920u, _esp0);
  ESP += 4; return;
}

/* FUN_10008980 @ 0x11608980 (23 bytes, 10 insns) */
void f_11608980(void) {
  FTRACE(0x11608980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608980 push ebp */
  push32((uint32_t)(EBP));
  /* 11608981 mov ebp, esp */
  EBP = (ESP);
  /* 11608983 mov eax, dword ptr [0x11630928] */
  EAX = (r32((uint32_t)(0x11630928)));
  /* 11608988 push eax */
  push32((uint32_t)(EAX));
  /* 11608989 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160898c push ecx */
  push32((uint32_t)(ECX));
  /* 1160898d call 0x116089a0 */
  push32(0x11608992u); f_116089a0();
  /* 11608992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608995 pop ebp */
  EBP = (pop32());
  /* 11608996 ret  */
  ESPCHK(0x11608980u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x116089a0 (87 bytes, 34 insns) */
void f_116089a0(void) {
  FTRACE(0x116089a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116089a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116089a1 mov ebp, esp */
  EBP = (ESP);
  /* 116089a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116089a4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116089a8 jbe 0x116089ae */
  if ((C.cf||C.zf)) goto L_116089ae;
  /* 116089aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116089ac jmp 0x116089f3 */
  goto L_116089f3;
L_116089ae:;
  /* 116089ae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116089b2 ja 0x116089c5 */
  if ((!C.cf&&!C.zf)) goto L_116089c5;
  /* 116089b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116089b7 push eax */
  push32((uint32_t)(EAX));
  /* 116089b8 call 0x11608a00 */
  push32(0x116089bdu); f_11608a00();
  /* 116089bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116089c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116089c3 jmp 0x116089cc */
  goto L_116089cc;
L_116089c5:;
  /* 116089c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116089cc:;
  /* 116089cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116089d0 jne 0x116089d8 */
  if (!C.zf) goto L_116089d8;
  /* 116089d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116089d6 jne 0x116089dd */
  if (!C.zf) goto L_116089dd;
L_116089d8:;
  /* 116089d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116089db jmp 0x116089f3 */
  goto L_116089f3;
L_116089dd:;
  /* 116089dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116089e0 push ecx */
  push32((uint32_t)(ECX));
  /* 116089e1 call 0x116088f0 */
  push32(0x116089e6u); f_116088f0();
  /* 116089e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116089e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116089eb jne 0x116089f1 */
  if (!C.zf) goto L_116089f1;
  /* 116089ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116089ef jmp 0x116089f3 */
  goto L_116089f3;
L_116089f1:;
  /* 116089f1 jmp 0x116089ae */
  goto L_116089ae;
L_116089f3:;
  /* 116089f3 mov esp, ebp */
  ESP = (EBP);
  /* 116089f5 pop ebp */
  EBP = (pop32());
  /* 116089f6 ret  */
  ESPCHK(0x116089a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a00 @ 0x11608a00 (109 bytes, 37 insns) */
void f_11608a00(void) {
  FTRACE(0x11608a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11608a01 mov ebp, esp */
  EBP = (ESP);
  /* 11608a03 push ecx */
  push32((uint32_t)(ECX));
  /* 11608a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608a07 cmp eax, dword ptr [0x1162ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1162ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608a0d ja 0x11608a3d */
  if ((!C.cf&&!C.zf)) goto L_11608a3d;
  /* 11608a0f push 9 */
  push32((uint32_t)(0x9u));
  /* 11608a11 call 0x116085b0 */
  push32(0x11608a16u); f_116085b0();
  /* 11608a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608a1c push ecx */
  push32((uint32_t)(ECX));
  /* 11608a1d call 0x11609540 */
  push32(0x11608a22u); f_11609540();
  /* 11608a22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608a25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11608a28 push 9 */
  push32((uint32_t)(0x9u));
  /* 11608a2a call 0x11608650 */
  push32(0x11608a2fu); f_11608650();
  /* 11608a2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608a32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608a36 je 0x11608a3d */
  if (C.zf) goto L_11608a3d;
  /* 11608a38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608a3b jmp 0x11608a69 */
  goto L_11608a69;
L_11608a3d:;
  /* 11608a3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608a41 jne 0x11608a4a */
  if (!C.zf) goto L_11608a4a;
  /* 11608a43 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11608a4a:;
  /* 11608a4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608a4d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608a50 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11608a53 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11608a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608a59 push eax */
  push32((uint32_t)(EAX));
  /* 11608a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11608a5c mov ecx, dword ptr [0x116320ec] */
  ECX = (r32((uint32_t)(0x116320ec)));
  /* 11608a62 push ecx */
  push32((uint32_t)(ECX));
  /* 11608a63 call dword ptr [0x1163333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163333c))), 0x11608a69u);
L_11608a69:;
  /* 11608a69 mov esp, ebp */
  ESP = (EBP);
  /* 11608a6b pop ebp */
  EBP = (pop32());
  /* 11608a6c ret  */
  ESPCHK(0x11608a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a70 @ 0x11608a70 (10 bytes, 5 insns) */
void f_11608a70(void) {
  FTRACE(0x11608a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11608a71 mov ebp, esp */
  EBP = (ESP);
  /* 11608a73 mov eax, 1 */
  EAX = (0x1u);
  /* 11608a78 pop ebp */
  EBP = (pop32());
  /* 11608a79 ret  */
  ESPCHK(0x11608a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a80 @ 0x11608a80 (173 bytes, 59 insns) */
void f_11608a80(void) {
  FTRACE(0x11608a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11608a81 mov ebp, esp */
  EBP = (ESP);
  /* 11608a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608a86 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608a8a jbe 0x11608a93 */
  if ((C.cf||C.zf)) goto L_11608a93;
  /* 11608a8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11608a8e jmp 0x11608b29 */
  goto L_11608b29;
L_11608a93:;
  /* 11608a93 push 9 */
  push32((uint32_t)(0x9u));
  /* 11608a95 call 0x116085b0 */
  push32(0x11608a9au); f_116085b0();
  /* 11608a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608a9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608aa0 push eax */
  push32((uint32_t)(EAX));
  /* 11608aa1 call 0x11608eb0 */
  push32(0x11608aa6u); f_11608eb0();
  /* 11608aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608aa9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11608aac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608ab0 je 0x11608af1 */
  if (C.zf) goto L_11608af1;
  /* 11608ab2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11608ab9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608abc cmp ecx, dword ptr [0x1162ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1162ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608ac2 ja 0x11608ae2 */
  if ((!C.cf&&!C.zf)) goto L_11608ae2;
  /* 11608ac4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608ac7 push edx */
  push32((uint32_t)(EDX));
  /* 11608ac8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608acb push eax */
  push32((uint32_t)(EAX));
  /* 11608acc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608acf push ecx */
  push32((uint32_t)(ECX));
  /* 11608ad0 call 0x11609d80 */
  push32(0x11608ad5u); f_11609d80();
  /* 11608ad5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11608ada je 0x11608ae2 */
  if (C.zf) goto L_11608ae2;
  /* 11608adc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608adf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11608ae2:;
  /* 11608ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11608ae4 call 0x11608650 */
  push32(0x11608ae9u); f_11608650();
  /* 11608ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608aec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608aef jmp 0x11608b29 */
  goto L_11608b29;
L_11608af1:;
  /* 11608af1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11608af3 call 0x11608650 */
  push32(0x11608af8u); f_11608650();
  /* 11608af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608afb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608aff jne 0x11608b08 */
  if (!C.zf) goto L_11608b08;
  /* 11608b01 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11608b08:;
  /* 11608b08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608b0b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608b0e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11608b10 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11608b13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608b16 push ecx */
  push32((uint32_t)(ECX));
  /* 11608b17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608b1a push edx */
  push32((uint32_t)(EDX));
  /* 11608b1b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11608b1d mov eax, dword ptr [0x116320ec] */
  EAX = (r32((uint32_t)(0x116320ec)));
  /* 11608b22 push eax */
  push32((uint32_t)(EAX));
  /* 11608b23 call dword ptr [0x11633338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633338))), 0x11608b29u);
L_11608b29:;
  /* 11608b29 mov esp, ebp */
  ESP = (EBP);
  /* 11608b2b pop ebp */
  EBP = (pop32());
  /* 11608b2c ret  */
  ESPCHK(0x11608a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b30 @ 0x11608b30 (490 bytes, 165 insns) */
void f_11608b30(void) {
  FTRACE(0x11608b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11608b31 mov ebp, esp */
  EBP = (ESP);
  /* 11608b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608b36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608b3a jne 0x11608b4d */
  if (!C.zf) goto L_11608b4d;
  /* 11608b3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608b3f push eax */
  push32((uint32_t)(EAX));
  /* 11608b40 call 0x11608980 */
  push32(0x11608b45u); f_11608980();
  /* 11608b45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608b48 jmp 0x11608d16 */
  goto L_11608d16;
L_11608b4d:;
  /* 11608b4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608b51 jne 0x11608b66 */
  if (!C.zf) goto L_11608b66;
  /* 11608b53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608b56 push ecx */
  push32((uint32_t)(ECX));
  /* 11608b57 call 0x11608d20 */
  push32(0x11608b5cu); f_11608d20();
  /* 11608b5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608b5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11608b61 jmp 0x11608d16 */
  goto L_11608d16;
L_11608b66:;
  /* 11608b66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11608b6d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608b71 ja 0x11608ce9 */
  if ((!C.cf&&!C.zf)) goto L_11608ce9;
  /* 11608b77 push 9 */
  push32((uint32_t)(0x9u));
  /* 11608b79 call 0x116085b0 */
  push32(0x11608b7eu); f_116085b0();
  /* 11608b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608b84 push edx */
  push32((uint32_t)(EDX));
  /* 11608b85 call 0x11608eb0 */
  push32(0x11608b8au); f_11608eb0();
  /* 11608b8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608b8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11608b90 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608b94 je 0x11608cac */
  if (C.zf) goto L_11608cac;
  /* 11608b9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608b9d cmp eax, dword ptr [0x1162ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1162ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608ba3 ja 0x11608c20 */
  if ((!C.cf&&!C.zf)) goto L_11608c20;
  /* 11608ba5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 11608ba9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608bac push edx */
  push32((uint32_t)(EDX));
  /* 11608bad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11608bb0 push eax */
  push32((uint32_t)(EAX));
  /* 11608bb1 call 0x11609d80 */
  push32(0x11608bb6u); f_11609d80();
  /* 11608bb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608bb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11608bbb je 0x11608bc5 */
  if (C.zf) goto L_11608bc5;
  /* 11608bbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608bc0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11608bc3 jmp 0x11608c20 */
  goto L_11608c20;
L_11608bc5:;
  /* 11608bc5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608bc8 push edx */
  push32((uint32_t)(EDX));
  /* 11608bc9 call 0x11609540 */
  push32(0x11608bceu); f_11609540();
  /* 11608bce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608bd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11608bd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608bd8 je 0x11608c20 */
  if (C.zf) goto L_11608c20;
  /* 11608bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608bdd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11608be0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608be3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11608be6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608be9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608bec jae 0x11608bf6 */
  if (!C.cf) goto L_11608bf6;
  /* 11608bee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608bf1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11608bf4 jmp 0x11608bfc */
  goto L_11608bfc;
L_11608bf6:;
  /* 11608bf6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608bf9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11608bfc:;
  /* 11608bfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11608bff push edx */
  push32((uint32_t)(EDX));
  /* 11608c00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608c03 push eax */
  push32((uint32_t)(EAX));
  /* 11608c04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608c07 push ecx */
  push32((uint32_t)(ECX));
  /* 11608c08 call 0x1160b490 */
  push32(0x11608c0du); f_1160b490();
  /* 11608c0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608c10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608c13 push edx */
  push32((uint32_t)(EDX));
  /* 11608c14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11608c17 push eax */
  push32((uint32_t)(EAX));
  /* 11608c18 call 0x11608f70 */
  push32(0x11608c1du); f_11608f70();
  /* 11608c1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11608c20:;
  /* 11608c20 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608c24 jne 0x11608ca0 */
  if (!C.zf) goto L_11608ca0;
  /* 11608c26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608c2a jne 0x11608c33 */
  if (!C.zf) goto L_11608c33;
  /* 11608c2c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11608c33:;
  /* 11608c33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608c36 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608c39 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11608c3c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11608c3f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608c42 push edx */
  push32((uint32_t)(EDX));
  /* 11608c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11608c45 mov eax, dword ptr [0x116320ec] */
  EAX = (r32((uint32_t)(0x116320ec)));
  /* 11608c4a push eax */
  push32((uint32_t)(EAX));
  /* 11608c4b call dword ptr [0x1163333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163333c))), 0x11608c51u);
  /* 11608c51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11608c54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608c58 je 0x11608ca0 */
  if (C.zf) goto L_11608ca0;
  /* 11608c5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608c5d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11608c60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608c63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11608c66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608c69 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608c6c jae 0x11608c76 */
  if (!C.cf) goto L_11608c76;
  /* 11608c6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608c71 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11608c74 jmp 0x11608c7c */
  goto L_11608c7c;
L_11608c76:;
  /* 11608c76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608c79 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11608c7c:;
  /* 11608c7c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11608c7f push eax */
  push32((uint32_t)(EAX));
  /* 11608c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11608c84 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608c87 push edx */
  push32((uint32_t)(EDX));
  /* 11608c88 call 0x1160b490 */
  push32(0x11608c8du); f_1160b490();
  /* 11608c8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608c90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608c93 push eax */
  push32((uint32_t)(EAX));
  /* 11608c94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11608c97 push ecx */
  push32((uint32_t)(ECX));
  /* 11608c98 call 0x11608f70 */
  push32(0x11608c9du); f_11608f70();
  /* 11608c9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11608ca0:;
  /* 11608ca0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11608ca2 call 0x11608650 */
  push32(0x11608ca7u); f_11608650();
  /* 11608ca7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608caa jmp 0x11608ce9 */
  goto L_11608ce9;
L_11608cac:;
  /* 11608cac push 9 */
  push32((uint32_t)(0x9u));
  /* 11608cae call 0x11608650 */
  push32(0x11608cb3u); f_11608650();
  /* 11608cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608cb6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608cba jne 0x11608cc3 */
  if (!C.zf) goto L_11608cc3;
  /* 11608cbc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11608cc3:;
  /* 11608cc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608cc6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608cc9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11608ccc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11608ccf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608cd2 push eax */
  push32((uint32_t)(EAX));
  /* 11608cd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11608cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11608cd9 mov edx, dword ptr [0x116320ec] */
  EDX = (r32((uint32_t)(0x116320ec)));
  /* 11608cdf push edx */
  push32((uint32_t)(EDX));
  /* 11608ce0 call dword ptr [0x11633338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633338))), 0x11608ce6u);
  /* 11608ce6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11608ce9:;
  /* 11608ce9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608ced jne 0x11608cf8 */
  if (!C.zf) goto L_11608cf8;
  /* 11608cef cmp dword ptr [0x11630928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608cf6 jne 0x11608cfd */
  if (!C.zf) goto L_11608cfd;
L_11608cf8:;
  /* 11608cf8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608cfb jmp 0x11608d16 */
  goto L_11608d16;
L_11608cfd:;
  /* 11608cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608d00 push eax */
  push32((uint32_t)(EAX));
  /* 11608d01 call 0x116088f0 */
  push32(0x11608d06u); f_116088f0();
  /* 11608d06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11608d0b jne 0x11608d11 */
  if (!C.zf) goto L_11608d11;
  /* 11608d0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11608d0f jmp 0x11608d16 */
  goto L_11608d16;
L_11608d11:;
  /* 11608d11 jmp 0x11608b66 */
  goto L_11608b66;
L_11608d16:;
  /* 11608d16 mov esp, ebp */
  ESP = (EBP);
  /* 11608d18 pop ebp */
  EBP = (pop32());
  /* 11608d19 ret  */
  ESPCHK(0x11608b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d20 @ 0x11608d20 (104 bytes, 38 insns) */
void f_11608d20(void) {
  FTRACE(0x11608d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11608d21 mov ebp, esp */
  EBP = (ESP);
  /* 11608d23 push ecx */
  push32((uint32_t)(ECX));
  /* 11608d24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608d28 jne 0x11608d2c */
  if (!C.zf) goto L_11608d2c;
  /* 11608d2a jmp 0x11608d84 */
  goto L_11608d84;
L_11608d2c:;
  /* 11608d2c push 9 */
  push32((uint32_t)(0x9u));
  /* 11608d2e call 0x116085b0 */
  push32(0x11608d33u); f_116085b0();
  /* 11608d33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608d39 push eax */
  push32((uint32_t)(EAX));
  /* 11608d3a call 0x11608eb0 */
  push32(0x11608d3fu); f_11608eb0();
  /* 11608d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608d42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11608d45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608d49 je 0x11608d67 */
  if (C.zf) goto L_11608d67;
  /* 11608d4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608d4e push ecx */
  push32((uint32_t)(ECX));
  /* 11608d4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608d52 push edx */
  push32((uint32_t)(EDX));
  /* 11608d53 call 0x11608f70 */
  push32(0x11608d58u); f_11608f70();
  /* 11608d58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608d5b push 9 */
  push32((uint32_t)(0x9u));
  /* 11608d5d call 0x11608650 */
  push32(0x11608d62u); f_11608650();
  /* 11608d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608d65 jmp 0x11608d84 */
  goto L_11608d84;
L_11608d67:;
  /* 11608d67 push 9 */
  push32((uint32_t)(0x9u));
  /* 11608d69 call 0x11608650 */
  push32(0x11608d6eu); f_11608650();
  /* 11608d6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608d71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608d74 push eax */
  push32((uint32_t)(EAX));
  /* 11608d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11608d77 mov ecx, dword ptr [0x116320ec] */
  ECX = (r32((uint32_t)(0x116320ec)));
  /* 11608d7d push ecx */
  push32((uint32_t)(ECX));
  /* 11608d7e call dword ptr [0x1163335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163335c))), 0x11608d84u);
L_11608d84:;
  /* 11608d84 mov esp, ebp */
  ESP = (EBP);
  /* 11608d86 pop ebp */
  EBP = (pop32());
  /* 11608d87 ret  */
  ESPCHK(0x11608d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d90 @ 0x11608d90 (116 bytes, 34 insns) */
void f_11608d90(void) {
  FTRACE(0x11608d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11608d91 mov ebp, esp */
  EBP = (ESP);
  /* 11608d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11608d94 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11608d9b push 9 */
  push32((uint32_t)(0x9u));
  /* 11608d9d call 0x116085b0 */
  push32(0x11608da2u); f_116085b0();
  /* 11608da2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608da5 call 0x1160a4a0 */
  push32(0x11608daau); f_1160a4a0();
  /* 11608daa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11608dac jge 0x11608db5 */
  if ((C.sf==C.of)) goto L_11608db5;
  /* 11608dae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11608db5:;
  /* 11608db5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11608db7 call 0x11608650 */
  push32(0x11608dbcu); f_11608650();
  /* 11608dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11608dbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11608dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11608dc3 mov eax, dword ptr [0x116320ec] */
  EAX = (r32((uint32_t)(0x116320ec)));
  /* 11608dc8 push eax */
  push32((uint32_t)(EAX));
  /* 11608dc9 call dword ptr [0x1163337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163337c))), 0x11608dcfu);
  /* 11608dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11608dd1 jne 0x11608dfd */
  if (!C.zf) goto L_11608dfd;
  /* 11608dd3 call dword ptr [0x116333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333b4))), 0x11608dd9u);
  /* 11608dd9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608ddc jne 0x11608df6 */
  if (!C.zf) goto L_11608df6;
  /* 11608dde call 0x1160ca90 */
  push32(0x11608de3u); f_1160ca90();
  /* 11608de3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11608de9 call 0x1160ca80 */
  push32(0x11608deeu); f_1160ca80();
  /* 11608dee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11608df4 jmp 0x11608dfd */
  goto L_11608dfd;
L_11608df6:;
  /* 11608df6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11608dfd:;
  /* 11608dfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608e00 mov esp, ebp */
  ESP = (EBP);
  /* 11608e02 pop ebp */
  EBP = (pop32());
  /* 11608e03 ret  */
  ESPCHK(0x11608d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e10 @ 0x11608e10 (10 bytes, 5 insns) */
void f_11608e10(void) {
  FTRACE(0x11608e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11608e11 mov ebp, esp */
  EBP = (ESP);
  /* 11608e13 call 0x11608d90 */
  push32(0x11608e18u); f_11608d90();
  /* 11608e18 pop ebp */
  EBP = (pop32());
  /* 11608e19 ret  */
  ESPCHK(0x11608e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e20 @ 0x11608e20 (10 bytes, 5 insns) */
void f_11608e20(void) {
  FTRACE(0x11608e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11608e21 mov ebp, esp */
  EBP = (ESP);
  /* 11608e23 mov eax, dword ptr [0x1162ec94] */
  EAX = (r32((uint32_t)(0x1162ec94)));
  /* 11608e28 pop ebp */
  EBP = (pop32());
  /* 11608e29 ret  */
  ESPCHK(0x11608e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x11608e30 (31 bytes, 11 insns) */
void f_11608e30(void) {
  FTRACE(0x11608e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11608e31 mov ebp, esp */
  EBP = (ESP);
  /* 11608e33 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608e3a jbe 0x11608e40 */
  if ((C.cf||C.zf)) goto L_11608e40;
  /* 11608e3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11608e3e jmp 0x11608e4d */
  goto L_11608e4d;
L_11608e40:;
  /* 11608e40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608e43 mov dword ptr [0x1162ec94], eax */
  w32((uint32_t)(0x1162ec94), (EAX));
  /* 11608e48 mov eax, 1 */
  EAX = (0x1u);
L_11608e4d:;
  /* 11608e4d pop ebp */
  EBP = (pop32());
  /* 11608e4e ret  */
  ESPCHK(0x11608e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e50 @ 0x11608e50 (89 bytes, 20 insns) */
void f_11608e50(void) {
  FTRACE(0x11608e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11608e51 mov ebp, esp */
  EBP = (ESP);
  /* 11608e53 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11608e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11608e5a mov eax, dword ptr [0x116320ec] */
  EAX = (r32((uint32_t)(0x116320ec)));
  /* 11608e5f push eax */
  push32((uint32_t)(EAX));
  /* 11608e60 call dword ptr [0x1163333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163333c))), 0x11608e66u);
  /* 11608e66 mov dword ptr [0x116320e8], eax */
  w32((uint32_t)(0x116320e8), (EAX));
  /* 11608e6b cmp dword ptr [0x116320e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116320e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608e72 jne 0x11608e78 */
  if (!C.zf) goto L_11608e78;
  /* 11608e74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11608e76 jmp 0x11608ea7 */
  goto L_11608ea7;
L_11608e78:;
  /* 11608e78 mov ecx, dword ptr [0x116320e8] */
  ECX = (r32((uint32_t)(0x116320e8)));
  /* 11608e7e mov dword ptr [0x116320dc], ecx */
  w32((uint32_t)(0x116320dc), (ECX));
  /* 11608e84 mov dword ptr [0x116320e0], 0 */
  w32((uint32_t)(0x116320e0), (0x0u));
  /* 11608e8e mov dword ptr [0x116320e4], 0 */
  w32((uint32_t)(0x116320e4), (0x0u));
  /* 11608e98 mov dword ptr [0x116320c8], 0x10 */
  w32((uint32_t)(0x116320c8), (0x10u));
  /* 11608ea2 mov eax, 1 */
  EAX = (0x1u);
L_11608ea7:;
  /* 11608ea7 pop ebp */
  EBP = (pop32());
  /* 11608ea8 ret  */
  ESPCHK(0x11608e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eb0 @ 0x11608eb0 (85 bytes, 29 insns) */
void f_11608eb0(void) {
  FTRACE(0x11608eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11608eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11608eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608eb6 mov eax, dword ptr [0x116320e4] */
  EAX = (r32((uint32_t)(0x116320e4)));
  /* 11608ebb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11608ebe mov ecx, dword ptr [0x116320e8] */
  ECX = (r32((uint32_t)(0x116320e8)));
  /* 11608ec4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608ec6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11608ec9 mov edx, dword ptr [0x116320e8] */
  EDX = (r32((uint32_t)(0x116320e8)));
  /* 11608ecf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11608ed2:;
  /* 11608ed2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608ed5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608ed8 jae 0x11608eff */
  if (!C.cf) goto L_11608eff;
  /* 11608eda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608edd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608ee0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608ee3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11608ee6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608eed jae 0x11608ef4 */
  if (!C.cf) goto L_11608ef4;
  /* 11608eef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608ef2 jmp 0x11608f01 */
  goto L_11608f01;
L_11608ef4:;
  /* 11608ef4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608ef7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608efa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11608efd jmp 0x11608ed2 */
  goto L_11608ed2;
L_11608eff:;
  /* 11608eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11608f01:;
  /* 11608f01 mov esp, ebp */
  ESP = (EBP);
  /* 11608f03 pop ebp */
  EBP = (pop32());
  /* 11608f04 ret  */
  ESPCHK(0x11608eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f10 @ 0x11608f10 (95 bytes, 33 insns) */
void f_11608f10(void) {
  FTRACE(0x11608f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11608f11 mov ebp, esp */
  EBP = (ESP);
  /* 11608f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608f19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608f1c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608f1f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11608f22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608f25 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11608f28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11608f2b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11608f30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608f33 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11608f35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608f38 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11608f3b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11608f3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11608f3f jne 0x11608f61 */
  if (!C.zf) goto L_11608f61;
  /* 11608f41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608f44 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11608f47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11608f49 jne 0x11608f61 */
  if (!C.zf) goto L_11608f61;
  /* 11608f4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11608f4e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11608f54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11608f56 je 0x11608f61 */
  if (C.zf) goto L_11608f61;
  /* 11608f58 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11608f5f jmp 0x11608f68 */
  goto L_11608f68;
L_11608f61:;
  /* 11608f61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11608f68:;
  /* 11608f68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11608f6b mov esp, ebp */
  ESP = (EBP);
  /* 11608f6d pop ebp */
  EBP = (pop32());
  /* 11608f6e ret  */
  ESPCHK(0x11608f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f70 @ 0x11608f70 (1485 bytes, 453 insns) */
void f_11608f70(void) {
  FTRACE(0x11608f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11608f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11608f71 mov ebp, esp */
  EBP = (ESP);
  /* 11608f73 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608f79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11608f7c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11608f7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11608f82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608f85 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608f88 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11608f8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11608f8e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11608f91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11608f94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11608f97 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11608f9d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11608fa0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11608fa7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11608faa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11608fad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608fb0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11608fb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11608fb6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11608fb8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608fbb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11608fbe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11608fc1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11608fc4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11608fc7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11608fca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11608fcc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11608fcf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11608fd2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11608fd5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11608fd8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11608fdb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11608fde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11608fe0 jne 0x11609108 */
  if (!C.zf) goto L_11609108;
  /* 11608fe6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11608fe9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11608fec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11608fef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11608ff2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11608ff6 jbe 0x11608fff */
  if ((C.cf||C.zf)) goto L_11608fff;
  /* 11608ff8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11608fff:;
  /* 11608fff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609002 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609005 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11609008 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160900b jne 0x116090e1 */
  if (!C.zf) goto L_116090e1;
  /* 11609011 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609015 jae 0x11609076 */
  if (!C.cf) goto L_11609076;
  /* 11609017 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1160901c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160901f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11609021 not eax */
  EAX = (~(EAX));
  /* 11609023 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609026 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609029 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1160902d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160902f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609032 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609035 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11609039 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1160903c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160903f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11609042 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11609045 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609048 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160904b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1160904e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609051 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609054 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11609058 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160905a jne 0x11609074 */
  if (!C.zf) goto L_11609074;
  /* 1160905c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11609061 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11609064 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11609066 not eax */
  EAX = (~(EAX));
  /* 11609068 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160906b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1160906d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1160906f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609072 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11609074:;
  /* 11609074 jmp 0x116090e1 */
  goto L_116090e1;
L_11609076:;
  /* 11609076 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11609079 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160907c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11609081 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11609083 not edx */
  EDX = (~(EDX));
  /* 11609085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609088 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1160908b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11609092 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11609094 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609097 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1160909a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 116090a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116090a4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116090a7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116090aa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116090ad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116090b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116090b3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116090b6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116090b9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116090bc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116090c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116090c2 jne 0x116090e1 */
  if (!C.zf) goto L_116090e1;
  /* 116090c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116090c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116090ca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116090cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116090d1 not edx */
  EDX = (~(EDX));
  /* 116090d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116090d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116090d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116090db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116090de mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116090e1:;
  /* 116090e1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116090e4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116090e7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116090ea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116090ed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116090f0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116090f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116090f6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116090f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116090fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116090ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609102 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609105 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11609108:;
  /* 11609108 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160910b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1160910e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609111 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11609114 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609118 jbe 0x11609121 */
  if ((C.cf||C.zf)) goto L_11609121;
  /* 1160911a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11609121:;
  /* 11609121 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11609124 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11609127 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11609129 jne 0x11609285 */
  if (!C.zf) goto L_11609285;
  /* 1160912f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11609132 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609135 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11609138 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160913b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1160913e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609141 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11609144 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609148 jbe 0x11609151 */
  if ((C.cf||C.zf)) goto L_11609151;
  /* 1160914a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11609151:;
  /* 11609151 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609154 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609157 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1160915a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160915d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11609160 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609163 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11609166 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160916a jbe 0x11609173 */
  if ((C.cf||C.zf)) goto L_11609173;
  /* 1160916c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11609173:;
  /* 11609173 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609176 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609179 je 0x1160927f */
  if (C.zf) goto L_1160927f;
  /* 1160917f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11609182 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11609185 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11609188 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160918b jne 0x11609261 */
  if (!C.zf) goto L_11609261;
  /* 11609191 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609195 jae 0x116091f6 */
  if (!C.cf) goto L_116091f6;
  /* 11609197 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160919c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160919f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116091a1 not edx */
  EDX = (~(EDX));
  /* 116091a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116091a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116091a9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116091ad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116091af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116091b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116091b5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116091b9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116091bc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116091bf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116091c2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116091c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116091c8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116091cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116091ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116091d1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116091d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116091d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116091da jne 0x116091f4 */
  if (!C.zf) goto L_116091f4;
  /* 116091dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116091e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116091e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116091e6 not edx */
  EDX = (~(EDX));
  /* 116091e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116091eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116091ed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116091ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116091f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116091f4:;
  /* 116091f4 jmp 0x11609261 */
  goto L_11609261;
L_116091f6:;
  /* 116091f6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116091f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116091fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11609201 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11609203 not eax */
  EAX = (~(EAX));
  /* 11609205 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609208 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1160920b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11609212 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11609214 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609217 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1160921a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11609221 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609224 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609227 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1160922a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1160922d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609230 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609233 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11609236 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609239 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160923c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11609240 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11609242 jne 0x11609261 */
  if (!C.zf) goto L_11609261;
  /* 11609244 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609247 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160924a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1160924f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11609251 not eax */
  EAX = (~(EAX));
  /* 11609253 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609256 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11609259 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1160925b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160925e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11609261:;
  /* 11609261 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11609264 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11609267 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1160926a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160926d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11609270 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11609273 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11609276 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11609279 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1160927c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1160927f:;
  /* 1160927f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11609282 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11609285:;
  /* 11609285 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11609288 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1160928b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160928d jne 0x1160929b */
  if (!C.zf) goto L_1160929b;
  /* 1160928f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609292 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609295 je 0x116093ab */
  if (C.zf) goto L_116093ab;
L_1160929b:;
  /* 1160929b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160929e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116092a1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 116092a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116092a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116092aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116092ad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116092b0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116092b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116092b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116092b9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 116092bc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116092bf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116092c2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116092c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116092c8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116092cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116092ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116092d1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116092d4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116092d7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116092da cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116092dd jne 0x116093ab */
  if (!C.zf) goto L_116093ab;
  /* 116092e3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116092e7 jae 0x11609344 */
  if (!C.cf) goto L_11609344;
  /* 116092e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116092ec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116092ef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116092f3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116092f6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116092f9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116092fc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116092ff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609302 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609305 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11609308 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160930a jne 0x11609322 */
  if (!C.zf) goto L_11609322;
  /* 1160930c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11609311 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609314 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11609316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609319 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160931b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1160931d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609320 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11609322:;
  /* 11609322 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11609327 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160932a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160932c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160932f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609332 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11609336 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11609338 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160933b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1160933e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11609342 jmp 0x116093ab */
  goto L_116093ab;
L_11609344:;
  /* 11609344 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609347 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160934a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1160934e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609351 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609354 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11609357 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1160935a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1160935d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609360 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11609363 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11609365 jne 0x11609382 */
  if (!C.zf) goto L_11609382;
  /* 11609367 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160936a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160936d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11609372 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11609374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609377 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160937a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1160937c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160937f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11609382:;
  /* 11609382 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609385 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609388 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1160938d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160938f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609392 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11609395 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1160939c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160939e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116093a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116093a4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_116093ab:;
  /* 116093ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116093ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116093b1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116093b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116093b6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116093b9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116093bc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 116093bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116093c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116093c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116093c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116093ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116093cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116093cf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116093d2 jne 0x11609539 */
  if (!C.zf) goto L_11609539;
  /* 116093d8 cmp dword ptr [0x116320e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116320e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116093df je 0x11609528 */
  if (C.zf) goto L_11609528;
  /* 116093e5 mov eax, dword ptr [0x116320d8] */
  EAX = (r32((uint32_t)(0x116320d8)));
  /* 116093ea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 116093ed mov ecx, dword ptr [0x116320e0] */
  ECX = (r32((uint32_t)(0x116320e0)));
  /* 116093f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116093f6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116093f8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116093fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11609400 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11609405 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609408 push eax */
  push32((uint32_t)(EAX));
  /* 11609409 call dword ptr [0x11633358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633358))), 0x1160940fu);
  /* 1160940f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11609414 mov ecx, dword ptr [0x116320d8] */
  ECX = (r32((uint32_t)(0x116320d8)));
  /* 1160941a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160941c mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 11609421 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11609424 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11609426 mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 1160942c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1160942f mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 11609434 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11609437 mov edx, dword ptr [0x116320d8] */
  EDX = (r32((uint32_t)(0x116320d8)));
  /* 1160943d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11609448 mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 1160944d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11609450 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11609453 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11609456 mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 1160945b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1160945e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11609461 mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 11609467 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1160946a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1160946e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11609470 jne 0x11609486 */
  if (!C.zf) goto L_11609486;
  /* 11609472 mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 11609478 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1160947b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1160947d mov ecx, dword ptr [0x116320e0] */
  ECX = (r32((uint32_t)(0x116320e0)));
  /* 11609483 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11609486:;
  /* 11609486 mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 1160948c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609490 jne 0x11609528 */
  if (!C.zf) goto L_11609528;
  /* 11609496 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1160949b push 0 */
  push32((uint32_t)(0x0u));
  /* 1160949d mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 116094a2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116094a5 push ecx */
  push32((uint32_t)(ECX));
  /* 116094a6 call dword ptr [0x11633358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633358))), 0x116094acu);
  /* 116094ac mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 116094b2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116094b5 push eax */
  push32((uint32_t)(EAX));
  /* 116094b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116094b8 mov ecx, dword ptr [0x116320ec] */
  ECX = (r32((uint32_t)(0x116320ec)));
  /* 116094be push ecx */
  push32((uint32_t)(ECX));
  /* 116094bf call dword ptr [0x1163335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163335c))), 0x116094c5u);
  /* 116094c5 mov edx, dword ptr [0x116320e4] */
  EDX = (r32((uint32_t)(0x116320e4)));
  /* 116094cb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116094ce mov eax, dword ptr [0x116320e8] */
  EAX = (r32((uint32_t)(0x116320e8)));
  /* 116094d3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116094d5 mov ecx, dword ptr [0x116320e0] */
  ECX = (r32((uint32_t)(0x116320e0)));
  /* 116094db add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116094de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116094e0 push eax */
  push32((uint32_t)(EAX));
  /* 116094e1 mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 116094e7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116094ea push edx */
  push32((uint32_t)(EDX));
  /* 116094eb mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 116094f0 push eax */
  push32((uint32_t)(EAX));
  /* 116094f1 call 0x1160caa0 */
  push32(0x116094f6u); f_1160caa0();
  /* 116094f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116094f9 mov ecx, dword ptr [0x116320e4] */
  ECX = (r32((uint32_t)(0x116320e4)));
  /* 116094ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609502 mov dword ptr [0x116320e4], ecx */
  w32((uint32_t)(0x116320e4), (ECX));
  /* 11609508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160950b cmp edx, dword ptr [0x116320e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116320e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609511 jbe 0x1160951c */
  if ((C.cf||C.zf)) goto L_1160951c;
  /* 11609513 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609516 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609519 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1160951c:;
  /* 1160951c mov ecx, dword ptr [0x116320e8] */
  ECX = (r32((uint32_t)(0x116320e8)));
  /* 11609522 mov dword ptr [0x116320dc], ecx */
  w32((uint32_t)(0x116320dc), (ECX));
L_11609528:;
  /* 11609528 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160952b mov dword ptr [0x116320e0], edx */
  w32((uint32_t)(0x116320e0), (EDX));
  /* 11609531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609534 mov dword ptr [0x116320d8], eax */
  w32((uint32_t)(0x116320d8), (EAX));
L_11609539:;
  /* 11609539 mov esp, ebp */
  ESP = (EBP);
  /* 1160953b pop ebp */
  EBP = (pop32());
  /* 1160953c ret  */
  ESPCHK(0x11608f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009540 @ 0x11609540 (1334 bytes, 427 insns) */
void f_11609540(void) {
  FTRACE(0x11609540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11609540 push ebp */
  push32((uint32_t)(EBP));
  /* 11609541 mov ebp, esp */
  EBP = (ESP);
  /* 11609543 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609546 push esi */
  push32((uint32_t)(ESI));
  /* 11609547 mov eax, dword ptr [0x116320e4] */
  EAX = (r32((uint32_t)(0x116320e4)));
  /* 1160954c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160954f mov ecx, dword ptr [0x116320e8] */
  ECX = (r32((uint32_t)(0x116320e8)));
  /* 11609555 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609557 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1160955a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160955d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609560 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11609563 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11609566 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609569 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1160956c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160956f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11609572 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609576 jge 0x1160958c */
  if ((C.sf==C.of)) goto L_1160958c;
  /* 11609578 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1160957b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160957e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11609580 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11609583 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1160958a jmp 0x116095a1 */
  goto L_116095a1;
L_1160958c:;
  /* 1160958c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11609593 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609596 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609599 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160959c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160959e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_116095a1:;
  /* 116095a1 mov ecx, dword ptr [0x116320dc] */
  ECX = (r32((uint32_t)(0x116320dc)));
  /* 116095a7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_116095aa:;
  /* 116095aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116095ad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116095b0 jae 0x116095d6 */
  if (!C.cf) goto L_116095d6;
  /* 116095b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116095b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116095b8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 116095ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116095bd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 116095c0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 116095c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116095c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116095c7 je 0x116095cb */
  if (C.zf) goto L_116095cb;
  /* 116095c9 jmp 0x116095d6 */
  goto L_116095d6;
L_116095cb:;
  /* 116095cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116095ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116095d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116095d4 jmp 0x116095aa */
  goto L_116095aa;
L_116095d6:;
  /* 116095d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116095d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116095dc jne 0x116096bd */
  if (!C.zf) goto L_116096bd;
  /* 116095e2 mov eax, dword ptr [0x116320e8] */
  EAX = (r32((uint32_t)(0x116320e8)));
  /* 116095e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_116095ea:;
  /* 116095ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116095ed cmp ecx, dword ptr [0x116320dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116320dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116095f3 jae 0x11609619 */
  if (!C.cf) goto L_11609619;
  /* 116095f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116095f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116095fb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 116095fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609600 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11609603 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11609606 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11609608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160960a je 0x1160960e */
  if (C.zf) goto L_1160960e;
  /* 1160960c jmp 0x11609619 */
  goto L_11609619;
L_1160960e:;
  /* 1160960e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609611 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609614 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11609617 jmp 0x116095ea */
  goto L_116095ea;
L_11609619:;
  /* 11609619 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160961c cmp ecx, dword ptr [0x116320dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116320dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609622 jne 0x116096bd */
  if (!C.zf) goto L_116096bd;
L_11609628:;
  /* 11609628 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160962b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160962e jae 0x11609646 */
  if (!C.cf) goto L_11609646;
  /* 11609630 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609633 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609637 je 0x1160963b */
  if (C.zf) goto L_1160963b;
  /* 11609639 jmp 0x11609646 */
  goto L_11609646;
L_1160963b:;
  /* 1160963b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160963e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609641 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11609644 jmp 0x11609628 */
  goto L_11609628;
L_11609646:;
  /* 11609646 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609649 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160964c jne 0x11609697 */
  if (!C.zf) goto L_11609697;
  /* 1160964e mov eax, dword ptr [0x116320e8] */
  EAX = (r32((uint32_t)(0x116320e8)));
  /* 11609653 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11609656:;
  /* 11609656 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609659 cmp ecx, dword ptr [0x116320dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116320dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160965f jae 0x11609677 */
  if (!C.cf) goto L_11609677;
  /* 11609661 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609664 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609668 je 0x1160966c */
  if (C.zf) goto L_1160966c;
  /* 1160966a jmp 0x11609677 */
  goto L_11609677;
L_1160966c:;
  /* 1160966c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160966f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609672 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11609675 jmp 0x11609656 */
  goto L_11609656;
L_11609677:;
  /* 11609677 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160967a cmp ecx, dword ptr [0x116320dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116320dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609680 jne 0x11609697 */
  if (!C.zf) goto L_11609697;
  /* 11609682 call 0x11609a80 */
  push32(0x11609687u); f_11609a80();
  /* 11609687 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1160968a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160968e jne 0x11609697 */
  if (!C.zf) goto L_11609697;
  /* 11609690 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11609692 jmp 0x11609a71 */
  goto L_11609a71;
L_11609697:;
  /* 11609697 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160969a push edx */
  push32((uint32_t)(EDX));
  /* 1160969b call 0x11609b90 */
  push32(0x116096a0u); f_11609b90();
  /* 116096a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116096a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116096a6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116096a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116096ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116096ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116096b1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116096b4 jne 0x116096bd */
  if (!C.zf) goto L_116096bd;
  /* 116096b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116096b8 jmp 0x11609a71 */
  goto L_11609a71;
L_116096bd:;
  /* 116096bd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116096c0 mov dword ptr [0x116320dc], edx */
  w32((uint32_t)(0x116320dc), (EDX));
  /* 116096c6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116096c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116096cc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 116096cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116096d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116096d4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 116096d7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116096db je 0x11609700 */
  if (C.zf) goto L_11609700;
  /* 116096dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116096e0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116096e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116096e6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 116096ea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116096ed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116096f0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 116096f3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 116096fa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 116096fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116096fe jne 0x11609735 */
  if (!C.zf) goto L_11609735;
L_11609700:;
  /* 11609700 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11609707:;
  /* 11609707 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160970a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1160970d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11609710 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11609714 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609717 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1160971a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1160971d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11609724 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11609726 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11609728 jne 0x11609735 */
  if (!C.zf) goto L_11609735;
  /* 1160972a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160972d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609730 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11609733 jmp 0x11609707 */
  goto L_11609707;
L_11609735:;
  /* 11609735 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609738 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160973e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609741 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11609748 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160974b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11609752 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609755 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609758 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160975b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1160975f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11609762 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609766 jne 0x11609782 */
  if (!C.zf) goto L_11609782;
  /* 11609768 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1160976f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609772 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609775 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11609778 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1160977f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11609782:;
  /* 11609782 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609786 jl 0x1160979b */
  if ((C.sf!=C.of)) goto L_1160979b;
  /* 11609788 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160978b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1160978d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11609790 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609793 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609796 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11609799 jmp 0x11609782 */
  goto L_11609782;
L_1160979b:;
  /* 1160979b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160979e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116097a1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 116097a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116097a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116097ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116097ad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116097b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116097b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116097b6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116097b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116097bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116097bf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116097c3 jle 0x116097cc */
  if ((C.zf||C.sf!=C.of)) goto L_116097cc;
  /* 116097c5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_116097cc:;
  /* 116097cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116097cf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116097d2 je 0x116099f0 */
  if (C.zf) goto L_116099f0;
  /* 116097d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116097db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116097de mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116097e1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116097e4 jne 0x116098ba */
  if (!C.zf) goto L_116098ba;
  /* 116097ea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116097ee jge 0x1160984f */
  if ((C.sf==C.of)) goto L_1160984f;
  /* 116097f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116097f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116097f8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116097fa not eax */
  EAX = (~(EAX));
  /* 116097fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116097ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609802 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11609806 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11609808 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160980b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1160980e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11609812 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609815 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609818 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1160981b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1160981e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609821 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609824 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11609827 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1160982a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160982d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11609831 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11609833 jne 0x1160984d */
  if (!C.zf) goto L_1160984d;
  /* 11609835 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1160983a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160983d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160983f not eax */
  EAX = (~(EAX));
  /* 11609841 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609844 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11609846 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11609848 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160984b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1160984d:;
  /* 1160984d jmp 0x116098ba */
  goto L_116098ba;
L_1160984f:;
  /* 1160984f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609852 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609855 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160985a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160985c not edx */
  EDX = (~(EDX));
  /* 1160985e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609861 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609864 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1160986b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160986d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609870 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609873 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1160987a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1160987d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609880 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11609883 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11609886 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609889 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160988c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1160988f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609892 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609895 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11609899 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160989b jne 0x116098ba */
  if (!C.zf) goto L_116098ba;
  /* 1160989d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116098a0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116098a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116098a8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116098aa not edx */
  EDX = (~(EDX));
  /* 116098ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116098af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116098b2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116098b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116098b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116098ba:;
  /* 116098ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116098bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116098c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116098c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116098c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116098c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116098cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116098cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116098d2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116098d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116098d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116098dc je 0x116099f0 */
  if (C.zf) goto L_116099f0;
  /* 116098e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116098e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116098e8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 116098eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116098ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116098f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116098f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116098f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116098fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116098fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11609900 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11609903 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11609906 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609909 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1160990c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160990f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11609912 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609915 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11609918 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160991b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160991e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11609921 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609924 jne 0x116099f0 */
  if (!C.zf) goto L_116099f0;
  /* 1160992a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160992e jge 0x1160998a */
  if ((C.sf==C.of)) goto L_1160998a;
  /* 11609930 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609933 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609936 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1160993a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1160993d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609940 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11609943 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11609945 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609948 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160994b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1160994e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11609950 jne 0x11609968 */
  if (!C.zf) goto L_11609968;
  /* 11609952 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11609957 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160995a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160995c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160995f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11609961 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11609963 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609966 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11609968:;
  /* 11609968 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160996d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609970 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11609972 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609975 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609978 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1160997c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160997e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609981 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609984 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11609988 jmp 0x116099f0 */
  goto L_116099f0;
L_1160998a:;
  /* 1160998a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1160998d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609990 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11609994 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609997 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160999a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1160999d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1160999f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116099a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116099a5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 116099a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116099aa jne 0x116099c7 */
  if (!C.zf) goto L_116099c7;
  /* 116099ac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116099af sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116099b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116099b7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116099b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116099bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116099bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116099c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116099c4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116099c7:;
  /* 116099c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116099ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116099cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116099d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116099d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116099d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116099da mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 116099e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116099e3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116099e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116099e9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_116099f0:;
  /* 116099f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116099f4 je 0x11609a0a */
  if (C.zf) goto L_11609a0a;
  /* 116099f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116099f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116099fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116099fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609a01 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609a04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11609a07 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11609a0a:;
  /* 11609a0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609a0d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609a10 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11609a13 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609a16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609a19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609a1c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11609a1e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609a21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609a24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609a27 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609a2a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11609a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609a30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11609a32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609a35 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11609a37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609a3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609a3d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11609a3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11609a41 jne 0x11609a63 */
  if (!C.zf) goto L_11609a63;
  /* 11609a43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609a46 cmp eax, dword ptr [0x116320e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116320e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609a4c jne 0x11609a63 */
  if (!C.zf) goto L_11609a63;
  /* 11609a4e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609a51 cmp ecx, dword ptr [0x116320d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116320d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609a57 jne 0x11609a63 */
  if (!C.zf) goto L_11609a63;
  /* 11609a59 mov dword ptr [0x116320e0], 0 */
  w32((uint32_t)(0x116320e0), (0x0u));
L_11609a63:;
  /* 11609a63 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11609a66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609a69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11609a6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609a6e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11609a71:;
  /* 11609a71 pop esi */
  ESI = (pop32());
  /* 11609a72 mov esp, ebp */
  ESP = (EBP);
  /* 11609a74 pop ebp */
  EBP = (pop32());
  /* 11609a75 ret  */
  ESPCHK(0x11609540u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a80 @ 0x11609a80 (271 bytes, 78 insns) */
void f_11609a80(void) {
  FTRACE(0x11609a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11609a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11609a81 mov ebp, esp */
  EBP = (ESP);
  /* 11609a83 push ecx */
  push32((uint32_t)(ECX));
  /* 11609a84 mov eax, dword ptr [0x116320e4] */
  EAX = (r32((uint32_t)(0x116320e4)));
  /* 11609a89 cmp eax, dword ptr [0x116320c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116320c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609a8f jne 0x11609adb */
  if (!C.zf) goto L_11609adb;
  /* 11609a91 mov ecx, dword ptr [0x116320c8] */
  ECX = (r32((uint32_t)(0x116320c8)));
  /* 11609a97 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609a9a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11609a9d push ecx */
  push32((uint32_t)(ECX));
  /* 11609a9e mov edx, dword ptr [0x116320e8] */
  EDX = (r32((uint32_t)(0x116320e8)));
  /* 11609aa4 push edx */
  push32((uint32_t)(EDX));
  /* 11609aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11609aa7 mov eax, dword ptr [0x116320ec] */
  EAX = (r32((uint32_t)(0x116320ec)));
  /* 11609aac push eax */
  push32((uint32_t)(EAX));
  /* 11609aad call dword ptr [0x11633338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633338))), 0x11609ab3u);
  /* 11609ab3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11609ab6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609aba jne 0x11609ac3 */
  if (!C.zf) goto L_11609ac3;
  /* 11609abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11609abe jmp 0x11609b8b */
  goto L_11609b8b;
L_11609ac3:;
  /* 11609ac3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609ac6 mov dword ptr [0x116320e8], ecx */
  w32((uint32_t)(0x116320e8), (ECX));
  /* 11609acc mov edx, dword ptr [0x116320c8] */
  EDX = (r32((uint32_t)(0x116320c8)));
  /* 11609ad2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609ad5 mov dword ptr [0x116320c8], edx */
  w32((uint32_t)(0x116320c8), (EDX));
L_11609adb:;
  /* 11609adb mov eax, dword ptr [0x116320e4] */
  EAX = (r32((uint32_t)(0x116320e4)));
  /* 11609ae0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11609ae3 mov ecx, dword ptr [0x116320e8] */
  ECX = (r32((uint32_t)(0x116320e8)));
  /* 11609ae9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609aeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11609aee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11609af3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11609af5 mov edx, dword ptr [0x116320ec] */
  EDX = (r32((uint32_t)(0x116320ec)));
  /* 11609afb push edx */
  push32((uint32_t)(EDX));
  /* 11609afc call dword ptr [0x1163333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163333c))), 0x11609b02u);
  /* 11609b02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609b05 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11609b08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609b0b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609b0f jne 0x11609b15 */
  if (!C.zf) goto L_11609b15;
  /* 11609b11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11609b13 jmp 0x11609b8b */
  goto L_11609b8b;
L_11609b15:;
  /* 11609b15 push 4 */
  push32((uint32_t)(0x4u));
  /* 11609b17 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11609b1c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11609b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11609b23 call dword ptr [0x11633334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633334))), 0x11609b29u);
  /* 11609b29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609b2c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11609b2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609b32 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609b36 jne 0x11609b52 */
  if (!C.zf) goto L_11609b52;
  /* 11609b38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609b3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11609b3e push ecx */
  push32((uint32_t)(ECX));
  /* 11609b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11609b41 mov edx, dword ptr [0x116320ec] */
  EDX = (r32((uint32_t)(0x116320ec)));
  /* 11609b47 push edx */
  push32((uint32_t)(EDX));
  /* 11609b48 call dword ptr [0x1163335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163335c))), 0x11609b4eu);
  /* 11609b4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11609b50 jmp 0x11609b8b */
  goto L_11609b8b;
L_11609b52:;
  /* 11609b52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609b55 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11609b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609b5e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11609b65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609b68 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11609b6f mov eax, dword ptr [0x116320e4] */
  EAX = (r32((uint32_t)(0x116320e4)));
  /* 11609b74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609b77 mov dword ptr [0x116320e4], eax */
  w32((uint32_t)(0x116320e4), (EAX));
  /* 11609b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609b7f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11609b82 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11609b88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11609b8b:;
  /* 11609b8b mov esp, ebp */
  ESP = (EBP);
  /* 11609b8d pop ebp */
  EBP = (pop32());
  /* 11609b8e ret  */
  ESPCHK(0x11609a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b90 @ 0x11609b90 (494 bytes, 149 insns) */
void f_11609b90(void) {
  FTRACE(0x11609b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11609b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11609b91 mov ebp, esp */
  EBP = (ESP);
  /* 11609b93 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609b99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11609b9c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11609b9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609ba2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11609ba5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11609ba8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11609baf:;
  /* 11609baf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609bb3 jl 0x11609bc8 */
  if ((C.sf!=C.of)) goto L_11609bc8;
  /* 11609bb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11609bb8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11609bba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11609bbd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609bc0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609bc3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11609bc6 jmp 0x11609baf */
  goto L_11609baf;
L_11609bc8:;
  /* 11609bc8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609bcb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11609bd1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609bd4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11609bdb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11609bde mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11609be5 jmp 0x11609bf0 */
  goto L_11609bf0;
L_11609be7:;
  /* 11609be7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609bea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609bed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11609bf0:;
  /* 11609bf0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609bf4 jge 0x11609c16 */
  if ((C.sf==C.of)) goto L_11609c16;
  /* 11609bf6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609bf9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11609bfc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11609bff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11609c02 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609c05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609c08 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11609c0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609c0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609c11 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11609c14 jmp 0x11609be7 */
  goto L_11609be7;
L_11609c16:;
  /* 11609c16 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609c19 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11609c1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609c1f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11609c22 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609c24 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11609c27 push 4 */
  push32((uint32_t)(0x4u));
  /* 11609c29 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11609c2e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11609c33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609c36 push edx */
  push32((uint32_t)(EDX));
  /* 11609c37 call dword ptr [0x11633334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633334))), 0x11609c3du);
  /* 11609c3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11609c3f jne 0x11609c49 */
  if (!C.zf) goto L_11609c49;
  /* 11609c41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11609c44 jmp 0x11609d7a */
  goto L_11609d7a;
L_11609c49:;
  /* 11609c49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609c4c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609c51 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11609c54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609c57 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11609c5a jmp 0x11609c68 */
  goto L_11609c68;
L_11609c5c:;
  /* 11609c5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609c5f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609c65 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11609c68:;
  /* 11609c68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609c6b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609c6e ja 0x11609ccd */
  if ((!C.cf&&!C.zf)) goto L_11609ccd;
  /* 11609c70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609c73 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11609c7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609c7d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11609c87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609c8a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609c8d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11609c90 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609c93 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11609c99 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609c9c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609ca2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609ca5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11609ca8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609cab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609cb1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609cb4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11609cb7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609cba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609cbf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11609cc2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11609cc5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11609ccb jmp 0x11609c5c */
  goto L_11609c5c;
L_11609ccd:;
  /* 11609ccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11609cd0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609cd6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11609cd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609cdc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609cdf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609ce2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11609ce5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609ce8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11609ceb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11609cee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609cf1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609cf4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11609cf7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11609cfa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609cfd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609d00 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11609d03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609d06 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11609d09 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11609d0c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609d0f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609d12 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11609d15 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609d18 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609d1b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11609d23 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609d26 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609d29 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11609d34 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609d37 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11609d3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609d3e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11609d41 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11609d44 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609d47 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11609d4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11609d4c jne 0x11609d5d */
  if (!C.zf) goto L_11609d5d;
  /* 11609d4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609d51 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11609d54 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11609d57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609d5a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11609d5d:;
  /* 11609d5d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11609d62 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609d65 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11609d67 not edx */
  EDX = (~(EDX));
  /* 11609d69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609d6c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11609d6f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11609d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609d74 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11609d77 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11609d7a:;
  /* 11609d7a mov esp, ebp */
  ESP = (EBP);
  /* 11609d7c pop ebp */
  EBP = (pop32());
  /* 11609d7d ret  */
  ESPCHK(0x11609b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d80 @ 0x11609d80 (1515 bytes, 489 insns) */
void f_11609d80(void) {
  FTRACE(0x11609d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11609d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11609d81 mov ebp, esp */
  EBP = (ESP);
  /* 11609d83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609d86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11609d89 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609d8c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11609d8e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11609d91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609d94 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11609d97 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11609d9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609d9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11609da0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609da3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11609da6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11609da9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11609dac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11609daf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609db2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11609db8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609dbb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11609dc2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11609dc5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11609dc8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609dcb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11609dce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609dd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11609dd3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609dd6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11609dd9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609ddc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609ddf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11609de2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609de5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11609de7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11609dea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11609ded cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609df0 jle 0x1160a0a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1160a0a6;
  /* 11609df6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609df9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11609dfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11609dfe jne 0x11609e0b */
  if (!C.zf) goto L_11609e0b;
  /* 11609e00 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609e03 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609e06 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609e09 jle 0x11609e12 */
  if ((C.zf||C.sf!=C.of)) goto L_11609e12;
L_11609e0b:;
  /* 11609e0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11609e0d jmp 0x1160a367 */
  goto L_1160a367;
L_11609e12:;
  /* 11609e12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609e15 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11609e18 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609e1b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11609e1e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609e22 jbe 0x11609e2b */
  if ((C.cf||C.zf)) goto L_11609e2b;
  /* 11609e24 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11609e2b:;
  /* 11609e2b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609e2e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609e31 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11609e34 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609e37 jne 0x11609f0d */
  if (!C.zf) goto L_11609f0d;
  /* 11609e3d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609e41 jae 0x11609ea2 */
  if (!C.cf) goto L_11609ea2;
  /* 11609e43 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11609e48 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609e4b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11609e4d not edx */
  EDX = (~(EDX));
  /* 11609e4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609e52 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609e55 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11609e59 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11609e5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609e5e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609e61 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11609e65 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609e68 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609e6b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11609e6e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11609e71 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609e74 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609e77 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11609e7a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609e7d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609e80 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11609e84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11609e86 jne 0x11609ea0 */
  if (!C.zf) goto L_11609ea0;
  /* 11609e88 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11609e8d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609e90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11609e92 not edx */
  EDX = (~(EDX));
  /* 11609e94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609e97 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11609e99 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11609e9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609e9e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11609ea0:;
  /* 11609ea0 jmp 0x11609f0d */
  goto L_11609f0d;
L_11609ea2:;
  /* 11609ea2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609ea5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609ea8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11609ead shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11609eaf not eax */
  EAX = (~(EAX));
  /* 11609eb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609eb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609eb7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11609ebe and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11609ec0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609ec3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609ec6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11609ecd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609ed0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609ed3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11609ed6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11609ed9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609edc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609edf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11609ee2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609ee5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609ee8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11609eec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11609eee jne 0x11609f0d */
  if (!C.zf) goto L_11609f0d;
  /* 11609ef0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609ef3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609ef6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11609efb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11609efd not eax */
  EAX = (~(EAX));
  /* 11609eff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609f02 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11609f05 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11609f07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609f0a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11609f0d:;
  /* 11609f0d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f10 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11609f13 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11609f19 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11609f1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f1f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11609f22 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f25 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11609f28 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11609f2b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11609f2e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609f31 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609f34 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11609f37 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609f3b jle 0x1160a087 */
  if ((C.zf||C.sf!=C.of)) goto L_1160a087;
  /* 11609f41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11609f44 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609f47 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11609f4a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11609f4d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11609f50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11609f53 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11609f56 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609f5a jbe 0x11609f63 */
  if ((C.cf||C.zf)) goto L_11609f63;
  /* 11609f5c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11609f63:;
  /* 11609f63 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609f66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11609f69 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11609f6c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11609f6f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609f75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11609f78 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11609f7b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609f81 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11609f84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11609f87 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f8a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11609f8d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f90 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11609f93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f96 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11609f99 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11609f9f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11609fa2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609fa5 jne 0x1160a073 */
  if (!C.zf) goto L_1160a073;
  /* 11609fab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11609faf jae 0x1160a00c */
  if (!C.cf) goto L_1160a00c;
  /* 11609fb1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609fb4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609fb7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11609fbb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609fbe add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609fc1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11609fc4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11609fc7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609fca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11609fcd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11609fd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11609fd2 jne 0x11609fea */
  if (!C.zf) goto L_11609fea;
  /* 11609fd4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11609fd9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609fdc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11609fde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609fe1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11609fe3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11609fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11609fe8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11609fea:;
  /* 11609fea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11609fef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11609ff2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11609ff4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11609ff7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11609ffa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11609ffe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160a000 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a003 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a006 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1160a00a jmp 0x1160a073 */
  goto L_1160a073;
L_1160a00c:;
  /* 1160a00c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a00f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a012 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1160a016 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a019 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a01c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1160a01f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1160a022 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a025 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a028 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1160a02b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160a02d jne 0x1160a04a */
  if (!C.zf) goto L_1160a04a;
  /* 1160a02f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160a032 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a035 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a03a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a03c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a03f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160a042 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1160a044 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a047 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1160a04a:;
  /* 1160a04a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160a04d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a050 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1160a055 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160a057 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a05a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a05d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1160a064 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160a066 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a069 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a06c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1160a073:;
  /* 1160a073 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160a076 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a079 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1160a07b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160a07e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a081 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a084 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1160a087:;
  /* 1160a087 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160a08a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a08d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a090 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1160a092 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160a095 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a098 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a09b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a09e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1160a0a1 jmp 0x1160a362 */
  goto L_1160a362;
L_1160a0a6:;
  /* 1160a0a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160a0a9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a0ac jge 0x1160a362 */
  if ((C.sf==C.of)) goto L_1160a362;
  /* 1160a0b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160a0b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a0b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a0bb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1160a0bd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160a0c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a0c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a0c6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a0c9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1160a0cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a0cf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a0d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1160a0d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160a0d8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a0db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1160a0de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160a0e1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1160a0e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a0e7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1160a0ea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a0ee jbe 0x1160a0f7 */
  if ((C.cf||C.zf)) goto L_1160a0f7;
  /* 1160a0f0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1160a0f7:;
  /* 1160a0f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a0fa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1160a0fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160a0ff jne 0x1160a240 */
  if (!C.zf) goto L_1160a240;
  /* 1160a105 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a108 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1160a10b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a10e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1160a111 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a115 jbe 0x1160a11e */
  if ((C.cf||C.zf)) goto L_1160a11e;
  /* 1160a117 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1160a11e:;
  /* 1160a11e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160a121 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160a124 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1160a127 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a12a jne 0x1160a200 */
  if (!C.zf) goto L_1160a200;
  /* 1160a130 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a134 jae 0x1160a195 */
  if (!C.cf) goto L_1160a195;
  /* 1160a136 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a13b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160a13e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a140 not edx */
  EDX = (~(EDX));
  /* 1160a142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a145 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a148 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1160a14c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160a14e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a151 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a154 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1160a158 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a15b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a15e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1160a161 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1160a164 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a167 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a16a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1160a16d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a170 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a173 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1160a177 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160a179 jne 0x1160a193 */
  if (!C.zf) goto L_1160a193;
  /* 1160a17b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a180 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160a183 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a185 not edx */
  EDX = (~(EDX));
  /* 1160a187 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a18a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160a18c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1160a18e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a191 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1160a193:;
  /* 1160a193 jmp 0x1160a200 */
  goto L_1160a200;
L_1160a195:;
  /* 1160a195 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160a198 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a19b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1160a1a0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160a1a2 not eax */
  EAX = (~(EAX));
  /* 1160a1a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a1a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a1aa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1160a1b1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1160a1b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a1b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a1b9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1160a1c0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a1c3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a1c6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1160a1c9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1160a1cc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a1cf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a1d2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1160a1d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a1d8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a1db movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1160a1df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160a1e1 jne 0x1160a200 */
  if (!C.zf) goto L_1160a200;
  /* 1160a1e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160a1e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a1e9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1160a1ee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160a1f0 not eax */
  EAX = (~(EAX));
  /* 1160a1f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a1f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1160a1f8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1160a1fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a1fd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1160a200:;
  /* 1160a200 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160a203 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1160a206 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160a209 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160a20c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1160a20f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160a212 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1160a215 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160a218 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1160a21b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1160a21e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160a221 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a224 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1160a227 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160a22a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1160a22d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a230 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1160a233 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a237 jbe 0x1160a240 */
  if ((C.cf||C.zf)) goto L_1160a240;
  /* 1160a239 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1160a240:;
  /* 1160a240 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160a243 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160a246 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1160a249 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1160a24c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a24f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160a252 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160a255 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1160a258 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a25b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160a25e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1160a261 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160a264 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a267 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1160a26a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a26d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160a270 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a273 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1160a276 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a279 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a27c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160a27f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a282 jne 0x1160a34e */
  if (!C.zf) goto L_1160a34e;
  /* 1160a288 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a28c jae 0x1160a2e8 */
  if (!C.cf) goto L_1160a2e8;
  /* 1160a28e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a291 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a294 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1160a298 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a29b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a29e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1160a2a1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1160a2a3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a2a6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a2a9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1160a2ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160a2ae jne 0x1160a2c6 */
  if (!C.zf) goto L_1160a2c6;
  /* 1160a2b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1160a2b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160a2b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160a2ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a2bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1160a2bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1160a2c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a2c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1160a2c6:;
  /* 1160a2c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a2cb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160a2ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a2d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a2d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a2d6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1160a2da or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160a2dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a2df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a2e2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1160a2e6 jmp 0x1160a34e */
  goto L_1160a34e;
L_1160a2e8:;
  /* 1160a2e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a2eb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a2ee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1160a2f2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a2f5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a2f8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1160a2fb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1160a2fd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a300 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a303 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1160a306 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160a308 jne 0x1160a325 */
  if (!C.zf) goto L_1160a325;
  /* 1160a30a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160a30d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a310 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1160a315 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1160a317 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a31a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1160a31d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1160a31f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160a322 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1160a325:;
  /* 1160a325 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160a328 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a32b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a330 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a332 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a335 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a338 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1160a33f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160a341 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a344 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160a347 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1160a34e:;
  /* 1160a34e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a351 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160a354 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1160a356 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a359 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a35c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160a35f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1160a362:;
  /* 1160a362 mov eax, 1 */
  EAX = (0x1u);
L_1160a367:;
  /* 1160a367 mov esp, ebp */
  ESP = (EBP);
  /* 1160a369 pop ebp */
  EBP = (pop32());
  /* 1160a36a ret  */
  ESPCHK(0x11609d80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a370 @ 0x1160a370 (304 bytes, 79 insns) */
void f_1160a370(void) {
  FTRACE(0x1160a370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160a370 push ebp */
  push32((uint32_t)(EBP));
  /* 1160a371 mov ebp, esp */
  EBP = (ESP);
  /* 1160a373 push ecx */
  push32((uint32_t)(ECX));
  /* 1160a374 cmp dword ptr [0x116320e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116320e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a37b je 0x1160a49c */
  if (C.zf) goto L_1160a49c;
  /* 1160a381 mov eax, dword ptr [0x116320d8] */
  EAX = (r32((uint32_t)(0x116320d8)));
  /* 1160a386 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1160a389 mov ecx, dword ptr [0x116320e0] */
  ECX = (r32((uint32_t)(0x116320e0)));
  /* 1160a38f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160a392 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a394 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160a397 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1160a39c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1160a3a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160a3a4 push eax */
  push32((uint32_t)(EAX));
  /* 1160a3a5 call dword ptr [0x11633358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633358))), 0x1160a3abu);
  /* 1160a3ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a3b0 mov ecx, dword ptr [0x116320d8] */
  ECX = (r32((uint32_t)(0x116320d8)));
  /* 1160a3b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a3b8 mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 1160a3bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1160a3c0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1160a3c2 mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 1160a3c8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1160a3cb mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 1160a3d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1160a3d3 mov edx, dword ptr [0x116320d8] */
  EDX = (r32((uint32_t)(0x116320d8)));
  /* 1160a3d9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1160a3e4 mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 1160a3e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1160a3ec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1160a3ef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1160a3f2 mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 1160a3f7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1160a3fa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1160a3fd mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 1160a403 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1160a406 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1160a40a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160a40c jne 0x1160a422 */
  if (!C.zf) goto L_1160a422;
  /* 1160a40e mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 1160a414 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1160a417 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1160a419 mov ecx, dword ptr [0x116320e0] */
  ECX = (r32((uint32_t)(0x116320e0)));
  /* 1160a41f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1160a422:;
  /* 1160a422 mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 1160a428 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a42c jne 0x1160a492 */
  if (!C.zf) goto L_1160a492;
  /* 1160a42e cmp dword ptr [0x116320e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116320e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a435 jle 0x1160a492 */
  if ((C.zf||C.sf!=C.of)) goto L_1160a492;
  /* 1160a437 mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 1160a43c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1160a43f push ecx */
  push32((uint32_t)(ECX));
  /* 1160a440 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160a442 mov edx, dword ptr [0x116320ec] */
  EDX = (r32((uint32_t)(0x116320ec)));
  /* 1160a448 push edx */
  push32((uint32_t)(EDX));
  /* 1160a449 call dword ptr [0x1163335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163335c))), 0x1160a44fu);
  /* 1160a44f mov eax, dword ptr [0x116320e4] */
  EAX = (r32((uint32_t)(0x116320e4)));
  /* 1160a454 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160a457 mov ecx, dword ptr [0x116320e8] */
  ECX = (r32((uint32_t)(0x116320e8)));
  /* 1160a45d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a45f mov edx, dword ptr [0x116320e0] */
  EDX = (r32((uint32_t)(0x116320e0)));
  /* 1160a465 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a468 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a46a push ecx */
  push32((uint32_t)(ECX));
  /* 1160a46b mov eax, dword ptr [0x116320e0] */
  EAX = (r32((uint32_t)(0x116320e0)));
  /* 1160a470 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a473 push eax */
  push32((uint32_t)(EAX));
  /* 1160a474 mov ecx, dword ptr [0x116320e0] */
  ECX = (r32((uint32_t)(0x116320e0)));
  /* 1160a47a push ecx */
  push32((uint32_t)(ECX));
  /* 1160a47b call 0x1160caa0 */
  push32(0x1160a480u); f_1160caa0();
  /* 1160a480 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a483 mov edx, dword ptr [0x116320e4] */
  EDX = (r32((uint32_t)(0x116320e4)));
  /* 1160a489 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a48c mov dword ptr [0x116320e4], edx */
  w32((uint32_t)(0x116320e4), (EDX));
L_1160a492:;
  /* 1160a492 mov dword ptr [0x116320e0], 0 */
  w32((uint32_t)(0x116320e0), (0x0u));
L_1160a49c:;
  /* 1160a49c mov esp, ebp */
  ESP = (EBP);
  /* 1160a49e pop ebp */
  EBP = (pop32());
  /* 1160a49f ret  */
  ESPCHK(0x1160a370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4a0 @ 0x1160a4a0 (1565 bytes, 343 insns) */
void f_1160a4a0(void) {
  FTRACE(0x1160a4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160a4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160a4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1160a4a3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a4a9 mov eax, dword ptr [0x116320e4] */
  EAX = (r32((uint32_t)(0x116320e4)));
  /* 1160a4ae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160a4b1 push eax */
  push32((uint32_t)(EAX));
  /* 1160a4b2 mov ecx, dword ptr [0x116320e8] */
  ECX = (r32((uint32_t)(0x116320e8)));
  /* 1160a4b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1160a4b9 call dword ptr [0x116333e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333e4))), 0x1160a4bfu);
  /* 1160a4bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160a4c1 je 0x1160a4cb */
  if (C.zf) goto L_1160a4cb;
  /* 1160a4c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160a4c6 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a4cb:;
  /* 1160a4cb mov edx, dword ptr [0x116320e8] */
  EDX = (r32((uint32_t)(0x116320e8)));
  /* 1160a4d1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1160a4d7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1160a4e1 jmp 0x1160a4f2 */
  goto L_1160a4f2;
L_1160a4e3:;
  /* 1160a4e3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1160a4e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a4ec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1160a4f2:;
  /* 1160a4f2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1160a4f8 cmp ecx, dword ptr [0x116320e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116320e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a4fe jge 0x1160aab7 */
  if ((C.sf==C.of)) goto L_1160aab7;
  /* 1160a504 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1160a50a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1160a50d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1160a513 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1160a518 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1160a51e push ecx */
  push32((uint32_t)(ECX));
  /* 1160a51f call dword ptr [0x116333e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333e4))), 0x1160a525u);
  /* 1160a525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160a527 je 0x1160a533 */
  if (C.zf) goto L_1160a533;
  /* 1160a529 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1160a52e jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a533:;
  /* 1160a533 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1160a539 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1160a53c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1160a542 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1160a548 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a54e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1160a551 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1160a557 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1160a55a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160a55d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1160a567 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1160a571 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160a578 jmp 0x1160a583 */
  goto L_1160a583;
L_1160a57a:;
  /* 1160a57a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160a57d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a580 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1160a583:;
  /* 1160a583 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a587 jge 0x1160aa7b */
  if ((C.sf==C.of)) goto L_1160aa7b;
  /* 1160a58d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1160a597 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1160a5a1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1160a5ab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1160a5b5 jmp 0x1160a5c6 */
  goto L_1160a5c6;
L_1160a5b7:;
  /* 1160a5b7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1160a5bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a5c0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1160a5c6:;
  /* 1160a5c6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a5cd jge 0x1160a5e2 */
  if ((C.sf==C.of)) goto L_1160a5e2;
  /* 1160a5cf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1160a5d5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1160a5e0 jmp 0x1160a5b7 */
  goto L_1160a5b7;
L_1160a5e2:;
  /* 1160a5e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a5e6 jl 0x1160aa1d */
  if ((C.sf!=C.of)) goto L_1160aa1d;
  /* 1160a5ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1160a5f1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1160a5f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1160a5f8 call dword ptr [0x116333e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333e4))), 0x1160a5feu);
  /* 1160a5fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160a600 je 0x1160a60c */
  if (C.zf) goto L_1160a60c;
  /* 1160a602 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1160a607 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a60c:;
  /* 1160a60c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1160a612 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1160a615 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1160a61f jmp 0x1160a630 */
  goto L_1160a630;
L_1160a621:;
  /* 1160a621 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1160a627 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a62a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1160a630:;
  /* 1160a630 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a637 jge 0x1160a7b4 */
  if ((C.sf==C.of)) goto L_1160a7b4;
  /* 1160a63d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160a640 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a643 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1160a649 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1160a64f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a655 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1160a65b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1160a661 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a665 jne 0x1160a672 */
  if (!C.zf) goto L_1160a672;
  /* 1160a667 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1160a66d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a670 je 0x1160a67c */
  if (C.zf) goto L_1160a67c;
L_1160a672:;
  /* 1160a672 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1160a677 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a67c:;
  /* 1160a67c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1160a682 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1160a684 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1160a68a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1160a690 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1160a696 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1160a69c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1160a69f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160a6a1 je 0x1160a6d9 */
  if (C.zf) goto L_1160a6d9;
  /* 1160a6a3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1160a6a9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a6ac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1160a6b2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a6bc jle 0x1160a6c8 */
  if ((C.zf||C.sf!=C.of)) goto L_1160a6c8;
  /* 1160a6be mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1160a6c3 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a6c8:;
  /* 1160a6c8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1160a6ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a6d1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1160a6d7 jmp 0x1160a71b */
  goto L_1160a71b;
L_1160a6d9:;
  /* 1160a6d9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1160a6df sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1160a6e2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a6e5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1160a6eb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a6f2 jle 0x1160a6fe */
  if ((C.zf||C.sf!=C.of)) goto L_1160a6fe;
  /* 1160a6f4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1160a6fe:;
  /* 1160a6fe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1160a704 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1160a70b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a70e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1160a714 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1160a71b:;
  /* 1160a71b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a722 jl 0x1160a73d */
  if ((C.sf!=C.of)) goto L_1160a73d;
  /* 1160a724 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1160a72a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1160a72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160a72f jne 0x1160a73d */
  if (!C.zf) goto L_1160a73d;
  /* 1160a731 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a73b jle 0x1160a747 */
  if ((C.zf||C.sf!=C.of)) goto L_1160a747;
L_1160a73d:;
  /* 1160a73d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1160a742 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a747:;
  /* 1160a747 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1160a74d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a753 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1160a756 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a75c je 0x1160a768 */
  if (C.zf) goto L_1160a768;
  /* 1160a75e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1160a763 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a768:;
  /* 1160a768 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1160a76e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a774 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1160a77a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1160a780 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a786 jb 0x1160a67c */
  if (C.cf) goto L_1160a67c;
  /* 1160a78c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1160a792 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a798 je 0x1160a7a4 */
  if (C.zf) goto L_1160a7a4;
  /* 1160a79a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1160a79f jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a7a4:;
  /* 1160a7a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160a7a7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a7ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160a7af jmp 0x1160a621 */
  goto L_1160a621;
L_1160a7b4:;
  /* 1160a7b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160a7b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1160a7b9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a7bf je 0x1160a7cb */
  if (C.zf) goto L_1160a7cb;
  /* 1160a7c1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1160a7c6 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a7cb:;
  /* 1160a7cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160a7ce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1160a7d4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1160a7db jmp 0x1160a7e6 */
  goto L_1160a7e6;
L_1160a7dd:;
  /* 1160a7dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a7e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a7e3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1160a7e6:;
  /* 1160a7e6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a7ea jge 0x1160aa1d */
  if ((C.sf==C.of)) goto L_1160aa1d;
  /* 1160a7f0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1160a7fa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1160a800 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1160a806:;
  /* 1160a806 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1160a80c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160a80f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1160a815 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1160a81b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a821 je 0x1160a94a */
  if (C.zf) goto L_1160a94a;
  /* 1160a827 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a82a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1160a830 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a837 je 0x1160a94a */
  if (C.zf) goto L_1160a94a;
  /* 1160a83d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1160a843 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a849 jb 0x1160a85e */
  if (C.cf) goto L_1160a85e;
  /* 1160a84b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1160a851 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a856 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a85c jb 0x1160a868 */
  if (C.cf) goto L_1160a868;
L_1160a85e:;
  /* 1160a85e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1160a863 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a868:;
  /* 1160a868 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1160a86e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1160a874 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1160a87a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1160a880 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a883 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1160a886 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a889 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a88e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1160a894:;
  /* 1160a894 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a897 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a89d je 0x1160a8be */
  if (C.zf) goto L_1160a8be;
  /* 1160a89f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a8a2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a8a8 jne 0x1160a8ac */
  if (!C.zf) goto L_1160a8ac;
  /* 1160a8aa jmp 0x1160a8be */
  goto L_1160a8be;
L_1160a8ac:;
  /* 1160a8ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a8af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160a8b1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1160a8b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a8b7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a8b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1160a8bc jmp 0x1160a894 */
  goto L_1160a894;
L_1160a8be:;
  /* 1160a8be mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160a8c1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a8c7 jne 0x1160a8d3 */
  if (!C.zf) goto L_1160a8d3;
  /* 1160a8c9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1160a8ce jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a8d3:;
  /* 1160a8d3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1160a8d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1160a8db sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1160a8de sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a8e1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1160a8e7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a8ee jle 0x1160a8fa */
  if ((C.zf||C.sf!=C.of)) goto L_1160a8fa;
  /* 1160a8f0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1160a8fa:;
  /* 1160a8fa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1160a900 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a903 je 0x1160a90f */
  if (C.zf) goto L_1160a90f;
  /* 1160a905 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1160a90a jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a90f:;
  /* 1160a90f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1160a915 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1160a918 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a91e je 0x1160a92a */
  if (C.zf) goto L_1160a92a;
  /* 1160a920 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1160a925 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a92a:;
  /* 1160a92a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1160a930 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1160a936 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1160a93c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160a93f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1160a945 jmp 0x1160a806 */
  goto L_1160a806;
L_1160a94a:;
  /* 1160a94a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a951 je 0x1160a9c1 */
  if (C.zf) goto L_1160a9c1;
  /* 1160a953 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a957 jge 0x1160a98b */
  if ((C.sf==C.of)) goto L_1160a98b;
  /* 1160a959 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a95e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a961 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a963 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1160a969 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160a96b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1160a971 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a976 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a979 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a97b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1160a981 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160a983 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1160a989 jmp 0x1160a9c1 */
  goto L_1160a9c1;
L_1160a98b:;
  /* 1160a98b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a98e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a991 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a996 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a998 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1160a99e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160a9a0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1160a9a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a9a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160a9ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1160a9b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1160a9b3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1160a9b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1160a9bb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1160a9c1:;
  /* 1160a9c1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1160a9c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1160a9ca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a9d0 jne 0x1160a9e4 */
  if (!C.zf) goto L_1160a9e4;
  /* 1160a9d2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160a9d5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1160a9db cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a9e2 je 0x1160a9ee */
  if (C.zf) goto L_1160a9ee;
L_1160a9e4:;
  /* 1160a9e4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1160a9e9 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160a9ee:;
  /* 1160a9ee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1160a9f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1160a9f7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160a9fd je 0x1160aa09 */
  if (C.zf) goto L_1160aa09;
  /* 1160a9ff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1160aa04 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160aa09:;
  /* 1160aa09 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1160aa0f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160aa12 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1160aa18 jmp 0x1160a7dd */
  goto L_1160a7dd;
L_1160aa1d:;
  /* 1160aa1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160aa20 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1160aa26 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1160aa2c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160aa30 jne 0x1160aa4a */
  if (!C.zf) goto L_1160aa4a;
  /* 1160aa32 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160aa35 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1160aa3b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1160aa41 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160aa48 je 0x1160aa51 */
  if (C.zf) goto L_1160aa51;
L_1160aa4a:;
  /* 1160aa4a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1160aa4f jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160aa51:;
  /* 1160aa51 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1160aa57 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160aa5d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1160aa63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160aa66 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160aa6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1160aa6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160aa71 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1160aa73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1160aa76 jmp 0x1160a57a */
  goto L_1160a57a;
L_1160aa7b:;
  /* 1160aa7b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1160aa81 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1160aa87 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160aa89 jne 0x1160aa9c */
  if (!C.zf) goto L_1160aa9c;
  /* 1160aa8b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1160aa91 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1160aa97 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160aa9a je 0x1160aaa3 */
  if (C.zf) goto L_1160aaa3;
L_1160aa9c:;
  /* 1160aa9c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1160aaa1 jmp 0x1160aab9 */
  goto L_1160aab9;
L_1160aaa3:;
  /* 1160aaa3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1160aaa9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160aaac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1160aab2 jmp 0x1160a4e3 */
  goto L_1160a4e3;
L_1160aab7:;
  /* 1160aab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1160aab9:;
  /* 1160aab9 mov esp, ebp */
  ESP = (EBP);
  /* 1160aabb pop ebp */
  EBP = (pop32());
  /* 1160aabc ret  */
  ESPCHK(0x1160a4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aac0 @ 0x1160aac0 (250 bytes, 92 insns) */
void f_1160aac0(void) {
  FTRACE(0x1160aac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160aac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160aac1 mov ebp, esp */
  EBP = (ESP);
  /* 1160aac3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160aac6 push ebx */
  push32((uint32_t)(EBX));
  /* 1160aac7 push esi */
  push32((uint32_t)(ESI));
  /* 1160aac8 push edi */
  push32((uint32_t)(EDI));
  /* 1160aac9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1160aacc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1160aacf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1160aad2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1160aad5:;
  /* 1160aad5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160aad9 jne 0x1160aaf9 */
  if (!C.zf) goto L_1160aaf9;
  /* 1160aadb push 0x1162be78 */
  push32((uint32_t)(0x1162be78u));
  /* 1160aae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160aae2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1160aae4 push 0x1162be6c */
  push32((uint32_t)(0x1162be6cu));
  /* 1160aae9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160aaeb call 0x11603c70 */
  push32(0x1160aaf0u); f_11603c70();
  /* 1160aaf0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160aaf3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160aaf6 jne 0x1160aaf9 */
  if (!C.zf) goto L_1160aaf9;
  /* 1160aaf8 int3  */
  x86_unimpl("int3 @ 0x1160aaf8");
L_1160aaf9:;
  /* 1160aaf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160aafb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160aafd jne 0x1160aad5 */
  if (!C.zf) goto L_1160aad5;
L_1160aaff:;
  /* 1160aaff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ab03 jne 0x1160ab23 */
  if (!C.zf) goto L_1160ab23;
  /* 1160ab05 push 0x1162be5c */
  push32((uint32_t)(0x1162be5cu));
  /* 1160ab0a push 0 */
  push32((uint32_t)(0x0u));
  /* 1160ab0c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1160ab0e push 0x1162be6c */
  push32((uint32_t)(0x1162be6cu));
  /* 1160ab13 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ab15 call 0x11603c70 */
  push32(0x1160ab1au); f_11603c70();
  /* 1160ab1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ab1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ab20 jne 0x1160ab23 */
  if (!C.zf) goto L_1160ab23;
  /* 1160ab22 int3  */
  x86_unimpl("int3 @ 0x1160ab22");
L_1160ab23:;
  /* 1160ab23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ab25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ab27 jne 0x1160aaff */
  if (!C.zf) goto L_1160aaff;
  /* 1160ab29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab2c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1160ab33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ab39 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1160ab3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ab42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1160ab44 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab47 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1160ab4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160ab51 push ecx */
  push32((uint32_t)(ECX));
  /* 1160ab52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160ab55 push edx */
  push32((uint32_t)(EDX));
  /* 1160ab56 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab59 push eax */
  push32((uint32_t)(EAX));
  /* 1160ab5a call 0x1160bb40 */
  push32(0x1160ab5fu); f_1160bb40();
  /* 1160ab5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ab62 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1160ab65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab68 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1160ab6b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ab6e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab71 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1160ab74 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab77 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ab7b jl 0x1160ab9f */
  if ((C.sf!=C.of)) goto L_1160ab9f;
  /* 1160ab7d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab80 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1160ab82 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1160ab85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160ab87 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1160ab8d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1160ab90 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab93 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1160ab95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ab98 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ab9b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1160ab9d jmp 0x1160abb0 */
  goto L_1160abb0;
L_1160ab9f:;
  /* 1160ab9f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160aba2 push edx */
  push32((uint32_t)(EDX));
  /* 1160aba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160aba5 call 0x1160b8c0 */
  push32(0x1160abaau); f_1160b8c0();
  /* 1160abaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160abad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1160abb0:;
  /* 1160abb0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160abb3 pop edi */
  EDI = (pop32());
  /* 1160abb4 pop esi */
  ESI = (pop32());
  /* 1160abb5 pop ebx */
  EBX = (pop32());
  /* 1160abb6 mov esp, ebp */
  ESP = (EBP);
  /* 1160abb8 pop ebp */
  EBP = (pop32());
  /* 1160abb9 ret  */
  ESPCHK(0x1160aac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abc0 @ 0x1160abc0 (183 bytes, 58 insns) */
void f_1160abc0(void) {
  FTRACE(0x1160abc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160abc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160abc1 mov ebp, esp */
  EBP = (ESP);
  /* 1160abc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160abc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160abc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160abcc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160abd1 ja 0x1160abea */
  if ((!C.cf&&!C.zf)) goto L_1160abea;
  /* 1160abd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160abd6 mov edx, dword ptr [0x1162ec98] */
  EDX = (r32((uint32_t)(0x1162ec98)));
  /* 1160abdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160abde mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1160abe2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1160abe5 jmp 0x1160ac73 */
  goto L_1160ac73;
L_1160abea:;
  /* 1160abea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160abed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1160abf0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1160abf6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1160abfc mov edx, dword ptr [0x1162ec98] */
  EDX = (r32((uint32_t)(0x1162ec98)));
  /* 1160ac02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ac04 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1160ac08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1160ac0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ac0f je 0x1160ac33 */
  if (C.zf) goto L_1160ac33;
  /* 1160ac11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ac14 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1160ac17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1160ac1d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1160ac20 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1160ac23 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1160ac26 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1160ac2a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1160ac31 jmp 0x1160ac44 */
  goto L_1160ac44;
L_1160ac33:;
  /* 1160ac33 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1160ac36 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1160ac39 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1160ac3d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1160ac44:;
  /* 1160ac44 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160ac46 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160ac48 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160ac4a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1160ac4d push ecx */
  push32((uint32_t)(ECX));
  /* 1160ac4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ac51 push edx */
  push32((uint32_t)(EDX));
  /* 1160ac52 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1160ac55 push eax */
  push32((uint32_t)(EAX));
  /* 1160ac56 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160ac58 call 0x1160cde0 */
  push32(0x1160ac5du); f_1160cde0();
  /* 1160ac5d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ac60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ac62 jne 0x1160ac68 */
  if (!C.zf) goto L_1160ac68;
  /* 1160ac64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ac66 jmp 0x1160ac73 */
  goto L_1160ac73;
L_1160ac68:;
  /* 1160ac68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ac6b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160ac70 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1160ac73:;
  /* 1160ac73 mov esp, ebp */
  ESP = (EBP);
  /* 1160ac75 pop ebp */
  EBP = (pop32());
  /* 1160ac76 ret  */
  ESPCHK(0x1160abc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac80 @ 0x1160ac80 (836 bytes, 238 insns) */
void f_1160ac80(void) {
  FTRACE(0x1160ac80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160ac80 push ebp */
  push32((uint32_t)(EBP));
  /* 1160ac81 mov ebp, esp */
  EBP = (ESP);
  /* 1160ac83 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ac86 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1160ac88 call 0x116085b0 */
  push32(0x1160ac8du); f_116085b0();
  /* 1160ac8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ac90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ac93 push eax */
  push32((uint32_t)(EAX));
  /* 1160ac94 call 0x1160afd0 */
  push32(0x1160ac99u); f_1160afd0();
  /* 1160ac99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ac9c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1160ac9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160aca2 cmp ecx, dword ptr [0x11631e24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11631e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160aca8 jne 0x1160acbb */
  if (!C.zf) goto L_1160acbb;
  /* 1160acaa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1160acac call 0x11608650 */
  push32(0x1160acb1u); f_11608650();
  /* 1160acb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160acb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160acb6 jmp 0x1160afc0 */
  goto L_1160afc0;
L_1160acbb:;
  /* 1160acbb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160acbf jne 0x1160acdc */
  if (!C.zf) goto L_1160acdc;
  /* 1160acc1 call 0x1160b0b0 */
  push32(0x1160acc6u); f_1160b0b0();
  /* 1160acc6 call 0x1160b130 */
  push32(0x1160accbu); f_1160b130();
  /* 1160accb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1160accd call 0x11608650 */
  push32(0x1160acd2u); f_11608650();
  /* 1160acd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160acd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160acd7 jmp 0x1160afc0 */
  goto L_1160afc0;
L_1160acdc:;
  /* 1160acdc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160ace3 jmp 0x1160acee */
  goto L_1160acee;
L_1160ace5:;
  /* 1160ace5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ace8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160aceb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1160acee:;
  /* 1160acee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160acf2 jae 0x1160ae3f */
  if (!C.cf) goto L_1160ae3f;
  /* 1160acf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160acfb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160acfe mov ecx, dword ptr [eax + 0x1162eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1162eeb8)));
  /* 1160ad04 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ad07 jne 0x1160ae3a */
  if (!C.zf) goto L_1160ae3a;
  /* 1160ad0d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1160ad14 jmp 0x1160ad1f */
  goto L_1160ad1f;
L_1160ad16:;
  /* 1160ad16 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ad19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ad1c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1160ad1f:;
  /* 1160ad1f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ad26 jae 0x1160ad34 */
  if (!C.cf) goto L_1160ad34;
  /* 1160ad28 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ad2b mov byte ptr [eax + 0x11631fc0], 0 */
  w8((uint32_t)(EAX + 0x11631fc0), (0x0u));
  /* 1160ad32 jmp 0x1160ad16 */
  goto L_1160ad16;
L_1160ad34:;
  /* 1160ad34 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160ad3b jmp 0x1160ad46 */
  goto L_1160ad46;
L_1160ad3d:;
  /* 1160ad3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ad40 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ad43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1160ad46:;
  /* 1160ad46 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ad4a jae 0x1160adc7 */
  if (!C.cf) goto L_1160adc7;
  /* 1160ad4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ad4f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ad52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ad55 lea ecx, [edx + eax*8 + 0x1162eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1162eec8));
  /* 1160ad5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1160ad5f jmp 0x1160ad6a */
  goto L_1160ad6a;
L_1160ad61:;
  /* 1160ad61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ad64 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ad67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1160ad6a:;
  /* 1160ad6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ad6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160ad6f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1160ad71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160ad73 je 0x1160adc2 */
  if (C.zf) goto L_1160adc2;
  /* 1160ad75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ad78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ad7a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1160ad7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ad7f je 0x1160adc2 */
  if (C.zf) goto L_1160adc2;
  /* 1160ad81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ad84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160ad86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1160ad88 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1160ad8b jmp 0x1160ad96 */
  goto L_1160ad96;
L_1160ad8d:;
  /* 1160ad8d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ad90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ad93 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1160ad96:;
  /* 1160ad96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ad99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160ad9b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1160ad9e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ada1 ja 0x1160adc0 */
  if ((!C.cf&&!C.zf)) goto L_1160adc0;
  /* 1160ada3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ada6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ada9 mov dl, byte ptr [eax + 0x11631fc1] */
  DL = (r8((uint32_t)(EAX + 0x11631fc1)));
  /* 1160adaf or dl, byte ptr [ecx + 0x1162eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1162eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1160adb5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160adb8 mov byte ptr [eax + 0x11631fc1], dl */
  w8((uint32_t)(EAX + 0x11631fc1), (DL));
  /* 1160adbe jmp 0x1160ad8d */
  goto L_1160ad8d;
L_1160adc0:;
  /* 1160adc0 jmp 0x1160ad61 */
  goto L_1160ad61;
L_1160adc2:;
  /* 1160adc2 jmp 0x1160ad3d */
  goto L_1160ad3d;
L_1160adc7:;
  /* 1160adc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160adca mov dword ptr [0x11631e24], ecx */
  w32((uint32_t)(0x11631e24), (ECX));
  /* 1160add0 mov dword ptr [0x11631eac], 1 */
  w32((uint32_t)(0x11631eac), (0x1u));
  /* 1160adda mov edx, dword ptr [0x11631e24] */
  EDX = (r32((uint32_t)(0x11631e24)));
  /* 1160ade0 push edx */
  push32((uint32_t)(EDX));
  /* 1160ade1 call 0x1160b030 */
  push32(0x1160ade6u); f_1160b030();
  /* 1160ade6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ade9 mov dword ptr [0x116320c4], eax */
  w32((uint32_t)(0x116320c4), (EAX));
  /* 1160adee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160adf5 jmp 0x1160ae00 */
  goto L_1160ae00;
L_1160adf7:;
  /* 1160adf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160adfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160adfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1160ae00:;
  /* 1160ae00 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ae04 jae 0x1160ae24 */
  if (!C.cf) goto L_1160ae24;
  /* 1160ae06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ae09 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ae0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ae0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ae12 mov cx, word ptr [ecx + eax*2 + 0x1162eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1162eebc)));
  /* 1160ae1a mov word ptr [edx*2 + 0x11631ea0], cx */
  w16((uint32_t)(EDX*2 + 0x11631ea0), (CX));
  /* 1160ae22 jmp 0x1160adf7 */
  goto L_1160adf7;
L_1160ae24:;
  /* 1160ae24 call 0x1160b130 */
  push32(0x1160ae29u); f_1160b130();
  /* 1160ae29 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1160ae2b call 0x11608650 */
  push32(0x1160ae30u); f_11608650();
  /* 1160ae30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ae33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ae35 jmp 0x1160afc0 */
  goto L_1160afc0;
L_1160ae3a:;
  /* 1160ae3a jmp 0x1160ace5 */
  goto L_1160ace5;
L_1160ae3f:;
  /* 1160ae3f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1160ae42 push edx */
  push32((uint32_t)(EDX));
  /* 1160ae43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ae46 push eax */
  push32((uint32_t)(EAX));
  /* 1160ae47 call dword ptr [0x11633330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633330))), 0x1160ae4du);
  /* 1160ae4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ae50 jne 0x1160af92 */
  if (!C.zf) goto L_1160af92;
  /* 1160ae56 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1160ae5d jmp 0x1160ae68 */
  goto L_1160ae68;
L_1160ae5f:;
  /* 1160ae5f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ae62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ae65 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1160ae68:;
  /* 1160ae68 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ae6f jae 0x1160ae7d */
  if (!C.cf) goto L_1160ae7d;
  /* 1160ae71 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160ae74 mov byte ptr [edx + 0x11631fc0], 0 */
  w8((uint32_t)(EDX + 0x11631fc0), (0x0u));
  /* 1160ae7b jmp 0x1160ae5f */
  goto L_1160ae5f;
L_1160ae7d:;
  /* 1160ae7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ae80 mov dword ptr [0x11631e24], eax */
  w32((uint32_t)(0x11631e24), (EAX));
  /* 1160ae85 mov dword ptr [0x116320c4], 0 */
  w32((uint32_t)(0x116320c4), (0x0u));
  /* 1160ae8f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ae93 jbe 0x1160af4e */
  if ((C.cf||C.zf)) goto L_1160af4e;
  /* 1160ae99 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1160ae9c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1160ae9f jmp 0x1160aeaa */
  goto L_1160aeaa;
L_1160aea1:;
  /* 1160aea1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160aea4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160aea7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1160aeaa:;
  /* 1160aeaa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160aead xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160aeaf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1160aeb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160aeb3 je 0x1160aefc */
  if (C.zf) goto L_1160aefc;
  /* 1160aeb5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160aeb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160aeba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1160aebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160aebf je 0x1160aefc */
  if (C.zf) goto L_1160aefc;
  /* 1160aec1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160aec4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160aec6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1160aec8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1160aecb jmp 0x1160aed6 */
  goto L_1160aed6;
L_1160aecd:;
  /* 1160aecd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160aed0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160aed3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1160aed6:;
  /* 1160aed6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160aed9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160aedb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1160aede cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160aee1 ja 0x1160aefa */
  if ((!C.cf&&!C.zf)) goto L_1160aefa;
  /* 1160aee3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160aee6 mov cl, byte ptr [eax + 0x11631fc1] */
  CL = (r8((uint32_t)(EAX + 0x11631fc1)));
  /* 1160aeec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1160aeef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160aef2 mov byte ptr [edx + 0x11631fc1], cl */
  w8((uint32_t)(EDX + 0x11631fc1), (CL));
  /* 1160aef8 jmp 0x1160aecd */
  goto L_1160aecd;
L_1160aefa:;
  /* 1160aefa jmp 0x1160aea1 */
  goto L_1160aea1;
L_1160aefc:;
  /* 1160aefc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1160af03 jmp 0x1160af0e */
  goto L_1160af0e;
L_1160af05:;
  /* 1160af05 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160af08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160af0b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1160af0e:;
  /* 1160af0e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160af15 jae 0x1160af2e */
  if (!C.cf) goto L_1160af2e;
  /* 1160af17 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160af1a mov dl, byte ptr [ecx + 0x11631fc1] */
  DL = (r8((uint32_t)(ECX + 0x11631fc1)));
  /* 1160af20 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1160af23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160af26 mov byte ptr [eax + 0x11631fc1], dl */
  w8((uint32_t)(EAX + 0x11631fc1), (DL));
  /* 1160af2c jmp 0x1160af05 */
  goto L_1160af05;
L_1160af2e:;
  /* 1160af2e mov ecx, dword ptr [0x11631e24] */
  ECX = (r32((uint32_t)(0x11631e24)));
  /* 1160af34 push ecx */
  push32((uint32_t)(ECX));
  /* 1160af35 call 0x1160b030 */
  push32(0x1160af3au); f_1160b030();
  /* 1160af3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160af3d mov dword ptr [0x116320c4], eax */
  w32((uint32_t)(0x116320c4), (EAX));
  /* 1160af42 mov dword ptr [0x11631eac], 1 */
  w32((uint32_t)(0x11631eac), (0x1u));
  /* 1160af4c jmp 0x1160af58 */
  goto L_1160af58;
L_1160af4e:;
  /* 1160af4e mov dword ptr [0x11631eac], 0 */
  w32((uint32_t)(0x11631eac), (0x0u));
L_1160af58:;
  /* 1160af58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160af5f jmp 0x1160af6a */
  goto L_1160af6a;
L_1160af61:;
  /* 1160af61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160af64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160af67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1160af6a:;
  /* 1160af6a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160af6e jae 0x1160af7f */
  if (!C.cf) goto L_1160af7f;
  /* 1160af70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160af73 mov word ptr [eax*2 + 0x11631ea0], 0 */
  w16((uint32_t)(EAX*2 + 0x11631ea0), (0x0u));
  /* 1160af7d jmp 0x1160af61 */
  goto L_1160af61;
L_1160af7f:;
  /* 1160af7f call 0x1160b130 */
  push32(0x1160af84u); f_1160b130();
  /* 1160af84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1160af86 call 0x11608650 */
  push32(0x1160af8bu); f_11608650();
  /* 1160af8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160af8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160af90 jmp 0x1160afc0 */
  goto L_1160afc0;
L_1160af92:;
  /* 1160af92 cmp dword ptr [0x11630930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160af99 je 0x1160afb3 */
  if (C.zf) goto L_1160afb3;
  /* 1160af9b call 0x1160b0b0 */
  push32(0x1160afa0u); f_1160b0b0();
  /* 1160afa0 call 0x1160b130 */
  push32(0x1160afa5u); f_1160b130();
  /* 1160afa5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1160afa7 call 0x11608650 */
  push32(0x1160afacu); f_11608650();
  /* 1160afac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160afaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160afb1 jmp 0x1160afc0 */
  goto L_1160afc0;
L_1160afb3:;
  /* 1160afb3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1160afb5 call 0x11608650 */
  push32(0x1160afbau); f_11608650();
  /* 1160afba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160afbd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1160afc0:;
  /* 1160afc0 mov esp, ebp */
  ESP = (EBP);
  /* 1160afc2 pop ebp */
  EBP = (pop32());
  /* 1160afc3 ret  */
  ESPCHK(0x1160ac80u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1160afd0 (89 bytes, 21 insns) */
void f_1160afd0(void) {
  FTRACE(0x1160afd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160afd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160afd1 mov ebp, esp */
  EBP = (ESP);
  /* 1160afd3 mov dword ptr [0x11630930], 0 */
  w32((uint32_t)(0x11630930), (0x0u));
  /* 1160afdd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160afe1 jne 0x1160aff5 */
  if (!C.zf) goto L_1160aff5;
  /* 1160afe3 mov dword ptr [0x11630930], 1 */
  w32((uint32_t)(0x11630930), (0x1u));
  /* 1160afed call dword ptr [0x11633328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633328))), 0x1160aff3u);
  /* 1160aff3 jmp 0x1160b027 */
  goto L_1160b027;
L_1160aff5:;
  /* 1160aff5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160aff9 jne 0x1160b00d */
  if (!C.zf) goto L_1160b00d;
  /* 1160affb mov dword ptr [0x11630930], 1 */
  w32((uint32_t)(0x11630930), (0x1u));
  /* 1160b005 call dword ptr [0x1163332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163332c))), 0x1160b00bu);
  /* 1160b00b jmp 0x1160b027 */
  goto L_1160b027;
L_1160b00d:;
  /* 1160b00d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b011 jne 0x1160b024 */
  if (!C.zf) goto L_1160b024;
  /* 1160b013 mov dword ptr [0x11630930], 1 */
  w32((uint32_t)(0x11630930), (0x1u));
  /* 1160b01d mov eax, dword ptr [0x11630950] */
  EAX = (r32((uint32_t)(0x11630950)));
  /* 1160b022 jmp 0x1160b027 */
  goto L_1160b027;
L_1160b024:;
  /* 1160b024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1160b027:;
  /* 1160b027 pop ebp */
  EBP = (pop32());
  /* 1160b028 ret  */
  ESPCHK(0x1160afd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b030 @ 0x1160b030 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1160b030(void) {
  FTRACE(0x1160b030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160b030 push ebp */
  push32((uint32_t)(EBP));
  /* 1160b031 mov ebp, esp */
  EBP = (ESP);
  /* 1160b033 push ecx */
  push32((uint32_t)(ECX));
  /* 1160b034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b037 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160b03a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b03d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b043 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1160b046 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b04a ja 0x1160b07a */
  if ((!C.cf&&!C.zf)) goto L_1160b07a;
  /* 1160b04c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b04f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b051 mov dl, byte ptr [eax + 0x1160b094] */
  DL = (r8((uint32_t)(EAX + 0x1160b094)));
  /* 1160b057 jmp dword ptr [edx*4 + 0x1160b080] */
  switch (EDX) {
    case 0: goto L_1160b05e;
    case 1: goto L_1160b065;
    case 2: goto L_1160b06c;
    case 3: goto L_1160b073;
    case 4: goto L_1160b07a;
    default: x86_unimpl("switch@0x1160b057 out of table"); return;
  }
L_1160b05e:;
  /* 1160b05e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1160b063 jmp 0x1160b07c */
  goto L_1160b07c;
L_1160b065:;
  /* 1160b065 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1160b06a jmp 0x1160b07c */
  goto L_1160b07c;
L_1160b06c:;
  /* 1160b06c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1160b071 jmp 0x1160b07c */
  goto L_1160b07c;
L_1160b073:;
  /* 1160b073 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1160b078 jmp 0x1160b07c */
  goto L_1160b07c;
L_1160b07a:;
  /* 1160b07a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1160b07c:;
  /* 1160b07c mov esp, ebp */
  ESP = (EBP);
  /* 1160b07e pop ebp */
  EBP = (pop32());
  /* 1160b07f ret  */
  ESPCHK(0x1160b030u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1160b0b0 (116 bytes, 29 insns) */
void f_1160b0b0(void) {
  FTRACE(0x1160b0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160b0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160b0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1160b0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1160b0b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160b0bb jmp 0x1160b0c6 */
  goto L_1160b0c6;
L_1160b0bd:;
  /* 1160b0bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b0c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b0c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160b0c6:;
  /* 1160b0c6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b0cd jge 0x1160b0db */
  if ((C.sf==C.of)) goto L_1160b0db;
  /* 1160b0cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b0d2 mov byte ptr [ecx + 0x11631fc0], 0 */
  w8((uint32_t)(ECX + 0x11631fc0), (0x0u));
  /* 1160b0d9 jmp 0x1160b0bd */
  goto L_1160b0bd;
L_1160b0db:;
  /* 1160b0db mov dword ptr [0x11631e24], 0 */
  w32((uint32_t)(0x11631e24), (0x0u));
  /* 1160b0e5 mov dword ptr [0x11631eac], 0 */
  w32((uint32_t)(0x11631eac), (0x0u));
  /* 1160b0ef mov dword ptr [0x116320c4], 0 */
  w32((uint32_t)(0x116320c4), (0x0u));
  /* 1160b0f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160b100 jmp 0x1160b10b */
  goto L_1160b10b;
L_1160b102:;
  /* 1160b102 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b105 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b108 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1160b10b:;
  /* 1160b10b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b10f jge 0x1160b120 */
  if ((C.sf==C.of)) goto L_1160b120;
  /* 1160b111 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b114 mov word ptr [eax*2 + 0x11631ea0], 0 */
  w16((uint32_t)(EAX*2 + 0x11631ea0), (0x0u));
  /* 1160b11e jmp 0x1160b102 */
  goto L_1160b102;
L_1160b120:;
  /* 1160b120 mov esp, ebp */
  ESP = (EBP);
  /* 1160b122 pop ebp */
  EBP = (pop32());
  /* 1160b123 ret  */
  ESPCHK(0x1160b0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b130 @ 0x1160b130 (770 bytes, 175 insns) */
void f_1160b130(void) {
  FTRACE(0x1160b130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160b130 push ebp */
  push32((uint32_t)(EBP));
  /* 1160b131 mov ebp, esp */
  EBP = (ESP);
  /* 1160b133 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b139 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1160b13f push eax */
  push32((uint32_t)(EAX));
  /* 1160b140 mov ecx, dword ptr [0x11631e24] */
  ECX = (r32((uint32_t)(0x11631e24)));
  /* 1160b146 push ecx */
  push32((uint32_t)(ECX));
  /* 1160b147 call dword ptr [0x11633330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633330))), 0x1160b14du);
  /* 1160b14d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b150 jne 0x1160b369 */
  if (!C.zf) goto L_1160b369;
  /* 1160b156 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1160b160 jmp 0x1160b171 */
  goto L_1160b171;
L_1160b162:;
  /* 1160b162 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b168 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b16b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1160b171:;
  /* 1160b171 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b17b jae 0x1160b192 */
  if (!C.cf) goto L_1160b192;
  /* 1160b17d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b183 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1160b189 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1160b190 jmp 0x1160b162 */
  goto L_1160b162;
L_1160b192:;
  /* 1160b192 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1160b199 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1160b19f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160b1a2 jmp 0x1160b1ad */
  goto L_1160b1ad;
L_1160b1a4:;
  /* 1160b1a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b1a7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b1aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160b1ad:;
  /* 1160b1ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b1b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b1b2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1160b1b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160b1b6 je 0x1160b1f8 */
  if (C.zf) goto L_1160b1f8;
  /* 1160b1b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b1bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160b1bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1160b1bf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1160b1c5 jmp 0x1160b1d6 */
  goto L_1160b1d6;
L_1160b1c7:;
  /* 1160b1c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b1cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b1d0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1160b1d6:;
  /* 1160b1d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b1d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160b1db mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1160b1de cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b1e4 ja 0x1160b1f6 */
  if ((!C.cf&&!C.zf)) goto L_1160b1f6;
  /* 1160b1e6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b1ec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1160b1f4 jmp 0x1160b1c7 */
  goto L_1160b1c7;
L_1160b1f6:;
  /* 1160b1f6 jmp 0x1160b1a4 */
  goto L_1160b1a4;
L_1160b1f8:;
  /* 1160b1f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160b1fa mov eax, dword ptr [0x116320c4] */
  EAX = (r32((uint32_t)(0x116320c4)));
  /* 1160b1ff push eax */
  push32((uint32_t)(EAX));
  /* 1160b200 mov ecx, dword ptr [0x11631e24] */
  ECX = (r32((uint32_t)(0x11631e24)));
  /* 1160b206 push ecx */
  push32((uint32_t)(ECX));
  /* 1160b207 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1160b20d push edx */
  push32((uint32_t)(EDX));
  /* 1160b20e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1160b213 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1160b219 push eax */
  push32((uint32_t)(EAX));
  /* 1160b21a push 1 */
  push32((uint32_t)(0x1u));
  /* 1160b21c call 0x1160cde0 */
  push32(0x1160b221u); f_1160cde0();
  /* 1160b221 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b224 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160b226 mov ecx, dword ptr [0x11631e24] */
  ECX = (r32((uint32_t)(0x11631e24)));
  /* 1160b22c push ecx */
  push32((uint32_t)(ECX));
  /* 1160b22d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1160b232 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1160b238 push edx */
  push32((uint32_t)(EDX));
  /* 1160b239 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1160b23e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1160b244 push eax */
  push32((uint32_t)(EAX));
  /* 1160b245 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1160b24a mov ecx, dword ptr [0x116320c4] */
  ECX = (r32((uint32_t)(0x116320c4)));
  /* 1160b250 push ecx */
  push32((uint32_t)(ECX));
  /* 1160b251 call 0x1160cfa0 */
  push32(0x1160b256u); f_1160cfa0();
  /* 1160b256 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b259 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160b25b mov edx, dword ptr [0x11631e24] */
  EDX = (r32((uint32_t)(0x11631e24)));
  /* 1160b261 push edx */
  push32((uint32_t)(EDX));
  /* 1160b262 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1160b267 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1160b26d push eax */
  push32((uint32_t)(EAX));
  /* 1160b26e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1160b273 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1160b279 push ecx */
  push32((uint32_t)(ECX));
  /* 1160b27a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1160b27f mov edx, dword ptr [0x116320c4] */
  EDX = (r32((uint32_t)(0x116320c4)));
  /* 1160b285 push edx */
  push32((uint32_t)(EDX));
  /* 1160b286 call 0x1160cfa0 */
  push32(0x1160b28bu); f_1160cfa0();
  /* 1160b28b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b28e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1160b298 jmp 0x1160b2a9 */
  goto L_1160b2a9;
L_1160b29a:;
  /* 1160b29a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b2a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b2a3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1160b2a9:;
  /* 1160b2a9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b2b3 jae 0x1160b364 */
  if (!C.cf) goto L_1160b364;
  /* 1160b2b9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b2bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b2c1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1160b2c9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1160b2cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160b2ce je 0x1160b306 */
  if (C.zf) goto L_1160b306;
  /* 1160b2d0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b2d6 mov cl, byte ptr [eax + 0x11631fc1] */
  CL = (r8((uint32_t)(EAX + 0x11631fc1)));
  /* 1160b2dc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1160b2df mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b2e5 mov byte ptr [edx + 0x11631fc1], cl */
  w8((uint32_t)(EDX + 0x11631fc1), (CL));
  /* 1160b2eb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b2f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b2f7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1160b2fe mov byte ptr [eax + 0x11631ec0], dl */
  w8((uint32_t)(EAX + 0x11631ec0), (DL));
  /* 1160b304 jmp 0x1160b35f */
  goto L_1160b35f;
L_1160b306:;
  /* 1160b306 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b30c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160b30e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1160b316 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1160b319 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160b31b je 0x1160b352 */
  if (C.zf) goto L_1160b352;
  /* 1160b31d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b323 mov al, byte ptr [edx + 0x11631fc1] */
  AL = (r8((uint32_t)(EDX + 0x11631fc1)));
  /* 1160b329 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1160b32b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b331 mov byte ptr [ecx + 0x11631fc1], al */
  w8((uint32_t)(ECX + 0x11631fc1), (AL));
  /* 1160b337 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b33d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b343 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1160b34a mov byte ptr [edx + 0x11631ec0], cl */
  w8((uint32_t)(EDX + 0x11631ec0), (CL));
  /* 1160b350 jmp 0x1160b35f */
  goto L_1160b35f;
L_1160b352:;
  /* 1160b352 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b358 mov byte ptr [edx + 0x11631ec0], 0 */
  w8((uint32_t)(EDX + 0x11631ec0), (0x0u));
L_1160b35f:;
  /* 1160b35f jmp 0x1160b29a */
  goto L_1160b29a;
L_1160b364:;
  /* 1160b364 jmp 0x1160b42e */
  goto L_1160b42e;
L_1160b369:;
  /* 1160b369 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1160b373 jmp 0x1160b384 */
  goto L_1160b384;
L_1160b375:;
  /* 1160b375 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b37b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b37e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1160b384:;
  /* 1160b384 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b38e jae 0x1160b42e */
  if (!C.cf) goto L_1160b42e;
  /* 1160b394 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b39b jb 0x1160b3d8 */
  if (C.cf) goto L_1160b3d8;
  /* 1160b39d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b3a4 ja 0x1160b3d8 */
  if ((!C.cf&&!C.zf)) goto L_1160b3d8;
  /* 1160b3a6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b3ac mov dl, byte ptr [ecx + 0x11631fc1] */
  DL = (r8((uint32_t)(ECX + 0x11631fc1)));
  /* 1160b3b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1160b3b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b3bb mov byte ptr [eax + 0x11631fc1], dl */
  w8((uint32_t)(EAX + 0x11631fc1), (DL));
  /* 1160b3c1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b3c7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b3ca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b3d0 mov byte ptr [edx + 0x11631ec0], cl */
  w8((uint32_t)(EDX + 0x11631ec0), (CL));
  /* 1160b3d6 jmp 0x1160b429 */
  goto L_1160b429;
L_1160b3d8:;
  /* 1160b3d8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b3df jb 0x1160b41c */
  if (C.cf) goto L_1160b41c;
  /* 1160b3e1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b3e8 ja 0x1160b41c */
  if ((!C.cf&&!C.zf)) goto L_1160b41c;
  /* 1160b3ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b3f0 mov cl, byte ptr [eax + 0x11631fc1] */
  CL = (r8((uint32_t)(EAX + 0x11631fc1)));
  /* 1160b3f6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1160b3f9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b3ff mov byte ptr [edx + 0x11631fc1], cl */
  w8((uint32_t)(EDX + 0x11631fc1), (CL));
  /* 1160b405 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b40b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b40e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b414 mov byte ptr [ecx + 0x11631ec0], al */
  w8((uint32_t)(ECX + 0x11631ec0), (AL));
  /* 1160b41a jmp 0x1160b429 */
  goto L_1160b429;
L_1160b41c:;
  /* 1160b41c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1160b422 mov byte ptr [edx + 0x11631ec0], 0 */
  w8((uint32_t)(EDX + 0x11631ec0), (0x0u));
L_1160b429:;
  /* 1160b429 jmp 0x1160b375 */
  goto L_1160b375;
L_1160b42e:;
  /* 1160b42e mov esp, ebp */
  ESP = (EBP);
  /* 1160b430 pop ebp */
  EBP = (pop32());
  /* 1160b431 ret  */
  ESPCHK(0x1160b130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b440 @ 0x1160b440 (23 bytes, 9 insns) */
void f_1160b440(void) {
  FTRACE(0x1160b440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160b440 push ebp */
  push32((uint32_t)(EBP));
  /* 1160b441 mov ebp, esp */
  EBP = (ESP);
  /* 1160b443 cmp dword ptr [0x11631eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11631eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b44a je 0x1160b453 */
  if (C.zf) goto L_1160b453;
  /* 1160b44c mov eax, dword ptr [0x11631e24] */
  EAX = (r32((uint32_t)(0x11631e24)));
  /* 1160b451 jmp 0x1160b455 */
  goto L_1160b455;
L_1160b453:;
  /* 1160b453 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1160b455:;
  /* 1160b455 pop ebp */
  EBP = (pop32());
  /* 1160b456 ret  */
  ESPCHK(0x1160b440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b460 @ 0x1160b460 (34 bytes, 10 insns) */
void f_1160b460(void) {
  FTRACE(0x1160b460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160b460 push ebp */
  push32((uint32_t)(EBP));
  /* 1160b461 mov ebp, esp */
  EBP = (ESP);
  /* 1160b463 cmp dword ptr [0x11632270], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11632270))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b46a jne 0x1160b480 */
  if (!C.zf) goto L_1160b480;
  /* 1160b46c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1160b46e call 0x1160ac80 */
  push32(0x1160b473u); f_1160ac80();
  /* 1160b473 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b476 mov dword ptr [0x11632270], 1 */
  w32((uint32_t)(0x11632270), (0x1u));
L_1160b480:;
  /* 1160b480 pop ebp */
  EBP = (pop32());
  /* 1160b481 ret  */
  ESPCHK(0x1160b460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b490 @ 0x1160b490 (664 bytes, 262 insns) [15 switch table(s)] */
void f_1160b490(void) {
  FTRACE(0x1160b490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160b490 push ebp */
  push32((uint32_t)(EBP));
  /* 1160b491 mov ebp, esp */
  EBP = (ESP);
  /* 1160b493 push edi */
  push32((uint32_t)(EDI));
  /* 1160b494 push esi */
  push32((uint32_t)(ESI));
  /* 1160b495 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1160b498 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160b49b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b49e mov eax, ecx */
  EAX = (ECX);
  /* 1160b4a0 mov edx, ecx */
  EDX = (ECX);
  /* 1160b4a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b4a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b4a6 jbe 0x1160b4b0 */
  if ((C.cf||C.zf)) goto L_1160b4b0;
  /* 1160b4a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b4aa jb 0x1160b628 */
  if (C.cf) goto L_1160b628;
L_1160b4b0:;
  /* 1160b4b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1160b4b6 jne 0x1160b4cc */
  if (!C.zf) goto L_1160b4cc;
  /* 1160b4b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160b4bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1160b4be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b4c1 jb 0x1160b4ec */
  if (C.cf) goto L_1160b4ec;
  /* 1160b4c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160b4c5 jmp dword ptr [edx*4 + 0x1160b5d8] */
  switch (EDX) {
    case 0: goto L_1160b5e8;
    case 1: goto L_1160b5f0;
    case 2: goto L_1160b5fc;
    case 3: goto L_1160b610;
    default: x86_unimpl("switch@0x1160b4c5 out of table"); return;
  }
L_1160b4cc:;
  /* 1160b4cc mov eax, edi */
  EAX = (EDI);
  /* 1160b4ce mov edx, 3 */
  EDX = (0x3u);
  /* 1160b4d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b4d6 jb 0x1160b4e4 */
  if (C.cf) goto L_1160b4e4;
  /* 1160b4d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1160b4db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b4dd jmp dword ptr [eax*4 + 0x1160b4f0] */
  switch (EAX) {
    case 1: goto L_1160b500;
    case 2: goto L_1160b52c;
    case 3: goto L_1160b550;
    default: x86_unimpl("switch@0x1160b4dd out of table"); return;
  }
L_1160b4e4:;
  /* 1160b4e4 jmp dword ptr [ecx*4 + 0x1160b5e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1160b5e8)))); return;
  /* 1160b4eb nop  */
  /* nop */
L_1160b4ec:;
  /* 1160b4ec jmp dword ptr [ecx*4 + 0x1160b56c] */
  switch (ECX) {
    case 0: goto L_1160b5cf;
    case 1: goto L_1160b5bc;
    case 2: goto L_1160b5b4;
    case 3: goto L_1160b5ac;
    case 4: goto L_1160b5a4;
    case 5: goto L_1160b59c;
    case 6: goto L_1160b594;
    case 7: goto L_1160b58c;
    default: x86_unimpl("switch@0x1160b4ec out of table"); return;
  }
  /* 1160b4f3 nop  */
  /* nop */
L_1160b500:;
  /* 1160b500 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b502 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160b504 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160b506 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160b509 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160b50c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160b50f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160b512 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160b515 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b518 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b51b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b51e jb 0x1160b4ec */
  if (C.cf) goto L_1160b4ec;
  /* 1160b520 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160b522 jmp dword ptr [edx*4 + 0x1160b5d8] */
  switch (EDX) {
    case 0: goto L_1160b5e8;
    case 1: goto L_1160b5f0;
    case 2: goto L_1160b5fc;
    case 3: goto L_1160b610;
    default: x86_unimpl("switch@0x1160b522 out of table"); return;
  }
  /* 1160b529 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160b52c:;
  /* 1160b52c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b52e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160b530 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160b532 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160b535 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160b538 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160b53b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b53e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b541 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b544 jb 0x1160b4ec */
  if (C.cf) goto L_1160b4ec;
  /* 1160b546 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160b548 jmp dword ptr [edx*4 + 0x1160b5d8] */
  switch (EDX) {
    case 0: goto L_1160b5e8;
    case 1: goto L_1160b5f0;
    case 2: goto L_1160b5fc;
    case 3: goto L_1160b610;
    default: x86_unimpl("switch@0x1160b548 out of table"); return;
  }
  /* 1160b54f nop  */
  /* nop */
L_1160b550:;
  /* 1160b550 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b552 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160b554 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160b556 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1160b557 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160b55a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1160b55b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b55e jb 0x1160b4ec */
  if (C.cf) goto L_1160b4ec;
  /* 1160b560 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160b562 jmp dword ptr [edx*4 + 0x1160b5d8] */
  switch (EDX) {
    case 0: goto L_1160b5e8;
    case 1: goto L_1160b5f0;
    case 2: goto L_1160b5fc;
    case 3: goto L_1160b610;
    default: x86_unimpl("switch@0x1160b562 out of table"); return;
  }
  /* 1160b569 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160b58c:;
  /* 1160b58c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1160b590 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1160b594:;
  /* 1160b594 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1160b598 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1160b59c:;
  /* 1160b59c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1160b5a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1160b5a4:;
  /* 1160b5a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1160b5a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1160b5ac:;
  /* 1160b5ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1160b5b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1160b5b4:;
  /* 1160b5b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1160b5b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1160b5bc:;
  /* 1160b5bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1160b5c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1160b5c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1160b5cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b5cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1160b5cf:;
  /* 1160b5cf jmp dword ptr [edx*4 + 0x1160b5d8] */
  switch (EDX) {
    case 0: goto L_1160b5e8;
    case 1: goto L_1160b5f0;
    case 2: goto L_1160b5fc;
    case 3: goto L_1160b610;
    default: x86_unimpl("switch@0x1160b5cf out of table"); return;
  }
  /* 1160b5d6 mov edi, edi */
  EDI = (EDI);
L_1160b5e8:;
  /* 1160b5e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b5eb pop esi */
  ESI = (pop32());
  /* 1160b5ec pop edi */
  EDI = (pop32());
  /* 1160b5ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160b5ee ret  */
  ESPCHK(0x1160b490u, _esp0);
  ESP += 4; return;
  /* 1160b5ef nop  */
  /* nop */
L_1160b5f0:;
  /* 1160b5f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160b5f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160b5f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b5f7 pop esi */
  ESI = (pop32());
  /* 1160b5f8 pop edi */
  EDI = (pop32());
  /* 1160b5f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160b5fa ret  */
  ESPCHK(0x1160b490u, _esp0);
  ESP += 4; return;
  /* 1160b5fb nop  */
  /* nop */
L_1160b5fc:;
  /* 1160b5fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160b5fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160b600 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160b603 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160b606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b609 pop esi */
  ESI = (pop32());
  /* 1160b60a pop edi */
  EDI = (pop32());
  /* 1160b60b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160b60c ret  */
  ESPCHK(0x1160b490u, _esp0);
  ESP += 4; return;
  /* 1160b60d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160b610:;
  /* 1160b610 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160b612 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160b614 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160b617 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160b61a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160b61d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160b620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b623 pop esi */
  ESI = (pop32());
  /* 1160b624 pop edi */
  EDI = (pop32());
  /* 1160b625 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160b626 ret  */
  ESPCHK(0x1160b490u, _esp0);
  ESP += 4; return;
  /* 1160b627 nop  */
  /* nop */
L_1160b628:;
  /* 1160b628 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1160b62c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1160b630 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1160b636 jne 0x1160b65c */
  if (!C.zf) goto L_1160b65c;
  /* 1160b638 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160b63b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1160b63e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b641 jb 0x1160b650 */
  if (C.cf) goto L_1160b650;
  /* 1160b643 std  */
  C.df=1;
  /* 1160b644 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160b646 cld  */
  C.df=0;
  /* 1160b647 jmp dword ptr [edx*4 + 0x1160b770] */
  switch (EDX) {
    case 0: goto L_1160b780;
    case 1: goto L_1160b788;
    case 2: goto L_1160b798;
    case 3: goto L_1160b7ac;
    default: x86_unimpl("switch@0x1160b647 out of table"); return;
  }
  /* 1160b64e mov edi, edi */
  EDI = (EDI);
L_1160b650:;
  /* 1160b650 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160b652 jmp dword ptr [ecx*4 + 0x1160b720] */
  switch (ECX) {
    case 0: goto L_1160b767;
    default: x86_unimpl("switch@0x1160b652 out of table"); return;
  }
  /* 1160b659 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160b65c:;
  /* 1160b65c mov eax, edi */
  EAX = (EDI);
  /* 1160b65e mov edx, 3 */
  EDX = (0x3u);
  /* 1160b663 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b666 jb 0x1160b674 */
  if (C.cf) goto L_1160b674;
  /* 1160b668 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1160b66b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b66d jmp dword ptr [eax*4 + 0x1160b678] */
  switch (EAX) {
    case 1: goto L_1160b688;
    case 2: goto L_1160b6a8;
    case 3: goto L_1160b6d0;
    default: x86_unimpl("switch@0x1160b66d out of table"); return;
  }
L_1160b674:;
  /* 1160b674 jmp dword ptr [ecx*4 + 0x1160b770] */
  switch (ECX) {
    case 0: goto L_1160b780;
    case 1: goto L_1160b788;
    case 2: goto L_1160b798;
    case 3: goto L_1160b7ac;
    default: x86_unimpl("switch@0x1160b674 out of table"); return;
  }
  /* 1160b67b nop  */
  /* nop */
L_1160b688:;
  /* 1160b688 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160b68b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b68d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160b690 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1160b691 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160b694 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1160b695 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b698 jb 0x1160b650 */
  if (C.cf) goto L_1160b650;
  /* 1160b69a std  */
  C.df=1;
  /* 1160b69b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160b69d cld  */
  C.df=0;
  /* 1160b69e jmp dword ptr [edx*4 + 0x1160b770] */
  switch (EDX) {
    case 0: goto L_1160b780;
    case 1: goto L_1160b788;
    case 2: goto L_1160b798;
    case 3: goto L_1160b7ac;
    default: x86_unimpl("switch@0x1160b69e out of table"); return;
  }
  /* 1160b6a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160b6a8:;
  /* 1160b6a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160b6ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b6ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160b6b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160b6b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160b6b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160b6b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b6bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b6bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b6c2 jb 0x1160b650 */
  if (C.cf) goto L_1160b650;
  /* 1160b6c4 std  */
  C.df=1;
  /* 1160b6c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160b6c7 cld  */
  C.df=0;
  /* 1160b6c8 jmp dword ptr [edx*4 + 0x1160b770] */
  switch (EDX) {
    case 0: goto L_1160b780;
    case 1: goto L_1160b788;
    case 2: goto L_1160b798;
    case 3: goto L_1160b7ac;
    default: x86_unimpl("switch@0x1160b6c8 out of table"); return;
  }
  /* 1160b6cf nop  */
  /* nop */
L_1160b6d0:;
  /* 1160b6d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160b6d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b6d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160b6d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160b6db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160b6de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160b6e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160b6e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160b6e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b6ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b6ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b6f0 jb 0x1160b650 */
  if (C.cf) goto L_1160b650;
  /* 1160b6f6 std  */
  C.df=1;
  /* 1160b6f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160b6f9 cld  */
  C.df=0;
  /* 1160b6fa jmp dword ptr [edx*4 + 0x1160b770] */
  switch (EDX) {
    case 0: goto L_1160b780;
    case 1: goto L_1160b788;
    case 2: goto L_1160b798;
    case 3: goto L_1160b7ac;
    default: x86_unimpl("switch@0x1160b6fa out of table"); return;
  }
  /* 1160b701 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1160b704 and al, 0xb7 */
  { uint32_t _r=(AL)&(0xb7u); AL = (_r); fl_logic(_r,8); }
  /* 1160b706 pushal  */
  x86_unimpl("pushal @ 0x1160b706");
  /* 1160b707 adc dword ptr [edi + esi*4], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160b70a pushal  */
  x86_unimpl("pushal @ 0x1160b70a");
  /* 1160b70b adc dword ptr [edi + esi*4], esi */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160b70e pushal  */
  x86_unimpl("pushal @ 0x1160b70e");
  /* 1160b70f adc dword ptr [edi + esi*4], edi */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160b712 pushal  */
  x86_unimpl("pushal @ 0x1160b712");
  /* 1160b713 adc dword ptr [edi + esi*4 + 0x60], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4 + 0x60))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4 + 0x60), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160b717 adc dword ptr [edi + esi*4 + 0x60], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4 + 0x60))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4 + 0x60), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160b71b adc dword ptr [edi + esi*4 + 0x60], edx */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4 + 0x60))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4 + 0x60), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160b724 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1160b728 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1160b72c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1160b730 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1160b734 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1160b738 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1160b73c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1160b740 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1160b744 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1160b748 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1160b74c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1160b750 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1160b754 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1160b758 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1160b75c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1160b763 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b765 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1160b767:;
  /* 1160b767 jmp dword ptr [edx*4 + 0x1160b770] */
  switch (EDX) {
    case 0: goto L_1160b780;
    case 1: goto L_1160b788;
    case 2: goto L_1160b798;
    case 3: goto L_1160b7ac;
    default: x86_unimpl("switch@0x1160b767 out of table"); return;
  }
  /* 1160b76e mov edi, edi */
  EDI = (EDI);
L_1160b780:;
  /* 1160b780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b783 pop esi */
  ESI = (pop32());
  /* 1160b784 pop edi */
  EDI = (pop32());
  /* 1160b785 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160b786 ret  */
  ESPCHK(0x1160b490u, _esp0);
  ESP += 4; return;
  /* 1160b787 nop  */
  /* nop */
L_1160b788:;
  /* 1160b788 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160b78b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160b78e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b791 pop esi */
  ESI = (pop32());
  /* 1160b792 pop edi */
  EDI = (pop32());
  /* 1160b793 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160b794 ret  */
  ESPCHK(0x1160b490u, _esp0);
  ESP += 4; return;
  /* 1160b795 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160b798:;
  /* 1160b798 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160b79b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160b79e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160b7a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160b7a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b7a7 pop esi */
  ESI = (pop32());
  /* 1160b7a8 pop edi */
  EDI = (pop32());
  /* 1160b7a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160b7aa ret  */
  ESPCHK(0x1160b490u, _esp0);
  ESP += 4; return;
  /* 1160b7ab nop  */
  /* nop */
L_1160b7ac:;
  /* 1160b7ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160b7af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160b7b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160b7b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160b7b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160b7bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160b7be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160b7c1 pop esi */
  ESI = (pop32());
  /* 1160b7c2 pop edi */
  EDI = (pop32());
  /* 1160b7c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160b7c4 ret  */
  ESPCHK(0x1160b490u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1160b7d0 (104 bytes, 43 insns) */
void f_1160b7d0(void) {
  FTRACE(0x1160b7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160b7d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1160b7d1 push esi */
  push32((uint32_t)(ESI));
  /* 1160b7d2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1160b7d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160b7d8 jne 0x1160b7f2 */
  if (!C.zf) goto L_1160b7f2;
  /* 1160b7da mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1160b7de mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1160b7e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b7e4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1160b7e6 mov ebx, eax */
  EBX = (EAX);
  /* 1160b7e8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1160b7ec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1160b7ee mov edx, ebx */
  EDX = (EBX);
  /* 1160b7f0 jmp 0x1160b833 */
  goto L_1160b833;
L_1160b7f2:;
  /* 1160b7f2 mov ecx, eax */
  ECX = (EAX);
  /* 1160b7f4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1160b7f8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1160b7fc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1160b800:;
  /* 1160b800 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1160b802 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1160b804 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1160b806 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1160b808 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160b80a jne 0x1160b800 */
  if (!C.zf) goto L_1160b800;
  /* 1160b80c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1160b80e mov esi, eax */
  ESI = (EAX);
  /* 1160b810 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1160b814 mov ecx, eax */
  ECX = (EAX);
  /* 1160b816 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1160b81a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1160b81c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b81e jb 0x1160b82e */
  if (C.cf) goto L_1160b82e;
  /* 1160b820 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b824 ja 0x1160b82e */
  if ((!C.cf&&!C.zf)) goto L_1160b82e;
  /* 1160b826 jb 0x1160b82f */
  if (C.cf) goto L_1160b82f;
  /* 1160b828 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b82c jbe 0x1160b82f */
  if ((C.cf||C.zf)) goto L_1160b82f;
L_1160b82e:;
  /* 1160b82e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1160b82f:;
  /* 1160b82f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b831 mov eax, esi */
  EAX = (ESI);
L_1160b833:;
  /* 1160b833 pop esi */
  ESI = (pop32());
  /* 1160b834 pop ebx */
  EBX = (pop32());
  /* 1160b835 ret 0x10 */
  ESPCHK(0x1160b7d0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1160b840 (117 bytes, 44 insns) */
void f_1160b840(void) {
  FTRACE(0x1160b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160b840 push ebx */
  push32((uint32_t)(EBX));
  /* 1160b841 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1160b845 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160b847 jne 0x1160b861 */
  if (!C.zf) goto L_1160b861;
  /* 1160b849 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1160b84d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1160b851 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b853 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1160b855 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1160b859 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1160b85b mov eax, edx */
  EAX = (EDX);
  /* 1160b85d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1160b85f jmp 0x1160b8b1 */
  goto L_1160b8b1;
L_1160b861:;
  /* 1160b861 mov ecx, eax */
  ECX = (EAX);
  /* 1160b863 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1160b867 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1160b86b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1160b86f:;
  /* 1160b86f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1160b871 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1160b873 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1160b875 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1160b877 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160b879 jne 0x1160b86f */
  if (!C.zf) goto L_1160b86f;
  /* 1160b87b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1160b87d mov ecx, eax */
  ECX = (EAX);
  /* 1160b87f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1160b883 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1160b884 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1160b888 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b88a jb 0x1160b89a */
  if (C.cf) goto L_1160b89a;
  /* 1160b88c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b890 ja 0x1160b89a */
  if ((!C.cf&&!C.zf)) goto L_1160b89a;
  /* 1160b892 jb 0x1160b8a2 */
  if (C.cf) goto L_1160b8a2;
  /* 1160b894 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b898 jbe 0x1160b8a2 */
  if ((C.cf||C.zf)) goto L_1160b8a2;
L_1160b89a:;
  /* 1160b89a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b89e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1160b8a2:;
  /* 1160b8a2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b8a6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b8aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160b8ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160b8ae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1160b8b1:;
  /* 1160b8b1 pop ebx */
  EBX = (pop32());
  /* 1160b8b2 ret 0x10 */
  ESPCHK(0x1160b840u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b8c0 @ 0x1160b8c0 (628 bytes, 214 insns) */
void f_1160b8c0(void) {
  FTRACE(0x1160b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1160b8c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160b8c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1160b8c7 push esi */
  push32((uint32_t)(ESI));
  /* 1160b8c8 push edi */
  push32((uint32_t)(EDI));
L_1160b8c9:;
  /* 1160b8c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b8cd jne 0x1160b8ed */
  if (!C.zf) goto L_1160b8ed;
  /* 1160b8cf push 0x1162bf24 */
  push32((uint32_t)(0x1162bf24u));
  /* 1160b8d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160b8d6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1160b8d8 push 0x1162bf18 */
  push32((uint32_t)(0x1162bf18u));
  /* 1160b8dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1160b8df call 0x11603c70 */
  push32(0x1160b8e4u); f_11603c70();
  /* 1160b8e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b8e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b8ea jne 0x1160b8ed */
  if (!C.zf) goto L_1160b8ed;
  /* 1160b8ec int3  */
  x86_unimpl("int3 @ 0x1160b8ec");
L_1160b8ed:;
  /* 1160b8ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160b8ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160b8f1 jne 0x1160b8c9 */
  if (!C.zf) goto L_1160b8c9;
  /* 1160b8f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160b8f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1160b8f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b8fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1160b8ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1160b902 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b905 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160b908 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1160b90e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160b910 je 0x1160b91f */
  if (C.zf) goto L_1160b91f;
  /* 1160b912 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b915 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160b918 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1160b91b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160b91d je 0x1160b935 */
  if (C.zf) goto L_1160b935;
L_1160b91f:;
  /* 1160b91f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b922 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1160b925 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1160b927 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b92a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1160b92d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160b930 jmp 0x1160bb2d */
  goto L_1160bb2d;
L_1160b935:;
  /* 1160b935 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b938 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1160b93b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1160b93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160b940 je 0x1160b98c */
  if (C.zf) goto L_1160b98c;
  /* 1160b942 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b945 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1160b94c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b94f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1160b952 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1160b955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160b957 je 0x1160b975 */
  if (C.zf) goto L_1160b975;
  /* 1160b959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b95c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b95f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1160b962 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1160b964 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b967 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160b96a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1160b96d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b970 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1160b973 jmp 0x1160b98c */
  goto L_1160b98c;
L_1160b975:;
  /* 1160b975 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b978 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160b97b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1160b97e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b981 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1160b984 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160b987 jmp 0x1160bb2d */
  goto L_1160bb2d;
L_1160b98c:;
  /* 1160b98c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b98f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160b992 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1160b995 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b998 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1160b99b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b99e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160b9a1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1160b9a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b9a7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1160b9aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b9ad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1160b9b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160b9bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160b9be mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1160b9c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b9c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160b9c7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1160b9cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160b9cf jne 0x1160b9ff */
  if (!C.zf) goto L_1160b9ff;
  /* 1160b9d1 cmp dword ptr [ebp - 8], 0x1162f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1162f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b9d8 je 0x1160b9e3 */
  if (C.zf) goto L_1160b9e3;
  /* 1160b9da cmp dword ptr [ebp - 8], 0x1162f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1162f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160b9e1 jne 0x1160b9f3 */
  if (!C.zf) goto L_1160b9f3;
L_1160b9e3:;
  /* 1160b9e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160b9e6 push edx */
  push32((uint32_t)(EDX));
  /* 1160b9e7 call 0x1160d830 */
  push32(0x1160b9ecu); f_1160d830();
  /* 1160b9ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160b9ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160b9f1 jne 0x1160b9ff */
  if (!C.zf) goto L_1160b9ff;
L_1160b9f3:;
  /* 1160b9f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160b9f6 push eax */
  push32((uint32_t)(EAX));
  /* 1160b9f7 call 0x1160d760 */
  push32(0x1160b9fcu); f_1160d760();
  /* 1160b9fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160b9ff:;
  /* 1160b9ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba02 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160ba05 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1160ba0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160ba0d je 0x1160baeb */
  if (C.zf) goto L_1160baeb;
L_1160ba13:;
  /* 1160ba13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba19 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1160ba1b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ba1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160ba20 jge 0x1160ba43 */
  if ((C.sf==C.of)) goto L_1160ba43;
  /* 1160ba22 push 0x1162bed8 */
  push32((uint32_t)(0x1162bed8u));
  /* 1160ba27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160ba29 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1160ba2e push 0x1162bf18 */
  push32((uint32_t)(0x1162bf18u));
  /* 1160ba33 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ba35 call 0x11603c70 */
  push32(0x1160ba3au); f_11603c70();
  /* 1160ba3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ba3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ba40 jne 0x1160ba43 */
  if (!C.zf) goto L_1160ba43;
  /* 1160ba42 int3  */
  x86_unimpl("int3 @ 0x1160ba42");
L_1160ba43:;
  /* 1160ba43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ba45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ba47 jne 0x1160ba13 */
  if (!C.zf) goto L_1160ba13;
  /* 1160ba49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba4f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1160ba51 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ba54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160ba57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba5a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1160ba5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ba60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba63 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1160ba65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba68 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1160ba6b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ba6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba71 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1160ba74 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ba78 jle 0x1160ba96 */
  if ((C.zf||C.sf!=C.of)) goto L_1160ba96;
  /* 1160ba7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ba7d push ecx */
  push32((uint32_t)(ECX));
  /* 1160ba7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160ba81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1160ba84 push eax */
  push32((uint32_t)(EAX));
  /* 1160ba85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160ba88 push ecx */
  push32((uint32_t)(ECX));
  /* 1160ba89 call 0x1160d450 */
  push32(0x1160ba8eu); f_1160d450();
  /* 1160ba8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ba91 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1160ba94 jmp 0x1160bade */
  goto L_1160bade;
L_1160ba96:;
  /* 1160ba96 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ba9a je 0x1160bab9 */
  if (C.zf) goto L_1160bab9;
  /* 1160ba9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160ba9f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1160baa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160baa5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1160baa8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160baab mov ecx, dword ptr [edx*4 + 0x11632120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11632120)));
  /* 1160bab2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bab4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1160bab7 jmp 0x1160bac0 */
  goto L_1160bac0;
L_1160bab9:;
  /* 1160bab9 mov dword ptr [ebp - 0x14], 0x1162ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1162ea60u));
L_1160bac0:;
  /* 1160bac0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1160bac3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1160bac7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1160baca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160bacc je 0x1160bade */
  if (C.zf) goto L_1160bade;
  /* 1160bace push 2 */
  push32((uint32_t)(0x2u));
  /* 1160bad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160bad2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160bad5 push ecx */
  push32((uint32_t)(ECX));
  /* 1160bad6 call 0x1160d300 */
  push32(0x1160badbu); f_1160d300();
  /* 1160badb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160bade:;
  /* 1160bade mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160bae1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1160bae4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1160bae7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1160bae9 jmp 0x1160bb09 */
  goto L_1160bb09;
L_1160baeb:;
  /* 1160baeb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1160baf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160baf5 push edx */
  push32((uint32_t)(EDX));
  /* 1160baf6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1160baf9 push eax */
  push32((uint32_t)(EAX));
  /* 1160bafa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160bafd push ecx */
  push32((uint32_t)(ECX));
  /* 1160bafe call 0x1160d450 */
  push32(0x1160bb03u); f_1160d450();
  /* 1160bb03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bb06 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1160bb09:;
  /* 1160bb09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160bb0c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bb0f je 0x1160bb25 */
  if (C.zf) goto L_1160bb25;
  /* 1160bb11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160bb14 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160bb17 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1160bb1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160bb1d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1160bb20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160bb23 jmp 0x1160bb2d */
  goto L_1160bb2d;
L_1160bb25:;
  /* 1160bb25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160bb28 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1160bb2d:;
  /* 1160bb2d pop edi */
  EDI = (pop32());
  /* 1160bb2e pop esi */
  ESI = (pop32());
  /* 1160bb2f pop ebx */
  EBX = (pop32());
  /* 1160bb30 mov esp, ebp */
  ESP = (EBP);
  /* 1160bb32 pop ebp */
  EBP = (pop32());
  /* 1160bb33 ret  */
  ESPCHK(0x1160b8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb40 @ 0x1160bb40 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1160bb40(void) {
  FTRACE(0x1160bb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160bb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1160bb41 mov ebp, esp */
  EBP = (ESP);
  /* 1160bb43 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160bb49 push ebx */
  push32((uint32_t)(EBX));
  /* 1160bb4a push esi */
  push32((uint32_t)(ESI));
  /* 1160bb4b push edi */
  push32((uint32_t)(EDI));
  /* 1160bb4c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1160bb53 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1160bb5d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1160bb64:;
  /* 1160bb64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160bb67 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1160bb69 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1160bb6c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bb70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160bb73 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bb76 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1160bb79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160bb7b je 0x1160c757 */
  if (C.zf) goto L_1160c757;
  /* 1160bb81 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bb88 jl 0x1160c757 */
  if ((C.sf!=C.of)) goto L_1160c757;
  /* 1160bb8e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bb92 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bb95 jl 0x1160bbb6 */
  if ((C.sf!=C.of)) goto L_1160bbb6;
  /* 1160bb97 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bb9b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bb9e jg 0x1160bbb6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1160bbb6;
  /* 1160bba0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bba4 movsx ecx, byte ptr [eax + 0x1162bf10] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1162bf10))));
  /* 1160bbab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1160bbae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1160bbb4 jmp 0x1160bbc0 */
  goto L_1160bbc0;
L_1160bbb6:;
  /* 1160bbb6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1160bbc0:;
  /* 1160bbc0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1160bbc6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1160bbc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160bbcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160bbcf movsx edx, byte ptr [ecx + eax*8 + 0x1162bf30] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1162bf30))));
  /* 1160bbd7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1160bbda mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1160bbdd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1160bbe0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1160bbe6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bbed ja 0x1160c752 */
  if ((!C.cf&&!C.zf)) goto L_1160c752;
  /* 1160bbf3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1160bbf9 jmp dword ptr [ecx*4 + 0x1160c764] */
  switch (ECX) {
    case 0: goto L_1160bc00;
    case 1: goto L_1160bc9a;
    case 2: goto L_1160bcdc;
    case 3: goto L_1160bd4b;
    case 4: goto L_1160bda3;
    case 5: goto L_1160bdb2;
    case 6: goto L_1160bdfe;
    case 7: goto L_1160be91;
    case 8: goto L_1160bd28;
    case 9: goto L_1160bd33;
    case 10: goto L_1160bd1e;
    case 11: goto L_1160bd13;
    case 12: goto L_1160bd3e;
    case 13: goto L_1160bd46;
    default: x86_unimpl("switch@0x1160bbf9 out of table"); return;
  }
L_1160bc00:;
  /* 1160bc00 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1160bc07 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160bc0a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1160bc10 mov eax, dword ptr [0x1162ec98] */
  EAX = (r32((uint32_t)(0x1162ec98)));
  /* 1160bc15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160bc17 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1160bc1b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1160bc21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160bc23 je 0x1160bc7d */
  if (C.zf) goto L_1160bc7d;
  /* 1160bc25 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1160bc2b push edx */
  push32((uint32_t)(EDX));
  /* 1160bc2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160bc2f push eax */
  push32((uint32_t)(EAX));
  /* 1160bc30 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bc34 push ecx */
  push32((uint32_t)(ECX));
  /* 1160bc35 call 0x1160c870 */
  push32(0x1160bc3au); f_1160c870();
  /* 1160bc3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bc3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160bc40 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1160bc42 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1160bc45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160bc48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bc4b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1160bc4e:;
  /* 1160bc4e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bc52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160bc54 jne 0x1160bc77 */
  if (!C.zf) goto L_1160bc77;
  /* 1160bc56 push 0x1162bfb0 */
  push32((uint32_t)(0x1162bfb0u));
  /* 1160bc5b push 0 */
  push32((uint32_t)(0x0u));
  /* 1160bc5d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1160bc62 push 0x1162bfa4 */
  push32((uint32_t)(0x1162bfa4u));
  /* 1160bc67 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160bc69 call 0x11603c70 */
  push32(0x1160bc6eu); f_11603c70();
  /* 1160bc6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bc71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bc74 jne 0x1160bc77 */
  if (!C.zf) goto L_1160bc77;
  /* 1160bc76 int3  */
  x86_unimpl("int3 @ 0x1160bc76");
L_1160bc77:;
  /* 1160bc77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160bc79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160bc7b jne 0x1160bc4e */
  if (!C.zf) goto L_1160bc4e;
L_1160bc7d:;
  /* 1160bc7d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1160bc83 push ecx */
  push32((uint32_t)(ECX));
  /* 1160bc84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160bc87 push edx */
  push32((uint32_t)(EDX));
  /* 1160bc88 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bc8c push eax */
  push32((uint32_t)(EAX));
  /* 1160bc8d call 0x1160c870 */
  push32(0x1160bc92u); f_1160c870();
  /* 1160bc92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bc95 jmp 0x1160c752 */
  goto L_1160c752;
L_1160bc9a:;
  /* 1160bc9a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1160bca1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160bca4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1160bcaa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1160bcb0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1160bcb6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1160bcbc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1160bcbf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160bcc6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1160bcd0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1160bcd7 jmp 0x1160c752 */
  goto L_1160c752;
L_1160bcdc:;
  /* 1160bcdc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bce0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1160bce6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1160bcec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160bcef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1160bcf5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bcfc ja 0x1160bd46 */
  if ((!C.cf&&!C.zf)) goto L_1160bd46;
  /* 1160bcfe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1160bd04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160bd06 mov al, byte ptr [ecx + 0x1160c79c] */
  AL = (r8((uint32_t)(ECX + 0x1160c79c)));
  /* 1160bd0c jmp dword ptr [eax*4 + 0x1160c784] */
  switch (EAX) {
    case 0: goto L_1160bd28;
    case 1: goto L_1160bd33;
    case 2: goto L_1160bd1e;
    case 3: goto L_1160bd13;
    case 4: goto L_1160bd3e;
    case 5: goto L_1160bd46;
    default: x86_unimpl("switch@0x1160bd0c out of table"); return;
  }
L_1160bd13:;
  /* 1160bd13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bd16 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1160bd19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160bd1c jmp 0x1160bd46 */
  goto L_1160bd46;
L_1160bd1e:;
  /* 1160bd1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bd21 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1160bd23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160bd26 jmp 0x1160bd46 */
  goto L_1160bd46;
L_1160bd28:;
  /* 1160bd28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bd2b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1160bd2e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1160bd31 jmp 0x1160bd46 */
  goto L_1160bd46;
L_1160bd33:;
  /* 1160bd33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bd36 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1160bd39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160bd3c jmp 0x1160bd46 */
  goto L_1160bd46;
L_1160bd3e:;
  /* 1160bd3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bd41 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1160bd43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160bd46:;
  /* 1160bd46 jmp 0x1160c752 */
  goto L_1160c752;
L_1160bd4b:;
  /* 1160bd4b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bd4f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bd52 jne 0x1160bd87 */
  if (!C.zf) goto L_1160bd87;
  /* 1160bd54 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1160bd57 push edx */
  push32((uint32_t)(EDX));
  /* 1160bd58 call 0x1160c980 */
  push32(0x1160bd5du); f_1160c980();
  /* 1160bd5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bd60 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1160bd66 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bd6d jge 0x1160bd85 */
  if ((C.sf==C.of)) goto L_1160bd85;
  /* 1160bd6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bd72 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1160bd74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160bd77 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1160bd7d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160bd7f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1160bd85:;
  /* 1160bd85 jmp 0x1160bd9e */
  goto L_1160bd9e;
L_1160bd87:;
  /* 1160bd87 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1160bd8d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160bd90 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bd94 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1160bd98 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1160bd9e:;
  /* 1160bd9e jmp 0x1160c752 */
  goto L_1160c752;
L_1160bda3:;
  /* 1160bda3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1160bdad jmp 0x1160c752 */
  goto L_1160c752;
L_1160bdb2:;
  /* 1160bdb2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bdb6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bdb9 jne 0x1160bde2 */
  if (!C.zf) goto L_1160bde2;
  /* 1160bdbb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1160bdbe push eax */
  push32((uint32_t)(EAX));
  /* 1160bdbf call 0x1160c980 */
  push32(0x1160bdc4u); f_1160c980();
  /* 1160bdc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bdc7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1160bdcd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bdd4 jge 0x1160bde0 */
  if ((C.sf==C.of)) goto L_1160bde0;
  /* 1160bdd6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1160bde0:;
  /* 1160bde0 jmp 0x1160bdf9 */
  goto L_1160bdf9;
L_1160bde2:;
  /* 1160bde2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1160bde8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160bdeb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160bdef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1160bdf3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1160bdf9:;
  /* 1160bdf9 jmp 0x1160c752 */
  goto L_1160c752;
L_1160bdfe:;
  /* 1160bdfe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160be02 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1160be08 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1160be0e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160be11 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1160be17 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160be1e ja 0x1160be8c */
  if ((!C.cf&&!C.zf)) goto L_1160be8c;
  /* 1160be20 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1160be26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160be28 mov al, byte ptr [ecx + 0x1160c7c1] */
  AL = (r8((uint32_t)(ECX + 0x1160c7c1)));
  /* 1160be2e jmp dword ptr [eax*4 + 0x1160c7ad] */
  switch (EAX) {
    case 0: goto L_1160be40;
    case 1: goto L_1160be79;
    case 2: goto L_1160be35;
    case 3: goto L_1160be83;
    case 4: goto L_1160be8c;
    default: x86_unimpl("switch@0x1160be2e out of table"); return;
  }
L_1160be35:;
  /* 1160be35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160be38 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1160be3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160be3e jmp 0x1160be8c */
  goto L_1160be8c;
L_1160be40:;
  /* 1160be40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160be43 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160be46 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160be49 jne 0x1160be6b */
  if (!C.zf) goto L_1160be6b;
  /* 1160be4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160be4e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1160be52 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160be55 jne 0x1160be6b */
  if (!C.zf) goto L_1160be6b;
  /* 1160be57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160be5a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160be5d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1160be60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160be63 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1160be66 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160be69 jmp 0x1160be77 */
  goto L_1160be77;
L_1160be6b:;
  /* 1160be6b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1160be72 jmp 0x1160bc00 */
  goto L_1160bc00;
L_1160be77:;
  /* 1160be77 jmp 0x1160be8c */
  goto L_1160be8c;
L_1160be79:;
  /* 1160be79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160be7c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1160be7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160be81 jmp 0x1160be8c */
  goto L_1160be8c;
L_1160be83:;
  /* 1160be83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160be86 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1160be89 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1160be8c:;
  /* 1160be8c jmp 0x1160c752 */
  goto L_1160c752;
L_1160be91:;
  /* 1160be91 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160be95 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1160be9b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1160bea1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160bea4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1160beaa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160beb1 ja 0x1160c577 */
  if ((!C.cf&&!C.zf)) goto L_1160c577;
  /* 1160beb7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1160bebd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160bebf mov cl, byte ptr [edx + 0x1160c82c] */
  CL = (r8((uint32_t)(EDX + 0x1160c82c)));
  /* 1160bec5 jmp dword ptr [ecx*4 + 0x1160c7f0] */
  switch (ECX) {
    case 0: goto L_1160becc;
    case 1: goto L_1160c160;
    case 2: goto L_1160bff0;
    case 3: goto L_1160c299;
    case 4: goto L_1160bf5b;
    case 5: goto L_1160bee1;
    case 6: goto L_1160c26b;
    case 7: goto L_1160c170;
    case 8: goto L_1160c115;
    case 9: goto L_1160c2e5;
    case 10: goto L_1160c28f;
    case 11: goto L_1160c006;
    case 12: goto L_1160c283;
    case 13: goto L_1160c2a5;
    case 14: goto L_1160c577;
    default: x86_unimpl("switch@0x1160bec5 out of table"); return;
  }
L_1160becc:;
  /* 1160becc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160becf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1160bed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160bed6 jne 0x1160bee1 */
  if (!C.zf) goto L_1160bee1;
  /* 1160bed8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bedb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1160bede mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1160bee1:;
  /* 1160bee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bee4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1160beea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160beec je 0x1160bf27 */
  if (C.zf) goto L_1160bf27;
  /* 1160beee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1160bef1 push eax */
  push32((uint32_t)(EAX));
  /* 1160bef2 call 0x1160c9c0 */
  push32(0x1160bef7u); f_1160c9c0();
  /* 1160bef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160befa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1160befe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1160bf02 push ecx */
  push32((uint32_t)(ECX));
  /* 1160bf03 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1160bf09 push edx */
  push32((uint32_t)(EDX));
  /* 1160bf0a call 0x1160daa0 */
  push32(0x1160bf0fu); f_1160daa0();
  /* 1160bf0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bf12 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1160bf15 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bf19 jge 0x1160bf25 */
  if ((C.sf==C.of)) goto L_1160bf25;
  /* 1160bf1b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1160bf25:;
  /* 1160bf25 jmp 0x1160bf4d */
  goto L_1160bf4d;
L_1160bf27:;
  /* 1160bf27 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1160bf2a push eax */
  push32((uint32_t)(EAX));
  /* 1160bf2b call 0x1160c980 */
  push32(0x1160bf30u); f_1160c980();
  /* 1160bf30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bf33 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1160bf3a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1160bf40 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1160bf46 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1160bf4d:;
  /* 1160bf4d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1160bf53 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1160bf56 jmp 0x1160c577 */
  goto L_1160c577;
L_1160bf5b:;
  /* 1160bf5b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1160bf5e push eax */
  push32((uint32_t)(EAX));
  /* 1160bf5f call 0x1160c980 */
  push32(0x1160bf64u); f_1160c980();
  /* 1160bf64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bf67 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1160bf6d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bf74 je 0x1160bf82 */
  if (C.zf) goto L_1160bf82;
  /* 1160bf76 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1160bf7c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160bf80 jne 0x1160bf9c */
  if (!C.zf) goto L_1160bf9c;
L_1160bf82:;
  /* 1160bf82 mov edx, dword ptr [0x1162efb0] */
  EDX = (r32((uint32_t)(0x1162efb0)));
  /* 1160bf88 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1160bf8b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160bf8e push eax */
  push32((uint32_t)(EAX));
  /* 1160bf8f call 0x116079e0 */
  push32(0x1160bf94u); f_116079e0();
  /* 1160bf94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160bf97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1160bf9a jmp 0x1160bfeb */
  goto L_1160bfeb;
L_1160bf9c:;
  /* 1160bf9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bf9f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1160bfa5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160bfa7 je 0x1160bfcc */
  if (C.zf) goto L_1160bfcc;
  /* 1160bfa9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1160bfaf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1160bfb2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1160bfb5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1160bfbb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1160bfbe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1160bfc0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1160bfc3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1160bfca jmp 0x1160bfeb */
  goto L_1160bfeb;
L_1160bfcc:;
  /* 1160bfcc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1160bfd3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1160bfd9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160bfdc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1160bfdf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1160bfe5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1160bfe8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1160bfeb:;
  /* 1160bfeb jmp 0x1160c577 */
  goto L_1160c577;
L_1160bff0:;
  /* 1160bff0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160bff3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1160bff9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160bffb jne 0x1160c006 */
  if (!C.zf) goto L_1160c006;
  /* 1160bffd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c000 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1160c003 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1160c006:;
  /* 1160c006 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c00d jne 0x1160c01b */
  if (!C.zf) goto L_1160c01b;
  /* 1160c00f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1160c019 jmp 0x1160c027 */
  goto L_1160c027;
L_1160c01b:;
  /* 1160c01b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1160c021 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1160c027:;
  /* 1160c027 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1160c02d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1160c033 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1160c036 push edx */
  push32((uint32_t)(EDX));
  /* 1160c037 call 0x1160c980 */
  push32(0x1160c03cu); f_1160c980();
  /* 1160c03c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c03f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1160c042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c045 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c04c je 0x1160c0b6 */
  if (C.zf) goto L_1160c0b6;
  /* 1160c04e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c052 jne 0x1160c05d */
  if (!C.zf) goto L_1160c05d;
  /* 1160c054 mov ecx, dword ptr [0x1162efb4] */
  ECX = (r32((uint32_t)(0x1162efb4)));
  /* 1160c05a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1160c05d:;
  /* 1160c05d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1160c064 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c067 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1160c06d:;
  /* 1160c06d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1160c073 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1160c079 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c07c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1160c082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c084 je 0x1160c0a6 */
  if (C.zf) goto L_1160c0a6;
  /* 1160c086 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1160c08c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160c08e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1160c091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c093 je 0x1160c0a6 */
  if (C.zf) goto L_1160c0a6;
  /* 1160c095 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1160c09b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c09e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1160c0a4 jmp 0x1160c06d */
  goto L_1160c06d;
L_1160c0a6:;
  /* 1160c0a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1160c0ac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c0af sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1160c0b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1160c0b4 jmp 0x1160c110 */
  goto L_1160c110;
L_1160c0b6:;
  /* 1160c0b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c0ba jne 0x1160c0c4 */
  if (!C.zf) goto L_1160c0c4;
  /* 1160c0bc mov eax, dword ptr [0x1162efb0] */
  EAX = (r32((uint32_t)(0x1162efb0)));
  /* 1160c0c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1160c0c4:;
  /* 1160c0c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c0c7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1160c0cd:;
  /* 1160c0cd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1160c0d3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1160c0d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c0dc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1160c0e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c0e4 je 0x1160c104 */
  if (C.zf) goto L_1160c104;
  /* 1160c0e6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1160c0ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1160c0ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c0f1 je 0x1160c104 */
  if (C.zf) goto L_1160c104;
  /* 1160c0f3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1160c0f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c0fc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1160c102 jmp 0x1160c0cd */
  goto L_1160c0cd;
L_1160c104:;
  /* 1160c104 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1160c10a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c10d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1160c110:;
  /* 1160c110 jmp 0x1160c577 */
  goto L_1160c577;
L_1160c115:;
  /* 1160c115 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1160c118 push edx */
  push32((uint32_t)(EDX));
  /* 1160c119 call 0x1160c980 */
  push32(0x1160c11eu); f_1160c980();
  /* 1160c11e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c121 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1160c127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c12a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c12d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c12f je 0x1160c143 */
  if (C.zf) goto L_1160c143;
  /* 1160c131 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1160c137 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1160c13e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1160c141 jmp 0x1160c151 */
  goto L_1160c151;
L_1160c143:;
  /* 1160c143 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1160c149 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1160c14f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1160c151:;
  /* 1160c151 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1160c15b jmp 0x1160c577 */
  goto L_1160c577;
L_1160c160:;
  /* 1160c160 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1160c167 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1160c16a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1160c16d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1160c170:;
  /* 1160c170 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c173 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1160c175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160c178 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1160c17e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1160c181 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c188 jge 0x1160c196 */
  if ((C.sf==C.of)) goto L_1160c196;
  /* 1160c18a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1160c194 jmp 0x1160c1b2 */
  goto L_1160c1b2;
L_1160c196:;
  /* 1160c196 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c19d jne 0x1160c1b2 */
  if (!C.zf) goto L_1160c1b2;
  /* 1160c19f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160c1a3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c1a6 jne 0x1160c1b2 */
  if (!C.zf) goto L_1160c1b2;
  /* 1160c1a8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1160c1b2:;
  /* 1160c1b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160c1b5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c1b8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1160c1bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160c1be sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c1c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1160c1c3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1160c1c6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1160c1cc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1160c1d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160c1d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c1d6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1160c1dc push edx */
  push32((uint32_t)(EDX));
  /* 1160c1dd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160c1e1 push eax */
  push32((uint32_t)(EAX));
  /* 1160c1e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c1e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c1e6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1160c1ec push edx */
  push32((uint32_t)(EDX));
  /* 1160c1ed call dword ptr [0x1162f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1162f3a0))), 0x1160c1f3u);
  /* 1160c1f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c1f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c1f9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c1fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c200 je 0x1160c218 */
  if (C.zf) goto L_1160c218;
  /* 1160c202 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c209 jne 0x1160c218 */
  if (!C.zf) goto L_1160c218;
  /* 1160c20b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c20e push ecx */
  push32((uint32_t)(ECX));
  /* 1160c20f call dword ptr [0x1162f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1162f3ac))), 0x1160c215u);
  /* 1160c215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160c218:;
  /* 1160c218 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1160c21c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c21f jne 0x1160c23a */
  if (!C.zf) goto L_1160c23a;
  /* 1160c221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c224 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c22b jne 0x1160c23a */
  if (!C.zf) goto L_1160c23a;
  /* 1160c22d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c230 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c231 call dword ptr [0x1162f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1162f3a4))), 0x1160c237u);
  /* 1160c237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160c23a:;
  /* 1160c23a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c23d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1160c240 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c243 jne 0x1160c257 */
  if (!C.zf) goto L_1160c257;
  /* 1160c245 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c248 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1160c24b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1160c24e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c251 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c254 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1160c257:;
  /* 1160c257 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c25a push eax */
  push32((uint32_t)(EAX));
  /* 1160c25b call 0x116079e0 */
  push32(0x1160c260u); f_116079e0();
  /* 1160c260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c263 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1160c266 jmp 0x1160c577 */
  goto L_1160c577;
L_1160c26b:;
  /* 1160c26b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c26e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1160c271 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1160c274 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1160c27e jmp 0x1160c305 */
  goto L_1160c305;
L_1160c283:;
  /* 1160c283 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1160c28d jmp 0x1160c305 */
  goto L_1160c305;
L_1160c28f:;
  /* 1160c28f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1160c299:;
  /* 1160c299 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1160c2a3 jmp 0x1160c2af */
  goto L_1160c2af;
L_1160c2a5:;
  /* 1160c2a5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1160c2af:;
  /* 1160c2af mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1160c2b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c2bc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1160c2c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c2c4 je 0x1160c2e3 */
  if (C.zf) goto L_1160c2e3;
  /* 1160c2c6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1160c2cd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1160c2d3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c2d6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1160c2dc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1160c2e3:;
  /* 1160c2e3 jmp 0x1160c305 */
  goto L_1160c305;
L_1160c2e5:;
  /* 1160c2e5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1160c2ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c2f2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1160c2f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160c2fa je 0x1160c305 */
  if (C.zf) goto L_1160c305;
  /* 1160c2fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c2ff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1160c302 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1160c305:;
  /* 1160c305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c308 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c30f je 0x1160c32e */
  if (C.zf) goto L_1160c32e;
  /* 1160c311 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1160c314 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c315 call 0x1160c9a0 */
  push32(0x1160c31au); f_1160c9a0();
  /* 1160c31a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c31d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1160c323 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1160c329 jmp 0x1160c3bf */
  goto L_1160c3bf;
L_1160c32e:;
  /* 1160c32e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c331 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1160c334 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c336 je 0x1160c380 */
  if (C.zf) goto L_1160c380;
  /* 1160c338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c33b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c33e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c340 je 0x1160c360 */
  if (C.zf) goto L_1160c360;
  /* 1160c342 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1160c345 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c346 call 0x1160c980 */
  push32(0x1160c34bu); f_1160c980();
  /* 1160c34b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c34e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1160c351 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1160c352 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1160c358 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1160c35e jmp 0x1160c37e */
  goto L_1160c37e;
L_1160c360:;
  /* 1160c360 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1160c363 push edx */
  push32((uint32_t)(EDX));
  /* 1160c364 call 0x1160c980 */
  push32(0x1160c369u); f_1160c980();
  /* 1160c369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c36c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160c371 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1160c372 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1160c378 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1160c37e:;
  /* 1160c37e jmp 0x1160c3bf */
  goto L_1160c3bf;
L_1160c380:;
  /* 1160c380 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c383 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c388 je 0x1160c3a5 */
  if (C.zf) goto L_1160c3a5;
  /* 1160c38a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1160c38d push ecx */
  push32((uint32_t)(ECX));
  /* 1160c38e call 0x1160c980 */
  push32(0x1160c393u); f_1160c980();
  /* 1160c393 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c396 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1160c397 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1160c39d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1160c3a3 jmp 0x1160c3bf */
  goto L_1160c3bf;
L_1160c3a5:;
  /* 1160c3a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1160c3a8 push edx */
  push32((uint32_t)(EDX));
  /* 1160c3a9 call 0x1160c980 */
  push32(0x1160c3aeu); f_1160c980();
  /* 1160c3ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c3b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1160c3b3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1160c3b9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1160c3bf:;
  /* 1160c3bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c3c2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1160c3c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c3c7 je 0x1160c407 */
  if (C.zf) goto L_1160c407;
  /* 1160c3c9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c3d0 jg 0x1160c407 */
  if ((!C.zf&&C.sf==C.of)) goto L_1160c407;
  /* 1160c3d2 jl 0x1160c3dd */
  if ((C.sf!=C.of)) goto L_1160c3dd;
  /* 1160c3d4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c3db jae 0x1160c407 */
  if (!C.cf) goto L_1160c407;
L_1160c3dd:;
  /* 1160c3dd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1160c3e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160c3e5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1160c3eb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c3ee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160c3f0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1160c3f6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1160c3fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c3ff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1160c402 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160c405 jmp 0x1160c41f */
  goto L_1160c41f;
L_1160c407:;
  /* 1160c407 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1160c40d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1160c413 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1160c419 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1160c41f:;
  /* 1160c41f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c422 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1160c428 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c42a jne 0x1160c447 */
  if (!C.zf) goto L_1160c447;
  /* 1160c42c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1160c432 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1160c438 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1160c43b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1160c441 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1160c447:;
  /* 1160c447 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c44e jge 0x1160c45c */
  if ((C.sf==C.of)) goto L_1160c45c;
  /* 1160c450 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1160c45a jmp 0x1160c465 */
  goto L_1160c465;
L_1160c45c:;
  /* 1160c45c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c45f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1160c462 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1160c465:;
  /* 1160c465 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1160c46b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1160c471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c473 jne 0x1160c47c */
  if (!C.zf) goto L_1160c47c;
  /* 1160c475 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1160c47c:;
  /* 1160c47c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1160c47f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1160c482:;
  /* 1160c482 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1160c488 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1160c48e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c491 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1160c497 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c499 jg 0x1160c4af */
  if ((!C.zf&&C.sf==C.of)) goto L_1160c4af;
  /* 1160c49b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1160c4a1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1160c4a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160c4a9 je 0x1160c530 */
  if (C.zf) goto L_1160c530;
L_1160c4af:;
  /* 1160c4af mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1160c4b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1160c4b6 push edx */
  push32((uint32_t)(EDX));
  /* 1160c4b7 push eax */
  push32((uint32_t)(EAX));
  /* 1160c4b8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1160c4be push edx */
  push32((uint32_t)(EDX));
  /* 1160c4bf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1160c4c5 push eax */
  push32((uint32_t)(EAX));
  /* 1160c4c6 call 0x1160b840 */
  push32(0x1160c4cbu); f_1160b840();
  /* 1160c4cb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c4ce mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1160c4d4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1160c4da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1160c4db push edx */
  push32((uint32_t)(EDX));
  /* 1160c4dc push eax */
  push32((uint32_t)(EAX));
  /* 1160c4dd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1160c4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c4e4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1160c4ea push edx */
  push32((uint32_t)(EDX));
  /* 1160c4eb call 0x1160b7d0 */
  push32(0x1160c4f0u); f_1160b7d0();
  /* 1160c4f0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1160c4f6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1160c4fc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c503 jle 0x1160c517 */
  if ((C.zf||C.sf!=C.of)) goto L_1160c517;
  /* 1160c505 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1160c50b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c511 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1160c517:;
  /* 1160c517 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c51a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1160c520 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1160c522 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c525 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c528 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1160c52b jmp 0x1160c482 */
  goto L_1160c482;
L_1160c530:;
  /* 1160c530 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1160c533 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c536 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1160c539 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c53c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c53f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1160c542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c545 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c54a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c54c je 0x1160c577 */
  if (C.zf) goto L_1160c577;
  /* 1160c54e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c551 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1160c554 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c557 jne 0x1160c55f */
  if (!C.zf) goto L_1160c55f;
  /* 1160c559 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c55d jne 0x1160c577 */
  if (!C.zf) goto L_1160c577;
L_1160c55f:;
  /* 1160c55f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c562 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c565 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1160c568 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c56b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1160c56e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160c571 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c574 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1160c577:;
  /* 1160c577 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c57e jne 0x1160c752 */
  if (!C.zf) goto L_1160c752;
  /* 1160c584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c587 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c58a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c58c je 0x1160c5dd */
  if (C.zf) goto L_1160c5dd;
  /* 1160c58e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c591 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1160c597 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160c599 je 0x1160c5ab */
  if (C.zf) goto L_1160c5ab;
  /* 1160c59b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1160c5a2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1160c5a9 jmp 0x1160c5dd */
  goto L_1160c5dd;
L_1160c5ab:;
  /* 1160c5ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c5ae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1160c5b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c5b3 je 0x1160c5c5 */
  if (C.zf) goto L_1160c5c5;
  /* 1160c5b5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1160c5bc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1160c5c3 jmp 0x1160c5dd */
  goto L_1160c5dd;
L_1160c5c5:;
  /* 1160c5c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c5c8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1160c5cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c5cd je 0x1160c5dd */
  if (C.zf) goto L_1160c5dd;
  /* 1160c5cf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1160c5d6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1160c5dd:;
  /* 1160c5dd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1160c5e3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c5e6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c5e9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1160c5ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c5f2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1160c5f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c5f7 jne 0x1160c615 */
  if (!C.zf) goto L_1160c615;
  /* 1160c5f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1160c5ff push eax */
  push32((uint32_t)(EAX));
  /* 1160c600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c603 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c604 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1160c60a push edx */
  push32((uint32_t)(EDX));
  /* 1160c60b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1160c60d call 0x1160c8f0 */
  push32(0x1160c612u); f_1160c8f0();
  /* 1160c612 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160c615:;
  /* 1160c615 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1160c61b push eax */
  push32((uint32_t)(EAX));
  /* 1160c61c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c61f push ecx */
  push32((uint32_t)(ECX));
  /* 1160c620 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160c623 push edx */
  push32((uint32_t)(EDX));
  /* 1160c624 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1160c62a push eax */
  push32((uint32_t)(EAX));
  /* 1160c62b call 0x1160c930 */
  push32(0x1160c630u); f_1160c930();
  /* 1160c630 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c633 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c636 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1160c639 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160c63b je 0x1160c663 */
  if (C.zf) goto L_1160c663;
  /* 1160c63d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c640 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1160c643 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c645 jne 0x1160c663 */
  if (!C.zf) goto L_1160c663;
  /* 1160c647 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1160c64d push eax */
  push32((uint32_t)(EAX));
  /* 1160c64e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c651 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c652 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1160c658 push edx */
  push32((uint32_t)(EDX));
  /* 1160c659 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1160c65b call 0x1160c8f0 */
  push32(0x1160c660u); f_1160c8f0();
  /* 1160c660 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160c663:;
  /* 1160c663 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c667 je 0x1160c711 */
  if (C.zf) goto L_1160c711;
  /* 1160c66d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c671 jle 0x1160c711 */
  if ((C.zf||C.sf!=C.of)) goto L_1160c711;
  /* 1160c677 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c67a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1160c680 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160c683 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1160c689:;
  /* 1160c689 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1160c68f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1160c695 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c698 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1160c69e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c6a0 je 0x1160c70f */
  if (C.zf) goto L_1160c70f;
  /* 1160c6a2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1160c6a8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1160c6ab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1160c6b2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1160c6b9 push eax */
  push32((uint32_t)(EAX));
  /* 1160c6ba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1160c6c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c6c1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1160c6c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c6ca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1160c6d0 call 0x1160daa0 */
  push32(0x1160c6d5u); f_1160daa0();
  /* 1160c6d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c6d8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1160c6de cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c6e5 jg 0x1160c6e9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1160c6e9;
  /* 1160c6e7 jmp 0x1160c70f */
  goto L_1160c70f;
L_1160c6e9:;
  /* 1160c6e9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1160c6ef push eax */
  push32((uint32_t)(EAX));
  /* 1160c6f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c6f4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1160c6fa push edx */
  push32((uint32_t)(EDX));
  /* 1160c6fb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1160c701 push eax */
  push32((uint32_t)(EAX));
  /* 1160c702 call 0x1160c930 */
  push32(0x1160c707u); f_1160c930();
  /* 1160c707 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c70a jmp 0x1160c689 */
  goto L_1160c689;
L_1160c70f:;
  /* 1160c70f jmp 0x1160c72c */
  goto L_1160c72c;
L_1160c711:;
  /* 1160c711 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1160c717 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c718 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c71b push edx */
  push32((uint32_t)(EDX));
  /* 1160c71c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160c71f push eax */
  push32((uint32_t)(EAX));
  /* 1160c720 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160c723 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c724 call 0x1160c930 */
  push32(0x1160c729u); f_1160c930();
  /* 1160c729 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160c72c:;
  /* 1160c72c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c72f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1160c732 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160c734 je 0x1160c752 */
  if (C.zf) goto L_1160c752;
  /* 1160c736 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1160c73c push eax */
  push32((uint32_t)(EAX));
  /* 1160c73d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c740 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c741 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1160c747 push edx */
  push32((uint32_t)(EDX));
  /* 1160c748 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1160c74a call 0x1160c8f0 */
  push32(0x1160c74fu); f_1160c8f0();
  /* 1160c74f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160c752:;
  /* 1160c752 jmp 0x1160bb64 */
  goto L_1160bb64;
L_1160c757:;
  /* 1160c757 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1160c75d pop edi */
  EDI = (pop32());
  /* 1160c75e pop esi */
  ESI = (pop32());
  /* 1160c75f pop ebx */
  EBX = (pop32());
  /* 1160c760 mov esp, ebp */
  ESP = (EBP);
  /* 1160c762 pop ebp */
  EBP = (pop32());
  /* 1160c763 ret  */
  ESPCHK(0x1160bb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x1160c870 (119 bytes, 44 insns) */
void f_1160c870(void) {
  FTRACE(0x1160c870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160c870 push ebp */
  push32((uint32_t)(EBP));
  /* 1160c871 mov ebp, esp */
  EBP = (ESP);
  /* 1160c873 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c874 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c877 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1160c87a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c87d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c880 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1160c883 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c886 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c88a jl 0x1160c8b2 */
  if ((C.sf!=C.of)) goto L_1160c8b2;
  /* 1160c88c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c88f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1160c891 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1160c894 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1160c896 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1160c89a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1160c8a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1160c8a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c8a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1160c8a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c8ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c8ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1160c8b0 jmp 0x1160c8c5 */
  goto L_1160c8c5;
L_1160c8b2:;
  /* 1160c8b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c8b5 push edx */
  push32((uint32_t)(EDX));
  /* 1160c8b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c8b9 push eax */
  push32((uint32_t)(EAX));
  /* 1160c8ba call 0x1160b8c0 */
  push32(0x1160c8bfu); f_1160b8c0();
  /* 1160c8bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c8c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160c8c5:;
  /* 1160c8c5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c8c9 jne 0x1160c8d6 */
  if (!C.zf) goto L_1160c8d6;
  /* 1160c8cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160c8ce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1160c8d4 jmp 0x1160c8e3 */
  goto L_1160c8e3;
L_1160c8d6:;
  /* 1160c8d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160c8d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1160c8db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c8de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160c8e1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1160c8e3:;
  /* 1160c8e3 mov esp, ebp */
  ESP = (EBP);
  /* 1160c8e5 pop ebp */
  EBP = (pop32());
  /* 1160c8e6 ret  */
  ESPCHK(0x1160c870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8f0 @ 0x1160c8f0 (53 bytes, 23 insns) */
void f_1160c8f0(void) {
  FTRACE(0x1160c8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160c8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160c8f1 mov ebp, esp */
  EBP = (ESP);
L_1160c8f3:;
  /* 1160c8f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c8f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c8f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c8fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1160c8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c901 jle 0x1160c923 */
  if ((C.zf||C.sf!=C.of)) goto L_1160c923;
  /* 1160c903 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160c906 push edx */
  push32((uint32_t)(EDX));
  /* 1160c907 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160c90a push eax */
  push32((uint32_t)(EAX));
  /* 1160c90b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c90e push ecx */
  push32((uint32_t)(ECX));
  /* 1160c90f call 0x1160c870 */
  push32(0x1160c914u); f_1160c870();
  /* 1160c914 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c917 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160c91a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c91d jne 0x1160c921 */
  if (!C.zf) goto L_1160c921;
  /* 1160c91f jmp 0x1160c923 */
  goto L_1160c923;
L_1160c921:;
  /* 1160c921 jmp 0x1160c8f3 */
  goto L_1160c8f3;
L_1160c923:;
  /* 1160c923 pop ebp */
  EBP = (pop32());
  /* 1160c924 ret  */
  ESPCHK(0x1160c8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c930 @ 0x1160c930 (74 bytes, 31 insns) */
void f_1160c930(void) {
  FTRACE(0x1160c930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160c930 push ebp */
  push32((uint32_t)(EBP));
  /* 1160c931 mov ebp, esp */
  EBP = (ESP);
  /* 1160c933 push ecx */
  push32((uint32_t)(ECX));
L_1160c934:;
  /* 1160c934 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c937 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160c93a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c93d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1160c940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160c942 jle 0x1160c976 */
  if ((C.zf||C.sf!=C.of)) goto L_1160c976;
  /* 1160c944 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160c947 push edx */
  push32((uint32_t)(EDX));
  /* 1160c948 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160c94b push eax */
  push32((uint32_t)(EAX));
  /* 1160c94c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c94f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1160c952 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160c955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c958 push eax */
  push32((uint32_t)(EAX));
  /* 1160c959 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c95c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c95f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1160c962 call 0x1160c870 */
  push32(0x1160c967u); f_1160c870();
  /* 1160c967 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c96a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160c96d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160c970 jne 0x1160c974 */
  if (!C.zf) goto L_1160c974;
  /* 1160c972 jmp 0x1160c976 */
  goto L_1160c976;
L_1160c974:;
  /* 1160c974 jmp 0x1160c934 */
  goto L_1160c934;
L_1160c976:;
  /* 1160c976 mov esp, ebp */
  ESP = (EBP);
  /* 1160c978 pop ebp */
  EBP = (pop32());
  /* 1160c979 ret  */
  ESPCHK(0x1160c930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x1160c980 (26 bytes, 12 insns) */
void f_1160c980(void) {
  FTRACE(0x1160c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160c980 push ebp */
  push32((uint32_t)(EBP));
  /* 1160c981 mov ebp, esp */
  EBP = (ESP);
  /* 1160c983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c986 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160c988 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c98b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c98e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1160c990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c993 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160c995 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1160c998 pop ebp */
  EBP = (pop32());
  /* 1160c999 ret  */
  ESPCHK(0x1160c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9a0 @ 0x1160c9a0 (31 bytes, 14 insns) */
void f_1160c9a0(void) {
  FTRACE(0x1160c9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160c9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160c9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1160c9a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c9a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160c9a8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c9ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c9ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1160c9b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c9b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160c9b5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160c9b8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1160c9ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1160c9bd pop ebp */
  EBP = (pop32());
  /* 1160c9be ret  */
  ESPCHK(0x1160c9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x1160c9c0 (27 bytes, 12 insns) */
void f_1160c9c0(void) {
  FTRACE(0x1160c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1160c9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c9c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160c9c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c9cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c9ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1160c9d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c9d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1160c9d5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1160c9d9 pop ebp */
  EBP = (pop32());
  /* 1160c9da ret  */
  ESPCHK(0x1160c9c0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1160c9e0 (145 bytes, 42 insns) */
void f_1160c9e0(void) {
  FTRACE(0x1160c9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160c9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160c9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1160c9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1160c9e4 call 0x1160ca90 */
  push32(0x1160c9e9u); f_1160ca90();
  /* 1160c9e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160c9ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1160c9ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160c9f5 jmp 0x1160ca00 */
  goto L_1160ca00;
L_1160c9f7:;
  /* 1160c9f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160c9fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160c9fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1160ca00:;
  /* 1160ca00 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ca04 jae 0x1160ca2a */
  if (!C.cf) goto L_1160ca2a;
  /* 1160ca06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ca09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ca0c cmp ecx, dword ptr [eax*8 + 0x1162efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1162efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ca13 jne 0x1160ca28 */
  if (!C.zf) goto L_1160ca28;
  /* 1160ca15 call 0x1160ca80 */
  push32(0x1160ca1au); f_1160ca80();
  /* 1160ca1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160ca1d mov ecx, dword ptr [edx*8 + 0x1162efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1162efbc)));
  /* 1160ca24 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1160ca26 jmp 0x1160ca6d */
  goto L_1160ca6d;
L_1160ca28:;
  /* 1160ca28 jmp 0x1160c9f7 */
  goto L_1160c9f7;
L_1160ca2a:;
  /* 1160ca2a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ca2e jb 0x1160ca43 */
  if (C.cf) goto L_1160ca43;
  /* 1160ca30 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ca34 ja 0x1160ca43 */
  if ((!C.cf&&!C.zf)) goto L_1160ca43;
  /* 1160ca36 call 0x1160ca80 */
  push32(0x1160ca3bu); f_1160ca80();
  /* 1160ca3b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1160ca41 jmp 0x1160ca6d */
  goto L_1160ca6d;
L_1160ca43:;
  /* 1160ca43 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ca4a jb 0x1160ca62 */
  if (C.cf) goto L_1160ca62;
  /* 1160ca4c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ca53 ja 0x1160ca62 */
  if ((!C.cf&&!C.zf)) goto L_1160ca62;
  /* 1160ca55 call 0x1160ca80 */
  push32(0x1160ca5au); f_1160ca80();
  /* 1160ca5a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1160ca60 jmp 0x1160ca6d */
  goto L_1160ca6d;
L_1160ca62:;
  /* 1160ca62 call 0x1160ca80 */
  push32(0x1160ca67u); f_1160ca80();
  /* 1160ca67 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1160ca6d:;
  /* 1160ca6d mov esp, ebp */
  ESP = (EBP);
  /* 1160ca6f pop ebp */
  EBP = (pop32());
  /* 1160ca70 ret  */
  ESPCHK(0x1160c9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca80 @ 0x1160ca80 (13 bytes, 6 insns) */
void f_1160ca80(void) {
  FTRACE(0x1160ca80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160ca80 push ebp */
  push32((uint32_t)(EBP));
  /* 1160ca81 mov ebp, esp */
  EBP = (ESP);
  /* 1160ca83 call 0x116045f0 */
  push32(0x1160ca88u); f_116045f0();
  /* 1160ca88 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ca8b pop ebp */
  EBP = (pop32());
  /* 1160ca8c ret  */
  ESPCHK(0x1160ca80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca90 @ 0x1160ca90 (13 bytes, 6 insns) */
void f_1160ca90(void) {
  FTRACE(0x1160ca90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160ca90 push ebp */
  push32((uint32_t)(EBP));
  /* 1160ca91 mov ebp, esp */
  EBP = (ESP);
  /* 1160ca93 call 0x116045f0 */
  push32(0x1160ca98u); f_116045f0();
  /* 1160ca98 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ca9b pop ebp */
  EBP = (pop32());
  /* 1160ca9c ret  */
  ESPCHK(0x1160ca90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caa0 @ 0x1160caa0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1160caa0(void) {
  FTRACE(0x1160caa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160caa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160caa1 mov ebp, esp */
  EBP = (ESP);
  /* 1160caa3 push edi */
  push32((uint32_t)(EDI));
  /* 1160caa4 push esi */
  push32((uint32_t)(ESI));
  /* 1160caa5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1160caa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160caab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1160caae mov eax, ecx */
  EAX = (ECX);
  /* 1160cab0 mov edx, ecx */
  EDX = (ECX);
  /* 1160cab2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cab4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cab6 jbe 0x1160cac0 */
  if ((C.cf||C.zf)) goto L_1160cac0;
  /* 1160cab8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160caba jb 0x1160cc38 */
  if (C.cf) goto L_1160cc38;
L_1160cac0:;
  /* 1160cac0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1160cac6 jne 0x1160cadc */
  if (!C.zf) goto L_1160cadc;
  /* 1160cac8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160cacb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1160cace cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cad1 jb 0x1160cafc */
  if (C.cf) goto L_1160cafc;
  /* 1160cad3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160cad5 jmp dword ptr [edx*4 + 0x1160cbe8] */
  switch (EDX) {
    case 0: goto L_1160cbf8;
    case 1: goto L_1160cc00;
    case 2: goto L_1160cc0c;
    case 3: goto L_1160cc20;
    default: x86_unimpl("switch@0x1160cad5 out of table"); return;
  }
L_1160cadc:;
  /* 1160cadc mov eax, edi */
  EAX = (EDI);
  /* 1160cade mov edx, 3 */
  EDX = (0x3u);
  /* 1160cae3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160cae6 jb 0x1160caf4 */
  if (C.cf) goto L_1160caf4;
  /* 1160cae8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1160caeb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160caed jmp dword ptr [eax*4 + 0x1160cb00] */
  switch (EAX) {
    case 1: goto L_1160cb10;
    case 2: goto L_1160cb3c;
    case 3: goto L_1160cb60;
    default: x86_unimpl("switch@0x1160caed out of table"); return;
  }
L_1160caf4:;
  /* 1160caf4 jmp dword ptr [ecx*4 + 0x1160cbf8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1160cbf8)))); return;
  /* 1160cafb nop  */
  /* nop */
L_1160cafc:;
  /* 1160cafc jmp dword ptr [ecx*4 + 0x1160cb7c] */
  switch (ECX) {
    case 0: goto L_1160cbdf;
    case 1: goto L_1160cbcc;
    case 2: goto L_1160cbc4;
    case 3: goto L_1160cbbc;
    case 4: goto L_1160cbb4;
    case 5: goto L_1160cbac;
    case 6: goto L_1160cba4;
    case 7: goto L_1160cb9c;
    default: x86_unimpl("switch@0x1160cafc out of table"); return;
  }
  /* 1160cb03 nop  */
  /* nop */
L_1160cb10:;
  /* 1160cb10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160cb12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160cb14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160cb16 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160cb19 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160cb1c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160cb1f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160cb22 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160cb25 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cb28 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cb2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cb2e jb 0x1160cafc */
  if (C.cf) goto L_1160cafc;
  /* 1160cb30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160cb32 jmp dword ptr [edx*4 + 0x1160cbe8] */
  switch (EDX) {
    case 0: goto L_1160cbf8;
    case 1: goto L_1160cc00;
    case 2: goto L_1160cc0c;
    case 3: goto L_1160cc20;
    default: x86_unimpl("switch@0x1160cb32 out of table"); return;
  }
  /* 1160cb39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160cb3c:;
  /* 1160cb3c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160cb3e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160cb40 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160cb42 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160cb45 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160cb48 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160cb4b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cb4e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cb51 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cb54 jb 0x1160cafc */
  if (C.cf) goto L_1160cafc;
  /* 1160cb56 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160cb58 jmp dword ptr [edx*4 + 0x1160cbe8] */
  switch (EDX) {
    case 0: goto L_1160cbf8;
    case 1: goto L_1160cc00;
    case 2: goto L_1160cc0c;
    case 3: goto L_1160cc20;
    default: x86_unimpl("switch@0x1160cb58 out of table"); return;
  }
  /* 1160cb5f nop  */
  /* nop */
L_1160cb60:;
  /* 1160cb60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160cb62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160cb64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160cb66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1160cb67 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160cb6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1160cb6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cb6e jb 0x1160cafc */
  if (C.cf) goto L_1160cafc;
  /* 1160cb70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160cb72 jmp dword ptr [edx*4 + 0x1160cbe8] */
  switch (EDX) {
    case 0: goto L_1160cbf8;
    case 1: goto L_1160cc00;
    case 2: goto L_1160cc0c;
    case 3: goto L_1160cc20;
    default: x86_unimpl("switch@0x1160cb72 out of table"); return;
  }
  /* 1160cb79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160cb9c:;
  /* 1160cb9c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1160cba0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1160cba4:;
  /* 1160cba4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1160cba8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1160cbac:;
  /* 1160cbac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1160cbb0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1160cbb4:;
  /* 1160cbb4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1160cbb8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1160cbbc:;
  /* 1160cbbc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1160cbc0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1160cbc4:;
  /* 1160cbc4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1160cbc8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1160cbcc:;
  /* 1160cbcc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1160cbd0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1160cbd4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1160cbdb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cbdd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1160cbdf:;
  /* 1160cbdf jmp dword ptr [edx*4 + 0x1160cbe8] */
  switch (EDX) {
    case 0: goto L_1160cbf8;
    case 1: goto L_1160cc00;
    case 2: goto L_1160cc0c;
    case 3: goto L_1160cc20;
    default: x86_unimpl("switch@0x1160cbdf out of table"); return;
  }
  /* 1160cbe6 mov edi, edi */
  EDI = (EDI);
L_1160cbf8:;
  /* 1160cbf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160cbfb pop esi */
  ESI = (pop32());
  /* 1160cbfc pop edi */
  EDI = (pop32());
  /* 1160cbfd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160cbfe ret  */
  ESPCHK(0x1160caa0u, _esp0);
  ESP += 4; return;
  /* 1160cbff nop  */
  /* nop */
L_1160cc00:;
  /* 1160cc00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160cc02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160cc04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160cc07 pop esi */
  ESI = (pop32());
  /* 1160cc08 pop edi */
  EDI = (pop32());
  /* 1160cc09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160cc0a ret  */
  ESPCHK(0x1160caa0u, _esp0);
  ESP += 4; return;
  /* 1160cc0b nop  */
  /* nop */
L_1160cc0c:;
  /* 1160cc0c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160cc0e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160cc10 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160cc13 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160cc16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160cc19 pop esi */
  ESI = (pop32());
  /* 1160cc1a pop edi */
  EDI = (pop32());
  /* 1160cc1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160cc1c ret  */
  ESPCHK(0x1160caa0u, _esp0);
  ESP += 4; return;
  /* 1160cc1d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160cc20:;
  /* 1160cc20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1160cc22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1160cc24 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160cc27 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160cc2a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160cc2d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160cc30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160cc33 pop esi */
  ESI = (pop32());
  /* 1160cc34 pop edi */
  EDI = (pop32());
  /* 1160cc35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160cc36 ret  */
  ESPCHK(0x1160caa0u, _esp0);
  ESP += 4; return;
  /* 1160cc37 nop  */
  /* nop */
L_1160cc38:;
  /* 1160cc38 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1160cc3c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1160cc40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1160cc46 jne 0x1160cc6c */
  if (!C.zf) goto L_1160cc6c;
  /* 1160cc48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160cc4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1160cc4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cc51 jb 0x1160cc60 */
  if (C.cf) goto L_1160cc60;
  /* 1160cc53 std  */
  C.df=1;
  /* 1160cc54 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160cc56 cld  */
  C.df=0;
  /* 1160cc57 jmp dword ptr [edx*4 + 0x1160cd80] */
  switch (EDX) {
    case 0: goto L_1160cd90;
    case 1: goto L_1160cd98;
    case 2: goto L_1160cda8;
    case 3: goto L_1160cdbc;
    default: x86_unimpl("switch@0x1160cc57 out of table"); return;
  }
  /* 1160cc5e mov edi, edi */
  EDI = (EDI);
L_1160cc60:;
  /* 1160cc60 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160cc62 jmp dword ptr [ecx*4 + 0x1160cd30] */
  switch (ECX) {
    case 0: goto L_1160cd77;
    default: x86_unimpl("switch@0x1160cc62 out of table"); return;
  }
  /* 1160cc69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160cc6c:;
  /* 1160cc6c mov eax, edi */
  EAX = (EDI);
  /* 1160cc6e mov edx, 3 */
  EDX = (0x3u);
  /* 1160cc73 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cc76 jb 0x1160cc84 */
  if (C.cf) goto L_1160cc84;
  /* 1160cc78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1160cc7b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160cc7d jmp dword ptr [eax*4 + 0x1160cc88] */
  switch (EAX) {
    case 1: goto L_1160cc98;
    case 2: goto L_1160ccb8;
    case 3: goto L_1160cce0;
    default: x86_unimpl("switch@0x1160cc7d out of table"); return;
  }
L_1160cc84:;
  /* 1160cc84 jmp dword ptr [ecx*4 + 0x1160cd80] */
  switch (ECX) {
    case 0: goto L_1160cd90;
    case 1: goto L_1160cd98;
    case 2: goto L_1160cda8;
    case 3: goto L_1160cdbc;
    default: x86_unimpl("switch@0x1160cc84 out of table"); return;
  }
  /* 1160cc8b nop  */
  /* nop */
L_1160cc98:;
  /* 1160cc98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160cc9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160cc9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160cca0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1160cca1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160cca4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1160cca5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cca8 jb 0x1160cc60 */
  if (C.cf) goto L_1160cc60;
  /* 1160ccaa std  */
  C.df=1;
  /* 1160ccab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160ccad cld  */
  C.df=0;
  /* 1160ccae jmp dword ptr [edx*4 + 0x1160cd80] */
  switch (EDX) {
    case 0: goto L_1160cd90;
    case 1: goto L_1160cd98;
    case 2: goto L_1160cda8;
    case 3: goto L_1160cdbc;
    default: x86_unimpl("switch@0x1160ccae out of table"); return;
  }
  /* 1160ccb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160ccb8:;
  /* 1160ccb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160ccbb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160ccbd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160ccc0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160ccc3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160ccc6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160ccc9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160cccc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160cccf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ccd2 jb 0x1160cc60 */
  if (C.cf) goto L_1160cc60;
  /* 1160ccd4 std  */
  C.df=1;
  /* 1160ccd5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160ccd7 cld  */
  C.df=0;
  /* 1160ccd8 jmp dword ptr [edx*4 + 0x1160cd80] */
  switch (EDX) {
    case 0: goto L_1160cd90;
    case 1: goto L_1160cd98;
    case 2: goto L_1160cda8;
    case 3: goto L_1160cdbc;
    default: x86_unimpl("switch@0x1160ccd8 out of table"); return;
  }
  /* 1160ccdf nop  */
  /* nop */
L_1160cce0:;
  /* 1160cce0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160cce3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1160cce5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160cce8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160cceb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160ccee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160ccf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1160ccf4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160ccf7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ccfa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160ccfd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cd00 jb 0x1160cc60 */
  if (C.cf) goto L_1160cc60;
  /* 1160cd06 std  */
  C.df=1;
  /* 1160cd07 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1160cd09 cld  */
  C.df=0;
  /* 1160cd0a jmp dword ptr [edx*4 + 0x1160cd80] */
  switch (EDX) {
    case 0: goto L_1160cd90;
    case 1: goto L_1160cd98;
    case 2: goto L_1160cda8;
    case 3: goto L_1160cdbc;
    default: x86_unimpl("switch@0x1160cd0a out of table"); return;
  }
  /* 1160cd11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1160cd14 xor al, 0xcd */
  { uint32_t _r=(AL)^(0xcdu); AL = (_r); fl_logic(_r,8); }
  /* 1160cd16 pushal  */
  x86_unimpl("pushal @ 0x1160cd16");
  /* 1160cd17 adc dword ptr [ecx*8 - 0x32bbeea0], edi */
  { uint32_t _a=(r32((uint32_t)(ECX*8 + -0x32bbeea0))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ECX*8 + -0x32bbeea0), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160cd1e pushal  */
  x86_unimpl("pushal @ 0x1160cd1e");
  /* 1160cd1f adc dword ptr [ebp + ecx*8 + 0x60], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + ECX*8 + 0x60))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + ECX*8 + 0x60), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160cd23 adc dword ptr [ebp + ecx*8 + 0x60], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + ECX*8 + 0x60))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + ECX*8 + 0x60), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160cd27 adc dword ptr [ebp + ecx*8 + 0x60], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + ECX*8 + 0x60))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EBP + ECX*8 + 0x60), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160cd2b adc dword ptr [ebp + ecx*8 + 0x60], esp */
  { uint32_t _a=(r32((uint32_t)(EBP + ECX*8 + 0x60))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EBP + ECX*8 + 0x60), (_r)); fl_add(_a,_b,_r,32); }
  /* 1160cd34 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1160cd38 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1160cd3c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1160cd40 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1160cd44 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1160cd48 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1160cd4c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1160cd50 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1160cd54 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1160cd58 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1160cd5c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1160cd60 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1160cd64 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1160cd68 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1160cd6c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1160cd73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cd75 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1160cd77:;
  /* 1160cd77 jmp dword ptr [edx*4 + 0x1160cd80] */
  switch (EDX) {
    case 0: goto L_1160cd90;
    case 1: goto L_1160cd98;
    case 2: goto L_1160cda8;
    case 3: goto L_1160cdbc;
    default: x86_unimpl("switch@0x1160cd77 out of table"); return;
  }
  /* 1160cd7e mov edi, edi */
  EDI = (EDI);
L_1160cd90:;
  /* 1160cd90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160cd93 pop esi */
  ESI = (pop32());
  /* 1160cd94 pop edi */
  EDI = (pop32());
  /* 1160cd95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160cd96 ret  */
  ESPCHK(0x1160caa0u, _esp0);
  ESP += 4; return;
  /* 1160cd97 nop  */
  /* nop */
L_1160cd98:;
  /* 1160cd98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160cd9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160cd9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160cda1 pop esi */
  ESI = (pop32());
  /* 1160cda2 pop edi */
  EDI = (pop32());
  /* 1160cda3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160cda4 ret  */
  ESPCHK(0x1160caa0u, _esp0);
  ESP += 4; return;
  /* 1160cda5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1160cda8:;
  /* 1160cda8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160cdab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160cdae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160cdb1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160cdb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160cdb7 pop esi */
  ESI = (pop32());
  /* 1160cdb8 pop edi */
  EDI = (pop32());
  /* 1160cdb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160cdba ret  */
  ESPCHK(0x1160caa0u, _esp0);
  ESP += 4; return;
  /* 1160cdbb nop  */
  /* nop */
L_1160cdbc:;
  /* 1160cdbc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1160cdbf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1160cdc2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1160cdc5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1160cdc8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1160cdcb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1160cdce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160cdd1 pop esi */
  ESI = (pop32());
  /* 1160cdd2 pop edi */
  EDI = (pop32());
  /* 1160cdd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1160cdd4 ret  */
  ESPCHK(0x1160caa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cde0 @ 0x1160cde0 (421 bytes, 148 insns) */
void f_1160cde0(void) {
  FTRACE(0x1160cde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160cde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160cde1 mov ebp, esp */
  EBP = (ESP);
  /* 1160cde3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1160cde5 push 0x1162bfc8 */
  push32((uint32_t)(0x1162bfc8u));
  /* 1160cdea push 0x1160dcb8 */
  push32((uint32_t)(0x1160dcb8u));
  /* 1160cdef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1160cdf5 push eax */
  push32((uint32_t)(EAX));
  /* 1160cdf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1160cdfd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ce00 push ebx */
  push32((uint32_t)(EBX));
  /* 1160ce01 push esi */
  push32((uint32_t)(ESI));
  /* 1160ce02 push edi */
  push32((uint32_t)(EDI));
  /* 1160ce03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1160ce06 cmp dword ptr [0x11630934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ce0d jne 0x1160ce5e */
  if (!C.zf) goto L_1160ce5e;
  /* 1160ce0f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1160ce12 push eax */
  push32((uint32_t)(EAX));
  /* 1160ce13 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160ce15 push 0x1162bfc4 */
  push32((uint32_t)(0x1162bfc4u));
  /* 1160ce1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1160ce1c call dword ptr [0x1163331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163331c))), 0x1160ce22u);
  /* 1160ce22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ce24 je 0x1160ce32 */
  if (C.zf) goto L_1160ce32;
  /* 1160ce26 mov dword ptr [0x11630934], 1 */
  w32((uint32_t)(0x11630934), (0x1u));
  /* 1160ce30 jmp 0x1160ce5e */
  goto L_1160ce5e;
L_1160ce32:;
  /* 1160ce32 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1160ce35 push ecx */
  push32((uint32_t)(ECX));
  /* 1160ce36 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160ce38 push 0x1162bfc0 */
  push32((uint32_t)(0x1162bfc0u));
  /* 1160ce3d push 1 */
  push32((uint32_t)(0x1u));
  /* 1160ce3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1160ce41 call dword ptr [0x11633320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633320))), 0x1160ce47u);
  /* 1160ce47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ce49 je 0x1160ce57 */
  if (C.zf) goto L_1160ce57;
  /* 1160ce4b mov dword ptr [0x11630934], 2 */
  w32((uint32_t)(0x11630934), (0x2u));
  /* 1160ce55 jmp 0x1160ce5e */
  goto L_1160ce5e;
L_1160ce57:;
  /* 1160ce57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160ce59 jmp 0x1160cf88 */
  goto L_1160cf88;
L_1160ce5e:;
  /* 1160ce5e cmp dword ptr [0x11630934], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11630934))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ce65 jne 0x1160ce95 */
  if (!C.zf) goto L_1160ce95;
  /* 1160ce67 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ce6b jne 0x1160ce76 */
  if (!C.zf) goto L_1160ce76;
  /* 1160ce6d mov edx, dword ptr [0x11630940] */
  EDX = (r32((uint32_t)(0x11630940)));
  /* 1160ce73 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1160ce76:;
  /* 1160ce76 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160ce79 push eax */
  push32((uint32_t)(EAX));
  /* 1160ce7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160ce7d push ecx */
  push32((uint32_t)(ECX));
  /* 1160ce7e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160ce81 push edx */
  push32((uint32_t)(EDX));
  /* 1160ce82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160ce85 push eax */
  push32((uint32_t)(EAX));
  /* 1160ce86 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1160ce89 push ecx */
  push32((uint32_t)(ECX));
  /* 1160ce8a call dword ptr [0x11633320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633320))), 0x1160ce90u);
  /* 1160ce90 jmp 0x1160cf88 */
  goto L_1160cf88;
L_1160ce95:;
  /* 1160ce95 cmp dword ptr [0x11630934], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630934))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ce9c jne 0x1160cf86 */
  if (!C.zf) goto L_1160cf86;
  /* 1160cea2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cea6 jne 0x1160ceb1 */
  if (!C.zf) goto L_1160ceb1;
  /* 1160cea8 mov edx, dword ptr [0x11630950] */
  EDX = (r32((uint32_t)(0x11630950)));
  /* 1160ceae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1160ceb1:;
  /* 1160ceb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160ceb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160ceb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160ceb8 push eax */
  push32((uint32_t)(EAX));
  /* 1160ceb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160cebc push ecx */
  push32((uint32_t)(ECX));
  /* 1160cebd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1160cec0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160cec2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160cec4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1160cec7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ceca push edx */
  push32((uint32_t)(EDX));
  /* 1160cecb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1160cece push eax */
  push32((uint32_t)(EAX));
  /* 1160cecf call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x1160ced5u);
  /* 1160ced5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1160ced8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cedc jne 0x1160cee5 */
  if (!C.zf) goto L_1160cee5;
  /* 1160cede xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160cee0 jmp 0x1160cf88 */
  goto L_1160cf88;
L_1160cee5:;
  /* 1160cee5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160ceec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160ceef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1160cef1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cef4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1160cef6 call 0x11607d50 */
  push32(0x1160cefbu); f_11607d50();
  /* 1160cefb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1160cefe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1160cf01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160cf04 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1160cf07 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160cf0a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1160cf0c push edx */
  push32((uint32_t)(EDX));
  /* 1160cf0d push 0 */
  push32((uint32_t)(0x0u));
  /* 1160cf0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160cf12 push eax */
  push32((uint32_t)(EAX));
  /* 1160cf13 call 0x11608920 */
  push32(0x1160cf18u); f_11608920();
  /* 1160cf18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cf1b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1160cf22 jmp 0x1160cf3b */
  goto L_1160cf3b;
  /* 1160cf24 mov eax, 1 */
  EAX = (0x1u);
  /* 1160cf29 ret  */
  ESPCHK(0x1160cde0u, _esp0);
  ESP += 4; return;
  /* 1160cf2a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1160cf2d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1160cf34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1160cf3b:;
  /* 1160cf3b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cf3f jne 0x1160cf45 */
  if (!C.zf) goto L_1160cf45;
  /* 1160cf41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160cf43 jmp 0x1160cf88 */
  goto L_1160cf88;
L_1160cf45:;
  /* 1160cf45 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160cf48 push ecx */
  push32((uint32_t)(ECX));
  /* 1160cf49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160cf4c push edx */
  push32((uint32_t)(EDX));
  /* 1160cf4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160cf50 push eax */
  push32((uint32_t)(EAX));
  /* 1160cf51 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160cf54 push ecx */
  push32((uint32_t)(ECX));
  /* 1160cf55 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160cf57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1160cf5a push edx */
  push32((uint32_t)(EDX));
  /* 1160cf5b call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x1160cf61u);
  /* 1160cf61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1160cf64 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cf68 jne 0x1160cf6e */
  if (!C.zf) goto L_1160cf6e;
  /* 1160cf6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160cf6c jmp 0x1160cf88 */
  goto L_1160cf88;
L_1160cf6e:;
  /* 1160cf6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160cf71 push eax */
  push32((uint32_t)(EAX));
  /* 1160cf72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160cf75 push ecx */
  push32((uint32_t)(ECX));
  /* 1160cf76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160cf79 push edx */
  push32((uint32_t)(EDX));
  /* 1160cf7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160cf7d push eax */
  push32((uint32_t)(EAX));
  /* 1160cf7e call dword ptr [0x1163331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163331c))), 0x1160cf84u);
  /* 1160cf84 jmp 0x1160cf88 */
  goto L_1160cf88;
L_1160cf86:;
  /* 1160cf86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1160cf88:;
  /* 1160cf88 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1160cf8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160cf8e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1160cf95 pop edi */
  EDI = (pop32());
  /* 1160cf96 pop esi */
  ESI = (pop32());
  /* 1160cf97 pop ebx */
  EBX = (pop32());
  /* 1160cf98 mov esp, ebp */
  ESP = (EBP);
  /* 1160cf9a pop ebp */
  EBP = (pop32());
  /* 1160cf9b ret  */
  ESPCHK(0x1160cde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x1160cfa0 (727 bytes, 263 insns) */
void f_1160cfa0(void) {
  FTRACE(0x1160cfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160cfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160cfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1160cfa3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1160cfa5 push 0x1162bfd8 */
  push32((uint32_t)(0x1162bfd8u));
  /* 1160cfaa push 0x1160dcb8 */
  push32((uint32_t)(0x1160dcb8u));
  /* 1160cfaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1160cfb5 push eax */
  push32((uint32_t)(EAX));
  /* 1160cfb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1160cfbd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160cfc0 push ebx */
  push32((uint32_t)(EBX));
  /* 1160cfc1 push esi */
  push32((uint32_t)(ESI));
  /* 1160cfc2 push edi */
  push32((uint32_t)(EDI));
  /* 1160cfc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1160cfc6 cmp dword ptr [0x11630958], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630958))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160cfcd jne 0x1160d026 */
  if (!C.zf) goto L_1160d026;
  /* 1160cfcf push 0 */
  push32((uint32_t)(0x0u));
  /* 1160cfd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160cfd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160cfd5 push 0x1162bfc4 */
  push32((uint32_t)(0x1162bfc4u));
  /* 1160cfda push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1160cfdf push 0 */
  push32((uint32_t)(0x0u));
  /* 1160cfe1 call dword ptr [0x11633314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633314))), 0x1160cfe7u);
  /* 1160cfe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160cfe9 je 0x1160cff7 */
  if (C.zf) goto L_1160cff7;
  /* 1160cfeb mov dword ptr [0x11630958], 1 */
  w32((uint32_t)(0x11630958), (0x1u));
  /* 1160cff5 jmp 0x1160d026 */
  goto L_1160d026;
L_1160cff7:;
  /* 1160cff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160cff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160cffb push 1 */
  push32((uint32_t)(0x1u));
  /* 1160cffd push 0x1162bfc0 */
  push32((uint32_t)(0x1162bfc0u));
  /* 1160d002 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1160d007 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d009 call dword ptr [0x11633318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633318))), 0x1160d00fu);
  /* 1160d00f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d011 je 0x1160d01f */
  if (C.zf) goto L_1160d01f;
  /* 1160d013 mov dword ptr [0x11630958], 2 */
  w32((uint32_t)(0x11630958), (0x2u));
  /* 1160d01d jmp 0x1160d026 */
  goto L_1160d026;
L_1160d01f:;
  /* 1160d01f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d021 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d026:;
  /* 1160d026 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d02a jle 0x1160d03f */
  if ((C.zf||C.sf!=C.of)) goto L_1160d03f;
  /* 1160d02c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160d02f push eax */
  push32((uint32_t)(EAX));
  /* 1160d030 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160d033 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d034 call 0x1160d2b0 */
  push32(0x1160d039u); f_1160d2b0();
  /* 1160d039 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d03c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1160d03f:;
  /* 1160d03f cmp dword ptr [0x11630958], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11630958))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d046 jne 0x1160d06b */
  if (!C.zf) goto L_1160d06b;
  /* 1160d048 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1160d04b push edx */
  push32((uint32_t)(EDX));
  /* 1160d04c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1160d04f push eax */
  push32((uint32_t)(EAX));
  /* 1160d050 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160d053 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d054 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160d057 push edx */
  push32((uint32_t)(EDX));
  /* 1160d058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d05b push eax */
  push32((uint32_t)(EAX));
  /* 1160d05c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d05f push ecx */
  push32((uint32_t)(ECX));
  /* 1160d060 call dword ptr [0x11633318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633318))), 0x1160d066u);
  /* 1160d066 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d06b:;
  /* 1160d06b cmp dword ptr [0x11630958], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630958))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d072 jne 0x1160d28f */
  if (!C.zf) goto L_1160d28f;
  /* 1160d078 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d07c jne 0x1160d087 */
  if (!C.zf) goto L_1160d087;
  /* 1160d07e mov edx, dword ptr [0x11630950] */
  EDX = (r32((uint32_t)(0x11630950)));
  /* 1160d084 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1160d087:;
  /* 1160d087 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d089 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d08b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160d08e push eax */
  push32((uint32_t)(EAX));
  /* 1160d08f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160d092 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d093 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1160d096 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160d098 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d09a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1160d09d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d0a0 push edx */
  push32((uint32_t)(EDX));
  /* 1160d0a1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1160d0a4 push eax */
  push32((uint32_t)(EAX));
  /* 1160d0a5 call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x1160d0abu);
  /* 1160d0ab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1160d0ae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d0b2 jne 0x1160d0bb */
  if (!C.zf) goto L_1160d0bb;
  /* 1160d0b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d0b6 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d0bb:;
  /* 1160d0bb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160d0c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160d0c5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1160d0c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d0ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1160d0cc call 0x11607d50 */
  push32(0x1160d0d1u); f_11607d50();
  /* 1160d0d1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1160d0d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1160d0d7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1160d0da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1160d0dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1160d0e4 jmp 0x1160d0fd */
  goto L_1160d0fd;
  /* 1160d0e6 mov eax, 1 */
  EAX = (0x1u);
  /* 1160d0eb ret  */
  ESPCHK(0x1160cfa0u, _esp0);
  ESP += 4; return;
  /* 1160d0ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1160d0ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1160d0f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1160d0fd:;
  /* 1160d0fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d101 jne 0x1160d10a */
  if (!C.zf) goto L_1160d10a;
  /* 1160d103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d105 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d10a:;
  /* 1160d10a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160d10d push edx */
  push32((uint32_t)(EDX));
  /* 1160d10e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160d111 push eax */
  push32((uint32_t)(EAX));
  /* 1160d112 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1160d115 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d116 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160d119 push edx */
  push32((uint32_t)(EDX));
  /* 1160d11a push 1 */
  push32((uint32_t)(0x1u));
  /* 1160d11c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1160d11f push eax */
  push32((uint32_t)(EAX));
  /* 1160d120 call dword ptr [0x11633324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633324))), 0x1160d126u);
  /* 1160d126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d128 jne 0x1160d131 */
  if (!C.zf) goto L_1160d131;
  /* 1160d12a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d12c jmp 0x1160d291 */
  goto L_1160d291;
L_1160d131:;
  /* 1160d131 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d133 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d135 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160d138 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d139 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160d13c push edx */
  push32((uint32_t)(EDX));
  /* 1160d13d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d140 push eax */
  push32((uint32_t)(EAX));
  /* 1160d141 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d144 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d145 call dword ptr [0x11633314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633314))), 0x1160d14bu);
  /* 1160d14b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1160d14e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d152 jne 0x1160d15b */
  if (!C.zf) goto L_1160d15b;
  /* 1160d154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d156 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d15b:;
  /* 1160d15b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d15e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1160d164 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160d166 je 0x1160d1ab */
  if (C.zf) goto L_1160d1ab;
  /* 1160d168 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d16c je 0x1160d1a6 */
  if (C.zf) goto L_1160d1a6;
  /* 1160d16e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160d171 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d174 jle 0x1160d17d */
  if ((C.zf||C.sf!=C.of)) goto L_1160d17d;
  /* 1160d176 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d178 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d17d:;
  /* 1160d17d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1160d180 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d181 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1160d184 push edx */
  push32((uint32_t)(EDX));
  /* 1160d185 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160d188 push eax */
  push32((uint32_t)(EAX));
  /* 1160d189 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160d18c push ecx */
  push32((uint32_t)(ECX));
  /* 1160d18d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d190 push edx */
  push32((uint32_t)(EDX));
  /* 1160d191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d194 push eax */
  push32((uint32_t)(EAX));
  /* 1160d195 call dword ptr [0x11633314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633314))), 0x1160d19bu);
  /* 1160d19b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d19d jne 0x1160d1a6 */
  if (!C.zf) goto L_1160d1a6;
  /* 1160d19f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d1a1 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d1a6:;
  /* 1160d1a6 jmp 0x1160d28a */
  goto L_1160d28a;
L_1160d1ab:;
  /* 1160d1ab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160d1ae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1160d1b1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1160d1b8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160d1bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1160d1bd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d1c0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1160d1c2 call 0x11607d50 */
  push32(0x1160d1c7u); f_11607d50();
  /* 1160d1c7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1160d1ca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1160d1cd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1160d1d0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1160d1d3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1160d1da jmp 0x1160d1f3 */
  goto L_1160d1f3;
  /* 1160d1dc mov eax, 1 */
  EAX = (0x1u);
  /* 1160d1e1 ret  */
  ESPCHK(0x1160cfa0u, _esp0);
  ESP += 4; return;
  /* 1160d1e2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1160d1e5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1160d1ec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1160d1f3:;
  /* 1160d1f3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d1f7 jne 0x1160d200 */
  if (!C.zf) goto L_1160d200;
  /* 1160d1f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d1fb jmp 0x1160d291 */
  goto L_1160d291;
L_1160d200:;
  /* 1160d200 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160d203 push eax */
  push32((uint32_t)(EAX));
  /* 1160d204 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160d207 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d208 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1160d20b push edx */
  push32((uint32_t)(EDX));
  /* 1160d20c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1160d20f push eax */
  push32((uint32_t)(EAX));
  /* 1160d210 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d213 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d214 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d217 push edx */
  push32((uint32_t)(EDX));
  /* 1160d218 call dword ptr [0x11633314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633314))), 0x1160d21eu);
  /* 1160d21e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d220 jne 0x1160d226 */
  if (!C.zf) goto L_1160d226;
  /* 1160d222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d224 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d226:;
  /* 1160d226 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d22a jne 0x1160d25a */
  if (!C.zf) goto L_1160d25a;
  /* 1160d22c push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d22e push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d230 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d232 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d234 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160d237 push eax */
  push32((uint32_t)(EAX));
  /* 1160d238 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160d23b push ecx */
  push32((uint32_t)(ECX));
  /* 1160d23c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1160d241 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1160d244 push edx */
  push32((uint32_t)(EDX));
  /* 1160d245 call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x1160d24bu);
  /* 1160d24b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1160d24e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d252 jne 0x1160d258 */
  if (!C.zf) goto L_1160d258;
  /* 1160d254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d256 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d258:;
  /* 1160d258 jmp 0x1160d28a */
  goto L_1160d28a;
L_1160d25a:;
  /* 1160d25a push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d25c push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d25e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1160d261 push eax */
  push32((uint32_t)(EAX));
  /* 1160d262 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1160d265 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d266 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1160d269 push edx */
  push32((uint32_t)(EDX));
  /* 1160d26a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1160d26d push eax */
  push32((uint32_t)(EAX));
  /* 1160d26e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1160d273 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1160d276 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d277 call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x1160d27du);
  /* 1160d27d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1160d280 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d284 jne 0x1160d28a */
  if (!C.zf) goto L_1160d28a;
  /* 1160d286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d288 jmp 0x1160d291 */
  goto L_1160d291;
L_1160d28a:;
  /* 1160d28a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1160d28d jmp 0x1160d291 */
  goto L_1160d291;
L_1160d28f:;
  /* 1160d28f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1160d291:;
  /* 1160d291 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1160d294 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160d297 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1160d29e pop edi */
  EDI = (pop32());
  /* 1160d29f pop esi */
  ESI = (pop32());
  /* 1160d2a0 pop ebx */
  EBX = (pop32());
  /* 1160d2a1 mov esp, ebp */
  ESP = (EBP);
  /* 1160d2a3 pop ebp */
  EBP = (pop32());
  /* 1160d2a4 ret  */
  ESPCHK(0x1160cfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2b0 @ 0x1160d2b0 (80 bytes, 32 insns) */
void f_1160d2b0(void) {
  FTRACE(0x1160d2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1160d2b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d2b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d2b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160d2bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d2bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1160d2c2:;
  /* 1160d2c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160d2c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160d2c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d2cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160d2ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160d2d0 je 0x1160d2e7 */
  if (C.zf) goto L_1160d2e7;
  /* 1160d2d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d2d5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1160d2d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160d2da je 0x1160d2e7 */
  if (C.zf) goto L_1160d2e7;
  /* 1160d2dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d2df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d2e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160d2e5 jmp 0x1160d2c2 */
  goto L_1160d2c2;
L_1160d2e7:;
  /* 1160d2e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d2ea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1160d2ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160d2ef jne 0x1160d2f9 */
  if (!C.zf) goto L_1160d2f9;
  /* 1160d2f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d2f4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d2f7 jmp 0x1160d2fc */
  goto L_1160d2fc;
L_1160d2f9:;
  /* 1160d2f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1160d2fc:;
  /* 1160d2fc mov esp, ebp */
  ESP = (EBP);
  /* 1160d2fe pop ebp */
  EBP = (pop32());
  /* 1160d2ff ret  */
  ESPCHK(0x1160d2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x1160d300 (130 bytes, 43 insns) */
void f_1160d300(void) {
  FTRACE(0x1160d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d300 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d301 mov ebp, esp */
  EBP = (ESP);
  /* 1160d303 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d307 cmp eax, dword ptr [0x1163225c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1163225c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d30d jae 0x1160d331 */
  if (!C.cf) goto L_1160d331;
  /* 1160d30f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d312 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160d315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d318 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160d31b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d31e mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160d325 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1160d32a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1160d32d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160d32f jne 0x1160d34c */
  if (!C.zf) goto L_1160d34c;
L_1160d331:;
  /* 1160d331 call 0x1160ca80 */
  push32(0x1160d336u); f_1160ca80();
  /* 1160d336 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1160d33c call 0x1160ca90 */
  push32(0x1160d341u); f_1160ca90();
  /* 1160d341 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1160d347 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160d34a jmp 0x1160d37e */
  goto L_1160d37e;
L_1160d34c:;
  /* 1160d34c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d34f push edx */
  push32((uint32_t)(EDX));
  /* 1160d350 call 0x1160e2a0 */
  push32(0x1160d355u); f_1160e2a0();
  /* 1160d355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d358 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160d35b push eax */
  push32((uint32_t)(EAX));
  /* 1160d35c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d35f push ecx */
  push32((uint32_t)(ECX));
  /* 1160d360 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d363 push edx */
  push32((uint32_t)(EDX));
  /* 1160d364 call 0x1160d390 */
  push32(0x1160d369u); f_1160d390();
  /* 1160d369 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d36c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160d36f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d372 push eax */
  push32((uint32_t)(EAX));
  /* 1160d373 call 0x1160e330 */
  push32(0x1160d378u); f_1160e330();
  /* 1160d378 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d37b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1160d37e:;
  /* 1160d37e mov esp, ebp */
  ESP = (EBP);
  /* 1160d380 pop ebp */
  EBP = (pop32());
  /* 1160d381 ret  */
  ESPCHK(0x1160d300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x1160d390 (178 bytes, 56 insns) */
void f_1160d390(void) {
  FTRACE(0x1160d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d390 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d391 mov ebp, esp */
  EBP = (ESP);
  /* 1160d393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d399 push eax */
  push32((uint32_t)(EAX));
  /* 1160d39a call 0x1160e120 */
  push32(0x1160d39fu); f_1160e120();
  /* 1160d39f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d3a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1160d3a5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d3a9 jne 0x1160d3be */
  if (!C.zf) goto L_1160d3be;
  /* 1160d3ab call 0x1160ca80 */
  push32(0x1160d3b0u); f_1160ca80();
  /* 1160d3b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1160d3b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160d3b9 jmp 0x1160d43e */
  goto L_1160d43e;
L_1160d3be:;
  /* 1160d3be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160d3c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d3c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d3c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d3c7 push edx */
  push32((uint32_t)(EDX));
  /* 1160d3c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160d3cb push eax */
  push32((uint32_t)(EAX));
  /* 1160d3cc call dword ptr [0x11633310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633310))), 0x1160d3d2u);
  /* 1160d3d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160d3d5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d3d9 jne 0x1160d3e6 */
  if (!C.zf) goto L_1160d3e6;
  /* 1160d3db call dword ptr [0x116333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333b4))), 0x1160d3e1u);
  /* 1160d3e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160d3e4 jmp 0x1160d3ed */
  goto L_1160d3ed;
L_1160d3e6:;
  /* 1160d3e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1160d3ed:;
  /* 1160d3ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d3f1 je 0x1160d404 */
  if (C.zf) goto L_1160d404;
  /* 1160d3f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d3f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d3f7 call 0x1160c9e0 */
  push32(0x1160d3fcu); f_1160c9e0();
  /* 1160d3fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d3ff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160d402 jmp 0x1160d43e */
  goto L_1160d43e;
L_1160d404:;
  /* 1160d404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d407 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1160d40a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d40d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1160d410 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d413 mov ecx, dword ptr [edx*4 + 0x11632120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11632120)));
  /* 1160d41a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1160d41e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1160d421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d424 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160d427 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d42a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160d42d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d430 mov eax, dword ptr [eax*4 + 0x11632120] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160d437 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1160d43b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1160d43e:;
  /* 1160d43e mov esp, ebp */
  ESP = (EBP);
  /* 1160d440 pop ebp */
  EBP = (pop32());
  /* 1160d441 ret  */
  ESPCHK(0x1160d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d450 @ 0x1160d450 (130 bytes, 43 insns) */
void f_1160d450(void) {
  FTRACE(0x1160d450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d450 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d451 mov ebp, esp */
  EBP = (ESP);
  /* 1160d453 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d457 cmp eax, dword ptr [0x1163225c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1163225c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d45d jae 0x1160d481 */
  if (!C.cf) goto L_1160d481;
  /* 1160d45f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d462 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160d465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d468 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160d46b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d46e mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160d475 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1160d47a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1160d47d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160d47f jne 0x1160d49c */
  if (!C.zf) goto L_1160d49c;
L_1160d481:;
  /* 1160d481 call 0x1160ca80 */
  push32(0x1160d486u); f_1160ca80();
  /* 1160d486 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1160d48c call 0x1160ca90 */
  push32(0x1160d491u); f_1160ca90();
  /* 1160d491 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1160d497 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160d49a jmp 0x1160d4ce */
  goto L_1160d4ce;
L_1160d49c:;
  /* 1160d49c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d49f push edx */
  push32((uint32_t)(EDX));
  /* 1160d4a0 call 0x1160e2a0 */
  push32(0x1160d4a5u); f_1160e2a0();
  /* 1160d4a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d4a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160d4ab push eax */
  push32((uint32_t)(EAX));
  /* 1160d4ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d4af push ecx */
  push32((uint32_t)(ECX));
  /* 1160d4b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d4b3 push edx */
  push32((uint32_t)(EDX));
  /* 1160d4b4 call 0x1160d4e0 */
  push32(0x1160d4b9u); f_1160d4e0();
  /* 1160d4b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d4bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160d4bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d4c2 push eax */
  push32((uint32_t)(EAX));
  /* 1160d4c3 call 0x1160e330 */
  push32(0x1160d4c8u); f_1160e330();
  /* 1160d4c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d4cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1160d4ce:;
  /* 1160d4ce mov esp, ebp */
  ESP = (EBP);
  /* 1160d4d0 pop ebp */
  EBP = (pop32());
  /* 1160d4d1 ret  */
  ESPCHK(0x1160d450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4e0 @ 0x1160d4e0 (627 bytes, 182 insns) */
void f_1160d4e0(void) {
  FTRACE(0x1160d4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1160d4e3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d4e9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1160d4f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160d4f3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1160d4f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d4fd jne 0x1160d506 */
  if (!C.zf) goto L_1160d506;
  /* 1160d4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d501 jmp 0x1160d74f */
  goto L_1160d74f;
L_1160d506:;
  /* 1160d506 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d509 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160d50c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d50f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160d512 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d515 mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160d51c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1160d521 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1160d524 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160d526 je 0x1160d538 */
  if (C.zf) goto L_1160d538;
  /* 1160d528 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160d52a push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d52c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d52f push edx */
  push32((uint32_t)(EDX));
  /* 1160d530 call 0x1160d390 */
  push32(0x1160d535u); f_1160d390();
  /* 1160d535 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160d538:;
  /* 1160d538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d53b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160d53e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d541 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160d544 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d547 mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160d54e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1160d553 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1160d558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d55a je 0x1160d66c */
  if (C.zf) goto L_1160d66c;
  /* 1160d560 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d563 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1160d566 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1160d56d:;
  /* 1160d56d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d570 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d573 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d576 jae 0x1160d66a */
  if (!C.cf) goto L_1160d66a;
  /* 1160d57c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1160d582 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1160d585:;
  /* 1160d585 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160d588 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1160d58e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d590 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d596 jge 0x1160d5f7 */
  if ((C.sf==C.of)) goto L_1160d5f7;
  /* 1160d598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d59b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d59e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d5a1 jae 0x1160d5f7 */
  if (!C.cf) goto L_1160d5f7;
  /* 1160d5a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d5a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1160d5a8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1160d5ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d5b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d5b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160d5b7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1160d5be cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d5c1 jne 0x1160d5e1 */
  if (!C.zf) goto L_1160d5e1;
  /* 1160d5c3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1160d5c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d5cc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1160d5d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160d5d5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1160d5d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160d5db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d5de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1160d5e1:;
  /* 1160d5e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160d5e4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1160d5ea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1160d5ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160d5ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d5f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1160d5f5 jmp 0x1160d585 */
  goto L_1160d585;
L_1160d5f7:;
  /* 1160d5f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d5f9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1160d5ff push edx */
  push32((uint32_t)(EDX));
  /* 1160d600 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160d603 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1160d609 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d60b push eax */
  push32((uint32_t)(EAX));
  /* 1160d60c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1160d612 push edx */
  push32((uint32_t)(EDX));
  /* 1160d613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d616 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160d619 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d61c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160d61f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d622 mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160d629 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1160d62c push eax */
  push32((uint32_t)(EAX));
  /* 1160d62d call dword ptr [0x11633390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633390))), 0x1160d633u);
  /* 1160d633 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d635 je 0x1160d65a */
  if (C.zf) goto L_1160d65a;
  /* 1160d637 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160d63a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d640 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1160d643 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160d646 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1160d64c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d64e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d654 jge 0x1160d658 */
  if ((C.sf==C.of)) goto L_1160d658;
  /* 1160d656 jmp 0x1160d66a */
  goto L_1160d66a;
L_1160d658:;
  /* 1160d658 jmp 0x1160d665 */
  goto L_1160d665;
L_1160d65a:;
  /* 1160d65a call dword ptr [0x116333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333b4))), 0x1160d660u);
  /* 1160d660 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1160d663 jmp 0x1160d66a */
  goto L_1160d66a;
L_1160d665:;
  /* 1160d665 jmp 0x1160d56d */
  goto L_1160d56d;
L_1160d66a:;
  /* 1160d66a jmp 0x1160d6bc */
  goto L_1160d6bc;
L_1160d66c:;
  /* 1160d66c push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d66e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1160d674 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d675 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1160d678 push edx */
  push32((uint32_t)(EDX));
  /* 1160d679 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d67c push eax */
  push32((uint32_t)(EAX));
  /* 1160d67d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d680 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160d683 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d686 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160d689 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d68c mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160d693 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1160d696 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d697 call dword ptr [0x11633390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633390))), 0x1160d69du);
  /* 1160d69d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d69f je 0x1160d6b3 */
  if (C.zf) goto L_1160d6b3;
  /* 1160d6a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160d6a8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1160d6ae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1160d6b1 jmp 0x1160d6bc */
  goto L_1160d6bc;
L_1160d6b3:;
  /* 1160d6b3 call dword ptr [0x116333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333b4))), 0x1160d6b9u);
  /* 1160d6b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1160d6bc:;
  /* 1160d6bc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d6c0 jne 0x1160d746 */
  if (!C.zf) goto L_1160d746;
  /* 1160d6c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d6ca je 0x1160d6fa */
  if (C.zf) goto L_1160d6fa;
  /* 1160d6cc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d6d0 jne 0x1160d6e9 */
  if (!C.zf) goto L_1160d6e9;
  /* 1160d6d2 call 0x1160ca80 */
  push32(0x1160d6d7u); f_1160ca80();
  /* 1160d6d7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1160d6dd call 0x1160ca90 */
  push32(0x1160d6e2u); f_1160ca90();
  /* 1160d6e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160d6e5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1160d6e7 jmp 0x1160d6f5 */
  goto L_1160d6f5;
L_1160d6e9:;
  /* 1160d6e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160d6ec push edx */
  push32((uint32_t)(EDX));
  /* 1160d6ed call 0x1160c9e0 */
  push32(0x1160d6f2u); f_1160c9e0();
  /* 1160d6f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160d6f5:;
  /* 1160d6f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160d6f8 jmp 0x1160d74f */
  goto L_1160d74f;
L_1160d6fa:;
  /* 1160d6fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d6fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160d700 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d703 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160d706 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d709 mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160d710 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1160d715 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1160d718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d71a je 0x1160d72b */
  if (C.zf) goto L_1160d72b;
  /* 1160d71c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160d71f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1160d722 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d725 jne 0x1160d72b */
  if (!C.zf) goto L_1160d72b;
  /* 1160d727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d729 jmp 0x1160d74f */
  goto L_1160d74f;
L_1160d72b:;
  /* 1160d72b call 0x1160ca80 */
  push32(0x1160d730u); f_1160ca80();
  /* 1160d730 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1160d736 call 0x1160ca90 */
  push32(0x1160d73bu); f_1160ca90();
  /* 1160d73b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1160d741 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160d744 jmp 0x1160d74f */
  goto L_1160d74f;
L_1160d746:;
  /* 1160d746 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160d749 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1160d74f:;
  /* 1160d74f mov esp, ebp */
  ESP = (EBP);
  /* 1160d751 pop ebp */
  EBP = (pop32());
  /* 1160d752 ret  */
  ESPCHK(0x1160d4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x1160d760 (199 bytes, 68 insns) */
void f_1160d760(void) {
  FTRACE(0x1160d760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d760 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d761 mov ebp, esp */
  EBP = (ESP);
  /* 1160d763 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d764 push ebx */
  push32((uint32_t)(EBX));
  /* 1160d765 push esi */
  push32((uint32_t)(ESI));
  /* 1160d766 push edi */
  push32((uint32_t)(EDI));
L_1160d767:;
  /* 1160d767 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d76b jne 0x1160d78b */
  if (!C.zf) goto L_1160d78b;
  /* 1160d76d push 0x1162bf24 */
  push32((uint32_t)(0x1162bf24u));
  /* 1160d772 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160d774 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1160d776 push 0x1162bff0 */
  push32((uint32_t)(0x1162bff0u));
  /* 1160d77b push 2 */
  push32((uint32_t)(0x2u));
  /* 1160d77d call 0x11603c70 */
  push32(0x1160d782u); f_11603c70();
  /* 1160d782 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d785 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d788 jne 0x1160d78b */
  if (!C.zf) goto L_1160d78b;
  /* 1160d78a int3  */
  x86_unimpl("int3 @ 0x1160d78a");
L_1160d78b:;
  /* 1160d78b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d78d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d78f jne 0x1160d767 */
  if (!C.zf) goto L_1160d767;
  /* 1160d791 mov ecx, dword ptr [0x1163095c] */
  ECX = (r32((uint32_t)(0x1163095c)));
  /* 1160d797 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d79a mov dword ptr [0x1163095c], ecx */
  w32((uint32_t)(0x1163095c), (ECX));
  /* 1160d7a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d7a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160d7a6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1160d7a8 push 0x1162bff0 */
  push32((uint32_t)(0x1162bff0u));
  /* 1160d7ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1160d7af push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1160d7b4 call 0x11604bb0 */
  push32(0x1160d7b9u); f_11604bb0();
  /* 1160d7b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d7bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d7bf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1160d7c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d7c5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d7c9 je 0x1160d7e6 */
  if (C.zf) goto L_1160d7e6;
  /* 1160d7cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d7ce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160d7d1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1160d7d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d7d7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1160d7da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d7dd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1160d7e4 jmp 0x1160d80b */
  goto L_1160d80b;
L_1160d7e6:;
  /* 1160d7e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d7e9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160d7ec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1160d7ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d7f2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1160d7f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d7f8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d7fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d7fe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1160d801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d804 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1160d80b:;
  /* 1160d80b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d80e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d811 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1160d814 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1160d816 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d819 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1160d820 pop edi */
  EDI = (pop32());
  /* 1160d821 pop esi */
  ESI = (pop32());
  /* 1160d822 pop ebx */
  EBX = (pop32());
  /* 1160d823 mov esp, ebp */
  ESP = (EBP);
  /* 1160d825 pop ebp */
  EBP = (pop32());
  /* 1160d826 ret  */
  ESPCHK(0x1160d760u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1160d830 (50 bytes, 17 insns) */
void f_1160d830(void) {
  FTRACE(0x1160d830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d830 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d831 mov ebp, esp */
  EBP = (ESP);
  /* 1160d833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d836 cmp eax, dword ptr [0x1163225c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1163225c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d83c jb 0x1160d842 */
  if (C.cf) goto L_1160d842;
  /* 1160d83e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160d840 jmp 0x1160d860 */
  goto L_1160d860;
L_1160d842:;
  /* 1160d842 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d845 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160d848 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d84b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160d84e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d851 mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160d858 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1160d85d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1160d860:;
  /* 1160d860 pop ebp */
  EBP = (pop32());
  /* 1160d861 ret  */
  ESPCHK(0x1160d830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d870 @ 0x1160d870 (300 bytes, 80 insns) */
void f_1160d870(void) {
  FTRACE(0x1160d870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d870 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d871 mov ebp, esp */
  EBP = (ESP);
  /* 1160d873 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d874 cmp dword ptr [0x11631e20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11631e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d87b jne 0x1160d889 */
  if (!C.zf) goto L_1160d889;
  /* 1160d87d mov dword ptr [0x11631e20], 0x200 */
  w32((uint32_t)(0x11631e20), (0x200u));
  /* 1160d887 jmp 0x1160d89c */
  goto L_1160d89c;
L_1160d889:;
  /* 1160d889 cmp dword ptr [0x11631e20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11631e20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d890 jge 0x1160d89c */
  if ((C.sf==C.of)) goto L_1160d89c;
  /* 1160d892 mov dword ptr [0x11631e20], 0x14 */
  w32((uint32_t)(0x11631e20), (0x14u));
L_1160d89c:;
  /* 1160d89c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1160d8a1 push 0x1162bffc */
  push32((uint32_t)(0x1162bffcu));
  /* 1160d8a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160d8a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1160d8aa mov eax, dword ptr [0x11631e20] */
  EAX = (r32((uint32_t)(0x11631e20)));
  /* 1160d8af push eax */
  push32((uint32_t)(EAX));
  /* 1160d8b0 call 0x11604fc0 */
  push32(0x1160d8b5u); f_11604fc0();
  /* 1160d8b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d8b8 mov dword ptr [0x11630ad0], eax */
  w32((uint32_t)(0x11630ad0), (EAX));
  /* 1160d8bd cmp dword ptr [0x11630ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d8c4 jne 0x1160d905 */
  if (!C.zf) goto L_1160d905;
  /* 1160d8c6 mov dword ptr [0x11631e20], 0x14 */
  w32((uint32_t)(0x11631e20), (0x14u));
  /* 1160d8d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1160d8d5 push 0x1162bffc */
  push32((uint32_t)(0x1162bffcu));
  /* 1160d8da push 2 */
  push32((uint32_t)(0x2u));
  /* 1160d8dc push 4 */
  push32((uint32_t)(0x4u));
  /* 1160d8de mov ecx, dword ptr [0x11631e20] */
  ECX = (r32((uint32_t)(0x11631e20)));
  /* 1160d8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d8e5 call 0x11604fc0 */
  push32(0x1160d8eau); f_11604fc0();
  /* 1160d8ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d8ed mov dword ptr [0x11630ad0], eax */
  w32((uint32_t)(0x11630ad0), (EAX));
  /* 1160d8f2 cmp dword ptr [0x11630ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d8f9 jne 0x1160d905 */
  if (!C.zf) goto L_1160d905;
  /* 1160d8fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1160d8fd call 0x11603b20 */
  push32(0x1160d902u); f_11603b20();
  /* 1160d902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160d905:;
  /* 1160d905 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160d90c jmp 0x1160d917 */
  goto L_1160d917;
L_1160d90e:;
  /* 1160d90e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d911 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d914 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1160d917:;
  /* 1160d917 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d91b jge 0x1160d936 */
  if ((C.sf==C.of)) goto L_1160d936;
  /* 1160d91d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d920 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160d923 add eax, 0x1162f120 */
  { uint32_t _a=(EAX),_b=(0x1162f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d92b mov edx, dword ptr [0x11630ad0] */
  EDX = (r32((uint32_t)(0x11630ad0)));
  /* 1160d931 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1160d934 jmp 0x1160d90e */
  goto L_1160d90e;
L_1160d936:;
  /* 1160d936 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160d93d jmp 0x1160d948 */
  goto L_1160d948;
L_1160d93f:;
  /* 1160d93f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d942 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d945 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160d948:;
  /* 1160d948 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d94c jge 0x1160d998 */
  if ((C.sf==C.of)) goto L_1160d998;
  /* 1160d94e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d951 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160d954 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d957 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160d95a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d95d mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160d964 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d968 je 0x1160d986 */
  if (C.zf) goto L_1160d986;
  /* 1160d96a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d96d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160d970 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d973 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160d976 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160d979 mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160d980 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d984 jne 0x1160d996 */
  if (!C.zf) goto L_1160d996;
L_1160d986:;
  /* 1160d986 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160d989 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160d98c mov dword ptr [ecx + 0x1162f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1162f130), (0xffffffffu));
L_1160d996:;
  /* 1160d996 jmp 0x1160d93f */
  goto L_1160d93f;
L_1160d998:;
  /* 1160d998 mov esp, ebp */
  ESP = (EBP);
  /* 1160d99a pop ebp */
  EBP = (pop32());
  /* 1160d99b ret  */
  ESPCHK(0x1160d870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9a0 @ 0x1160d9a0 (26 bytes, 9 insns) */
void f_1160d9a0(void) {
  FTRACE(0x1160d9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1160d9a3 call 0x1160e5a0 */
  push32(0x1160d9a8u); f_1160e5a0();
  /* 1160d9a8 movsx eax, byte ptr [0x11630778] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11630778))));
  /* 1160d9af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160d9b1 je 0x1160d9b8 */
  if (C.zf) goto L_1160d9b8;
  /* 1160d9b3 call 0x1160e360 */
  push32(0x1160d9b8u); f_1160e360();
L_1160d9b8:;
  /* 1160d9b8 pop ebp */
  EBP = (pop32());
  /* 1160d9b9 ret  */
  ESPCHK(0x1160d9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9c0 @ 0x1160d9c0 (61 bytes, 20 insns) */
void f_1160d9c0(void) {
  FTRACE(0x1160d9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160d9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160d9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1160d9c3 cmp dword ptr [ebp + 8], 0x1162f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1162f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d9ca jb 0x1160d9ee */
  if (C.cf) goto L_1160d9ee;
  /* 1160d9cc cmp dword ptr [ebp + 8], 0x1162f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1162f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160d9d3 ja 0x1160d9ee */
  if ((!C.cf&&!C.zf)) goto L_1160d9ee;
  /* 1160d9d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d9d8 sub eax, 0x1162f120 */
  { uint32_t _a=(EAX),_b=(0x1162f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160d9dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160d9e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d9e3 push eax */
  push32((uint32_t)(EAX));
  /* 1160d9e4 call 0x116085b0 */
  push32(0x1160d9e9u); f_116085b0();
  /* 1160d9e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d9ec jmp 0x1160d9fb */
  goto L_1160d9fb;
L_1160d9ee:;
  /* 1160d9ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160d9f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160d9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1160d9f5 call dword ptr [0x1163334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163334c))), 0x1160d9fbu);
L_1160d9fb:;
  /* 1160d9fb pop ebp */
  EBP = (pop32());
  /* 1160d9fc ret  */
  ESPCHK(0x1160d9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da00 @ 0x1160da00 (41 bytes, 16 insns) */
void f_1160da00(void) {
  FTRACE(0x1160da00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160da00 push ebp */
  push32((uint32_t)(EBP));
  /* 1160da01 mov ebp, esp */
  EBP = (ESP);
  /* 1160da03 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160da07 jge 0x1160da1a */
  if ((C.sf==C.of)) goto L_1160da1a;
  /* 1160da09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160da0c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160da0f push eax */
  push32((uint32_t)(EAX));
  /* 1160da10 call 0x116085b0 */
  push32(0x1160da15u); f_116085b0();
  /* 1160da15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160da18 jmp 0x1160da27 */
  goto L_1160da27;
L_1160da1a:;
  /* 1160da1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160da1d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160da20 push ecx */
  push32((uint32_t)(ECX));
  /* 1160da21 call dword ptr [0x1163334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163334c))), 0x1160da27u);
L_1160da27:;
  /* 1160da27 pop ebp */
  EBP = (pop32());
  /* 1160da28 ret  */
  ESPCHK(0x1160da00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da30 @ 0x1160da30 (61 bytes, 20 insns) */
void f_1160da30(void) {
  FTRACE(0x1160da30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160da30 push ebp */
  push32((uint32_t)(EBP));
  /* 1160da31 mov ebp, esp */
  EBP = (ESP);
  /* 1160da33 cmp dword ptr [ebp + 8], 0x1162f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1162f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160da3a jb 0x1160da5e */
  if (C.cf) goto L_1160da5e;
  /* 1160da3c cmp dword ptr [ebp + 8], 0x1162f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1162f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160da43 ja 0x1160da5e */
  if ((!C.cf&&!C.zf)) goto L_1160da5e;
  /* 1160da45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160da48 sub eax, 0x1162f120 */
  { uint32_t _a=(EAX),_b=(0x1162f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160da4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160da50 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160da53 push eax */
  push32((uint32_t)(EAX));
  /* 1160da54 call 0x11608650 */
  push32(0x1160da59u); f_11608650();
  /* 1160da59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160da5c jmp 0x1160da6b */
  goto L_1160da6b;
L_1160da5e:;
  /* 1160da5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160da61 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160da64 push ecx */
  push32((uint32_t)(ECX));
  /* 1160da65 call dword ptr [0x11633348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633348))), 0x1160da6bu);
L_1160da6b:;
  /* 1160da6b pop ebp */
  EBP = (pop32());
  /* 1160da6c ret  */
  ESPCHK(0x1160da30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da70 @ 0x1160da70 (41 bytes, 16 insns) */
void f_1160da70(void) {
  FTRACE(0x1160da70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160da70 push ebp */
  push32((uint32_t)(EBP));
  /* 1160da71 mov ebp, esp */
  EBP = (ESP);
  /* 1160da73 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160da77 jge 0x1160da8a */
  if ((C.sf==C.of)) goto L_1160da8a;
  /* 1160da79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160da7c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160da7f push eax */
  push32((uint32_t)(EAX));
  /* 1160da80 call 0x11608650 */
  push32(0x1160da85u); f_11608650();
  /* 1160da85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160da88 jmp 0x1160da97 */
  goto L_1160da97;
L_1160da8a:;
  /* 1160da8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160da8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160da90 push ecx */
  push32((uint32_t)(ECX));
  /* 1160da91 call dword ptr [0x11633348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633348))), 0x1160da97u);
L_1160da97:;
  /* 1160da97 pop ebp */
  EBP = (pop32());
  /* 1160da98 ret  */
  ESPCHK(0x1160da70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daa0 @ 0x1160daa0 (119 bytes, 34 insns) */
void f_1160daa0(void) {
  FTRACE(0x1160daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160daa1 mov ebp, esp */
  EBP = (ESP);
  /* 1160daa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160daa6 push 0x11630acc */
  push32((uint32_t)(0x11630accu));
  /* 1160daab call dword ptr [0x116333a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333a4))), 0x1160dab1u);
  /* 1160dab1 cmp dword ptr [0x11630abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dab8 je 0x1160dad8 */
  if (C.zf) goto L_1160dad8;
  /* 1160daba push 0x11630acc */
  push32((uint32_t)(0x11630accu));
  /* 1160dabf call dword ptr [0x11633394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633394))), 0x1160dac5u);
  /* 1160dac5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1160dac7 call 0x116085b0 */
  push32(0x1160daccu); f_116085b0();
  /* 1160dacc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160dacf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1160dad6 jmp 0x1160dadf */
  goto L_1160dadf;
L_1160dad8:;
  /* 1160dad8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1160dadf:;
  /* 1160dadf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1160dae3 push eax */
  push32((uint32_t)(EAX));
  /* 1160dae4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160dae7 push ecx */
  push32((uint32_t)(ECX));
  /* 1160dae8 call 0x1160db20 */
  push32(0x1160daedu); f_1160db20();
  /* 1160daed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160daf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160daf3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160daf7 je 0x1160db05 */
  if (C.zf) goto L_1160db05;
  /* 1160daf9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1160dafb call 0x11608650 */
  push32(0x1160db00u); f_11608650();
  /* 1160db00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160db03 jmp 0x1160db10 */
  goto L_1160db10;
L_1160db05:;
  /* 1160db05 push 0x11630acc */
  push32((uint32_t)(0x11630accu));
  /* 1160db0a call dword ptr [0x11633394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633394))), 0x1160db10u);
L_1160db10:;
  /* 1160db10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160db13 mov esp, ebp */
  ESP = (EBP);
  /* 1160db15 pop ebp */
  EBP = (pop32());
  /* 1160db16 ret  */
  ESPCHK(0x1160daa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db20 @ 0x1160db20 (160 bytes, 50 insns) */
void f_1160db20(void) {
  FTRACE(0x1160db20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160db20 push ebp */
  push32((uint32_t)(EBP));
  /* 1160db21 mov ebp, esp */
  EBP = (ESP);
  /* 1160db23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160db26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160db2a jne 0x1160db33 */
  if (!C.zf) goto L_1160db33;
  /* 1160db2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160db2e jmp 0x1160dbbc */
  goto L_1160dbbc;
L_1160db33:;
  /* 1160db33 cmp dword ptr [0x11630940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160db3a jne 0x1160db6a */
  if (!C.zf) goto L_1160db6a;
  /* 1160db3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160db3f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160db44 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160db49 jle 0x1160db5b */
  if ((C.zf||C.sf!=C.of)) goto L_1160db5b;
  /* 1160db4b call 0x1160ca80 */
  push32(0x1160db50u); f_1160ca80();
  /* 1160db50 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1160db56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160db59 jmp 0x1160dbbc */
  goto L_1160dbbc;
L_1160db5b:;
  /* 1160db5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160db5e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1160db61 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1160db63 mov eax, 1 */
  EAX = (0x1u);
  /* 1160db68 jmp 0x1160dbbc */
  goto L_1160dbbc;
L_1160db6a:;
  /* 1160db6a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1160db71 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1160db74 push eax */
  push32((uint32_t)(EAX));
  /* 1160db75 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160db77 mov ecx, dword ptr [0x1162eea4] */
  ECX = (r32((uint32_t)(0x1162eea4)));
  /* 1160db7d push ecx */
  push32((uint32_t)(ECX));
  /* 1160db7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160db81 push edx */
  push32((uint32_t)(EDX));
  /* 1160db82 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160db84 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1160db87 push eax */
  push32((uint32_t)(EAX));
  /* 1160db88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1160db8d mov ecx, dword ptr [0x11630950] */
  ECX = (r32((uint32_t)(0x11630950)));
  /* 1160db93 push ecx */
  push32((uint32_t)(ECX));
  /* 1160db94 call dword ptr [0x11633370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633370))), 0x1160db9au);
  /* 1160db9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160db9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dba1 je 0x1160dba9 */
  if (C.zf) goto L_1160dba9;
  /* 1160dba3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dba7 je 0x1160dbb9 */
  if (C.zf) goto L_1160dbb9;
L_1160dba9:;
  /* 1160dba9 call 0x1160ca80 */
  push32(0x1160dbaeu); f_1160ca80();
  /* 1160dbae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1160dbb4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160dbb7 jmp 0x1160dbbc */
  goto L_1160dbbc;
L_1160dbb9:;
  /* 1160dbb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1160dbbc:;
  /* 1160dbbc mov esp, ebp */
  ESP = (EBP);
  /* 1160dbbe pop ebp */
  EBP = (pop32());
  /* 1160dbbf ret  */
  ESPCHK(0x1160db20u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1160dbc0 (32 bytes, 18 insns) */
void f_1160dbc0(void) {
  FTRACE(0x1160dbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160dbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160dbc1 mov ebp, esp */
  EBP = (ESP);
  /* 1160dbc3 push ebx */
  push32((uint32_t)(EBX));
  /* 1160dbc4 push esi */
  push32((uint32_t)(ESI));
  /* 1160dbc5 push edi */
  push32((uint32_t)(EDI));
  /* 1160dbc6 push ebp */
  push32((uint32_t)(EBP));
  /* 1160dbc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160dbc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160dbcb push 0x1160dbd8 */
  push32((uint32_t)(0x1160dbd8u));
  /* 1160dbd0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1160dbd3 call 0x1161530c */
  push32(0x1160dbd8u); f_1161530c();
  /* 1160dbd8 pop ebp */
  EBP = (pop32());
  /* 1160dbd9 pop edi */
  EDI = (pop32());
  /* 1160dbda pop esi */
  ESI = (pop32());
  /* 1160dbdb pop ebx */
  EBX = (pop32());
  /* 1160dbdc mov esp, ebp */
  ESP = (EBP);
  /* 1160dbde pop ebp */
  EBP = (pop32());
  /* 1160dbdf ret  */
  ESPCHK(0x1160dbc0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1160dc02 (104 bytes, 33 insns) */
void f_1160dc02(void) {
  FTRACE(0x1160dc02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160dc02 push ebx */
  push32((uint32_t)(EBX));
  /* 1160dc03 push esi */
  push32((uint32_t)(ESI));
  /* 1160dc04 push edi */
  push32((uint32_t)(EDI));
  /* 1160dc05 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1160dc09 push eax */
  push32((uint32_t)(EAX));
  /* 1160dc0a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1160dc0c push 0x1160dbe0 */
  push32((uint32_t)(0x1160dbe0u));
  /* 1160dc11 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1160dc18 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1160dc1f:;
  /* 1160dc1f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1160dc23 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1160dc26 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1160dc29 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dc2c je 0x1160dc5c */
  if (C.zf) goto L_1160dc5c;
  /* 1160dc2e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dc32 je 0x1160dc5c */
  if (C.zf) goto L_1160dc5c;
  /* 1160dc34 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1160dc37 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1160dc3a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1160dc3e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1160dc41 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dc46 jne 0x1160dc5a */
  if (!C.zf) goto L_1160dc5a;
  /* 1160dc48 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1160dc4d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1160dc51 call 0x1160dc96 */
  push32(0x1160dc56u); f_1160dc96();
  /* 1160dc56 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1160dc5au);
L_1160dc5a:;
  /* 1160dc5a jmp 0x1160dc1f */
  goto L_1160dc1f;
L_1160dc5c:;
  /* 1160dc5c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1160dc63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160dc66 pop edi */
  EDI = (pop32());
  /* 1160dc67 pop esi */
  ESI = (pop32());
  /* 1160dc68 pop ebx */
  EBX = (pop32());
  /* 1160dc69 ret  */
  ESPCHK(0x1160dc02u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc96 @ 0x1160dc96 (24 bytes, 10 insns) */
void f_1160dc96(void) {
  FTRACE(0x1160dc96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160dc96 push ebx */
  push32((uint32_t)(EBX));
  /* 1160dc97 push ecx */
  push32((uint32_t)(ECX));
  /* 1160dc98 mov ebx, 0x1162f3b8 */
  EBX = (0x1162f3b8u);
  /* 1160dc9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160dca0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1160dca3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1160dca6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1160dca9 pop ecx */
  ECX = (pop32());
  /* 1160dcaa pop ebx */
  EBX = (pop32());
  /* 1160dcab ret 4 */
  ESPCHK(0x1160dc96u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dd75 @ 0x1160dd75 (27 bytes, 11 insns) */
void f_1160dd75(void) {
  FTRACE(0x1160dd75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160dd75 push ebp */
  push32((uint32_t)(EBP));
  /* 1160dd76 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1160dd7a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1160dd7c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1160dd7f push eax */
  push32((uint32_t)(EAX));
  /* 1160dd80 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1160dd83 push eax */
  push32((uint32_t)(EAX));
  /* 1160dd84 call 0x1160dc02 */
  push32(0x1160dd89u); f_1160dc02();
  /* 1160dd89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160dd8c pop ebp */
  EBP = (pop32());
  /* 1160dd8d ret 4 */
  ESPCHK(0x1160dd75u, _esp0);
  ESP += 8; return;
}

/* FUN_1000dd90 @ 0x1160dd90 (482 bytes, 138 insns) */
void f_1160dd90(void) {
  FTRACE(0x1160dd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160dd90 push ebp */
  push32((uint32_t)(EBP));
  /* 1160dd91 mov ebp, esp */
  EBP = (ESP);
  /* 1160dd93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160dd96 push esi */
  push32((uint32_t)(ESI));
  /* 1160dd97 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1160dd9e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1160dda0 call 0x116085b0 */
  push32(0x1160dda5u); f_116085b0();
  /* 1160dda5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160dda8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160ddaf jmp 0x1160ddba */
  goto L_1160ddba;
L_1160ddb1:;
  /* 1160ddb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ddb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ddb7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1160ddba:;
  /* 1160ddba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ddbe jge 0x1160df60 */
  if ((C.sf==C.of)) goto L_1160df60;
  /* 1160ddc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ddc7 cmp dword ptr [ecx*4 + 0x11632120], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11632120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ddcf je 0x1160dec6 */
  if (C.zf) goto L_1160dec6;
  /* 1160ddd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ddd8 mov eax, dword ptr [edx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11632120)));
  /* 1160dddf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160dde2 jmp 0x1160dded */
  goto L_1160dded;
L_1160dde4:;
  /* 1160dde4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160dde7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ddea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1160dded:;
  /* 1160dded mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ddf0 mov eax, dword ptr [edx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11632120)));
  /* 1160ddf7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ddfc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ddff jae 0x1160deb6 */
  if (!C.cf) goto L_1160deb6;
  /* 1160de05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de08 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1160de0c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1160de0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160de11 jne 0x1160deb1 */
  if (!C.zf) goto L_1160deb1;
  /* 1160de17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de1a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160de1e jne 0x1160de59 */
  if (!C.zf) goto L_1160de59;
  /* 1160de20 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1160de22 call 0x116085b0 */
  push32(0x1160de27u); f_116085b0();
  /* 1160de27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160de2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de2d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160de31 jne 0x1160de4f */
  if (!C.zf) goto L_1160de4f;
  /* 1160de33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de36 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160de39 push edx */
  push32((uint32_t)(EDX));
  /* 1160de3a call dword ptr [0x11633350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633350))), 0x1160de40u);
  /* 1160de40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de43 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1160de46 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160de49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de4c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1160de4f:;
  /* 1160de4f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1160de51 call 0x11608650 */
  push32(0x1160de56u); f_11608650();
  /* 1160de56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160de59:;
  /* 1160de59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de5c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160de5f push eax */
  push32((uint32_t)(EAX));
  /* 1160de60 call dword ptr [0x1163334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163334c))), 0x1160de66u);
  /* 1160de66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de69 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1160de6d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1160de70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160de72 je 0x1160de86 */
  if (C.zf) goto L_1160de86;
  /* 1160de74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de77 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160de7a push eax */
  push32((uint32_t)(EAX));
  /* 1160de7b call dword ptr [0x11633348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633348))), 0x1160de81u);
  /* 1160de81 jmp 0x1160dde4 */
  goto L_1160dde4;
L_1160de86:;
  /* 1160de86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de89 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1160de8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160de92 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160de95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160de98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160de9b sub eax, dword ptr [edx*4 + 0x11632120] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11632120))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160dea2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1160dea3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1160dea8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1160deaa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160deac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1160deaf jmp 0x1160deb6 */
  goto L_1160deb6;
L_1160deb1:;
  /* 1160deb1 jmp 0x1160dde4 */
  goto L_1160dde4;
L_1160deb6:;
  /* 1160deb6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160deba je 0x1160dec1 */
  if (C.zf) goto L_1160dec1;
  /* 1160debc jmp 0x1160df60 */
  goto L_1160df60;
L_1160dec1:;
  /* 1160dec1 jmp 0x1160df5b */
  goto L_1160df5b;
L_1160dec6:;
  /* 1160dec6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1160dec8 push 0x1162c004 */
  push32((uint32_t)(0x1162c004u));
  /* 1160decd push 2 */
  push32((uint32_t)(0x2u));
  /* 1160decf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1160ded4 call 0x11604bb0 */
  push32(0x1160ded9u); f_11604bb0();
  /* 1160ded9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160dedc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160dedf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dee3 je 0x1160df59 */
  if (C.zf) goto L_1160df59;
  /* 1160dee5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160dee8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160deeb mov dword ptr [eax*4 + 0x11632120], ecx */
  w32((uint32_t)(EAX*4 + 0x11632120), (ECX));
  /* 1160def2 mov edx, dword ptr [0x1163225c] */
  EDX = (r32((uint32_t)(0x1163225c)));
  /* 1160def8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160defb mov dword ptr [0x1163225c], edx */
  w32((uint32_t)(0x1163225c), (EDX));
  /* 1160df01 jmp 0x1160df0c */
  goto L_1160df0c;
L_1160df03:;
  /* 1160df03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160df06 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160df09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1160df0c:;
  /* 1160df0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160df0f mov edx, dword ptr [ecx*4 + 0x11632120] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160df16 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160df1c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160df1f jae 0x1160df44 */
  if (!C.cf) goto L_1160df44;
  /* 1160df21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160df24 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1160df28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160df2b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1160df31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160df34 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1160df38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160df3b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1160df42 jmp 0x1160df03 */
  goto L_1160df03;
L_1160df44:;
  /* 1160df44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160df47 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160df4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1160df4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160df50 push edx */
  push32((uint32_t)(EDX));
  /* 1160df51 call 0x1160e2a0 */
  push32(0x1160df56u); f_1160e2a0();
  /* 1160df56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160df59:;
  /* 1160df59 jmp 0x1160df60 */
  goto L_1160df60;
L_1160df5b:;
  /* 1160df5b jmp 0x1160ddb1 */
  goto L_1160ddb1;
L_1160df60:;
  /* 1160df60 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1160df62 call 0x11608650 */
  push32(0x1160df67u); f_11608650();
  /* 1160df67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160df6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160df6d pop esi */
  ESI = (pop32());
  /* 1160df6e mov esp, ebp */
  ESP = (EBP);
  /* 1160df70 pop ebp */
  EBP = (pop32());
  /* 1160df71 ret  */
  ESPCHK(0x1160dd90u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1160df80 (183 bytes, 57 insns) */
void f_1160df80(void) {
  FTRACE(0x1160df80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160df80 push ebp */
  push32((uint32_t)(EBP));
  /* 1160df81 mov ebp, esp */
  EBP = (ESP);
  /* 1160df83 push ecx */
  push32((uint32_t)(ECX));
  /* 1160df84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160df87 cmp eax, dword ptr [0x1163225c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1163225c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160df8d jae 0x1160e01a */
  if (!C.cf) goto L_1160e01a;
  /* 1160df93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160df96 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160df99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160df9c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160df9f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160dfa2 mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160dfa9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dfad jne 0x1160e01a */
  if (!C.zf) goto L_1160e01a;
  /* 1160dfaf cmp dword ptr [0x11630738], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630738))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dfb6 jne 0x1160dffa */
  if (!C.zf) goto L_1160dffa;
  /* 1160dfb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160dfbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1160dfbe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dfc2 je 0x1160dfd2 */
  if (C.zf) goto L_1160dfd2;
  /* 1160dfc4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dfc8 je 0x1160dfe0 */
  if (C.zf) goto L_1160dfe0;
  /* 1160dfca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160dfce je 0x1160dfee */
  if (C.zf) goto L_1160dfee;
  /* 1160dfd0 jmp 0x1160dffa */
  goto L_1160dffa;
L_1160dfd2:;
  /* 1160dfd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160dfd5 push edx */
  push32((uint32_t)(EDX));
  /* 1160dfd6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1160dfd8 call dword ptr [0x11633308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633308))), 0x1160dfdeu);
  /* 1160dfde jmp 0x1160dffa */
  goto L_1160dffa;
L_1160dfe0:;
  /* 1160dfe0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160dfe3 push eax */
  push32((uint32_t)(EAX));
  /* 1160dfe4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1160dfe6 call dword ptr [0x11633308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633308))), 0x1160dfecu);
  /* 1160dfec jmp 0x1160dffa */
  goto L_1160dffa;
L_1160dfee:;
  /* 1160dfee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160dff1 push ecx */
  push32((uint32_t)(ECX));
  /* 1160dff2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1160dff4 call dword ptr [0x11633308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633308))), 0x1160dffau);
L_1160dffa:;
  /* 1160dffa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160dffd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1160e000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e003 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1160e006 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e009 mov ecx, dword ptr [edx*4 + 0x11632120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11632120)));
  /* 1160e010 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e013 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1160e016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160e018 jmp 0x1160e033 */
  goto L_1160e033;
L_1160e01a:;
  /* 1160e01a call 0x1160ca80 */
  push32(0x1160e01fu); f_1160ca80();
  /* 1160e01f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1160e025 call 0x1160ca90 */
  push32(0x1160e02au); f_1160ca90();
  /* 1160e02a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1160e030 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1160e033:;
  /* 1160e033 mov esp, ebp */
  ESP = (EBP);
  /* 1160e035 pop ebp */
  EBP = (pop32());
  /* 1160e036 ret  */
  ESPCHK(0x1160df80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e040 @ 0x1160e040 (216 bytes, 63 insns) */
void f_1160e040(void) {
  FTRACE(0x1160e040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e040 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e041 mov ebp, esp */
  EBP = (ESP);
  /* 1160e043 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e047 cmp eax, dword ptr [0x1163225c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1163225c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e04d jae 0x1160e0fb */
  if (!C.cf) goto L_1160e0fb;
  /* 1160e053 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e056 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160e059 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e05c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160e05f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e062 mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160e069 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1160e06e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1160e071 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160e073 je 0x1160e0fb */
  if (C.zf) goto L_1160e0fb;
  /* 1160e079 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e07c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1160e07f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e082 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1160e085 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e088 mov ecx, dword ptr [edx*4 + 0x11632120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11632120)));
  /* 1160e08f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e093 je 0x1160e0fb */
  if (C.zf) goto L_1160e0fb;
  /* 1160e095 cmp dword ptr [0x11630738], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11630738))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e09c jne 0x1160e0da */
  if (!C.zf) goto L_1160e0da;
  /* 1160e09e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e0a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160e0a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e0a8 je 0x1160e0b8 */
  if (C.zf) goto L_1160e0b8;
  /* 1160e0aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e0ae je 0x1160e0c4 */
  if (C.zf) goto L_1160e0c4;
  /* 1160e0b0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e0b4 je 0x1160e0d0 */
  if (C.zf) goto L_1160e0d0;
  /* 1160e0b6 jmp 0x1160e0da */
  goto L_1160e0da;
L_1160e0b8:;
  /* 1160e0b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160e0ba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1160e0bc call dword ptr [0x11633308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633308))), 0x1160e0c2u);
  /* 1160e0c2 jmp 0x1160e0da */
  goto L_1160e0da;
L_1160e0c4:;
  /* 1160e0c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160e0c6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1160e0c8 call dword ptr [0x11633308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633308))), 0x1160e0ceu);
  /* 1160e0ce jmp 0x1160e0da */
  goto L_1160e0da;
L_1160e0d0:;
  /* 1160e0d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160e0d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1160e0d4 call dword ptr [0x11633308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633308))), 0x1160e0dau);
L_1160e0da:;
  /* 1160e0da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e0dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160e0e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e0e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160e0e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e0e9 mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160e0f0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1160e0f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160e0f9 jmp 0x1160e114 */
  goto L_1160e114;
L_1160e0fb:;
  /* 1160e0fb call 0x1160ca80 */
  push32(0x1160e100u); f_1160ca80();
  /* 1160e100 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1160e106 call 0x1160ca90 */
  push32(0x1160e10bu); f_1160ca90();
  /* 1160e10b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1160e111 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1160e114:;
  /* 1160e114 mov esp, ebp */
  ESP = (EBP);
  /* 1160e116 pop ebp */
  EBP = (pop32());
  /* 1160e117 ret  */
  ESPCHK(0x1160e040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e120 @ 0x1160e120 (102 bytes, 30 insns) */
void f_1160e120(void) {
  FTRACE(0x1160e120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e120 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e121 mov ebp, esp */
  EBP = (ESP);
  /* 1160e123 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e126 cmp eax, dword ptr [0x1163225c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1163225c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e12c jae 0x1160e16b */
  if (!C.cf) goto L_1160e16b;
  /* 1160e12e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e131 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1160e134 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e137 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1160e13a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e13d mov eax, dword ptr [ecx*4 + 0x11632120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11632120)));
  /* 1160e144 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1160e149 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1160e14c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160e14e je 0x1160e16b */
  if (C.zf) goto L_1160e16b;
  /* 1160e150 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e153 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1160e156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e159 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1160e15c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e15f mov ecx, dword ptr [edx*4 + 0x11632120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11632120)));
  /* 1160e166 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1160e169 jmp 0x1160e184 */
  goto L_1160e184;
L_1160e16b:;
  /* 1160e16b call 0x1160ca80 */
  push32(0x1160e170u); f_1160ca80();
  /* 1160e170 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1160e176 call 0x1160ca90 */
  push32(0x1160e17bu); f_1160ca90();
  /* 1160e17b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1160e181 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1160e184:;
  /* 1160e184 pop ebp */
  EBP = (pop32());
  /* 1160e185 ret  */
  ESPCHK(0x1160e120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x1160e190 (260 bytes, 83 insns) */
void f_1160e190(void) {
  FTRACE(0x1160e190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e190 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e191 mov ebp, esp */
  EBP = (ESP);
  /* 1160e193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e196 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160e19a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e19d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1160e1a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160e1a2 je 0x1160e1ad */
  if (C.zf) goto L_1160e1ad;
  /* 1160e1a4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1160e1a7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1160e1aa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1160e1ad:;
  /* 1160e1ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e1b0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1160e1b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160e1b8 je 0x1160e1c2 */
  if (C.zf) goto L_1160e1c2;
  /* 1160e1ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1160e1bd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1160e1bf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1160e1c2:;
  /* 1160e1c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e1c5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1160e1cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160e1cd je 0x1160e1d8 */
  if (C.zf) goto L_1160e1d8;
  /* 1160e1cf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1160e1d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1160e1d5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1160e1d8:;
  /* 1160e1d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e1db push eax */
  push32((uint32_t)(EAX));
  /* 1160e1dc call dword ptr [0x116333d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333d8))), 0x1160e1e2u);
  /* 1160e1e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160e1e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e1e9 jne 0x1160e202 */
  if (!C.zf) goto L_1160e202;
  /* 1160e1eb call dword ptr [0x116333b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333b4))), 0x1160e1f1u);
  /* 1160e1f1 push eax */
  push32((uint32_t)(EAX));
  /* 1160e1f2 call 0x1160c9e0 */
  push32(0x1160e1f7u); f_1160c9e0();
  /* 1160e1f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e1fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160e1fd jmp 0x1160e290 */
  goto L_1160e290;
L_1160e202:;
  /* 1160e202 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e206 jne 0x1160e213 */
  if (!C.zf) goto L_1160e213;
  /* 1160e208 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1160e20b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1160e20e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1160e211 jmp 0x1160e222 */
  goto L_1160e222;
L_1160e213:;
  /* 1160e213 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e217 jne 0x1160e222 */
  if (!C.zf) goto L_1160e222;
  /* 1160e219 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1160e21c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1160e21f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1160e222:;
  /* 1160e222 call 0x1160dd90 */
  push32(0x1160e227u); f_1160dd90();
  /* 1160e227 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160e22a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e22e jne 0x1160e24b */
  if (!C.zf) goto L_1160e24b;
  /* 1160e230 call 0x1160ca80 */
  push32(0x1160e235u); f_1160ca80();
  /* 1160e235 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1160e23b call 0x1160ca90 */
  push32(0x1160e240u); f_1160ca90();
  /* 1160e240 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1160e246 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160e249 jmp 0x1160e290 */
  goto L_1160e290;
L_1160e24b:;
  /* 1160e24b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e24e push eax */
  push32((uint32_t)(EAX));
  /* 1160e24f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e252 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e253 call 0x1160df80 */
  push32(0x1160e258u); f_1160df80();
  /* 1160e258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e25b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1160e25e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1160e261 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1160e264 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e267 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160e26a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e26d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160e270 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e273 mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160e27a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1160e27d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1160e281 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e284 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e285 call 0x1160e330 */
  push32(0x1160e28au); f_1160e330();
  /* 1160e28a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e28d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1160e290:;
  /* 1160e290 mov esp, ebp */
  ESP = (EBP);
  /* 1160e292 pop ebp */
  EBP = (pop32());
  /* 1160e293 ret  */
  ESPCHK(0x1160e190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2a0 @ 0x1160e2a0 (134 bytes, 44 insns) */
void f_1160e2a0(void) {
  FTRACE(0x1160e2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1160e2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e2a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160e2aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e2ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160e2b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e2b3 mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160e2ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e2bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1160e2bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e2c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e2c6 jne 0x1160e301 */
  if (!C.zf) goto L_1160e301;
  /* 1160e2c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1160e2ca call 0x116085b0 */
  push32(0x1160e2cfu); f_116085b0();
  /* 1160e2cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e2d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e2d5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e2d9 jne 0x1160e2f7 */
  if (!C.zf) goto L_1160e2f7;
  /* 1160e2db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e2de add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e2e1 push edx */
  push32((uint32_t)(EDX));
  /* 1160e2e2 call dword ptr [0x11633350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633350))), 0x1160e2e8u);
  /* 1160e2e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e2eb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1160e2ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e2f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e2f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1160e2f7:;
  /* 1160e2f7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1160e2f9 call 0x11608650 */
  push32(0x1160e2feu); f_11608650();
  /* 1160e2fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160e301:;
  /* 1160e301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e304 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160e307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e30a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160e30d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e310 mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160e317 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1160e31b push eax */
  push32((uint32_t)(EAX));
  /* 1160e31c call dword ptr [0x1163334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1163334c))), 0x1160e322u);
  /* 1160e322 mov esp, ebp */
  ESP = (EBP);
  /* 1160e324 pop ebp */
  EBP = (pop32());
  /* 1160e325 ret  */
  ESPCHK(0x1160e2a0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1160e330 (38 bytes, 13 insns) */
void f_1160e330(void) {
  FTRACE(0x1160e330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e330 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e331 mov ebp, esp */
  EBP = (ESP);
  /* 1160e333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e336 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1160e339 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e33c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1160e33f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e342 mov edx, dword ptr [eax*4 + 0x11632120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11632120)));
  /* 1160e349 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1160e34d push eax */
  push32((uint32_t)(EAX));
  /* 1160e34e call dword ptr [0x11633348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633348))), 0x1160e354u);
  /* 1160e354 pop ebp */
  EBP = (pop32());
  /* 1160e355 ret  */
  ESPCHK(0x1160e330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e360 @ 0x1160e360 (218 bytes, 63 insns) */
void f_1160e360(void) {
  FTRACE(0x1160e360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e360 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e361 mov ebp, esp */
  EBP = (ESP);
  /* 1160e363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e366 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160e36d push 2 */
  push32((uint32_t)(0x2u));
  /* 1160e36f call 0x116085b0 */
  push32(0x1160e374u); f_116085b0();
  /* 1160e374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e377 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1160e37e jmp 0x1160e389 */
  goto L_1160e389;
L_1160e380:;
  /* 1160e380 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e383 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e386 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1160e389:;
  /* 1160e389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e38c cmp ecx, dword ptr [0x11631e20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11631e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e392 jge 0x1160e429 */
  if ((C.sf==C.of)) goto L_1160e429;
  /* 1160e398 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e39b mov eax, dword ptr [0x11630ad0] */
  EAX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e3a0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e3a4 je 0x1160e424 */
  if (C.zf) goto L_1160e424;
  /* 1160e3a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e3a9 mov edx, dword ptr [0x11630ad0] */
  EDX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e3af mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1160e3b2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160e3b5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1160e3bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160e3bd je 0x1160e3e1 */
  if (C.zf) goto L_1160e3e1;
  /* 1160e3bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e3c2 mov eax, dword ptr [0x11630ad0] */
  EAX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e3c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1160e3ca push ecx */
  push32((uint32_t)(ECX));
  /* 1160e3cb call 0x1160f150 */
  push32(0x1160e3d0u); f_1160f150();
  /* 1160e3d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e3d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e3d6 je 0x1160e3e1 */
  if (C.zf) goto L_1160e3e1;
  /* 1160e3d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e3db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e3de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1160e3e1:;
  /* 1160e3e1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e3e5 jl 0x1160e424 */
  if ((C.sf!=C.of)) goto L_1160e424;
  /* 1160e3e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e3ea mov ecx, dword ptr [0x11630ad0] */
  ECX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e3f0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1160e3f3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e3f6 push edx */
  push32((uint32_t)(EDX));
  /* 1160e3f7 call dword ptr [0x116333e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116333e0))), 0x1160e3fdu);
  /* 1160e3fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1160e3ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e402 mov ecx, dword ptr [0x11630ad0] */
  ECX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e408 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1160e40b push edx */
  push32((uint32_t)(EDX));
  /* 1160e40c call 0x11605640 */
  push32(0x1160e411u); f_11605640();
  /* 1160e411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e414 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e417 mov ecx, dword ptr [0x11630ad0] */
  ECX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e41d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1160e424:;
  /* 1160e424 jmp 0x1160e380 */
  goto L_1160e380;
L_1160e429:;
  /* 1160e429 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160e42b call 0x11608650 */
  push32(0x1160e430u); f_11608650();
  /* 1160e430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e433 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e436 mov esp, ebp */
  ESP = (EBP);
  /* 1160e438 pop ebp */
  EBP = (pop32());
  /* 1160e439 ret  */
  ESPCHK(0x1160e360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e440 @ 0x1160e440 (68 bytes, 26 insns) */
void f_1160e440(void) {
  FTRACE(0x1160e440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e440 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e441 mov ebp, esp */
  EBP = (ESP);
  /* 1160e443 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e444 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e448 jne 0x1160e456 */
  if (!C.zf) goto L_1160e456;
  /* 1160e44a push 0 */
  push32((uint32_t)(0x0u));
  /* 1160e44c call 0x1160e5b0 */
  push32(0x1160e451u); f_1160e5b0();
  /* 1160e451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e454 jmp 0x1160e480 */
  goto L_1160e480;
L_1160e456:;
  /* 1160e456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e459 push eax */
  push32((uint32_t)(EAX));
  /* 1160e45a call 0x1160d9c0 */
  push32(0x1160e45fu); f_1160d9c0();
  /* 1160e45f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e465 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e466 call 0x1160e490 */
  push32(0x1160e46bu); f_1160e490();
  /* 1160e46b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e46e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1160e471 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e474 push edx */
  push32((uint32_t)(EDX));
  /* 1160e475 call 0x1160da30 */
  push32(0x1160e47au); f_1160da30();
  /* 1160e47a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e47d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1160e480:;
  /* 1160e480 mov esp, ebp */
  ESP = (EBP);
  /* 1160e482 pop ebp */
  EBP = (pop32());
  /* 1160e483 ret  */
  ESPCHK(0x1160e440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e490 @ 0x1160e490 (65 bytes, 26 insns) */
void f_1160e490(void) {
  FTRACE(0x1160e490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e490 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e491 mov ebp, esp */
  EBP = (ESP);
  /* 1160e493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e496 push eax */
  push32((uint32_t)(EAX));
  /* 1160e497 call 0x1160e4e0 */
  push32(0x1160e49cu); f_1160e4e0();
  /* 1160e49c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e49f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160e4a1 je 0x1160e4a8 */
  if (C.zf) goto L_1160e4a8;
  /* 1160e4a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1160e4a6 jmp 0x1160e4cf */
  goto L_1160e4cf;
L_1160e4a8:;
  /* 1160e4a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e4ab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160e4ae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1160e4b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160e4b6 je 0x1160e4cd */
  if (C.zf) goto L_1160e4cd;
  /* 1160e4b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e4bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1160e4be push ecx */
  push32((uint32_t)(ECX));
  /* 1160e4bf call 0x1160f2a0 */
  push32(0x1160e4c4u); f_1160f2a0();
  /* 1160e4c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e4c7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1160e4c9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e4cb jmp 0x1160e4cf */
  goto L_1160e4cf;
L_1160e4cd:;
  /* 1160e4cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1160e4cf:;
  /* 1160e4cf pop ebp */
  EBP = (pop32());
  /* 1160e4d0 ret  */
  ESPCHK(0x1160e490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4e0 @ 0x1160e4e0 (183 bytes, 62 insns) */
void f_1160e4e0(void) {
  FTRACE(0x1160e4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1160e4e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e4e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160e4ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e4f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160e4f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e4f6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160e4f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1160e4fc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e4ff jne 0x1160e57b */
  if (!C.zf) goto L_1160e57b;
  /* 1160e501 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e504 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160e507 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1160e50d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160e50f je 0x1160e57b */
  if (C.zf) goto L_1160e57b;
  /* 1160e511 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e514 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e517 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1160e519 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e51c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1160e51f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e523 jle 0x1160e57b */
  if ((C.zf||C.sf!=C.of)) goto L_1160e57b;
  /* 1160e525 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e528 push edx */
  push32((uint32_t)(EDX));
  /* 1160e529 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e52c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1160e52f push ecx */
  push32((uint32_t)(ECX));
  /* 1160e530 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e533 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1160e536 push eax */
  push32((uint32_t)(EAX));
  /* 1160e537 call 0x1160d450 */
  push32(0x1160e53cu); f_1160d450();
  /* 1160e53c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e53f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e542 jne 0x1160e565 */
  if (!C.zf) goto L_1160e565;
  /* 1160e544 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e547 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160e54a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1160e550 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160e552 je 0x1160e563 */
  if (C.zf) goto L_1160e563;
  /* 1160e554 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e557 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160e55a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1160e55d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e560 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1160e563:;
  /* 1160e563 jmp 0x1160e57b */
  goto L_1160e57b;
L_1160e565:;
  /* 1160e565 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e568 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160e56b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1160e56e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e571 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1160e574 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1160e57b:;
  /* 1160e57b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e57e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e581 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1160e584 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1160e586 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1160e589 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1160e590 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e593 mov esp, ebp */
  ESP = (EBP);
  /* 1160e595 pop ebp */
  EBP = (pop32());
  /* 1160e596 ret  */
  ESPCHK(0x1160e4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5a0 @ 0x1160e5a0 (15 bytes, 7 insns) */
void f_1160e5a0(void) {
  FTRACE(0x1160e5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1160e5a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160e5a5 call 0x1160e5b0 */
  push32(0x1160e5aau); f_1160e5b0();
  /* 1160e5aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e5ad pop ebp */
  EBP = (pop32());
  /* 1160e5ae ret  */
  ESPCHK(0x1160e5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5b0 @ 0x1160e5b0 (319 bytes, 94 insns) */
void f_1160e5b0(void) {
  FTRACE(0x1160e5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1160e5b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e5b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1160e5bd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1160e5c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160e5c6 call 0x116085b0 */
  push32(0x1160e5cbu); f_116085b0();
  /* 1160e5cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e5ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160e5d5 jmp 0x1160e5e0 */
  goto L_1160e5e0;
L_1160e5d7:;
  /* 1160e5d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e5da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e5dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1160e5e0:;
  /* 1160e5e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e5e3 cmp ecx, dword ptr [0x11631e20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11631e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e5e9 jge 0x1160e6d3 */
  if ((C.sf==C.of)) goto L_1160e6d3;
  /* 1160e5ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e5f2 mov eax, dword ptr [0x11630ad0] */
  EAX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e5f7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e5fb je 0x1160e6ce */
  if (C.zf) goto L_1160e6ce;
  /* 1160e601 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e604 mov edx, dword ptr [0x11630ad0] */
  EDX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e60a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1160e60d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1160e610 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1160e616 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1160e618 je 0x1160e6ce */
  if (C.zf) goto L_1160e6ce;
  /* 1160e61e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e621 mov eax, dword ptr [0x11630ad0] */
  EAX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e626 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1160e629 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e62a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e62d push edx */
  push32((uint32_t)(EDX));
  /* 1160e62e call 0x1160da00 */
  push32(0x1160e633u); f_1160da00();
  /* 1160e633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e636 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e639 mov ecx, dword ptr [0x11630ad0] */
  ECX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e63f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1160e642 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1160e645 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1160e64a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160e64c je 0x1160e6b5 */
  if (C.zf) goto L_1160e6b5;
  /* 1160e64e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e652 jne 0x1160e679 */
  if (!C.zf) goto L_1160e679;
  /* 1160e654 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e657 mov edx, dword ptr [0x11630ad0] */
  EDX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e65d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1160e660 push eax */
  push32((uint32_t)(EAX));
  /* 1160e661 call 0x1160e490 */
  push32(0x1160e666u); f_1160e490();
  /* 1160e666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e669 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e66c je 0x1160e677 */
  if (C.zf) goto L_1160e677;
  /* 1160e66e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e671 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e674 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1160e677:;
  /* 1160e677 jmp 0x1160e6b5 */
  goto L_1160e6b5;
L_1160e679:;
  /* 1160e679 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e67d jne 0x1160e6b5 */
  if (!C.zf) goto L_1160e6b5;
  /* 1160e67f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e682 mov eax, dword ptr [0x11630ad0] */
  EAX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e687 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1160e68a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1160e68d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1160e690 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1160e692 je 0x1160e6b5 */
  if (C.zf) goto L_1160e6b5;
  /* 1160e694 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e697 mov ecx, dword ptr [0x11630ad0] */
  ECX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e69d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1160e6a0 push edx */
  push32((uint32_t)(EDX));
  /* 1160e6a1 call 0x1160e490 */
  push32(0x1160e6a6u); f_1160e490();
  /* 1160e6a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e6a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e6ac jne 0x1160e6b5 */
  if (!C.zf) goto L_1160e6b5;
  /* 1160e6ae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1160e6b5:;
  /* 1160e6b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e6b8 mov ecx, dword ptr [0x11630ad0] */
  ECX = (r32((uint32_t)(0x11630ad0)));
  /* 1160e6be mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1160e6c1 push edx */
  push32((uint32_t)(EDX));
  /* 1160e6c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e6c5 push eax */
  push32((uint32_t)(EAX));
  /* 1160e6c6 call 0x1160da70 */
  push32(0x1160e6cbu); f_1160da70();
  /* 1160e6cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1160e6ce:;
  /* 1160e6ce jmp 0x1160e5d7 */
  goto L_1160e5d7;
L_1160e6d3:;
  /* 1160e6d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160e6d5 call 0x11608650 */
  push32(0x1160e6dau); f_11608650();
  /* 1160e6da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e6dd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e6e1 jne 0x1160e6e8 */
  if (!C.zf) goto L_1160e6e8;
  /* 1160e6e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1160e6e6 jmp 0x1160e6eb */
  goto L_1160e6eb;
L_1160e6e8:;
  /* 1160e6e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1160e6eb:;
  /* 1160e6eb mov esp, ebp */
  ESP = (EBP);
  /* 1160e6ed pop ebp */
  EBP = (pop32());
  /* 1160e6ee ret  */
  ESPCHK(0x1160e5b0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1160e6f0 (15 bytes, 7 insns) */
void f_1160e6f0(void) {
  FTRACE(0x1160e6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1160e6f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1160e6f5 call 0x11603b20 */
  push32(0x1160e6fau); f_11603b20();
  /* 1160e6fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e6fd pop ebp */
  EBP = (pop32());
  /* 1160e6fe ret  */
  ESPCHK(0x1160e6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x1160e700 (1007 bytes, 269 insns) */
void f_1160e700(void) {
  FTRACE(0x1160e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1160e700 push ebp */
  push32((uint32_t)(EBP));
  /* 1160e701 mov ebp, esp */
  EBP = (ESP);
  /* 1160e703 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e709 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e70d jl 0x1160e715 */
  if ((C.sf!=C.of)) goto L_1160e715;
  /* 1160e70f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e713 jle 0x1160e71c */
  if ((C.zf||C.sf!=C.of)) goto L_1160e71c;
L_1160e715:;
  /* 1160e715 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160e717 jmp 0x1160eaeb */
  goto L_1160eaeb;
L_1160e71c:;
  /* 1160e71c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1160e71e call 0x116085b0 */
  push32(0x1160e723u); f_116085b0();
  /* 1160e723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e726 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1160e72d mov eax, dword ptr [0x11630abc] */
  EAX = (r32((uint32_t)(0x11630abc)));
  /* 1160e732 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e735 mov dword ptr [0x11630abc], eax */
  w32((uint32_t)(0x11630abc), (EAX));
L_1160e73a:;
  /* 1160e73a cmp dword ptr [0x11630acc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11630acc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e741 je 0x1160e74d */
  if (C.zf) goto L_1160e74d;
  /* 1160e743 push 1 */
  push32((uint32_t)(0x1u));
  /* 1160e745 call dword ptr [0x11633304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11633304))), 0x1160e74bu);
  /* 1160e74b jmp 0x1160e73a */
  goto L_1160e73a;
L_1160e74d:;
  /* 1160e74d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e751 je 0x1160e791 */
  if (C.zf) goto L_1160e791;
  /* 1160e753 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e757 je 0x1160e771 */
  if (C.zf) goto L_1160e771;
  /* 1160e759 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e75c push ecx */
  push32((uint32_t)(ECX));
  /* 1160e75d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e760 push edx */
  push32((uint32_t)(EDX));
  /* 1160e761 call 0x1160eaf0 */
  push32(0x1160e766u); f_1160eaf0();
  /* 1160e766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e769 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1160e76f jmp 0x1160e783 */
  goto L_1160e783;
L_1160e771:;
  /* 1160e771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e774 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e777 mov ecx, dword ptr [eax + 0x1162f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1162f4dc)));
  /* 1160e77d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1160e783:;
  /* 1160e783 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1160e789 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1160e78c jmp 0x1160eacb */
  goto L_1160eacb;
L_1160e791:;
  /* 1160e791 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1160e798 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1160e79f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e7a3 je 0x1160eac3 */
  if (C.zf) goto L_1160eac3;
  /* 1160e7a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e7ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160e7af cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e7b2 jne 0x1160e9d4 */
  if (!C.zf) goto L_1160e9d4;
  /* 1160e7b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e7bb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1160e7bf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e7c2 jne 0x1160e9d4 */
  if (!C.zf) goto L_1160e9d4;
  /* 1160e7c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e7cb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1160e7cf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e7d2 jne 0x1160e9d4 */
  if (!C.zf) goto L_1160e9d4;
  /* 1160e7d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e7db mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1160e7e1:;
  /* 1160e7e1 push 0x1162c054 */
  push32((uint32_t)(0x1162c054u));
  /* 1160e7e6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1160e7ec push ecx */
  push32((uint32_t)(ECX));
  /* 1160e7ed call 0x11610950 */
  push32(0x1160e7f2u); f_11610950();
  /* 1160e7f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e7f5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1160e7fb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e802 je 0x1160e82d */
  if (C.zf) goto L_1160e82d;
  /* 1160e804 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1160e80a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e810 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1160e816 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e81d je 0x1160e82d */
  if (C.zf) goto L_1160e82d;
  /* 1160e81f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1160e825 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160e828 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e82b jne 0x1160e853 */
  if (!C.zf) goto L_1160e853;
L_1160e82d:;
  /* 1160e82d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e831 je 0x1160e84c */
  if (C.zf) goto L_1160e84c;
  /* 1160e833 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1160e835 call 0x11608650 */
  push32(0x1160e83au); f_11608650();
  /* 1160e83a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e83d mov edx, dword ptr [0x11630abc] */
  EDX = (r32((uint32_t)(0x11630abc)));
  /* 1160e843 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e846 mov dword ptr [0x11630abc], edx */
  w32((uint32_t)(0x11630abc), (EDX));
L_1160e84c:;
  /* 1160e84c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160e84e jmp 0x1160eaeb */
  goto L_1160eaeb;
L_1160e853:;
  /* 1160e853 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1160e85a jmp 0x1160e865 */
  goto L_1160e865;
L_1160e85c:;
  /* 1160e85c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160e85f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e862 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1160e865:;
  /* 1160e865 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e869 jg 0x1160e8b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1160e8b3;
  /* 1160e86b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1160e871 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e872 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1160e878 push edx */
  push32((uint32_t)(EDX));
  /* 1160e879 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160e87c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e87f mov ecx, dword ptr [eax + 0x1162f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1162f4d8)));
  /* 1160e885 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e886 call 0x11610910 */
  push32(0x1160e88bu); f_11610910();
  /* 1160e88b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e88e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160e890 jne 0x1160e8b1 */
  if (!C.zf) goto L_1160e8b1;
  /* 1160e892 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160e895 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160e898 mov eax, dword ptr [edx + 0x1162f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1162f4d8)));
  /* 1160e89e push eax */
  push32((uint32_t)(EAX));
  /* 1160e89f call 0x116079e0 */
  push32(0x1160e8a4u); f_116079e0();
  /* 1160e8a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e8a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e8ad jne 0x1160e8b1 */
  if (!C.zf) goto L_1160e8b1;
  /* 1160e8af jmp 0x1160e8b3 */
  goto L_1160e8b3;
L_1160e8b1:;
  /* 1160e8b1 jmp 0x1160e85c */
  goto L_1160e85c;
L_1160e8b3:;
  /* 1160e8b3 push 0x1162c050 */
  push32((uint32_t)(0x1162c050u));
  /* 1160e8b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1160e8be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e8c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1160e8c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1160e8cd push edx */
  push32((uint32_t)(EDX));
  /* 1160e8ce call 0x116108d0 */
  push32(0x1160e8d3u); f_116108d0();
  /* 1160e8d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e8d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1160e8dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e8e3 jne 0x1160e919 */
  if (!C.zf) goto L_1160e919;
  /* 1160e8e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1160e8eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1160e8ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e8f1 je 0x1160e919 */
  if (C.zf) goto L_1160e919;
  /* 1160e8f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e8f7 je 0x1160e912 */
  if (C.zf) goto L_1160e912;
  /* 1160e8f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1160e8fb call 0x11608650 */
  push32(0x1160e900u); f_11608650();
  /* 1160e900 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e903 mov edx, dword ptr [0x11630abc] */
  EDX = (r32((uint32_t)(0x11630abc)));
  /* 1160e909 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160e90c mov dword ptr [0x11630abc], edx */
  w32((uint32_t)(0x11630abc), (EDX));
L_1160e912:;
  /* 1160e912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1160e914 jmp 0x1160eaeb */
  goto L_1160eaeb;
L_1160e919:;
  /* 1160e919 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e91d jg 0x1160e96a */
  if ((!C.zf&&C.sf==C.of)) goto L_1160e96a;
  /* 1160e91f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1160e925 push eax */
  push32((uint32_t)(EAX));
  /* 1160e926 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1160e92c push ecx */
  push32((uint32_t)(ECX));
  /* 1160e92d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1160e933 push edx */
  push32((uint32_t)(EDX));
  /* 1160e934 call 0x116083d0 */
  push32(0x1160e939u); f_116083d0();
  /* 1160e939 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e93c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1160e942 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1160e94a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1160e950 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e951 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160e954 push edx */
  push32((uint32_t)(EDX));
  /* 1160e955 call 0x1160eaf0 */
  push32(0x1160e95au); f_1160eaf0();
  /* 1160e95a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e95d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160e95f je 0x1160e96a */
  if (C.zf) goto L_1160e96a;
  /* 1160e961 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160e964 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e967 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1160e96a:;
  /* 1160e96a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1160e970 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e976 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1160e97c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1160e982 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1160e985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160e987 je 0x1160e998 */
  if (C.zf) goto L_1160e998;
  /* 1160e989 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1160e98f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e992 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1160e998:;
  /* 1160e998 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1160e99e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1160e9a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160e9a3 jne 0x1160e7e1 */
  if (!C.zf) goto L_1160e7e1;
  /* 1160e9a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e9ad je 0x1160e9bc */
  if (C.zf) goto L_1160e9bc;
  /* 1160e9af call 0x1160ec90 */
  push32(0x1160e9b4u); f_1160ec90();
  /* 1160e9b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1160e9ba jmp 0x1160e9c6 */
  goto L_1160e9c6;
L_1160e9bc:;
  /* 1160e9bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1160e9c6:;
  /* 1160e9c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1160e9cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1160e9cf jmp 0x1160eac1 */
  goto L_1160eac1;
L_1160e9d4:;
  /* 1160e9d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1160e9d7 push edx */
  push32((uint32_t)(EDX));
  /* 1160e9d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1160e9da push 0 */
  push32((uint32_t)(0x0u));
  /* 1160e9dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1160e9e2 push eax */
  push32((uint32_t)(EAX));
  /* 1160e9e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1160e9e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1160e9e7 call 0x1160ed90 */
  push32(0x1160e9ecu); f_1160ed90();
  /* 1160e9ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160e9ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160e9f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160e9f6 je 0x1160eac1 */
  if (C.zf) goto L_1160eac1;
  /* 1160e9fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1160ea03 jmp 0x1160ea0e */
  goto L_1160ea0e;
L_1160ea05:;
  /* 1160ea05 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160ea08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ea0b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1160ea0e:;
  /* 1160ea0e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ea12 jg 0x1160ea70 */
  if ((!C.zf&&C.sf==C.of)) goto L_1160ea70;
  /* 1160ea14 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ea18 je 0x1160ea6e */
  if (C.zf) goto L_1160ea6e;
  /* 1160ea1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160ea1d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1160ea20 mov ecx, dword ptr [eax + 0x1162f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1162f4dc)));
  /* 1160ea26 push ecx */
  push32((uint32_t)(ECX));
  /* 1160ea27 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1160ea2d push edx */
  push32((uint32_t)(EDX));
  /* 1160ea2e call 0x11610840 */
  push32(0x1160ea33u); f_11610840();
  /* 1160ea33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ea36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ea38 je 0x1160ea65 */
  if (C.zf) goto L_1160ea65;
  /* 1160ea3a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1160ea40 push eax */
  push32((uint32_t)(EAX));
  /* 1160ea41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1160ea44 push ecx */
  push32((uint32_t)(ECX));
  /* 1160ea45 call 0x1160eaf0 */
  push32(0x1160ea4au); f_1160eaf0();
  /* 1160ea4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ea4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1160ea4f je 0x1160ea5c */
  if (C.zf) goto L_1160ea5c;
  /* 1160ea51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ea54 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ea57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1160ea5a jmp 0x1160ea63 */
  goto L_1160ea63;
L_1160ea5c:;
  /* 1160ea5c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1160ea63:;
  /* 1160ea63 jmp 0x1160ea6e */
  goto L_1160ea6e;
L_1160ea65:;
  /* 1160ea65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1160ea68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ea6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1160ea6e:;
  /* 1160ea6e jmp 0x1160ea05 */
  goto L_1160ea05;
L_1160ea70:;
  /* 1160ea70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ea74 je 0x1160ea9b */
  if (C.zf) goto L_1160ea9b;
  /* 1160ea76 call 0x1160ec90 */
  push32(0x1160ea7bu); f_1160ec90();
  /* 1160ea7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1160ea7e push 2 */
  push32((uint32_t)(0x2u));
  /* 1160ea80 mov ecx, dword ptr [0x1162f4dc] */
  ECX = (r32((uint32_t)(0x1162f4dc)));
  /* 1160ea86 push ecx */
  push32((uint32_t)(ECX));
  /* 1160ea87 call 0x11605640 */
  push32(0x1160ea8cu); f_11605640();
  /* 1160ea8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160ea8f mov dword ptr [0x1162f4dc], 0 */
  w32((uint32_t)(0x1162f4dc), (0x0u));
  /* 1160ea99 jmp 0x1160eac1 */
  goto L_1160eac1;
L_1160ea9b:;
  /* 1160ea9b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160ea9f je 0x1160eaae */
  if (C.zf) goto L_1160eaae;
  /* 1160eaa1 call 0x1160ec90 */
  push32(0x1160eaa6u); f_1160ec90();
  /* 1160eaa6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1160eaac jmp 0x1160eab8 */
  goto L_1160eab8;
L_1160eaae:;
  /* 1160eaae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1160eab8:;
  /* 1160eab8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1160eabe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1160eac1:;
  /* 1160eac1 jmp 0x1160eacb */
  goto L_1160eacb;
L_1160eac3:;
  /* 1160eac3 call 0x1160ec90 */
  push32(0x1160eac8u); f_1160ec90();
  /* 1160eac8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1160eacb:;
  /* 1160eacb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1160eacf je 0x1160eae8 */
  if (C.zf) goto L_1160eae8;
  /* 1160ead1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1160ead3 call 0x11608650 */
  push32(0x1160ead8u); f_11608650();
  /* 1160ead8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1160eadb mov eax, dword ptr [0x11630abc] */
  EAX = (r32((uint32_t)(0x11630abc)));
  /* 1160eae0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1160eae3 mov dword ptr [0x11630abc], eax */
  w32((uint32_t)(0x11630abc), (EAX));
L_1160eae8:;
  /* 1160eae8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1160eaeb:;
  /* 1160eaeb mov esp, ebp */
  ESP = (EBP);
  /* 1160eaed pop ebp */
  EBP = (pop32());
  /* 1160eaee ret  */
  ESPCHK(0x1160e700u, _esp0);
  ESP += 4; return;
}

