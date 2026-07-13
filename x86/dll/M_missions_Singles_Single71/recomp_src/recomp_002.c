#include "recomp.h"

/* FUN_10011e10 @ 0x11bf1e10 (393 bytes, 123 insns) */
void f_11bf1e10(void) {
  FTRACE(0x11bf1e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1e11 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1e13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1e16 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1e1a jne 0x11bf1e26 */
  if (!C.zf) goto L_11bf1e26;
  /* 11bf1e1c mov eax, dword ptr [0x11c0fc98] */
  EAX = (r32((uint32_t)(0x11c0fc98)));
  /* 11bf1e21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11bf1e24 jmp 0x11bf1e2c */
  goto L_11bf1e2c;
L_11bf1e26:;
  /* 11bf1e26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf1e29 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11bf1e2c:;
  /* 11bf1e2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf1e2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf1e32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf1e35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf1e38 push 0x11c109e4 */
  push32((uint32_t)(0x11c109e4u));
  /* 11bf1e3d call dword ptr [0x11c1335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1335c))), 0x11bf1e43u);
  /* 11bf1e43 cmp dword ptr [0x11c109d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1e4a je 0x11bf1e6a */
  if (C.zf) goto L_11bf1e6a;
  /* 11bf1e4c push 0x11c109e4 */
  push32((uint32_t)(0x11c109e4u));
  /* 11bf1e51 call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11bf1e57u);
  /* 11bf1e57 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bf1e59 call 0x11be84d0 */
  push32(0x11bf1e5eu); f_11be84d0();
  /* 11bf1e5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1e61 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11bf1e68 jmp 0x11bf1e71 */
  goto L_11bf1e71;
L_11bf1e6a:;
  /* 11bf1e6a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11bf1e71:;
  /* 11bf1e71 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1e75 jbe 0x11bf1f62 */
  if ((C.cf||C.zf)) goto L_11bf1f62;
  /* 11bf1e7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1e7e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf1e80 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11bf1e83 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf1e87 je 0x11bf1e91 */
  if (C.zf) goto L_11bf1e91;
  /* 11bf1e89 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf1e8d je 0x11bf1e96 */
  if (C.zf) goto L_11bf1e96;
  /* 11bf1e8f jmp 0x11bf1ef0 */
  goto L_11bf1ef0;
L_11bf1e91:;
  /* 11bf1e91 jmp 0x11bf1f62 */
  goto L_11bf1f62;
L_11bf1e96:;
  /* 11bf1e96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1e99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1e9c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11bf1e9f mov dword ptr [0x11c109c0], 0 */
  w32((uint32_t)(0x11c109c0), (0x0u));
  /* 11bf1ea9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1eac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf1eaf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1eb2 jne 0x11bf1ec7 */
  if (!C.zf) goto L_11bf1ec7;
  /* 11bf1eb4 mov dword ptr [0x11c109c0], 1 */
  w32((uint32_t)(0x11c109c0), (0x1u));
  /* 11bf1ebe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1ec1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1ec4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11bf1ec7:;
  /* 11bf1ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf1eca push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1ecb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11bf1ece push edx */
  push32((uint32_t)(EDX));
  /* 11bf1ecf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11bf1ed2 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1ed3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf1ed6 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1ed7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1eda mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf1edc push eax */
  push32((uint32_t)(EAX));
  /* 11bf1edd call 0x11bf1fa0 */
  push32(0x11bf1ee2u); f_11bf1fa0();
  /* 11bf1ee2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1ee5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1ee8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1eeb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11bf1eee jmp 0x11bf1f5d */
  goto L_11bf1f5d;
L_11bf1ef0:;
  /* 11bf1ef0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1ef3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf1ef5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf1ef7 mov ecx, dword ptr [0x11c0ec98] */
  ECX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf1efd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf1eff mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bf1f03 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf1f09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf1f0b je 0x11bf1f38 */
  if (C.zf) goto L_11bf1f38;
  /* 11bf1f0d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1f11 jbe 0x11bf1f38 */
  if ((C.cf||C.zf)) goto L_11bf1f38;
  /* 11bf1f13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1f16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1f19 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf1f1b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bf1f1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1f20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1f23 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf1f26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1f29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1f2c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11bf1f2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1f32 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1f35 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11bf1f38:;
  /* 11bf1f38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1f3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1f3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf1f40 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bf1f42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1f45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1f48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf1f4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1f4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1f51 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11bf1f54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1f57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1f5a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11bf1f5d:;
  /* 11bf1f5d jmp 0x11bf1e71 */
  goto L_11bf1e71;
L_11bf1f62:;
  /* 11bf1f62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1f66 je 0x11bf1f74 */
  if (C.zf) goto L_11bf1f74;
  /* 11bf1f68 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bf1f6a call 0x11be8570 */
  push32(0x11bf1f6fu); f_11be8570();
  /* 11bf1f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1f72 jmp 0x11bf1f7f */
  goto L_11bf1f7f;
L_11bf1f74:;
  /* 11bf1f74 push 0x11c109e4 */
  push32((uint32_t)(0x11c109e4u));
  /* 11bf1f79 call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11bf1f7fu);
L_11bf1f7f:;
  /* 11bf1f7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1f83 jbe 0x11bf1f93 */
  if ((C.cf||C.zf)) goto L_11bf1f93;
  /* 11bf1f85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf1f88 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11bf1f8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf1f8e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1f91 jmp 0x11bf1f95 */
  goto L_11bf1f95;
L_11bf1f93:;
  /* 11bf1f93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf1f95:;
  /* 11bf1f95 mov esp, ebp */
  ESP = (EBP);
  /* 11bf1f97 pop ebp */
  EBP = (pop32());
  /* 11bf1f98 ret  */
  ESPCHK(0x11bf1e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fa0 @ 0x11bf1fa0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11bf1fa0(void) {
  FTRACE(0x11bf1fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf1fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf1fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf1fa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1fa6 push esi */
  push32((uint32_t)(ESI));
  /* 11bf1fa7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11bf1fab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf1fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1fb1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf1fb4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bf1fb7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf1fbb ja 0x11bf2508 */
  if ((!C.cf&&!C.zf)) goto L_11bf2508;
  /* 11bf1fc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf1fc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf1fc6 mov dl, byte ptr [eax + 0x11bf2569] */
  DL = (r8((uint32_t)(EAX + 0x11bf2569)));
  /* 11bf1fcc jmp dword ptr [edx*4 + 0x11bf250d] */
  switch (EDX) {
    case 0: goto L_11bf24e6;
    case 1: goto L_11bf1ff5;
    case 2: goto L_11bf203b;
    case 3: goto L_11bf2188;
    case 4: goto L_11bf21b0;
    case 5: goto L_11bf224f;
    case 6: goto L_11bf22bb;
    case 7: goto L_11bf22e4;
    case 8: goto L_11bf2325;
    case 9: goto L_11bf2407;
    case 10: goto L_11bf246e;
    case 11: goto L_11bf24bb;
    case 12: goto L_11bf1fd3;
    case 13: goto L_11bf2018;
    case 14: goto L_11bf205e;
    case 15: goto L_11bf215e;
    case 16: goto L_11bf21f5;
    case 17: goto L_11bf2222;
    case 18: goto L_11bf2277;
    case 19: goto L_11bf22fb;
    case 20: goto L_11bf23a9;
    case 21: goto L_11bf2438;
    case 22: goto L_11bf2508;
    default: x86_unimpl("switch@0x11bf1fcc out of table"); return;
  }
L_11bf1fd3:;
  /* 11bf1fd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf1fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1fd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1fda push edx */
  push32((uint32_t)(EDX));
  /* 11bf1fdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf1fde mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11bf1fe1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf1fe4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11bf1fe7 push eax */
  push32((uint32_t)(EAX));
  /* 11bf1fe8 call 0x11bf25c0 */
  push32(0x11bf1fedu); f_11bf25c0();
  /* 11bf1fed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf1ff0 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf1ff5:;
  /* 11bf1ff5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf1ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf1ff9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf1ffc push edx */
  push32((uint32_t)(EDX));
  /* 11bf1ffd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2000 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11bf2003 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf2006 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11bf200a push eax */
  push32((uint32_t)(EAX));
  /* 11bf200b call 0x11bf25c0 */
  push32(0x11bf2010u); f_11bf25c0();
  /* 11bf2010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2013 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf2018:;
  /* 11bf2018 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf201b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf201c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf201f push edx */
  push32((uint32_t)(EDX));
  /* 11bf2020 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2023 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bf2026 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf2029 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11bf202d push eax */
  push32((uint32_t)(EAX));
  /* 11bf202e call 0x11bf25c0 */
  push32(0x11bf2033u); f_11bf25c0();
  /* 11bf2033 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2036 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf203b:;
  /* 11bf203b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf203e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf203f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2042 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2043 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2046 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11bf2049 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf204c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11bf2050 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2051 call 0x11bf25c0 */
  push32(0x11bf2056u); f_11bf25c0();
  /* 11bf2056 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2059 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf205e:;
  /* 11bf205e cmp dword ptr [0x11c109c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2065 je 0x11bf20e6 */
  if (C.zf) goto L_11bf20e6;
  /* 11bf2067 mov dword ptr [0x11c109c0], 0 */
  w32((uint32_t)(0x11c109c0), (0x0u));
  /* 11bf2071 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf2074 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2075 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2078 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2079 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf207c push eax */
  push32((uint32_t)(EAX));
  /* 11bf207d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2080 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2081 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf2084 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11bf208a push eax */
  push32((uint32_t)(EAX));
  /* 11bf208b call 0x11bf2770 */
  push32(0x11bf2090u); f_11bf2770();
  /* 11bf2090 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2093 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2096 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2099 jne 0x11bf20a0 */
  if (!C.zf) goto L_11bf20a0;
  /* 11bf209b jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf20a0:;
  /* 11bf20a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf20a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf20a5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11bf20a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf20ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf20ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf20b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf20b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bf20b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf20b8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf20ba sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf20bd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf20c0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bf20c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf20c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf20c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf20c9 push edx */
  push32((uint32_t)(EDX));
  /* 11bf20ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf20cd push eax */
  push32((uint32_t)(EAX));
  /* 11bf20ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf20d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf20d2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf20d5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11bf20db push eax */
  push32((uint32_t)(EAX));
  /* 11bf20dc call 0x11bf2770 */
  push32(0x11bf20e1u); f_11bf2770();
  /* 11bf20e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf20e4 jmp 0x11bf2159 */
  goto L_11bf2159;
L_11bf20e6:;
  /* 11bf20e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf20e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf20ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf20ed push edx */
  push32((uint32_t)(EDX));
  /* 11bf20ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf20f1 push eax */
  push32((uint32_t)(EAX));
  /* 11bf20f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf20f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf20f6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf20f9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11bf20ff push eax */
  push32((uint32_t)(EAX));
  /* 11bf2100 call 0x11bf2770 */
  push32(0x11bf2105u); f_11bf2770();
  /* 11bf2105 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2108 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf210b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf210e jne 0x11bf2115 */
  if (!C.zf) goto L_11bf2115;
  /* 11bf2110 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf2115:;
  /* 11bf2115 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2118 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf211a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11bf211d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2120 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf2122 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2125 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2128 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bf212a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf212d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf212f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2132 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2135 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bf2137 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf213a push ecx */
  push32((uint32_t)(ECX));
  /* 11bf213b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf213e push edx */
  push32((uint32_t)(EDX));
  /* 11bf213f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2142 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2143 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2146 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2147 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf214a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11bf2150 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2151 call 0x11bf2770 */
  push32(0x11bf2156u); f_11bf2770();
  /* 11bf2156 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf2159:;
  /* 11bf2159 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf215e:;
  /* 11bf215e mov ecx, dword ptr [0x11c109c0] */
  ECX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf2164 mov dword ptr [0x11c109d0], ecx */
  w32((uint32_t)(0x11c109d0), (ECX));
  /* 11bf216a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf216d push edx */
  push32((uint32_t)(EDX));
  /* 11bf216e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2171 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2172 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf2174 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2177 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11bf217a push edx */
  push32((uint32_t)(EDX));
  /* 11bf217b call 0x11bf2610 */
  push32(0x11bf2180u); f_11bf2610();
  /* 11bf2180 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2183 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf2188:;
  /* 11bf2188 mov eax, dword ptr [0x11c109c0] */
  EAX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf218d mov dword ptr [0x11c109d0], eax */
  w32((uint32_t)(0x11c109d0), (EAX));
  /* 11bf2192 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2195 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2196 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2199 push edx */
  push32((uint32_t)(EDX));
  /* 11bf219a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf219c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf219f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11bf21a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf21a3 call 0x11bf2610 */
  push32(0x11bf21a8u); f_11bf2610();
  /* 11bf21a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf21ab jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf21b0:;
  /* 11bf21b0 mov edx, dword ptr [0x11c109c0] */
  EDX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf21b6 mov dword ptr [0x11c109d0], edx */
  w32((uint32_t)(0x11c109d0), (EDX));
  /* 11bf21bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf21bf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11bf21c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf21c3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11bf21c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf21ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf21cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf21d1 jne 0x11bf21da */
  if (!C.zf) goto L_11bf21da;
  /* 11bf21d3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11bf21da:;
  /* 11bf21da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf21dd push edx */
  push32((uint32_t)(EDX));
  /* 11bf21de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf21e1 push eax */
  push32((uint32_t)(EAX));
  /* 11bf21e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf21e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf21e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf21e8 call 0x11bf2610 */
  push32(0x11bf21edu); f_11bf2610();
  /* 11bf21ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf21f0 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf21f5:;
  /* 11bf21f5 mov edx, dword ptr [0x11c109c0] */
  EDX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf21fb mov dword ptr [0x11c109d0], edx */
  w32((uint32_t)(0x11c109d0), (EDX));
  /* 11bf2201 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2204 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2205 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2208 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2209 push 3 */
  push32((uint32_t)(0x3u));
  /* 11bf220b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf220e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11bf2211 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2214 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2215 call 0x11bf2610 */
  push32(0x11bf221au); f_11bf2610();
  /* 11bf221a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf221d jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf2222:;
  /* 11bf2222 mov ecx, dword ptr [0x11c109c0] */
  ECX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf2228 mov dword ptr [0x11c109d0], ecx */
  w32((uint32_t)(0x11c109d0), (ECX));
  /* 11bf222e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2231 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2232 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2235 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2236 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf2238 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf223b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11bf223e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2241 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2242 call 0x11bf2610 */
  push32(0x11bf2247u); f_11bf2610();
  /* 11bf2247 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf224a jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf224f:;
  /* 11bf224f mov eax, dword ptr [0x11c109c0] */
  EAX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf2254 mov dword ptr [0x11c109d0], eax */
  w32((uint32_t)(0x11c109d0), (EAX));
  /* 11bf2259 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf225c push ecx */
  push32((uint32_t)(ECX));
  /* 11bf225d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2260 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2261 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf2263 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2266 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11bf2269 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf226a call 0x11bf2610 */
  push32(0x11bf226fu); f_11bf2610();
  /* 11bf226f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2272 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf2277:;
  /* 11bf2277 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf227a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf227e jg 0x11bf229c */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf229c;
  /* 11bf2280 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2283 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2284 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2287 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2288 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf228b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11bf2291 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2292 call 0x11bf25c0 */
  push32(0x11bf2297u); f_11bf25c0();
  /* 11bf2297 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf229a jmp 0x11bf22b6 */
  goto L_11bf22b6;
L_11bf229c:;
  /* 11bf229c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf229f push ecx */
  push32((uint32_t)(ECX));
  /* 11bf22a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf22a3 push edx */
  push32((uint32_t)(EDX));
  /* 11bf22a4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf22a7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11bf22ad push ecx */
  push32((uint32_t)(ECX));
  /* 11bf22ae call 0x11bf25c0 */
  push32(0x11bf22b3u); f_11bf25c0();
  /* 11bf22b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf22b6:;
  /* 11bf22b6 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf22bb:;
  /* 11bf22bb mov edx, dword ptr [0x11c109c0] */
  EDX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf22c1 mov dword ptr [0x11c109d0], edx */
  w32((uint32_t)(0x11c109d0), (EDX));
  /* 11bf22c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf22ca push eax */
  push32((uint32_t)(EAX));
  /* 11bf22cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf22ce push ecx */
  push32((uint32_t)(ECX));
  /* 11bf22cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf22d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf22d4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf22d6 push eax */
  push32((uint32_t)(EAX));
  /* 11bf22d7 call 0x11bf2610 */
  push32(0x11bf22dcu); f_11bf2610();
  /* 11bf22dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf22df jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf22e4:;
  /* 11bf22e4 mov ecx, dword ptr [0x11c109c0] */
  ECX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf22ea mov dword ptr [0x11c109d0], ecx */
  w32((uint32_t)(0x11c109d0), (ECX));
  /* 11bf22f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf22f3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11bf22f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf22f9 jmp 0x11bf234d */
  goto L_11bf234d;
L_11bf22fb:;
  /* 11bf22fb mov ecx, dword ptr [0x11c109c0] */
  ECX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf2301 mov dword ptr [0x11c109d0], ecx */
  w32((uint32_t)(0x11c109d0), (ECX));
  /* 11bf2307 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf230a push edx */
  push32((uint32_t)(EDX));
  /* 11bf230b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf230e push eax */
  push32((uint32_t)(EAX));
  /* 11bf230f push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf2311 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2314 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11bf2317 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2318 call 0x11bf2610 */
  push32(0x11bf231du); f_11bf2610();
  /* 11bf231d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2320 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf2325:;
  /* 11bf2325 mov eax, dword ptr [0x11c109c0] */
  EAX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf232a mov dword ptr [0x11c109d0], eax */
  w32((uint32_t)(0x11c109d0), (EAX));
  /* 11bf232f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2332 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2336 jne 0x11bf2341 */
  if (!C.zf) goto L_11bf2341;
  /* 11bf2338 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11bf233f jmp 0x11bf234d */
  goto L_11bf234d;
L_11bf2341:;
  /* 11bf2341 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2344 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11bf2347 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf234a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bf234d:;
  /* 11bf234d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2350 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11bf2353 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2356 jge 0x11bf2361 */
  if ((C.sf==C.of)) goto L_11bf2361;
  /* 11bf2358 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bf235f jmp 0x11bf238e */
  goto L_11bf238e;
L_11bf2361:;
  /* 11bf2361 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2364 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11bf2367 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf2368 mov ecx, 7 */
  ECX = (0x7u);
  /* 11bf236d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf236f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf2372 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2375 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11bf2378 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf2379 mov ecx, 7 */
  ECX = (0x7u);
  /* 11bf237e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf2380 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2383 jl 0x11bf238e */
  if ((C.sf!=C.of)) goto L_11bf238e;
  /* 11bf2385 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf2388 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf238b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11bf238e:;
  /* 11bf238e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2391 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2392 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2395 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2396 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf2398 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf239b push edx */
  push32((uint32_t)(EDX));
  /* 11bf239c call 0x11bf2610 */
  push32(0x11bf23a1u); f_11bf2610();
  /* 11bf23a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf23a4 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf23a9:;
  /* 11bf23a9 cmp dword ptr [0x11c109c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf23b0 je 0x11bf23e0 */
  if (C.zf) goto L_11bf23e0;
  /* 11bf23b2 mov dword ptr [0x11c109c0], 0 */
  w32((uint32_t)(0x11c109c0), (0x0u));
  /* 11bf23bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf23bf push eax */
  push32((uint32_t)(EAX));
  /* 11bf23c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf23c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf23c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf23c7 push edx */
  push32((uint32_t)(EDX));
  /* 11bf23c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf23cb push eax */
  push32((uint32_t)(EAX));
  /* 11bf23cc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf23cf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11bf23d5 push edx */
  push32((uint32_t)(EDX));
  /* 11bf23d6 call 0x11bf2770 */
  push32(0x11bf23dbu); f_11bf2770();
  /* 11bf23db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf23de jmp 0x11bf2402 */
  goto L_11bf2402;
L_11bf23e0:;
  /* 11bf23e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf23e3 push eax */
  push32((uint32_t)(EAX));
  /* 11bf23e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf23e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf23e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf23eb push edx */
  push32((uint32_t)(EDX));
  /* 11bf23ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf23ef push eax */
  push32((uint32_t)(EAX));
  /* 11bf23f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf23f3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11bf23f9 push edx */
  push32((uint32_t)(EDX));
  /* 11bf23fa call 0x11bf2770 */
  push32(0x11bf23ffu); f_11bf2770();
  /* 11bf23ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf2402:;
  /* 11bf2402 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf2407:;
  /* 11bf2407 mov dword ptr [0x11c109c0], 0 */
  w32((uint32_t)(0x11c109c0), (0x0u));
  /* 11bf2411 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf2414 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2415 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2418 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2419 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf241c push edx */
  push32((uint32_t)(EDX));
  /* 11bf241d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2420 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2421 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf2424 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11bf242a push edx */
  push32((uint32_t)(EDX));
  /* 11bf242b call 0x11bf2770 */
  push32(0x11bf2430u); f_11bf2770();
  /* 11bf2430 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2433 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf2438:;
  /* 11bf2438 mov eax, dword ptr [0x11c109c0] */
  EAX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf243d mov dword ptr [0x11c109d0], eax */
  w32((uint32_t)(0x11c109d0), (EAX));
  /* 11bf2442 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2445 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11bf2448 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf2449 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11bf244e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf2450 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf2453 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2456 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2457 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf245a push eax */
  push32((uint32_t)(EAX));
  /* 11bf245b push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf245d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf2460 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2461 call 0x11bf2610 */
  push32(0x11bf2466u); f_11bf2610();
  /* 11bf2466 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2469 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf246e:;
  /* 11bf246e mov edx, dword ptr [0x11c109c0] */
  EDX = (r32((uint32_t)(0x11c109c0)));
  /* 11bf2474 mov dword ptr [0x11c109d0], edx */
  w32((uint32_t)(0x11c109d0), (EDX));
  /* 11bf247a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf247d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11bf2480 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf2481 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11bf2486 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf2488 mov ecx, eax */
  ECX = (EAX);
  /* 11bf248a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf248d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf2490 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2493 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11bf2496 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf2497 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11bf249c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf249e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf24a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf24a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf24a6 push eax */
  push32((uint32_t)(EAX));
  /* 11bf24a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf24aa push ecx */
  push32((uint32_t)(ECX));
  /* 11bf24ab push 4 */
  push32((uint32_t)(0x4u));
  /* 11bf24ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf24b0 push edx */
  push32((uint32_t)(EDX));
  /* 11bf24b1 call 0x11bf2610 */
  push32(0x11bf24b6u); f_11bf2610();
  /* 11bf24b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf24b9 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf24bb:;
  /* 11bf24bb call 0x11bf35d0 */
  push32(0x11bf24c0u); f_11bf35d0();
  /* 11bf24c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf24c3 push eax */
  push32((uint32_t)(EAX));
  /* 11bf24c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf24c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf24c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf24cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf24cd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf24d1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11bf24d4 mov ecx, dword ptr [eax*4 + 0x11c0fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c0fe1c)));
  /* 11bf24db push ecx */
  push32((uint32_t)(ECX));
  /* 11bf24dc call 0x11bf25c0 */
  push32(0x11bf24e1u); f_11bf25c0();
  /* 11bf24e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf24e4 jmp 0x11bf2508 */
  goto L_11bf2508;
L_11bf24e6:;
  /* 11bf24e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf24e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf24eb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11bf24ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf24f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf24f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf24f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf24f9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bf24fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf24fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf2500 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2503 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2506 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11bf2508:;
  /* 11bf2508 pop esi */
  ESI = (pop32());
  /* 11bf2509 mov esp, ebp */
  ESP = (EBP);
  /* 11bf250b pop ebp */
  EBP = (pop32());
  /* 11bf250c ret  */
  ESPCHK(0x11bf1fa0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11bf25c0 (72 bytes, 30 insns) */
void f_11bf25c0(void) {
  FTRACE(0x11bf25c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf25c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf25c1 mov ebp, esp */
  EBP = (ESP);
L_11bf25c3:;
  /* 11bf25c3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf25c6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf25c9 je 0x11bf2606 */
  if (C.zf) goto L_11bf2606;
  /* 11bf25cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf25ce movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf25d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf25d3 je 0x11bf2606 */
  if (C.zf) goto L_11bf2606;
  /* 11bf25d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf25d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf25da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf25dd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf25df mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bf25e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf25e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf25e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf25e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf25ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bf25ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf25f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf25f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11bf25f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf25fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf25fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf25ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2602 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bf2604 jmp 0x11bf25c3 */
  goto L_11bf25c3;
L_11bf2606:;
  /* 11bf2606 pop ebp */
  EBP = (pop32());
  /* 11bf2607 ret  */
  ESPCHK(0x11bf25c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012610 @ 0x11bf2610 (173 bytes, 64 insns) */
void f_11bf2610(void) {
  FTRACE(0x11bf2610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf2610 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf2611 mov ebp, esp */
  EBP = (ESP);
  /* 11bf2613 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2614 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bf261b cmp dword ptr [0x11c109d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2622 je 0x11bf263a */
  if (C.zf) goto L_11bf263a;
  /* 11bf2624 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2627 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2628 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf262b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf262c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf262f push edx */
  push32((uint32_t)(EDX));
  /* 11bf2630 call 0x11bf26c0 */
  push32(0x11bf2635u); f_11bf26c0();
  /* 11bf2635 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2638 jmp 0x11bf26b9 */
  goto L_11bf26b9;
L_11bf263a:;
  /* 11bf263a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf263d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2640 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2642 jae 0x11bf26b0 */
  if (!C.cf) goto L_11bf26b0;
  /* 11bf2644 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2647 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf264a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11bf264d jmp 0x11bf2658 */
  goto L_11bf2658;
L_11bf264f:;
  /* 11bf264f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2652 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2655 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11bf2658:;
  /* 11bf2658 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf265b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf265e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf2660 je 0x11bf2694 */
  if (C.zf) goto L_11bf2694;
  /* 11bf2662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2665 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf2666 mov ecx, 0xa */
  ECX = (0xau);
  /* 11bf266b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf266d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2670 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2673 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2675 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2678 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11bf267b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf267e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf267f mov ecx, 0xa */
  ECX = (0xau);
  /* 11bf2684 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf2686 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf2689 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf268c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf268f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf2692 jmp 0x11bf264f */
  goto L_11bf264f;
L_11bf2694:;
  /* 11bf2694 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2697 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2699 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf269c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf269f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bf26a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf26a4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf26a6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf26a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf26ac mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bf26ae jmp 0x11bf26b9 */
  goto L_11bf26b9;
L_11bf26b0:;
  /* 11bf26b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf26b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11bf26b9:;
  /* 11bf26b9 mov esp, ebp */
  ESP = (EBP);
  /* 11bf26bb pop ebp */
  EBP = (pop32());
  /* 11bf26bc ret  */
  ESPCHK(0x11bf2610u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11bf26c0 (172 bytes, 65 insns) */
void f_11bf26c0(void) {
  FTRACE(0x11bf26c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf26c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf26c1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf26c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf26c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf26c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf26cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf26ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf26d1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf26d4 jbe 0x11bf271b */
  if ((C.cf||C.zf)) goto L_11bf271b;
L_11bf26d6:;
  /* 11bf26d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf26d9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf26da mov ecx, 0xa */
  ECX = (0xau);
  /* 11bf26df idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf26e1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf26e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf26e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bf26e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf26ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf26ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf26f2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf26f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf26f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf26fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf26fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bf26ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2702 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf2703 mov ecx, 0xa */
  ECX = (0xau);
  /* 11bf2708 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf270a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf270d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2711 jle 0x11bf271b */
  if ((C.zf||C.sf!=C.of)) goto L_11bf271b;
  /* 11bf2713 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2716 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2719 ja 0x11bf26d6 */
  if ((!C.cf&&!C.zf)) goto L_11bf26d6;
L_11bf271b:;
  /* 11bf271b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf271e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2720 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf2723 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2726 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf2729 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11bf272b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf272e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2731 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bf2734:;
  /* 11bf2734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf2737 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf2739 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11bf273c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf273f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf2742 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf2744 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bf2746 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf2749 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf274c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf274f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf2752 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11bf2755 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11bf2757 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf275a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf275d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf2760 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf2763 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2766 jb 0x11bf2734 */
  if (C.cf) goto L_11bf2734;
  /* 11bf2768 mov esp, ebp */
  ESP = (EBP);
  /* 11bf276a pop ebp */
  EBP = (pop32());
  /* 11bf276b ret  */
  ESPCHK(0x11bf26c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012770 @ 0x11bf2770 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11bf2770(void) {
  FTRACE(0x11bf2770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf2770 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf2771 mov ebp, esp */
  EBP = (ESP);
  /* 11bf2773 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11bf2776:;
  /* 11bf2776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2779 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf277c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf277e je 0x11bf2bec */
  if (C.zf) goto L_11bf2bec;
  /* 11bf2784 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2787 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf278a je 0x11bf2bec */
  if (C.zf) goto L_11bf2bec;
  /* 11bf2790 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11bf2794 mov dword ptr [0x11c109d0], 0 */
  w32((uint32_t)(0x11c109d0), (0x0u));
  /* 11bf279e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bf27a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf27a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf27ab jmp 0x11bf27b6 */
  goto L_11bf27b6;
L_11bf27ad:;
  /* 11bf27ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf27b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf27b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11bf27b6:;
  /* 11bf27b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf27b9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf27bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf27bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf27c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf27c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf27c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf27cb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf27cd jne 0x11bf27d1 */
  if (!C.zf) goto L_11bf27d1;
  /* 11bf27cf jmp 0x11bf27ad */
  goto L_11bf27ad;
L_11bf27d1:;
  /* 11bf27d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf27d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf27d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf27da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf27dd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf27e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bf27e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf27e6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf27e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11bf27ec cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf27f0 ja 0x11bf2b40 */
  if ((!C.cf&&!C.zf)) goto L_11bf2b40;
  /* 11bf27f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf27f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf27fb mov al, byte ptr [ecx + 0x11bf2c1c] */
  AL = (r8((uint32_t)(ECX + 0x11bf2c1c)));
  /* 11bf2801 jmp dword ptr [eax*4 + 0x11bf2bf0] */
  switch (EAX) {
    case 0: goto L_11bf2a5f;
    case 1: goto L_11bf2943;
    case 2: goto L_11bf28ce;
    case 3: goto L_11bf2808;
    case 4: goto L_11bf2846;
    case 5: goto L_11bf28a7;
    case 6: goto L_11bf28f5;
    case 7: goto L_11bf291c;
    case 8: goto L_11bf298a;
    case 9: goto L_11bf2884;
    case 10: goto L_11bf2b40;
    default: x86_unimpl("switch@0x11bf2801 out of table"); return;
  }
L_11bf2808:;
  /* 11bf2808 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf280b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11bf280e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf2811 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2814 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11bf2817 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf281b ja 0x11bf2841 */
  if ((!C.cf&&!C.zf)) goto L_11bf2841;
  /* 11bf281d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf2820 jmp dword ptr [ecx*4 + 0x11bf2c6f] */
  switch (ECX) {
    case 0: goto L_11bf2827;
    case 1: goto L_11bf2831;
    case 2: goto L_11bf2837;
    case 3: goto L_11bf283d;
    case 4: goto L_11bf2865;
    case 5: goto L_11bf286f;
    case 6: goto L_11bf2875;
    case 7: goto L_11bf287b;
    default: x86_unimpl("switch@0x11bf2820 out of table"); return;
  }
L_11bf2827:;
  /* 11bf2827 mov dword ptr [0x11c109d0], 1 */
  w32((uint32_t)(0x11c109d0), (0x1u));
L_11bf2831:;
  /* 11bf2831 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11bf2835 jmp 0x11bf2841 */
  goto L_11bf2841;
L_11bf2837:;
  /* 11bf2837 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11bf283b jmp 0x11bf2841 */
  goto L_11bf2841;
L_11bf283d:;
  /* 11bf283d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11bf2841:;
  /* 11bf2841 jmp 0x11bf2b40 */
  goto L_11bf2b40;
L_11bf2846:;
  /* 11bf2846 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf2849 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11bf284c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf284f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2852 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11bf2855 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2859 ja 0x11bf287f */
  if ((!C.cf&&!C.zf)) goto L_11bf287f;
  /* 11bf285b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf285e jmp dword ptr [ecx*4 + 0x11bf2c7f] */
  switch (ECX) {
    case 0: goto L_11bf2865;
    case 1: goto L_11bf286f;
    case 2: goto L_11bf2875;
    case 3: goto L_11bf287b;
    default: x86_unimpl("switch@0x11bf285e out of table"); return;
  }
L_11bf2865:;
  /* 11bf2865 mov dword ptr [0x11c109d0], 1 */
  w32((uint32_t)(0x11c109d0), (0x1u));
L_11bf286f:;
  /* 11bf286f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11bf2873 jmp 0x11bf287f */
  goto L_11bf287f;
L_11bf2875:;
  /* 11bf2875 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11bf2879 jmp 0x11bf287f */
  goto L_11bf287f;
L_11bf287b:;
  /* 11bf287b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11bf287f:;
  /* 11bf287f jmp 0x11bf2b40 */
  goto L_11bf2b40;
L_11bf2884:;
  /* 11bf2884 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf2887 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11bf288a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf288e je 0x11bf2898 */
  if (C.zf) goto L_11bf2898;
  /* 11bf2890 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2894 je 0x11bf289e */
  if (C.zf) goto L_11bf289e;
  /* 11bf2896 jmp 0x11bf28a2 */
  goto L_11bf28a2;
L_11bf2898:;
  /* 11bf2898 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11bf289c jmp 0x11bf28a2 */
  goto L_11bf28a2;
L_11bf289e:;
  /* 11bf289e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11bf28a2:;
  /* 11bf28a2 jmp 0x11bf2b40 */
  goto L_11bf2b40;
L_11bf28a7:;
  /* 11bf28a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf28aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bf28ad cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf28b1 je 0x11bf28bb */
  if (C.zf) goto L_11bf28bb;
  /* 11bf28b3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf28b7 je 0x11bf28c5 */
  if (C.zf) goto L_11bf28c5;
  /* 11bf28b9 jmp 0x11bf28c9 */
  goto L_11bf28c9;
L_11bf28bb:;
  /* 11bf28bb mov dword ptr [0x11c109d0], 1 */
  w32((uint32_t)(0x11c109d0), (0x1u));
L_11bf28c5:;
  /* 11bf28c5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11bf28c9:;
  /* 11bf28c9 jmp 0x11bf2b40 */
  goto L_11bf2b40;
L_11bf28ce:;
  /* 11bf28ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf28d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11bf28d4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf28d8 je 0x11bf28e2 */
  if (C.zf) goto L_11bf28e2;
  /* 11bf28da cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf28de je 0x11bf28ec */
  if (C.zf) goto L_11bf28ec;
  /* 11bf28e0 jmp 0x11bf28f0 */
  goto L_11bf28f0;
L_11bf28e2:;
  /* 11bf28e2 mov dword ptr [0x11c109d0], 1 */
  w32((uint32_t)(0x11c109d0), (0x1u));
L_11bf28ec:;
  /* 11bf28ec mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11bf28f0:;
  /* 11bf28f0 jmp 0x11bf2b40 */
  goto L_11bf2b40;
L_11bf28f5:;
  /* 11bf28f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf28f8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11bf28fb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf28ff je 0x11bf2909 */
  if (C.zf) goto L_11bf2909;
  /* 11bf2901 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2905 je 0x11bf2913 */
  if (C.zf) goto L_11bf2913;
  /* 11bf2907 jmp 0x11bf2917 */
  goto L_11bf2917;
L_11bf2909:;
  /* 11bf2909 mov dword ptr [0x11c109d0], 1 */
  w32((uint32_t)(0x11c109d0), (0x1u));
L_11bf2913:;
  /* 11bf2913 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11bf2917:;
  /* 11bf2917 jmp 0x11bf2b40 */
  goto L_11bf2b40;
L_11bf291c:;
  /* 11bf291c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf291f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11bf2922 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2926 je 0x11bf2930 */
  if (C.zf) goto L_11bf2930;
  /* 11bf2928 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf292c je 0x11bf293a */
  if (C.zf) goto L_11bf293a;
  /* 11bf292e jmp 0x11bf293e */
  goto L_11bf293e;
L_11bf2930:;
  /* 11bf2930 mov dword ptr [0x11c109d0], 1 */
  w32((uint32_t)(0x11c109d0), (0x1u));
L_11bf293a:;
  /* 11bf293a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11bf293e:;
  /* 11bf293e jmp 0x11bf2b40 */
  goto L_11bf2b40;
L_11bf2943:;
  /* 11bf2943 push 0x11c0ca24 */
  push32((uint32_t)(0x11c0ca24u));
  /* 11bf2948 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf294b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf294c call 0x11bf31a0 */
  push32(0x11bf2951u); f_11bf31a0();
  /* 11bf2951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2954 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf2956 jne 0x11bf2963 */
  if (!C.zf) goto L_11bf2963;
  /* 11bf2958 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf295b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf295e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf2961 jmp 0x11bf2981 */
  goto L_11bf2981;
L_11bf2963:;
  /* 11bf2963 push 0x11c0ca20 */
  push32((uint32_t)(0x11c0ca20u));
  /* 11bf2968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf296b push eax */
  push32((uint32_t)(EAX));
  /* 11bf296c call 0x11bf31a0 */
  push32(0x11bf2971u); f_11bf31a0();
  /* 11bf2971 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2974 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf2976 jne 0x11bf2981 */
  if (!C.zf) goto L_11bf2981;
  /* 11bf2978 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf297b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf297e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bf2981:;
  /* 11bf2981 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11bf2985 jmp 0x11bf2b40 */
  goto L_11bf2b40;
L_11bf298a:;
  /* 11bf298a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf298d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2991 jg 0x11bf29a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf29a1;
  /* 11bf2993 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf2996 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11bf299c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11bf299f jmp 0x11bf29ad */
  goto L_11bf29ad;
L_11bf29a1:;
  /* 11bf29a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf29a4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11bf29aa mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11bf29ad:;
  /* 11bf29ad cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf29b1 jle 0x11bf2a54 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf2a54;
  /* 11bf29b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf29ba cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf29bd jbe 0x11bf2a54 */
  if ((C.cf||C.zf)) goto L_11bf2a54;
  /* 11bf29c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf29c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf29c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf29ca mov ecx, dword ptr [0x11c0ec98] */
  ECX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf29d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf29d2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bf29d6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf29dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf29de je 0x11bf2a17 */
  if (C.zf) goto L_11bf2a17;
  /* 11bf29e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf29e3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf29e6 jbe 0x11bf2a17 */
  if ((C.cf||C.zf)) goto L_11bf2a17;
  /* 11bf29e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf29eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf29ed mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf29f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf29f2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11bf29f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf29f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf29f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf29fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf29ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bf2a01 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf2a04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2a07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11bf2a0a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2a0d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2a0f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2a12 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2a15 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11bf2a17:;
  /* 11bf2a17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2a1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2a1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf2a1f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf2a21 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bf2a23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2a26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf2a28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2a2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2a2e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bf2a30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf2a33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2a36 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11bf2a39 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2a3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf2a3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2a41 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2a44 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bf2a46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf2a49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2a4c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11bf2a4f jmp 0x11bf29ad */
  goto L_11bf29ad;
L_11bf2a54:;
  /* 11bf2a54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf2a57 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf2a5a jmp 0x11bf2776 */
  goto L_11bf2776;
L_11bf2a5f:;
  /* 11bf2a5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf2a62 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf2a65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf2a67 je 0x11bf2b32 */
  if (C.zf) goto L_11bf2b32;
  /* 11bf2a6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2a70 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2a73 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11bf2a76:;
  /* 11bf2a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2a79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf2a7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf2a7e je 0x11bf2b30 */
  if (C.zf) goto L_11bf2b30;
  /* 11bf2a84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2a87 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2a8a je 0x11bf2b30 */
  if (C.zf) goto L_11bf2b30;
  /* 11bf2a90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2a93 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf2a96 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2a99 jne 0x11bf2aa9 */
  if (!C.zf) goto L_11bf2aa9;
  /* 11bf2a9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2a9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2aa1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11bf2aa4 jmp 0x11bf2b30 */
  goto L_11bf2b30;
L_11bf2aa9:;
  /* 11bf2aa9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2aac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf2aae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf2ab0 mov edx, dword ptr [0x11c0ec98] */
  EDX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf2ab6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2ab8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11bf2abc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf2ac3 je 0x11bf2afc */
  if (C.zf) goto L_11bf2afc;
  /* 11bf2ac5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2ac8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2acb jbe 0x11bf2afc */
  if ((C.cf||C.zf)) goto L_11bf2afc;
  /* 11bf2acd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2ad0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf2ad2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2ad5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf2ad7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bf2ad9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2adc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2ade add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2ae1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2ae4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bf2ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2ae9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2aec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf2aef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2af2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf2af4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2af7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2afa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11bf2afc:;
  /* 11bf2afc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2aff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf2b01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2b04 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf2b06 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11bf2b08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2b0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf2b0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2b10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2b13 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bf2b15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2b18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2b1b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11bf2b1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2b21 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2b23 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2b26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2b29 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bf2b2b jmp 0x11bf2a76 */
  goto L_11bf2a76;
L_11bf2b30:;
  /* 11bf2b30 jmp 0x11bf2b3b */
  goto L_11bf2b3b;
L_11bf2b32:;
  /* 11bf2b32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2b35 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2b38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11bf2b3b:;
  /* 11bf2b3b jmp 0x11bf2776 */
  goto L_11bf2776;
L_11bf2b40:;
  /* 11bf2b40 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11bf2b44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf2b46 je 0x11bf2b6c */
  if (C.zf) goto L_11bf2b6c;
  /* 11bf2b48 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf2b4b push edx */
  push32((uint32_t)(EDX));
  /* 11bf2b4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2b4f push eax */
  push32((uint32_t)(EAX));
  /* 11bf2b50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2b54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2b57 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2b58 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11bf2b5b push eax */
  push32((uint32_t)(EAX));
  /* 11bf2b5c call 0x11bf1fa0 */
  push32(0x11bf2b61u); f_11bf1fa0();
  /* 11bf2b61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2b64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf2b67 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11bf2b6a jmp 0x11bf2be7 */
  goto L_11bf2be7;
L_11bf2b6c:;
  /* 11bf2b6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2b6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2b71 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf2b73 mov ecx, dword ptr [0x11c0ec98] */
  ECX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf2b79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf2b7b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bf2b7f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf2b85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf2b87 je 0x11bf2bb8 */
  if (C.zf) goto L_11bf2bb8;
  /* 11bf2b89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2b8c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2b8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2b91 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf2b93 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bf2b95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2b98 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf2b9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2b9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2ba0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11bf2ba2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2ba5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2ba8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11bf2bab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2bae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf2bb0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2bb3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2bb6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11bf2bb8:;
  /* 11bf2bb8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2bbb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf2bbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2bc0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf2bc2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11bf2bc4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2bc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2bc9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2bcc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2bcf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11bf2bd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2bd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2bd7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf2bda mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2bdd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf2bdf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2be2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2be5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11bf2be7:;
  /* 11bf2be7 jmp 0x11bf2776 */
  goto L_11bf2776;
L_11bf2bec:;
  /* 11bf2bec mov esp, ebp */
  ESP = (EBP);
  /* 11bf2bee pop ebp */
  EBP = (pop32());
  /* 11bf2bef ret  */
  ESPCHK(0x11bf2770u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c90 @ 0x11bf2c90 (650 bytes, 178 insns) */
void f_11bf2c90(void) {
  FTRACE(0x11bf2c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf2c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf2c91 mov ebp, esp */
  EBP = (ESP);
  /* 11bf2c93 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf2c99 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2c9d jne 0x11bf2df9 */
  if (!C.zf) goto L_11bf2df9;
  /* 11bf2ca3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2ca6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11bf2cac lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11bf2cb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bf2cb5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bf2cbc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11bf2cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2cc8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11bf2cce push edx */
  push32((uint32_t)(EDX));
  /* 11bf2ccf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf2cd2 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2cd3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2cd7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2cda push edx */
  push32((uint32_t)(EDX));
  /* 11bf2cdb call 0x11bf40b0 */
  push32(0x11bf2ce0u); f_11bf40b0();
  /* 11bf2ce0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2ce3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf2ce6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2cea jne 0x11bf2d7f */
  if (!C.zf) goto L_11bf2d7f;
  /* 11bf2cf0 call dword ptr [0x11c13388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13388))), 0x11bf2cf6u);
  /* 11bf2cf6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2cf9 je 0x11bf2d00 */
  if (C.zf) goto L_11bf2d00;
  /* 11bf2cfb jmp 0x11bf2ddd */
  goto L_11bf2ddd;
L_11bf2d00:;
  /* 11bf2d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2d06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2d09 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2d0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2d0d push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2d0e call 0x11bf40b0 */
  push32(0x11bf2d13u); f_11bf40b0();
  /* 11bf2d13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2d16 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11bf2d1c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2d23 jne 0x11bf2d2a */
  if (!C.zf) goto L_11bf2d2a;
  /* 11bf2d25 jmp 0x11bf2ddd */
  goto L_11bf2ddd;
L_11bf2d2a:;
  /* 11bf2d2a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11bf2d2c push 0x11c0ca2c */
  push32((uint32_t)(0x11c0ca2cu));
  /* 11bf2d31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf2d33 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11bf2d39 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2d3a call 0x11be4ad0 */
  push32(0x11bf2d3fu); f_11be4ad0();
  /* 11bf2d3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2d42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf2d45 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2d49 jne 0x11bf2d50 */
  if (!C.zf) goto L_11bf2d50;
  /* 11bf2d4b jmp 0x11bf2ddd */
  goto L_11bf2ddd;
L_11bf2d50:;
  /* 11bf2d50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11bf2d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2d59 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11bf2d5f push eax */
  push32((uint32_t)(EAX));
  /* 11bf2d60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf2d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2d64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2d67 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2d68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2d6b push eax */
  push32((uint32_t)(EAX));
  /* 11bf2d6c call 0x11bf40b0 */
  push32(0x11bf2d71u); f_11bf40b0();
  /* 11bf2d71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2d74 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf2d77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2d7b jne 0x11bf2d7f */
  if (!C.zf) goto L_11bf2d7f;
  /* 11bf2d7d jmp 0x11bf2ddd */
  goto L_11bf2ddd;
L_11bf2d7f:;
  /* 11bf2d7f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11bf2d81 push 0x11c0ca2c */
  push32((uint32_t)(0x11c0ca2cu));
  /* 11bf2d86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf2d88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf2d8b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2d8c call 0x11be4ad0 */
  push32(0x11bf2d91u); f_11be4ad0();
  /* 11bf2d91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2d94 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11bf2d9a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11bf2d9c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11bf2da2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2da5 jne 0x11bf2da9 */
  if (!C.zf) goto L_11bf2da9;
  /* 11bf2da7 jmp 0x11bf2ddd */
  goto L_11bf2ddd;
L_11bf2da9:;
  /* 11bf2da9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf2dac push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2dad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf2db0 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2db1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11bf2db7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf2db9 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2dba call 0x11be82f0 */
  push32(0x11bf2dbfu); f_11be82f0();
  /* 11bf2dbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2dc2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2dc6 je 0x11bf2dd6 */
  if (C.zf) goto L_11bf2dd6;
  /* 11bf2dc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf2dca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf2dcd push edx */
  push32((uint32_t)(EDX));
  /* 11bf2dce call 0x11be5560 */
  push32(0x11bf2dd3u); f_11be5560();
  /* 11bf2dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf2dd6:;
  /* 11bf2dd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2dd8 jmp 0x11bf2f16 */
  goto L_11bf2f16;
L_11bf2ddd:;
  /* 11bf2ddd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2de1 je 0x11bf2df1 */
  if (C.zf) goto L_11bf2df1;
  /* 11bf2de3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf2de5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf2de8 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2de9 call 0x11be5560 */
  push32(0x11bf2deeu); f_11be5560();
  /* 11bf2dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf2df1:;
  /* 11bf2df1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2df4 jmp 0x11bf2f16 */
  goto L_11bf2f16;
L_11bf2df9:;
  /* 11bf2df9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2dfd jne 0x11bf2f13 */
  if (!C.zf) goto L_11bf2f13;
  /* 11bf2e03 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11bf2e0d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2e10 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11bf2e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2e18 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11bf2e1e push edx */
  push32((uint32_t)(EDX));
  /* 11bf2e1f push 0x11c108e8 */
  push32((uint32_t)(0x11c108e8u));
  /* 11bf2e24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2e27 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2e28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2e2b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2e2c call 0x11bf3f10 */
  push32(0x11bf2e31u); f_11bf3f10();
  /* 11bf2e31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf2e36 jne 0x11bf2e40 */
  if (!C.zf) goto L_11bf2e40;
  /* 11bf2e38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2e3b jmp 0x11bf2f16 */
  goto L_11bf2f16;
L_11bf2e40:;
  /* 11bf2e40 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bf2e46 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11bf2e49 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11bf2e53 jmp 0x11bf2e64 */
  goto L_11bf2e64;
L_11bf2e55:;
  /* 11bf2e55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bf2e5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2e5e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11bf2e64:;
  /* 11bf2e64 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2e6b jge 0x11bf2f0f */
  if ((C.sf==C.of)) goto L_11bf2f0f;
  /* 11bf2e71 cmp dword ptr [0x11c0eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2e78 jle 0x11bf2eab */
  if ((C.zf||C.sf!=C.of)) goto L_11bf2eab;
  /* 11bf2e7a push 4 */
  push32((uint32_t)(0x4u));
  /* 11bf2e7c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bf2e82 mov dl, byte ptr [ecx*2 + 0x11c108e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x11c108e8)));
  /* 11bf2e89 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11bf2e8f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11bf2e95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2e9a push eax */
  push32((uint32_t)(EAX));
  /* 11bf2e9b call 0x11beaae0 */
  push32(0x11bf2ea0u); f_11beaae0();
  /* 11bf2ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2ea3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11bf2ea9 jmp 0x11bf2ede */
  goto L_11bf2ede;
L_11bf2eab:;
  /* 11bf2eab mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11bf2eb1 mov dl, byte ptr [ecx*2 + 0x11c108e8] */
  DL = (r8((uint32_t)(ECX*2 + 0x11c108e8)));
  /* 11bf2eb8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11bf2ebe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11bf2ec4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2ec9 mov ecx, dword ptr [0x11c0ec98] */
  ECX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf2ecf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf2ed1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bf2ed5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf2ed8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11bf2ede:;
  /* 11bf2ede cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2ee5 je 0x11bf2f08 */
  if (C.zf) goto L_11bf2f08;
  /* 11bf2ee7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bf2eed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf2ef0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf2ef3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11bf2efa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11bf2efe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11bf2f04 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11bf2f06 jmp 0x11bf2f0a */
  goto L_11bf2f0a;
L_11bf2f08:;
  /* 11bf2f08 jmp 0x11bf2f0f */
  goto L_11bf2f0f;
L_11bf2f0a:;
  /* 11bf2f0a jmp 0x11bf2e55 */
  goto L_11bf2e55;
L_11bf2f0f:;
  /* 11bf2f0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2f11 jmp 0x11bf2f16 */
  goto L_11bf2f16;
L_11bf2f13:;
  /* 11bf2f13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11bf2f16:;
  /* 11bf2f16 mov esp, ebp */
  ESP = (EBP);
  /* 11bf2f18 pop ebp */
  EBP = (pop32());
  /* 11bf2f19 ret  */
  ESPCHK(0x11bf2c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f20 @ 0x11bf2f20 (10 bytes, 5 insns) */
void f_11bf2f20(void) {
  FTRACE(0x11bf2f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf2f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf2f21 mov ebp, esp */
  EBP = (ESP);
  /* 11bf2f23 mov eax, dword ptr [0x11c0fd88] */
  EAX = (r32((uint32_t)(0x11c0fd88)));
  /* 11bf2f28 pop ebp */
  EBP = (pop32());
  /* 11bf2f29 ret  */
  ESPCHK(0x11bf2f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f30 @ 0x11bf2f30 (575 bytes, 196 insns) */
void f_11bf2f30(void) {
  FTRACE(0x11bf2f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf2f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf2f31 mov ebp, esp */
  EBP = (ESP);
  /* 11bf2f33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf2f35 push 0x11c0ca38 */
  push32((uint32_t)(0x11c0ca38u));
  /* 11bf2f3a push 0x11bedbd8 */
  push32((uint32_t)(0x11bedbd8u));
  /* 11bf2f3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11bf2f45 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2f46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11bf2f4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf2f50 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf2f51 push esi */
  push32((uint32_t)(ESI));
  /* 11bf2f52 push edi */
  push32((uint32_t)(EDI));
  /* 11bf2f53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf2f56 cmp dword ptr [0x11c108f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2f5d jne 0x11bf2fae */
  if (!C.zf) goto L_11bf2fae;
  /* 11bf2f5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11bf2f62 push eax */
  push32((uint32_t)(EAX));
  /* 11bf2f63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf2f65 push 0x11c0c16c */
  push32((uint32_t)(0x11c0c16cu));
  /* 11bf2f6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf2f6c call dword ptr [0x11c132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f4))), 0x11bf2f72u);
  /* 11bf2f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf2f74 je 0x11bf2f82 */
  if (C.zf) goto L_11bf2f82;
  /* 11bf2f76 mov dword ptr [0x11c108f4], 1 */
  w32((uint32_t)(0x11c108f4), (0x1u));
  /* 11bf2f80 jmp 0x11bf2fae */
  goto L_11bf2fae;
L_11bf2f82:;
  /* 11bf2f82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11bf2f85 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2f86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf2f88 push 0x11c0c168 */
  push32((uint32_t)(0x11c0c168u));
  /* 11bf2f8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf2f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2f91 call dword ptr [0x11c132f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f8))), 0x11bf2f97u);
  /* 11bf2f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf2f99 je 0x11bf2fa7 */
  if (C.zf) goto L_11bf2fa7;
  /* 11bf2f9b mov dword ptr [0x11c108f4], 2 */
  w32((uint32_t)(0x11c108f4), (0x2u));
  /* 11bf2fa5 jmp 0x11bf2fae */
  goto L_11bf2fae;
L_11bf2fa7:;
  /* 11bf2fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf2fa9 jmp 0x11bf3189 */
  goto L_11bf3189;
L_11bf2fae:;
  /* 11bf2fae cmp dword ptr [0x11c108f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c108f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2fb5 jne 0x11bf2fd2 */
  if (!C.zf) goto L_11bf2fd2;
  /* 11bf2fb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf2fba push edx */
  push32((uint32_t)(EDX));
  /* 11bf2fbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2fbe push eax */
  push32((uint32_t)(EAX));
  /* 11bf2fbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2fc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf2fc6 push edx */
  push32((uint32_t)(EDX));
  /* 11bf2fc7 call dword ptr [0x11c132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f4))), 0x11bf2fcdu);
  /* 11bf2fcd jmp 0x11bf3189 */
  goto L_11bf3189;
L_11bf2fd2:;
  /* 11bf2fd2 cmp dword ptr [0x11c108f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11c108f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2fd9 jne 0x11bf3187 */
  if (!C.zf) goto L_11bf3187;
  /* 11bf2fdf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf2fe3 jne 0x11bf2fed */
  if (!C.zf) goto L_11bf2fed;
  /* 11bf2fe5 mov eax, dword ptr [0x11c10868] */
  EAX = (r32((uint32_t)(0x11c10868)));
  /* 11bf2fea mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11bf2fed:;
  /* 11bf2fed push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2fef push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf2ff5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf2ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf2ff9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf2ffc push edx */
  push32((uint32_t)(EDX));
  /* 11bf2ffd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bf3002 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf3005 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3006 call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bf300cu);
  /* 11bf300c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11bf300f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3013 jne 0x11bf301c */
  if (!C.zf) goto L_11bf301c;
  /* 11bf3015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3017 jmp 0x11bf3189 */
  goto L_11bf3189;
L_11bf301c:;
  /* 11bf301c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bf3023 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf3026 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3029 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bf302b call 0x11be7c70 */
  push32(0x11bf3030u); f_11be7c70();
  /* 11bf3030 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11bf3033 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf3036 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11bf3039 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11bf303c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf303f push edx */
  push32((uint32_t)(EDX));
  /* 11bf3040 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3042 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bf3045 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3046 call 0x11be8840 */
  push32(0x11bf304bu); f_11be8840();
  /* 11bf304b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf304e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bf3055 jmp 0x11bf306e */
  goto L_11bf306e;
  /* 11bf3057 mov eax, 1 */
  EAX = (0x1u);
  /* 11bf305c ret  */
  ESPCHK(0x11bf2f30u, _esp0);
  ESP += 4; return;
  /* 11bf305d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf3060 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11bf3067 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bf306e:;
  /* 11bf306e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3072 jne 0x11bf307b */
  if (!C.zf) goto L_11bf307b;
  /* 11bf3074 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3076 jmp 0x11bf3189 */
  goto L_11bf3189;
L_11bf307b:;
  /* 11bf307b push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf307d push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf307f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf3082 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3083 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bf3086 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3087 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf308a push eax */
  push32((uint32_t)(EAX));
  /* 11bf308b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf308e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf308f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bf3094 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf3097 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3098 call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bf309eu);
  /* 11bf309e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf30a0 jne 0x11bf30a9 */
  if (!C.zf) goto L_11bf30a9;
  /* 11bf30a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf30a4 jmp 0x11bf3189 */
  goto L_11bf3189;
L_11bf30a9:;
  /* 11bf30a9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11bf30b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf30b3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11bf30b7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf30ba and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bf30bc call 0x11be7c70 */
  push32(0x11bf30c1u); f_11be7c70();
  /* 11bf30c1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11bf30c4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf30c7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11bf30ca mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11bf30cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bf30d4 jmp 0x11bf30ed */
  goto L_11bf30ed;
  /* 11bf30d6 mov eax, 1 */
  EAX = (0x1u);
  /* 11bf30db ret  */
  ESPCHK(0x11bf2f30u, _esp0);
  ESP += 4; return;
  /* 11bf30dc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf30df mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11bf30e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bf30ed:;
  /* 11bf30ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf30f1 jne 0x11bf30fa */
  if (!C.zf) goto L_11bf30fa;
  /* 11bf30f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf30f5 jmp 0x11bf3189 */
  goto L_11bf3189;
L_11bf30fa:;
  /* 11bf30fa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf30fe jne 0x11bf3109 */
  if (!C.zf) goto L_11bf3109;
  /* 11bf3100 mov edx, dword ptr [0x11c10858] */
  EDX = (r32((uint32_t)(0x11c10858)));
  /* 11bf3106 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11bf3109:;
  /* 11bf3109 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf310c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf310f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11bf3115 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3118 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf311b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11bf3122 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf3125 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3126 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf3129 push edx */
  push32((uint32_t)(EDX));
  /* 11bf312a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11bf312d push eax */
  push32((uint32_t)(EAX));
  /* 11bf312e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3131 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3132 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11bf3135 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3136 call dword ptr [0x11c132f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132f8))), 0x11bf313cu);
  /* 11bf313c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11bf313f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3142 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf3145 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3147 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11bf314c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3152 je 0x11bf3168 */
  if (C.zf) goto L_11bf3168;
  /* 11bf3154 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3157 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf315a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf315c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bf3160 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3166 je 0x11bf316c */
  if (C.zf) goto L_11bf316c;
L_11bf3168:;
  /* 11bf3168 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf316a jmp 0x11bf3189 */
  goto L_11bf3189;
L_11bf316c:;
  /* 11bf316c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf316f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bf3171 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3172 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf3175 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3176 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf3179 push edx */
  push32((uint32_t)(EDX));
  /* 11bf317a call 0x11bec9c0 */
  push32(0x11bf317fu); f_11bec9c0();
  /* 11bf317f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3182 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf3185 jmp 0x11bf3189 */
  goto L_11bf3189;
L_11bf3187:;
  /* 11bf3187 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf3189:;
  /* 11bf3189 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11bf318c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf318f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11bf3196 pop edi */
  EDI = (pop32());
  /* 11bf3197 pop esi */
  ESI = (pop32());
  /* 11bf3198 pop ebx */
  EBX = (pop32());
  /* 11bf3199 mov esp, ebp */
  ESP = (EBP);
  /* 11bf319b pop ebp */
  EBP = (pop32());
  /* 11bf319c ret  */
  ESPCHK(0x11bf2f30u, _esp0);
  ESP += 4; return;
}

/* FUN_100131a0 @ 0x11bf31a0 (208 bytes, 85 insns) */
void f_11bf31a0(void) {
  FTRACE(0x11bf31a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf31a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf31a1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf31a3 push edi */
  push32((uint32_t)(EDI));
  /* 11bf31a4 push esi */
  push32((uint32_t)(ESI));
  /* 11bf31a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf31a6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf31a9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf31ac lea eax, [0x11c10850] */
  EAX = ((uint32_t)(0x11c10850));
  /* 11bf31b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf31b6 jne 0x11bf31f3 */
  if (!C.zf) goto L_11bf31f3;
  /* 11bf31b8 mov al, 0xff */
  AL = (0xffu);
  /* 11bf31ba mov edi, edi */
  EDI = (EDI);
L_11bf31bc:;
  /* 11bf31bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf31be je 0x11bf31ee */
  if (C.zf) goto L_11bf31ee;
  /* 11bf31c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11bf31c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11bf31c3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11bf31c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11bf31c6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf31c8 je 0x11bf31bc */
  if (C.zf) goto L_11bf31bc;
  /* 11bf31ca sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11bf31cc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf31ce sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11bf31d0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11bf31d3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bf31d5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bf31d7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11bf31d9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11bf31db cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf31dd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11bf31df and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11bf31e2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bf31e4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11bf31e6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf31e8 je 0x11bf31bc */
  if (C.zf) goto L_11bf31bc;
  /* 11bf31ea sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11bf31ec sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11bf31ee:;
  /* 11bf31ee movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11bf31f1 jmp 0x11bf326b */
  goto L_11bf326b;
L_11bf31f3:;
  /* 11bf31f3 lock inc dword ptr [0x11c109e4] */
  x86_unimpl("lock inc @ 0x11bf31f3");
  /* 11bf31fa cmp dword ptr [0x11c109d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3201 jg 0x11bf3207 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf3207;
  /* 11bf3203 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3205 jmp 0x11bf321c */
  goto L_11bf321c;
L_11bf3207:;
  /* 11bf3207 lock dec dword ptr [0x11c109e4] */
  x86_unimpl("lock dec @ 0x11bf3207");
  /* 11bf320e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bf3210 call 0x11be84d0 */
  push32(0x11bf3215u); f_11be84d0();
  /* 11bf3215 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11bf321c:;
  /* 11bf321c mov eax, 0xff */
  EAX = (0xffu);
  /* 11bf3221 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11bf3223 nop  */
  /* nop */
L_11bf3224:;
  /* 11bf3224 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf3226 je 0x11bf324f */
  if (C.zf) goto L_11bf324f;
  /* 11bf3228 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11bf322a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11bf322b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11bf322d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11bf322e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf3230 je 0x11bf3224 */
  if (C.zf) goto L_11bf3224;
  /* 11bf3232 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3233 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf3234 call 0x11bf4310 */
  push32(0x11bf3239u); f_11bf4310();
  /* 11bf3239 mov ebx, eax */
  EBX = (EAX);
  /* 11bf323b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf323e call 0x11bf4310 */
  push32(0x11bf3243u); f_11bf4310();
  /* 11bf3243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3246 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf3248 je 0x11bf3224 */
  if (C.zf) goto L_11bf3224;
  /* 11bf324a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf324c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11bf324f:;
  /* 11bf324f mov ebx, eax */
  EBX = (EAX);
  /* 11bf3251 pop eax */
  EAX = (pop32());
  /* 11bf3252 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3254 jne 0x11bf325f */
  if (!C.zf) goto L_11bf325f;
  /* 11bf3256 lock dec dword ptr [0x11c109e4] */
  x86_unimpl("lock dec @ 0x11bf3256");
  /* 11bf325d jmp 0x11bf3269 */
  goto L_11bf3269;
L_11bf325f:;
  /* 11bf325f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bf3261 call 0x11be8570 */
  push32(0x11bf3266u); f_11be8570();
  /* 11bf3266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf3269:;
  /* 11bf3269 mov eax, ebx */
  EAX = (EBX);
L_11bf326b:;
  /* 11bf326b pop ebx */
  EBX = (pop32());
  /* 11bf326c pop esi */
  ESI = (pop32());
  /* 11bf326d pop edi */
  EDI = (pop32());
  /* 11bf326e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11bf326f ret  */
  ESPCHK(0x11bf31a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013270 @ 0x11bf3270 (257 bytes, 103 insns) */
void f_11bf3270(void) {
  FTRACE(0x11bf3270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf3270 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf3271 mov ebp, esp */
  EBP = (ESP);
  /* 11bf3273 push edi */
  push32((uint32_t)(EDI));
  /* 11bf3274 push esi */
  push32((uint32_t)(ESI));
  /* 11bf3275 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf3276 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3279 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf327b je 0x11bf336a */
  if (C.zf) goto L_11bf336a;
  /* 11bf3281 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3284 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf3287 lea eax, [0x11c10850] */
  EAX = ((uint32_t)(0x11c10850));
  /* 11bf328d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3291 jne 0x11bf32e1 */
  if (!C.zf) goto L_11bf32e1;
  /* 11bf3293 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11bf3295 mov bl, 0x5a */
  BL = (0x5au);
  /* 11bf3297 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11bf3299 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11bf329c:;
  /* 11bf329c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11bf329e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11bf32a0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11bf32a2 je 0x11bf32c5 */
  if (C.zf) goto L_11bf32c5;
  /* 11bf32a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11bf32a6 je 0x11bf32c5 */
  if (C.zf) goto L_11bf32c5;
  /* 11bf32a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11bf32a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11bf32aa cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf32ac jb 0x11bf32b4 */
  if (C.cf) goto L_11bf32b4;
  /* 11bf32ae cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf32b0 ja 0x11bf32b4 */
  if ((!C.cf&&!C.zf)) goto L_11bf32b4;
  /* 11bf32b2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11bf32b4:;
  /* 11bf32b4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf32b6 jb 0x11bf32be */
  if (C.cf) goto L_11bf32be;
  /* 11bf32b8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf32ba ja 0x11bf32be */
  if ((!C.cf&&!C.zf)) goto L_11bf32be;
  /* 11bf32bc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11bf32be:;
  /* 11bf32be cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf32c0 jne 0x11bf32cf */
  if (!C.zf) goto L_11bf32cf;
  /* 11bf32c2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11bf32c3 jne 0x11bf329c */
  if (!C.zf) goto L_11bf329c;
L_11bf32c5:;
  /* 11bf32c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf32c7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf32c9 je 0x11bf336a */
  if (C.zf) goto L_11bf336a;
L_11bf32cf:;
  /* 11bf32cf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11bf32d4 jb 0x11bf336a */
  if (C.cf) goto L_11bf336a;
  /* 11bf32da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf32dc jmp 0x11bf336a */
  goto L_11bf336a;
L_11bf32e1:;
  /* 11bf32e1 lock inc dword ptr [0x11c109e4] */
  x86_unimpl("lock inc @ 0x11bf32e1");
  /* 11bf32e8 cmp dword ptr [0x11c109d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf32ef jg 0x11bf32f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf32f5;
  /* 11bf32f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf32f3 jmp 0x11bf330e */
  goto L_11bf330e;
L_11bf32f5:;
  /* 11bf32f5 lock dec dword ptr [0x11c109e4] */
  x86_unimpl("lock dec @ 0x11bf32f5");
  /* 11bf32fc mov ebx, ecx */
  EBX = (ECX);
  /* 11bf32fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bf3300 call 0x11be84d0 */
  push32(0x11bf3305u); f_11be84d0();
  /* 11bf3305 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11bf330c mov ecx, ebx */
  ECX = (EBX);
L_11bf330e:;
  /* 11bf330e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3310 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11bf3312 mov edi, edi */
  EDI = (EDI);
L_11bf3314:;
  /* 11bf3314 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11bf3316 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3318 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11bf331a je 0x11bf333f */
  if (C.zf) goto L_11bf333f;
  /* 11bf331c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11bf331e je 0x11bf333f */
  if (C.zf) goto L_11bf333f;
  /* 11bf3320 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11bf3321 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11bf3322 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3323 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3324 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf3325 call 0x11bf4310 */
  push32(0x11bf332au); f_11bf4310();
  /* 11bf332a mov ebx, eax */
  EBX = (EAX);
  /* 11bf332c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf332f call 0x11bf4310 */
  push32(0x11bf3334u); f_11bf4310();
  /* 11bf3334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3337 pop ecx */
  ECX = (pop32());
  /* 11bf3338 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf333a jne 0x11bf3345 */
  if (!C.zf) goto L_11bf3345;
  /* 11bf333c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11bf333d jne 0x11bf3314 */
  if (!C.zf) goto L_11bf3314;
L_11bf333f:;
  /* 11bf333f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3341 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3343 je 0x11bf334e */
  if (C.zf) goto L_11bf334e;
L_11bf3345:;
  /* 11bf3345 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11bf334a jb 0x11bf334e */
  if (C.cf) goto L_11bf334e;
  /* 11bf334c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11bf334e:;
  /* 11bf334e pop eax */
  EAX = (pop32());
  /* 11bf334f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3351 jne 0x11bf335c */
  if (!C.zf) goto L_11bf335c;
  /* 11bf3353 lock dec dword ptr [0x11c109e4] */
  x86_unimpl("lock dec @ 0x11bf3353");
  /* 11bf335a jmp 0x11bf336a */
  goto L_11bf336a;
L_11bf335c:;
  /* 11bf335c mov ebx, ecx */
  EBX = (ECX);
  /* 11bf335e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bf3360 call 0x11be8570 */
  push32(0x11bf3365u); f_11be8570();
  /* 11bf3365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3368 mov ecx, ebx */
  ECX = (EBX);
L_11bf336a:;
  /* 11bf336a mov eax, ecx */
  EAX = (ECX);
  /* 11bf336c pop ebx */
  EBX = (pop32());
  /* 11bf336d pop esi */
  ESI = (pop32());
  /* 11bf336e pop edi */
  EDI = (pop32());
  /* 11bf336f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11bf3370 ret  */
  ESPCHK(0x11bf3270u, _esp0);
  ESP += 4; return;
}

/* FUN_10013380 @ 0x11bf3380 (255 bytes, 88 insns) */
void f_11bf3380(void) {
  FTRACE(0x11bf3380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf3380 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf3381 mov ebp, esp */
  EBP = (ESP);
  /* 11bf3383 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11bf3386:;
  /* 11bf3386 cmp dword ptr [0x11c0eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf338d jle 0x11bf33a6 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf33a6;
  /* 11bf338f push 8 */
  push32((uint32_t)(0x8u));
  /* 11bf3391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3394 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3396 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf3398 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3399 call 0x11beaae0 */
  push32(0x11bf339eu); f_11beaae0();
  /* 11bf339e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf33a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11bf33a4 jmp 0x11bf33bf */
  goto L_11bf33bf;
L_11bf33a6:;
  /* 11bf33a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf33a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf33ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf33ad mov ecx, dword ptr [0x11c0ec98] */
  ECX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf33b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf33b5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bf33b9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf33bc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bf33bf:;
  /* 11bf33bf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf33c3 je 0x11bf33d0 */
  if (C.zf) goto L_11bf33d0;
  /* 11bf33c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf33c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf33cb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf33ce jmp 0x11bf3386 */
  goto L_11bf3386;
L_11bf33d0:;
  /* 11bf33d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf33d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf33d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf33d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf33da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf33dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf33e0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf33e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf33e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bf33e9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf33ed je 0x11bf33f5 */
  if (C.zf) goto L_11bf33f5;
  /* 11bf33ef cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf33f3 jne 0x11bf3408 */
  if (!C.zf) goto L_11bf3408;
L_11bf33f5:;
  /* 11bf33f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf33f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf33fa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf33fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf33ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3402 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3405 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11bf3408:;
  /* 11bf3408 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11bf340f:;
  /* 11bf340f cmp dword ptr [0x11c0eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3416 jle 0x11bf342b */
  if ((C.zf||C.sf!=C.of)) goto L_11bf342b;
  /* 11bf3418 push 4 */
  push32((uint32_t)(0x4u));
  /* 11bf341a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf341d push edx */
  push32((uint32_t)(EDX));
  /* 11bf341e call 0x11beaae0 */
  push32(0x11bf3423u); f_11beaae0();
  /* 11bf3423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3426 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf3429 jmp 0x11bf3440 */
  goto L_11bf3440;
L_11bf342b:;
  /* 11bf342b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf342e mov ecx, dword ptr [0x11c0ec98] */
  ECX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf3434 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3436 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bf343a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf343d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11bf3440:;
  /* 11bf3440 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3444 je 0x11bf346b */
  if (C.zf) goto L_11bf346b;
  /* 11bf3446 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf3449 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf344c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf344f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11bf3453 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf3456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3459 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf345b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf345d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf3460 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3463 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3466 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11bf3469 jmp 0x11bf340f */
  goto L_11bf340f;
L_11bf346b:;
  /* 11bf346b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf346f jne 0x11bf3478 */
  if (!C.zf) goto L_11bf3478;
  /* 11bf3471 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf3474 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf3476 jmp 0x11bf347b */
  goto L_11bf347b;
L_11bf3478:;
  /* 11bf3478 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11bf347b:;
  /* 11bf347b mov esp, ebp */
  ESP = (EBP);
  /* 11bf347d pop ebp */
  EBP = (pop32());
  /* 11bf347e ret  */
  ESPCHK(0x11bf3380u, _esp0);
  ESP += 4; return;
}

/* FUN_10013480 @ 0x11bf3480 (17 bytes, 8 insns) */
void f_11bf3480(void) {
  FTRACE(0x11bf3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf3480 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf3481 mov ebp, esp */
  EBP = (ESP);
  /* 11bf3483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3486 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3487 call 0x11bf3380 */
  push32(0x11bf348cu); f_11bf3380();
  /* 11bf348c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf348f pop ebp */
  EBP = (pop32());
  /* 11bf3490 ret  */
  ESPCHK(0x11bf3480u, _esp0);
  ESP += 4; return;
}

/* FUN_100134a0 @ 0x11bf34a0 (297 bytes, 106 insns) */
void f_11bf34a0(void) {
  FTRACE(0x11bf34a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf34a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf34a1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf34a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf34a6 push esi */
  push32((uint32_t)(ESI));
L_11bf34a7:;
  /* 11bf34a7 cmp dword ptr [0x11c0eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf34ae jle 0x11bf34c7 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf34c7;
  /* 11bf34b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11bf34b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf34b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf34b7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf34b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf34ba call 0x11beaae0 */
  push32(0x11bf34bfu); f_11beaae0();
  /* 11bf34bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf34c2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf34c5 jmp 0x11bf34e0 */
  goto L_11bf34e0;
L_11bf34c7:;
  /* 11bf34c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf34ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf34cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf34ce mov ecx, dword ptr [0x11c0ec98] */
  ECX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf34d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf34d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bf34da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf34dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11bf34e0:;
  /* 11bf34e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf34e4 je 0x11bf34f1 */
  if (C.zf) goto L_11bf34f1;
  /* 11bf34e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf34e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf34ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf34ef jmp 0x11bf34a7 */
  goto L_11bf34a7;
L_11bf34f1:;
  /* 11bf34f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf34f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf34f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf34f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf34fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf34fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3501 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf3504 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf3507 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11bf350a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf350e je 0x11bf3516 */
  if (C.zf) goto L_11bf3516;
  /* 11bf3510 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3514 jne 0x11bf3529 */
  if (!C.zf) goto L_11bf3529;
L_11bf3516:;
  /* 11bf3516 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf351b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf351d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf3520 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3523 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3526 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11bf3529:;
  /* 11bf3529 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11bf3530 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11bf3537:;
  /* 11bf3537 cmp dword ptr [0x11c0eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf353e jle 0x11bf3553 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf3553;
  /* 11bf3540 push 4 */
  push32((uint32_t)(0x4u));
  /* 11bf3542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf3545 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3546 call 0x11beaae0 */
  push32(0x11bf354bu); f_11beaae0();
  /* 11bf354b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf354e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11bf3551 jmp 0x11bf3568 */
  goto L_11bf3568;
L_11bf3553:;
  /* 11bf3553 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf3556 mov ecx, dword ptr [0x11c0ec98] */
  ECX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf355c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf355e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11bf3562 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3565 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11bf3568:;
  /* 11bf3568 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf356c je 0x11bf35a9 */
  if (C.zf) goto L_11bf35a9;
  /* 11bf356e push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3570 push 0xa */
  push32((uint32_t)(0xau));
  /* 11bf3572 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf3575 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3576 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3579 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf357a call 0x11bf4440 */
  push32(0x11bf357fu); f_11bf4440();
  /* 11bf357f mov ecx, eax */
  ECX = (EAX);
  /* 11bf3581 mov esi, edx */
  ESI = (EDX);
  /* 11bf3583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf3586 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3589 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf358a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf358c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf358e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bf3591 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11bf3594 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3599 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf359b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf359e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf35a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf35a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11bf35a7 jmp 0x11bf3537 */
  goto L_11bf3537;
L_11bf35a9:;
  /* 11bf35a9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf35ad jne 0x11bf35be */
  if (!C.zf) goto L_11bf35be;
  /* 11bf35af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf35b2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf35b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf35b7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf35ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf35bc jmp 0x11bf35c4 */
  goto L_11bf35c4;
L_11bf35be:;
  /* 11bf35be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf35c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11bf35c4:;
  /* 11bf35c4 pop esi */
  ESI = (pop32());
  /* 11bf35c5 mov esp, ebp */
  ESP = (EBP);
  /* 11bf35c7 pop ebp */
  EBP = (pop32());
  /* 11bf35c8 ret  */
  ESPCHK(0x11bf34a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135d0 @ 0x11bf35d0 (61 bytes, 18 insns) */
void f_11bf35d0(void) {
  FTRACE(0x11bf35d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf35d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf35d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf35d3 cmp dword ptr [0x11c109b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf35da jne 0x11bf360b */
  if (!C.zf) goto L_11bf360b;
  /* 11bf35dc push 0xb */
  push32((uint32_t)(0xbu));
  /* 11bf35de call 0x11be84d0 */
  push32(0x11bf35e3u); f_11be84d0();
  /* 11bf35e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf35e6 cmp dword ptr [0x11c109b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf35ed jne 0x11bf3601 */
  if (!C.zf) goto L_11bf3601;
  /* 11bf35ef call 0x11bf3630 */
  push32(0x11bf35f4u); f_11bf3630();
  /* 11bf35f4 mov eax, dword ptr [0x11c109b0] */
  EAX = (r32((uint32_t)(0x11c109b0)));
  /* 11bf35f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf35fc mov dword ptr [0x11c109b0], eax */
  w32((uint32_t)(0x11c109b0), (EAX));
L_11bf3601:;
  /* 11bf3601 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11bf3603 call 0x11be8570 */
  push32(0x11bf3608u); f_11be8570();
  /* 11bf3608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf360b:;
  /* 11bf360b pop ebp */
  EBP = (pop32());
  /* 11bf360c ret  */
  ESPCHK(0x11bf35d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013610 @ 0x11bf3610 (30 bytes, 11 insns) */
void f_11bf3610(void) {
  FTRACE(0x11bf3610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf3610 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf3611 mov ebp, esp */
  EBP = (ESP);
  /* 11bf3613 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11bf3615 call 0x11be84d0 */
  push32(0x11bf361au); f_11be84d0();
  /* 11bf361a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf361d call 0x11bf3630 */
  push32(0x11bf3622u); f_11bf3630();
  /* 11bf3622 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11bf3624 call 0x11be8570 */
  push32(0x11bf3629u); f_11be8570();
  /* 11bf3629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf362c pop ebp */
  EBP = (pop32());
  /* 11bf362d ret  */
  ESPCHK(0x11bf3610u, _esp0);
  ESP += 4; return;
}

/* FUN_10013630 @ 0x11bf3630 (939 bytes, 266 insns) */
void f_11bf3630(void) {
  FTRACE(0x11bf3630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf3630 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf3631 mov ebp, esp */
  EBP = (ESP);
  /* 11bf3633 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3636 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bf363d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11bf363f call 0x11be84d0 */
  push32(0x11bf3644u); f_11be84d0();
  /* 11bf3644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3647 mov dword ptr [0x11c108f8], 0 */
  w32((uint32_t)(0x11c108f8), (0x0u));
  /* 11bf3651 mov dword ptr [0x11c0fe38], 0xffffffff */
  w32((uint32_t)(0x11c0fe38), (0xffffffffu));
  /* 11bf365b mov eax, dword ptr [0x11c0fe38] */
  EAX = (r32((uint32_t)(0x11c0fe38)));
  /* 11bf3660 mov dword ptr [0x11c0fe28], eax */
  w32((uint32_t)(0x11c0fe28), (EAX));
  /* 11bf3665 push 0x11c0ca98 */
  push32((uint32_t)(0x11c0ca98u));
  /* 11bf366a call 0x11bf44b0 */
  push32(0x11bf366fu); f_11bf44b0();
  /* 11bf366f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3672 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf3675 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3679 jne 0x11bf37b3 */
  if (!C.zf) goto L_11bf37b3;
  /* 11bf367f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11bf3681 call 0x11be8570 */
  push32(0x11bf3686u); f_11be8570();
  /* 11bf3686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3689 push 0x11c10900 */
  push32((uint32_t)(0x11c10900u));
  /* 11bf368e call dword ptr [0x11c132b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132b8))), 0x11bf3694u);
  /* 11bf3694 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3697 je 0x11bf37ae */
  if (C.zf) goto L_11bf37ae;
  /* 11bf369d mov dword ptr [0x11c108f8], 1 */
  w32((uint32_t)(0x11c108f8), (0x1u));
  /* 11bf36a7 mov ecx, dword ptr [0x11c10900] */
  ECX = (r32((uint32_t)(0x11c10900)));
  /* 11bf36ad imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf36b0 mov dword ptr [0x11c0fd90], ecx */
  w32((uint32_t)(0x11c0fd90), (ECX));
  /* 11bf36b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf36b8 mov dx, word ptr [0x11c10946] */
  DX = (r16((uint32_t)(0x11c10946)));
  /* 11bf36bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf36c1 je 0x11bf36d9 */
  if (C.zf) goto L_11bf36d9;
  /* 11bf36c3 mov eax, dword ptr [0x11c10954] */
  EAX = (r32((uint32_t)(0x11c10954)));
  /* 11bf36c8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf36cb mov ecx, dword ptr [0x11c0fd90] */
  ECX = (r32((uint32_t)(0x11c0fd90)));
  /* 11bf36d1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf36d3 mov dword ptr [0x11c0fd90], ecx */
  w32((uint32_t)(0x11c0fd90), (ECX));
L_11bf36d9:;
  /* 11bf36d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf36db mov dx, word ptr [0x11c1099a] */
  DX = (r16((uint32_t)(0x11c1099a)));
  /* 11bf36e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf36e4 je 0x11bf370e */
  if (C.zf) goto L_11bf370e;
  /* 11bf36e6 cmp dword ptr [0x11c109a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf36ed je 0x11bf370e */
  if (C.zf) goto L_11bf370e;
  /* 11bf36ef mov dword ptr [0x11c0fd94], 1 */
  w32((uint32_t)(0x11c0fd94), (0x1u));
  /* 11bf36f9 mov eax, dword ptr [0x11c109a8] */
  EAX = (r32((uint32_t)(0x11c109a8)));
  /* 11bf36fe sub eax, dword ptr [0x11c10954] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c10954))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3704 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3707 mov dword ptr [0x11c0fd98], eax */
  w32((uint32_t)(0x11c0fd98), (EAX));
  /* 11bf370c jmp 0x11bf3722 */
  goto L_11bf3722;
L_11bf370e:;
  /* 11bf370e mov dword ptr [0x11c0fd94], 0 */
  w32((uint32_t)(0x11c0fd94), (0x0u));
  /* 11bf3718 mov dword ptr [0x11c0fd98], 0 */
  w32((uint32_t)(0x11c0fd98), (0x0u));
L_11bf3722:;
  /* 11bf3722 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11bf3725 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3726 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3728 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11bf372a mov edx, dword ptr [0x11c0fe1c] */
  EDX = (r32((uint32_t)(0x11c0fe1c)));
  /* 11bf3730 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3731 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf3733 push 0x11c10904 */
  push32((uint32_t)(0x11c10904u));
  /* 11bf3738 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bf373d mov eax, dword ptr [0x11c10868] */
  EAX = (r32((uint32_t)(0x11c10868)));
  /* 11bf3742 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3743 call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bf3749u);
  /* 11bf3749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf374b je 0x11bf375f */
  if (C.zf) goto L_11bf375f;
  /* 11bf374d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3751 jne 0x11bf375f */
  if (!C.zf) goto L_11bf375f;
  /* 11bf3753 mov ecx, dword ptr [0x11c0fe1c] */
  ECX = (r32((uint32_t)(0x11c0fe1c)));
  /* 11bf3759 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11bf375d jmp 0x11bf3768 */
  goto L_11bf3768;
L_11bf375f:;
  /* 11bf375f mov edx, dword ptr [0x11c0fe1c] */
  EDX = (r32((uint32_t)(0x11c0fe1c)));
  /* 11bf3765 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11bf3768:;
  /* 11bf3768 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11bf376b push eax */
  push32((uint32_t)(EAX));
  /* 11bf376c push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf376e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11bf3770 mov ecx, dword ptr [0x11c0fe20] */
  ECX = (r32((uint32_t)(0x11c0fe20)));
  /* 11bf3776 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3777 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf3779 push 0x11c10958 */
  push32((uint32_t)(0x11c10958u));
  /* 11bf377e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bf3783 mov edx, dword ptr [0x11c10868] */
  EDX = (r32((uint32_t)(0x11c10868)));
  /* 11bf3789 push edx */
  push32((uint32_t)(EDX));
  /* 11bf378a call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bf3790u);
  /* 11bf3790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf3792 je 0x11bf37a5 */
  if (C.zf) goto L_11bf37a5;
  /* 11bf3794 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3798 jne 0x11bf37a5 */
  if (!C.zf) goto L_11bf37a5;
  /* 11bf379a mov eax, dword ptr [0x11c0fe20] */
  EAX = (r32((uint32_t)(0x11c0fe20)));
  /* 11bf379f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11bf37a3 jmp 0x11bf37ae */
  goto L_11bf37ae;
L_11bf37a5:;
  /* 11bf37a5 mov ecx, dword ptr [0x11c0fe20] */
  ECX = (r32((uint32_t)(0x11c0fe20)));
  /* 11bf37ab mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11bf37ae:;
  /* 11bf37ae jmp 0x11bf39d7 */
  goto L_11bf39d7;
L_11bf37b3:;
  /* 11bf37b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf37b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf37b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf37bb je 0x11bf37dd */
  if (C.zf) goto L_11bf37dd;
  /* 11bf37bd cmp dword ptr [0x11c109ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf37c4 je 0x11bf37ec */
  if (C.zf) goto L_11bf37ec;
  /* 11bf37c6 mov ecx, dword ptr [0x11c109ac] */
  ECX = (r32((uint32_t)(0x11c109ac)));
  /* 11bf37cc push ecx */
  push32((uint32_t)(ECX));
  /* 11bf37cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf37d0 push edx */
  push32((uint32_t)(EDX));
  /* 11bf37d1 call 0x11bf0760 */
  push32(0x11bf37d6u); f_11bf0760();
  /* 11bf37d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf37d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf37db jne 0x11bf37ec */
  if (!C.zf) goto L_11bf37ec;
L_11bf37dd:;
  /* 11bf37dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11bf37df call 0x11be8570 */
  push32(0x11bf37e4u); f_11be8570();
  /* 11bf37e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf37e7 jmp 0x11bf39d7 */
  goto L_11bf39d7;
L_11bf37ec:;
  /* 11bf37ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf37ee mov eax, dword ptr [0x11c109ac] */
  EAX = (r32((uint32_t)(0x11c109ac)));
  /* 11bf37f3 push eax */
  push32((uint32_t)(EAX));
  /* 11bf37f4 call 0x11be5560 */
  push32(0x11bf37f9u); f_11be5560();
  /* 11bf37f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf37fc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11bf3801 push 0x11c0ca90 */
  push32((uint32_t)(0x11c0ca90u));
  /* 11bf3806 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf3808 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf380b push ecx */
  push32((uint32_t)(ECX));
  /* 11bf380c call 0x11be7900 */
  push32(0x11bf3811u); f_11be7900();
  /* 11bf3811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3814 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3817 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3818 call 0x11be4ad0 */
  push32(0x11bf381du); f_11be4ad0();
  /* 11bf381d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3820 mov dword ptr [0x11c109ac], eax */
  w32((uint32_t)(0x11c109ac), (EAX));
  /* 11bf3825 cmp dword ptr [0x11c109ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf382c jne 0x11bf383d */
  if (!C.zf) goto L_11bf383d;
  /* 11bf382e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11bf3830 call 0x11be8570 */
  push32(0x11bf3835u); f_11be8570();
  /* 11bf3835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3838 jmp 0x11bf39d7 */
  goto L_11bf39d7;
L_11bf383d:;
  /* 11bf383d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3840 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3841 mov eax, dword ptr [0x11c109ac] */
  EAX = (r32((uint32_t)(0x11c109ac)));
  /* 11bf3846 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3847 call 0x11be7a80 */
  push32(0x11bf384cu); f_11be7a80();
  /* 11bf384c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf384f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11bf3851 call 0x11be8570 */
  push32(0x11bf3856u); f_11be8570();
  /* 11bf3856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3859 push 3 */
  push32((uint32_t)(0x3u));
  /* 11bf385b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf385e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf385f mov edx, dword ptr [0x11c0fe1c] */
  EDX = (r32((uint32_t)(0x11c0fe1c)));
  /* 11bf3865 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3866 call 0x11be82f0 */
  push32(0x11bf386bu); f_11be82f0();
  /* 11bf386b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf386e mov eax, dword ptr [0x11c0fe1c] */
  EAX = (r32((uint32_t)(0x11c0fe1c)));
  /* 11bf3873 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11bf3877 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf387a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf387d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bf3880 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3883 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf3886 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3889 jne 0x11bf389d */
  if (!C.zf) goto L_11bf389d;
  /* 11bf388b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf388e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3891 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf3894 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3897 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf389a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11bf389d:;
  /* 11bf389d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf38a0 push eax */
  push32((uint32_t)(EAX));
  /* 11bf38a1 call 0x11bf3380 */
  push32(0x11bf38a6u); f_11bf3380();
  /* 11bf38a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf38a9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf38af mov dword ptr [0x11c0fd90], eax */
  w32((uint32_t)(0x11c0fd90), (EAX));
L_11bf38b4:;
  /* 11bf38b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf38b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf38ba cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf38bd je 0x11bf38d5 */
  if (C.zf) goto L_11bf38d5;
  /* 11bf38bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf38c2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf38c5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf38c8 jl 0x11bf38e0 */
  if ((C.sf!=C.of)) goto L_11bf38e0;
  /* 11bf38ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf38cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf38d0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf38d3 jg 0x11bf38e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf38e0;
L_11bf38d5:;
  /* 11bf38d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf38d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf38db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bf38de jmp 0x11bf38b4 */
  goto L_11bf38b4;
L_11bf38e0:;
  /* 11bf38e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf38e3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf38e6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf38e9 jne 0x11bf3985 */
  if (!C.zf) goto L_11bf3985;
  /* 11bf38ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf38f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf38f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bf38f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf38fb push edx */
  push32((uint32_t)(EDX));
  /* 11bf38fc call 0x11bf3380 */
  push32(0x11bf3901u); f_11bf3380();
  /* 11bf3901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3904 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3907 mov ecx, dword ptr [0x11c0fd90] */
  ECX = (r32((uint32_t)(0x11c0fd90)));
  /* 11bf390d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf390f mov dword ptr [0x11c0fd90], ecx */
  w32((uint32_t)(0x11c0fd90), (ECX));
L_11bf3915:;
  /* 11bf3915 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3918 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf391b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf391e jl 0x11bf3936 */
  if ((C.sf!=C.of)) goto L_11bf3936;
  /* 11bf3920 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3923 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf3926 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3929 jg 0x11bf3936 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf3936;
  /* 11bf392b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf392e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3931 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf3934 jmp 0x11bf3915 */
  goto L_11bf3915;
L_11bf3936:;
  /* 11bf3936 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3939 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf393c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf393f jne 0x11bf3985 */
  if (!C.zf) goto L_11bf3985;
  /* 11bf3941 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3944 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3947 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf394a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf394d push ecx */
  push32((uint32_t)(ECX));
  /* 11bf394e call 0x11bf3380 */
  push32(0x11bf3953u); f_11bf3380();
  /* 11bf3953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3956 mov edx, dword ptr [0x11c0fd90] */
  EDX = (r32((uint32_t)(0x11c0fd90)));
  /* 11bf395c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf395e mov dword ptr [0x11c0fd90], edx */
  w32((uint32_t)(0x11c0fd90), (EDX));
L_11bf3964:;
  /* 11bf3964 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3967 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf396a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf396d jl 0x11bf3985 */
  if ((C.sf!=C.of)) goto L_11bf3985;
  /* 11bf396f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3972 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11bf3975 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3978 jg 0x11bf3985 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf3985;
  /* 11bf397a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf397d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3980 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bf3983 jmp 0x11bf3964 */
  goto L_11bf3964;
L_11bf3985:;
  /* 11bf3985 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3989 je 0x11bf3999 */
  if (C.zf) goto L_11bf3999;
  /* 11bf398b mov edx, dword ptr [0x11c0fd90] */
  EDX = (r32((uint32_t)(0x11c0fd90)));
  /* 11bf3991 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf3993 mov dword ptr [0x11c0fd90], edx */
  w32((uint32_t)(0x11c0fd90), (EDX));
L_11bf3999:;
  /* 11bf3999 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf399c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11bf399f mov dword ptr [0x11c0fd94], ecx */
  w32((uint32_t)(0x11c0fd94), (ECX));
  /* 11bf39a5 cmp dword ptr [0x11c0fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c0fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf39ac je 0x11bf39ce */
  if (C.zf) goto L_11bf39ce;
  /* 11bf39ae push 3 */
  push32((uint32_t)(0x3u));
  /* 11bf39b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf39b3 push edx */
  push32((uint32_t)(EDX));
  /* 11bf39b4 mov eax, dword ptr [0x11c0fe20] */
  EAX = (r32((uint32_t)(0x11c0fe20)));
  /* 11bf39b9 push eax */
  push32((uint32_t)(EAX));
  /* 11bf39ba call 0x11be82f0 */
  push32(0x11bf39bfu); f_11be82f0();
  /* 11bf39bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf39c2 mov ecx, dword ptr [0x11c0fe20] */
  ECX = (r32((uint32_t)(0x11c0fe20)));
  /* 11bf39c8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11bf39cc jmp 0x11bf39d7 */
  goto L_11bf39d7;
L_11bf39ce:;
  /* 11bf39ce mov edx, dword ptr [0x11c0fe20] */
  EDX = (r32((uint32_t)(0x11c0fe20)));
  /* 11bf39d4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11bf39d7:;
  /* 11bf39d7 mov esp, ebp */
  ESP = (EBP);
  /* 11bf39d9 pop ebp */
  EBP = (pop32());
  /* 11bf39da ret  */
  ESPCHK(0x11bf3630u, _esp0);
  ESP += 4; return;
}

/* FUN_100139e0 @ 0x11bf39e0 (46 bytes, 18 insns) */
void f_11bf39e0(void) {
  FTRACE(0x11bf39e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf39e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf39e1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf39e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf39e4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11bf39e6 call 0x11be84d0 */
  push32(0x11bf39ebu); f_11be84d0();
  /* 11bf39eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf39ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf39f1 push eax */
  push32((uint32_t)(EAX));
  /* 11bf39f2 call 0x11bf3a10 */
  push32(0x11bf39f7u); f_11bf3a10();
  /* 11bf39f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf39fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf39fd push 0xb */
  push32((uint32_t)(0xbu));
  /* 11bf39ff call 0x11be8570 */
  push32(0x11bf3a04u); f_11be8570();
  /* 11bf3a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3a07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf3a0a mov esp, ebp */
  ESP = (EBP);
  /* 11bf3a0c pop ebp */
  EBP = (pop32());
  /* 11bf3a0d ret  */
  ESPCHK(0x11bf39e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a10 @ 0x11bf3a10 (762 bytes, 246 insns) */
void f_11bf3a10(void) {
  FTRACE(0x11bf3a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf3a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf3a11 mov ebp, esp */
  EBP = (ESP);
  /* 11bf3a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3a14 cmp dword ptr [0x11c0fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c0fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3a1b jne 0x11bf3a24 */
  if (!C.zf) goto L_11bf3a24;
  /* 11bf3a1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3a1f jmp 0x11bf3d06 */
  goto L_11bf3d06;
L_11bf3a24:;
  /* 11bf3a24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3a27 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11bf3a2a cmp ecx, dword ptr [0x11c0fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c0fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3a30 jne 0x11bf3a44 */
  if (!C.zf) goto L_11bf3a44;
  /* 11bf3a32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3a35 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11bf3a38 cmp eax, dword ptr [0x11c0fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c0fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3a3e je 0x11bf3c0b */
  if (C.zf) goto L_11bf3c0b;
L_11bf3a44:;
  /* 11bf3a44 cmp dword ptr [0x11c108f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c108f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3a4b je 0x11bf3bc5 */
  if (C.zf) goto L_11bf3bc5;
  /* 11bf3a51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3a53 mov cx, word ptr [0x11c10998] */
  CX = (r16((uint32_t)(0x11c10998)));
  /* 11bf3a5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf3a5c jne 0x11bf3ab9 */
  if (!C.zf) goto L_11bf3ab9;
  /* 11bf3a5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3a60 mov dx, word ptr [0x11c109a6] */
  DX = (r16((uint32_t)(0x11c109a6)));
  /* 11bf3a67 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3a68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3a6a mov ax, word ptr [0x11c109a4] */
  AX = (r16((uint32_t)(0x11c109a4)));
  /* 11bf3a70 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3a71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3a73 mov cx, word ptr [0x11c109a2] */
  CX = (r16((uint32_t)(0x11c109a2)));
  /* 11bf3a7a push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3a7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3a7d mov dx, word ptr [0x11c109a0] */
  DX = (r16((uint32_t)(0x11c109a0)));
  /* 11bf3a84 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3a89 mov ax, word ptr [0x11c1099c] */
  AX = (r16((uint32_t)(0x11c1099c)));
  /* 11bf3a8f push eax */
  push32((uint32_t)(EAX));
  /* 11bf3a90 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3a92 mov cx, word ptr [0x11c1099e] */
  CX = (r16((uint32_t)(0x11c1099e)));
  /* 11bf3a99 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3a9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3a9c mov dx, word ptr [0x11c1099a] */
  DX = (r16((uint32_t)(0x11c1099a)));
  /* 11bf3aa3 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3aa7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11bf3aaa push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3aab push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3aad push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3aaf call 0x11bf3d10 */
  push32(0x11bf3ab4u); f_11bf3d10();
  /* 11bf3ab4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3ab7 jmp 0x11bf3b0a */
  goto L_11bf3b0a;
L_11bf3ab9:;
  /* 11bf3ab9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3abb mov dx, word ptr [0x11c109a6] */
  DX = (r16((uint32_t)(0x11c109a6)));
  /* 11bf3ac2 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3ac5 mov ax, word ptr [0x11c109a4] */
  AX = (r16((uint32_t)(0x11c109a4)));
  /* 11bf3acb push eax */
  push32((uint32_t)(EAX));
  /* 11bf3acc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3ace mov cx, word ptr [0x11c109a2] */
  CX = (r16((uint32_t)(0x11c109a2)));
  /* 11bf3ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3ad6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3ad8 mov dx, word ptr [0x11c109a0] */
  DX = (r16((uint32_t)(0x11c109a0)));
  /* 11bf3adf push edx */
  push32((uint32_t)(EDX));
  /* 11bf3ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3ae2 mov ax, word ptr [0x11c1099e] */
  AX = (r16((uint32_t)(0x11c1099e)));
  /* 11bf3ae8 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3aeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3aed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3aef mov cx, word ptr [0x11c1099a] */
  CX = (r16((uint32_t)(0x11c1099a)));
  /* 11bf3af6 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3af7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3afa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11bf3afd push eax */
  push32((uint32_t)(EAX));
  /* 11bf3afe push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3b00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3b02 call 0x11bf3d10 */
  push32(0x11bf3b07u); f_11bf3d10();
  /* 11bf3b07 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf3b0a:;
  /* 11bf3b0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3b0c mov cx, word ptr [0x11c10944] */
  CX = (r16((uint32_t)(0x11c10944)));
  /* 11bf3b13 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf3b15 jne 0x11bf3b72 */
  if (!C.zf) goto L_11bf3b72;
  /* 11bf3b17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3b19 mov dx, word ptr [0x11c10952] */
  DX = (r16((uint32_t)(0x11c10952)));
  /* 11bf3b20 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3b21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3b23 mov ax, word ptr [0x11c10950] */
  AX = (r16((uint32_t)(0x11c10950)));
  /* 11bf3b29 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3b2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3b2c mov cx, word ptr [0x11c1094e] */
  CX = (r16((uint32_t)(0x11c1094e)));
  /* 11bf3b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3b34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3b36 mov dx, word ptr [0x11c1094c] */
  DX = (r16((uint32_t)(0x11c1094c)));
  /* 11bf3b3d push edx */
  push32((uint32_t)(EDX));
  /* 11bf3b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3b42 mov ax, word ptr [0x11c10948] */
  AX = (r16((uint32_t)(0x11c10948)));
  /* 11bf3b48 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3b49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3b4b mov cx, word ptr [0x11c1094a] */
  CX = (r16((uint32_t)(0x11c1094a)));
  /* 11bf3b52 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3b53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3b55 mov dx, word ptr [0x11c10946] */
  DX = (r16((uint32_t)(0x11c10946)));
  /* 11bf3b5c push edx */
  push32((uint32_t)(EDX));
  /* 11bf3b5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3b60 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11bf3b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3b64 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3b68 call 0x11bf3d10 */
  push32(0x11bf3b6du); f_11bf3d10();
  /* 11bf3b6d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3b70 jmp 0x11bf3bc3 */
  goto L_11bf3bc3;
L_11bf3b72:;
  /* 11bf3b72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3b74 mov dx, word ptr [0x11c10952] */
  DX = (r16((uint32_t)(0x11c10952)));
  /* 11bf3b7b push edx */
  push32((uint32_t)(EDX));
  /* 11bf3b7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3b7e mov ax, word ptr [0x11c10950] */
  AX = (r16((uint32_t)(0x11c10950)));
  /* 11bf3b84 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3b85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3b87 mov cx, word ptr [0x11c1094e] */
  CX = (r16((uint32_t)(0x11c1094e)));
  /* 11bf3b8e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3b8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3b91 mov dx, word ptr [0x11c1094c] */
  DX = (r16((uint32_t)(0x11c1094c)));
  /* 11bf3b98 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3b99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3b9b mov ax, word ptr [0x11c1094a] */
  AX = (r16((uint32_t)(0x11c1094a)));
  /* 11bf3ba1 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3ba6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3ba8 mov cx, word ptr [0x11c10946] */
  CX = (r16((uint32_t)(0x11c10946)));
  /* 11bf3baf push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3bb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3bb3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11bf3bb6 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bbb call 0x11bf3d10 */
  push32(0x11bf3bc0u); f_11bf3d10();
  /* 11bf3bc0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf3bc3:;
  /* 11bf3bc3 jmp 0x11bf3c0b */
  goto L_11bf3c0b;
L_11bf3bc5:;
  /* 11bf3bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bcb push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf3bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3bd3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11bf3bd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3bd8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11bf3bdb push edx */
  push32((uint32_t)(EDX));
  /* 11bf3bdc push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3bde push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3be0 call 0x11bf3d10 */
  push32(0x11bf3be5u); f_11bf3d10();
  /* 11bf3be5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bea push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bec push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bee push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf3bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3bf4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11bf3bf6 push 0xa */
  push32((uint32_t)(0xau));
  /* 11bf3bf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3bfb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11bf3bfe push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3bff push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3c03 call 0x11bf3d10 */
  push32(0x11bf3c08u); f_11bf3d10();
  /* 11bf3c08 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf3c0b:;
  /* 11bf3c0b mov edx, dword ptr [0x11c0fe2c] */
  EDX = (r32((uint32_t)(0x11c0fe2c)));
  /* 11bf3c11 cmp edx, dword ptr [0x11c0fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c0fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3c17 jge 0x11bf3c64 */
  if ((C.sf==C.of)) goto L_11bf3c64;
  /* 11bf3c19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3c1c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11bf3c1f cmp ecx, dword ptr [0x11c0fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c0fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3c25 jl 0x11bf3c35 */
  if ((C.sf!=C.of)) goto L_11bf3c35;
  /* 11bf3c27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3c2a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11bf3c2d cmp eax, dword ptr [0x11c0fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c0fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3c33 jle 0x11bf3c3c */
  if ((C.zf||C.sf!=C.of)) goto L_11bf3c3c;
L_11bf3c35:;
  /* 11bf3c35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3c37 jmp 0x11bf3d06 */
  goto L_11bf3d06;
L_11bf3c3c:;
  /* 11bf3c3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3c3f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11bf3c42 cmp edx, dword ptr [0x11c0fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c0fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3c48 jle 0x11bf3c62 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf3c62;
  /* 11bf3c4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3c4d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11bf3c50 cmp ecx, dword ptr [0x11c0fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c0fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3c56 jge 0x11bf3c62 */
  if ((C.sf==C.of)) goto L_11bf3c62;
  /* 11bf3c58 mov eax, 1 */
  EAX = (0x1u);
  /* 11bf3c5d jmp 0x11bf3d06 */
  goto L_11bf3d06;
L_11bf3c62:;
  /* 11bf3c62 jmp 0x11bf3ca7 */
  goto L_11bf3ca7;
L_11bf3c64:;
  /* 11bf3c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3c67 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11bf3c6a cmp eax, dword ptr [0x11c0fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c0fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3c70 jl 0x11bf3c80 */
  if ((C.sf!=C.of)) goto L_11bf3c80;
  /* 11bf3c72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3c75 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11bf3c78 cmp edx, dword ptr [0x11c0fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c0fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3c7e jle 0x11bf3c87 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf3c87;
L_11bf3c80:;
  /* 11bf3c80 mov eax, 1 */
  EAX = (0x1u);
  /* 11bf3c85 jmp 0x11bf3d06 */
  goto L_11bf3d06;
L_11bf3c87:;
  /* 11bf3c87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3c8a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11bf3c8d cmp ecx, dword ptr [0x11c0fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c0fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3c93 jle 0x11bf3ca7 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf3ca7;
  /* 11bf3c95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3c98 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11bf3c9b cmp eax, dword ptr [0x11c0fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c0fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3ca1 jge 0x11bf3ca7 */
  if ((C.sf==C.of)) goto L_11bf3ca7;
  /* 11bf3ca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3ca5 jmp 0x11bf3d06 */
  goto L_11bf3d06;
L_11bf3ca7:;
  /* 11bf3ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3caa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11bf3cad imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3cb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3cb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf3cb5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3cb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3cba mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11bf3cbd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3cc3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3cc5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3ccb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf3cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3cd1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11bf3cd4 cmp edx, dword ptr [0x11c0fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11c0fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3cda jne 0x11bf3cf2 */
  if (!C.zf) goto L_11bf3cf2;
  /* 11bf3cdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf3cdf cmp eax, dword ptr [0x11c0fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c0fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3ce5 jl 0x11bf3cee */
  if ((C.sf!=C.of)) goto L_11bf3cee;
  /* 11bf3ce7 mov eax, 1 */
  EAX = (0x1u);
  /* 11bf3cec jmp 0x11bf3d06 */
  goto L_11bf3d06;
L_11bf3cee:;
  /* 11bf3cee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3cf0 jmp 0x11bf3d06 */
  goto L_11bf3d06;
L_11bf3cf2:;
  /* 11bf3cf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf3cf5 cmp ecx, dword ptr [0x11c0fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c0fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3cfb jge 0x11bf3d04 */
  if ((C.sf==C.of)) goto L_11bf3d04;
  /* 11bf3cfd mov eax, 1 */
  EAX = (0x1u);
  /* 11bf3d02 jmp 0x11bf3d06 */
  goto L_11bf3d06;
L_11bf3d04:;
  /* 11bf3d04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf3d06:;
  /* 11bf3d06 mov esp, ebp */
  ESP = (EBP);
  /* 11bf3d08 pop ebp */
  EBP = (pop32());
  /* 11bf3d09 ret  */
  ESPCHK(0x11bf3a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d10 @ 0x11bf3d10 (504 bytes, 145 insns) */
void f_11bf3d10(void) {
  FTRACE(0x11bf3d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf3d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf3d11 mov ebp, esp */
  EBP = (ESP);
  /* 11bf3d13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3d16 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3d1a jne 0x11bf3dec */
  if (!C.zf) goto L_11bf3dec;
  /* 11bf3d20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3d23 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3d26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf3d28 jne 0x11bf3d39 */
  if (!C.zf) goto L_11bf3d39;
  /* 11bf3d2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf3d2d mov edx, dword ptr [ecx*4 + 0x11c0fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0fe4c)));
  /* 11bf3d34 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11bf3d37 jmp 0x11bf3d46 */
  goto L_11bf3d46;
L_11bf3d39:;
  /* 11bf3d39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf3d3c mov ecx, dword ptr [eax*4 + 0x11c0fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c0fe80)));
  /* 11bf3d43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11bf3d46:;
  /* 11bf3d46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf3d49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3d4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf3d4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3d52 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3d55 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3d5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf3d5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3d60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3d63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3d66 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11bf3d69 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11bf3d6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11bf3d6e mov ecx, 7 */
  ECX = (0x7u);
  /* 11bf3d73 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11bf3d75 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf3d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf3d7b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3d7e jge 0x11bf3d99 */
  if ((C.sf==C.of)) goto L_11bf3d99;
  /* 11bf3d80 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11bf3d83 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3d86 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf3d89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3d8c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3d8f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3d92 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3d94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf3d97 jmp 0x11bf3dad */
  goto L_11bf3dad;
L_11bf3d99:;
  /* 11bf3d99 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11bf3d9c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3d9f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf3da2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3da5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3da8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3daa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bf3dad:;
  /* 11bf3dad cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3db1 jne 0x11bf3dea */
  if (!C.zf) goto L_11bf3dea;
  /* 11bf3db3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3db6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf3db9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf3dbb jne 0x11bf3dcc */
  if (!C.zf) goto L_11bf3dcc;
  /* 11bf3dbd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf3dc0 mov eax, dword ptr [edx*4 + 0x11c0fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c0fe50)));
  /* 11bf3dc7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11bf3dca jmp 0x11bf3dd9 */
  goto L_11bf3dd9;
L_11bf3dcc:;
  /* 11bf3dcc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf3dcf mov edx, dword ptr [ecx*4 + 0x11c0fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11c0fe84)));
  /* 11bf3dd6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11bf3dd9:;
  /* 11bf3dd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf3ddc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3ddf jle 0x11bf3dea */
  if ((C.zf||C.sf!=C.of)) goto L_11bf3dea;
  /* 11bf3de1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf3de4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3de7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11bf3dea:;
  /* 11bf3dea jmp 0x11bf3e21 */
  goto L_11bf3e21;
L_11bf3dec:;
  /* 11bf3dec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3def and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11bf3df2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf3df4 jne 0x11bf3e05 */
  if (!C.zf) goto L_11bf3e05;
  /* 11bf3df6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf3df9 mov ecx, dword ptr [eax*4 + 0x11c0fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11c0fe4c)));
  /* 11bf3e00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11bf3e03 jmp 0x11bf3e12 */
  goto L_11bf3e12;
L_11bf3e05:;
  /* 11bf3e05 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf3e08 mov eax, dword ptr [edx*4 + 0x11c0fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11c0fe80)));
  /* 11bf3e0f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11bf3e12:;
  /* 11bf3e12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf3e15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11bf3e18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf3e1b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3e1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11bf3e21:;
  /* 11bf3e21 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3e25 jne 0x11bf3e61 */
  if (!C.zf) goto L_11bf3e61;
  /* 11bf3e27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf3e2a mov dword ptr [0x11c0fe2c], eax */
  w32((uint32_t)(0x11c0fe2c), (EAX));
  /* 11bf3e2f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11bf3e32 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3e35 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11bf3e38 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3e3a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3e3d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11bf3e40 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3e42 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3e48 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11bf3e4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3e4d mov dword ptr [0x11c0fe30], ecx */
  w32((uint32_t)(0x11c0fe30), (ECX));
  /* 11bf3e53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3e56 mov dword ptr [0x11c0fe28], edx */
  w32((uint32_t)(0x11c0fe28), (EDX));
  /* 11bf3e5c jmp 0x11bf3f04 */
  goto L_11bf3f04;
L_11bf3e61:;
  /* 11bf3e61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf3e64 mov dword ptr [0x11c0fe3c], eax */
  w32((uint32_t)(0x11c0fe3c), (EAX));
  /* 11bf3e69 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11bf3e6c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3e6f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11bf3e72 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3e74 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3e77 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11bf3e7a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3e7c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3e82 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11bf3e85 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3e87 mov dword ptr [0x11c0fe40], ecx */
  w32((uint32_t)(0x11c0fe40), (ECX));
  /* 11bf3e8d mov edx, dword ptr [0x11c0fd98] */
  EDX = (r32((uint32_t)(0x11c0fd98)));
  /* 11bf3e93 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11bf3e99 mov eax, dword ptr [0x11c0fe40] */
  EAX = (r32((uint32_t)(0x11c0fe40)));
  /* 11bf3e9e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3ea0 mov dword ptr [0x11c0fe40], eax */
  w32((uint32_t)(0x11c0fe40), (EAX));
  /* 11bf3ea5 cmp dword ptr [0x11c0fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c0fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3eac jge 0x11bf3ed1 */
  if ((C.sf==C.of)) goto L_11bf3ed1;
  /* 11bf3eae mov ecx, dword ptr [0x11c0fe40] */
  ECX = (r32((uint32_t)(0x11c0fe40)));
  /* 11bf3eb4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3eba mov dword ptr [0x11c0fe40], ecx */
  w32((uint32_t)(0x11c0fe40), (ECX));
  /* 11bf3ec0 mov edx, dword ptr [0x11c0fe3c] */
  EDX = (r32((uint32_t)(0x11c0fe3c)));
  /* 11bf3ec6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3ec9 mov dword ptr [0x11c0fe3c], edx */
  w32((uint32_t)(0x11c0fe3c), (EDX));
  /* 11bf3ecf jmp 0x11bf3efb */
  goto L_11bf3efb;
L_11bf3ed1:;
  /* 11bf3ed1 cmp dword ptr [0x11c0fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11c0fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3edb jl 0x11bf3efb */
  if ((C.sf!=C.of)) goto L_11bf3efb;
  /* 11bf3edd mov eax, dword ptr [0x11c0fe40] */
  EAX = (r32((uint32_t)(0x11c0fe40)));
  /* 11bf3ee2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf3ee7 mov dword ptr [0x11c0fe40], eax */
  w32((uint32_t)(0x11c0fe40), (EAX));
  /* 11bf3eec mov ecx, dword ptr [0x11c0fe3c] */
  ECX = (r32((uint32_t)(0x11c0fe3c)));
  /* 11bf3ef2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3ef5 mov dword ptr [0x11c0fe3c], ecx */
  w32((uint32_t)(0x11c0fe3c), (ECX));
L_11bf3efb:;
  /* 11bf3efb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3efe mov dword ptr [0x11c0fe38], edx */
  w32((uint32_t)(0x11c0fe38), (EDX));
L_11bf3f04:;
  /* 11bf3f04 mov esp, ebp */
  ESP = (EBP);
  /* 11bf3f06 pop ebp */
  EBP = (pop32());
  /* 11bf3f07 ret  */
  ESPCHK(0x11bf3d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f10 @ 0x11bf3f10 (382 bytes, 135 insns) */
void f_11bf3f10(void) {
  FTRACE(0x11bf3f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf3f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf3f11 mov ebp, esp */
  EBP = (ESP);
  /* 11bf3f13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf3f15 push 0x11c0caa0 */
  push32((uint32_t)(0x11c0caa0u));
  /* 11bf3f1a push 0x11bedbd8 */
  push32((uint32_t)(0x11bedbd8u));
  /* 11bf3f1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11bf3f25 push eax */
  push32((uint32_t)(EAX));
  /* 11bf3f26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11bf3f2d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3f30 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf3f31 push esi */
  push32((uint32_t)(ESI));
  /* 11bf3f32 push edi */
  push32((uint32_t)(EDI));
  /* 11bf3f33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf3f36 cmp dword ptr [0x11c109b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3f3d jne 0x11bf3f82 */
  if (!C.zf) goto L_11bf3f82;
  /* 11bf3f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3f43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3f47 call dword ptr [0x11c132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132b4))), 0x11bf3f4du);
  /* 11bf3f4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf3f4f je 0x11bf3f5d */
  if (C.zf) goto L_11bf3f5d;
  /* 11bf3f51 mov dword ptr [0x11c109b4], 1 */
  w32((uint32_t)(0x11c109b4), (0x1u));
  /* 11bf3f5b jmp 0x11bf3f82 */
  goto L_11bf3f82;
L_11bf3f5d:;
  /* 11bf3f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3f61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf3f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3f65 call dword ptr [0x11c132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132cc))), 0x11bf3f6bu);
  /* 11bf3f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf3f6d je 0x11bf3f7b */
  if (C.zf) goto L_11bf3f7b;
  /* 11bf3f6f mov dword ptr [0x11c109b4], 2 */
  w32((uint32_t)(0x11c109b4), (0x2u));
  /* 11bf3f79 jmp 0x11bf3f82 */
  goto L_11bf3f82;
L_11bf3f7b:;
  /* 11bf3f7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3f7d jmp 0x11bf4091 */
  goto L_11bf4091;
L_11bf3f82:;
  /* 11bf3f82 cmp dword ptr [0x11c109b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c109b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3f89 jne 0x11bf3fa6 */
  if (!C.zf) goto L_11bf3fa6;
  /* 11bf3f8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf3f8e push eax */
  push32((uint32_t)(EAX));
  /* 11bf3f8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf3f92 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf3f93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf3f96 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3f97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3f9a push eax */
  push32((uint32_t)(EAX));
  /* 11bf3f9b call dword ptr [0x11c132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132b4))), 0x11bf3fa1u);
  /* 11bf3fa1 jmp 0x11bf4091 */
  goto L_11bf4091;
L_11bf3fa6:;
  /* 11bf3fa6 cmp dword ptr [0x11c109b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11c109b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3fad jne 0x11bf408f */
  if (!C.zf) goto L_11bf408f;
  /* 11bf3fb3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3fb7 jne 0x11bf3fc2 */
  if (!C.zf) goto L_11bf3fc2;
  /* 11bf3fb9 mov ecx, dword ptr [0x11c10868] */
  ECX = (r32((uint32_t)(0x11c10868)));
  /* 11bf3fbf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11bf3fc2:;
  /* 11bf3fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf3fc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf3fc9 push edx */
  push32((uint32_t)(EDX));
  /* 11bf3fca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf3fcd push eax */
  push32((uint32_t)(EAX));
  /* 11bf3fce call dword ptr [0x11c132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132cc))), 0x11bf3fd4u);
  /* 11bf3fd4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11bf3fd7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf3fdb jne 0x11bf3fe4 */
  if (!C.zf) goto L_11bf3fe4;
  /* 11bf3fdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf3fdf jmp 0x11bf4091 */
  goto L_11bf4091;
L_11bf3fe4:;
  /* 11bf3fe4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bf3feb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf3fee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf3ff1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bf3ff3 call 0x11be7c70 */
  push32(0x11bf3ff8u); f_11be7c70();
  /* 11bf3ff8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11bf3ffb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf3ffe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf4001 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11bf4004 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bf400b jmp 0x11bf4024 */
  goto L_11bf4024;
  /* 11bf400d mov eax, 1 */
  EAX = (0x1u);
  /* 11bf4012 ret  */
  ESPCHK(0x11bf3f10u, _esp0);
  ESP += 4; return;
  /* 11bf4013 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf4016 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11bf401d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bf4024:;
  /* 11bf4024 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4028 jne 0x11bf402e */
  if (!C.zf) goto L_11bf402e;
  /* 11bf402a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf402c jmp 0x11bf4091 */
  goto L_11bf4091;
L_11bf402e:;
  /* 11bf402e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf4031 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4032 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf4035 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4036 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4039 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf403a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf403d push edx */
  push32((uint32_t)(EDX));
  /* 11bf403e call dword ptr [0x11c132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132cc))), 0x11bf4044u);
  /* 11bf4044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf4046 jne 0x11bf404c */
  if (!C.zf) goto L_11bf404c;
  /* 11bf4048 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf404a jmp 0x11bf4091 */
  goto L_11bf4091;
L_11bf404c:;
  /* 11bf404c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4050 jne 0x11bf406d */
  if (!C.zf) goto L_11bf406d;
  /* 11bf4052 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4054 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4056 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf4058 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf405b push eax */
  push32((uint32_t)(EAX));
  /* 11bf405c push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf405e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf4061 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4062 call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11bf4068u);
  /* 11bf4068 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bf406b jmp 0x11bf408a */
  goto L_11bf408a;
L_11bf406d:;
  /* 11bf406d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf4070 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4071 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf4074 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4075 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf4077 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf407a push ecx */
  push32((uint32_t)(ECX));
  /* 11bf407b push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf407d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf4080 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4081 call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11bf4087u);
  /* 11bf4087 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11bf408a:;
  /* 11bf408a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf408d jmp 0x11bf4091 */
  goto L_11bf4091;
L_11bf408f:;
  /* 11bf408f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf4091:;
  /* 11bf4091 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11bf4094 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf4097 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11bf409e pop edi */
  EDI = (pop32());
  /* 11bf409f pop esi */
  ESI = (pop32());
  /* 11bf40a0 pop ebx */
  EBX = (pop32());
  /* 11bf40a1 mov esp, ebp */
  ESP = (EBP);
  /* 11bf40a3 pop ebp */
  EBP = (pop32());
  /* 11bf40a4 ret  */
  ESPCHK(0x11bf3f10u, _esp0);
  ESP += 4; return;
}

/* FUN_100140b0 @ 0x11bf40b0 (398 bytes, 140 insns) */
void f_11bf40b0(void) {
  FTRACE(0x11bf40b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf40b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf40b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf40b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf40b5 push 0x11c0cab0 */
  push32((uint32_t)(0x11c0cab0u));
  /* 11bf40ba push 0x11bedbd8 */
  push32((uint32_t)(0x11bedbd8u));
  /* 11bf40bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11bf40c5 push eax */
  push32((uint32_t)(EAX));
  /* 11bf40c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11bf40cd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf40d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf40d1 push esi */
  push32((uint32_t)(ESI));
  /* 11bf40d2 push edi */
  push32((uint32_t)(EDI));
  /* 11bf40d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf40d6 cmp dword ptr [0x11c109b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf40dd jne 0x11bf4122 */
  if (!C.zf) goto L_11bf4122;
  /* 11bf40df push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf40e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf40e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf40e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf40e7 call dword ptr [0x11c132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132b4))), 0x11bf40edu);
  /* 11bf40ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf40ef je 0x11bf40fd */
  if (C.zf) goto L_11bf40fd;
  /* 11bf40f1 mov dword ptr [0x11c109b8], 1 */
  w32((uint32_t)(0x11c109b8), (0x1u));
  /* 11bf40fb jmp 0x11bf4122 */
  goto L_11bf4122;
L_11bf40fd:;
  /* 11bf40fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf40ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4101 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf4103 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4105 call dword ptr [0x11c132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132cc))), 0x11bf410bu);
  /* 11bf410b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf410d je 0x11bf411b */
  if (C.zf) goto L_11bf411b;
  /* 11bf410f mov dword ptr [0x11c109b8], 2 */
  w32((uint32_t)(0x11c109b8), (0x2u));
  /* 11bf4119 jmp 0x11bf4122 */
  goto L_11bf4122;
L_11bf411b:;
  /* 11bf411b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf411d jmp 0x11bf4241 */
  goto L_11bf4241;
L_11bf4122:;
  /* 11bf4122 cmp dword ptr [0x11c109b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11c109b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4129 jne 0x11bf4146 */
  if (!C.zf) goto L_11bf4146;
  /* 11bf412b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf412e push eax */
  push32((uint32_t)(EAX));
  /* 11bf412f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf4132 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4133 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4136 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4137 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf413a push eax */
  push32((uint32_t)(EAX));
  /* 11bf413b call dword ptr [0x11c132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132cc))), 0x11bf4141u);
  /* 11bf4141 jmp 0x11bf4241 */
  goto L_11bf4241;
L_11bf4146:;
  /* 11bf4146 cmp dword ptr [0x11c109b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c109b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf414d jne 0x11bf423f */
  if (!C.zf) goto L_11bf423f;
  /* 11bf4153 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4157 jne 0x11bf4162 */
  if (!C.zf) goto L_11bf4162;
  /* 11bf4159 mov ecx, dword ptr [0x11c10868] */
  ECX = (r32((uint32_t)(0x11c10868)));
  /* 11bf415f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11bf4162:;
  /* 11bf4162 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4164 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4166 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4169 push edx */
  push32((uint32_t)(EDX));
  /* 11bf416a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf416d push eax */
  push32((uint32_t)(EAX));
  /* 11bf416e call dword ptr [0x11c132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132b4))), 0x11bf4174u);
  /* 11bf4174 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11bf4177 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf417b jne 0x11bf4184 */
  if (!C.zf) goto L_11bf4184;
  /* 11bf417d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf417f jmp 0x11bf4241 */
  goto L_11bf4241;
L_11bf4184:;
  /* 11bf4184 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bf418b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf418e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bf4190 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4193 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bf4195 call 0x11be7c70 */
  push32(0x11bf419au); f_11be7c70();
  /* 11bf419a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11bf419d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf41a0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf41a3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11bf41a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bf41ad jmp 0x11bf41c6 */
  goto L_11bf41c6;
  /* 11bf41af mov eax, 1 */
  EAX = (0x1u);
  /* 11bf41b4 ret  */
  ESPCHK(0x11bf40b0u, _esp0);
  ESP += 4; return;
  /* 11bf41b5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf41b8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11bf41bf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bf41c6:;
  /* 11bf41c6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf41ca jne 0x11bf41d0 */
  if (!C.zf) goto L_11bf41d0;
  /* 11bf41cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf41ce jmp 0x11bf4241 */
  goto L_11bf4241;
L_11bf41d0:;
  /* 11bf41d0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf41d3 push edx */
  push32((uint32_t)(EDX));
  /* 11bf41d4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf41d7 push eax */
  push32((uint32_t)(EAX));
  /* 11bf41d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf41db push ecx */
  push32((uint32_t)(ECX));
  /* 11bf41dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf41df push edx */
  push32((uint32_t)(EDX));
  /* 11bf41e0 call dword ptr [0x11c132b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132b4))), 0x11bf41e6u);
  /* 11bf41e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf41e8 jne 0x11bf41ee */
  if (!C.zf) goto L_11bf41ee;
  /* 11bf41ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf41ec jmp 0x11bf4241 */
  goto L_11bf4241;
L_11bf41ee:;
  /* 11bf41ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf41f2 jne 0x11bf4216 */
  if (!C.zf) goto L_11bf4216;
  /* 11bf41f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf41f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf41f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf41fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf41fc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf41fe mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf4201 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4202 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bf4207 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf420a push ecx */
  push32((uint32_t)(ECX));
  /* 11bf420b call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bf4211u);
  /* 11bf4211 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11bf4214 jmp 0x11bf423a */
  goto L_11bf423a;
L_11bf4216:;
  /* 11bf4216 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4218 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf421a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf421d push edx */
  push32((uint32_t)(EDX));
  /* 11bf421e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf4221 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4222 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf4224 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf4227 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4228 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11bf422d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf4230 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4231 call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bf4237u);
  /* 11bf4237 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11bf423a:;
  /* 11bf423a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf423d jmp 0x11bf4241 */
  goto L_11bf4241;
L_11bf423f:;
  /* 11bf423f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf4241:;
  /* 11bf4241 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11bf4244 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf4247 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11bf424e pop edi */
  EDI = (pop32());
  /* 11bf424f pop esi */
  ESI = (pop32());
  /* 11bf4250 pop ebx */
  EBX = (pop32());
  /* 11bf4251 mov esp, ebp */
  ESP = (EBP);
  /* 11bf4253 pop ebp */
  EBP = (pop32());
  /* 11bf4254 ret  */
  ESPCHK(0x11bf40b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014260 @ 0x11bf4260 (11 bytes, 6 insns) */
void f_11bf4260(void) {
  FTRACE(0x11bf4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4260 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4261 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4266 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4269 pop ebp */
  EBP = (pop32());
  /* 11bf426a ret  */
  ESPCHK(0x11bf4260u, _esp0);
  ESP += 4; return;
}

/* FUN_10014270 @ 0x11bf4270 (147 bytes, 43 insns) */
void f_11bf4270(void) {
  FTRACE(0x11bf4270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4270 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4271 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4273 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4274 cmp dword ptr [0x11c10858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf427b jne 0x11bf4297 */
  if (!C.zf) goto L_11bf4297;
  /* 11bf427d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4281 jl 0x11bf4292 */
  if ((C.sf!=C.of)) goto L_11bf4292;
  /* 11bf4283 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4287 jg 0x11bf4292 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf4292;
  /* 11bf4289 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf428c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf428f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11bf4292:;
  /* 11bf4292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4295 jmp 0x11bf42ff */
  goto L_11bf42ff;
L_11bf4297:;
  /* 11bf4297 push 0x11c109e4 */
  push32((uint32_t)(0x11c109e4u));
  /* 11bf429c call dword ptr [0x11c1335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1335c))), 0x11bf42a2u);
  /* 11bf42a2 cmp dword ptr [0x11c109d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf42a9 je 0x11bf42c9 */
  if (C.zf) goto L_11bf42c9;
  /* 11bf42ab push 0x11c109e4 */
  push32((uint32_t)(0x11c109e4u));
  /* 11bf42b0 call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11bf42b6u);
  /* 11bf42b6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bf42b8 call 0x11be84d0 */
  push32(0x11bf42bdu); f_11be84d0();
  /* 11bf42bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf42c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11bf42c7 jmp 0x11bf42d0 */
  goto L_11bf42d0;
L_11bf42c9:;
  /* 11bf42c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11bf42d0:;
  /* 11bf42d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf42d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf42d4 call 0x11bf4310 */
  push32(0x11bf42d9u); f_11bf4310();
  /* 11bf42d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf42dc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11bf42df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf42e3 je 0x11bf42f1 */
  if (C.zf) goto L_11bf42f1;
  /* 11bf42e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11bf42e7 call 0x11be8570 */
  push32(0x11bf42ecu); f_11be8570();
  /* 11bf42ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf42ef jmp 0x11bf42fc */
  goto L_11bf42fc;
L_11bf42f1:;
  /* 11bf42f1 push 0x11c109e4 */
  push32((uint32_t)(0x11c109e4u));
  /* 11bf42f6 call dword ptr [0x11c1334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c1334c))), 0x11bf42fcu);
L_11bf42fc:;
  /* 11bf42fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11bf42ff:;
  /* 11bf42ff mov esp, ebp */
  ESP = (EBP);
  /* 11bf4301 pop ebp */
  EBP = (pop32());
  /* 11bf4302 ret  */
  ESPCHK(0x11bf4270u, _esp0);
  ESP += 4; return;
}

/* FUN_10014310 @ 0x11bf4310 (299 bytes, 91 insns) */
void f_11bf4310(void) {
  FTRACE(0x11bf4310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4310 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4311 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4313 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4316 cmp dword ptr [0x11c10858], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10858))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf431d jne 0x11bf433c */
  if (!C.zf) goto L_11bf433c;
  /* 11bf431f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4323 jl 0x11bf4334 */
  if ((C.sf!=C.of)) goto L_11bf4334;
  /* 11bf4325 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4329 jg 0x11bf4334 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf4334;
  /* 11bf432b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf432e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4331 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11bf4334:;
  /* 11bf4334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4337 jmp 0x11bf4437 */
  goto L_11bf4437;
L_11bf433c:;
  /* 11bf433c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4343 jge 0x11bf4383 */
  if ((C.sf==C.of)) goto L_11bf4383;
  /* 11bf4345 cmp dword ptr [0x11c0eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c0eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf434c jle 0x11bf4361 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf4361;
  /* 11bf434e push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf4350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4353 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4354 call 0x11beaae0 */
  push32(0x11bf4359u); f_11beaae0();
  /* 11bf4359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf435c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11bf435f jmp 0x11bf4375 */
  goto L_11bf4375;
L_11bf4361:;
  /* 11bf4361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4364 mov eax, dword ptr [0x11c0ec98] */
  EAX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf4369 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf436b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11bf436f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf4372 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11bf4375:;
  /* 11bf4375 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4379 jne 0x11bf4383 */
  if (!C.zf) goto L_11bf4383;
  /* 11bf437b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf437e jmp 0x11bf4437 */
  goto L_11bf4437;
L_11bf4383:;
  /* 11bf4383 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4386 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11bf4389 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bf438f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bf4395 mov eax, dword ptr [0x11c0ec98] */
  EAX = (r32((uint32_t)(0x11c0ec98)));
  /* 11bf439a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf439c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11bf43a0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf43a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf43a8 je 0x11bf43cc */
  if (C.zf) goto L_11bf43cc;
  /* 11bf43aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf43ad sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11bf43b0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bf43b6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11bf43b9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11bf43bc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11bf43bf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11bf43c3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11bf43ca jmp 0x11bf43dd */
  goto L_11bf43dd;
L_11bf43cc:;
  /* 11bf43cc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11bf43cf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11bf43d2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11bf43d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11bf43dd:;
  /* 11bf43dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf43df push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf43e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11bf43e3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11bf43e6 push edx */
  push32((uint32_t)(EDX));
  /* 11bf43e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf43ea push eax */
  push32((uint32_t)(EAX));
  /* 11bf43eb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11bf43ee push ecx */
  push32((uint32_t)(ECX));
  /* 11bf43ef push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11bf43f4 mov edx, dword ptr [0x11c10858] */
  EDX = (r32((uint32_t)(0x11c10858)));
  /* 11bf43fa push edx */
  push32((uint32_t)(EDX));
  /* 11bf43fb call 0x11becec0 */
  push32(0x11bf4400u); f_11becec0();
  /* 11bf4400 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4403 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf4406 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf440a jne 0x11bf4411 */
  if (!C.zf) goto L_11bf4411;
  /* 11bf440c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf440f jmp 0x11bf4437 */
  goto L_11bf4437;
L_11bf4411:;
  /* 11bf4411 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4415 jne 0x11bf4421 */
  if (!C.zf) goto L_11bf4421;
  /* 11bf4417 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf441a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf441f jmp 0x11bf4437 */
  goto L_11bf4437;
L_11bf4421:;
  /* 11bf4421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4424 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4429 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11bf442c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bf4432 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11bf4435 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11bf4437:;
  /* 11bf4437 mov esp, ebp */
  ESP = (EBP);
  /* 11bf4439 pop ebp */
  EBP = (pop32());
  /* 11bf443a ret  */
  ESPCHK(0x11bf4310u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11bf4440 (52 bytes, 19 insns) */
void f_11bf4440(void) {
  FTRACE(0x11bf4440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4440 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bf4444 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11bf4448 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf444a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11bf444e jne 0x11bf4459 */
  if (!C.zf) goto L_11bf4459;
  /* 11bf4450 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11bf4454 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11bf4456 ret 0x10 */
  ESPCHK(0x11bf4440u, _esp0);
  ESP += 20; return;
L_11bf4459:;
  /* 11bf4459 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf445a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11bf445c mov ebx, eax */
  EBX = (EAX);
  /* 11bf445e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bf4462 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11bf4466 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4468 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bf446c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11bf446e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4470 pop ebx */
  EBX = (pop32());
  /* 11bf4471 ret 0x10 */
  ESPCHK(0x11bf4440u, _esp0);
  ESP += 20; return;
}

/* FUN_10014480 @ 0x11bf4480 (46 bytes, 18 insns) */
void f_11bf4480(void) {
  FTRACE(0x11bf4480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4480 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4481 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4483 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4484 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11bf4486 call 0x11be84d0 */
  push32(0x11bf448bu); f_11be84d0();
  /* 11bf448b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf448e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4491 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4492 call 0x11bf44b0 */
  push32(0x11bf4497u); f_11bf44b0();
  /* 11bf4497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf449a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf449d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11bf449f call 0x11be8570 */
  push32(0x11bf44a4u); f_11be8570();
  /* 11bf44a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf44a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf44aa mov esp, ebp */
  ESP = (EBP);
  /* 11bf44ac pop ebp */
  EBP = (pop32());
  /* 11bf44ad ret  */
  ESPCHK(0x11bf4480u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11bf44b0 (198 bytes, 69 insns) */
void f_11bf44b0(void) {
  FTRACE(0x11bf44b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf44b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf44b1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf44b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf44b6 mov eax, dword ptr [0x11c10674] */
  EAX = (r32((uint32_t)(0x11c10674)));
  /* 11bf44bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf44be cmp dword ptr [0x11c12180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c12180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf44c5 jne 0x11bf44ce */
  if (!C.zf) goto L_11bf44ce;
  /* 11bf44c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf44c9 jmp 0x11bf4572 */
  goto L_11bf4572;
L_11bf44ce:;
  /* 11bf44ce cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf44d2 jne 0x11bf44f6 */
  if (!C.zf) goto L_11bf44f6;
  /* 11bf44d4 cmp dword ptr [0x11c1067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf44db je 0x11bf44f6 */
  if (C.zf) goto L_11bf44f6;
  /* 11bf44dd call 0x11bf45d0 */
  push32(0x11bf44e2u); f_11bf45d0();
  /* 11bf44e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf44e4 je 0x11bf44ed */
  if (C.zf) goto L_11bf44ed;
  /* 11bf44e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf44e8 jmp 0x11bf4572 */
  goto L_11bf4572;
L_11bf44ed:;
  /* 11bf44ed mov ecx, dword ptr [0x11c10674] */
  ECX = (r32((uint32_t)(0x11c10674)));
  /* 11bf44f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11bf44f6:;
  /* 11bf44f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf44fa je 0x11bf4570 */
  if (C.zf) goto L_11bf4570;
  /* 11bf44fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4500 je 0x11bf4570 */
  if (C.zf) goto L_11bf4570;
  /* 11bf4502 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4505 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4506 call 0x11be7900 */
  push32(0x11bf450bu); f_11be7900();
  /* 11bf450b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf450e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bf4511:;
  /* 11bf4511 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4514 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4517 je 0x11bf4570 */
  if (C.zf) goto L_11bf4570;
  /* 11bf4519 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf451c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf451e push edx */
  push32((uint32_t)(EDX));
  /* 11bf451f call 0x11be7900 */
  push32(0x11bf4524u); f_11be7900();
  /* 11bf4524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4527 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf452a jbe 0x11bf4565 */
  if ((C.cf||C.zf)) goto L_11bf4565;
  /* 11bf452c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf452f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf4531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4534 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11bf4538 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf453b jne 0x11bf4565 */
  if (!C.zf) goto L_11bf4565;
  /* 11bf453d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4540 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4544 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4545 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4548 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf454a push ecx */
  push32((uint32_t)(ECX));
  /* 11bf454b call 0x11bf4580 */
  push32(0x11bf4550u); f_11bf4580();
  /* 11bf4550 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4553 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf4555 jne 0x11bf4565 */
  if (!C.zf) goto L_11bf4565;
  /* 11bf4557 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf455a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf455c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf455f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11bf4563 jmp 0x11bf4572 */
  goto L_11bf4572;
L_11bf4565:;
  /* 11bf4565 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4568 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf456b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf456e jmp 0x11bf4511 */
  goto L_11bf4511;
L_11bf4570:;
  /* 11bf4570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf4572:;
  /* 11bf4572 mov esp, ebp */
  ESP = (EBP);
  /* 11bf4574 pop ebp */
  EBP = (pop32());
  /* 11bf4575 ret  */
  ESPCHK(0x11bf44b0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11bf4580 (79 bytes, 32 insns) */
void f_11bf4580(void) {
  FTRACE(0x11bf4580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4580 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4581 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4583 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4584 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4588 jne 0x11bf458e */
  if (!C.zf) goto L_11bf458e;
  /* 11bf458a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf458c jmp 0x11bf45cb */
  goto L_11bf45cb;
L_11bf458e:;
  /* 11bf458e mov eax, dword ptr [0x11c11d44] */
  EAX = (r32((uint32_t)(0x11c11d44)));
  /* 11bf4593 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4594 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf4597 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4598 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf459b push edx */
  push32((uint32_t)(EDX));
  /* 11bf459c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf459f push eax */
  push32((uint32_t)(EAX));
  /* 11bf45a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf45a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf45a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf45a6 mov edx, dword ptr [0x11c11fe4] */
  EDX = (r32((uint32_t)(0x11c11fe4)));
  /* 11bf45ac push edx */
  push32((uint32_t)(EDX));
  /* 11bf45ad call 0x11bf4680 */
  push32(0x11bf45b2u); f_11bf4680();
  /* 11bf45b2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf45b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf45b8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf45bc jne 0x11bf45c5 */
  if (!C.zf) goto L_11bf45c5;
  /* 11bf45be mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11bf45c3 jmp 0x11bf45cb */
  goto L_11bf45cb;
L_11bf45c5:;
  /* 11bf45c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf45c8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11bf45cb:;
  /* 11bf45cb mov esp, ebp */
  ESP = (EBP);
  /* 11bf45cd pop ebp */
  EBP = (pop32());
  /* 11bf45ce ret  */
  ESPCHK(0x11bf4580u, _esp0);
  ESP += 4; return;
}

/* FUN_100145d0 @ 0x11bf45d0 (174 bytes, 66 insns) */
void f_11bf45d0(void) {
  FTRACE(0x11bf45d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf45d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf45d1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf45d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf45d6 mov eax, dword ptr [0x11c1067c] */
  EAX = (r32((uint32_t)(0x11c1067c)));
  /* 11bf45db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11bf45de:;
  /* 11bf45de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf45e1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf45e4 je 0x11bf4678 */
  if (C.zf) goto L_11bf4678;
  /* 11bf45ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf45ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf45ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf45f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf45f2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf45f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf45f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf45f9 push eax */
  push32((uint32_t)(EAX));
  /* 11bf45fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf45fc push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf45fe call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bf4604u);
  /* 11bf4604 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf4607 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf460b jne 0x11bf4612 */
  if (!C.zf) goto L_11bf4612;
  /* 11bf460d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4610 jmp 0x11bf467a */
  goto L_11bf467a;
L_11bf4612:;
  /* 11bf4612 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11bf4614 push 0x11c0cabc */
  push32((uint32_t)(0x11c0cabcu));
  /* 11bf4619 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf461b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf461e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf461f call 0x11be4ad0 */
  push32(0x11bf4624u); f_11be4ad0();
  /* 11bf4624 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4627 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf462a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf462e jne 0x11bf4635 */
  if (!C.zf) goto L_11bf4635;
  /* 11bf4630 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4633 jmp 0x11bf467a */
  goto L_11bf467a;
L_11bf4635:;
  /* 11bf4635 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4637 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4639 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf463c push edx */
  push32((uint32_t)(EDX));
  /* 11bf463d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4640 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4641 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf4643 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4646 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf4648 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4649 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf464b push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf464d call dword ptr [0x11c133b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c133b0))), 0x11bf4653u);
  /* 11bf4653 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf4655 jne 0x11bf465c */
  if (!C.zf) goto L_11bf465c;
  /* 11bf4657 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf465a jmp 0x11bf467a */
  goto L_11bf467a;
L_11bf465c:;
  /* 11bf465c push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf465e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4661 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4662 call 0x11bf4ad0 */
  push32(0x11bf4667u); f_11bf4ad0();
  /* 11bf4667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf466a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf466d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4670 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf4673 jmp 0x11bf45de */
  goto L_11bf45de;
L_11bf4678:;
  /* 11bf4678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf467a:;
  /* 11bf467a mov esp, ebp */
  ESP = (EBP);
  /* 11bf467c pop ebp */
  EBP = (pop32());
  /* 11bf467d ret  */
  ESPCHK(0x11bf45d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014680 @ 0x11bf4680 (970 bytes, 340 insns) */
void f_11bf4680(void) {
  FTRACE(0x11bf4680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4680 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4681 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4683 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11bf4685 push 0x11c0cb10 */
  push32((uint32_t)(0x11c0cb10u));
  /* 11bf468a push 0x11bedbd8 */
  push32((uint32_t)(0x11bedbd8u));
  /* 11bf468f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11bf4695 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4696 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11bf469d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf46a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf46a1 push esi */
  push32((uint32_t)(ESI));
  /* 11bf46a2 push edi */
  push32((uint32_t)(EDI));
  /* 11bf46a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf46a6 cmp dword ptr [0x11c109bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c109bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf46ad jne 0x11bf4706 */
  if (!C.zf) goto L_11bf4706;
  /* 11bf46af push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf46b1 push 0x11c0c16c */
  push32((uint32_t)(0x11c0c16cu));
  /* 11bf46b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf46b8 push 0x11c0c16c */
  push32((uint32_t)(0x11c0c16cu));
  /* 11bf46bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf46bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf46c1 call dword ptr [0x11c132ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132ac))), 0x11bf46c7u);
  /* 11bf46c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf46c9 je 0x11bf46d7 */
  if (C.zf) goto L_11bf46d7;
  /* 11bf46cb mov dword ptr [0x11c109bc], 1 */
  w32((uint32_t)(0x11c109bc), (0x1u));
  /* 11bf46d5 jmp 0x11bf4706 */
  goto L_11bf4706;
L_11bf46d7:;
  /* 11bf46d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf46d9 push 0x11c0c168 */
  push32((uint32_t)(0x11c0c168u));
  /* 11bf46de push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf46e0 push 0x11c0c168 */
  push32((uint32_t)(0x11c0c168u));
  /* 11bf46e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf46e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf46e9 call dword ptr [0x11c132b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132b0))), 0x11bf46efu);
  /* 11bf46ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf46f1 je 0x11bf46ff */
  if (C.zf) goto L_11bf46ff;
  /* 11bf46f3 mov dword ptr [0x11c109bc], 2 */
  w32((uint32_t)(0x11c109bc), (0x2u));
  /* 11bf46fd jmp 0x11bf4706 */
  goto L_11bf4706;
L_11bf46ff:;
  /* 11bf46ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4701 jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4706:;
  /* 11bf4706 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf470a jle 0x11bf471f */
  if ((C.zf||C.sf!=C.of)) goto L_11bf471f;
  /* 11bf470c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf470f push eax */
  push32((uint32_t)(EAX));
  /* 11bf4710 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf4713 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4714 call 0x11bf4a80 */
  push32(0x11bf4719u); f_11bf4a80();
  /* 11bf4719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf471c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11bf471f:;
  /* 11bf471f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4723 jle 0x11bf4738 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf4738;
  /* 11bf4725 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11bf4728 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4729 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf472c push eax */
  push32((uint32_t)(EAX));
  /* 11bf472d call 0x11bf4a80 */
  push32(0x11bf4732u); f_11bf4a80();
  /* 11bf4732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4735 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11bf4738:;
  /* 11bf4738 cmp dword ptr [0x11c109bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11c109bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf473f jne 0x11bf4764 */
  if (!C.zf) goto L_11bf4764;
  /* 11bf4741 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11bf4744 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4745 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf4748 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4749 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf474c push eax */
  push32((uint32_t)(EAX));
  /* 11bf474d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf4750 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4751 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4754 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4758 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4759 call dword ptr [0x11c132b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132b0))), 0x11bf475fu);
  /* 11bf475f jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4764:;
  /* 11bf4764 cmp dword ptr [0x11c109bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c109bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf476b jne 0x11bf4a62 */
  if (!C.zf) goto L_11bf4a62;
  /* 11bf4771 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4775 jne 0x11bf4780 */
  if (!C.zf) goto L_11bf4780;
  /* 11bf4777 mov ecx, dword ptr [0x11c10868] */
  ECX = (r32((uint32_t)(0x11c10868)));
  /* 11bf477d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11bf4780:;
  /* 11bf4780 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4784 je 0x11bf4790 */
  if (C.zf) goto L_11bf4790;
  /* 11bf4786 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf478a jne 0x11bf490c */
  if (!C.zf) goto L_11bf490c;
L_11bf4790:;
  /* 11bf4790 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf4793 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4796 jne 0x11bf47a2 */
  if (!C.zf) goto L_11bf47a2;
  /* 11bf4798 mov eax, 2 */
  EAX = (0x2u);
  /* 11bf479d jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf47a2:;
  /* 11bf47a2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf47a6 jle 0x11bf47b2 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf47b2;
  /* 11bf47a8 mov eax, 1 */
  EAX = (0x1u);
  /* 11bf47ad jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf47b2:;
  /* 11bf47b2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf47b6 jle 0x11bf47c2 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf47c2;
  /* 11bf47b8 mov eax, 3 */
  EAX = (0x3u);
  /* 11bf47bd jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf47c2:;
  /* 11bf47c2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11bf47c5 push eax */
  push32((uint32_t)(EAX));
  /* 11bf47c6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11bf47c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf47ca call dword ptr [0x11c13308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c13308))), 0x11bf47d0u);
  /* 11bf47d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf47d2 jne 0x11bf47db */
  if (!C.zf) goto L_11bf47db;
  /* 11bf47d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf47d6 jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf47db:;
  /* 11bf47db cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf47df jne 0x11bf47e7 */
  if (!C.zf) goto L_11bf47e7;
  /* 11bf47e1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf47e5 je 0x11bf4814 */
  if (C.zf) goto L_11bf4814;
L_11bf47e7:;
  /* 11bf47e7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf47eb jne 0x11bf47f3 */
  if (!C.zf) goto L_11bf47f3;
  /* 11bf47ed cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf47f1 je 0x11bf4814 */
  if (C.zf) goto L_11bf4814;
L_11bf47f3:;
  /* 11bf47f3 push 0x11c0cad0 */
  push32((uint32_t)(0x11c0cad0u));
  /* 11bf47f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf47fa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11bf47ff push 0x11c0cac8 */
  push32((uint32_t)(0x11c0cac8u));
  /* 11bf4804 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4806 call 0x11be3b90 */
  push32(0x11bf480bu); f_11be3b90();
  /* 11bf480b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf480e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4811 jne 0x11bf4814 */
  if (!C.zf) goto L_11bf4814;
  /* 11bf4813 int3  */
  x86_unimpl("int3 @ 0x11bf4813");
L_11bf4814:;
  /* 11bf4814 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf4816 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf4818 jne 0x11bf47db */
  if (!C.zf) goto L_11bf47db;
  /* 11bf481a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf481e jle 0x11bf4893 */
  if ((C.zf||C.sf!=C.of)) goto L_11bf4893;
  /* 11bf4820 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4824 jae 0x11bf4830 */
  if (!C.cf) goto L_11bf4830;
  /* 11bf4826 mov eax, 3 */
  EAX = (0x3u);
  /* 11bf482b jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4830:;
  /* 11bf4830 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11bf4833 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11bf4836 jmp 0x11bf4841 */
  goto L_11bf4841;
L_11bf4838:;
  /* 11bf4838 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf483b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf483e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11bf4841:;
  /* 11bf4841 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf4844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4846 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf4848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf484a je 0x11bf4889 */
  if (C.zf) goto L_11bf4889;
  /* 11bf484c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf484f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf4851 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11bf4854 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf4856 je 0x11bf4889 */
  if (C.zf) goto L_11bf4889;
  /* 11bf4858 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf485b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf485d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf485f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf4862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4864 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf4866 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4868 jl 0x11bf4887 */
  if ((C.sf!=C.of)) goto L_11bf4887;
  /* 11bf486a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf486d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf486f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf4871 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf4874 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf4876 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11bf4879 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf487b jg 0x11bf4887 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf4887;
  /* 11bf487d mov eax, 2 */
  EAX = (0x2u);
  /* 11bf4882 jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4887:;
  /* 11bf4887 jmp 0x11bf4838 */
  goto L_11bf4838;
L_11bf4889:;
  /* 11bf4889 mov eax, 3 */
  EAX = (0x3u);
  /* 11bf488e jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4893:;
  /* 11bf4893 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4897 jle 0x11bf490c */
  if ((C.zf||C.sf!=C.of)) goto L_11bf490c;
  /* 11bf4899 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf489d jae 0x11bf48a9 */
  if (!C.cf) goto L_11bf48a9;
  /* 11bf489f mov eax, 1 */
  EAX = (0x1u);
  /* 11bf48a4 jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf48a9:;
  /* 11bf48a9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11bf48ac mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11bf48af jmp 0x11bf48ba */
  goto L_11bf48ba;
L_11bf48b1:;
  /* 11bf48b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf48b4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf48b7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11bf48ba:;
  /* 11bf48ba mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf48bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf48bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf48c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf48c3 je 0x11bf4902 */
  if (C.zf) goto L_11bf4902;
  /* 11bf48c5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf48c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf48ca mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11bf48cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf48cf je 0x11bf4902 */
  if (C.zf) goto L_11bf4902;
  /* 11bf48d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf48d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf48d6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11bf48d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf48db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf48dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11bf48df cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf48e1 jl 0x11bf4900 */
  if ((C.sf!=C.of)) goto L_11bf4900;
  /* 11bf48e3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf48e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf48e8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf48ea mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11bf48ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf48ef mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11bf48f2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf48f4 jg 0x11bf4900 */
  if ((!C.zf&&C.sf==C.of)) goto L_11bf4900;
  /* 11bf48f6 mov eax, 2 */
  EAX = (0x2u);
  /* 11bf48fb jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4900:;
  /* 11bf4900 jmp 0x11bf48b1 */
  goto L_11bf48b1;
L_11bf4902:;
  /* 11bf4902 mov eax, 1 */
  EAX = (0x1u);
  /* 11bf4907 jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf490c:;
  /* 11bf490c push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf490e push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf4910 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf4913 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4914 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf4917 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4918 push 9 */
  push32((uint32_t)(0x9u));
  /* 11bf491a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11bf491d push eax */
  push32((uint32_t)(EAX));
  /* 11bf491e call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11bf4924u);
  /* 11bf4924 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11bf4927 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf492b jne 0x11bf4934 */
  if (!C.zf) goto L_11bf4934;
  /* 11bf492d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf492f jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4934:;
  /* 11bf4934 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11bf493b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf493e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bf4940 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4943 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bf4945 call 0x11be7c70 */
  push32(0x11bf494au); f_11be7c70();
  /* 11bf494a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11bf494d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf4950 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11bf4953 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11bf4956 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bf495d jmp 0x11bf4976 */
  goto L_11bf4976;
  /* 11bf495f mov eax, 1 */
  EAX = (0x1u);
  /* 11bf4964 ret  */
  ESPCHK(0x11bf4680u, _esp0);
  ESP += 4; return;
  /* 11bf4965 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf4968 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11bf496f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bf4976:;
  /* 11bf4976 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf497a jne 0x11bf4983 */
  if (!C.zf) goto L_11bf4983;
  /* 11bf497c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf497e jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4983:;
  /* 11bf4983 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf4986 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4987 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf498a push eax */
  push32((uint32_t)(EAX));
  /* 11bf498b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11bf498e push ecx */
  push32((uint32_t)(ECX));
  /* 11bf498f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11bf4992 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4993 push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf4995 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11bf4998 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4999 call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11bf499fu);
  /* 11bf499f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf49a1 jne 0x11bf49aa */
  if (!C.zf) goto L_11bf49aa;
  /* 11bf49a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf49a5 jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf49aa:;
  /* 11bf49aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf49ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11bf49ae mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11bf49b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf49b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf49b5 push edx */
  push32((uint32_t)(EDX));
  /* 11bf49b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11bf49b8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11bf49bb push eax */
  push32((uint32_t)(EAX));
  /* 11bf49bc call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11bf49c2u);
  /* 11bf49c2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11bf49c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf49c9 jne 0x11bf49d2 */
  if (!C.zf) goto L_11bf49d2;
  /* 11bf49cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf49cd jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf49d2:;
  /* 11bf49d2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11bf49d9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf49dc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11bf49de add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf49e1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11bf49e3 call 0x11be7c70 */
  push32(0x11bf49e8u); f_11be7c70();
  /* 11bf49e8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11bf49eb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11bf49ee mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11bf49f1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11bf49f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11bf49fb jmp 0x11bf4a14 */
  goto L_11bf4a14;
  /* 11bf49fd mov eax, 1 */
  EAX = (0x1u);
  /* 11bf4a02 ret  */
  ESPCHK(0x11bf4680u, _esp0);
  ESP += 4; return;
  /* 11bf4a03 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf4a06 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11bf4a0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11bf4a14:;
  /* 11bf4a14 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4a18 jne 0x11bf4a1e */
  if (!C.zf) goto L_11bf4a1e;
  /* 11bf4a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4a1c jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4a1e:;
  /* 11bf4a1e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf4a21 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4a22 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf4a25 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4a26 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11bf4a29 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4a2a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11bf4a2d push edx */
  push32((uint32_t)(EDX));
  /* 11bf4a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11bf4a30 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11bf4a33 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4a34 call dword ptr [0x11c132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132fc))), 0x11bf4a3au);
  /* 11bf4a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf4a3c jne 0x11bf4a42 */
  if (!C.zf) goto L_11bf4a42;
  /* 11bf4a3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4a40 jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4a42:;
  /* 11bf4a42 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11bf4a45 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4a46 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11bf4a49 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4a4a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11bf4a4d push eax */
  push32((uint32_t)(EAX));
  /* 11bf4a4e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11bf4a51 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4a52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4a55 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4a59 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4a5a call dword ptr [0x11c132ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132ac))), 0x11bf4a60u);
  /* 11bf4a60 jmp 0x11bf4a64 */
  goto L_11bf4a64;
L_11bf4a62:;
  /* 11bf4a62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf4a64:;
  /* 11bf4a64 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11bf4a67 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf4a6a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11bf4a71 pop edi */
  EDI = (pop32());
  /* 11bf4a72 pop esi */
  ESI = (pop32());
  /* 11bf4a73 pop ebx */
  EBX = (pop32());
  /* 11bf4a74 mov esp, ebp */
  ESP = (EBP);
  /* 11bf4a76 pop ebp */
  EBP = (pop32());
  /* 11bf4a77 ret  */
  ESPCHK(0x11bf4680u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a80 @ 0x11bf4a80 (80 bytes, 32 insns) */
void f_11bf4a80(void) {
  FTRACE(0x11bf4a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4a81 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4a86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4a89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf4a8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4a8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bf4a92:;
  /* 11bf4a92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4a95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4a98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4a9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf4a9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf4aa0 je 0x11bf4ab7 */
  if (C.zf) goto L_11bf4ab7;
  /* 11bf4aa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4aa5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf4aa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf4aaa je 0x11bf4ab7 */
  if (C.zf) goto L_11bf4ab7;
  /* 11bf4aac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4aaf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4ab2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf4ab5 jmp 0x11bf4a92 */
  goto L_11bf4a92;
L_11bf4ab7:;
  /* 11bf4ab7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4aba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11bf4abd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf4abf jne 0x11bf4ac9 */
  if (!C.zf) goto L_11bf4ac9;
  /* 11bf4ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4ac4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4ac7 jmp 0x11bf4acc */
  goto L_11bf4acc;
L_11bf4ac9:;
  /* 11bf4ac9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11bf4acc:;
  /* 11bf4acc mov esp, ebp */
  ESP = (EBP);
  /* 11bf4ace pop ebp */
  EBP = (pop32());
  /* 11bf4acf ret  */
  ESPCHK(0x11bf4a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ad0 @ 0x11bf4ad0 (736 bytes, 224 insns) */
void f_11bf4ad0(void) {
  FTRACE(0x11bf4ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4ad3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4ad6 push esi */
  push32((uint32_t)(ESI));
  /* 11bf4ad7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4adb je 0x11bf4afc */
  if (C.zf) goto L_11bf4afc;
  /* 11bf4add push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11bf4adf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4ae2 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4ae3 call 0x11bf4f20 */
  push32(0x11bf4ae8u); f_11bf4f20();
  /* 11bf4ae8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4aeb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11bf4aee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4af2 je 0x11bf4afc */
  if (C.zf) goto L_11bf4afc;
  /* 11bf4af4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4af7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4afa jne 0x11bf4b04 */
  if (!C.zf) goto L_11bf4b04;
L_11bf4afc:;
  /* 11bf4afc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4aff jmp 0x11bf4dab */
  goto L_11bf4dab;
L_11bf4b04:;
  /* 11bf4b04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf4b07 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11bf4b0b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf4b0d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4b0f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11bf4b10 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11bf4b13 mov ecx, dword ptr [0x11c10674] */
  ECX = (r32((uint32_t)(0x11c10674)));
  /* 11bf4b19 cmp ecx, dword ptr [0x11c10678] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11c10678))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4b1f jne 0x11bf4b35 */
  if (!C.zf) goto L_11bf4b35;
  /* 11bf4b21 mov edx, dword ptr [0x11c10674] */
  EDX = (r32((uint32_t)(0x11c10674)));
  /* 11bf4b27 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4b28 call 0x11bf4e30 */
  push32(0x11bf4b2du); f_11bf4e30();
  /* 11bf4b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4b30 mov dword ptr [0x11c10674], eax */
  w32((uint32_t)(0x11c10674), (EAX));
L_11bf4b35:;
  /* 11bf4b35 cmp dword ptr [0x11c10674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4b3c jne 0x11bf4bf5 */
  if (!C.zf) goto L_11bf4bf5;
  /* 11bf4b42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4b46 je 0x11bf4b67 */
  if (C.zf) goto L_11bf4b67;
  /* 11bf4b48 cmp dword ptr [0x11c1067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4b4f je 0x11bf4b67 */
  if (C.zf) goto L_11bf4b67;
  /* 11bf4b51 call 0x11bf45d0 */
  push32(0x11bf4b56u); f_11bf45d0();
  /* 11bf4b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf4b58 je 0x11bf4b62 */
  if (C.zf) goto L_11bf4b62;
  /* 11bf4b5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4b5d jmp 0x11bf4dab */
  goto L_11bf4dab;
L_11bf4b62:;
  /* 11bf4b62 jmp 0x11bf4bf5 */
  goto L_11bf4bf5;
L_11bf4b67:;
  /* 11bf4b67 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4b6b je 0x11bf4b74 */
  if (C.zf) goto L_11bf4b74;
  /* 11bf4b6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4b6f jmp 0x11bf4dab */
  goto L_11bf4dab;
L_11bf4b74:;
  /* 11bf4b74 cmp dword ptr [0x11c10674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4b7b jne 0x11bf4bb4 */
  if (!C.zf) goto L_11bf4bb4;
  /* 11bf4b7d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11bf4b82 push 0x11c0cb28 */
  push32((uint32_t)(0x11c0cb28u));
  /* 11bf4b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4b89 push 4 */
  push32((uint32_t)(0x4u));
  /* 11bf4b8b call 0x11be4ad0 */
  push32(0x11bf4b90u); f_11be4ad0();
  /* 11bf4b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4b93 mov dword ptr [0x11c10674], eax */
  w32((uint32_t)(0x11c10674), (EAX));
  /* 11bf4b98 cmp dword ptr [0x11c10674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c10674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4b9f jne 0x11bf4ba9 */
  if (!C.zf) goto L_11bf4ba9;
  /* 11bf4ba1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4ba4 jmp 0x11bf4dab */
  goto L_11bf4dab;
L_11bf4ba9:;
  /* 11bf4ba9 mov eax, dword ptr [0x11c10674] */
  EAX = (r32((uint32_t)(0x11c10674)));
  /* 11bf4bae mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11bf4bb4:;
  /* 11bf4bb4 cmp dword ptr [0x11c1067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4bbb jne 0x11bf4bf5 */
  if (!C.zf) goto L_11bf4bf5;
  /* 11bf4bbd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11bf4bc2 push 0x11c0cb28 */
  push32((uint32_t)(0x11c0cb28u));
  /* 11bf4bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4bc9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11bf4bcb call 0x11be4ad0 */
  push32(0x11bf4bd0u); f_11be4ad0();
  /* 11bf4bd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4bd3 mov dword ptr [0x11c1067c], eax */
  w32((uint32_t)(0x11c1067c), (EAX));
  /* 11bf4bd8 cmp dword ptr [0x11c1067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c1067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4bdf jne 0x11bf4be9 */
  if (!C.zf) goto L_11bf4be9;
  /* 11bf4be1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4be4 jmp 0x11bf4dab */
  goto L_11bf4dab;
L_11bf4be9:;
  /* 11bf4be9 mov ecx, dword ptr [0x11c1067c] */
  ECX = (r32((uint32_t)(0x11c1067c)));
  /* 11bf4bef mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11bf4bf5:;
  /* 11bf4bf5 mov edx, dword ptr [0x11c10674] */
  EDX = (r32((uint32_t)(0x11c10674)));
  /* 11bf4bfb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11bf4bfe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf4c01 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4c04 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4c05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4c08 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4c09 call 0x11bf4db0 */
  push32(0x11bf4c0eu); f_11bf4db0();
  /* 11bf4c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4c11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf4c14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4c18 jl 0x11bf4cb1 */
  if ((C.sf!=C.of)) goto L_11bf4cb1;
  /* 11bf4c1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4c21 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4c24 je 0x11bf4cb1 */
  if (C.zf) goto L_11bf4cb1;
  /* 11bf4c2a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4c2e je 0x11bf4ca3 */
  if (C.zf) goto L_11bf4ca3;
  /* 11bf4c30 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4c32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4c35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4c38 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11bf4c3b push edx */
  push32((uint32_t)(EDX));
  /* 11bf4c3c call 0x11be5560 */
  push32(0x11bf4c41u); f_11be5560();
  /* 11bf4c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4c44 jmp 0x11bf4c4f */
  goto L_11bf4c4f;
L_11bf4c46:;
  /* 11bf4c46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4c49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4c4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bf4c4f:;
  /* 11bf4c4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4c52 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4c55 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4c59 je 0x11bf4c70 */
  if (C.zf) goto L_11bf4c70;
  /* 11bf4c5b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4c5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4c61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4c64 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4c67 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11bf4c6b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11bf4c6e jmp 0x11bf4c46 */
  goto L_11bf4c46;
L_11bf4c70:;
  /* 11bf4c70 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11bf4c75 push 0x11c0cb28 */
  push32((uint32_t)(0x11c0cb28u));
  /* 11bf4c7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4c7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4c7f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11bf4c82 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4c83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4c86 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4c87 call 0x11be4f60 */
  push32(0x11bf4c8cu); f_11be4f60();
  /* 11bf4c8c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4c8f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf4c92 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4c96 je 0x11bf4ca1 */
  if (C.zf) goto L_11bf4ca1;
  /* 11bf4c98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4c9b mov dword ptr [0x11c10674], edx */
  w32((uint32_t)(0x11c10674), (EDX));
L_11bf4ca1:;
  /* 11bf4ca1 jmp 0x11bf4caf */
  goto L_11bf4caf;
L_11bf4ca3:;
  /* 11bf4ca3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4ca6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4ca9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4cac mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11bf4caf:;
  /* 11bf4caf jmp 0x11bf4d24 */
  goto L_11bf4d24;
L_11bf4cb1:;
  /* 11bf4cb1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4cb5 jne 0x11bf4d1d */
  if (!C.zf) goto L_11bf4d1d;
  /* 11bf4cb7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4cbb jge 0x11bf4cc5 */
  if ((C.sf==C.of)) goto L_11bf4cc5;
  /* 11bf4cbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4cc0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf4cc2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11bf4cc5:;
  /* 11bf4cc5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11bf4cca push 0x11c0cb28 */
  push32((uint32_t)(0x11c0cb28u));
  /* 11bf4ccf push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4cd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4cd4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11bf4cdb push edx */
  push32((uint32_t)(EDX));
  /* 11bf4cdc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4cdf push eax */
  push32((uint32_t)(EAX));
  /* 11bf4ce0 call 0x11be4f60 */
  push32(0x11bf4ce5u); f_11be4f60();
  /* 11bf4ce5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4ce8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf4ceb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4cef jne 0x11bf4cf9 */
  if (!C.zf) goto L_11bf4cf9;
  /* 11bf4cf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4cf4 jmp 0x11bf4dab */
  goto L_11bf4dab;
L_11bf4cf9:;
  /* 11bf4cf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4cfc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4cff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4d02 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11bf4d05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4d08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4d0b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11bf4d13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4d16 mov dword ptr [0x11c10674], eax */
  w32((uint32_t)(0x11c10674), (EAX));
  /* 11bf4d1b jmp 0x11bf4d24 */
  goto L_11bf4d24;
L_11bf4d1d:;
  /* 11bf4d1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4d1f jmp 0x11bf4dab */
  goto L_11bf4dab;
L_11bf4d24:;
  /* 11bf4d24 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4d28 je 0x11bf4da9 */
  if (C.zf) goto L_11bf4da9;
  /* 11bf4d2a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11bf4d2f push 0x11c0cb28 */
  push32((uint32_t)(0x11c0cb28u));
  /* 11bf4d34 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4d36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4d39 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4d3a call 0x11be7900 */
  push32(0x11bf4d3fu); f_11be7900();
  /* 11bf4d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4d42 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4d45 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4d46 call 0x11be4ad0 */
  push32(0x11bf4d4bu); f_11be4ad0();
  /* 11bf4d4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4d4e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11bf4d51 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4d55 je 0x11bf4da9 */
  if (C.zf) goto L_11bf4da9;
  /* 11bf4d57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4d5a push edx */
  push32((uint32_t)(EDX));
  /* 11bf4d5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf4d5e push eax */
  push32((uint32_t)(EAX));
  /* 11bf4d5f call 0x11be7a80 */
  push32(0x11bf4d64u); f_11be7a80();
  /* 11bf4d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4d67 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11bf4d6a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4d6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf4d70 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4d72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11bf4d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4d78 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11bf4d7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4d7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4d81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf4d84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11bf4d87 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11bf4d89 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4d8b not edx */
  EDX = (~(EDX));
  /* 11bf4d8d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11bf4d90 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4d91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf4d94 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4d95 call dword ptr [0x11c132a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c132a8))), 0x11bf4d9bu);
  /* 11bf4d9b push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4d9d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf4da0 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4da1 call 0x11be5560 */
  push32(0x11bf4da6u); f_11be5560();
  /* 11bf4da6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf4da9:;
  /* 11bf4da9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf4dab:;
  /* 11bf4dab pop esi */
  ESI = (pop32());
  /* 11bf4dac mov esp, ebp */
  ESP = (EBP);
  /* 11bf4dae pop ebp */
  EBP = (pop32());
  /* 11bf4daf ret  */
  ESPCHK(0x11bf4ad0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11bf4db0 (124 bytes, 47 insns) */
void f_11bf4db0(void) {
  FTRACE(0x11bf4db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4db1 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4db3 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4db4 mov eax, dword ptr [0x11c10674] */
  EAX = (r32((uint32_t)(0x11c10674)));
  /* 11bf4db9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11bf4dbc jmp 0x11bf4dc7 */
  goto L_11bf4dc7;
L_11bf4dbe:;
  /* 11bf4dbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4dc1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4dc4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11bf4dc7:;
  /* 11bf4dc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4dca cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4dcd je 0x11bf4e1a */
  if (C.zf) goto L_11bf4e1a;
  /* 11bf4dcf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4dd2 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4dd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf4dd8 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4dd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4ddc push eax */
  push32((uint32_t)(EAX));
  /* 11bf4ddd call 0x11bf4580 */
  push32(0x11bf4de2u); f_11bf4580();
  /* 11bf4de2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4de5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11bf4de7 jne 0x11bf4e18 */
  if (!C.zf) goto L_11bf4e18;
  /* 11bf4de9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4dec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf4dee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4df1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11bf4df5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4df8 je 0x11bf4e0a */
  if (C.zf) goto L_11bf4e0a;
  /* 11bf4dfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4dfd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf4dff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4e02 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11bf4e06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf4e08 jne 0x11bf4e18 */
  if (!C.zf) goto L_11bf4e18;
L_11bf4e0a:;
  /* 11bf4e0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4e0d sub eax, dword ptr [0x11c10674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c10674))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4e13 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11bf4e16 jmp 0x11bf4e28 */
  goto L_11bf4e28;
L_11bf4e18:;
  /* 11bf4e18 jmp 0x11bf4dbe */
  goto L_11bf4dbe;
L_11bf4e1a:;
  /* 11bf4e1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4e1d sub eax, dword ptr [0x11c10674] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c10674))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4e23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11bf4e26 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11bf4e28:;
  /* 11bf4e28 mov esp, ebp */
  ESP = (EBP);
  /* 11bf4e2a pop ebp */
  EBP = (pop32());
  /* 11bf4e2b ret  */
  ESPCHK(0x11bf4db0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11bf4e30 (238 bytes, 80 insns) */
void f_11bf4e30(void) {
  FTRACE(0x11bf4e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4e31 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4e33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4e36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11bf4e3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4e40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf4e43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4e47 jne 0x11bf4e50 */
  if (!C.zf) goto L_11bf4e50;
  /* 11bf4e49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4e4b jmp 0x11bf4f1a */
  goto L_11bf4f1a;
L_11bf4e50:;
  /* 11bf4e50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4e53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf4e55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4e58 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4e5b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11bf4e5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf4e60 je 0x11bf4e6d */
  if (C.zf) goto L_11bf4e6d;
  /* 11bf4e62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf4e65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4e68 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11bf4e6b jmp 0x11bf4e50 */
  goto L_11bf4e50;
L_11bf4e6d:;
  /* 11bf4e6d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11bf4e72 push 0x11c0cb28 */
  push32((uint32_t)(0x11c0cb28u));
  /* 11bf4e77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4e79 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11bf4e7c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11bf4e83 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4e84 call 0x11be4ad0 */
  push32(0x11bf4e89u); f_11be4ad0();
  /* 11bf4e89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4e8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11bf4e8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4e92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11bf4e95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4e99 jne 0x11bf4ea5 */
  if (!C.zf) goto L_11bf4ea5;
  /* 11bf4e9b push 9 */
  push32((uint32_t)(0x9u));
  /* 11bf4e9d call 0x11be3a40 */
  push32(0x11bf4ea2u); f_11be3a40();
  /* 11bf4ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf4ea5:;
  /* 11bf4ea5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4ea8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11bf4eab:;
  /* 11bf4eab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4eae cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4eb1 je 0x11bf4f0e */
  if (C.zf) goto L_11bf4f0e;
  /* 11bf4eb3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11bf4eb8 push 0x11c0cb28 */
  push32((uint32_t)(0x11c0cb28u));
  /* 11bf4ebd push 2 */
  push32((uint32_t)(0x2u));
  /* 11bf4ebf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4ec2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11bf4ec4 push edx */
  push32((uint32_t)(EDX));
  /* 11bf4ec5 call 0x11be7900 */
  push32(0x11bf4ecau); f_11be7900();
  /* 11bf4eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4ecd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4ed0 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4ed1 call 0x11be4ad0 */
  push32(0x11bf4ed6u); f_11be4ad0();
  /* 11bf4ed6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4ed9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4edc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11bf4ede mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4ee1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4ee4 je 0x11bf4efa */
  if (C.zf) goto L_11bf4efa;
  /* 11bf4ee6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4ee9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11bf4eeb push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4eec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4eef mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11bf4ef1 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4ef2 call 0x11be7a80 */
  push32(0x11bf4ef7u); f_11be7a80();
  /* 11bf4ef7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11bf4efa:;
  /* 11bf4efa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11bf4efd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4f00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11bf4f03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4f06 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4f09 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11bf4f0c jmp 0x11bf4eab */
  goto L_11bf4eab;
L_11bf4f0e:;
  /* 11bf4f0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11bf4f11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11bf4f17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11bf4f1a:;
  /* 11bf4f1a mov esp, ebp */
  ESP = (EBP);
  /* 11bf4f1c pop ebp */
  EBP = (pop32());
  /* 11bf4f1d ret  */
  ESPCHK(0x11bf4e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f20 @ 0x11bf4f20 (237 bytes, 81 insns) */
void f_11bf4f20(void) {
  FTRACE(0x11bf4f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf4f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11bf4f21 mov ebp, esp */
  EBP = (ESP);
  /* 11bf4f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4f24 cmp dword ptr [0x11c11dcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c11dcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4f2b jne 0x11bf4f42 */
  if (!C.zf) goto L_11bf4f42;
  /* 11bf4f2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11bf4f30 push eax */
  push32((uint32_t)(EAX));
  /* 11bf4f31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4f34 push ecx */
  push32((uint32_t)(ECX));
  /* 11bf4f35 call 0x11bf5020 */
  push32(0x11bf4f3au); f_11bf5020();
  /* 11bf4f3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4f3d jmp 0x11bf5009 */
  goto L_11bf5009;
L_11bf4f42:;
  /* 11bf4f42 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bf4f44 call 0x11be84d0 */
  push32(0x11bf4f49u); f_11be84d0();
  /* 11bf4f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4f4c jmp 0x11bf4f57 */
  goto L_11bf4f57;
L_11bf4f4e:;
  /* 11bf4f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4f51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4f54 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11bf4f57:;
  /* 11bf4f57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4f5a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11bf4f5e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11bf4f62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4f65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bf4f6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11bf4f6d je 0x11bf4feb */
  if (C.zf) goto L_11bf4feb;
  /* 11bf4f6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4f72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4f77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf4f79 mov cl, byte ptr [eax + 0x11c11ee1] */
  CL = (r8((uint32_t)(EAX + 0x11c11ee1)));
  /* 11bf4f7f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf4f82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf4f84 je 0x11bf4fd6 */
  if (C.zf) goto L_11bf4fd6;
  /* 11bf4f86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4f89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4f8c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11bf4f8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4f92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf4f94 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf4f96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11bf4f98 jne 0x11bf4fa8 */
  if (!C.zf) goto L_11bf4fa8;
  /* 11bf4f9a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bf4f9c call 0x11be8570 */
  push32(0x11bf4fa1u); f_11be8570();
  /* 11bf4fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4fa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4fa6 jmp 0x11bf5009 */
  goto L_11bf5009;
L_11bf4fa8:;
  /* 11bf4fa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4fab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bf4fb1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11bf4fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4fb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf4fb9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11bf4fbb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11bf4fbd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4fc0 jne 0x11bf4fd4 */
  if (!C.zf) goto L_11bf4fd4;
  /* 11bf4fc2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bf4fc4 call 0x11be8570 */
  push32(0x11bf4fc9u); f_11be8570();
  /* 11bf4fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4fcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf4fcf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11bf4fd2 jmp 0x11bf5009 */
  goto L_11bf5009;
L_11bf4fd4:;
  /* 11bf4fd4 jmp 0x11bf4fe6 */
  goto L_11bf4fe6;
L_11bf4fd6:;
  /* 11bf4fd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4fd9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11bf4fdf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf4fe2 jne 0x11bf4fe6 */
  if (!C.zf) goto L_11bf4fe6;
  /* 11bf4fe4 jmp 0x11bf4feb */
  goto L_11bf4feb;
L_11bf4fe6:;
  /* 11bf4fe6 jmp 0x11bf4f4e */
  goto L_11bf4f4e;
L_11bf4feb:;
  /* 11bf4feb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11bf4fed call 0x11be8570 */
  push32(0x11bf4ff2u); f_11be8570();
  /* 11bf4ff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf4ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11bf4ff8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf4ffd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11bf5000 jne 0x11bf5007 */
  if (!C.zf) goto L_11bf5007;
  /* 11bf5002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11bf5005 jmp 0x11bf5009 */
  goto L_11bf5009;
L_11bf5007:;
  /* 11bf5007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11bf5009:;
  /* 11bf5009 mov esp, ebp */
  ESP = (EBP);
  /* 11bf500b pop ebp */
  EBP = (pop32());
  /* 11bf500c ret  */
  ESPCHK(0x11bf4f20u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11bf5020 (193 bytes, 87 insns) */
void f_11bf5020(void) {
  FTRACE(0x11bf5020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf5020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf5022 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11bf5026 push ebx */
  push32((uint32_t)(EBX));
  /* 11bf5027 mov ebx, eax */
  EBX = (EAX);
  /* 11bf5029 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11bf502c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11bf5030 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11bf5036 je 0x11bf504b */
  if (C.zf) goto L_11bf504b;
L_11bf5038:;
  /* 11bf5038 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11bf503a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11bf503b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf503d je 0x11bf5010 */
  if (C.zf) { jmp_ind(0x11bf5010u); return; }
  /* 11bf503f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11bf5041 je 0x11bf5094 */
  if (C.zf) goto L_11bf5094;
  /* 11bf5043 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11bf5049 jne 0x11bf5038 */
  if (!C.zf) goto L_11bf5038;
L_11bf504b:;
  /* 11bf504b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11bf504d push edi */
  push32((uint32_t)(EDI));
  /* 11bf504e mov eax, ebx */
  EAX = (EBX);
  /* 11bf5050 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11bf5053 push esi */
  push32((uint32_t)(ESI));
  /* 11bf5054 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11bf5056:;
  /* 11bf5056 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11bf5058 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11bf505d mov eax, ecx */
  EAX = (ECX);
  /* 11bf505f mov esi, edi */
  ESI = (EDI);
  /* 11bf5061 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11bf5063 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf5065 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf5067 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11bf506a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11bf506d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11bf506f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11bf5071 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11bf5074 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11bf507a jne 0x11bf5098 */
  if (!C.zf) goto L_11bf5098;
  /* 11bf507c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11bf5081 je 0x11bf5056 */
  if (C.zf) goto L_11bf5056;
  /* 11bf5083 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11bf5088 jne 0x11bf5092 */
  if (!C.zf) goto L_11bf5092;
  /* 11bf508a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11bf5090 jne 0x11bf5056 */
  if (!C.zf) goto L_11bf5056;
L_11bf5092:;
  /* 11bf5092 pop esi */
  ESI = (pop32());
  /* 11bf5093 pop edi */
  EDI = (pop32());
L_11bf5094:;
  /* 11bf5094 pop ebx */
  EBX = (pop32());
  /* 11bf5095 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11bf5097 ret  */
  ESPCHK(0x11bf5020u, _esp0);
  ESP += 4; return;
L_11bf5098:;
  /* 11bf5098 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11bf509b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf509d je 0x11bf50d5 */
  if (C.zf) goto L_11bf50d5;
  /* 11bf509f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11bf50a1 je 0x11bf5092 */
  if (C.zf) goto L_11bf5092;
  /* 11bf50a3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf50a5 je 0x11bf50ce */
  if (C.zf) goto L_11bf50ce;
  /* 11bf50a7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11bf50a9 je 0x11bf5092 */
  if (C.zf) goto L_11bf5092;
  /* 11bf50ab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11bf50ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf50b0 je 0x11bf50c7 */
  if (C.zf) goto L_11bf50c7;
  /* 11bf50b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11bf50b4 je 0x11bf5092 */
  if (C.zf) goto L_11bf5092;
  /* 11bf50b6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11bf50b8 je 0x11bf50c0 */
  if (C.zf) goto L_11bf50c0;
  /* 11bf50ba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11bf50bc je 0x11bf5092 */
  if (C.zf) goto L_11bf5092;
  /* 11bf50be jmp 0x11bf5056 */
  goto L_11bf5056;
L_11bf50c0:;
  /* 11bf50c0 pop esi */
  ESI = (pop32());
  /* 11bf50c1 pop edi */
  EDI = (pop32());
  /* 11bf50c2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11bf50c5 pop ebx */
  EBX = (pop32());
  /* 11bf50c6 ret  */
  ESPCHK(0x11bf5020u, _esp0);
  ESP += 4; return;
L_11bf50c7:;
  /* 11bf50c7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11bf50ca pop esi */
  ESI = (pop32());
  /* 11bf50cb pop edi */
  EDI = (pop32());
  /* 11bf50cc pop ebx */
  EBX = (pop32());
  /* 11bf50cd ret  */
  ESPCHK(0x11bf5020u, _esp0);
  ESP += 4; return;
L_11bf50ce:;
  /* 11bf50ce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11bf50d1 pop esi */
  ESI = (pop32());
  /* 11bf50d2 pop edi */
  EDI = (pop32());
  /* 11bf50d3 pop ebx */
  EBX = (pop32());
  /* 11bf50d4 ret  */
  ESPCHK(0x11bf5020u, _esp0);
  ESP += 4; return;
L_11bf50d5:;
  /* 11bf50d5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11bf50d8 pop esi */
  ESI = (pop32());
  /* 11bf50d9 pop edi */
  EDI = (pop32());
  /* 11bf50da pop ebx */
  EBX = (pop32());
  /* 11bf50db ret  */
  ESPCHK(0x11bf5020u, _esp0);
  ESP += 4; return;
  /* 11bf50dc jmp dword ptr [0x11c13338] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c13338)))); return;
}

/* RtlUnwind @ 0x11bf522c (6 bytes, 1 insns) */
void f_11bf522c(void) {
  FTRACE(0x11bf522cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11bf522c jmp dword ptr [0x11c132e4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c132e4)))); return;
}

