#include "recomp.h"

/* FUN_10013d80 @ 0x12423d80 (393 bytes, 123 insns) */
void f_12423d80(void) {
  FTRACE(0x12423d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12423d81 mov ebp, esp */
  EBP = (ESP);
  /* 12423d83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423d86 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423d8a jne 0x12423d96 */
  if (!C.zf) goto L_12423d96;
  /* 12423d8c mov eax, dword ptr [0x12441c98] */
  EAX = (r32((uint32_t)(0x12441c98)));
  /* 12423d91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12423d94 jmp 0x12423d9c */
  goto L_12423d9c;
L_12423d96:;
  /* 12423d96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12423d99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12423d9c:;
  /* 12423d9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423d9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12423da2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12423da5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12423da8 push 0x12442bb4 */
  push32((uint32_t)(0x12442bb4u));
  /* 12423dad call dword ptr [0x12445370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445370))), 0x12423db3u);
  /* 12423db3 cmp dword ptr [0x12442ba4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442ba4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423dba je 0x12423dda */
  if (C.zf) goto L_12423dda;
  /* 12423dbc push 0x12442bb4 */
  push32((uint32_t)(0x12442bb4u));
  /* 12423dc1 call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x12423dc7u);
  /* 12423dc7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12423dc9 call 0x1241a440 */
  push32(0x12423dceu); f_1241a440();
  /* 12423dce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423dd1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12423dd8 jmp 0x12423de1 */
  goto L_12423de1;
L_12423dda:;
  /* 12423dda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12423de1:;
  /* 12423de1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423de5 jbe 0x12423ed2 */
  if ((C.cf||C.zf)) goto L_12423ed2;
  /* 12423deb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423dee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12423df0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12423df3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12423df7 je 0x12423e01 */
  if (C.zf) goto L_12423e01;
  /* 12423df9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12423dfd je 0x12423e06 */
  if (C.zf) goto L_12423e06;
  /* 12423dff jmp 0x12423e60 */
  goto L_12423e60;
L_12423e01:;
  /* 12423e01 jmp 0x12423ed2 */
  goto L_12423ed2;
L_12423e06:;
  /* 12423e06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423e09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423e0c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12423e0f mov dword ptr [0x12442b90], 0 */
  w32((uint32_t)(0x12442b90), (0x0u));
  /* 12423e19 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423e1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12423e1f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423e22 jne 0x12423e37 */
  if (!C.zf) goto L_12423e37;
  /* 12423e24 mov dword ptr [0x12442b90], 1 */
  w32((uint32_t)(0x12442b90), (0x1u));
  /* 12423e2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423e31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423e34 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12423e37:;
  /* 12423e37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12423e3a push ecx */
  push32((uint32_t)(ECX));
  /* 12423e3b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12423e3e push edx */
  push32((uint32_t)(EDX));
  /* 12423e3f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12423e42 push eax */
  push32((uint32_t)(EAX));
  /* 12423e43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12423e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12423e47 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423e4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12423e4c push eax */
  push32((uint32_t)(EAX));
  /* 12423e4d call 0x12423f10 */
  push32(0x12423e52u); f_12423f10();
  /* 12423e52 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423e55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423e58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423e5b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12423e5e jmp 0x12423ecd */
  goto L_12423ecd;
L_12423e60:;
  /* 12423e60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423e63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12423e65 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12423e67 mov ecx, dword ptr [0x12440c98] */
  ECX = (r32((uint32_t)(0x12440c98)));
  /* 12423e6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12423e6f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12423e73 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12423e79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12423e7b je 0x12423ea8 */
  if (C.zf) goto L_12423ea8;
  /* 12423e7d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423e81 jbe 0x12423ea8 */
  if ((C.cf||C.zf)) goto L_12423ea8;
  /* 12423e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423e86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423e89 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12423e8b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12423e8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423e90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423e93 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12423e96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423e99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423e9c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12423e9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423ea2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423ea5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12423ea8:;
  /* 12423ea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423eab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423eae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12423eb0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12423eb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423eb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423eb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12423ebb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423ebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423ec1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12423ec4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423ec7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423eca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12423ecd:;
  /* 12423ecd jmp 0x12423de1 */
  goto L_12423de1;
L_12423ed2:;
  /* 12423ed2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423ed6 je 0x12423ee4 */
  if (C.zf) goto L_12423ee4;
  /* 12423ed8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12423eda call 0x1241a4e0 */
  push32(0x12423edfu); f_1241a4e0();
  /* 12423edf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423ee2 jmp 0x12423eef */
  goto L_12423eef;
L_12423ee4:;
  /* 12423ee4 push 0x12442bb4 */
  push32((uint32_t)(0x12442bb4u));
  /* 12423ee9 call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x12423eefu);
L_12423eef:;
  /* 12423eef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423ef3 jbe 0x12423f03 */
  if ((C.cf||C.zf)) goto L_12423f03;
  /* 12423ef5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423ef8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12423efb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12423efe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423f01 jmp 0x12423f05 */
  goto L_12423f05;
L_12423f03:;
  /* 12423f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12423f05:;
  /* 12423f05 mov esp, ebp */
  ESP = (EBP);
  /* 12423f07 pop ebp */
  EBP = (pop32());
  /* 12423f08 ret  */
  ESPCHK(0x12423d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f10 @ 0x12423f10 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12423f10(void) {
  FTRACE(0x12423f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12423f11 mov ebp, esp */
  EBP = (ESP);
  /* 12423f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423f16 push esi */
  push32((uint32_t)(ESI));
  /* 12423f17 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12423f1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12423f1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423f21 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423f24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12423f27 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423f2b ja 0x12424478 */
  if ((!C.cf&&!C.zf)) goto L_12424478;
  /* 12423f31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423f34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12423f36 mov dl, byte ptr [eax + 0x124244d9] */
  DL = (r8((uint32_t)(EAX + 0x124244d9)));
  /* 12423f3c jmp dword ptr [edx*4 + 0x1242447d] */
  switch (EDX) {
    case 0: goto L_12424456;
    case 1: goto L_12423f65;
    case 2: goto L_12423fab;
    case 3: goto L_124240f8;
    case 4: goto L_12424120;
    case 5: goto L_124241bf;
    case 6: goto L_1242422b;
    case 7: goto L_12424254;
    case 8: goto L_12424295;
    case 9: goto L_12424377;
    case 10: goto L_124243de;
    case 11: goto L_1242442b;
    case 12: goto L_12423f43;
    case 13: goto L_12423f88;
    case 14: goto L_12423fce;
    case 15: goto L_124240ce;
    case 16: goto L_12424165;
    case 17: goto L_12424192;
    case 18: goto L_124241e7;
    case 19: goto L_1242426b;
    case 20: goto L_12424319;
    case 21: goto L_124243a8;
    case 22: goto L_12424478;
    default: x86_unimpl("switch@0x12423f3c out of table"); return;
  }
L_12423f43:;
  /* 12423f43 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12423f46 push ecx */
  push32((uint32_t)(ECX));
  /* 12423f47 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423f4a push edx */
  push32((uint32_t)(EDX));
  /* 12423f4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12423f4e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12423f51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12423f54 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12423f57 push eax */
  push32((uint32_t)(EAX));
  /* 12423f58 call 0x12424530 */
  push32(0x12423f5du); f_12424530();
  /* 12423f5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423f60 jmp 0x12424478 */
  goto L_12424478;
L_12423f65:;
  /* 12423f65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12423f68 push ecx */
  push32((uint32_t)(ECX));
  /* 12423f69 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423f6c push edx */
  push32((uint32_t)(EDX));
  /* 12423f6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12423f70 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12423f73 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12423f76 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12423f7a push eax */
  push32((uint32_t)(EAX));
  /* 12423f7b call 0x12424530 */
  push32(0x12423f80u); f_12424530();
  /* 12423f80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423f83 jmp 0x12424478 */
  goto L_12424478;
L_12423f88:;
  /* 12423f88 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12423f8b push ecx */
  push32((uint32_t)(ECX));
  /* 12423f8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423f8f push edx */
  push32((uint32_t)(EDX));
  /* 12423f90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12423f93 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12423f96 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12423f99 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12423f9d push eax */
  push32((uint32_t)(EAX));
  /* 12423f9e call 0x12424530 */
  push32(0x12423fa3u); f_12424530();
  /* 12423fa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423fa6 jmp 0x12424478 */
  goto L_12424478;
L_12423fab:;
  /* 12423fab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12423fae push ecx */
  push32((uint32_t)(ECX));
  /* 12423faf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423fb2 push edx */
  push32((uint32_t)(EDX));
  /* 12423fb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12423fb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12423fb9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12423fbc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12423fc0 push eax */
  push32((uint32_t)(EAX));
  /* 12423fc1 call 0x12424530 */
  push32(0x12423fc6u); f_12424530();
  /* 12423fc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423fc9 jmp 0x12424478 */
  goto L_12424478;
L_12423fce:;
  /* 12423fce cmp dword ptr [0x12442b90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423fd5 je 0x12424056 */
  if (C.zf) goto L_12424056;
  /* 12423fd7 mov dword ptr [0x12442b90], 0 */
  w32((uint32_t)(0x12442b90), (0x0u));
  /* 12423fe1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12423fe4 push ecx */
  push32((uint32_t)(ECX));
  /* 12423fe5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12423fe8 push edx */
  push32((uint32_t)(EDX));
  /* 12423fe9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423fec push eax */
  push32((uint32_t)(EAX));
  /* 12423fed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12423ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 12423ff1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12423ff4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12423ffa push eax */
  push32((uint32_t)(EAX));
  /* 12423ffb call 0x124246e0 */
  push32(0x12424000u); f_124246e0();
  /* 12424000 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424003 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424006 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424009 jne 0x12424010 */
  if (!C.zf) goto L_12424010;
  /* 1242400b jmp 0x12424478 */
  goto L_12424478;
L_12424010:;
  /* 12424010 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424013 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12424015 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12424018 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242401b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1242401d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424020 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424023 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12424025 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424028 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1242402a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1242402d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424030 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12424032 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424035 push ecx */
  push32((uint32_t)(ECX));
  /* 12424036 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424039 push edx */
  push32((uint32_t)(EDX));
  /* 1242403a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242403d push eax */
  push32((uint32_t)(EAX));
  /* 1242403e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424041 push ecx */
  push32((uint32_t)(ECX));
  /* 12424042 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424045 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1242404b push eax */
  push32((uint32_t)(EAX));
  /* 1242404c call 0x124246e0 */
  push32(0x12424051u); f_124246e0();
  /* 12424051 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424054 jmp 0x124240c9 */
  goto L_124240c9;
L_12424056:;
  /* 12424056 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424059 push ecx */
  push32((uint32_t)(ECX));
  /* 1242405a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242405d push edx */
  push32((uint32_t)(EDX));
  /* 1242405e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424061 push eax */
  push32((uint32_t)(EAX));
  /* 12424062 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424065 push ecx */
  push32((uint32_t)(ECX));
  /* 12424066 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424069 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1242406f push eax */
  push32((uint32_t)(EAX));
  /* 12424070 call 0x124246e0 */
  push32(0x12424075u); f_124246e0();
  /* 12424075 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424078 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242407b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242407e jne 0x12424085 */
  if (!C.zf) goto L_12424085;
  /* 12424080 jmp 0x12424478 */
  goto L_12424478;
L_12424085:;
  /* 12424085 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424088 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1242408a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1242408d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424090 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12424092 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424095 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424098 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1242409a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242409d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1242409f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124240a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124240a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124240a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 124240aa push ecx */
  push32((uint32_t)(ECX));
  /* 124240ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124240ae push edx */
  push32((uint32_t)(EDX));
  /* 124240af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124240b2 push eax */
  push32((uint32_t)(EAX));
  /* 124240b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124240b6 push ecx */
  push32((uint32_t)(ECX));
  /* 124240b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124240ba mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 124240c0 push eax */
  push32((uint32_t)(EAX));
  /* 124240c1 call 0x124246e0 */
  push32(0x124240c6u); f_124246e0();
  /* 124240c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124240c9:;
  /* 124240c9 jmp 0x12424478 */
  goto L_12424478;
L_124240ce:;
  /* 124240ce mov ecx, dword ptr [0x12442b90] */
  ECX = (r32((uint32_t)(0x12442b90)));
  /* 124240d4 mov dword ptr [0x12442ba0], ecx */
  w32((uint32_t)(0x12442ba0), (ECX));
  /* 124240da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124240dd push edx */
  push32((uint32_t)(EDX));
  /* 124240de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124240e1 push eax */
  push32((uint32_t)(EAX));
  /* 124240e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124240e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124240e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124240ea push edx */
  push32((uint32_t)(EDX));
  /* 124240eb call 0x12424580 */
  push32(0x124240f0u); f_12424580();
  /* 124240f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124240f3 jmp 0x12424478 */
  goto L_12424478;
L_124240f8:;
  /* 124240f8 mov eax, dword ptr [0x12442b90] */
  EAX = (r32((uint32_t)(0x12442b90)));
  /* 124240fd mov dword ptr [0x12442ba0], eax */
  w32((uint32_t)(0x12442ba0), (EAX));
  /* 12424102 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424105 push ecx */
  push32((uint32_t)(ECX));
  /* 12424106 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424109 push edx */
  push32((uint32_t)(EDX));
  /* 1242410a push 2 */
  push32((uint32_t)(0x2u));
  /* 1242410c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242410f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12424112 push ecx */
  push32((uint32_t)(ECX));
  /* 12424113 call 0x12424580 */
  push32(0x12424118u); f_12424580();
  /* 12424118 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242411b jmp 0x12424478 */
  goto L_12424478;
L_12424120:;
  /* 12424120 mov edx, dword ptr [0x12442b90] */
  EDX = (r32((uint32_t)(0x12442b90)));
  /* 12424126 mov dword ptr [0x12442ba0], edx */
  w32((uint32_t)(0x12442ba0), (EDX));
  /* 1242412c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242412f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12424132 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12424133 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12424138 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1242413a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1242413d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424141 jne 0x1242414a */
  if (!C.zf) goto L_1242414a;
  /* 12424143 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1242414a:;
  /* 1242414a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242414d push edx */
  push32((uint32_t)(EDX));
  /* 1242414e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424151 push eax */
  push32((uint32_t)(EAX));
  /* 12424152 push 2 */
  push32((uint32_t)(0x2u));
  /* 12424154 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12424157 push ecx */
  push32((uint32_t)(ECX));
  /* 12424158 call 0x12424580 */
  push32(0x1242415du); f_12424580();
  /* 1242415d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424160 jmp 0x12424478 */
  goto L_12424478;
L_12424165:;
  /* 12424165 mov edx, dword ptr [0x12442b90] */
  EDX = (r32((uint32_t)(0x12442b90)));
  /* 1242416b mov dword ptr [0x12442ba0], edx */
  w32((uint32_t)(0x12442ba0), (EDX));
  /* 12424171 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424174 push eax */
  push32((uint32_t)(EAX));
  /* 12424175 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424178 push ecx */
  push32((uint32_t)(ECX));
  /* 12424179 push 3 */
  push32((uint32_t)(0x3u));
  /* 1242417b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242417e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12424181 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424184 push eax */
  push32((uint32_t)(EAX));
  /* 12424185 call 0x12424580 */
  push32(0x1242418au); f_12424580();
  /* 1242418a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242418d jmp 0x12424478 */
  goto L_12424478;
L_12424192:;
  /* 12424192 mov ecx, dword ptr [0x12442b90] */
  ECX = (r32((uint32_t)(0x12442b90)));
  /* 12424198 mov dword ptr [0x12442ba0], ecx */
  w32((uint32_t)(0x12442ba0), (ECX));
  /* 1242419e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124241a1 push edx */
  push32((uint32_t)(EDX));
  /* 124241a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124241a5 push eax */
  push32((uint32_t)(EAX));
  /* 124241a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124241a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124241ab mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 124241ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124241b1 push edx */
  push32((uint32_t)(EDX));
  /* 124241b2 call 0x12424580 */
  push32(0x124241b7u); f_12424580();
  /* 124241b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124241ba jmp 0x12424478 */
  goto L_12424478;
L_124241bf:;
  /* 124241bf mov eax, dword ptr [0x12442b90] */
  EAX = (r32((uint32_t)(0x12442b90)));
  /* 124241c4 mov dword ptr [0x12442ba0], eax */
  w32((uint32_t)(0x12442ba0), (EAX));
  /* 124241c9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124241cc push ecx */
  push32((uint32_t)(ECX));
  /* 124241cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124241d0 push edx */
  push32((uint32_t)(EDX));
  /* 124241d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124241d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124241d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 124241d9 push ecx */
  push32((uint32_t)(ECX));
  /* 124241da call 0x12424580 */
  push32(0x124241dfu); f_12424580();
  /* 124241df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124241e2 jmp 0x12424478 */
  goto L_12424478;
L_124241e7:;
  /* 124241e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124241ea cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124241ee jg 0x1242420c */
  if ((!C.zf&&C.sf==C.of)) goto L_1242420c;
  /* 124241f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124241f3 push eax */
  push32((uint32_t)(EAX));
  /* 124241f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124241f7 push ecx */
  push32((uint32_t)(ECX));
  /* 124241f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124241fb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12424201 push eax */
  push32((uint32_t)(EAX));
  /* 12424202 call 0x12424530 */
  push32(0x12424207u); f_12424530();
  /* 12424207 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242420a jmp 0x12424226 */
  goto L_12424226;
L_1242420c:;
  /* 1242420c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242420f push ecx */
  push32((uint32_t)(ECX));
  /* 12424210 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424213 push edx */
  push32((uint32_t)(EDX));
  /* 12424214 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424217 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1242421d push ecx */
  push32((uint32_t)(ECX));
  /* 1242421e call 0x12424530 */
  push32(0x12424223u); f_12424530();
  /* 12424223 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12424226:;
  /* 12424226 jmp 0x12424478 */
  goto L_12424478;
L_1242422b:;
  /* 1242422b mov edx, dword ptr [0x12442b90] */
  EDX = (r32((uint32_t)(0x12442b90)));
  /* 12424231 mov dword ptr [0x12442ba0], edx */
  w32((uint32_t)(0x12442ba0), (EDX));
  /* 12424237 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242423a push eax */
  push32((uint32_t)(EAX));
  /* 1242423b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242423e push ecx */
  push32((uint32_t)(ECX));
  /* 1242423f push 2 */
  push32((uint32_t)(0x2u));
  /* 12424241 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424244 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12424246 push eax */
  push32((uint32_t)(EAX));
  /* 12424247 call 0x12424580 */
  push32(0x1242424cu); f_12424580();
  /* 1242424c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242424f jmp 0x12424478 */
  goto L_12424478;
L_12424254:;
  /* 12424254 mov ecx, dword ptr [0x12442b90] */
  ECX = (r32((uint32_t)(0x12442b90)));
  /* 1242425a mov dword ptr [0x12442ba0], ecx */
  w32((uint32_t)(0x12442ba0), (ECX));
  /* 12424260 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424263 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12424266 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12424269 jmp 0x124242bd */
  goto L_124242bd;
L_1242426b:;
  /* 1242426b mov ecx, dword ptr [0x12442b90] */
  ECX = (r32((uint32_t)(0x12442b90)));
  /* 12424271 mov dword ptr [0x12442ba0], ecx */
  w32((uint32_t)(0x12442ba0), (ECX));
  /* 12424277 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242427a push edx */
  push32((uint32_t)(EDX));
  /* 1242427b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242427e push eax */
  push32((uint32_t)(EAX));
  /* 1242427f push 1 */
  push32((uint32_t)(0x1u));
  /* 12424281 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424284 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12424287 push edx */
  push32((uint32_t)(EDX));
  /* 12424288 call 0x12424580 */
  push32(0x1242428du); f_12424580();
  /* 1242428d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424290 jmp 0x12424478 */
  goto L_12424478;
L_12424295:;
  /* 12424295 mov eax, dword ptr [0x12442b90] */
  EAX = (r32((uint32_t)(0x12442b90)));
  /* 1242429a mov dword ptr [0x12442ba0], eax */
  w32((uint32_t)(0x12442ba0), (EAX));
  /* 1242429f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124242a2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124242a6 jne 0x124242b1 */
  if (!C.zf) goto L_124242b1;
  /* 124242a8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 124242af jmp 0x124242bd */
  goto L_124242bd;
L_124242b1:;
  /* 124242b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124242b4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 124242b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124242ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124242bd:;
  /* 124242bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124242c0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 124242c3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124242c6 jge 0x124242d1 */
  if ((C.sf==C.of)) goto L_124242d1;
  /* 124242c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124242cf jmp 0x124242fe */
  goto L_124242fe;
L_124242d1:;
  /* 124242d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124242d4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124242d7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124242d8 mov ecx, 7 */
  ECX = (0x7u);
  /* 124242dd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124242df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124242e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124242e5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124242e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124242e9 mov ecx, 7 */
  ECX = (0x7u);
  /* 124242ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124242f0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124242f3 jl 0x124242fe */
  if ((C.sf!=C.of)) goto L_124242fe;
  /* 124242f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124242f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124242fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124242fe:;
  /* 124242fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424301 push eax */
  push32((uint32_t)(EAX));
  /* 12424302 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424305 push ecx */
  push32((uint32_t)(ECX));
  /* 12424306 push 2 */
  push32((uint32_t)(0x2u));
  /* 12424308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242430b push edx */
  push32((uint32_t)(EDX));
  /* 1242430c call 0x12424580 */
  push32(0x12424311u); f_12424580();
  /* 12424311 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424314 jmp 0x12424478 */
  goto L_12424478;
L_12424319:;
  /* 12424319 cmp dword ptr [0x12442b90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424320 je 0x12424350 */
  if (C.zf) goto L_12424350;
  /* 12424322 mov dword ptr [0x12442b90], 0 */
  w32((uint32_t)(0x12442b90), (0x0u));
  /* 1242432c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1242432f push eax */
  push32((uint32_t)(EAX));
  /* 12424330 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424333 push ecx */
  push32((uint32_t)(ECX));
  /* 12424334 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424337 push edx */
  push32((uint32_t)(EDX));
  /* 12424338 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242433b push eax */
  push32((uint32_t)(EAX));
  /* 1242433c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1242433f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12424345 push edx */
  push32((uint32_t)(EDX));
  /* 12424346 call 0x124246e0 */
  push32(0x1242434bu); f_124246e0();
  /* 1242434b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242434e jmp 0x12424372 */
  goto L_12424372;
L_12424350:;
  /* 12424350 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424353 push eax */
  push32((uint32_t)(EAX));
  /* 12424354 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424357 push ecx */
  push32((uint32_t)(ECX));
  /* 12424358 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242435b push edx */
  push32((uint32_t)(EDX));
  /* 1242435c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242435f push eax */
  push32((uint32_t)(EAX));
  /* 12424360 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424363 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12424369 push edx */
  push32((uint32_t)(EDX));
  /* 1242436a call 0x124246e0 */
  push32(0x1242436fu); f_124246e0();
  /* 1242436f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12424372:;
  /* 12424372 jmp 0x12424478 */
  goto L_12424478;
L_12424377:;
  /* 12424377 mov dword ptr [0x12442b90], 0 */
  w32((uint32_t)(0x12442b90), (0x0u));
  /* 12424381 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424384 push eax */
  push32((uint32_t)(EAX));
  /* 12424385 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424388 push ecx */
  push32((uint32_t)(ECX));
  /* 12424389 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242438c push edx */
  push32((uint32_t)(EDX));
  /* 1242438d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424390 push eax */
  push32((uint32_t)(EAX));
  /* 12424391 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424394 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1242439a push edx */
  push32((uint32_t)(EDX));
  /* 1242439b call 0x124246e0 */
  push32(0x124243a0u); f_124246e0();
  /* 124243a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124243a3 jmp 0x12424478 */
  goto L_12424478;
L_124243a8:;
  /* 124243a8 mov eax, dword ptr [0x12442b90] */
  EAX = (r32((uint32_t)(0x12442b90)));
  /* 124243ad mov dword ptr [0x12442ba0], eax */
  w32((uint32_t)(0x12442ba0), (EAX));
  /* 124243b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124243b5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 124243b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124243b9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 124243be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124243c0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124243c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124243c6 push edx */
  push32((uint32_t)(EDX));
  /* 124243c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124243ca push eax */
  push32((uint32_t)(EAX));
  /* 124243cb push 2 */
  push32((uint32_t)(0x2u));
  /* 124243cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124243d0 push ecx */
  push32((uint32_t)(ECX));
  /* 124243d1 call 0x12424580 */
  push32(0x124243d6u); f_12424580();
  /* 124243d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124243d9 jmp 0x12424478 */
  goto L_12424478;
L_124243de:;
  /* 124243de mov edx, dword ptr [0x12442b90] */
  EDX = (r32((uint32_t)(0x12442b90)));
  /* 124243e4 mov dword ptr [0x12442ba0], edx */
  w32((uint32_t)(0x12442ba0), (EDX));
  /* 124243ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124243ed mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 124243f0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124243f1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 124243f6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124243f8 mov ecx, eax */
  ECX = (EAX);
  /* 124243fa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124243fd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12424400 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424403 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12424406 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12424407 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1242440c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1242440e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424410 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12424413 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424416 push eax */
  push32((uint32_t)(EAX));
  /* 12424417 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242441a push ecx */
  push32((uint32_t)(ECX));
  /* 1242441b push 4 */
  push32((uint32_t)(0x4u));
  /* 1242441d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12424420 push edx */
  push32((uint32_t)(EDX));
  /* 12424421 call 0x12424580 */
  push32(0x12424426u); f_12424580();
  /* 12424426 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424429 jmp 0x12424478 */
  goto L_12424478;
L_1242442b:;
  /* 1242442b call 0x12425540 */
  push32(0x12424430u); f_12425540();
  /* 12424430 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424433 push eax */
  push32((uint32_t)(EAX));
  /* 12424434 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424437 push ecx */
  push32((uint32_t)(ECX));
  /* 12424438 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242443b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242443d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424441 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12424444 mov ecx, dword ptr [eax*4 + 0x12441e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12441e1c)));
  /* 1242444b push ecx */
  push32((uint32_t)(ECX));
  /* 1242444c call 0x12424530 */
  push32(0x12424451u); f_12424530();
  /* 12424451 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424454 jmp 0x12424478 */
  goto L_12424478;
L_12424456:;
  /* 12424456 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424459 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1242445b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1242445e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424461 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12424463 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424466 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424469 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1242446b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242446e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12424470 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424473 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424476 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12424478:;
  /* 12424478 pop esi */
  ESI = (pop32());
  /* 12424479 mov esp, ebp */
  ESP = (EBP);
  /* 1242447b pop ebp */
  EBP = (pop32());
  /* 1242447c ret  */
  ESPCHK(0x12423f10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12424530 (72 bytes, 30 insns) */
void f_12424530(void) {
  FTRACE(0x12424530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12424530 push ebp */
  push32((uint32_t)(EBP));
  /* 12424531 mov ebp, esp */
  EBP = (ESP);
L_12424533:;
  /* 12424533 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424536 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424539 je 0x12424576 */
  if (C.zf) goto L_12424576;
  /* 1242453b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242453e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12424541 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12424543 je 0x12424576 */
  if (C.zf) goto L_12424576;
  /* 12424545 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424548 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1242454a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242454d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1242454f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12424551 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424554 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12424556 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424559 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242455c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1242455e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424561 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424564 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12424567 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242456a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1242456c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1242456f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424572 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12424574 jmp 0x12424533 */
  goto L_12424533;
L_12424576:;
  /* 12424576 pop ebp */
  EBP = (pop32());
  /* 12424577 ret  */
  ESPCHK(0x12424530u, _esp0);
  ESP += 4; return;
}

/* FUN_10014580 @ 0x12424580 (173 bytes, 64 insns) */
void f_12424580(void) {
  FTRACE(0x12424580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12424580 push ebp */
  push32((uint32_t)(EBP));
  /* 12424581 mov ebp, esp */
  EBP = (ESP);
  /* 12424583 push ecx */
  push32((uint32_t)(ECX));
  /* 12424584 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1242458b cmp dword ptr [0x12442ba0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442ba0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424592 je 0x124245aa */
  if (C.zf) goto L_124245aa;
  /* 12424594 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424597 push eax */
  push32((uint32_t)(EAX));
  /* 12424598 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242459b push ecx */
  push32((uint32_t)(ECX));
  /* 1242459c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242459f push edx */
  push32((uint32_t)(EDX));
  /* 124245a0 call 0x12424630 */
  push32(0x124245a5u); f_12424630();
  /* 124245a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124245a8 jmp 0x12424629 */
  goto L_12424629;
L_124245aa:;
  /* 124245aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124245ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124245b0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124245b2 jae 0x12424620 */
  if (!C.cf) goto L_12424620;
  /* 124245b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124245b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124245ba mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 124245bd jmp 0x124245c8 */
  goto L_124245c8;
L_124245bf:;
  /* 124245bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124245c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124245c5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_124245c8:;
  /* 124245c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124245cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124245ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124245d0 je 0x12424604 */
  if (C.zf) goto L_12424604;
  /* 124245d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124245d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124245d6 mov ecx, 0xa */
  ECX = (0xau);
  /* 124245db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124245dd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124245e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124245e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124245e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124245e8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 124245eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124245ee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124245ef mov ecx, 0xa */
  ECX = (0xau);
  /* 124245f4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 124245f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124245f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124245fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124245ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12424602 jmp 0x124245bf */
  goto L_124245bf;
L_12424604:;
  /* 12424604 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424607 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12424609 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242460c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242460f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12424611 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424614 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12424616 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424619 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242461c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1242461e jmp 0x12424629 */
  goto L_12424629;
L_12424620:;
  /* 12424620 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424623 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12424629:;
  /* 12424629 mov esp, ebp */
  ESP = (EBP);
  /* 1242462b pop ebp */
  EBP = (pop32());
  /* 1242462c ret  */
  ESPCHK(0x12424580u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12424630 (172 bytes, 65 insns) */
void f_12424630(void) {
  FTRACE(0x12424630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12424630 push ebp */
  push32((uint32_t)(EBP));
  /* 12424631 mov ebp, esp */
  EBP = (ESP);
  /* 12424633 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424636 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424639 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1242463b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1242463e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424641 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424644 jbe 0x1242468b */
  if ((C.cf||C.zf)) goto L_1242468b;
L_12424646:;
  /* 12424646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424649 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1242464a mov ecx, 0xa */
  ECX = (0xau);
  /* 1242464f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12424651 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12424657 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12424659 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242465c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242465f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12424662 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424665 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12424667 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1242466a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242466d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1242466f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424672 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12424673 mov ecx, 0xa */
  ECX = (0xau);
  /* 12424678 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1242467a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1242467d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424681 jle 0x1242468b */
  if ((C.zf||C.sf!=C.of)) goto L_1242468b;
  /* 12424683 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424686 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424689 ja 0x12424646 */
  if ((!C.cf&&!C.zf)) goto L_12424646;
L_1242468b:;
  /* 1242468b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242468e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12424690 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12424693 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12424699 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1242469b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242469e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124246a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124246a4:;
  /* 124246a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124246a7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124246a9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 124246ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124246af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124246b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124246b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 124246b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124246b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124246bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124246bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124246c2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 124246c5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 124246c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124246ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124246cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124246d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124246d3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124246d6 jb 0x124246a4 */
  if (C.cf) goto L_124246a4;
  /* 124246d8 mov esp, ebp */
  ESP = (EBP);
  /* 124246da pop ebp */
  EBP = (pop32());
  /* 124246db ret  */
  ESPCHK(0x12424630u, _esp0);
  ESP += 4; return;
}

/* FUN_100146e0 @ 0x124246e0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_124246e0(void) {
  FTRACE(0x124246e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124246e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124246e1 mov ebp, esp */
  EBP = (ESP);
  /* 124246e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_124246e6:;
  /* 124246e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124246e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124246ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124246ee je 0x12424b5c */
  if (C.zf) goto L_12424b5c;
  /* 124246f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124246f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124246fa je 0x12424b5c */
  if (C.zf) goto L_12424b5c;
  /* 12424700 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12424704 mov dword ptr [0x12442ba0], 0 */
  w32((uint32_t)(0x12442ba0), (0x0u));
  /* 1242470e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12424715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424718 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1242471b jmp 0x12424726 */
  goto L_12424726;
L_1242471d:;
  /* 1242471d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12424720 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424723 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12424726:;
  /* 12424726 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12424729 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1242472c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242472f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12424732 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12424735 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424738 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1242473b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242473d jne 0x12424741 */
  if (!C.zf) goto L_12424741;
  /* 1242473f jmp 0x1242471d */
  goto L_1242471d;
L_12424741:;
  /* 12424741 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12424744 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424747 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1242474a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242474d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12424750 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12424753 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12424756 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424759 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1242475c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424760 ja 0x12424ab0 */
  if ((!C.cf&&!C.zf)) goto L_12424ab0;
  /* 12424766 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12424769 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242476b mov al, byte ptr [ecx + 0x12424b8c] */
  AL = (r8((uint32_t)(ECX + 0x12424b8c)));
  /* 12424771 jmp dword ptr [eax*4 + 0x12424b60] */
  switch (EAX) {
    case 0: goto L_124249cf;
    case 1: goto L_124248b3;
    case 2: goto L_1242483e;
    case 3: goto L_12424778;
    case 4: goto L_124247b6;
    case 5: goto L_12424817;
    case 6: goto L_12424865;
    case 7: goto L_1242488c;
    case 8: goto L_124248fa;
    case 9: goto L_124247f4;
    case 10: goto L_12424ab0;
    default: x86_unimpl("switch@0x12424771 out of table"); return;
  }
L_12424778:;
  /* 12424778 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242477b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1242477e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12424781 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424784 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12424787 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242478b ja 0x124247b1 */
  if ((!C.cf&&!C.zf)) goto L_124247b1;
  /* 1242478d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12424790 jmp dword ptr [ecx*4 + 0x12424bdf] */
  switch (ECX) {
    case 0: goto L_12424797;
    case 1: goto L_124247a1;
    case 2: goto L_124247a7;
    case 3: goto L_124247ad;
    case 4: goto L_124247d5;
    case 5: goto L_124247df;
    case 6: goto L_124247e5;
    case 7: goto L_124247eb;
    default: x86_unimpl("switch@0x12424790 out of table"); return;
  }
L_12424797:;
  /* 12424797 mov dword ptr [0x12442ba0], 1 */
  w32((uint32_t)(0x12442ba0), (0x1u));
L_124247a1:;
  /* 124247a1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 124247a5 jmp 0x124247b1 */
  goto L_124247b1;
L_124247a7:;
  /* 124247a7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 124247ab jmp 0x124247b1 */
  goto L_124247b1;
L_124247ad:;
  /* 124247ad mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_124247b1:;
  /* 124247b1 jmp 0x12424ab0 */
  goto L_12424ab0;
L_124247b6:;
  /* 124247b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124247b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 124247bc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124247bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124247c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124247c5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124247c9 ja 0x124247ef */
  if ((!C.cf&&!C.zf)) goto L_124247ef;
  /* 124247cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124247ce jmp dword ptr [ecx*4 + 0x12424bef] */
  switch (ECX) {
    case 0: goto L_124247d5;
    case 1: goto L_124247df;
    case 2: goto L_124247e5;
    case 3: goto L_124247eb;
    default: x86_unimpl("switch@0x124247ce out of table"); return;
  }
L_124247d5:;
  /* 124247d5 mov dword ptr [0x12442ba0], 1 */
  w32((uint32_t)(0x12442ba0), (0x1u));
L_124247df:;
  /* 124247df mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 124247e3 jmp 0x124247ef */
  goto L_124247ef;
L_124247e5:;
  /* 124247e5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 124247e9 jmp 0x124247ef */
  goto L_124247ef;
L_124247eb:;
  /* 124247eb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_124247ef:;
  /* 124247ef jmp 0x12424ab0 */
  goto L_12424ab0;
L_124247f4:;
  /* 124247f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124247f7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 124247fa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124247fe je 0x12424808 */
  if (C.zf) goto L_12424808;
  /* 12424800 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424804 je 0x1242480e */
  if (C.zf) goto L_1242480e;
  /* 12424806 jmp 0x12424812 */
  goto L_12424812;
L_12424808:;
  /* 12424808 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1242480c jmp 0x12424812 */
  goto L_12424812;
L_1242480e:;
  /* 1242480e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12424812:;
  /* 12424812 jmp 0x12424ab0 */
  goto L_12424ab0;
L_12424817:;
  /* 12424817 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242481a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1242481d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424821 je 0x1242482b */
  if (C.zf) goto L_1242482b;
  /* 12424823 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424827 je 0x12424835 */
  if (C.zf) goto L_12424835;
  /* 12424829 jmp 0x12424839 */
  goto L_12424839;
L_1242482b:;
  /* 1242482b mov dword ptr [0x12442ba0], 1 */
  w32((uint32_t)(0x12442ba0), (0x1u));
L_12424835:;
  /* 12424835 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12424839:;
  /* 12424839 jmp 0x12424ab0 */
  goto L_12424ab0;
L_1242483e:;
  /* 1242483e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12424841 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12424844 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424848 je 0x12424852 */
  if (C.zf) goto L_12424852;
  /* 1242484a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242484e je 0x1242485c */
  if (C.zf) goto L_1242485c;
  /* 12424850 jmp 0x12424860 */
  goto L_12424860;
L_12424852:;
  /* 12424852 mov dword ptr [0x12442ba0], 1 */
  w32((uint32_t)(0x12442ba0), (0x1u));
L_1242485c:;
  /* 1242485c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12424860:;
  /* 12424860 jmp 0x12424ab0 */
  goto L_12424ab0;
L_12424865:;
  /* 12424865 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12424868 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1242486b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242486f je 0x12424879 */
  if (C.zf) goto L_12424879;
  /* 12424871 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424875 je 0x12424883 */
  if (C.zf) goto L_12424883;
  /* 12424877 jmp 0x12424887 */
  goto L_12424887;
L_12424879:;
  /* 12424879 mov dword ptr [0x12442ba0], 1 */
  w32((uint32_t)(0x12442ba0), (0x1u));
L_12424883:;
  /* 12424883 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12424887:;
  /* 12424887 jmp 0x12424ab0 */
  goto L_12424ab0;
L_1242488c:;
  /* 1242488c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242488f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12424892 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424896 je 0x124248a0 */
  if (C.zf) goto L_124248a0;
  /* 12424898 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242489c je 0x124248aa */
  if (C.zf) goto L_124248aa;
  /* 1242489e jmp 0x124248ae */
  goto L_124248ae;
L_124248a0:;
  /* 124248a0 mov dword ptr [0x12442ba0], 1 */
  w32((uint32_t)(0x12442ba0), (0x1u));
L_124248aa:;
  /* 124248aa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_124248ae:;
  /* 124248ae jmp 0x12424ab0 */
  goto L_12424ab0;
L_124248b3:;
  /* 124248b3 push 0x1243ee94 */
  push32((uint32_t)(0x1243ee94u));
  /* 124248b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124248bb push ecx */
  push32((uint32_t)(ECX));
  /* 124248bc call 0x12425110 */
  push32(0x124248c1u); f_12425110();
  /* 124248c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124248c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124248c6 jne 0x124248d3 */
  if (!C.zf) goto L_124248d3;
  /* 124248c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124248cb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124248ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124248d1 jmp 0x124248f1 */
  goto L_124248f1;
L_124248d3:;
  /* 124248d3 push 0x1243ee90 */
  push32((uint32_t)(0x1243ee90u));
  /* 124248d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124248db push eax */
  push32((uint32_t)(EAX));
  /* 124248dc call 0x12425110 */
  push32(0x124248e1u); f_12425110();
  /* 124248e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124248e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124248e6 jne 0x124248f1 */
  if (!C.zf) goto L_124248f1;
  /* 124248e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124248eb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124248ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124248f1:;
  /* 124248f1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 124248f5 jmp 0x12424ab0 */
  goto L_12424ab0;
L_124248fa:;
  /* 124248fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124248fd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424901 jg 0x12424911 */
  if ((!C.zf&&C.sf==C.of)) goto L_12424911;
  /* 12424903 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424906 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1242490c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1242490f jmp 0x1242491d */
  goto L_1242491d;
L_12424911:;
  /* 12424911 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424914 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1242491a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1242491d:;
  /* 1242491d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424921 jle 0x124249c4 */
  if ((C.zf||C.sf!=C.of)) goto L_124249c4;
  /* 12424927 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242492a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242492d jbe 0x124249c4 */
  if ((C.cf||C.zf)) goto L_124249c4;
  /* 12424933 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12424936 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12424938 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1242493a mov ecx, dword ptr [0x12440c98] */
  ECX = (r32((uint32_t)(0x12440c98)));
  /* 12424940 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12424942 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12424946 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1242494c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1242494e je 0x12424987 */
  if (C.zf) goto L_12424987;
  /* 12424950 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424953 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424956 jbe 0x12424987 */
  if ((C.cf||C.zf)) goto L_12424987;
  /* 12424958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242495b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1242495d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12424960 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12424962 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12424964 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424967 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12424969 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242496c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242496f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12424971 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12424974 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424977 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1242497a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242497d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1242497f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424982 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424985 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12424987:;
  /* 12424987 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242498a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1242498c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1242498f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12424991 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12424993 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424996 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12424998 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242499b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242499e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 124249a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124249a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124249a6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124249a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124249ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124249ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124249b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124249b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124249b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124249b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124249bc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124249bf jmp 0x1242491d */
  goto L_1242491d;
L_124249c4:;
  /* 124249c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124249c7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124249ca jmp 0x124246e6 */
  goto L_124246e6;
L_124249cf:;
  /* 124249cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124249d2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124249d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124249d7 je 0x12424aa2 */
  if (C.zf) goto L_12424aa2;
  /* 124249dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124249e0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124249e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_124249e6:;
  /* 124249e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124249e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124249ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124249ee je 0x12424aa0 */
  if (C.zf) goto L_12424aa0;
  /* 124249f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124249f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124249fa je 0x12424aa0 */
  if (C.zf) goto L_12424aa0;
  /* 12424a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424a03 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12424a06 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424a09 jne 0x12424a19 */
  if (!C.zf) goto L_12424a19;
  /* 12424a0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424a0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424a11 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12424a14 jmp 0x12424aa0 */
  goto L_12424aa0;
L_12424a19:;
  /* 12424a19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424a1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12424a1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12424a20 mov edx, dword ptr [0x12440c98] */
  EDX = (r32((uint32_t)(0x12440c98)));
  /* 12424a26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12424a28 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12424a2c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12424a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12424a33 je 0x12424a6c */
  if (C.zf) goto L_12424a6c;
  /* 12424a35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424a38 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424a3b jbe 0x12424a6c */
  if ((C.cf||C.zf)) goto L_12424a6c;
  /* 12424a3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424a40 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12424a42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424a45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12424a47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12424a49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424a4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12424a4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424a51 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424a54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12424a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424a59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424a5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12424a5f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424a62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12424a64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424a67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424a6a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12424a6c:;
  /* 12424a6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424a6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12424a71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424a74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12424a76 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12424a78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424a7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12424a7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424a80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424a83 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12424a85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424a88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424a8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12424a8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424a91 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12424a93 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424a96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424a99 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12424a9b jmp 0x124249e6 */
  goto L_124249e6;
L_12424aa0:;
  /* 12424aa0 jmp 0x12424aab */
  goto L_12424aab;
L_12424aa2:;
  /* 12424aa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424aa5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424aa8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12424aab:;
  /* 12424aab jmp 0x124246e6 */
  goto L_124246e6;
L_12424ab0:;
  /* 12424ab0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12424ab4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12424ab6 je 0x12424adc */
  if (C.zf) goto L_12424adc;
  /* 12424ab8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424abb push edx */
  push32((uint32_t)(EDX));
  /* 12424abc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424abf push eax */
  push32((uint32_t)(EAX));
  /* 12424ac0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12424ac4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424ac7 push edx */
  push32((uint32_t)(EDX));
  /* 12424ac8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12424acb push eax */
  push32((uint32_t)(EAX));
  /* 12424acc call 0x12423f10 */
  push32(0x12424ad1u); f_12423f10();
  /* 12424ad1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424ad4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12424ad7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12424ada jmp 0x12424b57 */
  goto L_12424b57;
L_12424adc:;
  /* 12424adc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424adf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12424ae1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12424ae3 mov ecx, dword ptr [0x12440c98] */
  ECX = (r32((uint32_t)(0x12440c98)));
  /* 12424ae9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12424aeb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12424aef and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12424af5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12424af7 je 0x12424b28 */
  if (C.zf) goto L_12424b28;
  /* 12424af9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424afc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12424afe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424b01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12424b03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12424b05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424b08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12424b0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424b0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424b10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12424b12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424b18 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12424b1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424b1e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12424b20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424b23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424b26 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12424b28:;
  /* 12424b28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424b2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12424b2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424b30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12424b32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12424b34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424b37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12424b39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424b3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424b3f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12424b41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424b44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424b47 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12424b4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424b4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12424b4f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424b52 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424b55 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12424b57:;
  /* 12424b57 jmp 0x124246e6 */
  goto L_124246e6;
L_12424b5c:;
  /* 12424b5c mov esp, ebp */
  ESP = (EBP);
  /* 12424b5e pop ebp */
  EBP = (pop32());
  /* 12424b5f ret  */
  ESPCHK(0x124246e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c00 @ 0x12424c00 (650 bytes, 178 insns) */
void f_12424c00(void) {
  FTRACE(0x12424c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12424c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12424c01 mov ebp, esp */
  EBP = (ESP);
  /* 12424c03 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12424c09 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424c0d jne 0x12424d69 */
  if (!C.zf) goto L_12424d69;
  /* 12424c13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424c16 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12424c1c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12424c22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12424c25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12424c2c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12424c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12424c38 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12424c3e push edx */
  push32((uint32_t)(EDX));
  /* 12424c3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12424c42 push eax */
  push32((uint32_t)(EAX));
  /* 12424c43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424c46 push ecx */
  push32((uint32_t)(ECX));
  /* 12424c47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424c4a push edx */
  push32((uint32_t)(EDX));
  /* 12424c4b call 0x12426020 */
  push32(0x12424c50u); f_12426020();
  /* 12424c50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424c53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12424c56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424c5a jne 0x12424cef */
  if (!C.zf) goto L_12424cef;
  /* 12424c60 call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x12424c66u);
  /* 12424c66 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424c69 je 0x12424c70 */
  if (C.zf) goto L_12424c70;
  /* 12424c6b jmp 0x12424d4d */
  goto L_12424d4d;
L_12424c70:;
  /* 12424c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12424c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12424c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12424c76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424c79 push eax */
  push32((uint32_t)(EAX));
  /* 12424c7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424c7d push ecx */
  push32((uint32_t)(ECX));
  /* 12424c7e call 0x12426020 */
  push32(0x12424c83u); f_12426020();
  /* 12424c83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424c86 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12424c8c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424c93 jne 0x12424c9a */
  if (!C.zf) goto L_12424c9a;
  /* 12424c95 jmp 0x12424d4d */
  goto L_12424d4d;
L_12424c9a:;
  /* 12424c9a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12424c9c push 0x1243ee9c */
  push32((uint32_t)(0x1243ee9cu));
  /* 12424ca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12424ca3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12424ca9 push edx */
  push32((uint32_t)(EDX));
  /* 12424caa call 0x12416a40 */
  push32(0x12424cafu); f_12416a40();
  /* 12424caf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424cb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12424cb5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424cb9 jne 0x12424cc0 */
  if (!C.zf) goto L_12424cc0;
  /* 12424cbb jmp 0x12424d4d */
  goto L_12424d4d;
L_12424cc0:;
  /* 12424cc0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12424cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12424cc9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12424ccf push eax */
  push32((uint32_t)(EAX));
  /* 12424cd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12424cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12424cd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424cd7 push edx */
  push32((uint32_t)(EDX));
  /* 12424cd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424cdb push eax */
  push32((uint32_t)(EAX));
  /* 12424cdc call 0x12426020 */
  push32(0x12424ce1u); f_12426020();
  /* 12424ce1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424ce4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12424ce7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424ceb jne 0x12424cef */
  if (!C.zf) goto L_12424cef;
  /* 12424ced jmp 0x12424d4d */
  goto L_12424d4d;
L_12424cef:;
  /* 12424cef push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12424cf1 push 0x1243ee9c */
  push32((uint32_t)(0x1243ee9cu));
  /* 12424cf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12424cf8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12424cfb push ecx */
  push32((uint32_t)(ECX));
  /* 12424cfc call 0x12416a40 */
  push32(0x12424d01u); f_12416a40();
  /* 12424d01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424d04 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12424d0a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12424d0c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12424d12 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424d15 jne 0x12424d19 */
  if (!C.zf) goto L_12424d19;
  /* 12424d17 jmp 0x12424d4d */
  goto L_12424d4d;
L_12424d19:;
  /* 12424d19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12424d1c push ecx */
  push32((uint32_t)(ECX));
  /* 12424d1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12424d20 push edx */
  push32((uint32_t)(EDX));
  /* 12424d21 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12424d27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12424d29 push ecx */
  push32((uint32_t)(ECX));
  /* 12424d2a call 0x1241a260 */
  push32(0x12424d2fu); f_1241a260();
  /* 12424d2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424d32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424d36 je 0x12424d46 */
  if (C.zf) goto L_12424d46;
  /* 12424d38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12424d3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12424d3d push edx */
  push32((uint32_t)(EDX));
  /* 12424d3e call 0x124174d0 */
  push32(0x12424d43u); f_124174d0();
  /* 12424d43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12424d46:;
  /* 12424d46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12424d48 jmp 0x12424e86 */
  goto L_12424e86;
L_12424d4d:;
  /* 12424d4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424d51 je 0x12424d61 */
  if (C.zf) goto L_12424d61;
  /* 12424d53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12424d55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12424d58 push eax */
  push32((uint32_t)(EAX));
  /* 12424d59 call 0x124174d0 */
  push32(0x12424d5eu); f_124174d0();
  /* 12424d5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12424d61:;
  /* 12424d61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12424d64 jmp 0x12424e86 */
  goto L_12424e86;
L_12424d69:;
  /* 12424d69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424d6d jne 0x12424e83 */
  if (!C.zf) goto L_12424e83;
  /* 12424d73 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12424d7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424d80 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12424d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12424d88 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12424d8e push edx */
  push32((uint32_t)(EDX));
  /* 12424d8f push 0x12442ab8 */
  push32((uint32_t)(0x12442ab8u));
  /* 12424d94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424d97 push eax */
  push32((uint32_t)(EAX));
  /* 12424d98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424d9b push ecx */
  push32((uint32_t)(ECX));
  /* 12424d9c call 0x12425e80 */
  push32(0x12424da1u); f_12425e80();
  /* 12424da1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424da4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12424da6 jne 0x12424db0 */
  if (!C.zf) goto L_12424db0;
  /* 12424da8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12424dab jmp 0x12424e86 */
  goto L_12424e86;
L_12424db0:;
  /* 12424db0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12424db6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12424db9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12424dc3 jmp 0x12424dd4 */
  goto L_12424dd4;
L_12424dc5:;
  /* 12424dc5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12424dcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424dce mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12424dd4:;
  /* 12424dd4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424ddb jge 0x12424e7f */
  if ((C.sf==C.of)) goto L_12424e7f;
  /* 12424de1 cmp dword ptr [0x12440ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12440ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424de8 jle 0x12424e1b */
  if ((C.zf||C.sf!=C.of)) goto L_12424e1b;
  /* 12424dea push 4 */
  push32((uint32_t)(0x4u));
  /* 12424dec mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12424df2 mov dl, byte ptr [ecx*2 + 0x12442ab8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12442ab8)));
  /* 12424df9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12424dff mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12424e05 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12424e0a push eax */
  push32((uint32_t)(EAX));
  /* 12424e0b call 0x1241ca50 */
  push32(0x12424e10u); f_1241ca50();
  /* 12424e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424e13 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12424e19 jmp 0x12424e4e */
  goto L_12424e4e;
L_12424e1b:;
  /* 12424e1b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12424e21 mov dl, byte ptr [ecx*2 + 0x12442ab8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12442ab8)));
  /* 12424e28 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12424e2e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12424e34 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12424e39 mov ecx, dword ptr [0x12440c98] */
  ECX = (r32((uint32_t)(0x12440c98)));
  /* 12424e3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12424e41 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12424e45 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12424e48 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12424e4e:;
  /* 12424e4e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424e55 je 0x12424e78 */
  if (C.zf) goto L_12424e78;
  /* 12424e57 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12424e5d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12424e60 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12424e63 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12424e6a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12424e6e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12424e74 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12424e76 jmp 0x12424e7a */
  goto L_12424e7a;
L_12424e78:;
  /* 12424e78 jmp 0x12424e7f */
  goto L_12424e7f;
L_12424e7a:;
  /* 12424e7a jmp 0x12424dc5 */
  goto L_12424dc5;
L_12424e7f:;
  /* 12424e7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12424e81 jmp 0x12424e86 */
  goto L_12424e86;
L_12424e83:;
  /* 12424e83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12424e86:;
  /* 12424e86 mov esp, ebp */
  ESP = (EBP);
  /* 12424e88 pop ebp */
  EBP = (pop32());
  /* 12424e89 ret  */
  ESPCHK(0x12424c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e90 @ 0x12424e90 (10 bytes, 5 insns) */
void f_12424e90(void) {
  FTRACE(0x12424e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12424e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12424e91 mov ebp, esp */
  EBP = (ESP);
  /* 12424e93 mov eax, dword ptr [0x12441d88] */
  EAX = (r32((uint32_t)(0x12441d88)));
  /* 12424e98 pop ebp */
  EBP = (pop32());
  /* 12424e99 ret  */
  ESPCHK(0x12424e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ea0 @ 0x12424ea0 (575 bytes, 196 insns) */
void f_12424ea0(void) {
  FTRACE(0x12424ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12424ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12424ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12424ea3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12424ea5 push 0x1243eea8 */
  push32((uint32_t)(0x1243eea8u));
  /* 12424eaa push 0x1241fb48 */
  push32((uint32_t)(0x1241fb48u));
  /* 12424eaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12424eb5 push eax */
  push32((uint32_t)(EAX));
  /* 12424eb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12424ebd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424ec0 push ebx */
  push32((uint32_t)(EBX));
  /* 12424ec1 push esi */
  push32((uint32_t)(ESI));
  /* 12424ec2 push edi */
  push32((uint32_t)(EDI));
  /* 12424ec3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12424ec6 cmp dword ptr [0x12442ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424ecd jne 0x12424f1e */
  if (!C.zf) goto L_12424f1e;
  /* 12424ecf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12424ed2 push eax */
  push32((uint32_t)(EAX));
  /* 12424ed3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12424ed5 push 0x1243e5d8 */
  push32((uint32_t)(0x1243e5d8u));
  /* 12424eda push 1 */
  push32((uint32_t)(0x1u));
  /* 12424edc call dword ptr [0x12445300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445300))), 0x12424ee2u);
  /* 12424ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12424ee4 je 0x12424ef2 */
  if (C.zf) goto L_12424ef2;
  /* 12424ee6 mov dword ptr [0x12442ac4], 1 */
  w32((uint32_t)(0x12442ac4), (0x1u));
  /* 12424ef0 jmp 0x12424f1e */
  goto L_12424f1e;
L_12424ef2:;
  /* 12424ef2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12424ef5 push ecx */
  push32((uint32_t)(ECX));
  /* 12424ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12424ef8 push 0x1243e5d4 */
  push32((uint32_t)(0x1243e5d4u));
  /* 12424efd push 1 */
  push32((uint32_t)(0x1u));
  /* 12424eff push 0 */
  push32((uint32_t)(0x0u));
  /* 12424f01 call dword ptr [0x12445304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445304))), 0x12424f07u);
  /* 12424f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12424f09 je 0x12424f17 */
  if (C.zf) goto L_12424f17;
  /* 12424f0b mov dword ptr [0x12442ac4], 2 */
  w32((uint32_t)(0x12442ac4), (0x2u));
  /* 12424f15 jmp 0x12424f1e */
  goto L_12424f1e;
L_12424f17:;
  /* 12424f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12424f19 jmp 0x124250f9 */
  goto L_124250f9;
L_12424f1e:;
  /* 12424f1e cmp dword ptr [0x12442ac4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442ac4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424f25 jne 0x12424f42 */
  if (!C.zf) goto L_12424f42;
  /* 12424f27 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12424f2a push edx */
  push32((uint32_t)(EDX));
  /* 12424f2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424f2e push eax */
  push32((uint32_t)(EAX));
  /* 12424f2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424f32 push ecx */
  push32((uint32_t)(ECX));
  /* 12424f33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12424f36 push edx */
  push32((uint32_t)(EDX));
  /* 12424f37 call dword ptr [0x12445300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445300))), 0x12424f3du);
  /* 12424f3d jmp 0x124250f9 */
  goto L_124250f9;
L_12424f42:;
  /* 12424f42 cmp dword ptr [0x12442ac4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12442ac4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424f49 jne 0x124250f7 */
  if (!C.zf) goto L_124250f7;
  /* 12424f4f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424f53 jne 0x12424f5d */
  if (!C.zf) goto L_12424f5d;
  /* 12424f55 mov eax, dword ptr [0x12442a38] */
  EAX = (r32((uint32_t)(0x12442a38)));
  /* 12424f5a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12424f5d:;
  /* 12424f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12424f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12424f61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12424f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12424f65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424f68 push ecx */
  push32((uint32_t)(ECX));
  /* 12424f69 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424f6c push edx */
  push32((uint32_t)(EDX));
  /* 12424f6d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12424f72 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12424f75 push eax */
  push32((uint32_t)(EAX));
  /* 12424f76 call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x12424f7cu);
  /* 12424f7c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12424f7f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424f83 jne 0x12424f8c */
  if (!C.zf) goto L_12424f8c;
  /* 12424f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12424f87 jmp 0x124250f9 */
  goto L_124250f9;
L_12424f8c:;
  /* 12424f8c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12424f93 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12424f96 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12424f99 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12424f9b call 0x12419be0 */
  push32(0x12424fa0u); f_12419be0();
  /* 12424fa0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12424fa3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12424fa6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12424fa9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12424fac mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12424faf push edx */
  push32((uint32_t)(EDX));
  /* 12424fb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12424fb2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12424fb5 push eax */
  push32((uint32_t)(EAX));
  /* 12424fb6 call 0x1241a7b0 */
  push32(0x12424fbbu); f_1241a7b0();
  /* 12424fbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12424fbe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12424fc5 jmp 0x12424fde */
  goto L_12424fde;
  /* 12424fc7 mov eax, 1 */
  EAX = (0x1u);
  /* 12424fcc ret  */
  ESPCHK(0x12424ea0u, _esp0);
  ESP += 4; return;
  /* 12424fcd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12424fd0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12424fd7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12424fde:;
  /* 12424fde cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12424fe2 jne 0x12424feb */
  if (!C.zf) goto L_12424feb;
  /* 12424fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12424fe6 jmp 0x124250f9 */
  goto L_124250f9;
L_12424feb:;
  /* 12424feb push 0 */
  push32((uint32_t)(0x0u));
  /* 12424fed push 0 */
  push32((uint32_t)(0x0u));
  /* 12424fef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12424ff2 push ecx */
  push32((uint32_t)(ECX));
  /* 12424ff3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12424ff6 push edx */
  push32((uint32_t)(EDX));
  /* 12424ff7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12424ffa push eax */
  push32((uint32_t)(EAX));
  /* 12424ffb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12424ffe push ecx */
  push32((uint32_t)(ECX));
  /* 12424fff push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12425004 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12425007 push edx */
  push32((uint32_t)(EDX));
  /* 12425008 call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x1242500eu);
  /* 1242500e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12425010 jne 0x12425019 */
  if (!C.zf) goto L_12425019;
  /* 12425012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425014 jmp 0x124250f9 */
  goto L_124250f9;
L_12425019:;
  /* 12425019 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12425020 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12425023 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12425027 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242502a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1242502c call 0x12419be0 */
  push32(0x12425031u); f_12419be0();
  /* 12425031 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12425034 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12425037 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1242503a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1242503d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12425044 jmp 0x1242505d */
  goto L_1242505d;
  /* 12425046 mov eax, 1 */
  EAX = (0x1u);
  /* 1242504b ret  */
  ESPCHK(0x12424ea0u, _esp0);
  ESP += 4; return;
  /* 1242504c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1242504f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12425056 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1242505d:;
  /* 1242505d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425061 jne 0x1242506a */
  if (!C.zf) goto L_1242506a;
  /* 12425063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425065 jmp 0x124250f9 */
  goto L_124250f9;
L_1242506a:;
  /* 1242506a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242506e jne 0x12425079 */
  if (!C.zf) goto L_12425079;
  /* 12425070 mov edx, dword ptr [0x12442a28] */
  EDX = (r32((uint32_t)(0x12442a28)));
  /* 12425076 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12425079:;
  /* 12425079 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242507c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1242507f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12425085 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425088 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1242508b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12425092 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12425095 push ecx */
  push32((uint32_t)(ECX));
  /* 12425096 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12425099 push edx */
  push32((uint32_t)(EDX));
  /* 1242509a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1242509d push eax */
  push32((uint32_t)(EAX));
  /* 1242509e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124250a1 push ecx */
  push32((uint32_t)(ECX));
  /* 124250a2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124250a5 push edx */
  push32((uint32_t)(EDX));
  /* 124250a6 call dword ptr [0x12445304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445304))), 0x124250acu);
  /* 124250ac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 124250af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124250b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124250b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124250b7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 124250bc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124250c2 je 0x124250d8 */
  if (C.zf) goto L_124250d8;
  /* 124250c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124250c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124250ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124250cc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124250d0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124250d6 je 0x124250dc */
  if (C.zf) goto L_124250dc;
L_124250d8:;
  /* 124250d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124250da jmp 0x124250f9 */
  goto L_124250f9;
L_124250dc:;
  /* 124250dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124250df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124250e1 push eax */
  push32((uint32_t)(EAX));
  /* 124250e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124250e5 push ecx */
  push32((uint32_t)(ECX));
  /* 124250e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 124250e9 push edx */
  push32((uint32_t)(EDX));
  /* 124250ea call 0x1241e930 */
  push32(0x124250efu); f_1241e930();
  /* 124250ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124250f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 124250f5 jmp 0x124250f9 */
  goto L_124250f9;
L_124250f7:;
  /* 124250f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124250f9:;
  /* 124250f9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 124250fc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124250ff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12425106 pop edi */
  EDI = (pop32());
  /* 12425107 pop esi */
  ESI = (pop32());
  /* 12425108 pop ebx */
  EBX = (pop32());
  /* 12425109 mov esp, ebp */
  ESP = (EBP);
  /* 1242510b pop ebp */
  EBP = (pop32());
  /* 1242510c ret  */
  ESPCHK(0x12424ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015110 @ 0x12425110 (208 bytes, 85 insns) */
void f_12425110(void) {
  FTRACE(0x12425110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12425110 push ebp */
  push32((uint32_t)(EBP));
  /* 12425111 mov ebp, esp */
  EBP = (ESP);
  /* 12425113 push edi */
  push32((uint32_t)(EDI));
  /* 12425114 push esi */
  push32((uint32_t)(ESI));
  /* 12425115 push ebx */
  push32((uint32_t)(EBX));
  /* 12425116 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12425119 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1242511c lea eax, [0x12442a20] */
  EAX = ((uint32_t)(0x12442a20));
  /* 12425122 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425126 jne 0x12425163 */
  if (!C.zf) goto L_12425163;
  /* 12425128 mov al, 0xff */
  AL = (0xffu);
  /* 1242512a mov edi, edi */
  EDI = (EDI);
L_1242512c:;
  /* 1242512c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1242512e je 0x1242515e */
  if (C.zf) goto L_1242515e;
  /* 12425130 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12425132 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12425133 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12425135 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12425136 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12425138 je 0x1242512c */
  if (C.zf) goto L_1242512c;
  /* 1242513a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1242513c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1242513e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12425140 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12425143 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12425145 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12425147 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12425149 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1242514b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1242514d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1242514f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12425152 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12425154 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12425156 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12425158 je 0x1242512c */
  if (C.zf) goto L_1242512c;
  /* 1242515a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1242515c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1242515e:;
  /* 1242515e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12425161 jmp 0x124251db */
  goto L_124251db;
L_12425163:;
  /* 12425163 lock inc dword ptr [0x12442bb4] */
  x86_unimpl("lock inc @ 0x12425163");
  /* 1242516a cmp dword ptr [0x12442ba4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442ba4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425171 jg 0x12425177 */
  if ((!C.zf&&C.sf==C.of)) goto L_12425177;
  /* 12425173 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425175 jmp 0x1242518c */
  goto L_1242518c;
L_12425177:;
  /* 12425177 lock dec dword ptr [0x12442bb4] */
  x86_unimpl("lock dec @ 0x12425177");
  /* 1242517e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12425180 call 0x1241a440 */
  push32(0x12425185u); f_1241a440();
  /* 12425185 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1242518c:;
  /* 1242518c mov eax, 0xff */
  EAX = (0xffu);
  /* 12425191 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12425193 nop  */
  /* nop */
L_12425194:;
  /* 12425194 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12425196 je 0x124251bf */
  if (C.zf) goto L_124251bf;
  /* 12425198 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1242519a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1242519b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1242519d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1242519e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124251a0 je 0x12425194 */
  if (C.zf) goto L_12425194;
  /* 124251a2 push eax */
  push32((uint32_t)(EAX));
  /* 124251a3 push ebx */
  push32((uint32_t)(EBX));
  /* 124251a4 call 0x12426280 */
  push32(0x124251a9u); f_12426280();
  /* 124251a9 mov ebx, eax */
  EBX = (EAX);
  /* 124251ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124251ae call 0x12426280 */
  push32(0x124251b3u); f_12426280();
  /* 124251b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124251b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124251b8 je 0x12425194 */
  if (C.zf) goto L_12425194;
  /* 124251ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124251bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_124251bf:;
  /* 124251bf mov ebx, eax */
  EBX = (EAX);
  /* 124251c1 pop eax */
  EAX = (pop32());
  /* 124251c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124251c4 jne 0x124251cf */
  if (!C.zf) goto L_124251cf;
  /* 124251c6 lock dec dword ptr [0x12442bb4] */
  x86_unimpl("lock dec @ 0x124251c6");
  /* 124251cd jmp 0x124251d9 */
  goto L_124251d9;
L_124251cf:;
  /* 124251cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124251d1 call 0x1241a4e0 */
  push32(0x124251d6u); f_1241a4e0();
  /* 124251d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124251d9:;
  /* 124251d9 mov eax, ebx */
  EAX = (EBX);
L_124251db:;
  /* 124251db pop ebx */
  EBX = (pop32());
  /* 124251dc pop esi */
  ESI = (pop32());
  /* 124251dd pop edi */
  EDI = (pop32());
  /* 124251de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124251df ret  */
  ESPCHK(0x12425110u, _esp0);
  ESP += 4; return;
}

/* FUN_100151e0 @ 0x124251e0 (257 bytes, 103 insns) */
void f_124251e0(void) {
  FTRACE(0x124251e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124251e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124251e1 mov ebp, esp */
  EBP = (ESP);
  /* 124251e3 push edi */
  push32((uint32_t)(EDI));
  /* 124251e4 push esi */
  push32((uint32_t)(ESI));
  /* 124251e5 push ebx */
  push32((uint32_t)(EBX));
  /* 124251e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124251e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124251eb je 0x124252da */
  if (C.zf) goto L_124252da;
  /* 124251f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 124251f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 124251f7 lea eax, [0x12442a20] */
  EAX = ((uint32_t)(0x12442a20));
  /* 124251fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425201 jne 0x12425251 */
  if (!C.zf) goto L_12425251;
  /* 12425203 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12425205 mov bl, 0x5a */
  BL = (0x5au);
  /* 12425207 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12425209 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1242520c:;
  /* 1242520c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1242520e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12425210 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12425212 je 0x12425235 */
  if (C.zf) goto L_12425235;
  /* 12425214 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12425216 je 0x12425235 */
  if (C.zf) goto L_12425235;
  /* 12425218 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12425219 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1242521a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1242521c jb 0x12425224 */
  if (C.cf) goto L_12425224;
  /* 1242521e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12425220 ja 0x12425224 */
  if ((!C.cf&&!C.zf)) goto L_12425224;
  /* 12425222 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12425224:;
  /* 12425224 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12425226 jb 0x1242522e */
  if (C.cf) goto L_1242522e;
  /* 12425228 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1242522a ja 0x1242522e */
  if ((!C.cf&&!C.zf)) goto L_1242522e;
  /* 1242522c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1242522e:;
  /* 1242522e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12425230 jne 0x1242523f */
  if (!C.zf) goto L_1242523f;
  /* 12425232 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12425233 jne 0x1242520c */
  if (!C.zf) goto L_1242520c;
L_12425235:;
  /* 12425235 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425237 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12425239 je 0x124252da */
  if (C.zf) goto L_124252da;
L_1242523f:;
  /* 1242523f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12425244 jb 0x124252da */
  if (C.cf) goto L_124252da;
  /* 1242524a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1242524c jmp 0x124252da */
  goto L_124252da;
L_12425251:;
  /* 12425251 lock inc dword ptr [0x12442bb4] */
  x86_unimpl("lock inc @ 0x12425251");
  /* 12425258 cmp dword ptr [0x12442ba4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442ba4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242525f jg 0x12425265 */
  if ((!C.zf&&C.sf==C.of)) goto L_12425265;
  /* 12425261 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425263 jmp 0x1242527e */
  goto L_1242527e;
L_12425265:;
  /* 12425265 lock dec dword ptr [0x12442bb4] */
  x86_unimpl("lock dec @ 0x12425265");
  /* 1242526c mov ebx, ecx */
  EBX = (ECX);
  /* 1242526e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12425270 call 0x1241a440 */
  push32(0x12425275u); f_1241a440();
  /* 12425275 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1242527c mov ecx, ebx */
  ECX = (EBX);
L_1242527e:;
  /* 1242527e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425280 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12425282 mov edi, edi */
  EDI = (EDI);
L_12425284:;
  /* 12425284 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12425286 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425288 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1242528a je 0x124252af */
  if (C.zf) goto L_124252af;
  /* 1242528c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1242528e je 0x124252af */
  if (C.zf) goto L_124252af;
  /* 12425290 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12425291 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12425292 push ecx */
  push32((uint32_t)(ECX));
  /* 12425293 push eax */
  push32((uint32_t)(EAX));
  /* 12425294 push ebx */
  push32((uint32_t)(EBX));
  /* 12425295 call 0x12426280 */
  push32(0x1242529au); f_12426280();
  /* 1242529a mov ebx, eax */
  EBX = (EAX);
  /* 1242529c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242529f call 0x12426280 */
  push32(0x124252a4u); f_12426280();
  /* 124252a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124252a7 pop ecx */
  ECX = (pop32());
  /* 124252a8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124252aa jne 0x124252b5 */
  if (!C.zf) goto L_124252b5;
  /* 124252ac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 124252ad jne 0x12425284 */
  if (!C.zf) goto L_12425284;
L_124252af:;
  /* 124252af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124252b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124252b3 je 0x124252be */
  if (C.zf) goto L_124252be;
L_124252b5:;
  /* 124252b5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 124252ba jb 0x124252be */
  if (C.cf) goto L_124252be;
  /* 124252bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_124252be:;
  /* 124252be pop eax */
  EAX = (pop32());
  /* 124252bf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124252c1 jne 0x124252cc */
  if (!C.zf) goto L_124252cc;
  /* 124252c3 lock dec dword ptr [0x12442bb4] */
  x86_unimpl("lock dec @ 0x124252c3");
  /* 124252ca jmp 0x124252da */
  goto L_124252da;
L_124252cc:;
  /* 124252cc mov ebx, ecx */
  EBX = (ECX);
  /* 124252ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124252d0 call 0x1241a4e0 */
  push32(0x124252d5u); f_1241a4e0();
  /* 124252d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124252d8 mov ecx, ebx */
  ECX = (EBX);
L_124252da:;
  /* 124252da mov eax, ecx */
  EAX = (ECX);
  /* 124252dc pop ebx */
  EBX = (pop32());
  /* 124252dd pop esi */
  ESI = (pop32());
  /* 124252de pop edi */
  EDI = (pop32());
  /* 124252df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124252e0 ret  */
  ESPCHK(0x124251e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100152f0 @ 0x124252f0 (255 bytes, 88 insns) */
void f_124252f0(void) {
  FTRACE(0x124252f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124252f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124252f1 mov ebp, esp */
  EBP = (ESP);
  /* 124252f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_124252f6:;
  /* 124252f6 cmp dword ptr [0x12440ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12440ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124252fd jle 0x12425316 */
  if ((C.zf||C.sf!=C.of)) goto L_12425316;
  /* 124252ff push 8 */
  push32((uint32_t)(0x8u));
  /* 12425301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425304 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425306 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12425308 push ecx */
  push32((uint32_t)(ECX));
  /* 12425309 call 0x1241ca50 */
  push32(0x1242530eu); f_1241ca50();
  /* 1242530e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425311 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12425314 jmp 0x1242532f */
  goto L_1242532f;
L_12425316:;
  /* 12425316 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425319 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242531b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1242531d mov ecx, dword ptr [0x12440c98] */
  ECX = (r32((uint32_t)(0x12440c98)));
  /* 12425323 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425325 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12425329 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1242532c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1242532f:;
  /* 1242532f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425333 je 0x12425340 */
  if (C.zf) goto L_12425340;
  /* 12425335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425338 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242533b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1242533e jmp 0x124252f6 */
  goto L_124252f6;
L_12425340:;
  /* 12425340 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425343 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425345 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12425347 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1242534a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242534d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425350 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12425353 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12425356 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12425359 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242535d je 0x12425365 */
  if (C.zf) goto L_12425365;
  /* 1242535f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425363 jne 0x12425378 */
  if (!C.zf) goto L_12425378;
L_12425365:;
  /* 12425365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242536a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1242536c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1242536f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425372 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425375 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12425378:;
  /* 12425378 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1242537f:;
  /* 1242537f cmp dword ptr [0x12440ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12440ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425386 jle 0x1242539b */
  if ((C.zf||C.sf!=C.of)) goto L_1242539b;
  /* 12425388 push 4 */
  push32((uint32_t)(0x4u));
  /* 1242538a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242538d push edx */
  push32((uint32_t)(EDX));
  /* 1242538e call 0x1241ca50 */
  push32(0x12425393u); f_1241ca50();
  /* 12425393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425396 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12425399 jmp 0x124253b0 */
  goto L_124253b0;
L_1242539b:;
  /* 1242539b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242539e mov ecx, dword ptr [0x12440c98] */
  ECX = (r32((uint32_t)(0x12440c98)));
  /* 124253a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124253a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124253aa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124253ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_124253b0:;
  /* 124253b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124253b4 je 0x124253db */
  if (C.zf) goto L_124253db;
  /* 124253b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124253b9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124253bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124253bf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 124253c3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124253c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124253c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124253cb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124253cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124253d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124253d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124253d6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124253d9 jmp 0x1242537f */
  goto L_1242537f;
L_124253db:;
  /* 124253db cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124253df jne 0x124253e8 */
  if (!C.zf) goto L_124253e8;
  /* 124253e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124253e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124253e6 jmp 0x124253eb */
  goto L_124253eb;
L_124253e8:;
  /* 124253e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124253eb:;
  /* 124253eb mov esp, ebp */
  ESP = (EBP);
  /* 124253ed pop ebp */
  EBP = (pop32());
  /* 124253ee ret  */
  ESPCHK(0x124252f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100153f0 @ 0x124253f0 (17 bytes, 8 insns) */
void f_124253f0(void) {
  FTRACE(0x124253f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124253f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124253f1 mov ebp, esp */
  EBP = (ESP);
  /* 124253f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124253f6 push eax */
  push32((uint32_t)(EAX));
  /* 124253f7 call 0x124252f0 */
  push32(0x124253fcu); f_124252f0();
  /* 124253fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124253ff pop ebp */
  EBP = (pop32());
  /* 12425400 ret  */
  ESPCHK(0x124253f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015410 @ 0x12425410 (297 bytes, 106 insns) */
void f_12425410(void) {
  FTRACE(0x12425410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12425410 push ebp */
  push32((uint32_t)(EBP));
  /* 12425411 mov ebp, esp */
  EBP = (ESP);
  /* 12425413 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425416 push esi */
  push32((uint32_t)(ESI));
L_12425417:;
  /* 12425417 cmp dword ptr [0x12440ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12440ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242541e jle 0x12425437 */
  if ((C.zf||C.sf!=C.of)) goto L_12425437;
  /* 12425420 push 8 */
  push32((uint32_t)(0x8u));
  /* 12425422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425425 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425427 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12425429 push ecx */
  push32((uint32_t)(ECX));
  /* 1242542a call 0x1241ca50 */
  push32(0x1242542fu); f_1241ca50();
  /* 1242542f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425432 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12425435 jmp 0x12425450 */
  goto L_12425450;
L_12425437:;
  /* 12425437 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242543a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242543c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1242543e mov ecx, dword ptr [0x12440c98] */
  ECX = (r32((uint32_t)(0x12440c98)));
  /* 12425444 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425446 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1242544a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1242544d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12425450:;
  /* 12425450 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425454 je 0x12425461 */
  if (C.zf) goto L_12425461;
  /* 12425456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425459 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242545c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1242545f jmp 0x12425417 */
  goto L_12425417;
L_12425461:;
  /* 12425461 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425464 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425466 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12425468 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1242546b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242546e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425471 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12425474 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12425477 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1242547a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242547e je 0x12425486 */
  if (C.zf) goto L_12425486;
  /* 12425480 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425484 jne 0x12425499 */
  if (!C.zf) goto L_12425499;
L_12425486:;
  /* 12425486 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242548b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1242548d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12425490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425493 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425496 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12425499:;
  /* 12425499 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124254a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_124254a7:;
  /* 124254a7 cmp dword ptr [0x12440ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12440ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124254ae jle 0x124254c3 */
  if ((C.zf||C.sf!=C.of)) goto L_124254c3;
  /* 124254b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 124254b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124254b5 push edx */
  push32((uint32_t)(EDX));
  /* 124254b6 call 0x1241ca50 */
  push32(0x124254bbu); f_1241ca50();
  /* 124254bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124254be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 124254c1 jmp 0x124254d8 */
  goto L_124254d8;
L_124254c3:;
  /* 124254c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124254c6 mov ecx, dword ptr [0x12440c98] */
  ECX = (r32((uint32_t)(0x12440c98)));
  /* 124254cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124254ce mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 124254d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 124254d5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_124254d8:;
  /* 124254d8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124254dc je 0x12425519 */
  if (C.zf) goto L_12425519;
  /* 124254de push 0 */
  push32((uint32_t)(0x0u));
  /* 124254e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 124254e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124254e5 push eax */
  push32((uint32_t)(EAX));
  /* 124254e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124254e9 push ecx */
  push32((uint32_t)(ECX));
  /* 124254ea call 0x124263b0 */
  push32(0x124254efu); f_124263b0();
  /* 124254ef mov ecx, eax */
  ECX = (EAX);
  /* 124254f1 mov esi, edx */
  ESI = (EDX);
  /* 124254f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124254f6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124254f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 124254fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124254fc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 124254fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12425501 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12425504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425509 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1242550b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1242550e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425511 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425514 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12425517 jmp 0x124254a7 */
  goto L_124254a7;
L_12425519:;
  /* 12425519 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242551d jne 0x1242552e */
  if (!C.zf) goto L_1242552e;
  /* 1242551f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425522 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12425524 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12425527 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242552a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1242552c jmp 0x12425534 */
  goto L_12425534;
L_1242552e:;
  /* 1242552e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425531 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12425534:;
  /* 12425534 pop esi */
  ESI = (pop32());
  /* 12425535 mov esp, ebp */
  ESP = (EBP);
  /* 12425537 pop ebp */
  EBP = (pop32());
  /* 12425538 ret  */
  ESPCHK(0x12425410u, _esp0);
  ESP += 4; return;
}

/* FUN_10015540 @ 0x12425540 (61 bytes, 18 insns) */
void f_12425540(void) {
  FTRACE(0x12425540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12425540 push ebp */
  push32((uint32_t)(EBP));
  /* 12425541 mov ebp, esp */
  EBP = (ESP);
  /* 12425543 cmp dword ptr [0x12442b80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242554a jne 0x1242557b */
  if (!C.zf) goto L_1242557b;
  /* 1242554c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1242554e call 0x1241a440 */
  push32(0x12425553u); f_1241a440();
  /* 12425553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425556 cmp dword ptr [0x12442b80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242555d jne 0x12425571 */
  if (!C.zf) goto L_12425571;
  /* 1242555f call 0x124255a0 */
  push32(0x12425564u); f_124255a0();
  /* 12425564 mov eax, dword ptr [0x12442b80] */
  EAX = (r32((uint32_t)(0x12442b80)));
  /* 12425569 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242556c mov dword ptr [0x12442b80], eax */
  w32((uint32_t)(0x12442b80), (EAX));
L_12425571:;
  /* 12425571 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12425573 call 0x1241a4e0 */
  push32(0x12425578u); f_1241a4e0();
  /* 12425578 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1242557b:;
  /* 1242557b pop ebp */
  EBP = (pop32());
  /* 1242557c ret  */
  ESPCHK(0x12425540u, _esp0);
  ESP += 4; return;
}

/* FUN_10015580 @ 0x12425580 (30 bytes, 11 insns) */
void f_12425580(void) {
  FTRACE(0x12425580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12425580 push ebp */
  push32((uint32_t)(EBP));
  /* 12425581 mov ebp, esp */
  EBP = (ESP);
  /* 12425583 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12425585 call 0x1241a440 */
  push32(0x1242558au); f_1241a440();
  /* 1242558a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242558d call 0x124255a0 */
  push32(0x12425592u); f_124255a0();
  /* 12425592 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12425594 call 0x1241a4e0 */
  push32(0x12425599u); f_1241a4e0();
  /* 12425599 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242559c pop ebp */
  EBP = (pop32());
  /* 1242559d ret  */
  ESPCHK(0x12425580u, _esp0);
  ESP += 4; return;
}

/* FUN_100155a0 @ 0x124255a0 (939 bytes, 266 insns) */
void f_124255a0(void) {
  FTRACE(0x124255a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124255a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124255a1 mov ebp, esp */
  EBP = (ESP);
  /* 124255a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124255a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124255ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 124255af call 0x1241a440 */
  push32(0x124255b4u); f_1241a440();
  /* 124255b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124255b7 mov dword ptr [0x12442ac8], 0 */
  w32((uint32_t)(0x12442ac8), (0x0u));
  /* 124255c1 mov dword ptr [0x12441e38], 0xffffffff */
  w32((uint32_t)(0x12441e38), (0xffffffffu));
  /* 124255cb mov eax, dword ptr [0x12441e38] */
  EAX = (r32((uint32_t)(0x12441e38)));
  /* 124255d0 mov dword ptr [0x12441e28], eax */
  w32((uint32_t)(0x12441e28), (EAX));
  /* 124255d5 push 0x1243ef08 */
  push32((uint32_t)(0x1243ef08u));
  /* 124255da call 0x12426420 */
  push32(0x124255dfu); f_12426420();
  /* 124255df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124255e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124255e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124255e9 jne 0x12425723 */
  if (!C.zf) goto L_12425723;
  /* 124255ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 124255f1 call 0x1241a4e0 */
  push32(0x124255f6u); f_1241a4e0();
  /* 124255f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124255f9 push 0x12442ad0 */
  push32((uint32_t)(0x12442ad0u));
  /* 124255fe call dword ptr [0x124452c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452c4))), 0x12425604u);
  /* 12425604 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425607 je 0x1242571e */
  if (C.zf) goto L_1242571e;
  /* 1242560d mov dword ptr [0x12442ac8], 1 */
  w32((uint32_t)(0x12442ac8), (0x1u));
  /* 12425617 mov ecx, dword ptr [0x12442ad0] */
  ECX = (r32((uint32_t)(0x12442ad0)));
  /* 1242561d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425620 mov dword ptr [0x12441d90], ecx */
  w32((uint32_t)(0x12441d90), (ECX));
  /* 12425626 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425628 mov dx, word ptr [0x12442b16] */
  DX = (r16((uint32_t)(0x12442b16)));
  /* 1242562f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12425631 je 0x12425649 */
  if (C.zf) goto L_12425649;
  /* 12425633 mov eax, dword ptr [0x12442b24] */
  EAX = (r32((uint32_t)(0x12442b24)));
  /* 12425638 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1242563b mov ecx, dword ptr [0x12441d90] */
  ECX = (r32((uint32_t)(0x12441d90)));
  /* 12425641 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425643 mov dword ptr [0x12441d90], ecx */
  w32((uint32_t)(0x12441d90), (ECX));
L_12425649:;
  /* 12425649 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1242564b mov dx, word ptr [0x12442b6a] */
  DX = (r16((uint32_t)(0x12442b6a)));
  /* 12425652 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12425654 je 0x1242567e */
  if (C.zf) goto L_1242567e;
  /* 12425656 cmp dword ptr [0x12442b78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242565d je 0x1242567e */
  if (C.zf) goto L_1242567e;
  /* 1242565f mov dword ptr [0x12441d94], 1 */
  w32((uint32_t)(0x12441d94), (0x1u));
  /* 12425669 mov eax, dword ptr [0x12442b78] */
  EAX = (r32((uint32_t)(0x12442b78)));
  /* 1242566e sub eax, dword ptr [0x12442b24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12442b24))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425674 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425677 mov dword ptr [0x12441d98], eax */
  w32((uint32_t)(0x12441d98), (EAX));
  /* 1242567c jmp 0x12425692 */
  goto L_12425692;
L_1242567e:;
  /* 1242567e mov dword ptr [0x12441d94], 0 */
  w32((uint32_t)(0x12441d94), (0x0u));
  /* 12425688 mov dword ptr [0x12441d98], 0 */
  w32((uint32_t)(0x12441d98), (0x0u));
L_12425692:;
  /* 12425692 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12425695 push ecx */
  push32((uint32_t)(ECX));
  /* 12425696 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425698 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1242569a mov edx, dword ptr [0x12441e1c] */
  EDX = (r32((uint32_t)(0x12441e1c)));
  /* 124256a0 push edx */
  push32((uint32_t)(EDX));
  /* 124256a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124256a3 push 0x12442ad4 */
  push32((uint32_t)(0x12442ad4u));
  /* 124256a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124256ad mov eax, dword ptr [0x12442a38] */
  EAX = (r32((uint32_t)(0x12442a38)));
  /* 124256b2 push eax */
  push32((uint32_t)(EAX));
  /* 124256b3 call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x124256b9u);
  /* 124256b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124256bb je 0x124256cf */
  if (C.zf) goto L_124256cf;
  /* 124256bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124256c1 jne 0x124256cf */
  if (!C.zf) goto L_124256cf;
  /* 124256c3 mov ecx, dword ptr [0x12441e1c] */
  ECX = (r32((uint32_t)(0x12441e1c)));
  /* 124256c9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 124256cd jmp 0x124256d8 */
  goto L_124256d8;
L_124256cf:;
  /* 124256cf mov edx, dword ptr [0x12441e1c] */
  EDX = (r32((uint32_t)(0x12441e1c)));
  /* 124256d5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_124256d8:;
  /* 124256d8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124256db push eax */
  push32((uint32_t)(EAX));
  /* 124256dc push 0 */
  push32((uint32_t)(0x0u));
  /* 124256de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 124256e0 mov ecx, dword ptr [0x12441e20] */
  ECX = (r32((uint32_t)(0x12441e20)));
  /* 124256e6 push ecx */
  push32((uint32_t)(ECX));
  /* 124256e7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124256e9 push 0x12442b28 */
  push32((uint32_t)(0x12442b28u));
  /* 124256ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 124256f3 mov edx, dword ptr [0x12442a38] */
  EDX = (r32((uint32_t)(0x12442a38)));
  /* 124256f9 push edx */
  push32((uint32_t)(EDX));
  /* 124256fa call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x12425700u);
  /* 12425700 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12425702 je 0x12425715 */
  if (C.zf) goto L_12425715;
  /* 12425704 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425708 jne 0x12425715 */
  if (!C.zf) goto L_12425715;
  /* 1242570a mov eax, dword ptr [0x12441e20] */
  EAX = (r32((uint32_t)(0x12441e20)));
  /* 1242570f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12425713 jmp 0x1242571e */
  goto L_1242571e;
L_12425715:;
  /* 12425715 mov ecx, dword ptr [0x12441e20] */
  ECX = (r32((uint32_t)(0x12441e20)));
  /* 1242571b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1242571e:;
  /* 1242571e jmp 0x12425947 */
  goto L_12425947;
L_12425723:;
  /* 12425723 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425726 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12425729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1242572b je 0x1242574d */
  if (C.zf) goto L_1242574d;
  /* 1242572d cmp dword ptr [0x12442b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425734 je 0x1242575c */
  if (C.zf) goto L_1242575c;
  /* 12425736 mov ecx, dword ptr [0x12442b7c] */
  ECX = (r32((uint32_t)(0x12442b7c)));
  /* 1242573c push ecx */
  push32((uint32_t)(ECX));
  /* 1242573d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425740 push edx */
  push32((uint32_t)(EDX));
  /* 12425741 call 0x124226d0 */
  push32(0x12425746u); f_124226d0();
  /* 12425746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1242574b jne 0x1242575c */
  if (!C.zf) goto L_1242575c;
L_1242574d:;
  /* 1242574d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1242574f call 0x1241a4e0 */
  push32(0x12425754u); f_1241a4e0();
  /* 12425754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425757 jmp 0x12425947 */
  goto L_12425947;
L_1242575c:;
  /* 1242575c push 2 */
  push32((uint32_t)(0x2u));
  /* 1242575e mov eax, dword ptr [0x12442b7c] */
  EAX = (r32((uint32_t)(0x12442b7c)));
  /* 12425763 push eax */
  push32((uint32_t)(EAX));
  /* 12425764 call 0x124174d0 */
  push32(0x12425769u); f_124174d0();
  /* 12425769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242576c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12425771 push 0x1243ef00 */
  push32((uint32_t)(0x1243ef00u));
  /* 12425776 push 2 */
  push32((uint32_t)(0x2u));
  /* 12425778 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242577b push ecx */
  push32((uint32_t)(ECX));
  /* 1242577c call 0x12419870 */
  push32(0x12425781u); f_12419870();
  /* 12425781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425784 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425787 push eax */
  push32((uint32_t)(EAX));
  /* 12425788 call 0x12416a40 */
  push32(0x1242578du); f_12416a40();
  /* 1242578d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425790 mov dword ptr [0x12442b7c], eax */
  w32((uint32_t)(0x12442b7c), (EAX));
  /* 12425795 cmp dword ptr [0x12442b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242579c jne 0x124257ad */
  if (!C.zf) goto L_124257ad;
  /* 1242579e push 0xc */
  push32((uint32_t)(0xcu));
  /* 124257a0 call 0x1241a4e0 */
  push32(0x124257a5u); f_1241a4e0();
  /* 124257a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124257a8 jmp 0x12425947 */
  goto L_12425947;
L_124257ad:;
  /* 124257ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124257b0 push edx */
  push32((uint32_t)(EDX));
  /* 124257b1 mov eax, dword ptr [0x12442b7c] */
  EAX = (r32((uint32_t)(0x12442b7c)));
  /* 124257b6 push eax */
  push32((uint32_t)(EAX));
  /* 124257b7 call 0x124199f0 */
  push32(0x124257bcu); f_124199f0();
  /* 124257bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124257bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 124257c1 call 0x1241a4e0 */
  push32(0x124257c6u); f_1241a4e0();
  /* 124257c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124257c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 124257cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124257ce push ecx */
  push32((uint32_t)(ECX));
  /* 124257cf mov edx, dword ptr [0x12441e1c] */
  EDX = (r32((uint32_t)(0x12441e1c)));
  /* 124257d5 push edx */
  push32((uint32_t)(EDX));
  /* 124257d6 call 0x1241a260 */
  push32(0x124257dbu); f_1241a260();
  /* 124257db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124257de mov eax, dword ptr [0x12441e1c] */
  EAX = (r32((uint32_t)(0x12441e1c)));
  /* 124257e3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 124257e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124257ea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124257ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124257f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124257f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124257f6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124257f9 jne 0x1242580d */
  if (!C.zf) goto L_1242580d;
  /* 124257fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124257fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425801 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12425804 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425807 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242580a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1242580d:;
  /* 1242580d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425810 push eax */
  push32((uint32_t)(EAX));
  /* 12425811 call 0x124252f0 */
  push32(0x12425816u); f_124252f0();
  /* 12425816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425819 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1242581f mov dword ptr [0x12441d90], eax */
  w32((uint32_t)(0x12441d90), (EAX));
L_12425824:;
  /* 12425824 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425827 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1242582a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242582d je 0x12425845 */
  if (C.zf) goto L_12425845;
  /* 1242582f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425832 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12425835 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425838 jl 0x12425850 */
  if ((C.sf!=C.of)) goto L_12425850;
  /* 1242583a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242583d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12425840 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425843 jg 0x12425850 */
  if ((!C.zf&&C.sf==C.of)) goto L_12425850;
L_12425845:;
  /* 12425845 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425848 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242584b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1242584e jmp 0x12425824 */
  goto L_12425824;
L_12425850:;
  /* 12425850 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425853 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12425856 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425859 jne 0x124258f5 */
  if (!C.zf) goto L_124258f5;
  /* 1242585f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425862 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425865 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12425868 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242586b push edx */
  push32((uint32_t)(EDX));
  /* 1242586c call 0x124252f0 */
  push32(0x12425871u); f_124252f0();
  /* 12425871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425874 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425877 mov ecx, dword ptr [0x12441d90] */
  ECX = (r32((uint32_t)(0x12441d90)));
  /* 1242587d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242587f mov dword ptr [0x12441d90], ecx */
  w32((uint32_t)(0x12441d90), (ECX));
L_12425885:;
  /* 12425885 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425888 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1242588b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242588e jl 0x124258a6 */
  if ((C.sf!=C.of)) goto L_124258a6;
  /* 12425890 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425893 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12425896 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425899 jg 0x124258a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_124258a6;
  /* 1242589b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242589e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124258a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124258a4 jmp 0x12425885 */
  goto L_12425885;
L_124258a6:;
  /* 124258a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124258a9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124258ac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124258af jne 0x124258f5 */
  if (!C.zf) goto L_124258f5;
  /* 124258b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124258b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124258b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124258ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124258bd push ecx */
  push32((uint32_t)(ECX));
  /* 124258be call 0x124252f0 */
  push32(0x124258c3u); f_124252f0();
  /* 124258c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124258c6 mov edx, dword ptr [0x12441d90] */
  EDX = (r32((uint32_t)(0x12441d90)));
  /* 124258cc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124258ce mov dword ptr [0x12441d90], edx */
  w32((uint32_t)(0x12441d90), (EDX));
L_124258d4:;
  /* 124258d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124258d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124258da cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124258dd jl 0x124258f5 */
  if ((C.sf!=C.of)) goto L_124258f5;
  /* 124258df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124258e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124258e5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124258e8 jg 0x124258f5 */
  if ((!C.zf&&C.sf==C.of)) goto L_124258f5;
  /* 124258ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124258ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124258f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124258f3 jmp 0x124258d4 */
  goto L_124258d4;
L_124258f5:;
  /* 124258f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124258f9 je 0x12425909 */
  if (C.zf) goto L_12425909;
  /* 124258fb mov edx, dword ptr [0x12441d90] */
  EDX = (r32((uint32_t)(0x12441d90)));
  /* 12425901 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12425903 mov dword ptr [0x12441d90], edx */
  w32((uint32_t)(0x12441d90), (EDX));
L_12425909:;
  /* 12425909 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242590c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1242590f mov dword ptr [0x12441d94], ecx */
  w32((uint32_t)(0x12441d94), (ECX));
  /* 12425915 cmp dword ptr [0x12441d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12441d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242591c je 0x1242593e */
  if (C.zf) goto L_1242593e;
  /* 1242591e push 3 */
  push32((uint32_t)(0x3u));
  /* 12425920 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425923 push edx */
  push32((uint32_t)(EDX));
  /* 12425924 mov eax, dword ptr [0x12441e20] */
  EAX = (r32((uint32_t)(0x12441e20)));
  /* 12425929 push eax */
  push32((uint32_t)(EAX));
  /* 1242592a call 0x1241a260 */
  push32(0x1242592fu); f_1241a260();
  /* 1242592f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425932 mov ecx, dword ptr [0x12441e20] */
  ECX = (r32((uint32_t)(0x12441e20)));
  /* 12425938 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1242593c jmp 0x12425947 */
  goto L_12425947;
L_1242593e:;
  /* 1242593e mov edx, dword ptr [0x12441e20] */
  EDX = (r32((uint32_t)(0x12441e20)));
  /* 12425944 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12425947:;
  /* 12425947 mov esp, ebp */
  ESP = (EBP);
  /* 12425949 pop ebp */
  EBP = (pop32());
  /* 1242594a ret  */
  ESPCHK(0x124255a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015950 @ 0x12425950 (46 bytes, 18 insns) */
void f_12425950(void) {
  FTRACE(0x12425950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12425950 push ebp */
  push32((uint32_t)(EBP));
  /* 12425951 mov ebp, esp */
  EBP = (ESP);
  /* 12425953 push ecx */
  push32((uint32_t)(ECX));
  /* 12425954 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12425956 call 0x1241a440 */
  push32(0x1242595bu); f_1241a440();
  /* 1242595b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242595e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425961 push eax */
  push32((uint32_t)(EAX));
  /* 12425962 call 0x12425980 */
  push32(0x12425967u); f_12425980();
  /* 12425967 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242596a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1242596d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1242596f call 0x1241a4e0 */
  push32(0x12425974u); f_1241a4e0();
  /* 12425974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242597a mov esp, ebp */
  ESP = (EBP);
  /* 1242597c pop ebp */
  EBP = (pop32());
  /* 1242597d ret  */
  ESPCHK(0x12425950u, _esp0);
  ESP += 4; return;
}

/* FUN_10015980 @ 0x12425980 (762 bytes, 246 insns) */
void f_12425980(void) {
  FTRACE(0x12425980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12425980 push ebp */
  push32((uint32_t)(EBP));
  /* 12425981 mov ebp, esp */
  EBP = (ESP);
  /* 12425983 push ecx */
  push32((uint32_t)(ECX));
  /* 12425984 cmp dword ptr [0x12441d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12441d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242598b jne 0x12425994 */
  if (!C.zf) goto L_12425994;
  /* 1242598d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242598f jmp 0x12425c76 */
  goto L_12425c76;
L_12425994:;
  /* 12425994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425997 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1242599a cmp ecx, dword ptr [0x12441e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12441e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124259a0 jne 0x124259b4 */
  if (!C.zf) goto L_124259b4;
  /* 124259a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124259a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124259a8 cmp eax, dword ptr [0x12441e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12441e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124259ae je 0x12425b7b */
  if (C.zf) goto L_12425b7b;
L_124259b4:;
  /* 124259b4 cmp dword ptr [0x12442ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124259bb je 0x12425b35 */
  if (C.zf) goto L_12425b35;
  /* 124259c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124259c3 mov cx, word ptr [0x12442b68] */
  CX = (r16((uint32_t)(0x12442b68)));
  /* 124259ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124259cc jne 0x12425a29 */
  if (!C.zf) goto L_12425a29;
  /* 124259ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124259d0 mov dx, word ptr [0x12442b76] */
  DX = (r16((uint32_t)(0x12442b76)));
  /* 124259d7 push edx */
  push32((uint32_t)(EDX));
  /* 124259d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124259da mov ax, word ptr [0x12442b74] */
  AX = (r16((uint32_t)(0x12442b74)));
  /* 124259e0 push eax */
  push32((uint32_t)(EAX));
  /* 124259e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124259e3 mov cx, word ptr [0x12442b72] */
  CX = (r16((uint32_t)(0x12442b72)));
  /* 124259ea push ecx */
  push32((uint32_t)(ECX));
  /* 124259eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124259ed mov dx, word ptr [0x12442b70] */
  DX = (r16((uint32_t)(0x12442b70)));
  /* 124259f4 push edx */
  push32((uint32_t)(EDX));
  /* 124259f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124259f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124259f9 mov ax, word ptr [0x12442b6c] */
  AX = (r16((uint32_t)(0x12442b6c)));
  /* 124259ff push eax */
  push32((uint32_t)(EAX));
  /* 12425a00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425a02 mov cx, word ptr [0x12442b6e] */
  CX = (r16((uint32_t)(0x12442b6e)));
  /* 12425a09 push ecx */
  push32((uint32_t)(ECX));
  /* 12425a0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425a0c mov dx, word ptr [0x12442b6a] */
  DX = (r16((uint32_t)(0x12442b6a)));
  /* 12425a13 push edx */
  push32((uint32_t)(EDX));
  /* 12425a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425a17 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12425a1a push ecx */
  push32((uint32_t)(ECX));
  /* 12425a1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12425a1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12425a1f call 0x12425c80 */
  push32(0x12425a24u); f_12425c80();
  /* 12425a24 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425a27 jmp 0x12425a7a */
  goto L_12425a7a;
L_12425a29:;
  /* 12425a29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425a2b mov dx, word ptr [0x12442b76] */
  DX = (r16((uint32_t)(0x12442b76)));
  /* 12425a32 push edx */
  push32((uint32_t)(EDX));
  /* 12425a33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425a35 mov ax, word ptr [0x12442b74] */
  AX = (r16((uint32_t)(0x12442b74)));
  /* 12425a3b push eax */
  push32((uint32_t)(EAX));
  /* 12425a3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425a3e mov cx, word ptr [0x12442b72] */
  CX = (r16((uint32_t)(0x12442b72)));
  /* 12425a45 push ecx */
  push32((uint32_t)(ECX));
  /* 12425a46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425a48 mov dx, word ptr [0x12442b70] */
  DX = (r16((uint32_t)(0x12442b70)));
  /* 12425a4f push edx */
  push32((uint32_t)(EDX));
  /* 12425a50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425a52 mov ax, word ptr [0x12442b6e] */
  AX = (r16((uint32_t)(0x12442b6e)));
  /* 12425a58 push eax */
  push32((uint32_t)(EAX));
  /* 12425a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12425a5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425a5f mov cx, word ptr [0x12442b6a] */
  CX = (r16((uint32_t)(0x12442b6a)));
  /* 12425a66 push ecx */
  push32((uint32_t)(ECX));
  /* 12425a67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425a6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12425a6d push eax */
  push32((uint32_t)(EAX));
  /* 12425a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12425a70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12425a72 call 0x12425c80 */
  push32(0x12425a77u); f_12425c80();
  /* 12425a77 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12425a7a:;
  /* 12425a7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425a7c mov cx, word ptr [0x12442b14] */
  CX = (r16((uint32_t)(0x12442b14)));
  /* 12425a83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12425a85 jne 0x12425ae2 */
  if (!C.zf) goto L_12425ae2;
  /* 12425a87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425a89 mov dx, word ptr [0x12442b22] */
  DX = (r16((uint32_t)(0x12442b22)));
  /* 12425a90 push edx */
  push32((uint32_t)(EDX));
  /* 12425a91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425a93 mov ax, word ptr [0x12442b20] */
  AX = (r16((uint32_t)(0x12442b20)));
  /* 12425a99 push eax */
  push32((uint32_t)(EAX));
  /* 12425a9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425a9c mov cx, word ptr [0x12442b1e] */
  CX = (r16((uint32_t)(0x12442b1e)));
  /* 12425aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12425aa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425aa6 mov dx, word ptr [0x12442b1c] */
  DX = (r16((uint32_t)(0x12442b1c)));
  /* 12425aad push edx */
  push32((uint32_t)(EDX));
  /* 12425aae push 0 */
  push32((uint32_t)(0x0u));
  /* 12425ab0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425ab2 mov ax, word ptr [0x12442b18] */
  AX = (r16((uint32_t)(0x12442b18)));
  /* 12425ab8 push eax */
  push32((uint32_t)(EAX));
  /* 12425ab9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425abb mov cx, word ptr [0x12442b1a] */
  CX = (r16((uint32_t)(0x12442b1a)));
  /* 12425ac2 push ecx */
  push32((uint32_t)(ECX));
  /* 12425ac3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425ac5 mov dx, word ptr [0x12442b16] */
  DX = (r16((uint32_t)(0x12442b16)));
  /* 12425acc push edx */
  push32((uint32_t)(EDX));
  /* 12425acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425ad0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12425ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 12425ad4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12425ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425ad8 call 0x12425c80 */
  push32(0x12425addu); f_12425c80();
  /* 12425add add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425ae0 jmp 0x12425b33 */
  goto L_12425b33;
L_12425ae2:;
  /* 12425ae2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425ae4 mov dx, word ptr [0x12442b22] */
  DX = (r16((uint32_t)(0x12442b22)));
  /* 12425aeb push edx */
  push32((uint32_t)(EDX));
  /* 12425aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425aee mov ax, word ptr [0x12442b20] */
  AX = (r16((uint32_t)(0x12442b20)));
  /* 12425af4 push eax */
  push32((uint32_t)(EAX));
  /* 12425af5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425af7 mov cx, word ptr [0x12442b1e] */
  CX = (r16((uint32_t)(0x12442b1e)));
  /* 12425afe push ecx */
  push32((uint32_t)(ECX));
  /* 12425aff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12425b01 mov dx, word ptr [0x12442b1c] */
  DX = (r16((uint32_t)(0x12442b1c)));
  /* 12425b08 push edx */
  push32((uint32_t)(EDX));
  /* 12425b09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425b0b mov ax, word ptr [0x12442b1a] */
  AX = (r16((uint32_t)(0x12442b1a)));
  /* 12425b11 push eax */
  push32((uint32_t)(EAX));
  /* 12425b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12425b18 mov cx, word ptr [0x12442b16] */
  CX = (r16((uint32_t)(0x12442b16)));
  /* 12425b1f push ecx */
  push32((uint32_t)(ECX));
  /* 12425b20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425b23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12425b26 push eax */
  push32((uint32_t)(EAX));
  /* 12425b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b2b call 0x12425c80 */
  push32(0x12425b30u); f_12425c80();
  /* 12425b30 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12425b33:;
  /* 12425b33 jmp 0x12425b7b */
  goto L_12425b7b;
L_12425b35:;
  /* 12425b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12425b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12425b43 push 4 */
  push32((uint32_t)(0x4u));
  /* 12425b45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425b48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12425b4b push edx */
  push32((uint32_t)(EDX));
  /* 12425b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12425b4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12425b50 call 0x12425c80 */
  push32(0x12425b55u); f_12425c80();
  /* 12425b55 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12425b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b64 push 5 */
  push32((uint32_t)(0x5u));
  /* 12425b66 push 0xa */
  push32((uint32_t)(0xau));
  /* 12425b68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425b6b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12425b6e push ecx */
  push32((uint32_t)(ECX));
  /* 12425b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12425b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425b73 call 0x12425c80 */
  push32(0x12425b78u); f_12425c80();
  /* 12425b78 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12425b7b:;
  /* 12425b7b mov edx, dword ptr [0x12441e2c] */
  EDX = (r32((uint32_t)(0x12441e2c)));
  /* 12425b81 cmp edx, dword ptr [0x12441e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12441e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425b87 jge 0x12425bd4 */
  if ((C.sf==C.of)) goto L_12425bd4;
  /* 12425b89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425b8c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12425b8f cmp ecx, dword ptr [0x12441e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12441e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425b95 jl 0x12425ba5 */
  if ((C.sf!=C.of)) goto L_12425ba5;
  /* 12425b97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425b9a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12425b9d cmp eax, dword ptr [0x12441e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12441e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425ba3 jle 0x12425bac */
  if ((C.zf||C.sf!=C.of)) goto L_12425bac;
L_12425ba5:;
  /* 12425ba5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425ba7 jmp 0x12425c76 */
  goto L_12425c76;
L_12425bac:;
  /* 12425bac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425baf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12425bb2 cmp edx, dword ptr [0x12441e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12441e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425bb8 jle 0x12425bd2 */
  if ((C.zf||C.sf!=C.of)) goto L_12425bd2;
  /* 12425bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425bbd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12425bc0 cmp ecx, dword ptr [0x12441e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12441e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425bc6 jge 0x12425bd2 */
  if ((C.sf==C.of)) goto L_12425bd2;
  /* 12425bc8 mov eax, 1 */
  EAX = (0x1u);
  /* 12425bcd jmp 0x12425c76 */
  goto L_12425c76;
L_12425bd2:;
  /* 12425bd2 jmp 0x12425c17 */
  goto L_12425c17;
L_12425bd4:;
  /* 12425bd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425bd7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12425bda cmp eax, dword ptr [0x12441e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12441e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425be0 jl 0x12425bf0 */
  if ((C.sf!=C.of)) goto L_12425bf0;
  /* 12425be2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425be5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12425be8 cmp edx, dword ptr [0x12441e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12441e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425bee jle 0x12425bf7 */
  if ((C.zf||C.sf!=C.of)) goto L_12425bf7;
L_12425bf0:;
  /* 12425bf0 mov eax, 1 */
  EAX = (0x1u);
  /* 12425bf5 jmp 0x12425c76 */
  goto L_12425c76;
L_12425bf7:;
  /* 12425bf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425bfa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12425bfd cmp ecx, dword ptr [0x12441e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12441e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425c03 jle 0x12425c17 */
  if ((C.zf||C.sf!=C.of)) goto L_12425c17;
  /* 12425c05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425c08 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12425c0b cmp eax, dword ptr [0x12441e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12441e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425c11 jge 0x12425c17 */
  if ((C.sf==C.of)) goto L_12425c17;
  /* 12425c13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425c15 jmp 0x12425c76 */
  goto L_12425c76;
L_12425c17:;
  /* 12425c17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425c1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12425c1d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425c20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425c23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12425c25 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425c27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425c2a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12425c2d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425c33 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425c35 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425c3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12425c3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425c41 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12425c44 cmp edx, dword ptr [0x12441e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12441e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425c4a jne 0x12425c62 */
  if (!C.zf) goto L_12425c62;
  /* 12425c4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12425c4f cmp eax, dword ptr [0x12441e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12441e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425c55 jl 0x12425c5e */
  if ((C.sf!=C.of)) goto L_12425c5e;
  /* 12425c57 mov eax, 1 */
  EAX = (0x1u);
  /* 12425c5c jmp 0x12425c76 */
  goto L_12425c76;
L_12425c5e:;
  /* 12425c5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425c60 jmp 0x12425c76 */
  goto L_12425c76;
L_12425c62:;
  /* 12425c62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12425c65 cmp ecx, dword ptr [0x12441e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12441e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425c6b jge 0x12425c74 */
  if ((C.sf==C.of)) goto L_12425c74;
  /* 12425c6d mov eax, 1 */
  EAX = (0x1u);
  /* 12425c72 jmp 0x12425c76 */
  goto L_12425c76;
L_12425c74:;
  /* 12425c74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12425c76:;
  /* 12425c76 mov esp, ebp */
  ESP = (EBP);
  /* 12425c78 pop ebp */
  EBP = (pop32());
  /* 12425c79 ret  */
  ESPCHK(0x12425980u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c80 @ 0x12425c80 (504 bytes, 145 insns) */
void f_12425c80(void) {
  FTRACE(0x12425c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12425c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12425c81 mov ebp, esp */
  EBP = (ESP);
  /* 12425c83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425c86 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425c8a jne 0x12425d5c */
  if (!C.zf) goto L_12425d5c;
  /* 12425c90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425c93 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12425c96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12425c98 jne 0x12425ca9 */
  if (!C.zf) goto L_12425ca9;
  /* 12425c9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12425c9d mov edx, dword ptr [ecx*4 + 0x12441e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12441e4c)));
  /* 12425ca4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12425ca7 jmp 0x12425cb6 */
  goto L_12425cb6;
L_12425ca9:;
  /* 12425ca9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12425cac mov ecx, dword ptr [eax*4 + 0x12441e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12441e80)));
  /* 12425cb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12425cb6:;
  /* 12425cb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12425cb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425cbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12425cbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425cc2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425cc5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425ccb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12425cce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425cd0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425cd3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425cd6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12425cd9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12425cdd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12425cde mov ecx, 7 */
  ECX = (0x7u);
  /* 12425ce3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12425ce5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12425ce8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12425ceb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425cee jge 0x12425d09 */
  if ((C.sf==C.of)) goto L_12425d09;
  /* 12425cf0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12425cf3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425cf6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12425cf9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425cfc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425cff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425d02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425d04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12425d07 jmp 0x12425d1d */
  goto L_12425d1d;
L_12425d09:;
  /* 12425d09 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12425d0c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425d0f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12425d12 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425d15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425d18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425d1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12425d1d:;
  /* 12425d1d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425d21 jne 0x12425d5a */
  if (!C.zf) goto L_12425d5a;
  /* 12425d23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425d26 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12425d29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12425d2b jne 0x12425d3c */
  if (!C.zf) goto L_12425d3c;
  /* 12425d2d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12425d30 mov eax, dword ptr [edx*4 + 0x12441e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12441e50)));
  /* 12425d37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12425d3a jmp 0x12425d49 */
  goto L_12425d49;
L_12425d3c:;
  /* 12425d3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12425d3f mov edx, dword ptr [ecx*4 + 0x12441e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12441e84)));
  /* 12425d46 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12425d49:;
  /* 12425d49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12425d4c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425d4f jle 0x12425d5a */
  if ((C.zf||C.sf!=C.of)) goto L_12425d5a;
  /* 12425d51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12425d54 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425d57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12425d5a:;
  /* 12425d5a jmp 0x12425d91 */
  goto L_12425d91;
L_12425d5c:;
  /* 12425d5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425d5f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12425d62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12425d64 jne 0x12425d75 */
  if (!C.zf) goto L_12425d75;
  /* 12425d66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12425d69 mov ecx, dword ptr [eax*4 + 0x12441e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12441e4c)));
  /* 12425d70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12425d73 jmp 0x12425d82 */
  goto L_12425d82;
L_12425d75:;
  /* 12425d75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12425d78 mov eax, dword ptr [edx*4 + 0x12441e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12441e80)));
  /* 12425d7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12425d82:;
  /* 12425d82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12425d85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12425d88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12425d8b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425d8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12425d91:;
  /* 12425d91 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425d95 jne 0x12425dd1 */
  if (!C.zf) goto L_12425dd1;
  /* 12425d97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12425d9a mov dword ptr [0x12441e2c], eax */
  w32((uint32_t)(0x12441e2c), (EAX));
  /* 12425d9f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12425da2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425da5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12425da8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425daa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425dad mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12425db0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425db2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425db8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12425dbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425dbd mov dword ptr [0x12441e30], ecx */
  w32((uint32_t)(0x12441e30), (ECX));
  /* 12425dc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425dc6 mov dword ptr [0x12441e28], edx */
  w32((uint32_t)(0x12441e28), (EDX));
  /* 12425dcc jmp 0x12425e74 */
  goto L_12425e74;
L_12425dd1:;
  /* 12425dd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12425dd4 mov dword ptr [0x12441e3c], eax */
  w32((uint32_t)(0x12441e3c), (EAX));
  /* 12425dd9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12425ddc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425ddf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12425de2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425de4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425de7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12425dea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425dec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425df2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12425df5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425df7 mov dword ptr [0x12441e40], ecx */
  w32((uint32_t)(0x12441e40), (ECX));
  /* 12425dfd mov edx, dword ptr [0x12441d98] */
  EDX = (r32((uint32_t)(0x12441d98)));
  /* 12425e03 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12425e09 mov eax, dword ptr [0x12441e40] */
  EAX = (r32((uint32_t)(0x12441e40)));
  /* 12425e0e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425e10 mov dword ptr [0x12441e40], eax */
  w32((uint32_t)(0x12441e40), (EAX));
  /* 12425e15 cmp dword ptr [0x12441e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12441e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425e1c jge 0x12425e41 */
  if ((C.sf==C.of)) goto L_12425e41;
  /* 12425e1e mov ecx, dword ptr [0x12441e40] */
  ECX = (r32((uint32_t)(0x12441e40)));
  /* 12425e24 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425e2a mov dword ptr [0x12441e40], ecx */
  w32((uint32_t)(0x12441e40), (ECX));
  /* 12425e30 mov edx, dword ptr [0x12441e3c] */
  EDX = (r32((uint32_t)(0x12441e3c)));
  /* 12425e36 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425e39 mov dword ptr [0x12441e3c], edx */
  w32((uint32_t)(0x12441e3c), (EDX));
  /* 12425e3f jmp 0x12425e6b */
  goto L_12425e6b;
L_12425e41:;
  /* 12425e41 cmp dword ptr [0x12441e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12441e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425e4b jl 0x12425e6b */
  if ((C.sf!=C.of)) goto L_12425e6b;
  /* 12425e4d mov eax, dword ptr [0x12441e40] */
  EAX = (r32((uint32_t)(0x12441e40)));
  /* 12425e52 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12425e57 mov dword ptr [0x12441e40], eax */
  w32((uint32_t)(0x12441e40), (EAX));
  /* 12425e5c mov ecx, dword ptr [0x12441e3c] */
  ECX = (r32((uint32_t)(0x12441e3c)));
  /* 12425e62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425e65 mov dword ptr [0x12441e3c], ecx */
  w32((uint32_t)(0x12441e3c), (ECX));
L_12425e6b:;
  /* 12425e6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425e6e mov dword ptr [0x12441e38], edx */
  w32((uint32_t)(0x12441e38), (EDX));
L_12425e74:;
  /* 12425e74 mov esp, ebp */
  ESP = (EBP);
  /* 12425e76 pop ebp */
  EBP = (pop32());
  /* 12425e77 ret  */
  ESPCHK(0x12425c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e80 @ 0x12425e80 (382 bytes, 135 insns) */
void f_12425e80(void) {
  FTRACE(0x12425e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12425e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12425e81 mov ebp, esp */
  EBP = (ESP);
  /* 12425e83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12425e85 push 0x1243ef10 */
  push32((uint32_t)(0x1243ef10u));
  /* 12425e8a push 0x1241fb48 */
  push32((uint32_t)(0x1241fb48u));
  /* 12425e8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12425e95 push eax */
  push32((uint32_t)(EAX));
  /* 12425e96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12425e9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12425ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 12425ea1 push esi */
  push32((uint32_t)(ESI));
  /* 12425ea2 push edi */
  push32((uint32_t)(EDI));
  /* 12425ea3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12425ea6 cmp dword ptr [0x12442b84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425ead jne 0x12425ef2 */
  if (!C.zf) goto L_12425ef2;
  /* 12425eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 12425eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12425eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425eb7 call dword ptr [0x124452c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452c0))), 0x12425ebdu);
  /* 12425ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12425ebf je 0x12425ecd */
  if (C.zf) goto L_12425ecd;
  /* 12425ec1 mov dword ptr [0x12442b84], 1 */
  w32((uint32_t)(0x12442b84), (0x1u));
  /* 12425ecb jmp 0x12425ef2 */
  goto L_12425ef2;
L_12425ecd:;
  /* 12425ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 12425ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 12425ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12425ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425ed5 call dword ptr [0x124452d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d8))), 0x12425edbu);
  /* 12425edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12425edd je 0x12425eeb */
  if (C.zf) goto L_12425eeb;
  /* 12425edf mov dword ptr [0x12442b84], 2 */
  w32((uint32_t)(0x12442b84), (0x2u));
  /* 12425ee9 jmp 0x12425ef2 */
  goto L_12425ef2;
L_12425eeb:;
  /* 12425eeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425eed jmp 0x12426001 */
  goto L_12426001;
L_12425ef2:;
  /* 12425ef2 cmp dword ptr [0x12442b84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442b84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425ef9 jne 0x12425f16 */
  if (!C.zf) goto L_12425f16;
  /* 12425efb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12425efe push eax */
  push32((uint32_t)(EAX));
  /* 12425eff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425f02 push ecx */
  push32((uint32_t)(ECX));
  /* 12425f03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12425f06 push edx */
  push32((uint32_t)(EDX));
  /* 12425f07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425f0a push eax */
  push32((uint32_t)(EAX));
  /* 12425f0b call dword ptr [0x124452c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452c0))), 0x12425f11u);
  /* 12425f11 jmp 0x12426001 */
  goto L_12426001;
L_12425f16:;
  /* 12425f16 cmp dword ptr [0x12442b84], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12442b84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425f1d jne 0x12425fff */
  if (!C.zf) goto L_12425fff;
  /* 12425f23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425f27 jne 0x12425f32 */
  if (!C.zf) goto L_12425f32;
  /* 12425f29 mov ecx, dword ptr [0x12442a38] */
  ECX = (r32((uint32_t)(0x12442a38)));
  /* 12425f2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12425f32:;
  /* 12425f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425f36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12425f39 push edx */
  push32((uint32_t)(EDX));
  /* 12425f3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425f3d push eax */
  push32((uint32_t)(EAX));
  /* 12425f3e call dword ptr [0x124452d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d8))), 0x12425f44u);
  /* 12425f44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12425f47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425f4b jne 0x12425f54 */
  if (!C.zf) goto L_12425f54;
  /* 12425f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425f4f jmp 0x12426001 */
  goto L_12426001;
L_12425f54:;
  /* 12425f54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12425f5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12425f5e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12425f61 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12425f63 call 0x12419be0 */
  push32(0x12425f68u); f_12419be0();
  /* 12425f68 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12425f6b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12425f6e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12425f71 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12425f74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12425f7b jmp 0x12425f94 */
  goto L_12425f94;
  /* 12425f7d mov eax, 1 */
  EAX = (0x1u);
  /* 12425f82 ret  */
  ESPCHK(0x12425e80u, _esp0);
  ESP += 4; return;
  /* 12425f83 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12425f86 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12425f8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12425f94:;
  /* 12425f94 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425f98 jne 0x12425f9e */
  if (!C.zf) goto L_12425f9e;
  /* 12425f9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425f9c jmp 0x12426001 */
  goto L_12426001;
L_12425f9e:;
  /* 12425f9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12425fa1 push edx */
  push32((uint32_t)(EDX));
  /* 12425fa2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12425fa5 push eax */
  push32((uint32_t)(EAX));
  /* 12425fa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12425fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 12425faa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12425fad push edx */
  push32((uint32_t)(EDX));
  /* 12425fae call dword ptr [0x124452d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d8))), 0x12425fb4u);
  /* 12425fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12425fb6 jne 0x12425fbc */
  if (!C.zf) goto L_12425fbc;
  /* 12425fb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12425fba jmp 0x12426001 */
  goto L_12426001;
L_12425fbc:;
  /* 12425fbc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12425fc0 jne 0x12425fdd */
  if (!C.zf) goto L_12425fdd;
  /* 12425fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12425fc6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12425fc8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12425fcb push eax */
  push32((uint32_t)(EAX));
  /* 12425fcc push 1 */
  push32((uint32_t)(0x1u));
  /* 12425fce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12425fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12425fd2 call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x12425fd8u);
  /* 12425fd8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12425fdb jmp 0x12425ffa */
  goto L_12425ffa;
L_12425fdd:;
  /* 12425fdd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12425fe0 push edx */
  push32((uint32_t)(EDX));
  /* 12425fe1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12425fe4 push eax */
  push32((uint32_t)(EAX));
  /* 12425fe5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12425fe7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12425fea push ecx */
  push32((uint32_t)(ECX));
  /* 12425feb push 1 */
  push32((uint32_t)(0x1u));
  /* 12425fed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12425ff0 push edx */
  push32((uint32_t)(EDX));
  /* 12425ff1 call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x12425ff7u);
  /* 12425ff7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12425ffa:;
  /* 12425ffa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12425ffd jmp 0x12426001 */
  goto L_12426001;
L_12425fff:;
  /* 12425fff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12426001:;
  /* 12426001 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12426004 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12426007 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1242600e pop edi */
  EDI = (pop32());
  /* 1242600f pop esi */
  ESI = (pop32());
  /* 12426010 pop ebx */
  EBX = (pop32());
  /* 12426011 mov esp, ebp */
  ESP = (EBP);
  /* 12426013 pop ebp */
  EBP = (pop32());
  /* 12426014 ret  */
  ESPCHK(0x12425e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10016020 @ 0x12426020 (398 bytes, 140 insns) */
void f_12426020(void) {
  FTRACE(0x12426020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12426020 push ebp */
  push32((uint32_t)(EBP));
  /* 12426021 mov ebp, esp */
  EBP = (ESP);
  /* 12426023 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12426025 push 0x1243ef20 */
  push32((uint32_t)(0x1243ef20u));
  /* 1242602a push 0x1241fb48 */
  push32((uint32_t)(0x1241fb48u));
  /* 1242602f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12426035 push eax */
  push32((uint32_t)(EAX));
  /* 12426036 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1242603d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426040 push ebx */
  push32((uint32_t)(EBX));
  /* 12426041 push esi */
  push32((uint32_t)(ESI));
  /* 12426042 push edi */
  push32((uint32_t)(EDI));
  /* 12426043 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12426046 cmp dword ptr [0x12442b88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242604d jne 0x12426092 */
  if (!C.zf) goto L_12426092;
  /* 1242604f push 0 */
  push32((uint32_t)(0x0u));
  /* 12426051 push 0 */
  push32((uint32_t)(0x0u));
  /* 12426053 push 1 */
  push32((uint32_t)(0x1u));
  /* 12426055 push 0 */
  push32((uint32_t)(0x0u));
  /* 12426057 call dword ptr [0x124452c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452c0))), 0x1242605du);
  /* 1242605d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1242605f je 0x1242606d */
  if (C.zf) goto L_1242606d;
  /* 12426061 mov dword ptr [0x12442b88], 1 */
  w32((uint32_t)(0x12442b88), (0x1u));
  /* 1242606b jmp 0x12426092 */
  goto L_12426092;
L_1242606d:;
  /* 1242606d push 0 */
  push32((uint32_t)(0x0u));
  /* 1242606f push 0 */
  push32((uint32_t)(0x0u));
  /* 12426071 push 1 */
  push32((uint32_t)(0x1u));
  /* 12426073 push 0 */
  push32((uint32_t)(0x0u));
  /* 12426075 call dword ptr [0x124452d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d8))), 0x1242607bu);
  /* 1242607b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1242607d je 0x1242608b */
  if (C.zf) goto L_1242608b;
  /* 1242607f mov dword ptr [0x12442b88], 2 */
  w32((uint32_t)(0x12442b88), (0x2u));
  /* 12426089 jmp 0x12426092 */
  goto L_12426092;
L_1242608b:;
  /* 1242608b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242608d jmp 0x124261b1 */
  goto L_124261b1;
L_12426092:;
  /* 12426092 cmp dword ptr [0x12442b88], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12442b88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426099 jne 0x124260b6 */
  if (!C.zf) goto L_124260b6;
  /* 1242609b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242609e push eax */
  push32((uint32_t)(EAX));
  /* 1242609f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124260a2 push ecx */
  push32((uint32_t)(ECX));
  /* 124260a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124260a6 push edx */
  push32((uint32_t)(EDX));
  /* 124260a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124260aa push eax */
  push32((uint32_t)(EAX));
  /* 124260ab call dword ptr [0x124452d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d8))), 0x124260b1u);
  /* 124260b1 jmp 0x124261b1 */
  goto L_124261b1;
L_124260b6:;
  /* 124260b6 cmp dword ptr [0x12442b88], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442b88))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124260bd jne 0x124261af */
  if (!C.zf) goto L_124261af;
  /* 124260c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124260c7 jne 0x124260d2 */
  if (!C.zf) goto L_124260d2;
  /* 124260c9 mov ecx, dword ptr [0x12442a38] */
  ECX = (r32((uint32_t)(0x12442a38)));
  /* 124260cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_124260d2:;
  /* 124260d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124260d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124260d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124260d9 push edx */
  push32((uint32_t)(EDX));
  /* 124260da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124260dd push eax */
  push32((uint32_t)(EAX));
  /* 124260de call dword ptr [0x124452c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452c0))), 0x124260e4u);
  /* 124260e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124260e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124260eb jne 0x124260f4 */
  if (!C.zf) goto L_124260f4;
  /* 124260ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124260ef jmp 0x124261b1 */
  goto L_124261b1;
L_124260f4:;
  /* 124260f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124260fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124260fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12426100 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426103 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12426105 call 0x12419be0 */
  push32(0x1242610au); f_12419be0();
  /* 1242610a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1242610d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12426110 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12426113 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12426116 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1242611d jmp 0x12426136 */
  goto L_12426136;
  /* 1242611f mov eax, 1 */
  EAX = (0x1u);
  /* 12426124 ret  */
  ESPCHK(0x12426020u, _esp0);
  ESP += 4; return;
  /* 12426125 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12426128 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1242612f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12426136:;
  /* 12426136 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242613a jne 0x12426140 */
  if (!C.zf) goto L_12426140;
  /* 1242613c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242613e jmp 0x124261b1 */
  goto L_124261b1;
L_12426140:;
  /* 12426140 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12426143 push edx */
  push32((uint32_t)(EDX));
  /* 12426144 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12426147 push eax */
  push32((uint32_t)(EAX));
  /* 12426148 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242614b push ecx */
  push32((uint32_t)(ECX));
  /* 1242614c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242614f push edx */
  push32((uint32_t)(EDX));
  /* 12426150 call dword ptr [0x124452c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452c0))), 0x12426156u);
  /* 12426156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12426158 jne 0x1242615e */
  if (!C.zf) goto L_1242615e;
  /* 1242615a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242615c jmp 0x124261b1 */
  goto L_124261b1;
L_1242615e:;
  /* 1242615e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426162 jne 0x12426186 */
  if (!C.zf) goto L_12426186;
  /* 12426164 push 0 */
  push32((uint32_t)(0x0u));
  /* 12426166 push 0 */
  push32((uint32_t)(0x0u));
  /* 12426168 push 0 */
  push32((uint32_t)(0x0u));
  /* 1242616a push 0 */
  push32((uint32_t)(0x0u));
  /* 1242616c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1242616e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12426171 push eax */
  push32((uint32_t)(EAX));
  /* 12426172 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12426177 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1242617a push ecx */
  push32((uint32_t)(ECX));
  /* 1242617b call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x12426181u);
  /* 12426181 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12426184 jmp 0x124261aa */
  goto L_124261aa;
L_12426186:;
  /* 12426186 push 0 */
  push32((uint32_t)(0x0u));
  /* 12426188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1242618a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242618d push edx */
  push32((uint32_t)(EDX));
  /* 1242618e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12426191 push eax */
  push32((uint32_t)(EAX));
  /* 12426192 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12426194 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12426197 push ecx */
  push32((uint32_t)(ECX));
  /* 12426198 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1242619d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124261a0 push edx */
  push32((uint32_t)(EDX));
  /* 124261a1 call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x124261a7u);
  /* 124261a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_124261aa:;
  /* 124261aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124261ad jmp 0x124261b1 */
  goto L_124261b1;
L_124261af:;
  /* 124261af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124261b1:;
  /* 124261b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 124261b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124261b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124261be pop edi */
  EDI = (pop32());
  /* 124261bf pop esi */
  ESI = (pop32());
  /* 124261c0 pop ebx */
  EBX = (pop32());
  /* 124261c1 mov esp, ebp */
  ESP = (EBP);
  /* 124261c3 pop ebp */
  EBP = (pop32());
  /* 124261c4 ret  */
  ESPCHK(0x12426020u, _esp0);
  ESP += 4; return;
}

/* FUN_100161d0 @ 0x124261d0 (11 bytes, 6 insns) */
void f_124261d0(void) {
  FTRACE(0x124261d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124261d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124261d1 mov ebp, esp */
  EBP = (ESP);
  /* 124261d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124261d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124261d9 pop ebp */
  EBP = (pop32());
  /* 124261da ret  */
  ESPCHK(0x124261d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100161e0 @ 0x124261e0 (147 bytes, 43 insns) */
void f_124261e0(void) {
  FTRACE(0x124261e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124261e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124261e1 mov ebp, esp */
  EBP = (ESP);
  /* 124261e3 push ecx */
  push32((uint32_t)(ECX));
  /* 124261e4 cmp dword ptr [0x12442a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124261eb jne 0x12426207 */
  if (!C.zf) goto L_12426207;
  /* 124261ed cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124261f1 jl 0x12426202 */
  if ((C.sf!=C.of)) goto L_12426202;
  /* 124261f3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124261f7 jg 0x12426202 */
  if ((!C.zf&&C.sf==C.of)) goto L_12426202;
  /* 124261f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124261fc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124261ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12426202:;
  /* 12426202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426205 jmp 0x1242626f */
  goto L_1242626f;
L_12426207:;
  /* 12426207 push 0x12442bb4 */
  push32((uint32_t)(0x12442bb4u));
  /* 1242620c call dword ptr [0x12445370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445370))), 0x12426212u);
  /* 12426212 cmp dword ptr [0x12442ba4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442ba4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426219 je 0x12426239 */
  if (C.zf) goto L_12426239;
  /* 1242621b push 0x12442bb4 */
  push32((uint32_t)(0x12442bb4u));
  /* 12426220 call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x12426226u);
  /* 12426226 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12426228 call 0x1241a440 */
  push32(0x1242622du); f_1241a440();
  /* 1242622d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426230 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12426237 jmp 0x12426240 */
  goto L_12426240;
L_12426239:;
  /* 12426239 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12426240:;
  /* 12426240 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426243 push ecx */
  push32((uint32_t)(ECX));
  /* 12426244 call 0x12426280 */
  push32(0x12426249u); f_12426280();
  /* 12426249 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242624c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1242624f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426253 je 0x12426261 */
  if (C.zf) goto L_12426261;
  /* 12426255 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12426257 call 0x1241a4e0 */
  push32(0x1242625cu); f_1241a4e0();
  /* 1242625c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242625f jmp 0x1242626c */
  goto L_1242626c;
L_12426261:;
  /* 12426261 push 0x12442bb4 */
  push32((uint32_t)(0x12442bb4u));
  /* 12426266 call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x1242626cu);
L_1242626c:;
  /* 1242626c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1242626f:;
  /* 1242626f mov esp, ebp */
  ESP = (EBP);
  /* 12426271 pop ebp */
  EBP = (pop32());
  /* 12426272 ret  */
  ESPCHK(0x124261e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016280 @ 0x12426280 (299 bytes, 91 insns) */
void f_12426280(void) {
  FTRACE(0x12426280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12426280 push ebp */
  push32((uint32_t)(EBP));
  /* 12426281 mov ebp, esp */
  EBP = (ESP);
  /* 12426283 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426286 cmp dword ptr [0x12442a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242628d jne 0x124262ac */
  if (!C.zf) goto L_124262ac;
  /* 1242628f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426293 jl 0x124262a4 */
  if ((C.sf!=C.of)) goto L_124262a4;
  /* 12426295 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426299 jg 0x124262a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_124262a4;
  /* 1242629b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242629e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124262a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124262a4:;
  /* 124262a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124262a7 jmp 0x124263a7 */
  goto L_124263a7;
L_124262ac:;
  /* 124262ac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124262b3 jge 0x124262f3 */
  if ((C.sf==C.of)) goto L_124262f3;
  /* 124262b5 cmp dword ptr [0x12440ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12440ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124262bc jle 0x124262d1 */
  if ((C.zf||C.sf!=C.of)) goto L_124262d1;
  /* 124262be push 1 */
  push32((uint32_t)(0x1u));
  /* 124262c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124262c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124262c4 call 0x1241ca50 */
  push32(0x124262c9u); f_1241ca50();
  /* 124262c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124262cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124262cf jmp 0x124262e5 */
  goto L_124262e5;
L_124262d1:;
  /* 124262d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124262d4 mov eax, dword ptr [0x12440c98] */
  EAX = (r32((uint32_t)(0x12440c98)));
  /* 124262d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124262db mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124262df and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124262e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124262e5:;
  /* 124262e5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124262e9 jne 0x124262f3 */
  if (!C.zf) goto L_124262f3;
  /* 124262eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124262ee jmp 0x124263a7 */
  goto L_124263a7;
L_124262f3:;
  /* 124262f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124262f6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124262f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124262ff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12426305 mov eax, dword ptr [0x12440c98] */
  EAX = (r32((uint32_t)(0x12440c98)));
  /* 1242630a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1242630c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12426310 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12426316 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12426318 je 0x1242633c */
  if (C.zf) goto L_1242633c;
  /* 1242631a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242631d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12426320 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12426326 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12426329 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1242632c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1242632f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12426333 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1242633a jmp 0x1242634d */
  goto L_1242634d;
L_1242633c:;
  /* 1242633c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1242633f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12426342 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12426346 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1242634d:;
  /* 1242634d push 1 */
  push32((uint32_t)(0x1u));
  /* 1242634f push 0 */
  push32((uint32_t)(0x0u));
  /* 12426351 push 3 */
  push32((uint32_t)(0x3u));
  /* 12426353 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12426356 push edx */
  push32((uint32_t)(EDX));
  /* 12426357 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242635a push eax */
  push32((uint32_t)(EAX));
  /* 1242635b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1242635e push ecx */
  push32((uint32_t)(ECX));
  /* 1242635f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12426364 mov edx, dword ptr [0x12442a28] */
  EDX = (r32((uint32_t)(0x12442a28)));
  /* 1242636a push edx */
  push32((uint32_t)(EDX));
  /* 1242636b call 0x1241ee30 */
  push32(0x12426370u); f_1241ee30();
  /* 12426370 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426373 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12426376 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242637a jne 0x12426381 */
  if (!C.zf) goto L_12426381;
  /* 1242637c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242637f jmp 0x124263a7 */
  goto L_124263a7;
L_12426381:;
  /* 12426381 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426385 jne 0x12426391 */
  if (!C.zf) goto L_12426391;
  /* 12426387 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242638a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1242638f jmp 0x124263a7 */
  goto L_124263a7;
L_12426391:;
  /* 12426391 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426394 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426399 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1242639c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124263a2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 124263a5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_124263a7:;
  /* 124263a7 mov esp, ebp */
  ESP = (EBP);
  /* 124263a9 pop ebp */
  EBP = (pop32());
  /* 124263aa ret  */
  ESPCHK(0x12426280u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x124263b0 (52 bytes, 19 insns) */
void f_124263b0(void) {
  FTRACE(0x124263b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124263b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124263b4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 124263b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124263ba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 124263be jne 0x124263c9 */
  if (!C.zf) goto L_124263c9;
  /* 124263c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 124263c4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124263c6 ret 0x10 */
  ESPCHK(0x124263b0u, _esp0);
  ESP += 20; return;
L_124263c9:;
  /* 124263c9 push ebx */
  push32((uint32_t)(EBX));
  /* 124263ca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124263cc mov ebx, eax */
  EBX = (EAX);
  /* 124263ce mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124263d2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124263d6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 124263d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 124263dc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 124263de add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124263e0 pop ebx */
  EBX = (pop32());
  /* 124263e1 ret 0x10 */
  ESPCHK(0x124263b0u, _esp0);
  ESP += 20; return;
}

/* FUN_100163f0 @ 0x124263f0 (46 bytes, 18 insns) */
void f_124263f0(void) {
  FTRACE(0x124263f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124263f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124263f1 mov ebp, esp */
  EBP = (ESP);
  /* 124263f3 push ecx */
  push32((uint32_t)(ECX));
  /* 124263f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 124263f6 call 0x1241a440 */
  push32(0x124263fbu); f_1241a440();
  /* 124263fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124263fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426401 push eax */
  push32((uint32_t)(EAX));
  /* 12426402 call 0x12426420 */
  push32(0x12426407u); f_12426420();
  /* 12426407 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242640a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1242640d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1242640f call 0x1241a4e0 */
  push32(0x12426414u); f_1241a4e0();
  /* 12426414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242641a mov esp, ebp */
  ESP = (EBP);
  /* 1242641c pop ebp */
  EBP = (pop32());
  /* 1242641d ret  */
  ESPCHK(0x124263f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12426420 (198 bytes, 69 insns) */
void f_12426420(void) {
  FTRACE(0x12426420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12426420 push ebp */
  push32((uint32_t)(EBP));
  /* 12426421 mov ebp, esp */
  EBP = (ESP);
  /* 12426423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426426 mov eax, dword ptr [0x12442848] */
  EAX = (r32((uint32_t)(0x12442848)));
  /* 1242642b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1242642e cmp dword ptr [0x12444340], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12444340))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426435 jne 0x1242643e */
  if (!C.zf) goto L_1242643e;
  /* 12426437 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426439 jmp 0x124264e2 */
  goto L_124264e2;
L_1242643e:;
  /* 1242643e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426442 jne 0x12426466 */
  if (!C.zf) goto L_12426466;
  /* 12426444 cmp dword ptr [0x12442850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242644b je 0x12426466 */
  if (C.zf) goto L_12426466;
  /* 1242644d call 0x12426540 */
  push32(0x12426452u); f_12426540();
  /* 12426452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12426454 je 0x1242645d */
  if (C.zf) goto L_1242645d;
  /* 12426456 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426458 jmp 0x124264e2 */
  goto L_124264e2;
L_1242645d:;
  /* 1242645d mov ecx, dword ptr [0x12442848] */
  ECX = (r32((uint32_t)(0x12442848)));
  /* 12426463 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12426466:;
  /* 12426466 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242646a je 0x124264e0 */
  if (C.zf) goto L_124264e0;
  /* 1242646c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426470 je 0x124264e0 */
  if (C.zf) goto L_124264e0;
  /* 12426472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426475 push edx */
  push32((uint32_t)(EDX));
  /* 12426476 call 0x12419870 */
  push32(0x1242647bu); f_12419870();
  /* 1242647b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242647e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12426481:;
  /* 12426481 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426484 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426487 je 0x124264e0 */
  if (C.zf) goto L_124264e0;
  /* 12426489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242648c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1242648e push edx */
  push32((uint32_t)(EDX));
  /* 1242648f call 0x12419870 */
  push32(0x12426494u); f_12419870();
  /* 12426494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426497 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242649a jbe 0x124264d5 */
  if ((C.cf||C.zf)) goto L_124264d5;
  /* 1242649c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242649f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124264a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124264a4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 124264a8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124264ab jne 0x124264d5 */
  if (!C.zf) goto L_124264d5;
  /* 124264ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124264b0 push ecx */
  push32((uint32_t)(ECX));
  /* 124264b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124264b4 push edx */
  push32((uint32_t)(EDX));
  /* 124264b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124264b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124264ba push ecx */
  push32((uint32_t)(ECX));
  /* 124264bb call 0x124264f0 */
  push32(0x124264c0u); f_124264f0();
  /* 124264c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124264c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124264c5 jne 0x124264d5 */
  if (!C.zf) goto L_124264d5;
  /* 124264c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124264ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124264cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124264cf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 124264d3 jmp 0x124264e2 */
  goto L_124264e2;
L_124264d5:;
  /* 124264d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124264d8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124264db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124264de jmp 0x12426481 */
  goto L_12426481;
L_124264e0:;
  /* 124264e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124264e2:;
  /* 124264e2 mov esp, ebp */
  ESP = (EBP);
  /* 124264e4 pop ebp */
  EBP = (pop32());
  /* 124264e5 ret  */
  ESPCHK(0x12426420u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x124264f0 (79 bytes, 32 insns) */
void f_124264f0(void) {
  FTRACE(0x124264f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124264f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124264f1 mov ebp, esp */
  EBP = (ESP);
  /* 124264f3 push ecx */
  push32((uint32_t)(ECX));
  /* 124264f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124264f8 jne 0x124264fe */
  if (!C.zf) goto L_124264fe;
  /* 124264fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124264fc jmp 0x1242653b */
  goto L_1242653b;
L_124264fe:;
  /* 124264fe mov eax, dword ptr [0x12443f04] */
  EAX = (r32((uint32_t)(0x12443f04)));
  /* 12426503 push eax */
  push32((uint32_t)(EAX));
  /* 12426504 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12426507 push ecx */
  push32((uint32_t)(ECX));
  /* 12426508 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242650b push edx */
  push32((uint32_t)(EDX));
  /* 1242650c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1242650f push eax */
  push32((uint32_t)(EAX));
  /* 12426510 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426513 push ecx */
  push32((uint32_t)(ECX));
  /* 12426514 push 1 */
  push32((uint32_t)(0x1u));
  /* 12426516 mov edx, dword ptr [0x124441a4] */
  EDX = (r32((uint32_t)(0x124441a4)));
  /* 1242651c push edx */
  push32((uint32_t)(EDX));
  /* 1242651d call 0x124265f0 */
  push32(0x12426522u); f_124265f0();
  /* 12426522 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426525 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12426528 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242652c jne 0x12426535 */
  if (!C.zf) goto L_12426535;
  /* 1242652e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12426533 jmp 0x1242653b */
  goto L_1242653b;
L_12426535:;
  /* 12426535 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426538 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1242653b:;
  /* 1242653b mov esp, ebp */
  ESP = (EBP);
  /* 1242653d pop ebp */
  EBP = (pop32());
  /* 1242653e ret  */
  ESPCHK(0x124264f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016540 @ 0x12426540 (174 bytes, 66 insns) */
void f_12426540(void) {
  FTRACE(0x12426540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12426540 push ebp */
  push32((uint32_t)(EBP));
  /* 12426541 mov ebp, esp */
  EBP = (ESP);
  /* 12426543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426546 mov eax, dword ptr [0x12442850] */
  EAX = (r32((uint32_t)(0x12442850)));
  /* 1242654b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1242654e:;
  /* 1242654e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426551 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426554 je 0x124265e8 */
  if (C.zf) goto L_124265e8;
  /* 1242655a push 0 */
  push32((uint32_t)(0x0u));
  /* 1242655c push 0 */
  push32((uint32_t)(0x0u));
  /* 1242655e push 0 */
  push32((uint32_t)(0x0u));
  /* 12426560 push 0 */
  push32((uint32_t)(0x0u));
  /* 12426562 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12426564 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426567 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12426569 push eax */
  push32((uint32_t)(EAX));
  /* 1242656a push 0 */
  push32((uint32_t)(0x0u));
  /* 1242656c push 1 */
  push32((uint32_t)(0x1u));
  /* 1242656e call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x12426574u);
  /* 12426574 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12426577 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242657b jne 0x12426582 */
  if (!C.zf) goto L_12426582;
  /* 1242657d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426580 jmp 0x124265ea */
  goto L_124265ea;
L_12426582:;
  /* 12426582 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12426584 push 0x1243ef2c */
  push32((uint32_t)(0x1243ef2cu));
  /* 12426589 push 2 */
  push32((uint32_t)(0x2u));
  /* 1242658b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242658e push ecx */
  push32((uint32_t)(ECX));
  /* 1242658f call 0x12416a40 */
  push32(0x12426594u); f_12416a40();
  /* 12426594 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426597 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1242659a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242659e jne 0x124265a5 */
  if (!C.zf) goto L_124265a5;
  /* 124265a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124265a3 jmp 0x124265ea */
  goto L_124265ea;
L_124265a5:;
  /* 124265a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124265a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124265a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124265ac push edx */
  push32((uint32_t)(EDX));
  /* 124265ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124265b0 push eax */
  push32((uint32_t)(EAX));
  /* 124265b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124265b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124265b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124265b8 push edx */
  push32((uint32_t)(EDX));
  /* 124265b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124265bb push 1 */
  push32((uint32_t)(0x1u));
  /* 124265bd call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x124265c3u);
  /* 124265c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124265c5 jne 0x124265cc */
  if (!C.zf) goto L_124265cc;
  /* 124265c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124265ca jmp 0x124265ea */
  goto L_124265ea;
L_124265cc:;
  /* 124265cc push 0 */
  push32((uint32_t)(0x0u));
  /* 124265ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124265d1 push eax */
  push32((uint32_t)(EAX));
  /* 124265d2 call 0x12426a40 */
  push32(0x124265d7u); f_12426a40();
  /* 124265d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124265da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124265dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124265e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124265e3 jmp 0x1242654e */
  goto L_1242654e;
L_124265e8:;
  /* 124265e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124265ea:;
  /* 124265ea mov esp, ebp */
  ESP = (EBP);
  /* 124265ec pop ebp */
  EBP = (pop32());
  /* 124265ed ret  */
  ESPCHK(0x12426540u, _esp0);
  ESP += 4; return;
}

/* FUN_100165f0 @ 0x124265f0 (970 bytes, 340 insns) */
void f_124265f0(void) {
  FTRACE(0x124265f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124265f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124265f1 mov ebp, esp */
  EBP = (ESP);
  /* 124265f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124265f5 push 0x1243ef80 */
  push32((uint32_t)(0x1243ef80u));
  /* 124265fa push 0x1241fb48 */
  push32((uint32_t)(0x1241fb48u));
  /* 124265ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12426605 push eax */
  push32((uint32_t)(EAX));
  /* 12426606 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1242660d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426610 push ebx */
  push32((uint32_t)(EBX));
  /* 12426611 push esi */
  push32((uint32_t)(ESI));
  /* 12426612 push edi */
  push32((uint32_t)(EDI));
  /* 12426613 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12426616 cmp dword ptr [0x12442b8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442b8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242661d jne 0x12426676 */
  if (!C.zf) goto L_12426676;
  /* 1242661f push 1 */
  push32((uint32_t)(0x1u));
  /* 12426621 push 0x1243e5d8 */
  push32((uint32_t)(0x1243e5d8u));
  /* 12426626 push 1 */
  push32((uint32_t)(0x1u));
  /* 12426628 push 0x1243e5d8 */
  push32((uint32_t)(0x1243e5d8u));
  /* 1242662d push 0 */
  push32((uint32_t)(0x0u));
  /* 1242662f push 0 */
  push32((uint32_t)(0x0u));
  /* 12426631 call dword ptr [0x124452b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452b8))), 0x12426637u);
  /* 12426637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12426639 je 0x12426647 */
  if (C.zf) goto L_12426647;
  /* 1242663b mov dword ptr [0x12442b8c], 1 */
  w32((uint32_t)(0x12442b8c), (0x1u));
  /* 12426645 jmp 0x12426676 */
  goto L_12426676;
L_12426647:;
  /* 12426647 push 1 */
  push32((uint32_t)(0x1u));
  /* 12426649 push 0x1243e5d4 */
  push32((uint32_t)(0x1243e5d4u));
  /* 1242664e push 1 */
  push32((uint32_t)(0x1u));
  /* 12426650 push 0x1243e5d4 */
  push32((uint32_t)(0x1243e5d4u));
  /* 12426655 push 0 */
  push32((uint32_t)(0x0u));
  /* 12426657 push 0 */
  push32((uint32_t)(0x0u));
  /* 12426659 call dword ptr [0x124452bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452bc))), 0x1242665fu);
  /* 1242665f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12426661 je 0x1242666f */
  if (C.zf) goto L_1242666f;
  /* 12426663 mov dword ptr [0x12442b8c], 2 */
  w32((uint32_t)(0x12442b8c), (0x2u));
  /* 1242666d jmp 0x12426676 */
  goto L_12426676;
L_1242666f:;
  /* 1242666f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426671 jmp 0x124269d4 */
  goto L_124269d4;
L_12426676:;
  /* 12426676 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242667a jle 0x1242668f */
  if ((C.zf||C.sf!=C.of)) goto L_1242668f;
  /* 1242667c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1242667f push eax */
  push32((uint32_t)(EAX));
  /* 12426680 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12426683 push ecx */
  push32((uint32_t)(ECX));
  /* 12426684 call 0x124269f0 */
  push32(0x12426689u); f_124269f0();
  /* 12426689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242668c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1242668f:;
  /* 1242668f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426693 jle 0x124266a8 */
  if ((C.zf||C.sf!=C.of)) goto L_124266a8;
  /* 12426695 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12426698 push edx */
  push32((uint32_t)(EDX));
  /* 12426699 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1242669c push eax */
  push32((uint32_t)(EAX));
  /* 1242669d call 0x124269f0 */
  push32(0x124266a2u); f_124269f0();
  /* 124266a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124266a5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_124266a8:;
  /* 124266a8 cmp dword ptr [0x12442b8c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12442b8c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124266af jne 0x124266d4 */
  if (!C.zf) goto L_124266d4;
  /* 124266b1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 124266b4 push ecx */
  push32((uint32_t)(ECX));
  /* 124266b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124266b8 push edx */
  push32((uint32_t)(EDX));
  /* 124266b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124266bc push eax */
  push32((uint32_t)(EAX));
  /* 124266bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124266c0 push ecx */
  push32((uint32_t)(ECX));
  /* 124266c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124266c4 push edx */
  push32((uint32_t)(EDX));
  /* 124266c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124266c8 push eax */
  push32((uint32_t)(EAX));
  /* 124266c9 call dword ptr [0x124452bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452bc))), 0x124266cfu);
  /* 124266cf jmp 0x124269d4 */
  goto L_124269d4;
L_124266d4:;
  /* 124266d4 cmp dword ptr [0x12442b8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442b8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124266db jne 0x124269d2 */
  if (!C.zf) goto L_124269d2;
  /* 124266e1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124266e5 jne 0x124266f0 */
  if (!C.zf) goto L_124266f0;
  /* 124266e7 mov ecx, dword ptr [0x12442a38] */
  ECX = (r32((uint32_t)(0x12442a38)));
  /* 124266ed mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_124266f0:;
  /* 124266f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124266f4 je 0x12426700 */
  if (C.zf) goto L_12426700;
  /* 124266f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124266fa jne 0x1242687c */
  if (!C.zf) goto L_1242687c;
L_12426700:;
  /* 12426700 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12426703 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426706 jne 0x12426712 */
  if (!C.zf) goto L_12426712;
  /* 12426708 mov eax, 2 */
  EAX = (0x2u);
  /* 1242670d jmp 0x124269d4 */
  goto L_124269d4;
L_12426712:;
  /* 12426712 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426716 jle 0x12426722 */
  if ((C.zf||C.sf!=C.of)) goto L_12426722;
  /* 12426718 mov eax, 1 */
  EAX = (0x1u);
  /* 1242671d jmp 0x124269d4 */
  goto L_124269d4;
L_12426722:;
  /* 12426722 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426726 jle 0x12426732 */
  if ((C.zf||C.sf!=C.of)) goto L_12426732;
  /* 12426728 mov eax, 3 */
  EAX = (0x3u);
  /* 1242672d jmp 0x124269d4 */
  goto L_124269d4;
L_12426732:;
  /* 12426732 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12426735 push eax */
  push32((uint32_t)(EAX));
  /* 12426736 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12426739 push ecx */
  push32((uint32_t)(ECX));
  /* 1242673a call dword ptr [0x12445314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445314))), 0x12426740u);
  /* 12426740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12426742 jne 0x1242674b */
  if (!C.zf) goto L_1242674b;
  /* 12426744 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426746 jmp 0x124269d4 */
  goto L_124269d4;
L_1242674b:;
  /* 1242674b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242674f jne 0x12426757 */
  if (!C.zf) goto L_12426757;
  /* 12426751 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426755 je 0x12426784 */
  if (C.zf) goto L_12426784;
L_12426757:;
  /* 12426757 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242675b jne 0x12426763 */
  if (!C.zf) goto L_12426763;
  /* 1242675d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426761 je 0x12426784 */
  if (C.zf) goto L_12426784;
L_12426763:;
  /* 12426763 push 0x1243ef40 */
  push32((uint32_t)(0x1243ef40u));
  /* 12426768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1242676a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1242676f push 0x1243ef38 */
  push32((uint32_t)(0x1243ef38u));
  /* 12426774 push 2 */
  push32((uint32_t)(0x2u));
  /* 12426776 call 0x12415b00 */
  push32(0x1242677bu); f_12415b00();
  /* 1242677b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242677e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426781 jne 0x12426784 */
  if (!C.zf) goto L_12426784;
  /* 12426783 int3  */
  x86_unimpl("int3 @ 0x12426783");
L_12426784:;
  /* 12426784 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12426786 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12426788 jne 0x1242674b */
  if (!C.zf) goto L_1242674b;
  /* 1242678a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242678e jle 0x12426803 */
  if ((C.zf||C.sf!=C.of)) goto L_12426803;
  /* 12426790 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426794 jae 0x124267a0 */
  if (!C.cf) goto L_124267a0;
  /* 12426796 mov eax, 3 */
  EAX = (0x3u);
  /* 1242679b jmp 0x124269d4 */
  goto L_124269d4;
L_124267a0:;
  /* 124267a0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 124267a3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 124267a6 jmp 0x124267b1 */
  goto L_124267b1;
L_124267a8:;
  /* 124267a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124267ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124267ae mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_124267b1:;
  /* 124267b1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 124267b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124267b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124267b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124267ba je 0x124267f9 */
  if (C.zf) goto L_124267f9;
  /* 124267bc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 124267bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124267c1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 124267c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124267c6 je 0x124267f9 */
  if (C.zf) goto L_124267f9;
  /* 124267c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124267cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124267cd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124267cf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 124267d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124267d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124267d6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124267d8 jl 0x124267f7 */
  if ((C.sf!=C.of)) goto L_124267f7;
  /* 124267da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124267dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124267df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 124267e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 124267e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124267e6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124267e9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124267eb jg 0x124267f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_124267f7;
  /* 124267ed mov eax, 2 */
  EAX = (0x2u);
  /* 124267f2 jmp 0x124269d4 */
  goto L_124269d4;
L_124267f7:;
  /* 124267f7 jmp 0x124267a8 */
  goto L_124267a8;
L_124267f9:;
  /* 124267f9 mov eax, 3 */
  EAX = (0x3u);
  /* 124267fe jmp 0x124269d4 */
  goto L_124269d4;
L_12426803:;
  /* 12426803 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426807 jle 0x1242687c */
  if ((C.zf||C.sf!=C.of)) goto L_1242687c;
  /* 12426809 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242680d jae 0x12426819 */
  if (!C.cf) goto L_12426819;
  /* 1242680f mov eax, 1 */
  EAX = (0x1u);
  /* 12426814 jmp 0x124269d4 */
  goto L_124269d4;
L_12426819:;
  /* 12426819 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1242681c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1242681f jmp 0x1242682a */
  goto L_1242682a;
L_12426821:;
  /* 12426821 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12426824 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426827 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1242682a:;
  /* 1242682a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1242682d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1242682f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12426831 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12426833 je 0x12426872 */
  if (C.zf) goto L_12426872;
  /* 12426835 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12426838 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1242683a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1242683d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1242683f je 0x12426872 */
  if (C.zf) goto L_12426872;
  /* 12426841 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12426844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426846 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12426848 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1242684b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1242684d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1242684f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426851 jl 0x12426870 */
  if ((C.sf!=C.of)) goto L_12426870;
  /* 12426853 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12426856 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12426858 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1242685a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1242685d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242685f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12426862 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426864 jg 0x12426870 */
  if ((!C.zf&&C.sf==C.of)) goto L_12426870;
  /* 12426866 mov eax, 2 */
  EAX = (0x2u);
  /* 1242686b jmp 0x124269d4 */
  goto L_124269d4;
L_12426870:;
  /* 12426870 jmp 0x12426821 */
  goto L_12426821;
L_12426872:;
  /* 12426872 mov eax, 1 */
  EAX = (0x1u);
  /* 12426877 jmp 0x124269d4 */
  goto L_124269d4;
L_1242687c:;
  /* 1242687c push 0 */
  push32((uint32_t)(0x0u));
  /* 1242687e push 0 */
  push32((uint32_t)(0x0u));
  /* 12426880 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12426883 push ecx */
  push32((uint32_t)(ECX));
  /* 12426884 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12426887 push edx */
  push32((uint32_t)(EDX));
  /* 12426888 push 9 */
  push32((uint32_t)(0x9u));
  /* 1242688a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1242688d push eax */
  push32((uint32_t)(EAX));
  /* 1242688e call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x12426894u);
  /* 12426894 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12426897 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242689b jne 0x124268a4 */
  if (!C.zf) goto L_124268a4;
  /* 1242689d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242689f jmp 0x124269d4 */
  goto L_124269d4;
L_124268a4:;
  /* 124268a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124268ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124268ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 124268b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124268b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 124268b5 call 0x12419be0 */
  push32(0x124268bau); f_12419be0();
  /* 124268ba mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 124268bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 124268c0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 124268c3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 124268c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124268cd jmp 0x124268e6 */
  goto L_124268e6;
  /* 124268cf mov eax, 1 */
  EAX = (0x1u);
  /* 124268d4 ret  */
  ESPCHK(0x124265f0u, _esp0);
  ESP += 4; return;
  /* 124268d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 124268d8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 124268df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124268e6:;
  /* 124268e6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124268ea jne 0x124268f3 */
  if (!C.zf) goto L_124268f3;
  /* 124268ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124268ee jmp 0x124269d4 */
  goto L_124269d4;
L_124268f3:;
  /* 124268f3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124268f6 push edx */
  push32((uint32_t)(EDX));
  /* 124268f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124268fa push eax */
  push32((uint32_t)(EAX));
  /* 124268fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124268fe push ecx */
  push32((uint32_t)(ECX));
  /* 124268ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12426902 push edx */
  push32((uint32_t)(EDX));
  /* 12426903 push 1 */
  push32((uint32_t)(0x1u));
  /* 12426905 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12426908 push eax */
  push32((uint32_t)(EAX));
  /* 12426909 call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x1242690fu);
  /* 1242690f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12426911 jne 0x1242691a */
  if (!C.zf) goto L_1242691a;
  /* 12426913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426915 jmp 0x124269d4 */
  goto L_124269d4;
L_1242691a:;
  /* 1242691a push 0 */
  push32((uint32_t)(0x0u));
  /* 1242691c push 0 */
  push32((uint32_t)(0x0u));
  /* 1242691e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12426921 push ecx */
  push32((uint32_t)(ECX));
  /* 12426922 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12426925 push edx */
  push32((uint32_t)(EDX));
  /* 12426926 push 9 */
  push32((uint32_t)(0x9u));
  /* 12426928 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1242692b push eax */
  push32((uint32_t)(EAX));
  /* 1242692c call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x12426932u);
  /* 12426932 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12426935 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426939 jne 0x12426942 */
  if (!C.zf) goto L_12426942;
  /* 1242693b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242693d jmp 0x124269d4 */
  goto L_124269d4;
L_12426942:;
  /* 12426942 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12426949 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1242694c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1242694e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426951 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12426953 call 0x12419be0 */
  push32(0x12426958u); f_12419be0();
  /* 12426958 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1242695b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1242695e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12426961 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12426964 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1242696b jmp 0x12426984 */
  goto L_12426984;
  /* 1242696d mov eax, 1 */
  EAX = (0x1u);
  /* 12426972 ret  */
  ESPCHK(0x124265f0u, _esp0);
  ESP += 4; return;
  /* 12426973 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12426976 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1242697d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12426984:;
  /* 12426984 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426988 jne 0x1242698e */
  if (!C.zf) goto L_1242698e;
  /* 1242698a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242698c jmp 0x124269d4 */
  goto L_124269d4;
L_1242698e:;
  /* 1242698e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12426991 push edx */
  push32((uint32_t)(EDX));
  /* 12426992 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12426995 push eax */
  push32((uint32_t)(EAX));
  /* 12426996 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12426999 push ecx */
  push32((uint32_t)(ECX));
  /* 1242699a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1242699d push edx */
  push32((uint32_t)(EDX));
  /* 1242699e push 1 */
  push32((uint32_t)(0x1u));
  /* 124269a0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 124269a3 push eax */
  push32((uint32_t)(EAX));
  /* 124269a4 call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x124269aau);
  /* 124269aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124269ac jne 0x124269b2 */
  if (!C.zf) goto L_124269b2;
  /* 124269ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124269b0 jmp 0x124269d4 */
  goto L_124269d4;
L_124269b2:;
  /* 124269b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124269b5 push ecx */
  push32((uint32_t)(ECX));
  /* 124269b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 124269b9 push edx */
  push32((uint32_t)(EDX));
  /* 124269ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124269bd push eax */
  push32((uint32_t)(EAX));
  /* 124269be mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124269c1 push ecx */
  push32((uint32_t)(ECX));
  /* 124269c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124269c5 push edx */
  push32((uint32_t)(EDX));
  /* 124269c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124269c9 push eax */
  push32((uint32_t)(EAX));
  /* 124269ca call dword ptr [0x124452b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452b8))), 0x124269d0u);
  /* 124269d0 jmp 0x124269d4 */
  goto L_124269d4;
L_124269d2:;
  /* 124269d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124269d4:;
  /* 124269d4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 124269d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124269da mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 124269e1 pop edi */
  EDI = (pop32());
  /* 124269e2 pop esi */
  ESI = (pop32());
  /* 124269e3 pop ebx */
  EBX = (pop32());
  /* 124269e4 mov esp, ebp */
  ESP = (EBP);
  /* 124269e6 pop ebp */
  EBP = (pop32());
  /* 124269e7 ret  */
  ESPCHK(0x124265f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100169f0 @ 0x124269f0 (80 bytes, 32 insns) */
void f_124269f0(void) {
  FTRACE(0x124269f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124269f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124269f1 mov ebp, esp */
  EBP = (ESP);
  /* 124269f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124269f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124269f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124269fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124269ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12426a02:;
  /* 12426a02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426a05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426a08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426a0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12426a0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12426a10 je 0x12426a27 */
  if (C.zf) goto L_12426a27;
  /* 12426a12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426a15 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12426a18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12426a1a je 0x12426a27 */
  if (C.zf) goto L_12426a27;
  /* 12426a1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426a1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426a22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12426a25 jmp 0x12426a02 */
  goto L_12426a02;
L_12426a27:;
  /* 12426a27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426a2a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12426a2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12426a2f jne 0x12426a39 */
  if (!C.zf) goto L_12426a39;
  /* 12426a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426a34 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426a37 jmp 0x12426a3c */
  goto L_12426a3c;
L_12426a39:;
  /* 12426a39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12426a3c:;
  /* 12426a3c mov esp, ebp */
  ESP = (EBP);
  /* 12426a3e pop ebp */
  EBP = (pop32());
  /* 12426a3f ret  */
  ESPCHK(0x124269f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a40 @ 0x12426a40 (736 bytes, 224 insns) */
void f_12426a40(void) {
  FTRACE(0x12426a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12426a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12426a41 mov ebp, esp */
  EBP = (ESP);
  /* 12426a43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426a46 push esi */
  push32((uint32_t)(ESI));
  /* 12426a47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426a4b je 0x12426a6c */
  if (C.zf) goto L_12426a6c;
  /* 12426a4d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12426a4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426a52 push eax */
  push32((uint32_t)(EAX));
  /* 12426a53 call 0x12426e90 */
  push32(0x12426a58u); f_12426e90();
  /* 12426a58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426a5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12426a5e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426a62 je 0x12426a6c */
  if (C.zf) goto L_12426a6c;
  /* 12426a64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426a67 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426a6a jne 0x12426a74 */
  if (!C.zf) goto L_12426a74;
L_12426a6c:;
  /* 12426a6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426a6f jmp 0x12426d1b */
  goto L_12426d1b;
L_12426a74:;
  /* 12426a74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12426a77 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12426a7b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12426a7d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426a7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12426a80 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12426a83 mov ecx, dword ptr [0x12442848] */
  ECX = (r32((uint32_t)(0x12442848)));
  /* 12426a89 cmp ecx, dword ptr [0x1244284c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1244284c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426a8f jne 0x12426aa5 */
  if (!C.zf) goto L_12426aa5;
  /* 12426a91 mov edx, dword ptr [0x12442848] */
  EDX = (r32((uint32_t)(0x12442848)));
  /* 12426a97 push edx */
  push32((uint32_t)(EDX));
  /* 12426a98 call 0x12426da0 */
  push32(0x12426a9du); f_12426da0();
  /* 12426a9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426aa0 mov dword ptr [0x12442848], eax */
  w32((uint32_t)(0x12442848), (EAX));
L_12426aa5:;
  /* 12426aa5 cmp dword ptr [0x12442848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426aac jne 0x12426b65 */
  if (!C.zf) goto L_12426b65;
  /* 12426ab2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426ab6 je 0x12426ad7 */
  if (C.zf) goto L_12426ad7;
  /* 12426ab8 cmp dword ptr [0x12442850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426abf je 0x12426ad7 */
  if (C.zf) goto L_12426ad7;
  /* 12426ac1 call 0x12426540 */
  push32(0x12426ac6u); f_12426540();
  /* 12426ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12426ac8 je 0x12426ad2 */
  if (C.zf) goto L_12426ad2;
  /* 12426aca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426acd jmp 0x12426d1b */
  goto L_12426d1b;
L_12426ad2:;
  /* 12426ad2 jmp 0x12426b65 */
  goto L_12426b65;
L_12426ad7:;
  /* 12426ad7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426adb je 0x12426ae4 */
  if (C.zf) goto L_12426ae4;
  /* 12426add xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426adf jmp 0x12426d1b */
  goto L_12426d1b;
L_12426ae4:;
  /* 12426ae4 cmp dword ptr [0x12442848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426aeb jne 0x12426b24 */
  if (!C.zf) goto L_12426b24;
  /* 12426aed push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12426af2 push 0x1243ef98 */
  push32((uint32_t)(0x1243ef98u));
  /* 12426af7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12426af9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12426afb call 0x12416a40 */
  push32(0x12426b00u); f_12416a40();
  /* 12426b00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426b03 mov dword ptr [0x12442848], eax */
  w32((uint32_t)(0x12442848), (EAX));
  /* 12426b08 cmp dword ptr [0x12442848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426b0f jne 0x12426b19 */
  if (!C.zf) goto L_12426b19;
  /* 12426b11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426b14 jmp 0x12426d1b */
  goto L_12426d1b;
L_12426b19:;
  /* 12426b19 mov eax, dword ptr [0x12442848] */
  EAX = (r32((uint32_t)(0x12442848)));
  /* 12426b1e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12426b24:;
  /* 12426b24 cmp dword ptr [0x12442850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426b2b jne 0x12426b65 */
  if (!C.zf) goto L_12426b65;
  /* 12426b2d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12426b32 push 0x1243ef98 */
  push32((uint32_t)(0x1243ef98u));
  /* 12426b37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12426b39 push 4 */
  push32((uint32_t)(0x4u));
  /* 12426b3b call 0x12416a40 */
  push32(0x12426b40u); f_12416a40();
  /* 12426b40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426b43 mov dword ptr [0x12442850], eax */
  w32((uint32_t)(0x12442850), (EAX));
  /* 12426b48 cmp dword ptr [0x12442850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426b4f jne 0x12426b59 */
  if (!C.zf) goto L_12426b59;
  /* 12426b51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426b54 jmp 0x12426d1b */
  goto L_12426d1b;
L_12426b59:;
  /* 12426b59 mov ecx, dword ptr [0x12442850] */
  ECX = (r32((uint32_t)(0x12442850)));
  /* 12426b5f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12426b65:;
  /* 12426b65 mov edx, dword ptr [0x12442848] */
  EDX = (r32((uint32_t)(0x12442848)));
  /* 12426b6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12426b6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12426b71 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426b74 push eax */
  push32((uint32_t)(EAX));
  /* 12426b75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426b78 push ecx */
  push32((uint32_t)(ECX));
  /* 12426b79 call 0x12426d20 */
  push32(0x12426b7eu); f_12426d20();
  /* 12426b7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426b81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12426b84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426b88 jl 0x12426c21 */
  if ((C.sf!=C.of)) goto L_12426c21;
  /* 12426b8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426b91 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426b94 je 0x12426c21 */
  if (C.zf) goto L_12426c21;
  /* 12426b9a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426b9e je 0x12426c13 */
  if (C.zf) goto L_12426c13;
  /* 12426ba0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12426ba2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426ba5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426ba8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12426bab push edx */
  push32((uint32_t)(EDX));
  /* 12426bac call 0x124174d0 */
  push32(0x12426bb1u); f_124174d0();
  /* 12426bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426bb4 jmp 0x12426bbf */
  goto L_12426bbf;
L_12426bb6:;
  /* 12426bb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426bb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426bbc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12426bbf:;
  /* 12426bbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426bc2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426bc5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426bc9 je 0x12426be0 */
  if (C.zf) goto L_12426be0;
  /* 12426bcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426bce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426bd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426bd4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12426bd7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12426bdb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12426bde jmp 0x12426bb6 */
  goto L_12426bb6;
L_12426be0:;
  /* 12426be0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12426be5 push 0x1243ef98 */
  push32((uint32_t)(0x1243ef98u));
  /* 12426bea push 2 */
  push32((uint32_t)(0x2u));
  /* 12426bec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426bef shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12426bf2 push eax */
  push32((uint32_t)(EAX));
  /* 12426bf3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 12426bf7 call 0x12416ed0 */
  push32(0x12426bfcu); f_12416ed0();
  /* 12426bfc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426bff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12426c02 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426c06 je 0x12426c11 */
  if (C.zf) goto L_12426c11;
  /* 12426c08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426c0b mov dword ptr [0x12442848], edx */
  w32((uint32_t)(0x12442848), (EDX));
L_12426c11:;
  /* 12426c11 jmp 0x12426c1f */
  goto L_12426c1f;
L_12426c13:;
  /* 12426c13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426c16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426c19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426c1c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12426c1f:;
  /* 12426c1f jmp 0x12426c94 */
  goto L_12426c94;
L_12426c21:;
  /* 12426c21 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426c25 jne 0x12426c8d */
  if (!C.zf) goto L_12426c8d;
  /* 12426c27 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426c2b jge 0x12426c35 */
  if ((C.sf==C.of)) goto L_12426c35;
  /* 12426c2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426c30 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12426c32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12426c35:;
  /* 12426c35 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12426c3a push 0x1243ef98 */
  push32((uint32_t)(0x1243ef98u));
  /* 12426c3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12426c41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426c44 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12426c4b push edx */
  push32((uint32_t)(EDX));
  /* 12426c4c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426c4f push eax */
  push32((uint32_t)(EAX));
  /* 12426c50 call 0x12416ed0 */
  push32(0x12426c55u); f_12416ed0();
  /* 12426c55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426c58 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12426c5b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426c5f jne 0x12426c69 */
  if (!C.zf) goto L_12426c69;
  /* 12426c61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426c64 jmp 0x12426d1b */
  goto L_12426d1b;
L_12426c69:;
  /* 12426c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426c6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426c6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426c72 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12426c75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426c78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426c7b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12426c83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426c86 mov dword ptr [0x12442848], eax */
  w32((uint32_t)(0x12442848), (EAX));
  /* 12426c8b jmp 0x12426c94 */
  goto L_12426c94;
L_12426c8d:;
  /* 12426c8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426c8f jmp 0x12426d1b */
  goto L_12426d1b;
L_12426c94:;
  /* 12426c94 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426c98 je 0x12426d19 */
  if (C.zf) goto L_12426d19;
  /* 12426c9a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12426c9f push 0x1243ef98 */
  push32((uint32_t)(0x1243ef98u));
  /* 12426ca4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12426ca6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426ca9 push ecx */
  push32((uint32_t)(ECX));
  /* 12426caa call 0x12419870 */
  push32(0x12426cafu); f_12419870();
  /* 12426caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426cb2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426cb5 push eax */
  push32((uint32_t)(EAX));
  /* 12426cb6 call 0x12416a40 */
  push32(0x12426cbbu); f_12416a40();
  /* 12426cbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426cbe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12426cc1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426cc5 je 0x12426d19 */
  if (C.zf) goto L_12426d19;
  /* 12426cc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426cca push edx */
  push32((uint32_t)(EDX));
  /* 12426ccb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12426cce push eax */
  push32((uint32_t)(EAX));
  /* 12426ccf call 0x124199f0 */
  push32(0x12426cd4u); f_124199f0();
  /* 12426cd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426cd7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12426cda sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426cdd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12426ce0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426ce2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12426ce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426ce8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12426ceb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426cee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426cf1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12426cf4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12426cf7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12426cf9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426cfb not edx */
  EDX = (~(EDX));
  /* 12426cfd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12426d00 push edx */
  push32((uint32_t)(EDX));
  /* 12426d01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12426d04 push eax */
  push32((uint32_t)(EAX));
  /* 12426d05 call dword ptr [0x124452b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452b4))), 0x12426d0bu);
  /* 12426d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12426d0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12426d10 push ecx */
  push32((uint32_t)(ECX));
  /* 12426d11 call 0x124174d0 */
  push32(0x12426d16u); f_124174d0();
  /* 12426d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12426d19:;
  /* 12426d19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12426d1b:;
  /* 12426d1b pop esi */
  ESI = (pop32());
  /* 12426d1c mov esp, ebp */
  ESP = (EBP);
  /* 12426d1e pop ebp */
  EBP = (pop32());
  /* 12426d1f ret  */
  ESPCHK(0x12426a40u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12426d20 (124 bytes, 47 insns) */
void f_12426d20(void) {
  FTRACE(0x12426d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12426d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12426d21 mov ebp, esp */
  EBP = (ESP);
  /* 12426d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12426d24 mov eax, dword ptr [0x12442848] */
  EAX = (r32((uint32_t)(0x12442848)));
  /* 12426d29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12426d2c jmp 0x12426d37 */
  goto L_12426d37;
L_12426d2e:;
  /* 12426d2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426d31 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426d34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12426d37:;
  /* 12426d37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426d3a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426d3d je 0x12426d8a */
  if (C.zf) goto L_12426d8a;
  /* 12426d3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12426d42 push eax */
  push32((uint32_t)(EAX));
  /* 12426d43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426d46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12426d48 push edx */
  push32((uint32_t)(EDX));
  /* 12426d49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426d4c push eax */
  push32((uint32_t)(EAX));
  /* 12426d4d call 0x124264f0 */
  push32(0x12426d52u); f_124264f0();
  /* 12426d52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426d55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12426d57 jne 0x12426d88 */
  if (!C.zf) goto L_12426d88;
  /* 12426d59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426d5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12426d5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12426d61 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12426d65 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426d68 je 0x12426d7a */
  if (C.zf) goto L_12426d7a;
  /* 12426d6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426d6d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12426d6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12426d72 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12426d76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12426d78 jne 0x12426d88 */
  if (!C.zf) goto L_12426d88;
L_12426d7a:;
  /* 12426d7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426d7d sub eax, dword ptr [0x12442848] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12442848))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426d83 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12426d86 jmp 0x12426d98 */
  goto L_12426d98;
L_12426d88:;
  /* 12426d88 jmp 0x12426d2e */
  goto L_12426d2e;
L_12426d8a:;
  /* 12426d8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426d8d sub eax, dword ptr [0x12442848] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12442848))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426d93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12426d96 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12426d98:;
  /* 12426d98 mov esp, ebp */
  ESP = (EBP);
  /* 12426d9a pop ebp */
  EBP = (pop32());
  /* 12426d9b ret  */
  ESPCHK(0x12426d20u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12426da0 (238 bytes, 80 insns) */
void f_12426da0(void) {
  FTRACE(0x12426da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12426da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12426da1 mov ebp, esp */
  EBP = (ESP);
  /* 12426da3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426da6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12426dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426db0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12426db3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426db7 jne 0x12426dc0 */
  if (!C.zf) goto L_12426dc0;
  /* 12426db9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426dbb jmp 0x12426e8a */
  goto L_12426e8a;
L_12426dc0:;
  /* 12426dc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426dc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12426dc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426dc8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426dcb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12426dce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12426dd0 je 0x12426ddd */
  if (C.zf) goto L_12426ddd;
  /* 12426dd2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12426dd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426dd8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12426ddb jmp 0x12426dc0 */
  goto L_12426dc0;
L_12426ddd:;
  /* 12426ddd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12426de2 push 0x1243ef98 */
  push32((uint32_t)(0x1243ef98u));
  /* 12426de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12426de9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12426dec lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12426df3 push eax */
  push32((uint32_t)(EAX));
  /* 12426df4 call 0x12416a40 */
  push32(0x12426df9u); f_12416a40();
  /* 12426df9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426dfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12426dff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426e02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12426e05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426e09 jne 0x12426e15 */
  if (!C.zf) goto L_12426e15;
  /* 12426e0b push 9 */
  push32((uint32_t)(0x9u));
  /* 12426e0d call 0x124159b0 */
  push32(0x12426e12u); f_124159b0();
  /* 12426e12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12426e15:;
  /* 12426e15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426e18 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12426e1b:;
  /* 12426e1b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426e1e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426e21 je 0x12426e7e */
  if (C.zf) goto L_12426e7e;
  /* 12426e23 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12426e28 push 0x1243ef98 */
  push32((uint32_t)(0x1243ef98u));
  /* 12426e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12426e2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426e32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12426e34 push edx */
  push32((uint32_t)(EDX));
  /* 12426e35 call 0x12419870 */
  push32(0x12426e3au); f_12419870();
  /* 12426e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426e3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426e40 push eax */
  push32((uint32_t)(EAX));
  /* 12426e41 call 0x12416a40 */
  push32(0x12426e46u); f_12416a40();
  /* 12426e46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426e49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426e4c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12426e4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426e51 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426e54 je 0x12426e6a */
  if (C.zf) goto L_12426e6a;
  /* 12426e56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426e59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12426e5b push ecx */
  push32((uint32_t)(ECX));
  /* 12426e5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426e5f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12426e61 push eax */
  push32((uint32_t)(EAX));
  /* 12426e62 call 0x124199f0 */
  push32(0x12426e67u); f_124199f0();
  /* 12426e67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12426e6a:;
  /* 12426e6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12426e6d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426e70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12426e73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426e76 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426e79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12426e7c jmp 0x12426e1b */
  goto L_12426e1b;
L_12426e7e:;
  /* 12426e7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12426e81 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12426e87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12426e8a:;
  /* 12426e8a mov esp, ebp */
  ESP = (EBP);
  /* 12426e8c pop ebp */
  EBP = (pop32());
  /* 12426e8d ret  */
  ESPCHK(0x12426da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016e90 @ 0x12426e90 (237 bytes, 81 insns) */
void f_12426e90(void) {
  FTRACE(0x12426e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12426e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12426e91 mov ebp, esp */
  EBP = (ESP);
  /* 12426e93 push ecx */
  push32((uint32_t)(ECX));
  /* 12426e94 cmp dword ptr [0x12443f8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12443f8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426e9b jne 0x12426eb2 */
  if (!C.zf) goto L_12426eb2;
  /* 12426e9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12426ea0 push eax */
  push32((uint32_t)(EAX));
  /* 12426ea1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 12426ea5 call 0x12426f90 */
  push32(0x12426eaau); f_12426f90();
  /* 12426eaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426ead jmp 0x12426f79 */
  goto L_12426f79;
L_12426eb2:;
  /* 12426eb2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12426eb4 call 0x1241a440 */
  push32(0x12426eb9u); f_1241a440();
  /* 12426eb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426ebc jmp 0x12426ec7 */
  goto L_12426ec7;
L_12426ebe:;
  /* 12426ebe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426ec1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426ec4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12426ec7:;
  /* 12426ec7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426eca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12426ece mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12426ed2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426ed5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12426edb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12426edd je 0x12426f5b */
  if (C.zf) goto L_12426f5b;
  /* 12426edf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426ee2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426ee7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12426ee9 mov cl, byte ptr [eax + 0x124440a1] */
  CL = (r8((uint32_t)(EAX + 0x124440a1)));
  /* 12426eef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12426ef2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12426ef4 je 0x12426f46 */
  if (C.zf) goto L_12426f46;
  /* 12426ef6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426ef9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426efc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12426eff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426f02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12426f04 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12426f06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12426f08 jne 0x12426f18 */
  if (!C.zf) goto L_12426f18;
  /* 12426f0a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12426f0c call 0x1241a4e0 */
  push32(0x12426f11u); f_1241a4e0();
  /* 12426f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426f16 jmp 0x12426f79 */
  goto L_12426f79;
L_12426f18:;
  /* 12426f18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426f1b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12426f21 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12426f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426f27 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12426f29 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12426f2b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12426f2d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426f30 jne 0x12426f44 */
  if (!C.zf) goto L_12426f44;
  /* 12426f32 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12426f34 call 0x1241a4e0 */
  push32(0x12426f39u); f_1241a4e0();
  /* 12426f39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426f3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426f3f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12426f42 jmp 0x12426f79 */
  goto L_12426f79;
L_12426f44:;
  /* 12426f44 jmp 0x12426f56 */
  goto L_12426f56;
L_12426f46:;
  /* 12426f46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426f49 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12426f4f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426f52 jne 0x12426f56 */
  if (!C.zf) goto L_12426f56;
  /* 12426f54 jmp 0x12426f5b */
  goto L_12426f5b;
L_12426f56:;
  /* 12426f56 jmp 0x12426ebe */
  goto L_12426ebe;
L_12426f5b:;
  /* 12426f5b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12426f5d call 0x1241a4e0 */
  push32(0x12426f62u); f_1241a4e0();
  /* 12426f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12426f65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12426f68 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426f6d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12426f70 jne 0x12426f77 */
  if (!C.zf) goto L_12426f77;
  /* 12426f72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12426f75 jmp 0x12426f79 */
  goto L_12426f79;
L_12426f77:;
  /* 12426f77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12426f79:;
  /* 12426f79 mov esp, ebp */
  ESP = (EBP);
  /* 12426f7b pop ebp */
  EBP = (pop32());
  /* 12426f7c ret  */
  ESPCHK(0x12426e90u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12426f90 (193 bytes, 87 insns) */
void f_12426f90(void) {
  FTRACE(0x12426f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12426f90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12426f92 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12426f96 push ebx */
  push32((uint32_t)(EBX));
  /* 12426f97 mov ebx, eax */
  EBX = (EAX);
  /* 12426f99 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12426f9c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12426fa0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12426fa6 je 0x12426fbb */
  if (C.zf) goto L_12426fbb;
L_12426fa8:;
  /* 12426fa8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12426faa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12426fab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12426fad je 0x12426f80 */
  if (C.zf) { jmp_ind(0x12426f80u); return; }
  /* 12426faf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12426fb1 je 0x12427004 */
  if (C.zf) goto L_12427004;
  /* 12426fb3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12426fb9 jne 0x12426fa8 */
  if (!C.zf) goto L_12426fa8;
L_12426fbb:;
  /* 12426fbb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12426fbd push edi */
  push32((uint32_t)(EDI));
  /* 12426fbe mov eax, ebx */
  EAX = (EBX);
  /* 12426fc0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12426fc3 push esi */
  push32((uint32_t)(ESI));
  /* 12426fc4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12426fc6:;
  /* 12426fc6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12426fc8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12426fcd mov eax, ecx */
  EAX = (ECX);
  /* 12426fcf mov esi, edi */
  ESI = (EDI);
  /* 12426fd1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12426fd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12426fd5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12426fd7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12426fda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12426fdd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12426fdf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12426fe1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12426fe4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12426fea jne 0x12427008 */
  if (!C.zf) goto L_12427008;
  /* 12426fec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12426ff1 je 0x12426fc6 */
  if (C.zf) goto L_12426fc6;
  /* 12426ff3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12426ff8 jne 0x12427002 */
  if (!C.zf) goto L_12427002;
  /* 12426ffa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12427000 jne 0x12426fc6 */
  if (!C.zf) goto L_12426fc6;
L_12427002:;
  /* 12427002 pop esi */
  ESI = (pop32());
  /* 12427003 pop edi */
  EDI = (pop32());
L_12427004:;
  /* 12427004 pop ebx */
  EBX = (pop32());
  /* 12427005 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12427007 ret  */
  ESPCHK(0x12426f90u, _esp0);
  ESP += 4; return;
L_12427008:;
  /* 12427008 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1242700b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1242700d je 0x12427045 */
  if (C.zf) goto L_12427045;
  /* 1242700f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12427011 je 0x12427002 */
  if (C.zf) goto L_12427002;
  /* 12427013 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12427015 je 0x1242703e */
  if (C.zf) goto L_1242703e;
  /* 12427017 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12427019 je 0x12427002 */
  if (C.zf) goto L_12427002;
  /* 1242701b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1242701e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12427020 je 0x12427037 */
  if (C.zf) goto L_12427037;
  /* 12427022 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12427024 je 0x12427002 */
  if (C.zf) goto L_12427002;
  /* 12427026 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12427028 je 0x12427030 */
  if (C.zf) goto L_12427030;
  /* 1242702a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1242702c je 0x12427002 */
  if (C.zf) goto L_12427002;
  /* 1242702e jmp 0x12426fc6 */
  goto L_12426fc6;
L_12427030:;
  /* 12427030 pop esi */
  ESI = (pop32());
  /* 12427031 pop edi */
  EDI = (pop32());
  /* 12427032 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12427035 pop ebx */
  EBX = (pop32());
  /* 12427036 ret  */
  ESPCHK(0x12426f90u, _esp0);
  ESP += 4; return;
L_12427037:;
  /* 12427037 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1242703a pop esi */
  ESI = (pop32());
  /* 1242703b pop edi */
  EDI = (pop32());
  /* 1242703c pop ebx */
  EBX = (pop32());
  /* 1242703d ret  */
  ESPCHK(0x12426f90u, _esp0);
  ESP += 4; return;
L_1242703e:;
  /* 1242703e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12427041 pop esi */
  ESI = (pop32());
  /* 12427042 pop edi */
  EDI = (pop32());
  /* 12427043 pop ebx */
  EBX = (pop32());
  /* 12427044 ret  */
  ESPCHK(0x12426f90u, _esp0);
  ESP += 4; return;
L_12427045:;
  /* 12427045 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12427048 pop esi */
  ESI = (pop32());
  /* 12427049 pop edi */
  EDI = (pop32());
  /* 1242704a pop ebx */
  EBX = (pop32());
  /* 1242704b ret  */
  ESPCHK(0x12426f90u, _esp0);
  ESP += 4; return;
  /* 1242704c jmp dword ptr [0x1244534c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1244534c)))); return;
}

/* RtlUnwind @ 0x1242719c (6 bytes, 1 insns) */
void f_1242719c(void) {
  FTRACE(0x1242719cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1242719c jmp dword ptr [0x124452f0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x124452f0)))); return;
}

