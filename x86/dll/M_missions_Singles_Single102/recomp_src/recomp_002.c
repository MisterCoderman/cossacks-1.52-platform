#include "recomp.h"

/* FUN_10011dd0 @ 0x10f61dd0 (393 bytes, 123 insns) */
void f_10f61dd0(void) {
  FTRACE(0x10f61dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10f61dd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61dd6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61dda jne 0x10f61de6 */
  if (!C.zf) goto L_10f61de6;
  /* 10f61ddc mov eax, dword ptr [0x10f7fc98] */
  EAX = (r32((uint32_t)(0x10f7fc98)));
  /* 10f61de1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f61de4 jmp 0x10f61dec */
  goto L_10f61dec;
L_10f61de6:;
  /* 10f61de6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f61de9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10f61dec:;
  /* 10f61dec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f61def mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f61df2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f61df5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f61df8 push 0x10f8094c */
  push32((uint32_t)(0x10f8094cu));
  /* 10f61dfd call dword ptr [0x10f83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83364))), 0x10f61e03u);
  /* 10f61e03 cmp dword ptr [0x10f8093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61e0a je 0x10f61e2a */
  if (C.zf) goto L_10f61e2a;
  /* 10f61e0c push 0x10f8094c */
  push32((uint32_t)(0x10f8094cu));
  /* 10f61e11 call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f61e17u);
  /* 10f61e17 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f61e19 call 0x10f58490 */
  push32(0x10f61e1eu); f_10f58490();
  /* 10f61e1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61e21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10f61e28 jmp 0x10f61e31 */
  goto L_10f61e31;
L_10f61e2a:;
  /* 10f61e2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10f61e31:;
  /* 10f61e31 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61e35 jbe 0x10f61f22 */
  if ((C.cf||C.zf)) goto L_10f61f22;
  /* 10f61e3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61e3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f61e40 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10f61e43 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f61e47 je 0x10f61e51 */
  if (C.zf) goto L_10f61e51;
  /* 10f61e49 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f61e4d je 0x10f61e56 */
  if (C.zf) goto L_10f61e56;
  /* 10f61e4f jmp 0x10f61eb0 */
  goto L_10f61eb0;
L_10f61e51:;
  /* 10f61e51 jmp 0x10f61f22 */
  goto L_10f61f22;
L_10f61e56:;
  /* 10f61e56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61e59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61e5c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10f61e5f mov dword ptr [0x10f80928], 0 */
  w32((uint32_t)(0x10f80928), (0x0u));
  /* 10f61e69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61e6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f61e6f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61e72 jne 0x10f61e87 */
  if (!C.zf) goto L_10f61e87;
  /* 10f61e74 mov dword ptr [0x10f80928], 1 */
  w32((uint32_t)(0x10f80928), (0x1u));
  /* 10f61e7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61e81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61e84 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10f61e87:;
  /* 10f61e87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f61e8a push ecx */
  push32((uint32_t)(ECX));
  /* 10f61e8b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10f61e8e push edx */
  push32((uint32_t)(EDX));
  /* 10f61e8f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10f61e92 push eax */
  push32((uint32_t)(EAX));
  /* 10f61e93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f61e96 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61e97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61e9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f61e9c push eax */
  push32((uint32_t)(EAX));
  /* 10f61e9d call 0x10f61f60 */
  push32(0x10f61ea2u); f_10f61f60();
  /* 10f61ea2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61ea5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61ea8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61eab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f61eae jmp 0x10f61f1d */
  goto L_10f61f1d;
L_10f61eb0:;
  /* 10f61eb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61eb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f61eb5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f61eb7 mov ecx, dword ptr [0x10f7ec98] */
  ECX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f61ebd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f61ebf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10f61ec3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10f61ec9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f61ecb je 0x10f61ef8 */
  if (C.zf) goto L_10f61ef8;
  /* 10f61ecd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61ed1 jbe 0x10f61ef8 */
  if ((C.cf||C.zf)) goto L_10f61ef8;
  /* 10f61ed3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61ed6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61ed9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f61edb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f61edd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61ee0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61ee3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f61ee6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61ee9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61eec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f61eef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61ef2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61ef5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f61ef8:;
  /* 10f61ef8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61efb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61efe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f61f00 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f61f02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61f05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61f08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f61f0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61f0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61f11 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f61f14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61f17 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61f1a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f61f1d:;
  /* 10f61f1d jmp 0x10f61e31 */
  goto L_10f61e31;
L_10f61f22:;
  /* 10f61f22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61f26 je 0x10f61f34 */
  if (C.zf) goto L_10f61f34;
  /* 10f61f28 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f61f2a call 0x10f58530 */
  push32(0x10f61f2fu); f_10f58530();
  /* 10f61f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61f32 jmp 0x10f61f3f */
  goto L_10f61f3f;
L_10f61f34:;
  /* 10f61f34 push 0x10f8094c */
  push32((uint32_t)(0x10f8094cu));
  /* 10f61f39 call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f61f3fu);
L_10f61f3f:;
  /* 10f61f3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61f43 jbe 0x10f61f53 */
  if ((C.cf||C.zf)) goto L_10f61f53;
  /* 10f61f45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f61f48 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10f61f4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f61f4e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61f51 jmp 0x10f61f55 */
  goto L_10f61f55;
L_10f61f53:;
  /* 10f61f53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f61f55:;
  /* 10f61f55 mov esp, ebp */
  ESP = (EBP);
  /* 10f61f57 pop ebp */
  EBP = (pop32());
  /* 10f61f58 ret  */
  ESPCHK(0x10f61dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f60 @ 0x10f61f60 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10f61f60(void) {
  FTRACE(0x10f61f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f61f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f61f61 mov ebp, esp */
  EBP = (ESP);
  /* 10f61f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61f66 push esi */
  push32((uint32_t)(ESI));
  /* 10f61f67 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10f61f6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f61f6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61f71 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f61f74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f61f77 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f61f7b ja 0x10f624c8 */
  if ((!C.cf&&!C.zf)) goto L_10f624c8;
  /* 10f61f81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f61f84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f61f86 mov dl, byte ptr [eax + 0x10f62529] */
  DL = (r8((uint32_t)(EAX + 0x10f62529)));
  /* 10f61f8c jmp dword ptr [edx*4 + 0x10f624cd] */
  switch (EDX) {
    case 0: goto L_10f624a6;
    case 1: goto L_10f61fb5;
    case 2: goto L_10f61ffb;
    case 3: goto L_10f62148;
    case 4: goto L_10f62170;
    case 5: goto L_10f6220f;
    case 6: goto L_10f6227b;
    case 7: goto L_10f622a4;
    case 8: goto L_10f622e5;
    case 9: goto L_10f623c7;
    case 10: goto L_10f6242e;
    case 11: goto L_10f6247b;
    case 12: goto L_10f61f93;
    case 13: goto L_10f61fd8;
    case 14: goto L_10f6201e;
    case 15: goto L_10f6211e;
    case 16: goto L_10f621b5;
    case 17: goto L_10f621e2;
    case 18: goto L_10f62237;
    case 19: goto L_10f622bb;
    case 20: goto L_10f62369;
    case 21: goto L_10f623f8;
    case 22: goto L_10f624c8;
    default: x86_unimpl("switch@0x10f61f8c out of table"); return;
  }
L_10f61f93:;
  /* 10f61f93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f61f96 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61f97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61f9a push edx */
  push32((uint32_t)(EDX));
  /* 10f61f9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f61f9e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10f61fa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f61fa4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10f61fa7 push eax */
  push32((uint32_t)(EAX));
  /* 10f61fa8 call 0x10f62580 */
  push32(0x10f61fadu); f_10f62580();
  /* 10f61fad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61fb0 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f61fb5:;
  /* 10f61fb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f61fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f61fb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61fbc push edx */
  push32((uint32_t)(EDX));
  /* 10f61fbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f61fc0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10f61fc3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f61fc6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10f61fca push eax */
  push32((uint32_t)(EAX));
  /* 10f61fcb call 0x10f62580 */
  push32(0x10f61fd0u); f_10f62580();
  /* 10f61fd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61fd3 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f61fd8:;
  /* 10f61fd8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f61fdb push ecx */
  push32((uint32_t)(ECX));
  /* 10f61fdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f61fdf push edx */
  push32((uint32_t)(EDX));
  /* 10f61fe0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f61fe3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f61fe6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f61fe9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10f61fed push eax */
  push32((uint32_t)(EAX));
  /* 10f61fee call 0x10f62580 */
  push32(0x10f61ff3u); f_10f62580();
  /* 10f61ff3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f61ff6 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f61ffb:;
  /* 10f61ffb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f61ffe push ecx */
  push32((uint32_t)(ECX));
  /* 10f61fff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62002 push edx */
  push32((uint32_t)(EDX));
  /* 10f62003 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62006 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f62009 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f6200c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10f62010 push eax */
  push32((uint32_t)(EAX));
  /* 10f62011 call 0x10f62580 */
  push32(0x10f62016u); f_10f62580();
  /* 10f62016 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62019 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f6201e:;
  /* 10f6201e cmp dword ptr [0x10f80928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62025 je 0x10f620a6 */
  if (C.zf) goto L_10f620a6;
  /* 10f62027 mov dword ptr [0x10f80928], 0 */
  w32((uint32_t)(0x10f80928), (0x0u));
  /* 10f62031 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f62034 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62035 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62038 push edx */
  push32((uint32_t)(EDX));
  /* 10f62039 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6203c push eax */
  push32((uint32_t)(EAX));
  /* 10f6203d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62040 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62041 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f62044 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10f6204a push eax */
  push32((uint32_t)(EAX));
  /* 10f6204b call 0x10f62730 */
  push32(0x10f62050u); f_10f62730();
  /* 10f62050 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62053 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62056 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62059 jne 0x10f62060 */
  if (!C.zf) goto L_10f62060;
  /* 10f6205b jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f62060:;
  /* 10f62060 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62063 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f62065 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10f62068 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6206b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f6206d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62070 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62073 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f62075 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62078 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f6207a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f6207d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62080 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f62082 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f62085 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62086 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62089 push edx */
  push32((uint32_t)(EDX));
  /* 10f6208a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6208d push eax */
  push32((uint32_t)(EAX));
  /* 10f6208e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62091 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62092 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f62095 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10f6209b push eax */
  push32((uint32_t)(EAX));
  /* 10f6209c call 0x10f62730 */
  push32(0x10f620a1u); f_10f62730();
  /* 10f620a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f620a4 jmp 0x10f62119 */
  goto L_10f62119;
L_10f620a6:;
  /* 10f620a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f620a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f620aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f620ad push edx */
  push32((uint32_t)(EDX));
  /* 10f620ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f620b1 push eax */
  push32((uint32_t)(EAX));
  /* 10f620b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f620b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f620b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f620b9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10f620bf push eax */
  push32((uint32_t)(EAX));
  /* 10f620c0 call 0x10f62730 */
  push32(0x10f620c5u); f_10f62730();
  /* 10f620c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f620c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f620cb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f620ce jne 0x10f620d5 */
  if (!C.zf) goto L_10f620d5;
  /* 10f620d0 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f620d5:;
  /* 10f620d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f620d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f620da mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10f620dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f620e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f620e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f620e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f620e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f620ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f620ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f620ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f620f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f620f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f620f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f620fa push ecx */
  push32((uint32_t)(ECX));
  /* 10f620fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f620fe push edx */
  push32((uint32_t)(EDX));
  /* 10f620ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62102 push eax */
  push32((uint32_t)(EAX));
  /* 10f62103 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62106 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62107 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f6210a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10f62110 push eax */
  push32((uint32_t)(EAX));
  /* 10f62111 call 0x10f62730 */
  push32(0x10f62116u); f_10f62730();
  /* 10f62116 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f62119:;
  /* 10f62119 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f6211e:;
  /* 10f6211e mov ecx, dword ptr [0x10f80928] */
  ECX = (r32((uint32_t)(0x10f80928)));
  /* 10f62124 mov dword ptr [0x10f80938], ecx */
  w32((uint32_t)(0x10f80938), (ECX));
  /* 10f6212a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f6212d push edx */
  push32((uint32_t)(EDX));
  /* 10f6212e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62131 push eax */
  push32((uint32_t)(EAX));
  /* 10f62132 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f62134 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62137 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f6213a push edx */
  push32((uint32_t)(EDX));
  /* 10f6213b call 0x10f625d0 */
  push32(0x10f62140u); f_10f625d0();
  /* 10f62140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62143 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f62148:;
  /* 10f62148 mov eax, dword ptr [0x10f80928] */
  EAX = (r32((uint32_t)(0x10f80928)));
  /* 10f6214d mov dword ptr [0x10f80938], eax */
  w32((uint32_t)(0x10f80938), (EAX));
  /* 10f62152 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62155 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62156 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62159 push edx */
  push32((uint32_t)(EDX));
  /* 10f6215a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f6215c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6215f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f62162 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62163 call 0x10f625d0 */
  push32(0x10f62168u); f_10f625d0();
  /* 10f62168 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6216b jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f62170:;
  /* 10f62170 mov edx, dword ptr [0x10f80928] */
  EDX = (r32((uint32_t)(0x10f80928)));
  /* 10f62176 mov dword ptr [0x10f80938], edx */
  w32((uint32_t)(0x10f80938), (EDX));
  /* 10f6217c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6217f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f62182 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f62183 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10f62188 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f6218a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f6218d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62191 jne 0x10f6219a */
  if (!C.zf) goto L_10f6219a;
  /* 10f62193 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10f6219a:;
  /* 10f6219a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f6219d push edx */
  push32((uint32_t)(EDX));
  /* 10f6219e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f621a1 push eax */
  push32((uint32_t)(EAX));
  /* 10f621a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f621a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f621a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f621a8 call 0x10f625d0 */
  push32(0x10f621adu); f_10f625d0();
  /* 10f621ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f621b0 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f621b5:;
  /* 10f621b5 mov edx, dword ptr [0x10f80928] */
  EDX = (r32((uint32_t)(0x10f80928)));
  /* 10f621bb mov dword ptr [0x10f80938], edx */
  w32((uint32_t)(0x10f80938), (EDX));
  /* 10f621c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f621c4 push eax */
  push32((uint32_t)(EAX));
  /* 10f621c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f621c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f621c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f621cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f621ce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10f621d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f621d4 push eax */
  push32((uint32_t)(EAX));
  /* 10f621d5 call 0x10f625d0 */
  push32(0x10f621dau); f_10f625d0();
  /* 10f621da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f621dd jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f621e2:;
  /* 10f621e2 mov ecx, dword ptr [0x10f80928] */
  ECX = (r32((uint32_t)(0x10f80928)));
  /* 10f621e8 mov dword ptr [0x10f80938], ecx */
  w32((uint32_t)(0x10f80938), (ECX));
  /* 10f621ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f621f1 push edx */
  push32((uint32_t)(EDX));
  /* 10f621f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f621f5 push eax */
  push32((uint32_t)(EAX));
  /* 10f621f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f621f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f621fb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f621fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62201 push edx */
  push32((uint32_t)(EDX));
  /* 10f62202 call 0x10f625d0 */
  push32(0x10f62207u); f_10f625d0();
  /* 10f62207 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6220a jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f6220f:;
  /* 10f6220f mov eax, dword ptr [0x10f80928] */
  EAX = (r32((uint32_t)(0x10f80928)));
  /* 10f62214 mov dword ptr [0x10f80938], eax */
  w32((uint32_t)(0x10f80938), (EAX));
  /* 10f62219 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f6221c push ecx */
  push32((uint32_t)(ECX));
  /* 10f6221d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62220 push edx */
  push32((uint32_t)(EDX));
  /* 10f62221 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f62223 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62226 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f62229 push ecx */
  push32((uint32_t)(ECX));
  /* 10f6222a call 0x10f625d0 */
  push32(0x10f6222fu); f_10f625d0();
  /* 10f6222f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62232 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f62237:;
  /* 10f62237 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6223a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6223e jg 0x10f6225c */
  if ((!C.zf&&C.sf==C.of)) goto L_10f6225c;
  /* 10f62240 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62243 push eax */
  push32((uint32_t)(EAX));
  /* 10f62244 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62247 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62248 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f6224b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10f62251 push eax */
  push32((uint32_t)(EAX));
  /* 10f62252 call 0x10f62580 */
  push32(0x10f62257u); f_10f62580();
  /* 10f62257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6225a jmp 0x10f62276 */
  goto L_10f62276;
L_10f6225c:;
  /* 10f6225c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f6225f push ecx */
  push32((uint32_t)(ECX));
  /* 10f62260 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62263 push edx */
  push32((uint32_t)(EDX));
  /* 10f62264 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f62267 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10f6226d push ecx */
  push32((uint32_t)(ECX));
  /* 10f6226e call 0x10f62580 */
  push32(0x10f62273u); f_10f62580();
  /* 10f62273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f62276:;
  /* 10f62276 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f6227b:;
  /* 10f6227b mov edx, dword ptr [0x10f80928] */
  EDX = (r32((uint32_t)(0x10f80928)));
  /* 10f62281 mov dword ptr [0x10f80938], edx */
  w32((uint32_t)(0x10f80938), (EDX));
  /* 10f62287 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f6228a push eax */
  push32((uint32_t)(EAX));
  /* 10f6228b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6228e push ecx */
  push32((uint32_t)(ECX));
  /* 10f6228f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f62291 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62294 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f62296 push eax */
  push32((uint32_t)(EAX));
  /* 10f62297 call 0x10f625d0 */
  push32(0x10f6229cu); f_10f625d0();
  /* 10f6229c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6229f jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f622a4:;
  /* 10f622a4 mov ecx, dword ptr [0x10f80928] */
  ECX = (r32((uint32_t)(0x10f80928)));
  /* 10f622aa mov dword ptr [0x10f80938], ecx */
  w32((uint32_t)(0x10f80938), (ECX));
  /* 10f622b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f622b3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10f622b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f622b9 jmp 0x10f6230d */
  goto L_10f6230d;
L_10f622bb:;
  /* 10f622bb mov ecx, dword ptr [0x10f80928] */
  ECX = (r32((uint32_t)(0x10f80928)));
  /* 10f622c1 mov dword ptr [0x10f80938], ecx */
  w32((uint32_t)(0x10f80938), (ECX));
  /* 10f622c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f622ca push edx */
  push32((uint32_t)(EDX));
  /* 10f622cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f622ce push eax */
  push32((uint32_t)(EAX));
  /* 10f622cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10f622d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f622d4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f622d7 push edx */
  push32((uint32_t)(EDX));
  /* 10f622d8 call 0x10f625d0 */
  push32(0x10f622ddu); f_10f625d0();
  /* 10f622dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f622e0 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f622e5:;
  /* 10f622e5 mov eax, dword ptr [0x10f80928] */
  EAX = (r32((uint32_t)(0x10f80928)));
  /* 10f622ea mov dword ptr [0x10f80938], eax */
  w32((uint32_t)(0x10f80938), (EAX));
  /* 10f622ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f622f2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f622f6 jne 0x10f62301 */
  if (!C.zf) goto L_10f62301;
  /* 10f622f8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10f622ff jmp 0x10f6230d */
  goto L_10f6230d;
L_10f62301:;
  /* 10f62301 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62304 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10f62307 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f6230a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f6230d:;
  /* 10f6230d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62310 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10f62313 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62316 jge 0x10f62321 */
  if ((C.sf==C.of)) goto L_10f62321;
  /* 10f62318 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f6231f jmp 0x10f6234e */
  goto L_10f6234e;
L_10f62321:;
  /* 10f62321 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62324 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10f62327 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f62328 mov ecx, 7 */
  ECX = (0x7u);
  /* 10f6232d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f6232f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f62332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62335 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10f62338 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f62339 mov ecx, 7 */
  ECX = (0x7u);
  /* 10f6233e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f62340 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62343 jl 0x10f6234e */
  if ((C.sf!=C.of)) goto L_10f6234e;
  /* 10f62345 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f62348 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6234b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f6234e:;
  /* 10f6234e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62351 push eax */
  push32((uint32_t)(EAX));
  /* 10f62352 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62355 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62356 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f62358 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6235b push edx */
  push32((uint32_t)(EDX));
  /* 10f6235c call 0x10f625d0 */
  push32(0x10f62361u); f_10f625d0();
  /* 10f62361 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62364 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f62369:;
  /* 10f62369 cmp dword ptr [0x10f80928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62370 je 0x10f623a0 */
  if (C.zf) goto L_10f623a0;
  /* 10f62372 mov dword ptr [0x10f80928], 0 */
  w32((uint32_t)(0x10f80928), (0x0u));
  /* 10f6237c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f6237f push eax */
  push32((uint32_t)(EAX));
  /* 10f62380 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62383 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62384 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62387 push edx */
  push32((uint32_t)(EDX));
  /* 10f62388 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6238b push eax */
  push32((uint32_t)(EAX));
  /* 10f6238c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f6238f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10f62395 push edx */
  push32((uint32_t)(EDX));
  /* 10f62396 call 0x10f62730 */
  push32(0x10f6239bu); f_10f62730();
  /* 10f6239b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6239e jmp 0x10f623c2 */
  goto L_10f623c2;
L_10f623a0:;
  /* 10f623a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f623a3 push eax */
  push32((uint32_t)(EAX));
  /* 10f623a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f623a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f623a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f623ab push edx */
  push32((uint32_t)(EDX));
  /* 10f623ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f623af push eax */
  push32((uint32_t)(EAX));
  /* 10f623b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f623b3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10f623b9 push edx */
  push32((uint32_t)(EDX));
  /* 10f623ba call 0x10f62730 */
  push32(0x10f623bfu); f_10f62730();
  /* 10f623bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f623c2:;
  /* 10f623c2 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f623c7:;
  /* 10f623c7 mov dword ptr [0x10f80928], 0 */
  w32((uint32_t)(0x10f80928), (0x0u));
  /* 10f623d1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f623d4 push eax */
  push32((uint32_t)(EAX));
  /* 10f623d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f623d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f623d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f623dc push edx */
  push32((uint32_t)(EDX));
  /* 10f623dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f623e0 push eax */
  push32((uint32_t)(EAX));
  /* 10f623e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f623e4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10f623ea push edx */
  push32((uint32_t)(EDX));
  /* 10f623eb call 0x10f62730 */
  push32(0x10f623f0u); f_10f62730();
  /* 10f623f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f623f3 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f623f8:;
  /* 10f623f8 mov eax, dword ptr [0x10f80928] */
  EAX = (r32((uint32_t)(0x10f80928)));
  /* 10f623fd mov dword ptr [0x10f80938], eax */
  w32((uint32_t)(0x10f80938), (EAX));
  /* 10f62402 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62405 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f62408 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f62409 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10f6240e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f62410 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f62413 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62416 push edx */
  push32((uint32_t)(EDX));
  /* 10f62417 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6241a push eax */
  push32((uint32_t)(EAX));
  /* 10f6241b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f6241d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f62420 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62421 call 0x10f625d0 */
  push32(0x10f62426u); f_10f625d0();
  /* 10f62426 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62429 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f6242e:;
  /* 10f6242e mov edx, dword ptr [0x10f80928] */
  EDX = (r32((uint32_t)(0x10f80928)));
  /* 10f62434 mov dword ptr [0x10f80938], edx */
  w32((uint32_t)(0x10f80938), (EDX));
  /* 10f6243a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6243d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f62440 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f62441 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10f62446 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f62448 mov ecx, eax */
  ECX = (EAX);
  /* 10f6244a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6244d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f62450 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62453 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f62456 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f62457 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10f6245c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f6245e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62460 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f62463 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62466 push eax */
  push32((uint32_t)(EAX));
  /* 10f62467 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6246a push ecx */
  push32((uint32_t)(ECX));
  /* 10f6246b push 4 */
  push32((uint32_t)(0x4u));
  /* 10f6246d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f62470 push edx */
  push32((uint32_t)(EDX));
  /* 10f62471 call 0x10f625d0 */
  push32(0x10f62476u); f_10f625d0();
  /* 10f62476 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62479 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f6247b:;
  /* 10f6247b call 0x10f63590 */
  push32(0x10f62480u); f_10f63590();
  /* 10f62480 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62483 push eax */
  push32((uint32_t)(EAX));
  /* 10f62484 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62487 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62488 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6248b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6248d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62491 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10f62494 mov ecx, dword ptr [eax*4 + 0x10f7fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f7fe1c)));
  /* 10f6249b push ecx */
  push32((uint32_t)(ECX));
  /* 10f6249c call 0x10f62580 */
  push32(0x10f624a1u); f_10f62580();
  /* 10f624a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f624a4 jmp 0x10f624c8 */
  goto L_10f624c8;
L_10f624a6:;
  /* 10f624a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f624a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f624ab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10f624ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f624b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f624b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f624b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f624b9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f624bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f624be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f624c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f624c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f624c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f624c8:;
  /* 10f624c8 pop esi */
  ESI = (pop32());
  /* 10f624c9 mov esp, ebp */
  ESP = (EBP);
  /* 10f624cb pop ebp */
  EBP = (pop32());
  /* 10f624cc ret  */
  ESPCHK(0x10f61f60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10f62580 (72 bytes, 30 insns) */
void f_10f62580(void) {
  FTRACE(0x10f62580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f62580 push ebp */
  push32((uint32_t)(EBP));
  /* 10f62581 mov ebp, esp */
  EBP = (ESP);
L_10f62583:;
  /* 10f62583 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62586 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62589 je 0x10f625c6 */
  if (C.zf) goto L_10f625c6;
  /* 10f6258b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6258e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f62591 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f62593 je 0x10f625c6 */
  if (C.zf) goto L_10f625c6;
  /* 10f62595 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62598 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f6259a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6259d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f6259f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f625a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f625a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f625a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f625a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f625ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f625ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f625b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f625b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10f625b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f625ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f625bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f625bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f625c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f625c4 jmp 0x10f62583 */
  goto L_10f62583;
L_10f625c6:;
  /* 10f625c6 pop ebp */
  EBP = (pop32());
  /* 10f625c7 ret  */
  ESPCHK(0x10f62580u, _esp0);
  ESP += 4; return;
}

/* FUN_100125d0 @ 0x10f625d0 (173 bytes, 64 insns) */
void f_10f625d0(void) {
  FTRACE(0x10f625d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f625d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f625d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f625d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f625d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f625db cmp dword ptr [0x10f80938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f625e2 je 0x10f625fa */
  if (C.zf) goto L_10f625fa;
  /* 10f625e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f625e7 push eax */
  push32((uint32_t)(EAX));
  /* 10f625e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f625eb push ecx */
  push32((uint32_t)(ECX));
  /* 10f625ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f625ef push edx */
  push32((uint32_t)(EDX));
  /* 10f625f0 call 0x10f62680 */
  push32(0x10f625f5u); f_10f62680();
  /* 10f625f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f625f8 jmp 0x10f62679 */
  goto L_10f62679;
L_10f625fa:;
  /* 10f625fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f625fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62600 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62602 jae 0x10f62670 */
  if (!C.cf) goto L_10f62670;
  /* 10f62604 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62607 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f6260a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10f6260d jmp 0x10f62618 */
  goto L_10f62618;
L_10f6260f:;
  /* 10f6260f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62612 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62615 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10f62618:;
  /* 10f62618 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6261b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6261e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f62620 je 0x10f62654 */
  if (C.zf) goto L_10f62654;
  /* 10f62622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62625 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f62626 mov ecx, 0xa */
  ECX = (0xau);
  /* 10f6262b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f6262d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62630 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62633 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f62635 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62638 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10f6263b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6263e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f6263f mov ecx, 0xa */
  ECX = (0xau);
  /* 10f62644 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f62646 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f62649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6264c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6264f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f62652 jmp 0x10f6260f */
  goto L_10f6260f;
L_10f62654:;
  /* 10f62654 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62657 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f62659 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6265c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6265f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f62661 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62664 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f62666 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62669 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f6266c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f6266e jmp 0x10f62679 */
  goto L_10f62679;
L_10f62670:;
  /* 10f62670 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62673 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10f62679:;
  /* 10f62679 mov esp, ebp */
  ESP = (EBP);
  /* 10f6267b pop ebp */
  EBP = (pop32());
  /* 10f6267c ret  */
  ESPCHK(0x10f625d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10f62680 (172 bytes, 65 insns) */
void f_10f62680(void) {
  FTRACE(0x10f62680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f62680 push ebp */
  push32((uint32_t)(EBP));
  /* 10f62681 mov ebp, esp */
  EBP = (ESP);
  /* 10f62683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62686 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62689 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f6268b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f6268e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62691 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62694 jbe 0x10f626db */
  if ((C.cf||C.zf)) goto L_10f626db;
L_10f62696:;
  /* 10f62696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62699 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f6269a mov ecx, 0xa */
  ECX = (0xau);
  /* 10f6269f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f626a1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f626a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f626a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f626a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f626ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f626af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f626b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f626b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f626b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f626ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f626bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f626bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f626c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f626c3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10f626c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f626ca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f626cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f626d1 jle 0x10f626db */
  if ((C.zf||C.sf!=C.of)) goto L_10f626db;
  /* 10f626d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f626d6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f626d9 ja 0x10f62696 */
  if ((!C.cf&&!C.zf)) goto L_10f62696;
L_10f626db:;
  /* 10f626db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f626de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f626e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f626e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f626e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f626e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f626eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f626ee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f626f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f626f4:;
  /* 10f626f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f626f7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f626f9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10f626fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f626ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f62702 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f62704 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f62706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f62709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f6270c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f6270f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f62712 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10f62715 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10f62717 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f6271a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6271d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f62720 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f62723 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62726 jb 0x10f626f4 */
  if (C.cf) goto L_10f626f4;
  /* 10f62728 mov esp, ebp */
  ESP = (EBP);
  /* 10f6272a pop ebp */
  EBP = (pop32());
  /* 10f6272b ret  */
  ESPCHK(0x10f62680u, _esp0);
  ESP += 4; return;
}

/* FUN_10012730 @ 0x10f62730 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10f62730(void) {
  FTRACE(0x10f62730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f62730 push ebp */
  push32((uint32_t)(EBP));
  /* 10f62731 mov ebp, esp */
  EBP = (ESP);
  /* 10f62733 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10f62736:;
  /* 10f62736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62739 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f6273c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f6273e je 0x10f62bac */
  if (C.zf) goto L_10f62bac;
  /* 10f62744 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62747 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6274a je 0x10f62bac */
  if (C.zf) goto L_10f62bac;
  /* 10f62750 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f62754 mov dword ptr [0x10f80938], 0 */
  w32((uint32_t)(0x10f80938), (0x0u));
  /* 10f6275e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f62765 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f6276b jmp 0x10f62776 */
  goto L_10f62776;
L_10f6276d:;
  /* 10f6276d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62770 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62773 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10f62776:;
  /* 10f62776 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f62779 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f6277c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6277f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f62782 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f62785 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62788 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f6278b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6278d jne 0x10f62791 */
  if (!C.zf) goto L_10f62791;
  /* 10f6278f jmp 0x10f6276d */
  goto L_10f6276d;
L_10f62791:;
  /* 10f62791 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f62794 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62797 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f6279a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6279d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f627a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f627a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f627a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f627a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f627ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f627b0 ja 0x10f62b00 */
  if ((!C.cf&&!C.zf)) goto L_10f62b00;
  /* 10f627b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f627b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f627bb mov al, byte ptr [ecx + 0x10f62bdc] */
  AL = (r8((uint32_t)(ECX + 0x10f62bdc)));
  /* 10f627c1 jmp dword ptr [eax*4 + 0x10f62bb0] */
  switch (EAX) {
    case 0: goto L_10f62a1f;
    case 1: goto L_10f62903;
    case 2: goto L_10f6288e;
    case 3: goto L_10f627c8;
    case 4: goto L_10f62806;
    case 5: goto L_10f62867;
    case 6: goto L_10f628b5;
    case 7: goto L_10f628dc;
    case 8: goto L_10f6294a;
    case 9: goto L_10f62844;
    case 10: goto L_10f62b00;
    default: x86_unimpl("switch@0x10f627c1 out of table"); return;
  }
L_10f627c8:;
  /* 10f627c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f627cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f627ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f627d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f627d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f627d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f627db ja 0x10f62801 */
  if ((!C.cf&&!C.zf)) goto L_10f62801;
  /* 10f627dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f627e0 jmp dword ptr [ecx*4 + 0x10f62c2f] */
  switch (ECX) {
    case 0: goto L_10f627e7;
    case 1: goto L_10f627f1;
    case 2: goto L_10f627f7;
    case 3: goto L_10f627fd;
    case 4: goto L_10f62825;
    case 5: goto L_10f6282f;
    case 6: goto L_10f62835;
    case 7: goto L_10f6283b;
    default: x86_unimpl("switch@0x10f627e0 out of table"); return;
  }
L_10f627e7:;
  /* 10f627e7 mov dword ptr [0x10f80938], 1 */
  w32((uint32_t)(0x10f80938), (0x1u));
L_10f627f1:;
  /* 10f627f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10f627f5 jmp 0x10f62801 */
  goto L_10f62801;
L_10f627f7:;
  /* 10f627f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10f627fb jmp 0x10f62801 */
  goto L_10f62801;
L_10f627fd:;
  /* 10f627fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10f62801:;
  /* 10f62801 jmp 0x10f62b00 */
  goto L_10f62b00;
L_10f62806:;
  /* 10f62806 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62809 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f6280c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f6280f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62812 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f62815 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62819 ja 0x10f6283f */
  if ((!C.cf&&!C.zf)) goto L_10f6283f;
  /* 10f6281b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f6281e jmp dword ptr [ecx*4 + 0x10f62c3f] */
  switch (ECX) {
    case 0: goto L_10f62825;
    case 1: goto L_10f6282f;
    case 2: goto L_10f62835;
    case 3: goto L_10f6283b;
    default: x86_unimpl("switch@0x10f6281e out of table"); return;
  }
L_10f62825:;
  /* 10f62825 mov dword ptr [0x10f80938], 1 */
  w32((uint32_t)(0x10f80938), (0x1u));
L_10f6282f:;
  /* 10f6282f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10f62833 jmp 0x10f6283f */
  goto L_10f6283f;
L_10f62835:;
  /* 10f62835 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10f62839 jmp 0x10f6283f */
  goto L_10f6283f;
L_10f6283b:;
  /* 10f6283b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10f6283f:;
  /* 10f6283f jmp 0x10f62b00 */
  goto L_10f62b00;
L_10f62844:;
  /* 10f62844 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62847 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f6284a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6284e je 0x10f62858 */
  if (C.zf) goto L_10f62858;
  /* 10f62850 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62854 je 0x10f6285e */
  if (C.zf) goto L_10f6285e;
  /* 10f62856 jmp 0x10f62862 */
  goto L_10f62862;
L_10f62858:;
  /* 10f62858 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10f6285c jmp 0x10f62862 */
  goto L_10f62862;
L_10f6285e:;
  /* 10f6285e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10f62862:;
  /* 10f62862 jmp 0x10f62b00 */
  goto L_10f62b00;
L_10f62867:;
  /* 10f62867 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6286a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f6286d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62871 je 0x10f6287b */
  if (C.zf) goto L_10f6287b;
  /* 10f62873 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62877 je 0x10f62885 */
  if (C.zf) goto L_10f62885;
  /* 10f62879 jmp 0x10f62889 */
  goto L_10f62889;
L_10f6287b:;
  /* 10f6287b mov dword ptr [0x10f80938], 1 */
  w32((uint32_t)(0x10f80938), (0x1u));
L_10f62885:;
  /* 10f62885 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10f62889:;
  /* 10f62889 jmp 0x10f62b00 */
  goto L_10f62b00;
L_10f6288e:;
  /* 10f6288e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62891 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10f62894 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62898 je 0x10f628a2 */
  if (C.zf) goto L_10f628a2;
  /* 10f6289a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6289e je 0x10f628ac */
  if (C.zf) goto L_10f628ac;
  /* 10f628a0 jmp 0x10f628b0 */
  goto L_10f628b0;
L_10f628a2:;
  /* 10f628a2 mov dword ptr [0x10f80938], 1 */
  w32((uint32_t)(0x10f80938), (0x1u));
L_10f628ac:;
  /* 10f628ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10f628b0:;
  /* 10f628b0 jmp 0x10f62b00 */
  goto L_10f62b00;
L_10f628b5:;
  /* 10f628b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f628b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10f628bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f628bf je 0x10f628c9 */
  if (C.zf) goto L_10f628c9;
  /* 10f628c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f628c5 je 0x10f628d3 */
  if (C.zf) goto L_10f628d3;
  /* 10f628c7 jmp 0x10f628d7 */
  goto L_10f628d7;
L_10f628c9:;
  /* 10f628c9 mov dword ptr [0x10f80938], 1 */
  w32((uint32_t)(0x10f80938), (0x1u));
L_10f628d3:;
  /* 10f628d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10f628d7:;
  /* 10f628d7 jmp 0x10f62b00 */
  goto L_10f62b00;
L_10f628dc:;
  /* 10f628dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f628df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10f628e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f628e6 je 0x10f628f0 */
  if (C.zf) goto L_10f628f0;
  /* 10f628e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f628ec je 0x10f628fa */
  if (C.zf) goto L_10f628fa;
  /* 10f628ee jmp 0x10f628fe */
  goto L_10f628fe;
L_10f628f0:;
  /* 10f628f0 mov dword ptr [0x10f80938], 1 */
  w32((uint32_t)(0x10f80938), (0x1u));
L_10f628fa:;
  /* 10f628fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10f628fe:;
  /* 10f628fe jmp 0x10f62b00 */
  goto L_10f62b00;
L_10f62903:;
  /* 10f62903 push 0x10f7c99c */
  push32((uint32_t)(0x10f7c99cu));
  /* 10f62908 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6290b push ecx */
  push32((uint32_t)(ECX));
  /* 10f6290c call 0x10f63160 */
  push32(0x10f62911u); f_10f63160();
  /* 10f62911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f62916 jne 0x10f62923 */
  if (!C.zf) goto L_10f62923;
  /* 10f62918 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6291b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6291e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f62921 jmp 0x10f62941 */
  goto L_10f62941;
L_10f62923:;
  /* 10f62923 push 0x10f7c998 */
  push32((uint32_t)(0x10f7c998u));
  /* 10f62928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6292b push eax */
  push32((uint32_t)(EAX));
  /* 10f6292c call 0x10f63160 */
  push32(0x10f62931u); f_10f63160();
  /* 10f62931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f62936 jne 0x10f62941 */
  if (!C.zf) goto L_10f62941;
  /* 10f62938 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6293b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6293e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f62941:;
  /* 10f62941 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10f62945 jmp 0x10f62b00 */
  goto L_10f62b00;
L_10f6294a:;
  /* 10f6294a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6294d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62951 jg 0x10f62961 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f62961;
  /* 10f62953 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f62956 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10f6295c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f6295f jmp 0x10f6296d */
  goto L_10f6296d;
L_10f62961:;
  /* 10f62961 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f62964 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10f6296a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10f6296d:;
  /* 10f6296d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62971 jle 0x10f62a14 */
  if ((C.zf||C.sf!=C.of)) goto L_10f62a14;
  /* 10f62977 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f6297a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6297d jbe 0x10f62a14 */
  if ((C.cf||C.zf)) goto L_10f62a14;
  /* 10f62983 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f62986 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f62988 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f6298a mov ecx, dword ptr [0x10f7ec98] */
  ECX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f62990 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f62992 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10f62996 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10f6299c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f6299e je 0x10f629d7 */
  if (C.zf) goto L_10f629d7;
  /* 10f629a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f629a3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f629a6 jbe 0x10f629d7 */
  if ((C.cf||C.zf)) goto L_10f629d7;
  /* 10f629a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f629ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f629ad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f629b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f629b2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10f629b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f629b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f629b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f629bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f629bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f629c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f629c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f629c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f629ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f629cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f629cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f629d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f629d5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f629d7:;
  /* 10f629d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f629da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f629dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f629df mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f629e1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f629e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f629e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f629e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f629eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f629ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f629f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f629f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f629f6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f629f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f629fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f629fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62a01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62a04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f62a06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62a09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62a0c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f62a0f jmp 0x10f6296d */
  goto L_10f6296d;
L_10f62a14:;
  /* 10f62a14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f62a17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f62a1a jmp 0x10f62736 */
  goto L_10f62736;
L_10f62a1f:;
  /* 10f62a1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62a22 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f62a25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f62a27 je 0x10f62af2 */
  if (C.zf) goto L_10f62af2;
  /* 10f62a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62a30 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62a33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10f62a36:;
  /* 10f62a36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62a39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f62a3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f62a3e je 0x10f62af0 */
  if (C.zf) goto L_10f62af0;
  /* 10f62a44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62a47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62a4a je 0x10f62af0 */
  if (C.zf) goto L_10f62af0;
  /* 10f62a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62a53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f62a56 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62a59 jne 0x10f62a69 */
  if (!C.zf) goto L_10f62a69;
  /* 10f62a5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62a5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62a61 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f62a64 jmp 0x10f62af0 */
  goto L_10f62af0;
L_10f62a69:;
  /* 10f62a69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62a6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f62a6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f62a70 mov edx, dword ptr [0x10f7ec98] */
  EDX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f62a76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f62a78 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10f62a7c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10f62a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f62a83 je 0x10f62abc */
  if (C.zf) goto L_10f62abc;
  /* 10f62a85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62a88 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62a8b jbe 0x10f62abc */
  if ((C.cf||C.zf)) goto L_10f62abc;
  /* 10f62a8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62a90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f62a92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62a95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f62a97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f62a99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62a9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f62a9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62aa1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62aa4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f62aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62aa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62aac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f62aaf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62ab2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f62ab4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62ab7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62aba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f62abc:;
  /* 10f62abc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62abf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f62ac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62ac4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f62ac6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10f62ac8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62acb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f62acd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62ad0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62ad3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f62ad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62ad8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62adb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f62ade mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62ae1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f62ae3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62ae6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62ae9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f62aeb jmp 0x10f62a36 */
  goto L_10f62a36;
L_10f62af0:;
  /* 10f62af0 jmp 0x10f62afb */
  goto L_10f62afb;
L_10f62af2:;
  /* 10f62af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62af5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62af8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f62afb:;
  /* 10f62afb jmp 0x10f62736 */
  goto L_10f62736;
L_10f62b00:;
  /* 10f62b00 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10f62b04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f62b06 je 0x10f62b2c */
  if (C.zf) goto L_10f62b2c;
  /* 10f62b08 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f62b0b push edx */
  push32((uint32_t)(EDX));
  /* 10f62b0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62b0f push eax */
  push32((uint32_t)(EAX));
  /* 10f62b10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62b14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62b17 push edx */
  push32((uint32_t)(EDX));
  /* 10f62b18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10f62b1b push eax */
  push32((uint32_t)(EAX));
  /* 10f62b1c call 0x10f61f60 */
  push32(0x10f62b21u); f_10f61f60();
  /* 10f62b21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62b24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f62b27 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10f62b2a jmp 0x10f62ba7 */
  goto L_10f62ba7;
L_10f62b2c:;
  /* 10f62b2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f62b31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f62b33 mov ecx, dword ptr [0x10f7ec98] */
  ECX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f62b39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f62b3b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10f62b3f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10f62b45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f62b47 je 0x10f62b78 */
  if (C.zf) goto L_10f62b78;
  /* 10f62b49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62b4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f62b4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62b51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f62b53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f62b55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62b58 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f62b5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62b5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62b60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f62b62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62b65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62b68 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10f62b6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62b6e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f62b70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62b73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62b76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10f62b78:;
  /* 10f62b78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62b7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f62b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62b80 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f62b82 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f62b84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62b87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f62b89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62b8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62b8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f62b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62b94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62b97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f62b9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62b9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f62b9f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62ba2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62ba5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f62ba7:;
  /* 10f62ba7 jmp 0x10f62736 */
  goto L_10f62736;
L_10f62bac:;
  /* 10f62bac mov esp, ebp */
  ESP = (EBP);
  /* 10f62bae pop ebp */
  EBP = (pop32());
  /* 10f62baf ret  */
  ESPCHK(0x10f62730u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c50 @ 0x10f62c50 (650 bytes, 178 insns) */
void f_10f62c50(void) {
  FTRACE(0x10f62c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f62c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10f62c51 mov ebp, esp */
  EBP = (ESP);
  /* 10f62c53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f62c59 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62c5d jne 0x10f62db9 */
  if (!C.zf) goto L_10f62db9;
  /* 10f62c63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62c66 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10f62c6c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10f62c72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f62c75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f62c7c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10f62c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62c88 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10f62c8e push edx */
  push32((uint32_t)(EDX));
  /* 10f62c8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62c92 push eax */
  push32((uint32_t)(EAX));
  /* 10f62c93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62c96 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62c97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62c9a push edx */
  push32((uint32_t)(EDX));
  /* 10f62c9b call 0x10f64070 */
  push32(0x10f62ca0u); f_10f64070();
  /* 10f62ca0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62ca3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f62ca6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62caa jne 0x10f62d3f */
  if (!C.zf) goto L_10f62d3f;
  /* 10f62cb0 call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f62cb6u);
  /* 10f62cb6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62cb9 je 0x10f62cc0 */
  if (C.zf) goto L_10f62cc0;
  /* 10f62cbb jmp 0x10f62d9d */
  goto L_10f62d9d;
L_10f62cc0:;
  /* 10f62cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62cc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10f62cca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62ccd push ecx */
  push32((uint32_t)(ECX));
  /* 10f62cce call 0x10f64070 */
  push32(0x10f62cd3u); f_10f64070();
  /* 10f62cd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62cd6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10f62cdc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62ce3 jne 0x10f62cea */
  if (!C.zf) goto L_10f62cea;
  /* 10f62ce5 jmp 0x10f62d9d */
  goto L_10f62d9d;
L_10f62cea:;
  /* 10f62cea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10f62cec push 0x10f7c9a4 */
  push32((uint32_t)(0x10f7c9a4u));
  /* 10f62cf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f62cf3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10f62cf9 push edx */
  push32((uint32_t)(EDX));
  /* 10f62cfa call 0x10f54a90 */
  push32(0x10f62cffu); f_10f54a90();
  /* 10f62cff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62d02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f62d05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62d09 jne 0x10f62d10 */
  if (!C.zf) goto L_10f62d10;
  /* 10f62d0b jmp 0x10f62d9d */
  goto L_10f62d9d;
L_10f62d10:;
  /* 10f62d10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f62d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62d19 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10f62d1f push eax */
  push32((uint32_t)(EAX));
  /* 10f62d20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62d24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62d27 push edx */
  push32((uint32_t)(EDX));
  /* 10f62d28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62d2b push eax */
  push32((uint32_t)(EAX));
  /* 10f62d2c call 0x10f64070 */
  push32(0x10f62d31u); f_10f64070();
  /* 10f62d31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62d34 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f62d37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62d3b jne 0x10f62d3f */
  if (!C.zf) goto L_10f62d3f;
  /* 10f62d3d jmp 0x10f62d9d */
  goto L_10f62d9d;
L_10f62d3f:;
  /* 10f62d3f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10f62d41 push 0x10f7c9a4 */
  push32((uint32_t)(0x10f7c9a4u));
  /* 10f62d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f62d48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f62d4b push ecx */
  push32((uint32_t)(ECX));
  /* 10f62d4c call 0x10f54a90 */
  push32(0x10f62d51u); f_10f54a90();
  /* 10f62d51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62d54 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10f62d5a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f62d5c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10f62d62 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62d65 jne 0x10f62d69 */
  if (!C.zf) goto L_10f62d69;
  /* 10f62d67 jmp 0x10f62d9d */
  goto L_10f62d9d;
L_10f62d69:;
  /* 10f62d69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f62d6c push ecx */
  push32((uint32_t)(ECX));
  /* 10f62d6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62d70 push edx */
  push32((uint32_t)(EDX));
  /* 10f62d71 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10f62d77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f62d79 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62d7a call 0x10f582b0 */
  push32(0x10f62d7fu); f_10f582b0();
  /* 10f62d7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62d82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62d86 je 0x10f62d96 */
  if (C.zf) goto L_10f62d96;
  /* 10f62d88 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f62d8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62d8d push edx */
  push32((uint32_t)(EDX));
  /* 10f62d8e call 0x10f55520 */
  push32(0x10f62d93u); f_10f55520();
  /* 10f62d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f62d96:;
  /* 10f62d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f62d98 jmp 0x10f62ed6 */
  goto L_10f62ed6;
L_10f62d9d:;
  /* 10f62d9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62da1 je 0x10f62db1 */
  if (C.zf) goto L_10f62db1;
  /* 10f62da3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f62da5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f62da8 push eax */
  push32((uint32_t)(EAX));
  /* 10f62da9 call 0x10f55520 */
  push32(0x10f62daeu); f_10f55520();
  /* 10f62dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f62db1:;
  /* 10f62db1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f62db4 jmp 0x10f62ed6 */
  goto L_10f62ed6;
L_10f62db9:;
  /* 10f62db9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62dbd jne 0x10f62ed3 */
  if (!C.zf) goto L_10f62ed3;
  /* 10f62dc3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10f62dcd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62dd0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10f62dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62dd8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10f62dde push edx */
  push32((uint32_t)(EDX));
  /* 10f62ddf push 0x10f80850 */
  push32((uint32_t)(0x10f80850u));
  /* 10f62de4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62de7 push eax */
  push32((uint32_t)(EAX));
  /* 10f62de8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62deb push ecx */
  push32((uint32_t)(ECX));
  /* 10f62dec call 0x10f63ed0 */
  push32(0x10f62df1u); f_10f63ed0();
  /* 10f62df1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62df4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f62df6 jne 0x10f62e00 */
  if (!C.zf) goto L_10f62e00;
  /* 10f62df8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f62dfb jmp 0x10f62ed6 */
  goto L_10f62ed6;
L_10f62e00:;
  /* 10f62e00 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10f62e06 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10f62e09 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10f62e13 jmp 0x10f62e24 */
  goto L_10f62e24;
L_10f62e15:;
  /* 10f62e15 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f62e1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62e1e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10f62e24:;
  /* 10f62e24 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62e2b jge 0x10f62ecf */
  if ((C.sf==C.of)) goto L_10f62ecf;
  /* 10f62e31 cmp dword ptr [0x10f7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62e38 jle 0x10f62e6b */
  if ((C.zf||C.sf!=C.of)) goto L_10f62e6b;
  /* 10f62e3a push 4 */
  push32((uint32_t)(0x4u));
  /* 10f62e3c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f62e42 mov dl, byte ptr [ecx*2 + 0x10f80850] */
  DL = (r8((uint32_t)(ECX*2 + 0x10f80850)));
  /* 10f62e49 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10f62e4f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10f62e55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f62e5a push eax */
  push32((uint32_t)(EAX));
  /* 10f62e5b call 0x10f5aaa0 */
  push32(0x10f62e60u); f_10f5aaa0();
  /* 10f62e60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62e63 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10f62e69 jmp 0x10f62e9e */
  goto L_10f62e9e;
L_10f62e6b:;
  /* 10f62e6b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10f62e71 mov dl, byte ptr [ecx*2 + 0x10f80850] */
  DL = (r8((uint32_t)(ECX*2 + 0x10f80850)));
  /* 10f62e78 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10f62e7e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10f62e84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f62e89 mov ecx, dword ptr [0x10f7ec98] */
  ECX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f62e8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f62e91 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10f62e95 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f62e98 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10f62e9e:;
  /* 10f62e9e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62ea5 je 0x10f62ec8 */
  if (C.zf) goto L_10f62ec8;
  /* 10f62ea7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10f62ead movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f62eb0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f62eb3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10f62eba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10f62ebe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10f62ec4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f62ec6 jmp 0x10f62eca */
  goto L_10f62eca;
L_10f62ec8:;
  /* 10f62ec8 jmp 0x10f62ecf */
  goto L_10f62ecf;
L_10f62eca:;
  /* 10f62eca jmp 0x10f62e15 */
  goto L_10f62e15;
L_10f62ecf:;
  /* 10f62ecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f62ed1 jmp 0x10f62ed6 */
  goto L_10f62ed6;
L_10f62ed3:;
  /* 10f62ed3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f62ed6:;
  /* 10f62ed6 mov esp, ebp */
  ESP = (EBP);
  /* 10f62ed8 pop ebp */
  EBP = (pop32());
  /* 10f62ed9 ret  */
  ESPCHK(0x10f62c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ee0 @ 0x10f62ee0 (10 bytes, 5 insns) */
void f_10f62ee0(void) {
  FTRACE(0x10f62ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f62ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f62ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10f62ee3 mov eax, dword ptr [0x10f7fd88] */
  EAX = (r32((uint32_t)(0x10f7fd88)));
  /* 10f62ee8 pop ebp */
  EBP = (pop32());
  /* 10f62ee9 ret  */
  ESPCHK(0x10f62ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x10f62ef0 (575 bytes, 196 insns) */
void f_10f62ef0(void) {
  FTRACE(0x10f62ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f62ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f62ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10f62ef3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f62ef5 push 0x10f7c9b0 */
  push32((uint32_t)(0x10f7c9b0u));
  /* 10f62efa push 0x10f5db98 */
  push32((uint32_t)(0x10f5db98u));
  /* 10f62eff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f62f05 push eax */
  push32((uint32_t)(EAX));
  /* 10f62f06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f62f0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62f10 push ebx */
  push32((uint32_t)(EBX));
  /* 10f62f11 push esi */
  push32((uint32_t)(ESI));
  /* 10f62f12 push edi */
  push32((uint32_t)(EDI));
  /* 10f62f13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f62f16 cmp dword ptr [0x10f8085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62f1d jne 0x10f62f6e */
  if (!C.zf) goto L_10f62f6e;
  /* 10f62f1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10f62f22 push eax */
  push32((uint32_t)(EAX));
  /* 10f62f23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f62f25 push 0x10f7c0e4 */
  push32((uint32_t)(0x10f7c0e4u));
  /* 10f62f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f62f2c call dword ptr [0x10f832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f4))), 0x10f62f32u);
  /* 10f62f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f62f34 je 0x10f62f42 */
  if (C.zf) goto L_10f62f42;
  /* 10f62f36 mov dword ptr [0x10f8085c], 1 */
  w32((uint32_t)(0x10f8085c), (0x1u));
  /* 10f62f40 jmp 0x10f62f6e */
  goto L_10f62f6e;
L_10f62f42:;
  /* 10f62f42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10f62f45 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62f46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f62f48 push 0x10f7c0e0 */
  push32((uint32_t)(0x10f7c0e0u));
  /* 10f62f4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f62f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62f51 call dword ptr [0x10f83304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83304))), 0x10f62f57u);
  /* 10f62f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f62f59 je 0x10f62f67 */
  if (C.zf) goto L_10f62f67;
  /* 10f62f5b mov dword ptr [0x10f8085c], 2 */
  w32((uint32_t)(0x10f8085c), (0x2u));
  /* 10f62f65 jmp 0x10f62f6e */
  goto L_10f62f6e;
L_10f62f67:;
  /* 10f62f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f62f69 jmp 0x10f63149 */
  goto L_10f63149;
L_10f62f6e:;
  /* 10f62f6e cmp dword ptr [0x10f8085c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f8085c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62f75 jne 0x10f62f92 */
  if (!C.zf) goto L_10f62f92;
  /* 10f62f77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f62f7a push edx */
  push32((uint32_t)(EDX));
  /* 10f62f7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62f7e push eax */
  push32((uint32_t)(EAX));
  /* 10f62f7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62f82 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62f83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f62f86 push edx */
  push32((uint32_t)(EDX));
  /* 10f62f87 call dword ptr [0x10f832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832f4))), 0x10f62f8du);
  /* 10f62f8d jmp 0x10f63149 */
  goto L_10f63149;
L_10f62f92:;
  /* 10f62f92 cmp dword ptr [0x10f8085c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f8085c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62f99 jne 0x10f63147 */
  if (!C.zf) goto L_10f63147;
  /* 10f62f9f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62fa3 jne 0x10f62fad */
  if (!C.zf) goto L_10f62fad;
  /* 10f62fa5 mov eax, dword ptr [0x10f807d0] */
  EAX = (r32((uint32_t)(0x10f807d0)));
  /* 10f62faa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10f62fad:;
  /* 10f62fad push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62faf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f62fb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f62fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f62fb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f62fbc push edx */
  push32((uint32_t)(EDX));
  /* 10f62fbd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f62fc2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f62fc5 push eax */
  push32((uint32_t)(EAX));
  /* 10f62fc6 call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f62fccu);
  /* 10f62fcc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f62fcf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f62fd3 jne 0x10f62fdc */
  if (!C.zf) goto L_10f62fdc;
  /* 10f62fd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f62fd7 jmp 0x10f63149 */
  goto L_10f63149;
L_10f62fdc:;
  /* 10f62fdc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f62fe3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f62fe6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f62fe9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f62feb call 0x10f57c30 */
  push32(0x10f62ff0u); f_10f57c30();
  /* 10f62ff0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10f62ff3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f62ff6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f62ff9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f62ffc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f62fff push edx */
  push32((uint32_t)(EDX));
  /* 10f63000 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63002 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f63005 push eax */
  push32((uint32_t)(EAX));
  /* 10f63006 call 0x10f58800 */
  push32(0x10f6300bu); f_10f58800();
  /* 10f6300b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6300e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f63015 jmp 0x10f6302e */
  goto L_10f6302e;
  /* 10f63017 mov eax, 1 */
  EAX = (0x1u);
  /* 10f6301c ret  */
  ESPCHK(0x10f62ef0u, _esp0);
  ESP += 4; return;
  /* 10f6301d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f63020 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10f63027 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f6302e:;
  /* 10f6302e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63032 jne 0x10f6303b */
  if (!C.zf) goto L_10f6303b;
  /* 10f63034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63036 jmp 0x10f63149 */
  goto L_10f63149;
L_10f6303b:;
  /* 10f6303b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6303d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6303f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f63042 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63043 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f63046 push edx */
  push32((uint32_t)(EDX));
  /* 10f63047 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6304a push eax */
  push32((uint32_t)(EAX));
  /* 10f6304b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6304e push ecx */
  push32((uint32_t)(ECX));
  /* 10f6304f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f63054 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f63057 push edx */
  push32((uint32_t)(EDX));
  /* 10f63058 call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f6305eu);
  /* 10f6305e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f63060 jne 0x10f63069 */
  if (!C.zf) goto L_10f63069;
  /* 10f63062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63064 jmp 0x10f63149 */
  goto L_10f63149;
L_10f63069:;
  /* 10f63069 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f63070 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f63073 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10f63077 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6307a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f6307c call 0x10f57c30 */
  push32(0x10f63081u); f_10f57c30();
  /* 10f63081 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10f63084 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f63087 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f6308a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f6308d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f63094 jmp 0x10f630ad */
  goto L_10f630ad;
  /* 10f63096 mov eax, 1 */
  EAX = (0x1u);
  /* 10f6309b ret  */
  ESPCHK(0x10f62ef0u, _esp0);
  ESP += 4; return;
  /* 10f6309c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f6309f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f630a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f630ad:;
  /* 10f630ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f630b1 jne 0x10f630ba */
  if (!C.zf) goto L_10f630ba;
  /* 10f630b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f630b5 jmp 0x10f63149 */
  goto L_10f63149;
L_10f630ba:;
  /* 10f630ba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f630be jne 0x10f630c9 */
  if (!C.zf) goto L_10f630c9;
  /* 10f630c0 mov edx, dword ptr [0x10f807c0] */
  EDX = (r32((uint32_t)(0x10f807c0)));
  /* 10f630c6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10f630c9:;
  /* 10f630c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f630cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f630cf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10f630d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f630d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f630db mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10f630e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f630e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f630e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f630e9 push edx */
  push32((uint32_t)(EDX));
  /* 10f630ea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f630ed push eax */
  push32((uint32_t)(EAX));
  /* 10f630ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f630f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f630f2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f630f5 push edx */
  push32((uint32_t)(EDX));
  /* 10f630f6 call dword ptr [0x10f83304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83304))), 0x10f630fcu);
  /* 10f630fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f630ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63102 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f63105 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63107 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10f6310c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63112 je 0x10f63128 */
  if (C.zf) goto L_10f63128;
  /* 10f63114 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63117 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f6311a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f6311c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10f63120 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63126 je 0x10f6312c */
  if (C.zf) goto L_10f6312c;
L_10f63128:;
  /* 10f63128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6312a jmp 0x10f63149 */
  goto L_10f63149;
L_10f6312c:;
  /* 10f6312c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6312f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f63131 push eax */
  push32((uint32_t)(EAX));
  /* 10f63132 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f63135 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63136 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f63139 push edx */
  push32((uint32_t)(EDX));
  /* 10f6313a call 0x10f5c980 */
  push32(0x10f6313fu); f_10f5c980();
  /* 10f6313f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63142 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f63145 jmp 0x10f63149 */
  goto L_10f63149;
L_10f63147:;
  /* 10f63147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f63149:;
  /* 10f63149 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10f6314c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f6314f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f63156 pop edi */
  EDI = (pop32());
  /* 10f63157 pop esi */
  ESI = (pop32());
  /* 10f63158 pop ebx */
  EBX = (pop32());
  /* 10f63159 mov esp, ebp */
  ESP = (EBP);
  /* 10f6315b pop ebp */
  EBP = (pop32());
  /* 10f6315c ret  */
  ESPCHK(0x10f62ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013160 @ 0x10f63160 (208 bytes, 85 insns) */
void f_10f63160(void) {
  FTRACE(0x10f63160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f63160 push ebp */
  push32((uint32_t)(EBP));
  /* 10f63161 mov ebp, esp */
  EBP = (ESP);
  /* 10f63163 push edi */
  push32((uint32_t)(EDI));
  /* 10f63164 push esi */
  push32((uint32_t)(ESI));
  /* 10f63165 push ebx */
  push32((uint32_t)(EBX));
  /* 10f63166 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f63169 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6316c lea eax, [0x10f807b8] */
  EAX = ((uint32_t)(0x10f807b8));
  /* 10f63172 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63176 jne 0x10f631b3 */
  if (!C.zf) goto L_10f631b3;
  /* 10f63178 mov al, 0xff */
  AL = (0xffu);
  /* 10f6317a mov edi, edi */
  EDI = (EDI);
L_10f6317c:;
  /* 10f6317c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f6317e je 0x10f631ae */
  if (C.zf) goto L_10f631ae;
  /* 10f63180 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f63182 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f63183 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10f63185 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f63186 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f63188 je 0x10f6317c */
  if (C.zf) goto L_10f6317c;
  /* 10f6318a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f6318c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f6318e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f63190 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10f63193 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f63195 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f63197 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10f63199 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f6319b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f6319d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f6319f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10f631a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f631a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f631a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f631a8 je 0x10f6317c */
  if (C.zf) goto L_10f6317c;
  /* 10f631aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f631ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10f631ae:;
  /* 10f631ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10f631b1 jmp 0x10f6322b */
  goto L_10f6322b;
L_10f631b3:;
  /* 10f631b3 lock inc dword ptr [0x10f8094c] */
  x86_unimpl("lock inc @ 0x10f631b3");
  /* 10f631ba cmp dword ptr [0x10f8093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f631c1 jg 0x10f631c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f631c7;
  /* 10f631c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f631c5 jmp 0x10f631dc */
  goto L_10f631dc;
L_10f631c7:;
  /* 10f631c7 lock dec dword ptr [0x10f8094c] */
  x86_unimpl("lock dec @ 0x10f631c7");
  /* 10f631ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f631d0 call 0x10f58490 */
  push32(0x10f631d5u); f_10f58490();
  /* 10f631d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10f631dc:;
  /* 10f631dc mov eax, 0xff */
  EAX = (0xffu);
  /* 10f631e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f631e3 nop  */
  /* nop */
L_10f631e4:;
  /* 10f631e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f631e6 je 0x10f6320f */
  if (C.zf) goto L_10f6320f;
  /* 10f631e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f631ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f631eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f631ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f631ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f631f0 je 0x10f631e4 */
  if (C.zf) goto L_10f631e4;
  /* 10f631f2 push eax */
  push32((uint32_t)(EAX));
  /* 10f631f3 push ebx */
  push32((uint32_t)(EBX));
  /* 10f631f4 call 0x10f642d0 */
  push32(0x10f631f9u); f_10f642d0();
  /* 10f631f9 mov ebx, eax */
  EBX = (EAX);
  /* 10f631fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f631fe call 0x10f642d0 */
  push32(0x10f63203u); f_10f642d0();
  /* 10f63203 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63206 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f63208 je 0x10f631e4 */
  if (C.zf) goto L_10f631e4;
  /* 10f6320a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f6320c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10f6320f:;
  /* 10f6320f mov ebx, eax */
  EBX = (EAX);
  /* 10f63211 pop eax */
  EAX = (pop32());
  /* 10f63212 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63214 jne 0x10f6321f */
  if (!C.zf) goto L_10f6321f;
  /* 10f63216 lock dec dword ptr [0x10f8094c] */
  x86_unimpl("lock dec @ 0x10f63216");
  /* 10f6321d jmp 0x10f63229 */
  goto L_10f63229;
L_10f6321f:;
  /* 10f6321f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f63221 call 0x10f58530 */
  push32(0x10f63226u); f_10f58530();
  /* 10f63226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f63229:;
  /* 10f63229 mov eax, ebx */
  EAX = (EBX);
L_10f6322b:;
  /* 10f6322b pop ebx */
  EBX = (pop32());
  /* 10f6322c pop esi */
  ESI = (pop32());
  /* 10f6322d pop edi */
  EDI = (pop32());
  /* 10f6322e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f6322f ret  */
  ESPCHK(0x10f63160u, _esp0);
  ESP += 4; return;
}

/* FUN_10013230 @ 0x10f63230 (257 bytes, 103 insns) */
void f_10f63230(void) {
  FTRACE(0x10f63230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f63230 push ebp */
  push32((uint32_t)(EBP));
  /* 10f63231 mov ebp, esp */
  EBP = (ESP);
  /* 10f63233 push edi */
  push32((uint32_t)(EDI));
  /* 10f63234 push esi */
  push32((uint32_t)(ESI));
  /* 10f63235 push ebx */
  push32((uint32_t)(EBX));
  /* 10f63236 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63239 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6323b je 0x10f6332a */
  if (C.zf) goto L_10f6332a;
  /* 10f63241 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63244 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f63247 lea eax, [0x10f807b8] */
  EAX = ((uint32_t)(0x10f807b8));
  /* 10f6324d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63251 jne 0x10f632a1 */
  if (!C.zf) goto L_10f632a1;
  /* 10f63253 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10f63255 mov bl, 0x5a */
  BL = (0x5au);
  /* 10f63257 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10f63259 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f6325c:;
  /* 10f6325c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10f6325e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10f63260 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10f63262 je 0x10f63285 */
  if (C.zf) goto L_10f63285;
  /* 10f63264 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10f63266 je 0x10f63285 */
  if (C.zf) goto L_10f63285;
  /* 10f63268 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f63269 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f6326a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f6326c jb 0x10f63274 */
  if (C.cf) goto L_10f63274;
  /* 10f6326e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f63270 ja 0x10f63274 */
  if ((!C.cf&&!C.zf)) goto L_10f63274;
  /* 10f63272 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10f63274:;
  /* 10f63274 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f63276 jb 0x10f6327e */
  if (C.cf) goto L_10f6327e;
  /* 10f63278 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f6327a ja 0x10f6327e */
  if ((!C.cf&&!C.zf)) goto L_10f6327e;
  /* 10f6327c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10f6327e:;
  /* 10f6327e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f63280 jne 0x10f6328f */
  if (!C.zf) goto L_10f6328f;
  /* 10f63282 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f63283 jne 0x10f6325c */
  if (!C.zf) goto L_10f6325c;
L_10f63285:;
  /* 10f63285 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63287 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f63289 je 0x10f6332a */
  if (C.zf) goto L_10f6332a;
L_10f6328f:;
  /* 10f6328f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10f63294 jb 0x10f6332a */
  if (C.cf) goto L_10f6332a;
  /* 10f6329a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f6329c jmp 0x10f6332a */
  goto L_10f6332a;
L_10f632a1:;
  /* 10f632a1 lock inc dword ptr [0x10f8094c] */
  x86_unimpl("lock inc @ 0x10f632a1");
  /* 10f632a8 cmp dword ptr [0x10f8093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f632af jg 0x10f632b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f632b5;
  /* 10f632b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f632b3 jmp 0x10f632ce */
  goto L_10f632ce;
L_10f632b5:;
  /* 10f632b5 lock dec dword ptr [0x10f8094c] */
  x86_unimpl("lock dec @ 0x10f632b5");
  /* 10f632bc mov ebx, ecx */
  EBX = (ECX);
  /* 10f632be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f632c0 call 0x10f58490 */
  push32(0x10f632c5u); f_10f58490();
  /* 10f632c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10f632cc mov ecx, ebx */
  ECX = (EBX);
L_10f632ce:;
  /* 10f632ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f632d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f632d2 mov edi, edi */
  EDI = (EDI);
L_10f632d4:;
  /* 10f632d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f632d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f632d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10f632da je 0x10f632ff */
  if (C.zf) goto L_10f632ff;
  /* 10f632dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10f632de je 0x10f632ff */
  if (C.zf) goto L_10f632ff;
  /* 10f632e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f632e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f632e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f632e3 push eax */
  push32((uint32_t)(EAX));
  /* 10f632e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f632e5 call 0x10f642d0 */
  push32(0x10f632eau); f_10f642d0();
  /* 10f632ea mov ebx, eax */
  EBX = (EAX);
  /* 10f632ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f632ef call 0x10f642d0 */
  push32(0x10f632f4u); f_10f642d0();
  /* 10f632f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f632f7 pop ecx */
  ECX = (pop32());
  /* 10f632f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f632fa jne 0x10f63305 */
  if (!C.zf) goto L_10f63305;
  /* 10f632fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f632fd jne 0x10f632d4 */
  if (!C.zf) goto L_10f632d4;
L_10f632ff:;
  /* 10f632ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63301 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63303 je 0x10f6330e */
  if (C.zf) goto L_10f6330e;
L_10f63305:;
  /* 10f63305 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10f6330a jb 0x10f6330e */
  if (C.cf) goto L_10f6330e;
  /* 10f6330c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10f6330e:;
  /* 10f6330e pop eax */
  EAX = (pop32());
  /* 10f6330f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63311 jne 0x10f6331c */
  if (!C.zf) goto L_10f6331c;
  /* 10f63313 lock dec dword ptr [0x10f8094c] */
  x86_unimpl("lock dec @ 0x10f63313");
  /* 10f6331a jmp 0x10f6332a */
  goto L_10f6332a;
L_10f6331c:;
  /* 10f6331c mov ebx, ecx */
  EBX = (ECX);
  /* 10f6331e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f63320 call 0x10f58530 */
  push32(0x10f63325u); f_10f58530();
  /* 10f63325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63328 mov ecx, ebx */
  ECX = (EBX);
L_10f6332a:;
  /* 10f6332a mov eax, ecx */
  EAX = (ECX);
  /* 10f6332c pop ebx */
  EBX = (pop32());
  /* 10f6332d pop esi */
  ESI = (pop32());
  /* 10f6332e pop edi */
  EDI = (pop32());
  /* 10f6332f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f63330 ret  */
  ESPCHK(0x10f63230u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x10f63340 (255 bytes, 88 insns) */
void f_10f63340(void) {
  FTRACE(0x10f63340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f63340 push ebp */
  push32((uint32_t)(EBP));
  /* 10f63341 mov ebp, esp */
  EBP = (ESP);
  /* 10f63343 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10f63346:;
  /* 10f63346 cmp dword ptr [0x10f7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6334d jle 0x10f63366 */
  if ((C.zf||C.sf!=C.of)) goto L_10f63366;
  /* 10f6334f push 8 */
  push32((uint32_t)(0x8u));
  /* 10f63351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63354 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63356 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f63358 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63359 call 0x10f5aaa0 */
  push32(0x10f6335eu); f_10f5aaa0();
  /* 10f6335e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63361 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f63364 jmp 0x10f6337f */
  goto L_10f6337f;
L_10f63366:;
  /* 10f63366 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6336b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f6336d mov ecx, dword ptr [0x10f7ec98] */
  ECX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f63373 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63375 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10f63379 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10f6337c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10f6337f:;
  /* 10f6337f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63383 je 0x10f63390 */
  if (C.zf) goto L_10f63390;
  /* 10f63385 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63388 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6338b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f6338e jmp 0x10f63346 */
  goto L_10f63346;
L_10f63390:;
  /* 10f63390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63393 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63395 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f63397 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f6339a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6339d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f633a0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f633a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f633a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f633a9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f633ad je 0x10f633b5 */
  if (C.zf) goto L_10f633b5;
  /* 10f633af cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f633b3 jne 0x10f633c8 */
  if (!C.zf) goto L_10f633c8;
L_10f633b5:;
  /* 10f633b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f633b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f633ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f633bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f633bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f633c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f633c5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10f633c8:;
  /* 10f633c8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10f633cf:;
  /* 10f633cf cmp dword ptr [0x10f7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f633d6 jle 0x10f633eb */
  if ((C.zf||C.sf!=C.of)) goto L_10f633eb;
  /* 10f633d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f633da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f633dd push edx */
  push32((uint32_t)(EDX));
  /* 10f633de call 0x10f5aaa0 */
  push32(0x10f633e3u); f_10f5aaa0();
  /* 10f633e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f633e6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f633e9 jmp 0x10f63400 */
  goto L_10f63400;
L_10f633eb:;
  /* 10f633eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f633ee mov ecx, dword ptr [0x10f7ec98] */
  ECX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f633f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f633f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10f633fa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f633fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10f63400:;
  /* 10f63400 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63404 je 0x10f6342b */
  if (C.zf) goto L_10f6342b;
  /* 10f63406 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63409 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6340c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6340f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10f63413 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f63416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63419 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6341b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f6341d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f63420 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63423 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63426 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f63429 jmp 0x10f633cf */
  goto L_10f633cf;
L_10f6342b:;
  /* 10f6342b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6342f jne 0x10f63438 */
  if (!C.zf) goto L_10f63438;
  /* 10f63431 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63434 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f63436 jmp 0x10f6343b */
  goto L_10f6343b;
L_10f63438:;
  /* 10f63438 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10f6343b:;
  /* 10f6343b mov esp, ebp */
  ESP = (EBP);
  /* 10f6343d pop ebp */
  EBP = (pop32());
  /* 10f6343e ret  */
  ESPCHK(0x10f63340u, _esp0);
  ESP += 4; return;
}

/* FUN_10013440 @ 0x10f63440 (17 bytes, 8 insns) */
void f_10f63440(void) {
  FTRACE(0x10f63440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f63440 push ebp */
  push32((uint32_t)(EBP));
  /* 10f63441 mov ebp, esp */
  EBP = (ESP);
  /* 10f63443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63446 push eax */
  push32((uint32_t)(EAX));
  /* 10f63447 call 0x10f63340 */
  push32(0x10f6344cu); f_10f63340();
  /* 10f6344c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6344f pop ebp */
  EBP = (pop32());
  /* 10f63450 ret  */
  ESPCHK(0x10f63440u, _esp0);
  ESP += 4; return;
}

/* FUN_10013460 @ 0x10f63460 (297 bytes, 106 insns) */
void f_10f63460(void) {
  FTRACE(0x10f63460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f63460 push ebp */
  push32((uint32_t)(EBP));
  /* 10f63461 mov ebp, esp */
  EBP = (ESP);
  /* 10f63463 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63466 push esi */
  push32((uint32_t)(ESI));
L_10f63467:;
  /* 10f63467 cmp dword ptr [0x10f7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6346e jle 0x10f63487 */
  if ((C.zf||C.sf!=C.of)) goto L_10f63487;
  /* 10f63470 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f63472 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63475 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63477 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f63479 push ecx */
  push32((uint32_t)(ECX));
  /* 10f6347a call 0x10f5aaa0 */
  push32(0x10f6347fu); f_10f5aaa0();
  /* 10f6347f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63482 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f63485 jmp 0x10f634a0 */
  goto L_10f634a0;
L_10f63487:;
  /* 10f63487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6348a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6348c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f6348e mov ecx, dword ptr [0x10f7ec98] */
  ECX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f63494 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63496 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10f6349a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10f6349d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10f634a0:;
  /* 10f634a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f634a4 je 0x10f634b1 */
  if (C.zf) goto L_10f634b1;
  /* 10f634a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f634a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f634ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f634af jmp 0x10f63467 */
  goto L_10f63467;
L_10f634b1:;
  /* 10f634b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f634b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f634b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f634b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f634bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f634be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f634c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f634c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f634c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f634ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f634ce je 0x10f634d6 */
  if (C.zf) goto L_10f634d6;
  /* 10f634d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f634d4 jne 0x10f634e9 */
  if (!C.zf) goto L_10f634e9;
L_10f634d6:;
  /* 10f634d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f634d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f634db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f634dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f634e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f634e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f634e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10f634e9:;
  /* 10f634e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f634f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10f634f7:;
  /* 10f634f7 cmp dword ptr [0x10f7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f634fe jle 0x10f63513 */
  if ((C.zf||C.sf!=C.of)) goto L_10f63513;
  /* 10f63500 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f63502 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f63505 push edx */
  push32((uint32_t)(EDX));
  /* 10f63506 call 0x10f5aaa0 */
  push32(0x10f6350bu); f_10f5aaa0();
  /* 10f6350b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6350e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f63511 jmp 0x10f63528 */
  goto L_10f63528;
L_10f63513:;
  /* 10f63513 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f63516 mov ecx, dword ptr [0x10f7ec98] */
  ECX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f6351c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f6351e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10f63522 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f63525 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10f63528:;
  /* 10f63528 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6352c je 0x10f63569 */
  if (C.zf) goto L_10f63569;
  /* 10f6352e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63530 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f63532 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63535 push eax */
  push32((uint32_t)(EAX));
  /* 10f63536 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63539 push ecx */
  push32((uint32_t)(ECX));
  /* 10f6353a call 0x10f64400 */
  push32(0x10f6353fu); f_10f64400();
  /* 10f6353f mov ecx, eax */
  ECX = (EAX);
  /* 10f63541 mov esi, edx */
  ESI = (EDX);
  /* 10f63543 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f63546 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63549 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f6354a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6354c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6354e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f63551 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10f63554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63559 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f6355b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f6355e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63561 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63564 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10f63567 jmp 0x10f634f7 */
  goto L_10f634f7;
L_10f63569:;
  /* 10f63569 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6356d jne 0x10f6357e */
  if (!C.zf) goto L_10f6357e;
  /* 10f6356f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63572 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f63574 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63577 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6357a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f6357c jmp 0x10f63584 */
  goto L_10f63584;
L_10f6357e:;
  /* 10f6357e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63581 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10f63584:;
  /* 10f63584 pop esi */
  ESI = (pop32());
  /* 10f63585 mov esp, ebp */
  ESP = (EBP);
  /* 10f63587 pop ebp */
  EBP = (pop32());
  /* 10f63588 ret  */
  ESPCHK(0x10f63460u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x10f63590 (61 bytes, 18 insns) */
void f_10f63590(void) {
  FTRACE(0x10f63590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f63590 push ebp */
  push32((uint32_t)(EBP));
  /* 10f63591 mov ebp, esp */
  EBP = (ESP);
  /* 10f63593 cmp dword ptr [0x10f80918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6359a jne 0x10f635cb */
  if (!C.zf) goto L_10f635cb;
  /* 10f6359c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f6359e call 0x10f58490 */
  push32(0x10f635a3u); f_10f58490();
  /* 10f635a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f635a6 cmp dword ptr [0x10f80918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f635ad jne 0x10f635c1 */
  if (!C.zf) goto L_10f635c1;
  /* 10f635af call 0x10f635f0 */
  push32(0x10f635b4u); f_10f635f0();
  /* 10f635b4 mov eax, dword ptr [0x10f80918] */
  EAX = (r32((uint32_t)(0x10f80918)));
  /* 10f635b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f635bc mov dword ptr [0x10f80918], eax */
  w32((uint32_t)(0x10f80918), (EAX));
L_10f635c1:;
  /* 10f635c1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f635c3 call 0x10f58530 */
  push32(0x10f635c8u); f_10f58530();
  /* 10f635c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f635cb:;
  /* 10f635cb pop ebp */
  EBP = (pop32());
  /* 10f635cc ret  */
  ESPCHK(0x10f63590u, _esp0);
  ESP += 4; return;
}

/* FUN_100135d0 @ 0x10f635d0 (30 bytes, 11 insns) */
void f_10f635d0(void) {
  FTRACE(0x10f635d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f635d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f635d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f635d3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f635d5 call 0x10f58490 */
  push32(0x10f635dau); f_10f58490();
  /* 10f635da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f635dd call 0x10f635f0 */
  push32(0x10f635e2u); f_10f635f0();
  /* 10f635e2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f635e4 call 0x10f58530 */
  push32(0x10f635e9u); f_10f58530();
  /* 10f635e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f635ec pop ebp */
  EBP = (pop32());
  /* 10f635ed ret  */
  ESPCHK(0x10f635d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135f0 @ 0x10f635f0 (939 bytes, 266 insns) */
void f_10f635f0(void) {
  FTRACE(0x10f635f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f635f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f635f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f635f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f635f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f635fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f635ff call 0x10f58490 */
  push32(0x10f63604u); f_10f58490();
  /* 10f63604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63607 mov dword ptr [0x10f80860], 0 */
  w32((uint32_t)(0x10f80860), (0x0u));
  /* 10f63611 mov dword ptr [0x10f7fe38], 0xffffffff */
  w32((uint32_t)(0x10f7fe38), (0xffffffffu));
  /* 10f6361b mov eax, dword ptr [0x10f7fe38] */
  EAX = (r32((uint32_t)(0x10f7fe38)));
  /* 10f63620 mov dword ptr [0x10f7fe28], eax */
  w32((uint32_t)(0x10f7fe28), (EAX));
  /* 10f63625 push 0x10f7ca10 */
  push32((uint32_t)(0x10f7ca10u));
  /* 10f6362a call 0x10f64470 */
  push32(0x10f6362fu); f_10f64470();
  /* 10f6362f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63632 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f63635 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63639 jne 0x10f63773 */
  if (!C.zf) goto L_10f63773;
  /* 10f6363f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f63641 call 0x10f58530 */
  push32(0x10f63646u); f_10f58530();
  /* 10f63646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63649 push 0x10f80868 */
  push32((uint32_t)(0x10f80868u));
  /* 10f6364e call dword ptr [0x10f832b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832b8))), 0x10f63654u);
  /* 10f63654 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63657 je 0x10f6376e */
  if (C.zf) goto L_10f6376e;
  /* 10f6365d mov dword ptr [0x10f80860], 1 */
  w32((uint32_t)(0x10f80860), (0x1u));
  /* 10f63667 mov ecx, dword ptr [0x10f80868] */
  ECX = (r32((uint32_t)(0x10f80868)));
  /* 10f6366d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63670 mov dword ptr [0x10f7fd90], ecx */
  w32((uint32_t)(0x10f7fd90), (ECX));
  /* 10f63676 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63678 mov dx, word ptr [0x10f808ae] */
  DX = (r16((uint32_t)(0x10f808ae)));
  /* 10f6367f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f63681 je 0x10f63699 */
  if (C.zf) goto L_10f63699;
  /* 10f63683 mov eax, dword ptr [0x10f808bc] */
  EAX = (r32((uint32_t)(0x10f808bc)));
  /* 10f63688 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6368b mov ecx, dword ptr [0x10f7fd90] */
  ECX = (r32((uint32_t)(0x10f7fd90)));
  /* 10f63691 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63693 mov dword ptr [0x10f7fd90], ecx */
  w32((uint32_t)(0x10f7fd90), (ECX));
L_10f63699:;
  /* 10f63699 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f6369b mov dx, word ptr [0x10f80902] */
  DX = (r16((uint32_t)(0x10f80902)));
  /* 10f636a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f636a4 je 0x10f636ce */
  if (C.zf) goto L_10f636ce;
  /* 10f636a6 cmp dword ptr [0x10f80910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f636ad je 0x10f636ce */
  if (C.zf) goto L_10f636ce;
  /* 10f636af mov dword ptr [0x10f7fd94], 1 */
  w32((uint32_t)(0x10f7fd94), (0x1u));
  /* 10f636b9 mov eax, dword ptr [0x10f80910] */
  EAX = (r32((uint32_t)(0x10f80910)));
  /* 10f636be sub eax, dword ptr [0x10f808bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f808bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f636c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f636c7 mov dword ptr [0x10f7fd98], eax */
  w32((uint32_t)(0x10f7fd98), (EAX));
  /* 10f636cc jmp 0x10f636e2 */
  goto L_10f636e2;
L_10f636ce:;
  /* 10f636ce mov dword ptr [0x10f7fd94], 0 */
  w32((uint32_t)(0x10f7fd94), (0x0u));
  /* 10f636d8 mov dword ptr [0x10f7fd98], 0 */
  w32((uint32_t)(0x10f7fd98), (0x0u));
L_10f636e2:;
  /* 10f636e2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10f636e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f636e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f636e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f636ea mov edx, dword ptr [0x10f7fe1c] */
  EDX = (r32((uint32_t)(0x10f7fe1c)));
  /* 10f636f0 push edx */
  push32((uint32_t)(EDX));
  /* 10f636f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f636f3 push 0x10f8086c */
  push32((uint32_t)(0x10f8086cu));
  /* 10f636f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f636fd mov eax, dword ptr [0x10f807d0] */
  EAX = (r32((uint32_t)(0x10f807d0)));
  /* 10f63702 push eax */
  push32((uint32_t)(EAX));
  /* 10f63703 call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f63709u);
  /* 10f63709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f6370b je 0x10f6371f */
  if (C.zf) goto L_10f6371f;
  /* 10f6370d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63711 jne 0x10f6371f */
  if (!C.zf) goto L_10f6371f;
  /* 10f63713 mov ecx, dword ptr [0x10f7fe1c] */
  ECX = (r32((uint32_t)(0x10f7fe1c)));
  /* 10f63719 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10f6371d jmp 0x10f63728 */
  goto L_10f63728;
L_10f6371f:;
  /* 10f6371f mov edx, dword ptr [0x10f7fe1c] */
  EDX = (r32((uint32_t)(0x10f7fe1c)));
  /* 10f63725 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10f63728:;
  /* 10f63728 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10f6372b push eax */
  push32((uint32_t)(EAX));
  /* 10f6372c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6372e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10f63730 mov ecx, dword ptr [0x10f7fe20] */
  ECX = (r32((uint32_t)(0x10f7fe20)));
  /* 10f63736 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63737 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f63739 push 0x10f808c0 */
  push32((uint32_t)(0x10f808c0u));
  /* 10f6373e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f63743 mov edx, dword ptr [0x10f807d0] */
  EDX = (r32((uint32_t)(0x10f807d0)));
  /* 10f63749 push edx */
  push32((uint32_t)(EDX));
  /* 10f6374a call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f63750u);
  /* 10f63750 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f63752 je 0x10f63765 */
  if (C.zf) goto L_10f63765;
  /* 10f63754 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63758 jne 0x10f63765 */
  if (!C.zf) goto L_10f63765;
  /* 10f6375a mov eax, dword ptr [0x10f7fe20] */
  EAX = (r32((uint32_t)(0x10f7fe20)));
  /* 10f6375f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10f63763 jmp 0x10f6376e */
  goto L_10f6376e;
L_10f63765:;
  /* 10f63765 mov ecx, dword ptr [0x10f7fe20] */
  ECX = (r32((uint32_t)(0x10f7fe20)));
  /* 10f6376b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10f6376e:;
  /* 10f6376e jmp 0x10f63997 */
  goto L_10f63997;
L_10f63773:;
  /* 10f63773 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63776 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f63779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f6377b je 0x10f6379d */
  if (C.zf) goto L_10f6379d;
  /* 10f6377d cmp dword ptr [0x10f80914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63784 je 0x10f637ac */
  if (C.zf) goto L_10f637ac;
  /* 10f63786 mov ecx, dword ptr [0x10f80914] */
  ECX = (r32((uint32_t)(0x10f80914)));
  /* 10f6378c push ecx */
  push32((uint32_t)(ECX));
  /* 10f6378d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63790 push edx */
  push32((uint32_t)(EDX));
  /* 10f63791 call 0x10f60720 */
  push32(0x10f63796u); f_10f60720();
  /* 10f63796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f6379b jne 0x10f637ac */
  if (!C.zf) goto L_10f637ac;
L_10f6379d:;
  /* 10f6379d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f6379f call 0x10f58530 */
  push32(0x10f637a4u); f_10f58530();
  /* 10f637a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f637a7 jmp 0x10f63997 */
  goto L_10f63997;
L_10f637ac:;
  /* 10f637ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10f637ae mov eax, dword ptr [0x10f80914] */
  EAX = (r32((uint32_t)(0x10f80914)));
  /* 10f637b3 push eax */
  push32((uint32_t)(EAX));
  /* 10f637b4 call 0x10f55520 */
  push32(0x10f637b9u); f_10f55520();
  /* 10f637b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f637bc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10f637c1 push 0x10f7ca08 */
  push32((uint32_t)(0x10f7ca08u));
  /* 10f637c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f637c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f637cb push ecx */
  push32((uint32_t)(ECX));
  /* 10f637cc call 0x10f578c0 */
  push32(0x10f637d1u); f_10f578c0();
  /* 10f637d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f637d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f637d7 push eax */
  push32((uint32_t)(EAX));
  /* 10f637d8 call 0x10f54a90 */
  push32(0x10f637ddu); f_10f54a90();
  /* 10f637dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f637e0 mov dword ptr [0x10f80914], eax */
  w32((uint32_t)(0x10f80914), (EAX));
  /* 10f637e5 cmp dword ptr [0x10f80914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f637ec jne 0x10f637fd */
  if (!C.zf) goto L_10f637fd;
  /* 10f637ee push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f637f0 call 0x10f58530 */
  push32(0x10f637f5u); f_10f58530();
  /* 10f637f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f637f8 jmp 0x10f63997 */
  goto L_10f63997;
L_10f637fd:;
  /* 10f637fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63800 push edx */
  push32((uint32_t)(EDX));
  /* 10f63801 mov eax, dword ptr [0x10f80914] */
  EAX = (r32((uint32_t)(0x10f80914)));
  /* 10f63806 push eax */
  push32((uint32_t)(EAX));
  /* 10f63807 call 0x10f57a40 */
  push32(0x10f6380cu); f_10f57a40();
  /* 10f6380c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6380f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f63811 call 0x10f58530 */
  push32(0x10f63816u); f_10f58530();
  /* 10f63816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63819 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f6381b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6381e push ecx */
  push32((uint32_t)(ECX));
  /* 10f6381f mov edx, dword ptr [0x10f7fe1c] */
  EDX = (r32((uint32_t)(0x10f7fe1c)));
  /* 10f63825 push edx */
  push32((uint32_t)(EDX));
  /* 10f63826 call 0x10f582b0 */
  push32(0x10f6382bu); f_10f582b0();
  /* 10f6382b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6382e mov eax, dword ptr [0x10f7fe1c] */
  EAX = (r32((uint32_t)(0x10f7fe1c)));
  /* 10f63833 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10f63837 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6383a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6383d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f63840 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63843 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f63846 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63849 jne 0x10f6385d */
  if (!C.zf) goto L_10f6385d;
  /* 10f6384b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6384e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63851 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f63854 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63857 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6385a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f6385d:;
  /* 10f6385d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63860 push eax */
  push32((uint32_t)(EAX));
  /* 10f63861 call 0x10f63340 */
  push32(0x10f63866u); f_10f63340();
  /* 10f63866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63869 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f6386f mov dword ptr [0x10f7fd90], eax */
  w32((uint32_t)(0x10f7fd90), (EAX));
L_10f63874:;
  /* 10f63874 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63877 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f6387a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6387d je 0x10f63895 */
  if (C.zf) goto L_10f63895;
  /* 10f6387f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63882 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f63885 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63888 jl 0x10f638a0 */
  if ((C.sf!=C.of)) goto L_10f638a0;
  /* 10f6388a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6388d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f63890 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63893 jg 0x10f638a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f638a0;
L_10f63895:;
  /* 10f63895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63898 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6389b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f6389e jmp 0x10f63874 */
  goto L_10f63874;
L_10f638a0:;
  /* 10f638a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f638a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f638a6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f638a9 jne 0x10f63945 */
  if (!C.zf) goto L_10f63945;
  /* 10f638af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f638b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f638b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f638b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f638bb push edx */
  push32((uint32_t)(EDX));
  /* 10f638bc call 0x10f63340 */
  push32(0x10f638c1u); f_10f63340();
  /* 10f638c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f638c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f638c7 mov ecx, dword ptr [0x10f7fd90] */
  ECX = (r32((uint32_t)(0x10f7fd90)));
  /* 10f638cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f638cf mov dword ptr [0x10f7fd90], ecx */
  w32((uint32_t)(0x10f7fd90), (ECX));
L_10f638d5:;
  /* 10f638d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f638d8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f638db cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f638de jl 0x10f638f6 */
  if ((C.sf!=C.of)) goto L_10f638f6;
  /* 10f638e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f638e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f638e6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f638e9 jg 0x10f638f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f638f6;
  /* 10f638eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f638ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f638f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f638f4 jmp 0x10f638d5 */
  goto L_10f638d5;
L_10f638f6:;
  /* 10f638f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f638f9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f638fc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f638ff jne 0x10f63945 */
  if (!C.zf) goto L_10f63945;
  /* 10f63901 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63907 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f6390a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6390d push ecx */
  push32((uint32_t)(ECX));
  /* 10f6390e call 0x10f63340 */
  push32(0x10f63913u); f_10f63340();
  /* 10f63913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63916 mov edx, dword ptr [0x10f7fd90] */
  EDX = (r32((uint32_t)(0x10f7fd90)));
  /* 10f6391c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6391e mov dword ptr [0x10f7fd90], edx */
  w32((uint32_t)(0x10f7fd90), (EDX));
L_10f63924:;
  /* 10f63924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63927 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f6392a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6392d jl 0x10f63945 */
  if ((C.sf!=C.of)) goto L_10f63945;
  /* 10f6392f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63932 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f63935 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63938 jg 0x10f63945 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f63945;
  /* 10f6393a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6393d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63940 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f63943 jmp 0x10f63924 */
  goto L_10f63924;
L_10f63945:;
  /* 10f63945 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63949 je 0x10f63959 */
  if (C.zf) goto L_10f63959;
  /* 10f6394b mov edx, dword ptr [0x10f7fd90] */
  EDX = (r32((uint32_t)(0x10f7fd90)));
  /* 10f63951 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f63953 mov dword ptr [0x10f7fd90], edx */
  w32((uint32_t)(0x10f7fd90), (EDX));
L_10f63959:;
  /* 10f63959 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f6395c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f6395f mov dword ptr [0x10f7fd94], ecx */
  w32((uint32_t)(0x10f7fd94), (ECX));
  /* 10f63965 cmp dword ptr [0x10f7fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f7fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6396c je 0x10f6398e */
  if (C.zf) goto L_10f6398e;
  /* 10f6396e push 3 */
  push32((uint32_t)(0x3u));
  /* 10f63970 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63973 push edx */
  push32((uint32_t)(EDX));
  /* 10f63974 mov eax, dword ptr [0x10f7fe20] */
  EAX = (r32((uint32_t)(0x10f7fe20)));
  /* 10f63979 push eax */
  push32((uint32_t)(EAX));
  /* 10f6397a call 0x10f582b0 */
  push32(0x10f6397fu); f_10f582b0();
  /* 10f6397f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63982 mov ecx, dword ptr [0x10f7fe20] */
  ECX = (r32((uint32_t)(0x10f7fe20)));
  /* 10f63988 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10f6398c jmp 0x10f63997 */
  goto L_10f63997;
L_10f6398e:;
  /* 10f6398e mov edx, dword ptr [0x10f7fe20] */
  EDX = (r32((uint32_t)(0x10f7fe20)));
  /* 10f63994 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10f63997:;
  /* 10f63997 mov esp, ebp */
  ESP = (EBP);
  /* 10f63999 pop ebp */
  EBP = (pop32());
  /* 10f6399a ret  */
  ESPCHK(0x10f635f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139a0 @ 0x10f639a0 (46 bytes, 18 insns) */
void f_10f639a0(void) {
  FTRACE(0x10f639a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f639a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f639a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f639a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f639a4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f639a6 call 0x10f58490 */
  push32(0x10f639abu); f_10f58490();
  /* 10f639ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f639ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f639b1 push eax */
  push32((uint32_t)(EAX));
  /* 10f639b2 call 0x10f639d0 */
  push32(0x10f639b7u); f_10f639d0();
  /* 10f639b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f639ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f639bd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f639bf call 0x10f58530 */
  push32(0x10f639c4u); f_10f58530();
  /* 10f639c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f639c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f639ca mov esp, ebp */
  ESP = (EBP);
  /* 10f639cc pop ebp */
  EBP = (pop32());
  /* 10f639cd ret  */
  ESPCHK(0x10f639a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139d0 @ 0x10f639d0 (762 bytes, 246 insns) */
void f_10f639d0(void) {
  FTRACE(0x10f639d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f639d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f639d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f639d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f639d4 cmp dword ptr [0x10f7fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f7fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f639db jne 0x10f639e4 */
  if (!C.zf) goto L_10f639e4;
  /* 10f639dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f639df jmp 0x10f63cc6 */
  goto L_10f63cc6;
L_10f639e4:;
  /* 10f639e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f639e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f639ea cmp ecx, dword ptr [0x10f7fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f7fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f639f0 jne 0x10f63a04 */
  if (!C.zf) goto L_10f63a04;
  /* 10f639f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f639f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f639f8 cmp eax, dword ptr [0x10f7fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f7fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f639fe je 0x10f63bcb */
  if (C.zf) goto L_10f63bcb;
L_10f63a04:;
  /* 10f63a04 cmp dword ptr [0x10f80860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63a0b je 0x10f63b85 */
  if (C.zf) goto L_10f63b85;
  /* 10f63a11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63a13 mov cx, word ptr [0x10f80900] */
  CX = (r16((uint32_t)(0x10f80900)));
  /* 10f63a1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f63a1c jne 0x10f63a79 */
  if (!C.zf) goto L_10f63a79;
  /* 10f63a1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63a20 mov dx, word ptr [0x10f8090e] */
  DX = (r16((uint32_t)(0x10f8090e)));
  /* 10f63a27 push edx */
  push32((uint32_t)(EDX));
  /* 10f63a28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63a2a mov ax, word ptr [0x10f8090c] */
  AX = (r16((uint32_t)(0x10f8090c)));
  /* 10f63a30 push eax */
  push32((uint32_t)(EAX));
  /* 10f63a31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63a33 mov cx, word ptr [0x10f8090a] */
  CX = (r16((uint32_t)(0x10f8090a)));
  /* 10f63a3a push ecx */
  push32((uint32_t)(ECX));
  /* 10f63a3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63a3d mov dx, word ptr [0x10f80908] */
  DX = (r16((uint32_t)(0x10f80908)));
  /* 10f63a44 push edx */
  push32((uint32_t)(EDX));
  /* 10f63a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63a49 mov ax, word ptr [0x10f80904] */
  AX = (r16((uint32_t)(0x10f80904)));
  /* 10f63a4f push eax */
  push32((uint32_t)(EAX));
  /* 10f63a50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63a52 mov cx, word ptr [0x10f80906] */
  CX = (r16((uint32_t)(0x10f80906)));
  /* 10f63a59 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63a5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63a5c mov dx, word ptr [0x10f80902] */
  DX = (r16((uint32_t)(0x10f80902)));
  /* 10f63a63 push edx */
  push32((uint32_t)(EDX));
  /* 10f63a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63a67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f63a6a push ecx */
  push32((uint32_t)(ECX));
  /* 10f63a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63a6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63a6f call 0x10f63cd0 */
  push32(0x10f63a74u); f_10f63cd0();
  /* 10f63a74 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63a77 jmp 0x10f63aca */
  goto L_10f63aca;
L_10f63a79:;
  /* 10f63a79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63a7b mov dx, word ptr [0x10f8090e] */
  DX = (r16((uint32_t)(0x10f8090e)));
  /* 10f63a82 push edx */
  push32((uint32_t)(EDX));
  /* 10f63a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63a85 mov ax, word ptr [0x10f8090c] */
  AX = (r16((uint32_t)(0x10f8090c)));
  /* 10f63a8b push eax */
  push32((uint32_t)(EAX));
  /* 10f63a8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63a8e mov cx, word ptr [0x10f8090a] */
  CX = (r16((uint32_t)(0x10f8090a)));
  /* 10f63a95 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63a96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63a98 mov dx, word ptr [0x10f80908] */
  DX = (r16((uint32_t)(0x10f80908)));
  /* 10f63a9f push edx */
  push32((uint32_t)(EDX));
  /* 10f63aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63aa2 mov ax, word ptr [0x10f80906] */
  AX = (r16((uint32_t)(0x10f80906)));
  /* 10f63aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10f63aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63aab push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63aad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63aaf mov cx, word ptr [0x10f80902] */
  CX = (r16((uint32_t)(0x10f80902)));
  /* 10f63ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63aba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f63abd push eax */
  push32((uint32_t)(EAX));
  /* 10f63abe push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63ac0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63ac2 call 0x10f63cd0 */
  push32(0x10f63ac7u); f_10f63cd0();
  /* 10f63ac7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f63aca:;
  /* 10f63aca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63acc mov cx, word ptr [0x10f808ac] */
  CX = (r16((uint32_t)(0x10f808ac)));
  /* 10f63ad3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f63ad5 jne 0x10f63b32 */
  if (!C.zf) goto L_10f63b32;
  /* 10f63ad7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63ad9 mov dx, word ptr [0x10f808ba] */
  DX = (r16((uint32_t)(0x10f808ba)));
  /* 10f63ae0 push edx */
  push32((uint32_t)(EDX));
  /* 10f63ae1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63ae3 mov ax, word ptr [0x10f808b8] */
  AX = (r16((uint32_t)(0x10f808b8)));
  /* 10f63ae9 push eax */
  push32((uint32_t)(EAX));
  /* 10f63aea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63aec mov cx, word ptr [0x10f808b6] */
  CX = (r16((uint32_t)(0x10f808b6)));
  /* 10f63af3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63af4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63af6 mov dx, word ptr [0x10f808b4] */
  DX = (r16((uint32_t)(0x10f808b4)));
  /* 10f63afd push edx */
  push32((uint32_t)(EDX));
  /* 10f63afe push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63b02 mov ax, word ptr [0x10f808b0] */
  AX = (r16((uint32_t)(0x10f808b0)));
  /* 10f63b08 push eax */
  push32((uint32_t)(EAX));
  /* 10f63b09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63b0b mov cx, word ptr [0x10f808b2] */
  CX = (r16((uint32_t)(0x10f808b2)));
  /* 10f63b12 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63b13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63b15 mov dx, word ptr [0x10f808ae] */
  DX = (r16((uint32_t)(0x10f808ae)));
  /* 10f63b1c push edx */
  push32((uint32_t)(EDX));
  /* 10f63b1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63b20 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f63b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63b24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b28 call 0x10f63cd0 */
  push32(0x10f63b2du); f_10f63cd0();
  /* 10f63b2d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63b30 jmp 0x10f63b83 */
  goto L_10f63b83;
L_10f63b32:;
  /* 10f63b32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63b34 mov dx, word ptr [0x10f808ba] */
  DX = (r16((uint32_t)(0x10f808ba)));
  /* 10f63b3b push edx */
  push32((uint32_t)(EDX));
  /* 10f63b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63b3e mov ax, word ptr [0x10f808b8] */
  AX = (r16((uint32_t)(0x10f808b8)));
  /* 10f63b44 push eax */
  push32((uint32_t)(EAX));
  /* 10f63b45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63b47 mov cx, word ptr [0x10f808b6] */
  CX = (r16((uint32_t)(0x10f808b6)));
  /* 10f63b4e push ecx */
  push32((uint32_t)(ECX));
  /* 10f63b4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f63b51 mov dx, word ptr [0x10f808b4] */
  DX = (r16((uint32_t)(0x10f808b4)));
  /* 10f63b58 push edx */
  push32((uint32_t)(EDX));
  /* 10f63b59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63b5b mov ax, word ptr [0x10f808b2] */
  AX = (r16((uint32_t)(0x10f808b2)));
  /* 10f63b61 push eax */
  push32((uint32_t)(EAX));
  /* 10f63b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f63b68 mov cx, word ptr [0x10f808ae] */
  CX = (r16((uint32_t)(0x10f808ae)));
  /* 10f63b6f push ecx */
  push32((uint32_t)(ECX));
  /* 10f63b70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63b73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f63b76 push eax */
  push32((uint32_t)(EAX));
  /* 10f63b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b7b call 0x10f63cd0 */
  push32(0x10f63b80u); f_10f63cd0();
  /* 10f63b80 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f63b83:;
  /* 10f63b83 jmp 0x10f63bcb */
  goto L_10f63bcb;
L_10f63b85:;
  /* 10f63b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b8b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f63b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63b91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63b93 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f63b95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63b98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f63b9b push edx */
  push32((uint32_t)(EDX));
  /* 10f63b9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63ba0 call 0x10f63cd0 */
  push32(0x10f63ba5u); f_10f63cd0();
  /* 10f63ba5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63baa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63bac push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63bae push 2 */
  push32((uint32_t)(0x2u));
  /* 10f63bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63bb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f63bb6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f63bb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63bbb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f63bbe push ecx */
  push32((uint32_t)(ECX));
  /* 10f63bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63bc3 call 0x10f63cd0 */
  push32(0x10f63bc8u); f_10f63cd0();
  /* 10f63bc8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f63bcb:;
  /* 10f63bcb mov edx, dword ptr [0x10f7fe2c] */
  EDX = (r32((uint32_t)(0x10f7fe2c)));
  /* 10f63bd1 cmp edx, dword ptr [0x10f7fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63bd7 jge 0x10f63c24 */
  if ((C.sf==C.of)) goto L_10f63c24;
  /* 10f63bd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63bdc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10f63bdf cmp ecx, dword ptr [0x10f7fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63be5 jl 0x10f63bf5 */
  if ((C.sf!=C.of)) goto L_10f63bf5;
  /* 10f63be7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63bea mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10f63bed cmp eax, dword ptr [0x10f7fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63bf3 jle 0x10f63bfc */
  if ((C.zf||C.sf!=C.of)) goto L_10f63bfc;
L_10f63bf5:;
  /* 10f63bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63bf7 jmp 0x10f63cc6 */
  goto L_10f63cc6;
L_10f63bfc:;
  /* 10f63bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63bff mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10f63c02 cmp edx, dword ptr [0x10f7fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63c08 jle 0x10f63c22 */
  if ((C.zf||C.sf!=C.of)) goto L_10f63c22;
  /* 10f63c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63c0d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10f63c10 cmp ecx, dword ptr [0x10f7fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63c16 jge 0x10f63c22 */
  if ((C.sf==C.of)) goto L_10f63c22;
  /* 10f63c18 mov eax, 1 */
  EAX = (0x1u);
  /* 10f63c1d jmp 0x10f63cc6 */
  goto L_10f63cc6;
L_10f63c22:;
  /* 10f63c22 jmp 0x10f63c67 */
  goto L_10f63c67;
L_10f63c24:;
  /* 10f63c24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63c27 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10f63c2a cmp eax, dword ptr [0x10f7fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63c30 jl 0x10f63c40 */
  if ((C.sf!=C.of)) goto L_10f63c40;
  /* 10f63c32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63c35 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10f63c38 cmp edx, dword ptr [0x10f7fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63c3e jle 0x10f63c47 */
  if ((C.zf||C.sf!=C.of)) goto L_10f63c47;
L_10f63c40:;
  /* 10f63c40 mov eax, 1 */
  EAX = (0x1u);
  /* 10f63c45 jmp 0x10f63cc6 */
  goto L_10f63cc6;
L_10f63c47:;
  /* 10f63c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63c4a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10f63c4d cmp ecx, dword ptr [0x10f7fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f7fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63c53 jle 0x10f63c67 */
  if ((C.zf||C.sf!=C.of)) goto L_10f63c67;
  /* 10f63c55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63c58 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10f63c5b cmp eax, dword ptr [0x10f7fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63c61 jge 0x10f63c67 */
  if ((C.sf==C.of)) goto L_10f63c67;
  /* 10f63c63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63c65 jmp 0x10f63cc6 */
  goto L_10f63cc6;
L_10f63c67:;
  /* 10f63c67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63c6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f63c6d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63c73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f63c75 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63c77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63c7a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f63c7d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63c83 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63c85 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63c8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f63c8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63c91 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10f63c94 cmp edx, dword ptr [0x10f7fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f7fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63c9a jne 0x10f63cb2 */
  if (!C.zf) goto L_10f63cb2;
  /* 10f63c9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f63c9f cmp eax, dword ptr [0x10f7fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f7fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63ca5 jl 0x10f63cae */
  if ((C.sf!=C.of)) goto L_10f63cae;
  /* 10f63ca7 mov eax, 1 */
  EAX = (0x1u);
  /* 10f63cac jmp 0x10f63cc6 */
  goto L_10f63cc6;
L_10f63cae:;
  /* 10f63cae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63cb0 jmp 0x10f63cc6 */
  goto L_10f63cc6;
L_10f63cb2:;
  /* 10f63cb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f63cb5 cmp ecx, dword ptr [0x10f7fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f7fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63cbb jge 0x10f63cc4 */
  if ((C.sf==C.of)) goto L_10f63cc4;
  /* 10f63cbd mov eax, 1 */
  EAX = (0x1u);
  /* 10f63cc2 jmp 0x10f63cc6 */
  goto L_10f63cc6;
L_10f63cc4:;
  /* 10f63cc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f63cc6:;
  /* 10f63cc6 mov esp, ebp */
  ESP = (EBP);
  /* 10f63cc8 pop ebp */
  EBP = (pop32());
  /* 10f63cc9 ret  */
  ESPCHK(0x10f639d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cd0 @ 0x10f63cd0 (504 bytes, 145 insns) */
void f_10f63cd0(void) {
  FTRACE(0x10f63cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f63cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f63cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10f63cd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63cd6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63cda jne 0x10f63dac */
  if (!C.zf) goto L_10f63dac;
  /* 10f63ce0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63ce3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f63ce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f63ce8 jne 0x10f63cf9 */
  if (!C.zf) goto L_10f63cf9;
  /* 10f63cea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f63ced mov edx, dword ptr [ecx*4 + 0x10f7fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7fe4c)));
  /* 10f63cf4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f63cf7 jmp 0x10f63d06 */
  goto L_10f63d06;
L_10f63cf9:;
  /* 10f63cf9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f63cfc mov ecx, dword ptr [eax*4 + 0x10f7fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f7fe80)));
  /* 10f63d03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10f63d06:;
  /* 10f63d06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f63d09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63d0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f63d0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63d12 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63d15 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63d1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63d1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63d20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63d23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63d26 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10f63d29 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10f63d2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f63d2e mov ecx, 7 */
  ECX = (0x7u);
  /* 10f63d33 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f63d35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f63d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f63d3b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63d3e jge 0x10f63d59 */
  if ((C.sf==C.of)) goto L_10f63d59;
  /* 10f63d40 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f63d43 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63d46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f63d49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63d4c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63d4f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63d52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63d54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f63d57 jmp 0x10f63d6d */
  goto L_10f63d6d;
L_10f63d59:;
  /* 10f63d59 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f63d5c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63d5f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f63d62 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63d65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63d68 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63d6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f63d6d:;
  /* 10f63d6d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63d71 jne 0x10f63daa */
  if (!C.zf) goto L_10f63daa;
  /* 10f63d73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63d76 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10f63d79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f63d7b jne 0x10f63d8c */
  if (!C.zf) goto L_10f63d8c;
  /* 10f63d7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f63d80 mov eax, dword ptr [edx*4 + 0x10f7fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f7fe50)));
  /* 10f63d87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f63d8a jmp 0x10f63d99 */
  goto L_10f63d99;
L_10f63d8c:;
  /* 10f63d8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f63d8f mov edx, dword ptr [ecx*4 + 0x10f7fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7fe84)));
  /* 10f63d96 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10f63d99:;
  /* 10f63d99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63d9c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63d9f jle 0x10f63daa */
  if ((C.zf||C.sf!=C.of)) goto L_10f63daa;
  /* 10f63da1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63da4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63da7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f63daa:;
  /* 10f63daa jmp 0x10f63de1 */
  goto L_10f63de1;
L_10f63dac:;
  /* 10f63dac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63daf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f63db2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f63db4 jne 0x10f63dc5 */
  if (!C.zf) goto L_10f63dc5;
  /* 10f63db6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f63db9 mov ecx, dword ptr [eax*4 + 0x10f7fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f7fe4c)));
  /* 10f63dc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f63dc3 jmp 0x10f63dd2 */
  goto L_10f63dd2;
L_10f63dc5:;
  /* 10f63dc5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f63dc8 mov eax, dword ptr [edx*4 + 0x10f7fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f7fe80)));
  /* 10f63dcf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10f63dd2:;
  /* 10f63dd2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f63dd5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f63dd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63ddb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63dde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f63de1:;
  /* 10f63de1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63de5 jne 0x10f63e21 */
  if (!C.zf) goto L_10f63e21;
  /* 10f63de7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63dea mov dword ptr [0x10f7fe2c], eax */
  w32((uint32_t)(0x10f7fe2c), (EAX));
  /* 10f63def mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10f63df2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63df5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10f63df8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63dfa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63dfd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10f63e00 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63e02 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63e08 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10f63e0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63e0d mov dword ptr [0x10f7fe30], ecx */
  w32((uint32_t)(0x10f7fe30), (ECX));
  /* 10f63e13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63e16 mov dword ptr [0x10f7fe28], edx */
  w32((uint32_t)(0x10f7fe28), (EDX));
  /* 10f63e1c jmp 0x10f63ec4 */
  goto L_10f63ec4;
L_10f63e21:;
  /* 10f63e21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f63e24 mov dword ptr [0x10f7fe3c], eax */
  w32((uint32_t)(0x10f7fe3c), (EAX));
  /* 10f63e29 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10f63e2c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63e2f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10f63e32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63e34 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63e37 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10f63e3a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63e3c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63e42 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10f63e45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63e47 mov dword ptr [0x10f7fe40], ecx */
  w32((uint32_t)(0x10f7fe40), (ECX));
  /* 10f63e4d mov edx, dword ptr [0x10f7fd98] */
  EDX = (r32((uint32_t)(0x10f7fd98)));
  /* 10f63e53 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f63e59 mov eax, dword ptr [0x10f7fe40] */
  EAX = (r32((uint32_t)(0x10f7fe40)));
  /* 10f63e5e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63e60 mov dword ptr [0x10f7fe40], eax */
  w32((uint32_t)(0x10f7fe40), (EAX));
  /* 10f63e65 cmp dword ptr [0x10f7fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f7fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63e6c jge 0x10f63e91 */
  if ((C.sf==C.of)) goto L_10f63e91;
  /* 10f63e6e mov ecx, dword ptr [0x10f7fe40] */
  ECX = (r32((uint32_t)(0x10f7fe40)));
  /* 10f63e74 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63e7a mov dword ptr [0x10f7fe40], ecx */
  w32((uint32_t)(0x10f7fe40), (ECX));
  /* 10f63e80 mov edx, dword ptr [0x10f7fe3c] */
  EDX = (r32((uint32_t)(0x10f7fe3c)));
  /* 10f63e86 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63e89 mov dword ptr [0x10f7fe3c], edx */
  w32((uint32_t)(0x10f7fe3c), (EDX));
  /* 10f63e8f jmp 0x10f63ebb */
  goto L_10f63ebb;
L_10f63e91:;
  /* 10f63e91 cmp dword ptr [0x10f7fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10f7fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63e9b jl 0x10f63ebb */
  if ((C.sf!=C.of)) goto L_10f63ebb;
  /* 10f63e9d mov eax, dword ptr [0x10f7fe40] */
  EAX = (r32((uint32_t)(0x10f7fe40)));
  /* 10f63ea2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f63ea7 mov dword ptr [0x10f7fe40], eax */
  w32((uint32_t)(0x10f7fe40), (EAX));
  /* 10f63eac mov ecx, dword ptr [0x10f7fe3c] */
  ECX = (r32((uint32_t)(0x10f7fe3c)));
  /* 10f63eb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63eb5 mov dword ptr [0x10f7fe3c], ecx */
  w32((uint32_t)(0x10f7fe3c), (ECX));
L_10f63ebb:;
  /* 10f63ebb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63ebe mov dword ptr [0x10f7fe38], edx */
  w32((uint32_t)(0x10f7fe38), (EDX));
L_10f63ec4:;
  /* 10f63ec4 mov esp, ebp */
  ESP = (EBP);
  /* 10f63ec6 pop ebp */
  EBP = (pop32());
  /* 10f63ec7 ret  */
  ESPCHK(0x10f63cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ed0 @ 0x10f63ed0 (382 bytes, 135 insns) */
void f_10f63ed0(void) {
  FTRACE(0x10f63ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f63ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f63ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10f63ed3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f63ed5 push 0x10f7ca18 */
  push32((uint32_t)(0x10f7ca18u));
  /* 10f63eda push 0x10f5db98 */
  push32((uint32_t)(0x10f5db98u));
  /* 10f63edf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f63ee5 push eax */
  push32((uint32_t)(EAX));
  /* 10f63ee6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f63eed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63ef0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f63ef1 push esi */
  push32((uint32_t)(ESI));
  /* 10f63ef2 push edi */
  push32((uint32_t)(EDI));
  /* 10f63ef3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f63ef6 cmp dword ptr [0x10f8091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63efd jne 0x10f63f42 */
  if (!C.zf) goto L_10f63f42;
  /* 10f63eff push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63f07 call dword ptr [0x10f832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832b4))), 0x10f63f0du);
  /* 10f63f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f63f0f je 0x10f63f1d */
  if (C.zf) goto L_10f63f1d;
  /* 10f63f11 mov dword ptr [0x10f8091c], 1 */
  w32((uint32_t)(0x10f8091c), (0x1u));
  /* 10f63f1b jmp 0x10f63f42 */
  goto L_10f63f42;
L_10f63f1d:;
  /* 10f63f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f63f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63f25 call dword ptr [0x10f832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832cc))), 0x10f63f2bu);
  /* 10f63f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f63f2d je 0x10f63f3b */
  if (C.zf) goto L_10f63f3b;
  /* 10f63f2f mov dword ptr [0x10f8091c], 2 */
  w32((uint32_t)(0x10f8091c), (0x2u));
  /* 10f63f39 jmp 0x10f63f42 */
  goto L_10f63f42;
L_10f63f3b:;
  /* 10f63f3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63f3d jmp 0x10f64051 */
  goto L_10f64051;
L_10f63f42:;
  /* 10f63f42 cmp dword ptr [0x10f8091c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f8091c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63f49 jne 0x10f63f66 */
  if (!C.zf) goto L_10f63f66;
  /* 10f63f4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f63f4e push eax */
  push32((uint32_t)(EAX));
  /* 10f63f4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f63f52 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63f53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f63f56 push edx */
  push32((uint32_t)(EDX));
  /* 10f63f57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63f5a push eax */
  push32((uint32_t)(EAX));
  /* 10f63f5b call dword ptr [0x10f832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832b4))), 0x10f63f61u);
  /* 10f63f61 jmp 0x10f64051 */
  goto L_10f64051;
L_10f63f66:;
  /* 10f63f66 cmp dword ptr [0x10f8091c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f8091c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63f6d jne 0x10f6404f */
  if (!C.zf) goto L_10f6404f;
  /* 10f63f73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63f77 jne 0x10f63f82 */
  if (!C.zf) goto L_10f63f82;
  /* 10f63f79 mov ecx, dword ptr [0x10f807d0] */
  ECX = (r32((uint32_t)(0x10f807d0)));
  /* 10f63f7f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10f63f82:;
  /* 10f63f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f63f86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f63f89 push edx */
  push32((uint32_t)(EDX));
  /* 10f63f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63f8d push eax */
  push32((uint32_t)(EAX));
  /* 10f63f8e call dword ptr [0x10f832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832cc))), 0x10f63f94u);
  /* 10f63f94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f63f97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63f9b jne 0x10f63fa4 */
  if (!C.zf) goto L_10f63fa4;
  /* 10f63f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63f9f jmp 0x10f64051 */
  goto L_10f64051;
L_10f63fa4:;
  /* 10f63fa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f63fab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f63fae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f63fb1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f63fb3 call 0x10f57c30 */
  push32(0x10f63fb8u); f_10f57c30();
  /* 10f63fb8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10f63fbb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f63fbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f63fc1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f63fc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f63fcb jmp 0x10f63fe4 */
  goto L_10f63fe4;
  /* 10f63fcd mov eax, 1 */
  EAX = (0x1u);
  /* 10f63fd2 ret  */
  ESPCHK(0x10f63ed0u, _esp0);
  ESP += 4; return;
  /* 10f63fd3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f63fd6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10f63fdd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f63fe4:;
  /* 10f63fe4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f63fe8 jne 0x10f63fee */
  if (!C.zf) goto L_10f63fee;
  /* 10f63fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f63fec jmp 0x10f64051 */
  goto L_10f64051;
L_10f63fee:;
  /* 10f63fee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f63ff1 push edx */
  push32((uint32_t)(EDX));
  /* 10f63ff2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f63ff5 push eax */
  push32((uint32_t)(EAX));
  /* 10f63ff6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f63ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f63ffa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f63ffd push edx */
  push32((uint32_t)(EDX));
  /* 10f63ffe call dword ptr [0x10f832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832cc))), 0x10f64004u);
  /* 10f64004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f64006 jne 0x10f6400c */
  if (!C.zf) goto L_10f6400c;
  /* 10f64008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6400a jmp 0x10f64051 */
  goto L_10f64051;
L_10f6400c:;
  /* 10f6400c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64010 jne 0x10f6402d */
  if (!C.zf) goto L_10f6402d;
  /* 10f64012 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f64014 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f64016 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f64018 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f6401b push eax */
  push32((uint32_t)(EAX));
  /* 10f6401c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f6401e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f64021 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64022 call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f64028u);
  /* 10f64028 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f6402b jmp 0x10f6404a */
  goto L_10f6404a;
L_10f6402d:;
  /* 10f6402d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f64030 push edx */
  push32((uint32_t)(EDX));
  /* 10f64031 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f64034 push eax */
  push32((uint32_t)(EAX));
  /* 10f64035 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f64037 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f6403a push ecx */
  push32((uint32_t)(ECX));
  /* 10f6403b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f6403d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f64040 push edx */
  push32((uint32_t)(EDX));
  /* 10f64041 call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f64047u);
  /* 10f64047 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f6404a:;
  /* 10f6404a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f6404d jmp 0x10f64051 */
  goto L_10f64051;
L_10f6404f:;
  /* 10f6404f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f64051:;
  /* 10f64051 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10f64054 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f64057 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f6405e pop edi */
  EDI = (pop32());
  /* 10f6405f pop esi */
  ESI = (pop32());
  /* 10f64060 pop ebx */
  EBX = (pop32());
  /* 10f64061 mov esp, ebp */
  ESP = (EBP);
  /* 10f64063 pop ebp */
  EBP = (pop32());
  /* 10f64064 ret  */
  ESPCHK(0x10f63ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014070 @ 0x10f64070 (398 bytes, 140 insns) */
void f_10f64070(void) {
  FTRACE(0x10f64070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64070 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64071 mov ebp, esp */
  EBP = (ESP);
  /* 10f64073 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f64075 push 0x10f7ca28 */
  push32((uint32_t)(0x10f7ca28u));
  /* 10f6407a push 0x10f5db98 */
  push32((uint32_t)(0x10f5db98u));
  /* 10f6407f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f64085 push eax */
  push32((uint32_t)(EAX));
  /* 10f64086 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f6408d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64090 push ebx */
  push32((uint32_t)(EBX));
  /* 10f64091 push esi */
  push32((uint32_t)(ESI));
  /* 10f64092 push edi */
  push32((uint32_t)(EDI));
  /* 10f64093 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f64096 cmp dword ptr [0x10f80920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6409d jne 0x10f640e2 */
  if (!C.zf) goto L_10f640e2;
  /* 10f6409f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f640a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f640a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f640a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f640a7 call dword ptr [0x10f832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832b4))), 0x10f640adu);
  /* 10f640ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f640af je 0x10f640bd */
  if (C.zf) goto L_10f640bd;
  /* 10f640b1 mov dword ptr [0x10f80920], 1 */
  w32((uint32_t)(0x10f80920), (0x1u));
  /* 10f640bb jmp 0x10f640e2 */
  goto L_10f640e2;
L_10f640bd:;
  /* 10f640bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f640bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f640c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f640c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f640c5 call dword ptr [0x10f832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832cc))), 0x10f640cbu);
  /* 10f640cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f640cd je 0x10f640db */
  if (C.zf) goto L_10f640db;
  /* 10f640cf mov dword ptr [0x10f80920], 2 */
  w32((uint32_t)(0x10f80920), (0x2u));
  /* 10f640d9 jmp 0x10f640e2 */
  goto L_10f640e2;
L_10f640db:;
  /* 10f640db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f640dd jmp 0x10f64201 */
  goto L_10f64201;
L_10f640e2:;
  /* 10f640e2 cmp dword ptr [0x10f80920], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f80920))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f640e9 jne 0x10f64106 */
  if (!C.zf) goto L_10f64106;
  /* 10f640eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f640ee push eax */
  push32((uint32_t)(EAX));
  /* 10f640ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f640f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f640f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f640f6 push edx */
  push32((uint32_t)(EDX));
  /* 10f640f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f640fa push eax */
  push32((uint32_t)(EAX));
  /* 10f640fb call dword ptr [0x10f832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832cc))), 0x10f64101u);
  /* 10f64101 jmp 0x10f64201 */
  goto L_10f64201;
L_10f64106:;
  /* 10f64106 cmp dword ptr [0x10f80920], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f80920))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6410d jne 0x10f641ff */
  if (!C.zf) goto L_10f641ff;
  /* 10f64113 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64117 jne 0x10f64122 */
  if (!C.zf) goto L_10f64122;
  /* 10f64119 mov ecx, dword ptr [0x10f807d0] */
  ECX = (r32((uint32_t)(0x10f807d0)));
  /* 10f6411f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10f64122:;
  /* 10f64122 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f64124 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f64126 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f64129 push edx */
  push32((uint32_t)(EDX));
  /* 10f6412a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6412d push eax */
  push32((uint32_t)(EAX));
  /* 10f6412e call dword ptr [0x10f832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832b4))), 0x10f64134u);
  /* 10f64134 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f64137 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6413b jne 0x10f64144 */
  if (!C.zf) goto L_10f64144;
  /* 10f6413d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6413f jmp 0x10f64201 */
  goto L_10f64201;
L_10f64144:;
  /* 10f64144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f6414b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f6414e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f64150 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64153 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f64155 call 0x10f57c30 */
  push32(0x10f6415au); f_10f57c30();
  /* 10f6415a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10f6415d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f64160 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f64163 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f64166 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f6416d jmp 0x10f64186 */
  goto L_10f64186;
  /* 10f6416f mov eax, 1 */
  EAX = (0x1u);
  /* 10f64174 ret  */
  ESPCHK(0x10f64070u, _esp0);
  ESP += 4; return;
  /* 10f64175 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f64178 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10f6417f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f64186:;
  /* 10f64186 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6418a jne 0x10f64190 */
  if (!C.zf) goto L_10f64190;
  /* 10f6418c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6418e jmp 0x10f64201 */
  goto L_10f64201;
L_10f64190:;
  /* 10f64190 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f64193 push edx */
  push32((uint32_t)(EDX));
  /* 10f64194 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f64197 push eax */
  push32((uint32_t)(EAX));
  /* 10f64198 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6419b push ecx */
  push32((uint32_t)(ECX));
  /* 10f6419c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6419f push edx */
  push32((uint32_t)(EDX));
  /* 10f641a0 call dword ptr [0x10f832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832b4))), 0x10f641a6u);
  /* 10f641a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f641a8 jne 0x10f641ae */
  if (!C.zf) goto L_10f641ae;
  /* 10f641aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f641ac jmp 0x10f64201 */
  goto L_10f64201;
L_10f641ae:;
  /* 10f641ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f641b2 jne 0x10f641d6 */
  if (!C.zf) goto L_10f641d6;
  /* 10f641b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f641b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f641b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f641ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10f641bc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f641be mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f641c1 push eax */
  push32((uint32_t)(EAX));
  /* 10f641c2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f641c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f641ca push ecx */
  push32((uint32_t)(ECX));
  /* 10f641cb call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f641d1u);
  /* 10f641d1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f641d4 jmp 0x10f641fa */
  goto L_10f641fa;
L_10f641d6:;
  /* 10f641d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f641d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f641da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f641dd push edx */
  push32((uint32_t)(EDX));
  /* 10f641de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f641e1 push eax */
  push32((uint32_t)(EAX));
  /* 10f641e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f641e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f641e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f641e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10f641ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f641f0 push edx */
  push32((uint32_t)(EDX));
  /* 10f641f1 call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f641f7u);
  /* 10f641f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f641fa:;
  /* 10f641fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f641fd jmp 0x10f64201 */
  goto L_10f64201;
L_10f641ff:;
  /* 10f641ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f64201:;
  /* 10f64201 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10f64204 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f64207 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f6420e pop edi */
  EDI = (pop32());
  /* 10f6420f pop esi */
  ESI = (pop32());
  /* 10f64210 pop ebx */
  EBX = (pop32());
  /* 10f64211 mov esp, ebp */
  ESP = (EBP);
  /* 10f64213 pop ebp */
  EBP = (pop32());
  /* 10f64214 ret  */
  ESPCHK(0x10f64070u, _esp0);
  ESP += 4; return;
}

/* FUN_10014220 @ 0x10f64220 (11 bytes, 6 insns) */
void f_10f64220(void) {
  FTRACE(0x10f64220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64220 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64221 mov ebp, esp */
  EBP = (ESP);
  /* 10f64223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64226 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64229 pop ebp */
  EBP = (pop32());
  /* 10f6422a ret  */
  ESPCHK(0x10f64220u, _esp0);
  ESP += 4; return;
}

/* FUN_10014230 @ 0x10f64230 (147 bytes, 43 insns) */
void f_10f64230(void) {
  FTRACE(0x10f64230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64230 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64231 mov ebp, esp */
  EBP = (ESP);
  /* 10f64233 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64234 cmp dword ptr [0x10f807c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6423b jne 0x10f64257 */
  if (!C.zf) goto L_10f64257;
  /* 10f6423d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64241 jl 0x10f64252 */
  if ((C.sf!=C.of)) goto L_10f64252;
  /* 10f64243 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64247 jg 0x10f64252 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f64252;
  /* 10f64249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6424c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6424f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f64252:;
  /* 10f64252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64255 jmp 0x10f642bf */
  goto L_10f642bf;
L_10f64257:;
  /* 10f64257 push 0x10f8094c */
  push32((uint32_t)(0x10f8094cu));
  /* 10f6425c call dword ptr [0x10f83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83364))), 0x10f64262u);
  /* 10f64262 cmp dword ptr [0x10f8093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64269 je 0x10f64289 */
  if (C.zf) goto L_10f64289;
  /* 10f6426b push 0x10f8094c */
  push32((uint32_t)(0x10f8094cu));
  /* 10f64270 call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f64276u);
  /* 10f64276 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f64278 call 0x10f58490 */
  push32(0x10f6427du); f_10f58490();
  /* 10f6427d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64280 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f64287 jmp 0x10f64290 */
  goto L_10f64290;
L_10f64289:;
  /* 10f64289 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f64290:;
  /* 10f64290 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64293 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64294 call 0x10f642d0 */
  push32(0x10f64299u); f_10f642d0();
  /* 10f64299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6429c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f6429f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f642a3 je 0x10f642b1 */
  if (C.zf) goto L_10f642b1;
  /* 10f642a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f642a7 call 0x10f58530 */
  push32(0x10f642acu); f_10f58530();
  /* 10f642ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f642af jmp 0x10f642bc */
  goto L_10f642bc;
L_10f642b1:;
  /* 10f642b1 push 0x10f8094c */
  push32((uint32_t)(0x10f8094cu));
  /* 10f642b6 call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f642bcu);
L_10f642bc:;
  /* 10f642bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10f642bf:;
  /* 10f642bf mov esp, ebp */
  ESP = (EBP);
  /* 10f642c1 pop ebp */
  EBP = (pop32());
  /* 10f642c2 ret  */
  ESPCHK(0x10f64230u, _esp0);
  ESP += 4; return;
}

/* FUN_100142d0 @ 0x10f642d0 (299 bytes, 91 insns) */
void f_10f642d0(void) {
  FTRACE(0x10f642d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f642d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f642d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f642d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f642d6 cmp dword ptr [0x10f807c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f642dd jne 0x10f642fc */
  if (!C.zf) goto L_10f642fc;
  /* 10f642df cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f642e3 jl 0x10f642f4 */
  if ((C.sf!=C.of)) goto L_10f642f4;
  /* 10f642e5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f642e9 jg 0x10f642f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f642f4;
  /* 10f642eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f642ee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f642f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f642f4:;
  /* 10f642f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f642f7 jmp 0x10f643f7 */
  goto L_10f643f7;
L_10f642fc:;
  /* 10f642fc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64303 jge 0x10f64343 */
  if ((C.sf==C.of)) goto L_10f64343;
  /* 10f64305 cmp dword ptr [0x10f7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6430c jle 0x10f64321 */
  if ((C.zf||C.sf!=C.of)) goto L_10f64321;
  /* 10f6430e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f64310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64313 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64314 call 0x10f5aaa0 */
  push32(0x10f64319u); f_10f5aaa0();
  /* 10f64319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6431c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f6431f jmp 0x10f64335 */
  goto L_10f64335;
L_10f64321:;
  /* 10f64321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64324 mov eax, dword ptr [0x10f7ec98] */
  EAX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f64329 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6432b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10f6432f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f64332 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10f64335:;
  /* 10f64335 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64339 jne 0x10f64343 */
  if (!C.zf) goto L_10f64343;
  /* 10f6433b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6433e jmp 0x10f643f7 */
  goto L_10f643f7;
L_10f64343:;
  /* 10f64343 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64346 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10f64349 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f6434f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f64355 mov eax, dword ptr [0x10f7ec98] */
  EAX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f6435a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6435c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10f64360 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f64366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f64368 je 0x10f6438c */
  if (C.zf) goto L_10f6438c;
  /* 10f6436a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f6436d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10f64370 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f64376 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10f64379 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f6437c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10f6437f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10f64383 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10f6438a jmp 0x10f6439d */
  goto L_10f6439d;
L_10f6438c:;
  /* 10f6438c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f6438f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10f64392 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10f64396 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10f6439d:;
  /* 10f6439d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f6439f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f643a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f643a3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10f643a6 push edx */
  push32((uint32_t)(EDX));
  /* 10f643a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f643aa push eax */
  push32((uint32_t)(EAX));
  /* 10f643ab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10f643ae push ecx */
  push32((uint32_t)(ECX));
  /* 10f643af push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f643b4 mov edx, dword ptr [0x10f807c0] */
  EDX = (r32((uint32_t)(0x10f807c0)));
  /* 10f643ba push edx */
  push32((uint32_t)(EDX));
  /* 10f643bb call 0x10f5ce80 */
  push32(0x10f643c0u); f_10f5ce80();
  /* 10f643c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f643c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f643c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f643ca jne 0x10f643d1 */
  if (!C.zf) goto L_10f643d1;
  /* 10f643cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f643cf jmp 0x10f643f7 */
  goto L_10f643f7;
L_10f643d1:;
  /* 10f643d1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f643d5 jne 0x10f643e1 */
  if (!C.zf) goto L_10f643e1;
  /* 10f643d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f643da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f643df jmp 0x10f643f7 */
  goto L_10f643f7;
L_10f643e1:;
  /* 10f643e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f643e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f643e9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10f643ec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f643f2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10f643f5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10f643f7:;
  /* 10f643f7 mov esp, ebp */
  ESP = (EBP);
  /* 10f643f9 pop ebp */
  EBP = (pop32());
  /* 10f643fa ret  */
  ESPCHK(0x10f642d0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10f64400 (52 bytes, 19 insns) */
void f_10f64400(void) {
  FTRACE(0x10f64400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64400 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f64404 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f64408 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6440a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f6440e jne 0x10f64419 */
  if (!C.zf) goto L_10f64419;
  /* 10f64410 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f64414 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f64416 ret 0x10 */
  ESPCHK(0x10f64400u, _esp0);
  ESP += 20; return;
L_10f64419:;
  /* 10f64419 push ebx */
  push32((uint32_t)(EBX));
  /* 10f6441a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f6441c mov ebx, eax */
  EBX = (EAX);
  /* 10f6441e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f64422 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f64426 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64428 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f6442c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f6442e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64430 pop ebx */
  EBX = (pop32());
  /* 10f64431 ret 0x10 */
  ESPCHK(0x10f64400u, _esp0);
  ESP += 20; return;
}

/* FUN_10014440 @ 0x10f64440 (46 bytes, 18 insns) */
void f_10f64440(void) {
  FTRACE(0x10f64440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64440 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64441 mov ebp, esp */
  EBP = (ESP);
  /* 10f64443 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64444 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f64446 call 0x10f58490 */
  push32(0x10f6444bu); f_10f58490();
  /* 10f6444b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6444e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64451 push eax */
  push32((uint32_t)(EAX));
  /* 10f64452 call 0x10f64470 */
  push32(0x10f64457u); f_10f64470();
  /* 10f64457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6445a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f6445d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f6445f call 0x10f58530 */
  push32(0x10f64464u); f_10f58530();
  /* 10f64464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6446a mov esp, ebp */
  ESP = (EBP);
  /* 10f6446c pop ebp */
  EBP = (pop32());
  /* 10f6446d ret  */
  ESPCHK(0x10f64440u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10f64470 (198 bytes, 69 insns) */
void f_10f64470(void) {
  FTRACE(0x10f64470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64470 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64471 mov ebp, esp */
  EBP = (ESP);
  /* 10f64473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64476 mov eax, dword ptr [0x10f805e0] */
  EAX = (r32((uint32_t)(0x10f805e0)));
  /* 10f6447b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f6447e cmp dword ptr [0x10f820e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f820e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64485 jne 0x10f6448e */
  if (!C.zf) goto L_10f6448e;
  /* 10f64487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64489 jmp 0x10f64532 */
  goto L_10f64532;
L_10f6448e:;
  /* 10f6448e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64492 jne 0x10f644b6 */
  if (!C.zf) goto L_10f644b6;
  /* 10f64494 cmp dword ptr [0x10f805e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6449b je 0x10f644b6 */
  if (C.zf) goto L_10f644b6;
  /* 10f6449d call 0x10f64590 */
  push32(0x10f644a2u); f_10f64590();
  /* 10f644a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f644a4 je 0x10f644ad */
  if (C.zf) goto L_10f644ad;
  /* 10f644a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f644a8 jmp 0x10f64532 */
  goto L_10f64532;
L_10f644ad:;
  /* 10f644ad mov ecx, dword ptr [0x10f805e0] */
  ECX = (r32((uint32_t)(0x10f805e0)));
  /* 10f644b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f644b6:;
  /* 10f644b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f644ba je 0x10f64530 */
  if (C.zf) goto L_10f64530;
  /* 10f644bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f644c0 je 0x10f64530 */
  if (C.zf) goto L_10f64530;
  /* 10f644c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f644c5 push edx */
  push32((uint32_t)(EDX));
  /* 10f644c6 call 0x10f578c0 */
  push32(0x10f644cbu); f_10f578c0();
  /* 10f644cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f644ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f644d1:;
  /* 10f644d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f644d4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f644d7 je 0x10f64530 */
  if (C.zf) goto L_10f64530;
  /* 10f644d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f644dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f644de push edx */
  push32((uint32_t)(EDX));
  /* 10f644df call 0x10f578c0 */
  push32(0x10f644e4u); f_10f578c0();
  /* 10f644e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f644e7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f644ea jbe 0x10f64525 */
  if ((C.cf||C.zf)) goto L_10f64525;
  /* 10f644ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f644ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f644f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f644f4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10f644f8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f644fb jne 0x10f64525 */
  if (!C.zf) goto L_10f64525;
  /* 10f644fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64500 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64504 push edx */
  push32((uint32_t)(EDX));
  /* 10f64505 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64508 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f6450a push ecx */
  push32((uint32_t)(ECX));
  /* 10f6450b call 0x10f64540 */
  push32(0x10f64510u); f_10f64540();
  /* 10f64510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f64515 jne 0x10f64525 */
  if (!C.zf) goto L_10f64525;
  /* 10f64517 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f6451a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f6451c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6451f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10f64523 jmp 0x10f64532 */
  goto L_10f64532;
L_10f64525:;
  /* 10f64525 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64528 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6452b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f6452e jmp 0x10f644d1 */
  goto L_10f644d1;
L_10f64530:;
  /* 10f64530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f64532:;
  /* 10f64532 mov esp, ebp */
  ESP = (EBP);
  /* 10f64534 pop ebp */
  EBP = (pop32());
  /* 10f64535 ret  */
  ESPCHK(0x10f64470u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10f64540 (79 bytes, 32 insns) */
void f_10f64540(void) {
  FTRACE(0x10f64540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64540 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64541 mov ebp, esp */
  EBP = (ESP);
  /* 10f64543 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64544 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64548 jne 0x10f6454e */
  if (!C.zf) goto L_10f6454e;
  /* 10f6454a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6454c jmp 0x10f6458b */
  goto L_10f6458b;
L_10f6454e:;
  /* 10f6454e mov eax, dword ptr [0x10f81ca4] */
  EAX = (r32((uint32_t)(0x10f81ca4)));
  /* 10f64553 push eax */
  push32((uint32_t)(EAX));
  /* 10f64554 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f64557 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64558 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f6455b push edx */
  push32((uint32_t)(EDX));
  /* 10f6455c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6455f push eax */
  push32((uint32_t)(EAX));
  /* 10f64560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64563 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64564 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f64566 mov edx, dword ptr [0x10f81f44] */
  EDX = (r32((uint32_t)(0x10f81f44)));
  /* 10f6456c push edx */
  push32((uint32_t)(EDX));
  /* 10f6456d call 0x10f64640 */
  push32(0x10f64572u); f_10f64640();
  /* 10f64572 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64575 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f64578 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6457c jne 0x10f64585 */
  if (!C.zf) goto L_10f64585;
  /* 10f6457e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10f64583 jmp 0x10f6458b */
  goto L_10f6458b;
L_10f64585:;
  /* 10f64585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64588 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10f6458b:;
  /* 10f6458b mov esp, ebp */
  ESP = (EBP);
  /* 10f6458d pop ebp */
  EBP = (pop32());
  /* 10f6458e ret  */
  ESPCHK(0x10f64540u, _esp0);
  ESP += 4; return;
}

/* FUN_10014590 @ 0x10f64590 (174 bytes, 66 insns) */
void f_10f64590(void) {
  FTRACE(0x10f64590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64590 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64591 mov ebp, esp */
  EBP = (ESP);
  /* 10f64593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64596 mov eax, dword ptr [0x10f805e8] */
  EAX = (r32((uint32_t)(0x10f805e8)));
  /* 10f6459b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f6459e:;
  /* 10f6459e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f645a1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f645a4 je 0x10f64638 */
  if (C.zf) goto L_10f64638;
  /* 10f645aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f645ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10f645ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10f645b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f645b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f645b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f645b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f645b9 push eax */
  push32((uint32_t)(EAX));
  /* 10f645ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10f645bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10f645be call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f645c4u);
  /* 10f645c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f645c7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f645cb jne 0x10f645d2 */
  if (!C.zf) goto L_10f645d2;
  /* 10f645cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f645d0 jmp 0x10f6463a */
  goto L_10f6463a;
L_10f645d2:;
  /* 10f645d2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10f645d4 push 0x10f7ca34 */
  push32((uint32_t)(0x10f7ca34u));
  /* 10f645d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f645db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f645de push ecx */
  push32((uint32_t)(ECX));
  /* 10f645df call 0x10f54a90 */
  push32(0x10f645e4u); f_10f54a90();
  /* 10f645e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f645e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f645ea cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f645ee jne 0x10f645f5 */
  if (!C.zf) goto L_10f645f5;
  /* 10f645f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f645f3 jmp 0x10f6463a */
  goto L_10f6463a;
L_10f645f5:;
  /* 10f645f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f645f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f645f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f645fc push edx */
  push32((uint32_t)(EDX));
  /* 10f645fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64600 push eax */
  push32((uint32_t)(EAX));
  /* 10f64601 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f64603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64606 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f64608 push edx */
  push32((uint32_t)(EDX));
  /* 10f64609 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6460b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f6460d call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f64613u);
  /* 10f64613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f64615 jne 0x10f6461c */
  if (!C.zf) goto L_10f6461c;
  /* 10f64617 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f6461a jmp 0x10f6463a */
  goto L_10f6463a;
L_10f6461c:;
  /* 10f6461c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6461e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64621 push eax */
  push32((uint32_t)(EAX));
  /* 10f64622 call 0x10f64a90 */
  push32(0x10f64627u); f_10f64a90();
  /* 10f64627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f6462a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f6462d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64630 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f64633 jmp 0x10f6459e */
  goto L_10f6459e;
L_10f64638:;
  /* 10f64638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f6463a:;
  /* 10f6463a mov esp, ebp */
  ESP = (EBP);
  /* 10f6463c pop ebp */
  EBP = (pop32());
  /* 10f6463d ret  */
  ESPCHK(0x10f64590u, _esp0);
  ESP += 4; return;
}

/* FUN_10014640 @ 0x10f64640 (970 bytes, 340 insns) */
void f_10f64640(void) {
  FTRACE(0x10f64640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64640 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64641 mov ebp, esp */
  EBP = (ESP);
  /* 10f64643 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f64645 push 0x10f7ca88 */
  push32((uint32_t)(0x10f7ca88u));
  /* 10f6464a push 0x10f5db98 */
  push32((uint32_t)(0x10f5db98u));
  /* 10f6464f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f64655 push eax */
  push32((uint32_t)(EAX));
  /* 10f64656 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f6465d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64660 push ebx */
  push32((uint32_t)(EBX));
  /* 10f64661 push esi */
  push32((uint32_t)(ESI));
  /* 10f64662 push edi */
  push32((uint32_t)(EDI));
  /* 10f64663 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f64666 cmp dword ptr [0x10f80924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6466d jne 0x10f646c6 */
  if (!C.zf) goto L_10f646c6;
  /* 10f6466f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f64671 push 0x10f7c0e4 */
  push32((uint32_t)(0x10f7c0e4u));
  /* 10f64676 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f64678 push 0x10f7c0e4 */
  push32((uint32_t)(0x10f7c0e4u));
  /* 10f6467d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6467f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f64681 call dword ptr [0x10f832b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832b0))), 0x10f64687u);
  /* 10f64687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f64689 je 0x10f64697 */
  if (C.zf) goto L_10f64697;
  /* 10f6468b mov dword ptr [0x10f80924], 1 */
  w32((uint32_t)(0x10f80924), (0x1u));
  /* 10f64695 jmp 0x10f646c6 */
  goto L_10f646c6;
L_10f64697:;
  /* 10f64697 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f64699 push 0x10f7c0e0 */
  push32((uint32_t)(0x10f7c0e0u));
  /* 10f6469e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f646a0 push 0x10f7c0e0 */
  push32((uint32_t)(0x10f7c0e0u));
  /* 10f646a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f646a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f646a9 call dword ptr [0x10f832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832bc))), 0x10f646afu);
  /* 10f646af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f646b1 je 0x10f646bf */
  if (C.zf) goto L_10f646bf;
  /* 10f646b3 mov dword ptr [0x10f80924], 2 */
  w32((uint32_t)(0x10f80924), (0x2u));
  /* 10f646bd jmp 0x10f646c6 */
  goto L_10f646c6;
L_10f646bf:;
  /* 10f646bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f646c1 jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f646c6:;
  /* 10f646c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f646ca jle 0x10f646df */
  if ((C.zf||C.sf!=C.of)) goto L_10f646df;
  /* 10f646cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f646cf push eax */
  push32((uint32_t)(EAX));
  /* 10f646d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f646d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f646d4 call 0x10f64a40 */
  push32(0x10f646d9u); f_10f64a40();
  /* 10f646d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f646dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10f646df:;
  /* 10f646df cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f646e3 jle 0x10f646f8 */
  if ((C.zf||C.sf!=C.of)) goto L_10f646f8;
  /* 10f646e5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f646e8 push edx */
  push32((uint32_t)(EDX));
  /* 10f646e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f646ec push eax */
  push32((uint32_t)(EAX));
  /* 10f646ed call 0x10f64a40 */
  push32(0x10f646f2u); f_10f64a40();
  /* 10f646f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f646f5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10f646f8:;
  /* 10f646f8 cmp dword ptr [0x10f80924], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f80924))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f646ff jne 0x10f64724 */
  if (!C.zf) goto L_10f64724;
  /* 10f64701 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f64704 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64705 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f64708 push edx */
  push32((uint32_t)(EDX));
  /* 10f64709 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f6470c push eax */
  push32((uint32_t)(EAX));
  /* 10f6470d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f64710 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64711 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f64714 push edx */
  push32((uint32_t)(EDX));
  /* 10f64715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64718 push eax */
  push32((uint32_t)(EAX));
  /* 10f64719 call dword ptr [0x10f832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832bc))), 0x10f6471fu);
  /* 10f6471f jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64724:;
  /* 10f64724 cmp dword ptr [0x10f80924], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f80924))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6472b jne 0x10f64a22 */
  if (!C.zf) goto L_10f64a22;
  /* 10f64731 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64735 jne 0x10f64740 */
  if (!C.zf) goto L_10f64740;
  /* 10f64737 mov ecx, dword ptr [0x10f807d0] */
  ECX = (r32((uint32_t)(0x10f807d0)));
  /* 10f6473d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10f64740:;
  /* 10f64740 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64744 je 0x10f64750 */
  if (C.zf) goto L_10f64750;
  /* 10f64746 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6474a jne 0x10f648cc */
  if (!C.zf) goto L_10f648cc;
L_10f64750:;
  /* 10f64750 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f64753 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64756 jne 0x10f64762 */
  if (!C.zf) goto L_10f64762;
  /* 10f64758 mov eax, 2 */
  EAX = (0x2u);
  /* 10f6475d jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64762:;
  /* 10f64762 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64766 jle 0x10f64772 */
  if ((C.zf||C.sf!=C.of)) goto L_10f64772;
  /* 10f64768 mov eax, 1 */
  EAX = (0x1u);
  /* 10f6476d jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64772:;
  /* 10f64772 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64776 jle 0x10f64782 */
  if ((C.zf||C.sf!=C.of)) goto L_10f64782;
  /* 10f64778 mov eax, 3 */
  EAX = (0x3u);
  /* 10f6477d jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64782:;
  /* 10f64782 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10f64785 push eax */
  push32((uint32_t)(EAX));
  /* 10f64786 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f64789 push ecx */
  push32((uint32_t)(ECX));
  /* 10f6478a call dword ptr [0x10f83308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83308))), 0x10f64790u);
  /* 10f64790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f64792 jne 0x10f6479b */
  if (!C.zf) goto L_10f6479b;
  /* 10f64794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64796 jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f6479b:;
  /* 10f6479b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6479f jne 0x10f647a7 */
  if (!C.zf) goto L_10f647a7;
  /* 10f647a1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f647a5 je 0x10f647d4 */
  if (C.zf) goto L_10f647d4;
L_10f647a7:;
  /* 10f647a7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f647ab jne 0x10f647b3 */
  if (!C.zf) goto L_10f647b3;
  /* 10f647ad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f647b1 je 0x10f647d4 */
  if (C.zf) goto L_10f647d4;
L_10f647b3:;
  /* 10f647b3 push 0x10f7ca48 */
  push32((uint32_t)(0x10f7ca48u));
  /* 10f647b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f647ba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10f647bf push 0x10f7ca40 */
  push32((uint32_t)(0x10f7ca40u));
  /* 10f647c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f647c6 call 0x10f53b50 */
  push32(0x10f647cbu); f_10f53b50();
  /* 10f647cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f647ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f647d1 jne 0x10f647d4 */
  if (!C.zf) goto L_10f647d4;
  /* 10f647d3 int3  */
  x86_unimpl("int3 @ 0x10f647d3");
L_10f647d4:;
  /* 10f647d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f647d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f647d8 jne 0x10f6479b */
  if (!C.zf) goto L_10f6479b;
  /* 10f647da cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f647de jle 0x10f64853 */
  if ((C.zf||C.sf!=C.of)) goto L_10f64853;
  /* 10f647e0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f647e4 jae 0x10f647f0 */
  if (!C.cf) goto L_10f647f0;
  /* 10f647e6 mov eax, 3 */
  EAX = (0x3u);
  /* 10f647eb jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f647f0:;
  /* 10f647f0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10f647f3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10f647f6 jmp 0x10f64801 */
  goto L_10f64801;
L_10f647f8:;
  /* 10f647f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f647fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f647fe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10f64801:;
  /* 10f64801 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f64804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64806 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f64808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f6480a je 0x10f64849 */
  if (C.zf) goto L_10f64849;
  /* 10f6480c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f6480f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f64811 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10f64814 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f64816 je 0x10f64849 */
  if (C.zf) goto L_10f64849;
  /* 10f64818 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6481b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6481d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f6481f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f64822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64824 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f64826 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64828 jl 0x10f64847 */
  if ((C.sf!=C.of)) goto L_10f64847;
  /* 10f6482a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f6482d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f6482f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f64831 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f64834 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f64836 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10f64839 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6483b jg 0x10f64847 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f64847;
  /* 10f6483d mov eax, 2 */
  EAX = (0x2u);
  /* 10f64842 jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64847:;
  /* 10f64847 jmp 0x10f647f8 */
  goto L_10f647f8;
L_10f64849:;
  /* 10f64849 mov eax, 3 */
  EAX = (0x3u);
  /* 10f6484e jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64853:;
  /* 10f64853 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64857 jle 0x10f648cc */
  if ((C.zf||C.sf!=C.of)) goto L_10f648cc;
  /* 10f64859 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6485d jae 0x10f64869 */
  if (!C.cf) goto L_10f64869;
  /* 10f6485f mov eax, 1 */
  EAX = (0x1u);
  /* 10f64864 jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64869:;
  /* 10f64869 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10f6486c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10f6486f jmp 0x10f6487a */
  goto L_10f6487a;
L_10f64871:;
  /* 10f64871 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f64874 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64877 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10f6487a:;
  /* 10f6487a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f6487d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f6487f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f64881 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f64883 je 0x10f648c2 */
  if (C.zf) goto L_10f648c2;
  /* 10f64885 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f64888 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f6488a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10f6488d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f6488f je 0x10f648c2 */
  if (C.zf) goto L_10f648c2;
  /* 10f64891 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f64894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64896 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f64898 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f6489b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f6489d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f6489f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f648a1 jl 0x10f648c0 */
  if ((C.sf!=C.of)) goto L_10f648c0;
  /* 10f648a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f648a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f648a8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f648aa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10f648ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f648af mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10f648b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f648b4 jg 0x10f648c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f648c0;
  /* 10f648b6 mov eax, 2 */
  EAX = (0x2u);
  /* 10f648bb jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f648c0:;
  /* 10f648c0 jmp 0x10f64871 */
  goto L_10f64871;
L_10f648c2:;
  /* 10f648c2 mov eax, 1 */
  EAX = (0x1u);
  /* 10f648c7 jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f648cc:;
  /* 10f648cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f648ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10f648d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f648d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f648d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f648d7 push edx */
  push32((uint32_t)(EDX));
  /* 10f648d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f648da mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f648dd push eax */
  push32((uint32_t)(EAX));
  /* 10f648de call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f648e4u);
  /* 10f648e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f648e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f648eb jne 0x10f648f4 */
  if (!C.zf) goto L_10f648f4;
  /* 10f648ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f648ef jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f648f4:;
  /* 10f648f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f648fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f648fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f64900 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64903 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f64905 call 0x10f57c30 */
  push32(0x10f6490au); f_10f57c30();
  /* 10f6490a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10f6490d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f64910 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10f64913 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f64916 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f6491d jmp 0x10f64936 */
  goto L_10f64936;
  /* 10f6491f mov eax, 1 */
  EAX = (0x1u);
  /* 10f64924 ret  */
  ESPCHK(0x10f64640u, _esp0);
  ESP += 4; return;
  /* 10f64925 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f64928 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f6492f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f64936:;
  /* 10f64936 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f6493a jne 0x10f64943 */
  if (!C.zf) goto L_10f64943;
  /* 10f6493c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6493e jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64943:;
  /* 10f64943 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f64946 push edx */
  push32((uint32_t)(EDX));
  /* 10f64947 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f6494a push eax */
  push32((uint32_t)(EAX));
  /* 10f6494b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f6494e push ecx */
  push32((uint32_t)(ECX));
  /* 10f6494f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f64952 push edx */
  push32((uint32_t)(EDX));
  /* 10f64953 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f64955 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f64958 push eax */
  push32((uint32_t)(EAX));
  /* 10f64959 call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f6495fu);
  /* 10f6495f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f64961 jne 0x10f6496a */
  if (!C.zf) goto L_10f6496a;
  /* 10f64963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64965 jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f6496a:;
  /* 10f6496a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6496c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f6496e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f64971 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64972 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f64975 push edx */
  push32((uint32_t)(EDX));
  /* 10f64976 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f64978 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f6497b push eax */
  push32((uint32_t)(EAX));
  /* 10f6497c call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f64982u);
  /* 10f64982 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f64985 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64989 jne 0x10f64992 */
  if (!C.zf) goto L_10f64992;
  /* 10f6498b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f6498d jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64992:;
  /* 10f64992 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f64999 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f6499c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f6499e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f649a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f649a3 call 0x10f57c30 */
  push32(0x10f649a8u); f_10f57c30();
  /* 10f649a8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10f649ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f649ae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10f649b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10f649b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f649bb jmp 0x10f649d4 */
  goto L_10f649d4;
  /* 10f649bd mov eax, 1 */
  EAX = (0x1u);
  /* 10f649c2 ret  */
  ESPCHK(0x10f64640u, _esp0);
  ESP += 4; return;
  /* 10f649c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f649c6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10f649cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f649d4:;
  /* 10f649d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f649d8 jne 0x10f649de */
  if (!C.zf) goto L_10f649de;
  /* 10f649da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f649dc jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f649de:;
  /* 10f649de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f649e1 push edx */
  push32((uint32_t)(EDX));
  /* 10f649e2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f649e5 push eax */
  push32((uint32_t)(EAX));
  /* 10f649e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f649e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f649ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f649ed push edx */
  push32((uint32_t)(EDX));
  /* 10f649ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10f649f0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f649f3 push eax */
  push32((uint32_t)(EAX));
  /* 10f649f4 call dword ptr [0x10f832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832fc))), 0x10f649fau);
  /* 10f649fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f649fc jne 0x10f64a02 */
  if (!C.zf) goto L_10f64a02;
  /* 10f649fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64a00 jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64a02:;
  /* 10f64a02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f64a05 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64a06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f64a09 push edx */
  push32((uint32_t)(EDX));
  /* 10f64a0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f64a0d push eax */
  push32((uint32_t)(EAX));
  /* 10f64a0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f64a11 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64a12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f64a15 push edx */
  push32((uint32_t)(EDX));
  /* 10f64a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64a19 push eax */
  push32((uint32_t)(EAX));
  /* 10f64a1a call dword ptr [0x10f832b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832b0))), 0x10f64a20u);
  /* 10f64a20 jmp 0x10f64a24 */
  goto L_10f64a24;
L_10f64a22:;
  /* 10f64a22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f64a24:;
  /* 10f64a24 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10f64a27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f64a2a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f64a31 pop edi */
  EDI = (pop32());
  /* 10f64a32 pop esi */
  ESI = (pop32());
  /* 10f64a33 pop ebx */
  EBX = (pop32());
  /* 10f64a34 mov esp, ebp */
  ESP = (EBP);
  /* 10f64a36 pop ebp */
  EBP = (pop32());
  /* 10f64a37 ret  */
  ESPCHK(0x10f64640u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a40 @ 0x10f64a40 (80 bytes, 32 insns) */
void f_10f64a40(void) {
  FTRACE(0x10f64a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64a41 mov ebp, esp */
  EBP = (ESP);
  /* 10f64a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64a46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f64a49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f64a4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64a4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f64a52:;
  /* 10f64a52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64a55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64a58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64a5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f64a5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f64a60 je 0x10f64a77 */
  if (C.zf) goto L_10f64a77;
  /* 10f64a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64a65 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f64a68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f64a6a je 0x10f64a77 */
  if (C.zf) goto L_10f64a77;
  /* 10f64a6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64a6f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64a72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f64a75 jmp 0x10f64a52 */
  goto L_10f64a52;
L_10f64a77:;
  /* 10f64a77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64a7a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f64a7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f64a7f jne 0x10f64a89 */
  if (!C.zf) goto L_10f64a89;
  /* 10f64a81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64a84 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64a87 jmp 0x10f64a8c */
  goto L_10f64a8c;
L_10f64a89:;
  /* 10f64a89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10f64a8c:;
  /* 10f64a8c mov esp, ebp */
  ESP = (EBP);
  /* 10f64a8e pop ebp */
  EBP = (pop32());
  /* 10f64a8f ret  */
  ESPCHK(0x10f64a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a90 @ 0x10f64a90 (736 bytes, 224 insns) */
void f_10f64a90(void) {
  FTRACE(0x10f64a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64a91 mov ebp, esp */
  EBP = (ESP);
  /* 10f64a93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64a96 push esi */
  push32((uint32_t)(ESI));
  /* 10f64a97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64a9b je 0x10f64abc */
  if (C.zf) goto L_10f64abc;
  /* 10f64a9d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10f64a9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10f64aa3 call 0x10f64ee0 */
  push32(0x10f64aa8u); f_10f64ee0();
  /* 10f64aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64aab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f64aae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64ab2 je 0x10f64abc */
  if (C.zf) goto L_10f64abc;
  /* 10f64ab4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64ab7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64aba jne 0x10f64ac4 */
  if (!C.zf) goto L_10f64ac4;
L_10f64abc:;
  /* 10f64abc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f64abf jmp 0x10f64d6b */
  goto L_10f64d6b;
L_10f64ac4:;
  /* 10f64ac4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f64ac7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10f64acb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f64acd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64acf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10f64ad0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f64ad3 mov ecx, dword ptr [0x10f805e0] */
  ECX = (r32((uint32_t)(0x10f805e0)));
  /* 10f64ad9 cmp ecx, dword ptr [0x10f805e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f805e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64adf jne 0x10f64af5 */
  if (!C.zf) goto L_10f64af5;
  /* 10f64ae1 mov edx, dword ptr [0x10f805e0] */
  EDX = (r32((uint32_t)(0x10f805e0)));
  /* 10f64ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10f64ae8 call 0x10f64df0 */
  push32(0x10f64aedu); f_10f64df0();
  /* 10f64aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64af0 mov dword ptr [0x10f805e0], eax */
  w32((uint32_t)(0x10f805e0), (EAX));
L_10f64af5:;
  /* 10f64af5 cmp dword ptr [0x10f805e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64afc jne 0x10f64bb5 */
  if (!C.zf) goto L_10f64bb5;
  /* 10f64b02 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64b06 je 0x10f64b27 */
  if (C.zf) goto L_10f64b27;
  /* 10f64b08 cmp dword ptr [0x10f805e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64b0f je 0x10f64b27 */
  if (C.zf) goto L_10f64b27;
  /* 10f64b11 call 0x10f64590 */
  push32(0x10f64b16u); f_10f64590();
  /* 10f64b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f64b18 je 0x10f64b22 */
  if (C.zf) goto L_10f64b22;
  /* 10f64b1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f64b1d jmp 0x10f64d6b */
  goto L_10f64d6b;
L_10f64b22:;
  /* 10f64b22 jmp 0x10f64bb5 */
  goto L_10f64bb5;
L_10f64b27:;
  /* 10f64b27 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64b2b je 0x10f64b34 */
  if (C.zf) goto L_10f64b34;
  /* 10f64b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64b2f jmp 0x10f64d6b */
  goto L_10f64d6b;
L_10f64b34:;
  /* 10f64b34 cmp dword ptr [0x10f805e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64b3b jne 0x10f64b74 */
  if (!C.zf) goto L_10f64b74;
  /* 10f64b3d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10f64b42 push 0x10f7caa0 */
  push32((uint32_t)(0x10f7caa0u));
  /* 10f64b47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f64b49 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f64b4b call 0x10f54a90 */
  push32(0x10f64b50u); f_10f54a90();
  /* 10f64b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64b53 mov dword ptr [0x10f805e0], eax */
  w32((uint32_t)(0x10f805e0), (EAX));
  /* 10f64b58 cmp dword ptr [0x10f805e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64b5f jne 0x10f64b69 */
  if (!C.zf) goto L_10f64b69;
  /* 10f64b61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f64b64 jmp 0x10f64d6b */
  goto L_10f64d6b;
L_10f64b69:;
  /* 10f64b69 mov eax, dword ptr [0x10f805e0] */
  EAX = (r32((uint32_t)(0x10f805e0)));
  /* 10f64b6e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10f64b74:;
  /* 10f64b74 cmp dword ptr [0x10f805e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64b7b jne 0x10f64bb5 */
  if (!C.zf) goto L_10f64bb5;
  /* 10f64b7d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10f64b82 push 0x10f7caa0 */
  push32((uint32_t)(0x10f7caa0u));
  /* 10f64b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f64b89 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f64b8b call 0x10f54a90 */
  push32(0x10f64b90u); f_10f54a90();
  /* 10f64b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64b93 mov dword ptr [0x10f805e8], eax */
  w32((uint32_t)(0x10f805e8), (EAX));
  /* 10f64b98 cmp dword ptr [0x10f805e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64b9f jne 0x10f64ba9 */
  if (!C.zf) goto L_10f64ba9;
  /* 10f64ba1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f64ba4 jmp 0x10f64d6b */
  goto L_10f64d6b;
L_10f64ba9:;
  /* 10f64ba9 mov ecx, dword ptr [0x10f805e8] */
  ECX = (r32((uint32_t)(0x10f805e8)));
  /* 10f64baf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10f64bb5:;
  /* 10f64bb5 mov edx, dword ptr [0x10f805e0] */
  EDX = (r32((uint32_t)(0x10f805e0)));
  /* 10f64bbb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f64bbe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f64bc1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64bc4 push eax */
  push32((uint32_t)(EAX));
  /* 10f64bc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64bc9 call 0x10f64d70 */
  push32(0x10f64bceu); f_10f64d70();
  /* 10f64bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64bd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f64bd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64bd8 jl 0x10f64c71 */
  if ((C.sf!=C.of)) goto L_10f64c71;
  /* 10f64bde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64be1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64be4 je 0x10f64c71 */
  if (C.zf) goto L_10f64c71;
  /* 10f64bea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64bee je 0x10f64c63 */
  if (C.zf) goto L_10f64c63;
  /* 10f64bf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f64bf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64bf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64bf8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10f64bfb push edx */
  push32((uint32_t)(EDX));
  /* 10f64bfc call 0x10f55520 */
  push32(0x10f64c01u); f_10f55520();
  /* 10f64c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64c04 jmp 0x10f64c0f */
  goto L_10f64c0f;
L_10f64c06:;
  /* 10f64c06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64c09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64c0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f64c0f:;
  /* 10f64c0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64c12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64c15 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64c19 je 0x10f64c30 */
  if (C.zf) goto L_10f64c30;
  /* 10f64c1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64c21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64c24 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64c27 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10f64c2b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10f64c2e jmp 0x10f64c06 */
  goto L_10f64c06;
L_10f64c30:;
  /* 10f64c30 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10f64c35 push 0x10f7caa0 */
  push32((uint32_t)(0x10f7caa0u));
  /* 10f64c3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f64c3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64c3f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10f64c42 push eax */
  push32((uint32_t)(EAX));
  /* 10f64c43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64c46 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64c47 call 0x10f54f20 */
  push32(0x10f64c4cu); f_10f54f20();
  /* 10f64c4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64c4f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f64c52 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64c56 je 0x10f64c61 */
  if (C.zf) goto L_10f64c61;
  /* 10f64c58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64c5b mov dword ptr [0x10f805e0], edx */
  w32((uint32_t)(0x10f805e0), (EDX));
L_10f64c61:;
  /* 10f64c61 jmp 0x10f64c6f */
  goto L_10f64c6f;
L_10f64c63:;
  /* 10f64c63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64c66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64c69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64c6c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10f64c6f:;
  /* 10f64c6f jmp 0x10f64ce4 */
  goto L_10f64ce4;
L_10f64c71:;
  /* 10f64c71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64c75 jne 0x10f64cdd */
  if (!C.zf) goto L_10f64cdd;
  /* 10f64c77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64c7b jge 0x10f64c85 */
  if ((C.sf==C.of)) goto L_10f64c85;
  /* 10f64c7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64c80 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f64c82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f64c85:;
  /* 10f64c85 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10f64c8a push 0x10f7caa0 */
  push32((uint32_t)(0x10f7caa0u));
  /* 10f64c8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f64c91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64c94 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10f64c9b push edx */
  push32((uint32_t)(EDX));
  /* 10f64c9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64c9f push eax */
  push32((uint32_t)(EAX));
  /* 10f64ca0 call 0x10f54f20 */
  push32(0x10f64ca5u); f_10f54f20();
  /* 10f64ca5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64ca8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f64cab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64caf jne 0x10f64cb9 */
  if (!C.zf) goto L_10f64cb9;
  /* 10f64cb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f64cb4 jmp 0x10f64d6b */
  goto L_10f64d6b;
L_10f64cb9:;
  /* 10f64cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64cbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64cbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64cc2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10f64cc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64cc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64ccb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10f64cd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64cd6 mov dword ptr [0x10f805e0], eax */
  w32((uint32_t)(0x10f805e0), (EAX));
  /* 10f64cdb jmp 0x10f64ce4 */
  goto L_10f64ce4;
L_10f64cdd:;
  /* 10f64cdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64cdf jmp 0x10f64d6b */
  goto L_10f64d6b;
L_10f64ce4:;
  /* 10f64ce4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64ce8 je 0x10f64d69 */
  if (C.zf) goto L_10f64d69;
  /* 10f64cea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10f64cef push 0x10f7caa0 */
  push32((uint32_t)(0x10f7caa0u));
  /* 10f64cf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f64cf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64cfa call 0x10f578c0 */
  push32(0x10f64cffu); f_10f578c0();
  /* 10f64cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64d02 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64d05 push eax */
  push32((uint32_t)(EAX));
  /* 10f64d06 call 0x10f54a90 */
  push32(0x10f64d0bu); f_10f54a90();
  /* 10f64d0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64d0e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f64d11 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64d15 je 0x10f64d69 */
  if (C.zf) goto L_10f64d69;
  /* 10f64d17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64d1a push edx */
  push32((uint32_t)(EDX));
  /* 10f64d1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f64d1e push eax */
  push32((uint32_t)(EAX));
  /* 10f64d1f call 0x10f57a40 */
  push32(0x10f64d24u); f_10f57a40();
  /* 10f64d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64d27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f64d2a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64d2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f64d30 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64d32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f64d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64d38 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10f64d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64d41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f64d44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f64d47 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f64d49 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64d4b not edx */
  EDX = (~(EDX));
  /* 10f64d4d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10f64d50 push edx */
  push32((uint32_t)(EDX));
  /* 10f64d51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f64d54 push eax */
  push32((uint32_t)(EAX));
  /* 10f64d55 call dword ptr [0x10f832ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832ac))), 0x10f64d5bu);
  /* 10f64d5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f64d5d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f64d60 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64d61 call 0x10f55520 */
  push32(0x10f64d66u); f_10f55520();
  /* 10f64d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f64d69:;
  /* 10f64d69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f64d6b:;
  /* 10f64d6b pop esi */
  ESI = (pop32());
  /* 10f64d6c mov esp, ebp */
  ESP = (EBP);
  /* 10f64d6e pop ebp */
  EBP = (pop32());
  /* 10f64d6f ret  */
  ESPCHK(0x10f64a90u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10f64d70 (124 bytes, 47 insns) */
void f_10f64d70(void) {
  FTRACE(0x10f64d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64d71 mov ebp, esp */
  EBP = (ESP);
  /* 10f64d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64d74 mov eax, dword ptr [0x10f805e0] */
  EAX = (r32((uint32_t)(0x10f805e0)));
  /* 10f64d79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f64d7c jmp 0x10f64d87 */
  goto L_10f64d87;
L_10f64d7e:;
  /* 10f64d7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64d81 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64d84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f64d87:;
  /* 10f64d87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64d8a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64d8d je 0x10f64dda */
  if (C.zf) goto L_10f64dda;
  /* 10f64d8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f64d92 push eax */
  push32((uint32_t)(EAX));
  /* 10f64d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64d96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f64d98 push edx */
  push32((uint32_t)(EDX));
  /* 10f64d99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64d9c push eax */
  push32((uint32_t)(EAX));
  /* 10f64d9d call 0x10f64540 */
  push32(0x10f64da2u); f_10f64540();
  /* 10f64da2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f64da7 jne 0x10f64dd8 */
  if (!C.zf) goto L_10f64dd8;
  /* 10f64da9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64dac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f64dae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f64db1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10f64db5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64db8 je 0x10f64dca */
  if (C.zf) goto L_10f64dca;
  /* 10f64dba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64dbd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f64dbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f64dc2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10f64dc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f64dc8 jne 0x10f64dd8 */
  if (!C.zf) goto L_10f64dd8;
L_10f64dca:;
  /* 10f64dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64dcd sub eax, dword ptr [0x10f805e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f805e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64dd3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10f64dd6 jmp 0x10f64de8 */
  goto L_10f64de8;
L_10f64dd8:;
  /* 10f64dd8 jmp 0x10f64d7e */
  goto L_10f64d7e;
L_10f64dda:;
  /* 10f64dda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64ddd sub eax, dword ptr [0x10f805e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f805e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64de3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10f64de6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10f64de8:;
  /* 10f64de8 mov esp, ebp */
  ESP = (EBP);
  /* 10f64dea pop ebp */
  EBP = (pop32());
  /* 10f64deb ret  */
  ESPCHK(0x10f64d70u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10f64df0 (238 bytes, 80 insns) */
void f_10f64df0(void) {
  FTRACE(0x10f64df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64df1 mov ebp, esp */
  EBP = (ESP);
  /* 10f64df3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64df6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10f64dfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64e00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f64e03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64e07 jne 0x10f64e10 */
  if (!C.zf) goto L_10f64e10;
  /* 10f64e09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64e0b jmp 0x10f64eda */
  goto L_10f64eda;
L_10f64e10:;
  /* 10f64e10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64e13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f64e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64e18 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64e1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f64e1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f64e20 je 0x10f64e2d */
  if (C.zf) goto L_10f64e2d;
  /* 10f64e22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f64e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64e28 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f64e2b jmp 0x10f64e10 */
  goto L_10f64e10;
L_10f64e2d:;
  /* 10f64e2d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10f64e32 push 0x10f7caa0 */
  push32((uint32_t)(0x10f7caa0u));
  /* 10f64e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f64e39 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f64e3c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10f64e43 push eax */
  push32((uint32_t)(EAX));
  /* 10f64e44 call 0x10f54a90 */
  push32(0x10f64e49u); f_10f54a90();
  /* 10f64e49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64e4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f64e4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64e52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f64e55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64e59 jne 0x10f64e65 */
  if (!C.zf) goto L_10f64e65;
  /* 10f64e5b push 9 */
  push32((uint32_t)(0x9u));
  /* 10f64e5d call 0x10f53a00 */
  push32(0x10f64e62u); f_10f53a00();
  /* 10f64e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f64e65:;
  /* 10f64e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64e68 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f64e6b:;
  /* 10f64e6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64e6e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64e71 je 0x10f64ece */
  if (C.zf) goto L_10f64ece;
  /* 10f64e73 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10f64e78 push 0x10f7caa0 */
  push32((uint32_t)(0x10f7caa0u));
  /* 10f64e7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f64e7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64e82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f64e84 push edx */
  push32((uint32_t)(EDX));
  /* 10f64e85 call 0x10f578c0 */
  push32(0x10f64e8au); f_10f578c0();
  /* 10f64e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64e8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64e90 push eax */
  push32((uint32_t)(EAX));
  /* 10f64e91 call 0x10f54a90 */
  push32(0x10f64e96u); f_10f54a90();
  /* 10f64e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64e99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64e9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f64e9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64ea1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64ea4 je 0x10f64eba */
  if (C.zf) goto L_10f64eba;
  /* 10f64ea6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64ea9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f64eab push ecx */
  push32((uint32_t)(ECX));
  /* 10f64eac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64eaf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f64eb1 push eax */
  push32((uint32_t)(EAX));
  /* 10f64eb2 call 0x10f57a40 */
  push32(0x10f64eb7u); f_10f57a40();
  /* 10f64eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f64eba:;
  /* 10f64eba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f64ebd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64ec0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f64ec3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64ec6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64ec9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f64ecc jmp 0x10f64e6b */
  goto L_10f64e6b;
L_10f64ece:;
  /* 10f64ece mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f64ed1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f64ed7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f64eda:;
  /* 10f64eda mov esp, ebp */
  ESP = (EBP);
  /* 10f64edc pop ebp */
  EBP = (pop32());
  /* 10f64edd ret  */
  ESPCHK(0x10f64df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ee0 @ 0x10f64ee0 (237 bytes, 81 insns) */
void f_10f64ee0(void) {
  FTRACE(0x10f64ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f64ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10f64ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64ee4 cmp dword ptr [0x10f81d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f81d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64eeb jne 0x10f64f02 */
  if (!C.zf) goto L_10f64f02;
  /* 10f64eed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f64ef0 push eax */
  push32((uint32_t)(EAX));
  /* 10f64ef1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f64ef5 call 0x10f64fe0 */
  push32(0x10f64efau); f_10f64fe0();
  /* 10f64efa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64efd jmp 0x10f64fc9 */
  goto L_10f64fc9;
L_10f64f02:;
  /* 10f64f02 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f64f04 call 0x10f58490 */
  push32(0x10f64f09u); f_10f58490();
  /* 10f64f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64f0c jmp 0x10f64f17 */
  goto L_10f64f17;
L_10f64f0e:;
  /* 10f64f0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64f11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64f14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10f64f17:;
  /* 10f64f17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64f1a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10f64f1e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10f64f22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64f25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f64f2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f64f2d je 0x10f64fab */
  if (C.zf) goto L_10f64fab;
  /* 10f64f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64f32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f64f37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f64f39 mov cl, byte ptr [eax + 0x10f81e41] */
  CL = (r8((uint32_t)(EAX + 0x10f81e41)));
  /* 10f64f3f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10f64f42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f64f44 je 0x10f64f96 */
  if (C.zf) goto L_10f64f96;
  /* 10f64f46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64f49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64f4c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f64f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64f52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f64f54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f64f56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f64f58 jne 0x10f64f68 */
  if (!C.zf) goto L_10f64f68;
  /* 10f64f5a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f64f5c call 0x10f58530 */
  push32(0x10f64f61u); f_10f58530();
  /* 10f64f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64f66 jmp 0x10f64fc9 */
  goto L_10f64fc9;
L_10f64f68:;
  /* 10f64f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64f6b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f64f71 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10f64f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64f77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f64f79 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f64f7b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f64f7d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64f80 jne 0x10f64f94 */
  if (!C.zf) goto L_10f64f94;
  /* 10f64f82 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f64f84 call 0x10f58530 */
  push32(0x10f64f89u); f_10f58530();
  /* 10f64f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64f8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64f8f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f64f92 jmp 0x10f64fc9 */
  goto L_10f64fc9;
L_10f64f94:;
  /* 10f64f94 jmp 0x10f64fa6 */
  goto L_10f64fa6;
L_10f64f96:;
  /* 10f64f96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64f99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f64f9f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64fa2 jne 0x10f64fa6 */
  if (!C.zf) goto L_10f64fa6;
  /* 10f64fa4 jmp 0x10f64fab */
  goto L_10f64fab;
L_10f64fa6:;
  /* 10f64fa6 jmp 0x10f64f0e */
  goto L_10f64f0e;
L_10f64fab:;
  /* 10f64fab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f64fad call 0x10f58530 */
  push32(0x10f64fb2u); f_10f58530();
  /* 10f64fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f64fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f64fb8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f64fbd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f64fc0 jne 0x10f64fc7 */
  if (!C.zf) goto L_10f64fc7;
  /* 10f64fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f64fc5 jmp 0x10f64fc9 */
  goto L_10f64fc9;
L_10f64fc7:;
  /* 10f64fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f64fc9:;
  /* 10f64fc9 mov esp, ebp */
  ESP = (EBP);
  /* 10f64fcb pop ebp */
  EBP = (pop32());
  /* 10f64fcc ret  */
  ESPCHK(0x10f64ee0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10f64fe0 (193 bytes, 87 insns) */
void f_10f64fe0(void) {
  FTRACE(0x10f64fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f64fe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f64fe2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10f64fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f64fe7 mov ebx, eax */
  EBX = (EAX);
  /* 10f64fe9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f64fec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f64ff0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10f64ff6 je 0x10f6500b */
  if (C.zf) goto L_10f6500b;
L_10f64ff8:;
  /* 10f64ff8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10f64ffa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10f64ffb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f64ffd je 0x10f64fd0 */
  if (C.zf) { jmp_ind(0x10f64fd0u); return; }
  /* 10f64fff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10f65001 je 0x10f65054 */
  if (C.zf) goto L_10f65054;
  /* 10f65003 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10f65009 jne 0x10f64ff8 */
  if (!C.zf) goto L_10f64ff8;
L_10f6500b:;
  /* 10f6500b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10f6500d push edi */
  push32((uint32_t)(EDI));
  /* 10f6500e mov eax, ebx */
  EAX = (EBX);
  /* 10f65010 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10f65013 push esi */
  push32((uint32_t)(ESI));
  /* 10f65014 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10f65016:;
  /* 10f65016 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10f65018 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10f6501d mov eax, ecx */
  EAX = (ECX);
  /* 10f6501f mov esi, edi */
  ESI = (EDI);
  /* 10f65021 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10f65023 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f65025 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f65027 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f6502a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f6502d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10f6502f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10f65031 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f65034 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10f6503a jne 0x10f65058 */
  if (!C.zf) goto L_10f65058;
  /* 10f6503c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10f65041 je 0x10f65016 */
  if (C.zf) goto L_10f65016;
  /* 10f65043 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10f65048 jne 0x10f65052 */
  if (!C.zf) goto L_10f65052;
  /* 10f6504a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10f65050 jne 0x10f65016 */
  if (!C.zf) goto L_10f65016;
L_10f65052:;
  /* 10f65052 pop esi */
  ESI = (pop32());
  /* 10f65053 pop edi */
  EDI = (pop32());
L_10f65054:;
  /* 10f65054 pop ebx */
  EBX = (pop32());
  /* 10f65055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f65057 ret  */
  ESPCHK(0x10f64fe0u, _esp0);
  ESP += 4; return;
L_10f65058:;
  /* 10f65058 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10f6505b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f6505d je 0x10f65095 */
  if (C.zf) goto L_10f65095;
  /* 10f6505f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f65061 je 0x10f65052 */
  if (C.zf) goto L_10f65052;
  /* 10f65063 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f65065 je 0x10f6508e */
  if (C.zf) goto L_10f6508e;
  /* 10f65067 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f65069 je 0x10f65052 */
  if (C.zf) goto L_10f65052;
  /* 10f6506b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f6506e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f65070 je 0x10f65087 */
  if (C.zf) goto L_10f65087;
  /* 10f65072 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f65074 je 0x10f65052 */
  if (C.zf) goto L_10f65052;
  /* 10f65076 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10f65078 je 0x10f65080 */
  if (C.zf) goto L_10f65080;
  /* 10f6507a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f6507c je 0x10f65052 */
  if (C.zf) goto L_10f65052;
  /* 10f6507e jmp 0x10f65016 */
  goto L_10f65016;
L_10f65080:;
  /* 10f65080 pop esi */
  ESI = (pop32());
  /* 10f65081 pop edi */
  EDI = (pop32());
  /* 10f65082 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10f65085 pop ebx */
  EBX = (pop32());
  /* 10f65086 ret  */
  ESPCHK(0x10f64fe0u, _esp0);
  ESP += 4; return;
L_10f65087:;
  /* 10f65087 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10f6508a pop esi */
  ESI = (pop32());
  /* 10f6508b pop edi */
  EDI = (pop32());
  /* 10f6508c pop ebx */
  EBX = (pop32());
  /* 10f6508d ret  */
  ESPCHK(0x10f64fe0u, _esp0);
  ESP += 4; return;
L_10f6508e:;
  /* 10f6508e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10f65091 pop esi */
  ESI = (pop32());
  /* 10f65092 pop edi */
  EDI = (pop32());
  /* 10f65093 pop ebx */
  EBX = (pop32());
  /* 10f65094 ret  */
  ESPCHK(0x10f64fe0u, _esp0);
  ESP += 4; return;
L_10f65095:;
  /* 10f65095 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10f65098 pop esi */
  ESI = (pop32());
  /* 10f65099 pop edi */
  EDI = (pop32());
  /* 10f6509a pop ebx */
  EBX = (pop32());
  /* 10f6509b ret  */
  ESPCHK(0x10f64fe0u, _esp0);
  ESP += 4; return;
  /* 10f6509c jmp dword ptr [0x10f83340] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10f83340)))); return;
}

/* RtlUnwind @ 0x10f651ec (6 bytes, 1 insns) */
void f_10f651ec(void) {
  FTRACE(0x10f651ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f651ec jmp dword ptr [0x10f832e4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10f832e4)))); return;
}

