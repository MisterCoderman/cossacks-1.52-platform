#include "recomp.h"

/* FUN_10011dd0 @ 0x12161dd0 (393 bytes, 123 insns) */
void f_12161dd0(void) {
  FTRACE(0x12161dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12161dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12161dd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161dd6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161dda jne 0x12161de6 */
  if (!C.zf) goto L_12161de6;
  /* 12161ddc mov eax, dword ptr [0x1217fc98] */
  EAX = (r32((uint32_t)(0x1217fc98)));
  /* 12161de1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12161de4 jmp 0x12161dec */
  goto L_12161dec;
L_12161de6:;
  /* 12161de6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12161de9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12161dec:;
  /* 12161dec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12161def mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12161df2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12161df5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12161df8 push 0x1218094c */
  push32((uint32_t)(0x1218094cu));
  /* 12161dfd call dword ptr [0x12183364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183364))), 0x12161e03u);
  /* 12161e03 cmp dword ptr [0x1218093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161e0a je 0x12161e2a */
  if (C.zf) goto L_12161e2a;
  /* 12161e0c push 0x1218094c */
  push32((uint32_t)(0x1218094cu));
  /* 12161e11 call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x12161e17u);
  /* 12161e17 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12161e19 call 0x12158490 */
  push32(0x12161e1eu); f_12158490();
  /* 12161e1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161e21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12161e28 jmp 0x12161e31 */
  goto L_12161e31;
L_12161e2a:;
  /* 12161e2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12161e31:;
  /* 12161e31 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161e35 jbe 0x12161f22 */
  if ((C.cf||C.zf)) goto L_12161f22;
  /* 12161e3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161e3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12161e40 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12161e43 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12161e47 je 0x12161e51 */
  if (C.zf) goto L_12161e51;
  /* 12161e49 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12161e4d je 0x12161e56 */
  if (C.zf) goto L_12161e56;
  /* 12161e4f jmp 0x12161eb0 */
  goto L_12161eb0;
L_12161e51:;
  /* 12161e51 jmp 0x12161f22 */
  goto L_12161f22;
L_12161e56:;
  /* 12161e56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161e59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161e5c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12161e5f mov dword ptr [0x12180928], 0 */
  w32((uint32_t)(0x12180928), (0x0u));
  /* 12161e69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161e6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12161e6f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161e72 jne 0x12161e87 */
  if (!C.zf) goto L_12161e87;
  /* 12161e74 mov dword ptr [0x12180928], 1 */
  w32((uint32_t)(0x12180928), (0x1u));
  /* 12161e7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161e81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161e84 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12161e87:;
  /* 12161e87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12161e8a push ecx */
  push32((uint32_t)(ECX));
  /* 12161e8b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12161e8e push edx */
  push32((uint32_t)(EDX));
  /* 12161e8f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12161e92 push eax */
  push32((uint32_t)(EAX));
  /* 12161e93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12161e96 push ecx */
  push32((uint32_t)(ECX));
  /* 12161e97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161e9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12161e9c push eax */
  push32((uint32_t)(EAX));
  /* 12161e9d call 0x12161f60 */
  push32(0x12161ea2u); f_12161f60();
  /* 12161ea2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161ea5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161ea8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161eab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12161eae jmp 0x12161f1d */
  goto L_12161f1d;
L_12161eb0:;
  /* 12161eb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161eb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12161eb5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12161eb7 mov ecx, dword ptr [0x1217ec98] */
  ECX = (r32((uint32_t)(0x1217ec98)));
  /* 12161ebd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12161ebf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12161ec3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12161ec9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12161ecb je 0x12161ef8 */
  if (C.zf) goto L_12161ef8;
  /* 12161ecd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161ed1 jbe 0x12161ef8 */
  if ((C.cf||C.zf)) goto L_12161ef8;
  /* 12161ed3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161ed6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161ed9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12161edb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12161edd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161ee0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161ee3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12161ee6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161ee9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161eec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12161eef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161ef2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161ef5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12161ef8:;
  /* 12161ef8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161efb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161efe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12161f00 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12161f02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161f05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161f08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12161f0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161f0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12161f11 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12161f14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161f17 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161f1a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12161f1d:;
  /* 12161f1d jmp 0x12161e31 */
  goto L_12161e31;
L_12161f22:;
  /* 12161f22 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161f26 je 0x12161f34 */
  if (C.zf) goto L_12161f34;
  /* 12161f28 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12161f2a call 0x12158530 */
  push32(0x12161f2fu); f_12158530();
  /* 12161f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161f32 jmp 0x12161f3f */
  goto L_12161f3f;
L_12161f34:;
  /* 12161f34 push 0x1218094c */
  push32((uint32_t)(0x1218094cu));
  /* 12161f39 call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x12161f3fu);
L_12161f3f:;
  /* 12161f3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161f43 jbe 0x12161f53 */
  if ((C.cf||C.zf)) goto L_12161f53;
  /* 12161f45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12161f48 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12161f4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12161f4e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161f51 jmp 0x12161f55 */
  goto L_12161f55;
L_12161f53:;
  /* 12161f53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12161f55:;
  /* 12161f55 mov esp, ebp */
  ESP = (EBP);
  /* 12161f57 pop ebp */
  EBP = (pop32());
  /* 12161f58 ret  */
  ESPCHK(0x12161dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f60 @ 0x12161f60 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12161f60(void) {
  FTRACE(0x12161f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12161f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12161f61 mov ebp, esp */
  EBP = (ESP);
  /* 12161f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161f66 push esi */
  push32((uint32_t)(ESI));
  /* 12161f67 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12161f6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12161f6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161f71 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12161f74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12161f77 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12161f7b ja 0x121624c8 */
  if ((!C.cf&&!C.zf)) goto L_121624c8;
  /* 12161f81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12161f84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12161f86 mov dl, byte ptr [eax + 0x12162529] */
  DL = (r8((uint32_t)(EAX + 0x12162529)));
  /* 12161f8c jmp dword ptr [edx*4 + 0x121624cd] */
  switch (EDX) {
    case 0: goto L_121624a6;
    case 1: goto L_12161fb5;
    case 2: goto L_12161ffb;
    case 3: goto L_12162148;
    case 4: goto L_12162170;
    case 5: goto L_1216220f;
    case 6: goto L_1216227b;
    case 7: goto L_121622a4;
    case 8: goto L_121622e5;
    case 9: goto L_121623c7;
    case 10: goto L_1216242e;
    case 11: goto L_1216247b;
    case 12: goto L_12161f93;
    case 13: goto L_12161fd8;
    case 14: goto L_1216201e;
    case 15: goto L_1216211e;
    case 16: goto L_121621b5;
    case 17: goto L_121621e2;
    case 18: goto L_12162237;
    case 19: goto L_121622bb;
    case 20: goto L_12162369;
    case 21: goto L_121623f8;
    case 22: goto L_121624c8;
    default: x86_unimpl("switch@0x12161f8c out of table"); return;
  }
L_12161f93:;
  /* 12161f93 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12161f96 push ecx */
  push32((uint32_t)(ECX));
  /* 12161f97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161f9a push edx */
  push32((uint32_t)(EDX));
  /* 12161f9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12161f9e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12161fa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12161fa4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12161fa7 push eax */
  push32((uint32_t)(EAX));
  /* 12161fa8 call 0x12162580 */
  push32(0x12161fadu); f_12162580();
  /* 12161fad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161fb0 jmp 0x121624c8 */
  goto L_121624c8;
L_12161fb5:;
  /* 12161fb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12161fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12161fb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161fbc push edx */
  push32((uint32_t)(EDX));
  /* 12161fbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12161fc0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12161fc3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12161fc6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12161fca push eax */
  push32((uint32_t)(EAX));
  /* 12161fcb call 0x12162580 */
  push32(0x12161fd0u); f_12162580();
  /* 12161fd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161fd3 jmp 0x121624c8 */
  goto L_121624c8;
L_12161fd8:;
  /* 12161fd8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12161fdb push ecx */
  push32((uint32_t)(ECX));
  /* 12161fdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12161fdf push edx */
  push32((uint32_t)(EDX));
  /* 12161fe0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12161fe3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12161fe6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12161fe9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12161fed push eax */
  push32((uint32_t)(EAX));
  /* 12161fee call 0x12162580 */
  push32(0x12161ff3u); f_12162580();
  /* 12161ff3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12161ff6 jmp 0x121624c8 */
  goto L_121624c8;
L_12161ffb:;
  /* 12161ffb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12161ffe push ecx */
  push32((uint32_t)(ECX));
  /* 12161fff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162002 push edx */
  push32((uint32_t)(EDX));
  /* 12162003 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162006 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12162009 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1216200c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12162010 push eax */
  push32((uint32_t)(EAX));
  /* 12162011 call 0x12162580 */
  push32(0x12162016u); f_12162580();
  /* 12162016 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162019 jmp 0x121624c8 */
  goto L_121624c8;
L_1216201e:;
  /* 1216201e cmp dword ptr [0x12180928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162025 je 0x121620a6 */
  if (C.zf) goto L_121620a6;
  /* 12162027 mov dword ptr [0x12180928], 0 */
  w32((uint32_t)(0x12180928), (0x0u));
  /* 12162031 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12162034 push ecx */
  push32((uint32_t)(ECX));
  /* 12162035 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162038 push edx */
  push32((uint32_t)(EDX));
  /* 12162039 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216203c push eax */
  push32((uint32_t)(EAX));
  /* 1216203d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162040 push ecx */
  push32((uint32_t)(ECX));
  /* 12162041 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12162044 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1216204a push eax */
  push32((uint32_t)(EAX));
  /* 1216204b call 0x12162730 */
  push32(0x12162050u); f_12162730();
  /* 12162050 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162053 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162056 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162059 jne 0x12162060 */
  if (!C.zf) goto L_12162060;
  /* 1216205b jmp 0x121624c8 */
  goto L_121624c8;
L_12162060:;
  /* 12162060 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162063 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12162065 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12162068 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216206b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1216206d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162070 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162073 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12162075 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162078 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1216207a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1216207d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162080 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12162082 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12162085 push ecx */
  push32((uint32_t)(ECX));
  /* 12162086 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162089 push edx */
  push32((uint32_t)(EDX));
  /* 1216208a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216208d push eax */
  push32((uint32_t)(EAX));
  /* 1216208e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162091 push ecx */
  push32((uint32_t)(ECX));
  /* 12162092 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12162095 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1216209b push eax */
  push32((uint32_t)(EAX));
  /* 1216209c call 0x12162730 */
  push32(0x121620a1u); f_12162730();
  /* 121620a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121620a4 jmp 0x12162119 */
  goto L_12162119;
L_121620a6:;
  /* 121620a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121620a9 push ecx */
  push32((uint32_t)(ECX));
  /* 121620aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121620ad push edx */
  push32((uint32_t)(EDX));
  /* 121620ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121620b1 push eax */
  push32((uint32_t)(EAX));
  /* 121620b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121620b5 push ecx */
  push32((uint32_t)(ECX));
  /* 121620b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121620b9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 121620bf push eax */
  push32((uint32_t)(EAX));
  /* 121620c0 call 0x12162730 */
  push32(0x121620c5u); f_12162730();
  /* 121620c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121620c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121620cb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121620ce jne 0x121620d5 */
  if (!C.zf) goto L_121620d5;
  /* 121620d0 jmp 0x121624c8 */
  goto L_121624c8;
L_121620d5:;
  /* 121620d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121620d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121620da mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 121620dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121620e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121620e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121620e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121620e8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121620ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121620ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121620ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121620f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121620f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121620f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121620fa push ecx */
  push32((uint32_t)(ECX));
  /* 121620fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121620fe push edx */
  push32((uint32_t)(EDX));
  /* 121620ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162102 push eax */
  push32((uint32_t)(EAX));
  /* 12162103 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162106 push ecx */
  push32((uint32_t)(ECX));
  /* 12162107 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1216210a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12162110 push eax */
  push32((uint32_t)(EAX));
  /* 12162111 call 0x12162730 */
  push32(0x12162116u); f_12162730();
  /* 12162116 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12162119:;
  /* 12162119 jmp 0x121624c8 */
  goto L_121624c8;
L_1216211e:;
  /* 1216211e mov ecx, dword ptr [0x12180928] */
  ECX = (r32((uint32_t)(0x12180928)));
  /* 12162124 mov dword ptr [0x12180938], ecx */
  w32((uint32_t)(0x12180938), (ECX));
  /* 1216212a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1216212d push edx */
  push32((uint32_t)(EDX));
  /* 1216212e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162131 push eax */
  push32((uint32_t)(EAX));
  /* 12162132 push 2 */
  push32((uint32_t)(0x2u));
  /* 12162134 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162137 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1216213a push edx */
  push32((uint32_t)(EDX));
  /* 1216213b call 0x121625d0 */
  push32(0x12162140u); f_121625d0();
  /* 12162140 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162143 jmp 0x121624c8 */
  goto L_121624c8;
L_12162148:;
  /* 12162148 mov eax, dword ptr [0x12180928] */
  EAX = (r32((uint32_t)(0x12180928)));
  /* 1216214d mov dword ptr [0x12180938], eax */
  w32((uint32_t)(0x12180938), (EAX));
  /* 12162152 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162155 push ecx */
  push32((uint32_t)(ECX));
  /* 12162156 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162159 push edx */
  push32((uint32_t)(EDX));
  /* 1216215a push 2 */
  push32((uint32_t)(0x2u));
  /* 1216215c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216215f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12162162 push ecx */
  push32((uint32_t)(ECX));
  /* 12162163 call 0x121625d0 */
  push32(0x12162168u); f_121625d0();
  /* 12162168 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216216b jmp 0x121624c8 */
  goto L_121624c8;
L_12162170:;
  /* 12162170 mov edx, dword ptr [0x12180928] */
  EDX = (r32((uint32_t)(0x12180928)));
  /* 12162176 mov dword ptr [0x12180938], edx */
  w32((uint32_t)(0x12180938), (EDX));
  /* 1216217c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216217f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12162182 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12162183 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12162188 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1216218a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1216218d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162191 jne 0x1216219a */
  if (!C.zf) goto L_1216219a;
  /* 12162193 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1216219a:;
  /* 1216219a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1216219d push edx */
  push32((uint32_t)(EDX));
  /* 1216219e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121621a1 push eax */
  push32((uint32_t)(EAX));
  /* 121621a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 121621a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121621a7 push ecx */
  push32((uint32_t)(ECX));
  /* 121621a8 call 0x121625d0 */
  push32(0x121621adu); f_121625d0();
  /* 121621ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121621b0 jmp 0x121624c8 */
  goto L_121624c8;
L_121621b5:;
  /* 121621b5 mov edx, dword ptr [0x12180928] */
  EDX = (r32((uint32_t)(0x12180928)));
  /* 121621bb mov dword ptr [0x12180938], edx */
  w32((uint32_t)(0x12180938), (EDX));
  /* 121621c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121621c4 push eax */
  push32((uint32_t)(EAX));
  /* 121621c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121621c8 push ecx */
  push32((uint32_t)(ECX));
  /* 121621c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 121621cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121621ce mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121621d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121621d4 push eax */
  push32((uint32_t)(EAX));
  /* 121621d5 call 0x121625d0 */
  push32(0x121621dau); f_121625d0();
  /* 121621da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121621dd jmp 0x121624c8 */
  goto L_121624c8;
L_121621e2:;
  /* 121621e2 mov ecx, dword ptr [0x12180928] */
  ECX = (r32((uint32_t)(0x12180928)));
  /* 121621e8 mov dword ptr [0x12180938], ecx */
  w32((uint32_t)(0x12180938), (ECX));
  /* 121621ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121621f1 push edx */
  push32((uint32_t)(EDX));
  /* 121621f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121621f5 push eax */
  push32((uint32_t)(EAX));
  /* 121621f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121621f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121621fb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 121621fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162201 push edx */
  push32((uint32_t)(EDX));
  /* 12162202 call 0x121625d0 */
  push32(0x12162207u); f_121625d0();
  /* 12162207 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216220a jmp 0x121624c8 */
  goto L_121624c8;
L_1216220f:;
  /* 1216220f mov eax, dword ptr [0x12180928] */
  EAX = (r32((uint32_t)(0x12180928)));
  /* 12162214 mov dword ptr [0x12180938], eax */
  w32((uint32_t)(0x12180938), (EAX));
  /* 12162219 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1216221c push ecx */
  push32((uint32_t)(ECX));
  /* 1216221d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162220 push edx */
  push32((uint32_t)(EDX));
  /* 12162221 push 2 */
  push32((uint32_t)(0x2u));
  /* 12162223 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162226 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12162229 push ecx */
  push32((uint32_t)(ECX));
  /* 1216222a call 0x121625d0 */
  push32(0x1216222fu); f_121625d0();
  /* 1216222f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162232 jmp 0x121624c8 */
  goto L_121624c8;
L_12162237:;
  /* 12162237 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216223a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216223e jg 0x1216225c */
  if ((!C.zf&&C.sf==C.of)) goto L_1216225c;
  /* 12162240 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162243 push eax */
  push32((uint32_t)(EAX));
  /* 12162244 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162247 push ecx */
  push32((uint32_t)(ECX));
  /* 12162248 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1216224b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12162251 push eax */
  push32((uint32_t)(EAX));
  /* 12162252 call 0x12162580 */
  push32(0x12162257u); f_12162580();
  /* 12162257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216225a jmp 0x12162276 */
  goto L_12162276;
L_1216225c:;
  /* 1216225c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1216225f push ecx */
  push32((uint32_t)(ECX));
  /* 12162260 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162263 push edx */
  push32((uint32_t)(EDX));
  /* 12162264 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12162267 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1216226d push ecx */
  push32((uint32_t)(ECX));
  /* 1216226e call 0x12162580 */
  push32(0x12162273u); f_12162580();
  /* 12162273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12162276:;
  /* 12162276 jmp 0x121624c8 */
  goto L_121624c8;
L_1216227b:;
  /* 1216227b mov edx, dword ptr [0x12180928] */
  EDX = (r32((uint32_t)(0x12180928)));
  /* 12162281 mov dword ptr [0x12180938], edx */
  w32((uint32_t)(0x12180938), (EDX));
  /* 12162287 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1216228a push eax */
  push32((uint32_t)(EAX));
  /* 1216228b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216228e push ecx */
  push32((uint32_t)(ECX));
  /* 1216228f push 2 */
  push32((uint32_t)(0x2u));
  /* 12162291 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162294 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12162296 push eax */
  push32((uint32_t)(EAX));
  /* 12162297 call 0x121625d0 */
  push32(0x1216229cu); f_121625d0();
  /* 1216229c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216229f jmp 0x121624c8 */
  goto L_121624c8;
L_121622a4:;
  /* 121622a4 mov ecx, dword ptr [0x12180928] */
  ECX = (r32((uint32_t)(0x12180928)));
  /* 121622aa mov dword ptr [0x12180938], ecx */
  w32((uint32_t)(0x12180938), (ECX));
  /* 121622b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121622b3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 121622b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121622b9 jmp 0x1216230d */
  goto L_1216230d;
L_121622bb:;
  /* 121622bb mov ecx, dword ptr [0x12180928] */
  ECX = (r32((uint32_t)(0x12180928)));
  /* 121622c1 mov dword ptr [0x12180938], ecx */
  w32((uint32_t)(0x12180938), (ECX));
  /* 121622c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121622ca push edx */
  push32((uint32_t)(EDX));
  /* 121622cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121622ce push eax */
  push32((uint32_t)(EAX));
  /* 121622cf push 1 */
  push32((uint32_t)(0x1u));
  /* 121622d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121622d4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121622d7 push edx */
  push32((uint32_t)(EDX));
  /* 121622d8 call 0x121625d0 */
  push32(0x121622ddu); f_121625d0();
  /* 121622dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121622e0 jmp 0x121624c8 */
  goto L_121624c8;
L_121622e5:;
  /* 121622e5 mov eax, dword ptr [0x12180928] */
  EAX = (r32((uint32_t)(0x12180928)));
  /* 121622ea mov dword ptr [0x12180938], eax */
  w32((uint32_t)(0x12180938), (EAX));
  /* 121622ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121622f2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121622f6 jne 0x12162301 */
  if (!C.zf) goto L_12162301;
  /* 121622f8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 121622ff jmp 0x1216230d */
  goto L_1216230d;
L_12162301:;
  /* 12162301 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162304 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12162307 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1216230a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1216230d:;
  /* 1216230d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162310 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12162313 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162316 jge 0x12162321 */
  if ((C.sf==C.of)) goto L_12162321;
  /* 12162318 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1216231f jmp 0x1216234e */
  goto L_1216234e;
L_12162321:;
  /* 12162321 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162324 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12162327 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12162328 mov ecx, 7 */
  ECX = (0x7u);
  /* 1216232d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1216232f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12162332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162335 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12162338 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12162339 mov ecx, 7 */
  ECX = (0x7u);
  /* 1216233e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12162340 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162343 jl 0x1216234e */
  if ((C.sf!=C.of)) goto L_1216234e;
  /* 12162345 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12162348 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216234b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1216234e:;
  /* 1216234e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162351 push eax */
  push32((uint32_t)(EAX));
  /* 12162352 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162355 push ecx */
  push32((uint32_t)(ECX));
  /* 12162356 push 2 */
  push32((uint32_t)(0x2u));
  /* 12162358 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216235b push edx */
  push32((uint32_t)(EDX));
  /* 1216235c call 0x121625d0 */
  push32(0x12162361u); f_121625d0();
  /* 12162361 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162364 jmp 0x121624c8 */
  goto L_121624c8;
L_12162369:;
  /* 12162369 cmp dword ptr [0x12180928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162370 je 0x121623a0 */
  if (C.zf) goto L_121623a0;
  /* 12162372 mov dword ptr [0x12180928], 0 */
  w32((uint32_t)(0x12180928), (0x0u));
  /* 1216237c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1216237f push eax */
  push32((uint32_t)(EAX));
  /* 12162380 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162383 push ecx */
  push32((uint32_t)(ECX));
  /* 12162384 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162387 push edx */
  push32((uint32_t)(EDX));
  /* 12162388 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216238b push eax */
  push32((uint32_t)(EAX));
  /* 1216238c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1216238f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12162395 push edx */
  push32((uint32_t)(EDX));
  /* 12162396 call 0x12162730 */
  push32(0x1216239bu); f_12162730();
  /* 1216239b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216239e jmp 0x121623c2 */
  goto L_121623c2;
L_121623a0:;
  /* 121623a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121623a3 push eax */
  push32((uint32_t)(EAX));
  /* 121623a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121623a7 push ecx */
  push32((uint32_t)(ECX));
  /* 121623a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121623ab push edx */
  push32((uint32_t)(EDX));
  /* 121623ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121623af push eax */
  push32((uint32_t)(EAX));
  /* 121623b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121623b3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 121623b9 push edx */
  push32((uint32_t)(EDX));
  /* 121623ba call 0x12162730 */
  push32(0x121623bfu); f_12162730();
  /* 121623bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121623c2:;
  /* 121623c2 jmp 0x121624c8 */
  goto L_121624c8;
L_121623c7:;
  /* 121623c7 mov dword ptr [0x12180928], 0 */
  w32((uint32_t)(0x12180928), (0x0u));
  /* 121623d1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121623d4 push eax */
  push32((uint32_t)(EAX));
  /* 121623d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121623d8 push ecx */
  push32((uint32_t)(ECX));
  /* 121623d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121623dc push edx */
  push32((uint32_t)(EDX));
  /* 121623dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121623e0 push eax */
  push32((uint32_t)(EAX));
  /* 121623e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121623e4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 121623ea push edx */
  push32((uint32_t)(EDX));
  /* 121623eb call 0x12162730 */
  push32(0x121623f0u); f_12162730();
  /* 121623f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121623f3 jmp 0x121624c8 */
  goto L_121624c8;
L_121623f8:;
  /* 121623f8 mov eax, dword ptr [0x12180928] */
  EAX = (r32((uint32_t)(0x12180928)));
  /* 121623fd mov dword ptr [0x12180938], eax */
  w32((uint32_t)(0x12180938), (EAX));
  /* 12162402 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162405 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12162408 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12162409 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1216240e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12162410 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12162413 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162416 push edx */
  push32((uint32_t)(EDX));
  /* 12162417 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216241a push eax */
  push32((uint32_t)(EAX));
  /* 1216241b push 2 */
  push32((uint32_t)(0x2u));
  /* 1216241d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12162420 push ecx */
  push32((uint32_t)(ECX));
  /* 12162421 call 0x121625d0 */
  push32(0x12162426u); f_121625d0();
  /* 12162426 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162429 jmp 0x121624c8 */
  goto L_121624c8;
L_1216242e:;
  /* 1216242e mov edx, dword ptr [0x12180928] */
  EDX = (r32((uint32_t)(0x12180928)));
  /* 12162434 mov dword ptr [0x12180938], edx */
  w32((uint32_t)(0x12180938), (EDX));
  /* 1216243a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216243d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12162440 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12162441 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12162446 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12162448 mov ecx, eax */
  ECX = (EAX);
  /* 1216244a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216244d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12162450 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162453 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12162456 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12162457 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1216245c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1216245e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162460 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12162463 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162466 push eax */
  push32((uint32_t)(EAX));
  /* 12162467 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216246a push ecx */
  push32((uint32_t)(ECX));
  /* 1216246b push 4 */
  push32((uint32_t)(0x4u));
  /* 1216246d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12162470 push edx */
  push32((uint32_t)(EDX));
  /* 12162471 call 0x121625d0 */
  push32(0x12162476u); f_121625d0();
  /* 12162476 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162479 jmp 0x121624c8 */
  goto L_121624c8;
L_1216247b:;
  /* 1216247b call 0x12163590 */
  push32(0x12162480u); f_12163590();
  /* 12162480 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162483 push eax */
  push32((uint32_t)(EAX));
  /* 12162484 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162487 push ecx */
  push32((uint32_t)(ECX));
  /* 12162488 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216248b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216248d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162491 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12162494 mov ecx, dword ptr [eax*4 + 0x1217fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1217fe1c)));
  /* 1216249b push ecx */
  push32((uint32_t)(ECX));
  /* 1216249c call 0x12162580 */
  push32(0x121624a1u); f_12162580();
  /* 121624a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121624a4 jmp 0x121624c8 */
  goto L_121624c8;
L_121624a6:;
  /* 121624a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121624a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121624ab mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 121624ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121624b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121624b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121624b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121624b9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121624bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121624be mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121624c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121624c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121624c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121624c8:;
  /* 121624c8 pop esi */
  ESI = (pop32());
  /* 121624c9 mov esp, ebp */
  ESP = (EBP);
  /* 121624cb pop ebp */
  EBP = (pop32());
  /* 121624cc ret  */
  ESPCHK(0x12161f60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12162580 (72 bytes, 30 insns) */
void f_12162580(void) {
  FTRACE(0x12162580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12162580 push ebp */
  push32((uint32_t)(EBP));
  /* 12162581 mov ebp, esp */
  EBP = (ESP);
L_12162583:;
  /* 12162583 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162586 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162589 je 0x121625c6 */
  if (C.zf) goto L_121625c6;
  /* 1216258b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216258e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12162591 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12162593 je 0x121625c6 */
  if (C.zf) goto L_121625c6;
  /* 12162595 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162598 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1216259a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216259d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1216259f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121625a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121625a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121625a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121625a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121625ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121625ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121625b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121625b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121625b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121625ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121625bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121625bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121625c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121625c4 jmp 0x12162583 */
  goto L_12162583;
L_121625c6:;
  /* 121625c6 pop ebp */
  EBP = (pop32());
  /* 121625c7 ret  */
  ESPCHK(0x12162580u, _esp0);
  ESP += 4; return;
}

/* FUN_100125d0 @ 0x121625d0 (173 bytes, 64 insns) */
void f_121625d0(void) {
  FTRACE(0x121625d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121625d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121625d1 mov ebp, esp */
  EBP = (ESP);
  /* 121625d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121625d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121625db cmp dword ptr [0x12180938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121625e2 je 0x121625fa */
  if (C.zf) goto L_121625fa;
  /* 121625e4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121625e7 push eax */
  push32((uint32_t)(EAX));
  /* 121625e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121625eb push ecx */
  push32((uint32_t)(ECX));
  /* 121625ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121625ef push edx */
  push32((uint32_t)(EDX));
  /* 121625f0 call 0x12162680 */
  push32(0x121625f5u); f_12162680();
  /* 121625f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121625f8 jmp 0x12162679 */
  goto L_12162679;
L_121625fa:;
  /* 121625fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121625fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162600 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162602 jae 0x12162670 */
  if (!C.cf) goto L_12162670;
  /* 12162604 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162607 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1216260a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1216260d jmp 0x12162618 */
  goto L_12162618;
L_1216260f:;
  /* 1216260f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162612 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162615 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12162618:;
  /* 12162618 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216261b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216261e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12162620 je 0x12162654 */
  if (C.zf) goto L_12162654;
  /* 12162622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162625 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12162626 mov ecx, 0xa */
  ECX = (0xau);
  /* 1216262b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1216262d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162630 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162633 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12162635 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162638 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1216263b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216263e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1216263f mov ecx, 0xa */
  ECX = (0xau);
  /* 12162644 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12162646 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12162649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216264c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216264f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12162652 jmp 0x1216260f */
  goto L_1216260f;
L_12162654:;
  /* 12162654 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162657 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12162659 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216265c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216265f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12162661 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162664 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12162666 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162669 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1216266c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1216266e jmp 0x12162679 */
  goto L_12162679;
L_12162670:;
  /* 12162670 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162673 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12162679:;
  /* 12162679 mov esp, ebp */
  ESP = (EBP);
  /* 1216267b pop ebp */
  EBP = (pop32());
  /* 1216267c ret  */
  ESPCHK(0x121625d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12162680 (172 bytes, 65 insns) */
void f_12162680(void) {
  FTRACE(0x12162680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12162680 push ebp */
  push32((uint32_t)(EBP));
  /* 12162681 mov ebp, esp */
  EBP = (ESP);
  /* 12162683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162686 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162689 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1216268b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1216268e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162691 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162694 jbe 0x121626db */
  if ((C.cf||C.zf)) goto L_121626db;
L_12162696:;
  /* 12162696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162699 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1216269a mov ecx, 0xa */
  ECX = (0xau);
  /* 1216269f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121626a1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121626a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121626a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121626a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121626ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121626af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121626b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121626b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121626b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121626ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121626bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121626bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121626c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121626c3 mov ecx, 0xa */
  ECX = (0xau);
  /* 121626c8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121626ca mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121626cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121626d1 jle 0x121626db */
  if ((C.zf||C.sf!=C.of)) goto L_121626db;
  /* 121626d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121626d6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121626d9 ja 0x12162696 */
  if ((!C.cf&&!C.zf)) goto L_12162696;
L_121626db:;
  /* 121626db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121626de mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121626e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121626e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121626e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121626e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121626eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121626ee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121626f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121626f4:;
  /* 121626f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121626f7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121626f9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 121626fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121626ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12162702 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12162704 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12162706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12162709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1216270c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1216270f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12162712 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12162715 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12162717 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1216271a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216271d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12162720 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12162723 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162726 jb 0x121626f4 */
  if (C.cf) goto L_121626f4;
  /* 12162728 mov esp, ebp */
  ESP = (EBP);
  /* 1216272a pop ebp */
  EBP = (pop32());
  /* 1216272b ret  */
  ESPCHK(0x12162680u, _esp0);
  ESP += 4; return;
}

/* FUN_10012730 @ 0x12162730 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12162730(void) {
  FTRACE(0x12162730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12162730 push ebp */
  push32((uint32_t)(EBP));
  /* 12162731 mov ebp, esp */
  EBP = (ESP);
  /* 12162733 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12162736:;
  /* 12162736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162739 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1216273c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1216273e je 0x12162bac */
  if (C.zf) goto L_12162bac;
  /* 12162744 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162747 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216274a je 0x12162bac */
  if (C.zf) goto L_12162bac;
  /* 12162750 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12162754 mov dword ptr [0x12180938], 0 */
  w32((uint32_t)(0x12180938), (0x0u));
  /* 1216275e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12162765 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1216276b jmp 0x12162776 */
  goto L_12162776;
L_1216276d:;
  /* 1216276d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162770 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162773 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12162776:;
  /* 12162776 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12162779 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1216277c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216277f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12162782 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12162785 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162788 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1216278b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216278d jne 0x12162791 */
  if (!C.zf) goto L_12162791;
  /* 1216278f jmp 0x1216276d */
  goto L_1216276d;
L_12162791:;
  /* 12162791 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12162794 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162797 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1216279a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216279d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121627a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121627a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121627a6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121627a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121627ac cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121627b0 ja 0x12162b00 */
  if ((!C.cf&&!C.zf)) goto L_12162b00;
  /* 121627b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121627b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121627bb mov al, byte ptr [ecx + 0x12162bdc] */
  AL = (r8((uint32_t)(ECX + 0x12162bdc)));
  /* 121627c1 jmp dword ptr [eax*4 + 0x12162bb0] */
  switch (EAX) {
    case 0: goto L_12162a1f;
    case 1: goto L_12162903;
    case 2: goto L_1216288e;
    case 3: goto L_121627c8;
    case 4: goto L_12162806;
    case 5: goto L_12162867;
    case 6: goto L_121628b5;
    case 7: goto L_121628dc;
    case 8: goto L_1216294a;
    case 9: goto L_12162844;
    case 10: goto L_12162b00;
    default: x86_unimpl("switch@0x121627c1 out of table"); return;
  }
L_121627c8:;
  /* 121627c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121627cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121627ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121627d1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121627d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121627d7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121627db ja 0x12162801 */
  if ((!C.cf&&!C.zf)) goto L_12162801;
  /* 121627dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121627e0 jmp dword ptr [ecx*4 + 0x12162c2f] */
  switch (ECX) {
    case 0: goto L_121627e7;
    case 1: goto L_121627f1;
    case 2: goto L_121627f7;
    case 3: goto L_121627fd;
    case 4: goto L_12162825;
    case 5: goto L_1216282f;
    case 6: goto L_12162835;
    case 7: goto L_1216283b;
    default: x86_unimpl("switch@0x121627e0 out of table"); return;
  }
L_121627e7:;
  /* 121627e7 mov dword ptr [0x12180938], 1 */
  w32((uint32_t)(0x12180938), (0x1u));
L_121627f1:;
  /* 121627f1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 121627f5 jmp 0x12162801 */
  goto L_12162801;
L_121627f7:;
  /* 121627f7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 121627fb jmp 0x12162801 */
  goto L_12162801;
L_121627fd:;
  /* 121627fd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12162801:;
  /* 12162801 jmp 0x12162b00 */
  goto L_12162b00;
L_12162806:;
  /* 12162806 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162809 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1216280c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1216280f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162812 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12162815 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162819 ja 0x1216283f */
  if ((!C.cf&&!C.zf)) goto L_1216283f;
  /* 1216281b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1216281e jmp dword ptr [ecx*4 + 0x12162c3f] */
  switch (ECX) {
    case 0: goto L_12162825;
    case 1: goto L_1216282f;
    case 2: goto L_12162835;
    case 3: goto L_1216283b;
    default: x86_unimpl("switch@0x1216281e out of table"); return;
  }
L_12162825:;
  /* 12162825 mov dword ptr [0x12180938], 1 */
  w32((uint32_t)(0x12180938), (0x1u));
L_1216282f:;
  /* 1216282f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12162833 jmp 0x1216283f */
  goto L_1216283f;
L_12162835:;
  /* 12162835 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12162839 jmp 0x1216283f */
  goto L_1216283f;
L_1216283b:;
  /* 1216283b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1216283f:;
  /* 1216283f jmp 0x12162b00 */
  goto L_12162b00;
L_12162844:;
  /* 12162844 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162847 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1216284a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216284e je 0x12162858 */
  if (C.zf) goto L_12162858;
  /* 12162850 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162854 je 0x1216285e */
  if (C.zf) goto L_1216285e;
  /* 12162856 jmp 0x12162862 */
  goto L_12162862;
L_12162858:;
  /* 12162858 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 1216285c jmp 0x12162862 */
  goto L_12162862;
L_1216285e:;
  /* 1216285e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12162862:;
  /* 12162862 jmp 0x12162b00 */
  goto L_12162b00;
L_12162867:;
  /* 12162867 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216286a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1216286d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162871 je 0x1216287b */
  if (C.zf) goto L_1216287b;
  /* 12162873 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162877 je 0x12162885 */
  if (C.zf) goto L_12162885;
  /* 12162879 jmp 0x12162889 */
  goto L_12162889;
L_1216287b:;
  /* 1216287b mov dword ptr [0x12180938], 1 */
  w32((uint32_t)(0x12180938), (0x1u));
L_12162885:;
  /* 12162885 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12162889:;
  /* 12162889 jmp 0x12162b00 */
  goto L_12162b00;
L_1216288e:;
  /* 1216288e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162891 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12162894 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162898 je 0x121628a2 */
  if (C.zf) goto L_121628a2;
  /* 1216289a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216289e je 0x121628ac */
  if (C.zf) goto L_121628ac;
  /* 121628a0 jmp 0x121628b0 */
  goto L_121628b0;
L_121628a2:;
  /* 121628a2 mov dword ptr [0x12180938], 1 */
  w32((uint32_t)(0x12180938), (0x1u));
L_121628ac:;
  /* 121628ac mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_121628b0:;
  /* 121628b0 jmp 0x12162b00 */
  goto L_12162b00;
L_121628b5:;
  /* 121628b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121628b8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 121628bb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121628bf je 0x121628c9 */
  if (C.zf) goto L_121628c9;
  /* 121628c1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121628c5 je 0x121628d3 */
  if (C.zf) goto L_121628d3;
  /* 121628c7 jmp 0x121628d7 */
  goto L_121628d7;
L_121628c9:;
  /* 121628c9 mov dword ptr [0x12180938], 1 */
  w32((uint32_t)(0x12180938), (0x1u));
L_121628d3:;
  /* 121628d3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_121628d7:;
  /* 121628d7 jmp 0x12162b00 */
  goto L_12162b00;
L_121628dc:;
  /* 121628dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121628df mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 121628e2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121628e6 je 0x121628f0 */
  if (C.zf) goto L_121628f0;
  /* 121628e8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121628ec je 0x121628fa */
  if (C.zf) goto L_121628fa;
  /* 121628ee jmp 0x121628fe */
  goto L_121628fe;
L_121628f0:;
  /* 121628f0 mov dword ptr [0x12180938], 1 */
  w32((uint32_t)(0x12180938), (0x1u));
L_121628fa:;
  /* 121628fa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_121628fe:;
  /* 121628fe jmp 0x12162b00 */
  goto L_12162b00;
L_12162903:;
  /* 12162903 push 0x1217c99c */
  push32((uint32_t)(0x1217c99cu));
  /* 12162908 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216290b push ecx */
  push32((uint32_t)(ECX));
  /* 1216290c call 0x12163160 */
  push32(0x12162911u); f_12163160();
  /* 12162911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162914 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12162916 jne 0x12162923 */
  if (!C.zf) goto L_12162923;
  /* 12162918 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216291b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216291e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12162921 jmp 0x12162941 */
  goto L_12162941;
L_12162923:;
  /* 12162923 push 0x1217c998 */
  push32((uint32_t)(0x1217c998u));
  /* 12162928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216292b push eax */
  push32((uint32_t)(EAX));
  /* 1216292c call 0x12163160 */
  push32(0x12162931u); f_12163160();
  /* 12162931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12162936 jne 0x12162941 */
  if (!C.zf) goto L_12162941;
  /* 12162938 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216293b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216293e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12162941:;
  /* 12162941 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12162945 jmp 0x12162b00 */
  goto L_12162b00;
L_1216294a:;
  /* 1216294a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216294d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162951 jg 0x12162961 */
  if ((!C.zf&&C.sf==C.of)) goto L_12162961;
  /* 12162953 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12162956 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1216295c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1216295f jmp 0x1216296d */
  goto L_1216296d;
L_12162961:;
  /* 12162961 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12162964 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1216296a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1216296d:;
  /* 1216296d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162971 jle 0x12162a14 */
  if ((C.zf||C.sf!=C.of)) goto L_12162a14;
  /* 12162977 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1216297a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216297d jbe 0x12162a14 */
  if ((C.cf||C.zf)) goto L_12162a14;
  /* 12162983 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12162986 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12162988 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1216298a mov ecx, dword ptr [0x1217ec98] */
  ECX = (r32((uint32_t)(0x1217ec98)));
  /* 12162990 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12162992 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12162996 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1216299c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1216299e je 0x121629d7 */
  if (C.zf) goto L_121629d7;
  /* 121629a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121629a3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121629a6 jbe 0x121629d7 */
  if ((C.cf||C.zf)) goto L_121629d7;
  /* 121629a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121629ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121629ad mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121629b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121629b2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121629b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121629b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121629b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121629bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121629bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121629c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121629c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121629c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 121629ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121629cd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121629cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121629d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121629d5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121629d7:;
  /* 121629d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121629da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121629dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121629df mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121629e1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121629e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121629e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121629e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121629eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121629ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121629f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121629f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121629f6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121629f9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121629fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121629fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162a01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162a04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12162a06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162a09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162a0c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12162a0f jmp 0x1216296d */
  goto L_1216296d;
L_12162a14:;
  /* 12162a14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12162a17 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12162a1a jmp 0x12162736 */
  goto L_12162736;
L_12162a1f:;
  /* 12162a1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162a22 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12162a25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12162a27 je 0x12162af2 */
  if (C.zf) goto L_12162af2;
  /* 12162a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162a30 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162a33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12162a36:;
  /* 12162a36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162a39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12162a3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12162a3e je 0x12162af0 */
  if (C.zf) goto L_12162af0;
  /* 12162a44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162a47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162a4a je 0x12162af0 */
  if (C.zf) goto L_12162af0;
  /* 12162a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162a53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12162a56 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162a59 jne 0x12162a69 */
  if (!C.zf) goto L_12162a69;
  /* 12162a5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162a5e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162a61 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12162a64 jmp 0x12162af0 */
  goto L_12162af0;
L_12162a69:;
  /* 12162a69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162a6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12162a6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12162a70 mov edx, dword ptr [0x1217ec98] */
  EDX = (r32((uint32_t)(0x1217ec98)));
  /* 12162a76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12162a78 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12162a7c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12162a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12162a83 je 0x12162abc */
  if (C.zf) goto L_12162abc;
  /* 12162a85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162a88 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162a8b jbe 0x12162abc */
  if ((C.cf||C.zf)) goto L_12162abc;
  /* 12162a8d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162a90 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12162a92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162a95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12162a97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12162a99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162a9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12162a9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162aa1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162aa4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12162aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162aa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162aac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12162aaf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162ab2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12162ab4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162ab7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162aba mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12162abc:;
  /* 12162abc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162abf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12162ac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162ac4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12162ac6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12162ac8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162acb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12162acd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162ad0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162ad3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12162ad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162ad8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162adb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12162ade mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162ae1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12162ae3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162ae6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162ae9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12162aeb jmp 0x12162a36 */
  goto L_12162a36;
L_12162af0:;
  /* 12162af0 jmp 0x12162afb */
  goto L_12162afb;
L_12162af2:;
  /* 12162af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162af5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162af8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12162afb:;
  /* 12162afb jmp 0x12162736 */
  goto L_12162736;
L_12162b00:;
  /* 12162b00 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12162b04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12162b06 je 0x12162b2c */
  if (C.zf) goto L_12162b2c;
  /* 12162b08 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12162b0b push edx */
  push32((uint32_t)(EDX));
  /* 12162b0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162b0f push eax */
  push32((uint32_t)(EAX));
  /* 12162b10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162b13 push ecx */
  push32((uint32_t)(ECX));
  /* 12162b14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162b17 push edx */
  push32((uint32_t)(EDX));
  /* 12162b18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12162b1b push eax */
  push32((uint32_t)(EAX));
  /* 12162b1c call 0x12161f60 */
  push32(0x12162b21u); f_12161f60();
  /* 12162b21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162b24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12162b27 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12162b2a jmp 0x12162ba7 */
  goto L_12162ba7;
L_12162b2c:;
  /* 12162b2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12162b31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12162b33 mov ecx, dword ptr [0x1217ec98] */
  ECX = (r32((uint32_t)(0x1217ec98)));
  /* 12162b39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12162b3b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12162b3f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12162b45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12162b47 je 0x12162b78 */
  if (C.zf) goto L_12162b78;
  /* 12162b49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162b4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12162b4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162b51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12162b53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12162b55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162b58 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12162b5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162b5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162b60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12162b62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162b65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162b68 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12162b6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162b6e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12162b70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162b73 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162b76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12162b78:;
  /* 12162b78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162b7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12162b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162b80 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12162b82 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12162b84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162b87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12162b89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162b8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162b8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12162b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162b94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162b97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12162b9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162b9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12162b9f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162ba2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162ba5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12162ba7:;
  /* 12162ba7 jmp 0x12162736 */
  goto L_12162736;
L_12162bac:;
  /* 12162bac mov esp, ebp */
  ESP = (EBP);
  /* 12162bae pop ebp */
  EBP = (pop32());
  /* 12162baf ret  */
  ESPCHK(0x12162730u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c50 @ 0x12162c50 (650 bytes, 178 insns) */
void f_12162c50(void) {
  FTRACE(0x12162c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12162c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12162c51 mov ebp, esp */
  EBP = (ESP);
  /* 12162c53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12162c59 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162c5d jne 0x12162db9 */
  if (!C.zf) goto L_12162db9;
  /* 12162c63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162c66 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12162c6c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12162c72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12162c75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12162c7c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12162c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12162c88 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12162c8e push edx */
  push32((uint32_t)(EDX));
  /* 12162c8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162c92 push eax */
  push32((uint32_t)(EAX));
  /* 12162c93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162c96 push ecx */
  push32((uint32_t)(ECX));
  /* 12162c97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162c9a push edx */
  push32((uint32_t)(EDX));
  /* 12162c9b call 0x12164070 */
  push32(0x12162ca0u); f_12164070();
  /* 12162ca0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162ca3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12162ca6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162caa jne 0x12162d3f */
  if (!C.zf) goto L_12162d3f;
  /* 12162cb0 call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x12162cb6u);
  /* 12162cb6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162cb9 je 0x12162cc0 */
  if (C.zf) goto L_12162cc0;
  /* 12162cbb jmp 0x12162d9d */
  goto L_12162d9d;
L_12162cc0:;
  /* 12162cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12162cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12162cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12162cc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12162cca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162ccd push ecx */
  push32((uint32_t)(ECX));
  /* 12162cce call 0x12164070 */
  push32(0x12162cd3u); f_12164070();
  /* 12162cd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162cd6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12162cdc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162ce3 jne 0x12162cea */
  if (!C.zf) goto L_12162cea;
  /* 12162ce5 jmp 0x12162d9d */
  goto L_12162d9d;
L_12162cea:;
  /* 12162cea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12162cec push 0x1217c9a4 */
  push32((uint32_t)(0x1217c9a4u));
  /* 12162cf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12162cf3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12162cf9 push edx */
  push32((uint32_t)(EDX));
  /* 12162cfa call 0x12154a90 */
  push32(0x12162cffu); f_12154a90();
  /* 12162cff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162d02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12162d05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162d09 jne 0x12162d10 */
  if (!C.zf) goto L_12162d10;
  /* 12162d0b jmp 0x12162d9d */
  goto L_12162d9d;
L_12162d10:;
  /* 12162d10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12162d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12162d19 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12162d1f push eax */
  push32((uint32_t)(EAX));
  /* 12162d20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12162d24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162d27 push edx */
  push32((uint32_t)(EDX));
  /* 12162d28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162d2b push eax */
  push32((uint32_t)(EAX));
  /* 12162d2c call 0x12164070 */
  push32(0x12162d31u); f_12164070();
  /* 12162d31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162d34 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12162d37 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162d3b jne 0x12162d3f */
  if (!C.zf) goto L_12162d3f;
  /* 12162d3d jmp 0x12162d9d */
  goto L_12162d9d;
L_12162d3f:;
  /* 12162d3f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12162d41 push 0x1217c9a4 */
  push32((uint32_t)(0x1217c9a4u));
  /* 12162d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12162d48 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12162d4b push ecx */
  push32((uint32_t)(ECX));
  /* 12162d4c call 0x12154a90 */
  push32(0x12162d51u); f_12154a90();
  /* 12162d51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162d54 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12162d5a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12162d5c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12162d62 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162d65 jne 0x12162d69 */
  if (!C.zf) goto L_12162d69;
  /* 12162d67 jmp 0x12162d9d */
  goto L_12162d9d;
L_12162d69:;
  /* 12162d69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12162d6c push ecx */
  push32((uint32_t)(ECX));
  /* 12162d6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162d70 push edx */
  push32((uint32_t)(EDX));
  /* 12162d71 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12162d77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12162d79 push ecx */
  push32((uint32_t)(ECX));
  /* 12162d7a call 0x121582b0 */
  push32(0x12162d7fu); f_121582b0();
  /* 12162d7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162d82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162d86 je 0x12162d96 */
  if (C.zf) goto L_12162d96;
  /* 12162d88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12162d8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162d8d push edx */
  push32((uint32_t)(EDX));
  /* 12162d8e call 0x12155520 */
  push32(0x12162d93u); f_12155520();
  /* 12162d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12162d96:;
  /* 12162d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12162d98 jmp 0x12162ed6 */
  goto L_12162ed6;
L_12162d9d:;
  /* 12162d9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162da1 je 0x12162db1 */
  if (C.zf) goto L_12162db1;
  /* 12162da3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12162da5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12162da8 push eax */
  push32((uint32_t)(EAX));
  /* 12162da9 call 0x12155520 */
  push32(0x12162daeu); f_12155520();
  /* 12162dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12162db1:;
  /* 12162db1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12162db4 jmp 0x12162ed6 */
  goto L_12162ed6;
L_12162db9:;
  /* 12162db9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162dbd jne 0x12162ed3 */
  if (!C.zf) goto L_12162ed3;
  /* 12162dc3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12162dcd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162dd0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12162dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12162dd8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12162dde push edx */
  push32((uint32_t)(EDX));
  /* 12162ddf push 0x12180850 */
  push32((uint32_t)(0x12180850u));
  /* 12162de4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162de7 push eax */
  push32((uint32_t)(EAX));
  /* 12162de8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162deb push ecx */
  push32((uint32_t)(ECX));
  /* 12162dec call 0x12163ed0 */
  push32(0x12162df1u); f_12163ed0();
  /* 12162df1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162df4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12162df6 jne 0x12162e00 */
  if (!C.zf) goto L_12162e00;
  /* 12162df8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12162dfb jmp 0x12162ed6 */
  goto L_12162ed6;
L_12162e00:;
  /* 12162e00 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12162e06 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12162e09 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12162e13 jmp 0x12162e24 */
  goto L_12162e24;
L_12162e15:;
  /* 12162e15 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12162e1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162e1e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12162e24:;
  /* 12162e24 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162e2b jge 0x12162ecf */
  if ((C.sf==C.of)) goto L_12162ecf;
  /* 12162e31 cmp dword ptr [0x1217eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1217eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162e38 jle 0x12162e6b */
  if ((C.zf||C.sf!=C.of)) goto L_12162e6b;
  /* 12162e3a push 4 */
  push32((uint32_t)(0x4u));
  /* 12162e3c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12162e42 mov dl, byte ptr [ecx*2 + 0x12180850] */
  DL = (r8((uint32_t)(ECX*2 + 0x12180850)));
  /* 12162e49 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12162e4f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12162e55 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12162e5a push eax */
  push32((uint32_t)(EAX));
  /* 12162e5b call 0x1215aaa0 */
  push32(0x12162e60u); f_1215aaa0();
  /* 12162e60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162e63 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12162e69 jmp 0x12162e9e */
  goto L_12162e9e;
L_12162e6b:;
  /* 12162e6b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12162e71 mov dl, byte ptr [ecx*2 + 0x12180850] */
  DL = (r8((uint32_t)(ECX*2 + 0x12180850)));
  /* 12162e78 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12162e7e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12162e84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12162e89 mov ecx, dword ptr [0x1217ec98] */
  ECX = (r32((uint32_t)(0x1217ec98)));
  /* 12162e8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12162e91 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12162e95 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12162e98 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12162e9e:;
  /* 12162e9e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162ea5 je 0x12162ec8 */
  if (C.zf) goto L_12162ec8;
  /* 12162ea7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12162ead movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12162eb0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12162eb3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12162eba lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12162ebe mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12162ec4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12162ec6 jmp 0x12162eca */
  goto L_12162eca;
L_12162ec8:;
  /* 12162ec8 jmp 0x12162ecf */
  goto L_12162ecf;
L_12162eca:;
  /* 12162eca jmp 0x12162e15 */
  goto L_12162e15;
L_12162ecf:;
  /* 12162ecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12162ed1 jmp 0x12162ed6 */
  goto L_12162ed6;
L_12162ed3:;
  /* 12162ed3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12162ed6:;
  /* 12162ed6 mov esp, ebp */
  ESP = (EBP);
  /* 12162ed8 pop ebp */
  EBP = (pop32());
  /* 12162ed9 ret  */
  ESPCHK(0x12162c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ee0 @ 0x12162ee0 (10 bytes, 5 insns) */
void f_12162ee0(void) {
  FTRACE(0x12162ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12162ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12162ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12162ee3 mov eax, dword ptr [0x1217fd88] */
  EAX = (r32((uint32_t)(0x1217fd88)));
  /* 12162ee8 pop ebp */
  EBP = (pop32());
  /* 12162ee9 ret  */
  ESPCHK(0x12162ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x12162ef0 (575 bytes, 196 insns) */
void f_12162ef0(void) {
  FTRACE(0x12162ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12162ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12162ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12162ef3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12162ef5 push 0x1217c9b0 */
  push32((uint32_t)(0x1217c9b0u));
  /* 12162efa push 0x1215db98 */
  push32((uint32_t)(0x1215db98u));
  /* 12162eff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12162f05 push eax */
  push32((uint32_t)(EAX));
  /* 12162f06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12162f0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12162f10 push ebx */
  push32((uint32_t)(EBX));
  /* 12162f11 push esi */
  push32((uint32_t)(ESI));
  /* 12162f12 push edi */
  push32((uint32_t)(EDI));
  /* 12162f13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12162f16 cmp dword ptr [0x1218085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162f1d jne 0x12162f6e */
  if (!C.zf) goto L_12162f6e;
  /* 12162f1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12162f22 push eax */
  push32((uint32_t)(EAX));
  /* 12162f23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12162f25 push 0x1217c0e4 */
  push32((uint32_t)(0x1217c0e4u));
  /* 12162f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 12162f2c call dword ptr [0x121832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f4))), 0x12162f32u);
  /* 12162f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12162f34 je 0x12162f42 */
  if (C.zf) goto L_12162f42;
  /* 12162f36 mov dword ptr [0x1218085c], 1 */
  w32((uint32_t)(0x1218085c), (0x1u));
  /* 12162f40 jmp 0x12162f6e */
  goto L_12162f6e;
L_12162f42:;
  /* 12162f42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12162f45 push ecx */
  push32((uint32_t)(ECX));
  /* 12162f46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12162f48 push 0x1217c0e0 */
  push32((uint32_t)(0x1217c0e0u));
  /* 12162f4d push 1 */
  push32((uint32_t)(0x1u));
  /* 12162f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12162f51 call dword ptr [0x12183304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183304))), 0x12162f57u);
  /* 12162f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12162f59 je 0x12162f67 */
  if (C.zf) goto L_12162f67;
  /* 12162f5b mov dword ptr [0x1218085c], 2 */
  w32((uint32_t)(0x1218085c), (0x2u));
  /* 12162f65 jmp 0x12162f6e */
  goto L_12162f6e;
L_12162f67:;
  /* 12162f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12162f69 jmp 0x12163149 */
  goto L_12163149;
L_12162f6e:;
  /* 12162f6e cmp dword ptr [0x1218085c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1218085c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162f75 jne 0x12162f92 */
  if (!C.zf) goto L_12162f92;
  /* 12162f77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12162f7a push edx */
  push32((uint32_t)(EDX));
  /* 12162f7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162f7e push eax */
  push32((uint32_t)(EAX));
  /* 12162f7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162f82 push ecx */
  push32((uint32_t)(ECX));
  /* 12162f83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12162f86 push edx */
  push32((uint32_t)(EDX));
  /* 12162f87 call dword ptr [0x121832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832f4))), 0x12162f8du);
  /* 12162f8d jmp 0x12163149 */
  goto L_12163149;
L_12162f92:;
  /* 12162f92 cmp dword ptr [0x1218085c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1218085c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162f99 jne 0x12163147 */
  if (!C.zf) goto L_12163147;
  /* 12162f9f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162fa3 jne 0x12162fad */
  if (!C.zf) goto L_12162fad;
  /* 12162fa5 mov eax, dword ptr [0x121807d0] */
  EAX = (r32((uint32_t)(0x121807d0)));
  /* 12162faa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12162fad:;
  /* 12162fad push 0 */
  push32((uint32_t)(0x0u));
  /* 12162faf push 0 */
  push32((uint32_t)(0x0u));
  /* 12162fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12162fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12162fb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12162fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12162fb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12162fbc push edx */
  push32((uint32_t)(EDX));
  /* 12162fbd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12162fc2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12162fc5 push eax */
  push32((uint32_t)(EAX));
  /* 12162fc6 call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x12162fccu);
  /* 12162fcc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12162fcf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12162fd3 jne 0x12162fdc */
  if (!C.zf) goto L_12162fdc;
  /* 12162fd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12162fd7 jmp 0x12163149 */
  goto L_12163149;
L_12162fdc:;
  /* 12162fdc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12162fe3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12162fe6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12162fe9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12162feb call 0x12157c30 */
  push32(0x12162ff0u); f_12157c30();
  /* 12162ff0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12162ff3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12162ff6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12162ff9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12162ffc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12162fff push edx */
  push32((uint32_t)(EDX));
  /* 12163000 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163002 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12163005 push eax */
  push32((uint32_t)(EAX));
  /* 12163006 call 0x12158800 */
  push32(0x1216300bu); f_12158800();
  /* 1216300b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216300e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12163015 jmp 0x1216302e */
  goto L_1216302e;
  /* 12163017 mov eax, 1 */
  EAX = (0x1u);
  /* 1216301c ret  */
  ESPCHK(0x12162ef0u, _esp0);
  ESP += 4; return;
  /* 1216301d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12163020 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12163027 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1216302e:;
  /* 1216302e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163032 jne 0x1216303b */
  if (!C.zf) goto L_1216303b;
  /* 12163034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163036 jmp 0x12163149 */
  goto L_12163149;
L_1216303b:;
  /* 1216303b push 0 */
  push32((uint32_t)(0x0u));
  /* 1216303d push 0 */
  push32((uint32_t)(0x0u));
  /* 1216303f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12163042 push ecx */
  push32((uint32_t)(ECX));
  /* 12163043 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12163046 push edx */
  push32((uint32_t)(EDX));
  /* 12163047 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216304a push eax */
  push32((uint32_t)(EAX));
  /* 1216304b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216304e push ecx */
  push32((uint32_t)(ECX));
  /* 1216304f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12163054 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12163057 push edx */
  push32((uint32_t)(EDX));
  /* 12163058 call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x1216305eu);
  /* 1216305e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12163060 jne 0x12163069 */
  if (!C.zf) goto L_12163069;
  /* 12163062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163064 jmp 0x12163149 */
  goto L_12163149;
L_12163069:;
  /* 12163069 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12163070 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12163073 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12163077 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216307a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1216307c call 0x12157c30 */
  push32(0x12163081u); f_12157c30();
  /* 12163081 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12163084 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12163087 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1216308a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1216308d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12163094 jmp 0x121630ad */
  goto L_121630ad;
  /* 12163096 mov eax, 1 */
  EAX = (0x1u);
  /* 1216309b ret  */
  ESPCHK(0x12162ef0u, _esp0);
  ESP += 4; return;
  /* 1216309c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1216309f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121630a6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121630ad:;
  /* 121630ad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121630b1 jne 0x121630ba */
  if (!C.zf) goto L_121630ba;
  /* 121630b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121630b5 jmp 0x12163149 */
  goto L_12163149;
L_121630ba:;
  /* 121630ba cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121630be jne 0x121630c9 */
  if (!C.zf) goto L_121630c9;
  /* 121630c0 mov edx, dword ptr [0x121807c0] */
  EDX = (r32((uint32_t)(0x121807c0)));
  /* 121630c6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_121630c9:;
  /* 121630c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121630cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121630cf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 121630d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121630d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121630db mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 121630e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121630e5 push ecx */
  push32((uint32_t)(ECX));
  /* 121630e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121630e9 push edx */
  push32((uint32_t)(EDX));
  /* 121630ea mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121630ed push eax */
  push32((uint32_t)(EAX));
  /* 121630ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121630f1 push ecx */
  push32((uint32_t)(ECX));
  /* 121630f2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121630f5 push edx */
  push32((uint32_t)(EDX));
  /* 121630f6 call dword ptr [0x12183304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183304))), 0x121630fcu);
  /* 121630fc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121630ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163102 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12163105 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163107 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1216310c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163112 je 0x12163128 */
  if (C.zf) goto L_12163128;
  /* 12163114 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163117 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1216311a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1216311c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12163120 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163126 je 0x1216312c */
  if (C.zf) goto L_1216312c;
L_12163128:;
  /* 12163128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216312a jmp 0x12163149 */
  goto L_12163149;
L_1216312c:;
  /* 1216312c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216312f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12163131 push eax */
  push32((uint32_t)(EAX));
  /* 12163132 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12163135 push ecx */
  push32((uint32_t)(ECX));
  /* 12163136 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12163139 push edx */
  push32((uint32_t)(EDX));
  /* 1216313a call 0x1215c980 */
  push32(0x1216313fu); f_1215c980();
  /* 1216313f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163142 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12163145 jmp 0x12163149 */
  goto L_12163149;
L_12163147:;
  /* 12163147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12163149:;
  /* 12163149 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1216314c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1216314f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12163156 pop edi */
  EDI = (pop32());
  /* 12163157 pop esi */
  ESI = (pop32());
  /* 12163158 pop ebx */
  EBX = (pop32());
  /* 12163159 mov esp, ebp */
  ESP = (EBP);
  /* 1216315b pop ebp */
  EBP = (pop32());
  /* 1216315c ret  */
  ESPCHK(0x12162ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013160 @ 0x12163160 (208 bytes, 85 insns) */
void f_12163160(void) {
  FTRACE(0x12163160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12163160 push ebp */
  push32((uint32_t)(EBP));
  /* 12163161 mov ebp, esp */
  EBP = (ESP);
  /* 12163163 push edi */
  push32((uint32_t)(EDI));
  /* 12163164 push esi */
  push32((uint32_t)(ESI));
  /* 12163165 push ebx */
  push32((uint32_t)(EBX));
  /* 12163166 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12163169 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1216316c lea eax, [0x121807b8] */
  EAX = ((uint32_t)(0x121807b8));
  /* 12163172 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163176 jne 0x121631b3 */
  if (!C.zf) goto L_121631b3;
  /* 12163178 mov al, 0xff */
  AL = (0xffu);
  /* 1216317a mov edi, edi */
  EDI = (EDI);
L_1216317c:;
  /* 1216317c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1216317e je 0x121631ae */
  if (C.zf) goto L_121631ae;
  /* 12163180 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12163182 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12163183 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12163185 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12163186 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12163188 je 0x1216317c */
  if (C.zf) goto L_1216317c;
  /* 1216318a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1216318c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1216318e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12163190 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12163193 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12163195 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12163197 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12163199 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1216319b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1216319d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1216319f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 121631a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121631a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121631a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121631a8 je 0x1216317c */
  if (C.zf) goto L_1216317c;
  /* 121631aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121631ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_121631ae:;
  /* 121631ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 121631b1 jmp 0x1216322b */
  goto L_1216322b;
L_121631b3:;
  /* 121631b3 lock inc dword ptr [0x1218094c] */
  x86_unimpl("lock inc @ 0x121631b3");
  /* 121631ba cmp dword ptr [0x1218093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121631c1 jg 0x121631c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_121631c7;
  /* 121631c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121631c5 jmp 0x121631dc */
  goto L_121631dc;
L_121631c7:;
  /* 121631c7 lock dec dword ptr [0x1218094c] */
  x86_unimpl("lock dec @ 0x121631c7");
  /* 121631ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121631d0 call 0x12158490 */
  push32(0x121631d5u); f_12158490();
  /* 121631d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_121631dc:;
  /* 121631dc mov eax, 0xff */
  EAX = (0xffu);
  /* 121631e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121631e3 nop  */
  /* nop */
L_121631e4:;
  /* 121631e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121631e6 je 0x1216320f */
  if (C.zf) goto L_1216320f;
  /* 121631e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121631ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121631eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 121631ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121631ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121631f0 je 0x121631e4 */
  if (C.zf) goto L_121631e4;
  /* 121631f2 push eax */
  push32((uint32_t)(EAX));
  /* 121631f3 push ebx */
  push32((uint32_t)(EBX));
  /* 121631f4 call 0x121642d0 */
  push32(0x121631f9u); f_121642d0();
  /* 121631f9 mov ebx, eax */
  EBX = (EAX);
  /* 121631fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121631fe call 0x121642d0 */
  push32(0x12163203u); f_121642d0();
  /* 12163203 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163206 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12163208 je 0x121631e4 */
  if (C.zf) goto L_121631e4;
  /* 1216320a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1216320c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1216320f:;
  /* 1216320f mov ebx, eax */
  EBX = (EAX);
  /* 12163211 pop eax */
  EAX = (pop32());
  /* 12163212 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163214 jne 0x1216321f */
  if (!C.zf) goto L_1216321f;
  /* 12163216 lock dec dword ptr [0x1218094c] */
  x86_unimpl("lock dec @ 0x12163216");
  /* 1216321d jmp 0x12163229 */
  goto L_12163229;
L_1216321f:;
  /* 1216321f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12163221 call 0x12158530 */
  push32(0x12163226u); f_12158530();
  /* 12163226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12163229:;
  /* 12163229 mov eax, ebx */
  EAX = (EBX);
L_1216322b:;
  /* 1216322b pop ebx */
  EBX = (pop32());
  /* 1216322c pop esi */
  ESI = (pop32());
  /* 1216322d pop edi */
  EDI = (pop32());
  /* 1216322e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1216322f ret  */
  ESPCHK(0x12163160u, _esp0);
  ESP += 4; return;
}

/* FUN_10013230 @ 0x12163230 (257 bytes, 103 insns) */
void f_12163230(void) {
  FTRACE(0x12163230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12163230 push ebp */
  push32((uint32_t)(EBP));
  /* 12163231 mov ebp, esp */
  EBP = (ESP);
  /* 12163233 push edi */
  push32((uint32_t)(EDI));
  /* 12163234 push esi */
  push32((uint32_t)(ESI));
  /* 12163235 push ebx */
  push32((uint32_t)(EBX));
  /* 12163236 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163239 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1216323b je 0x1216332a */
  if (C.zf) goto L_1216332a;
  /* 12163241 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12163244 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12163247 lea eax, [0x121807b8] */
  EAX = ((uint32_t)(0x121807b8));
  /* 1216324d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163251 jne 0x121632a1 */
  if (!C.zf) goto L_121632a1;
  /* 12163253 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12163255 mov bl, 0x5a */
  BL = (0x5au);
  /* 12163257 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12163259 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1216325c:;
  /* 1216325c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1216325e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12163260 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12163262 je 0x12163285 */
  if (C.zf) goto L_12163285;
  /* 12163264 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12163266 je 0x12163285 */
  if (C.zf) goto L_12163285;
  /* 12163268 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12163269 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1216326a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1216326c jb 0x12163274 */
  if (C.cf) goto L_12163274;
  /* 1216326e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12163270 ja 0x12163274 */
  if ((!C.cf&&!C.zf)) goto L_12163274;
  /* 12163272 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12163274:;
  /* 12163274 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12163276 jb 0x1216327e */
  if (C.cf) goto L_1216327e;
  /* 12163278 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1216327a ja 0x1216327e */
  if ((!C.cf&&!C.zf)) goto L_1216327e;
  /* 1216327c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1216327e:;
  /* 1216327e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12163280 jne 0x1216328f */
  if (!C.zf) goto L_1216328f;
  /* 12163282 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12163283 jne 0x1216325c */
  if (!C.zf) goto L_1216325c;
L_12163285:;
  /* 12163285 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163287 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12163289 je 0x1216332a */
  if (C.zf) goto L_1216332a;
L_1216328f:;
  /* 1216328f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12163294 jb 0x1216332a */
  if (C.cf) goto L_1216332a;
  /* 1216329a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1216329c jmp 0x1216332a */
  goto L_1216332a;
L_121632a1:;
  /* 121632a1 lock inc dword ptr [0x1218094c] */
  x86_unimpl("lock inc @ 0x121632a1");
  /* 121632a8 cmp dword ptr [0x1218093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121632af jg 0x121632b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_121632b5;
  /* 121632b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121632b3 jmp 0x121632ce */
  goto L_121632ce;
L_121632b5:;
  /* 121632b5 lock dec dword ptr [0x1218094c] */
  x86_unimpl("lock dec @ 0x121632b5");
  /* 121632bc mov ebx, ecx */
  EBX = (ECX);
  /* 121632be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121632c0 call 0x12158490 */
  push32(0x121632c5u); f_12158490();
  /* 121632c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 121632cc mov ecx, ebx */
  ECX = (EBX);
L_121632ce:;
  /* 121632ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121632d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121632d2 mov edi, edi */
  EDI = (EDI);
L_121632d4:;
  /* 121632d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121632d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121632d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 121632da je 0x121632ff */
  if (C.zf) goto L_121632ff;
  /* 121632dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 121632de je 0x121632ff */
  if (C.zf) goto L_121632ff;
  /* 121632e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121632e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121632e2 push ecx */
  push32((uint32_t)(ECX));
  /* 121632e3 push eax */
  push32((uint32_t)(EAX));
  /* 121632e4 push ebx */
  push32((uint32_t)(EBX));
  /* 121632e5 call 0x121642d0 */
  push32(0x121632eau); f_121642d0();
  /* 121632ea mov ebx, eax */
  EBX = (EAX);
  /* 121632ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121632ef call 0x121642d0 */
  push32(0x121632f4u); f_121642d0();
  /* 121632f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121632f7 pop ecx */
  ECX = (pop32());
  /* 121632f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121632fa jne 0x12163305 */
  if (!C.zf) goto L_12163305;
  /* 121632fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 121632fd jne 0x121632d4 */
  if (!C.zf) goto L_121632d4;
L_121632ff:;
  /* 121632ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163301 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163303 je 0x1216330e */
  if (C.zf) goto L_1216330e;
L_12163305:;
  /* 12163305 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1216330a jb 0x1216330e */
  if (C.cf) goto L_1216330e;
  /* 1216330c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1216330e:;
  /* 1216330e pop eax */
  EAX = (pop32());
  /* 1216330f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163311 jne 0x1216331c */
  if (!C.zf) goto L_1216331c;
  /* 12163313 lock dec dword ptr [0x1218094c] */
  x86_unimpl("lock dec @ 0x12163313");
  /* 1216331a jmp 0x1216332a */
  goto L_1216332a;
L_1216331c:;
  /* 1216331c mov ebx, ecx */
  EBX = (ECX);
  /* 1216331e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12163320 call 0x12158530 */
  push32(0x12163325u); f_12158530();
  /* 12163325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163328 mov ecx, ebx */
  ECX = (EBX);
L_1216332a:;
  /* 1216332a mov eax, ecx */
  EAX = (ECX);
  /* 1216332c pop ebx */
  EBX = (pop32());
  /* 1216332d pop esi */
  ESI = (pop32());
  /* 1216332e pop edi */
  EDI = (pop32());
  /* 1216332f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12163330 ret  */
  ESPCHK(0x12163230u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x12163340 (255 bytes, 88 insns) */
void f_12163340(void) {
  FTRACE(0x12163340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12163340 push ebp */
  push32((uint32_t)(EBP));
  /* 12163341 mov ebp, esp */
  EBP = (ESP);
  /* 12163343 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12163346:;
  /* 12163346 cmp dword ptr [0x1217eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1217eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216334d jle 0x12163366 */
  if ((C.zf||C.sf!=C.of)) goto L_12163366;
  /* 1216334f push 8 */
  push32((uint32_t)(0x8u));
  /* 12163351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163354 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163356 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12163358 push ecx */
  push32((uint32_t)(ECX));
  /* 12163359 call 0x1215aaa0 */
  push32(0x1216335eu); f_1215aaa0();
  /* 1216335e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163361 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12163364 jmp 0x1216337f */
  goto L_1216337f;
L_12163366:;
  /* 12163366 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216336b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1216336d mov ecx, dword ptr [0x1217ec98] */
  ECX = (r32((uint32_t)(0x1217ec98)));
  /* 12163373 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163375 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12163379 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1216337c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1216337f:;
  /* 1216337f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163383 je 0x12163390 */
  if (C.zf) goto L_12163390;
  /* 12163385 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163388 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216338b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1216338e jmp 0x12163346 */
  goto L_12163346;
L_12163390:;
  /* 12163390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163393 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163395 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12163397 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1216339a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216339d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121633a0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121633a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121633a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121633a9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121633ad je 0x121633b5 */
  if (C.zf) goto L_121633b5;
  /* 121633af cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121633b3 jne 0x121633c8 */
  if (!C.zf) goto L_121633c8;
L_121633b5:;
  /* 121633b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121633b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121633ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121633bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121633bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121633c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121633c5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121633c8:;
  /* 121633c8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121633cf:;
  /* 121633cf cmp dword ptr [0x1217eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1217eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121633d6 jle 0x121633eb */
  if ((C.zf||C.sf!=C.of)) goto L_121633eb;
  /* 121633d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 121633da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121633dd push edx */
  push32((uint32_t)(EDX));
  /* 121633de call 0x1215aaa0 */
  push32(0x121633e3u); f_1215aaa0();
  /* 121633e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121633e6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121633e9 jmp 0x12163400 */
  goto L_12163400;
L_121633eb:;
  /* 121633eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121633ee mov ecx, dword ptr [0x1217ec98] */
  ECX = (r32((uint32_t)(0x1217ec98)));
  /* 121633f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121633f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 121633fa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121633fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12163400:;
  /* 12163400 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163404 je 0x1216342b */
  if (C.zf) goto L_1216342b;
  /* 12163406 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163409 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216340c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216340f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12163413 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12163416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163419 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1216341b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1216341d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12163420 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163423 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163426 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12163429 jmp 0x121633cf */
  goto L_121633cf;
L_1216342b:;
  /* 1216342b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216342f jne 0x12163438 */
  if (!C.zf) goto L_12163438;
  /* 12163431 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163434 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12163436 jmp 0x1216343b */
  goto L_1216343b;
L_12163438:;
  /* 12163438 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1216343b:;
  /* 1216343b mov esp, ebp */
  ESP = (EBP);
  /* 1216343d pop ebp */
  EBP = (pop32());
  /* 1216343e ret  */
  ESPCHK(0x12163340u, _esp0);
  ESP += 4; return;
}

/* FUN_10013440 @ 0x12163440 (17 bytes, 8 insns) */
void f_12163440(void) {
  FTRACE(0x12163440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12163440 push ebp */
  push32((uint32_t)(EBP));
  /* 12163441 mov ebp, esp */
  EBP = (ESP);
  /* 12163443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163446 push eax */
  push32((uint32_t)(EAX));
  /* 12163447 call 0x12163340 */
  push32(0x1216344cu); f_12163340();
  /* 1216344c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216344f pop ebp */
  EBP = (pop32());
  /* 12163450 ret  */
  ESPCHK(0x12163440u, _esp0);
  ESP += 4; return;
}

/* FUN_10013460 @ 0x12163460 (297 bytes, 106 insns) */
void f_12163460(void) {
  FTRACE(0x12163460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12163460 push ebp */
  push32((uint32_t)(EBP));
  /* 12163461 mov ebp, esp */
  EBP = (ESP);
  /* 12163463 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163466 push esi */
  push32((uint32_t)(ESI));
L_12163467:;
  /* 12163467 cmp dword ptr [0x1217eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1217eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216346e jle 0x12163487 */
  if ((C.zf||C.sf!=C.of)) goto L_12163487;
  /* 12163470 push 8 */
  push32((uint32_t)(0x8u));
  /* 12163472 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163475 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163477 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12163479 push ecx */
  push32((uint32_t)(ECX));
  /* 1216347a call 0x1215aaa0 */
  push32(0x1216347fu); f_1215aaa0();
  /* 1216347f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163482 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12163485 jmp 0x121634a0 */
  goto L_121634a0;
L_12163487:;
  /* 12163487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216348a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216348c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1216348e mov ecx, dword ptr [0x1217ec98] */
  ECX = (r32((uint32_t)(0x1217ec98)));
  /* 12163494 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163496 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1216349a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1216349d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_121634a0:;
  /* 121634a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121634a4 je 0x121634b1 */
  if (C.zf) goto L_121634b1;
  /* 121634a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121634a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121634ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121634af jmp 0x12163467 */
  goto L_12163467;
L_121634b1:;
  /* 121634b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121634b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121634b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121634b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121634bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121634be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121634c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121634c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121634c7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121634ca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121634ce je 0x121634d6 */
  if (C.zf) goto L_121634d6;
  /* 121634d0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121634d4 jne 0x121634e9 */
  if (!C.zf) goto L_121634e9;
L_121634d6:;
  /* 121634d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121634d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121634db mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121634dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121634e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121634e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121634e6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121634e9:;
  /* 121634e9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121634f0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121634f7:;
  /* 121634f7 cmp dword ptr [0x1217eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1217eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121634fe jle 0x12163513 */
  if ((C.zf||C.sf!=C.of)) goto L_12163513;
  /* 12163500 push 4 */
  push32((uint32_t)(0x4u));
  /* 12163502 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12163505 push edx */
  push32((uint32_t)(EDX));
  /* 12163506 call 0x1215aaa0 */
  push32(0x1216350bu); f_1215aaa0();
  /* 1216350b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216350e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12163511 jmp 0x12163528 */
  goto L_12163528;
L_12163513:;
  /* 12163513 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12163516 mov ecx, dword ptr [0x1217ec98] */
  ECX = (r32((uint32_t)(0x1217ec98)));
  /* 1216351c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1216351e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12163522 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12163525 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12163528:;
  /* 12163528 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216352c je 0x12163569 */
  if (C.zf) goto L_12163569;
  /* 1216352e push 0 */
  push32((uint32_t)(0x0u));
  /* 12163530 push 0xa */
  push32((uint32_t)(0xau));
  /* 12163532 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163535 push eax */
  push32((uint32_t)(EAX));
  /* 12163536 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163539 push ecx */
  push32((uint32_t)(ECX));
  /* 1216353a call 0x12164400 */
  push32(0x1216353fu); f_12164400();
  /* 1216353f mov ecx, eax */
  ECX = (EAX);
  /* 12163541 mov esi, edx */
  ESI = (EDX);
  /* 12163543 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12163546 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163549 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1216354a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216354c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1216354e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12163551 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12163554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163559 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1216355b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1216355e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163561 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163564 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12163567 jmp 0x121634f7 */
  goto L_121634f7;
L_12163569:;
  /* 12163569 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216356d jne 0x1216357e */
  if (!C.zf) goto L_1216357e;
  /* 1216356f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163572 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12163574 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163577 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216357a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1216357c jmp 0x12163584 */
  goto L_12163584;
L_1216357e:;
  /* 1216357e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163581 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12163584:;
  /* 12163584 pop esi */
  ESI = (pop32());
  /* 12163585 mov esp, ebp */
  ESP = (EBP);
  /* 12163587 pop ebp */
  EBP = (pop32());
  /* 12163588 ret  */
  ESPCHK(0x12163460u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x12163590 (61 bytes, 18 insns) */
void f_12163590(void) {
  FTRACE(0x12163590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12163590 push ebp */
  push32((uint32_t)(EBP));
  /* 12163591 mov ebp, esp */
  EBP = (ESP);
  /* 12163593 cmp dword ptr [0x12180918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216359a jne 0x121635cb */
  if (!C.zf) goto L_121635cb;
  /* 1216359c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1216359e call 0x12158490 */
  push32(0x121635a3u); f_12158490();
  /* 121635a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121635a6 cmp dword ptr [0x12180918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121635ad jne 0x121635c1 */
  if (!C.zf) goto L_121635c1;
  /* 121635af call 0x121635f0 */
  push32(0x121635b4u); f_121635f0();
  /* 121635b4 mov eax, dword ptr [0x12180918] */
  EAX = (r32((uint32_t)(0x12180918)));
  /* 121635b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121635bc mov dword ptr [0x12180918], eax */
  w32((uint32_t)(0x12180918), (EAX));
L_121635c1:;
  /* 121635c1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121635c3 call 0x12158530 */
  push32(0x121635c8u); f_12158530();
  /* 121635c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121635cb:;
  /* 121635cb pop ebp */
  EBP = (pop32());
  /* 121635cc ret  */
  ESPCHK(0x12163590u, _esp0);
  ESP += 4; return;
}

/* FUN_100135d0 @ 0x121635d0 (30 bytes, 11 insns) */
void f_121635d0(void) {
  FTRACE(0x121635d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121635d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121635d1 mov ebp, esp */
  EBP = (ESP);
  /* 121635d3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121635d5 call 0x12158490 */
  push32(0x121635dau); f_12158490();
  /* 121635da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121635dd call 0x121635f0 */
  push32(0x121635e2u); f_121635f0();
  /* 121635e2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121635e4 call 0x12158530 */
  push32(0x121635e9u); f_12158530();
  /* 121635e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121635ec pop ebp */
  EBP = (pop32());
  /* 121635ed ret  */
  ESPCHK(0x121635d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135f0 @ 0x121635f0 (939 bytes, 266 insns) */
void f_121635f0(void) {
  FTRACE(0x121635f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121635f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121635f1 mov ebp, esp */
  EBP = (ESP);
  /* 121635f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121635f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121635fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 121635ff call 0x12158490 */
  push32(0x12163604u); f_12158490();
  /* 12163604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163607 mov dword ptr [0x12180860], 0 */
  w32((uint32_t)(0x12180860), (0x0u));
  /* 12163611 mov dword ptr [0x1217fe38], 0xffffffff */
  w32((uint32_t)(0x1217fe38), (0xffffffffu));
  /* 1216361b mov eax, dword ptr [0x1217fe38] */
  EAX = (r32((uint32_t)(0x1217fe38)));
  /* 12163620 mov dword ptr [0x1217fe28], eax */
  w32((uint32_t)(0x1217fe28), (EAX));
  /* 12163625 push 0x1217ca10 */
  push32((uint32_t)(0x1217ca10u));
  /* 1216362a call 0x12164470 */
  push32(0x1216362fu); f_12164470();
  /* 1216362f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163632 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12163635 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163639 jne 0x12163773 */
  if (!C.zf) goto L_12163773;
  /* 1216363f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12163641 call 0x12158530 */
  push32(0x12163646u); f_12158530();
  /* 12163646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163649 push 0x12180868 */
  push32((uint32_t)(0x12180868u));
  /* 1216364e call dword ptr [0x121832b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832b8))), 0x12163654u);
  /* 12163654 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163657 je 0x1216376e */
  if (C.zf) goto L_1216376e;
  /* 1216365d mov dword ptr [0x12180860], 1 */
  w32((uint32_t)(0x12180860), (0x1u));
  /* 12163667 mov ecx, dword ptr [0x12180868] */
  ECX = (r32((uint32_t)(0x12180868)));
  /* 1216366d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163670 mov dword ptr [0x1217fd90], ecx */
  w32((uint32_t)(0x1217fd90), (ECX));
  /* 12163676 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163678 mov dx, word ptr [0x121808ae] */
  DX = (r16((uint32_t)(0x121808ae)));
  /* 1216367f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12163681 je 0x12163699 */
  if (C.zf) goto L_12163699;
  /* 12163683 mov eax, dword ptr [0x121808bc] */
  EAX = (r32((uint32_t)(0x121808bc)));
  /* 12163688 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216368b mov ecx, dword ptr [0x1217fd90] */
  ECX = (r32((uint32_t)(0x1217fd90)));
  /* 12163691 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163693 mov dword ptr [0x1217fd90], ecx */
  w32((uint32_t)(0x1217fd90), (ECX));
L_12163699:;
  /* 12163699 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1216369b mov dx, word ptr [0x12180902] */
  DX = (r16((uint32_t)(0x12180902)));
  /* 121636a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121636a4 je 0x121636ce */
  if (C.zf) goto L_121636ce;
  /* 121636a6 cmp dword ptr [0x12180910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121636ad je 0x121636ce */
  if (C.zf) goto L_121636ce;
  /* 121636af mov dword ptr [0x1217fd94], 1 */
  w32((uint32_t)(0x1217fd94), (0x1u));
  /* 121636b9 mov eax, dword ptr [0x12180910] */
  EAX = (r32((uint32_t)(0x12180910)));
  /* 121636be sub eax, dword ptr [0x121808bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121808bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121636c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121636c7 mov dword ptr [0x1217fd98], eax */
  w32((uint32_t)(0x1217fd98), (EAX));
  /* 121636cc jmp 0x121636e2 */
  goto L_121636e2;
L_121636ce:;
  /* 121636ce mov dword ptr [0x1217fd94], 0 */
  w32((uint32_t)(0x1217fd94), (0x0u));
  /* 121636d8 mov dword ptr [0x1217fd98], 0 */
  w32((uint32_t)(0x1217fd98), (0x0u));
L_121636e2:;
  /* 121636e2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 121636e5 push ecx */
  push32((uint32_t)(ECX));
  /* 121636e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121636e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 121636ea mov edx, dword ptr [0x1217fe1c] */
  EDX = (r32((uint32_t)(0x1217fe1c)));
  /* 121636f0 push edx */
  push32((uint32_t)(EDX));
  /* 121636f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121636f3 push 0x1218086c */
  push32((uint32_t)(0x1218086cu));
  /* 121636f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121636fd mov eax, dword ptr [0x121807d0] */
  EAX = (r32((uint32_t)(0x121807d0)));
  /* 12163702 push eax */
  push32((uint32_t)(EAX));
  /* 12163703 call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x12163709u);
  /* 12163709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1216370b je 0x1216371f */
  if (C.zf) goto L_1216371f;
  /* 1216370d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163711 jne 0x1216371f */
  if (!C.zf) goto L_1216371f;
  /* 12163713 mov ecx, dword ptr [0x1217fe1c] */
  ECX = (r32((uint32_t)(0x1217fe1c)));
  /* 12163719 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1216371d jmp 0x12163728 */
  goto L_12163728;
L_1216371f:;
  /* 1216371f mov edx, dword ptr [0x1217fe1c] */
  EDX = (r32((uint32_t)(0x1217fe1c)));
  /* 12163725 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12163728:;
  /* 12163728 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1216372b push eax */
  push32((uint32_t)(EAX));
  /* 1216372c push 0 */
  push32((uint32_t)(0x0u));
  /* 1216372e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12163730 mov ecx, dword ptr [0x1217fe20] */
  ECX = (r32((uint32_t)(0x1217fe20)));
  /* 12163736 push ecx */
  push32((uint32_t)(ECX));
  /* 12163737 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12163739 push 0x121808c0 */
  push32((uint32_t)(0x121808c0u));
  /* 1216373e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12163743 mov edx, dword ptr [0x121807d0] */
  EDX = (r32((uint32_t)(0x121807d0)));
  /* 12163749 push edx */
  push32((uint32_t)(EDX));
  /* 1216374a call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x12163750u);
  /* 12163750 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12163752 je 0x12163765 */
  if (C.zf) goto L_12163765;
  /* 12163754 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163758 jne 0x12163765 */
  if (!C.zf) goto L_12163765;
  /* 1216375a mov eax, dword ptr [0x1217fe20] */
  EAX = (r32((uint32_t)(0x1217fe20)));
  /* 1216375f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12163763 jmp 0x1216376e */
  goto L_1216376e;
L_12163765:;
  /* 12163765 mov ecx, dword ptr [0x1217fe20] */
  ECX = (r32((uint32_t)(0x1217fe20)));
  /* 1216376b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_1216376e:;
  /* 1216376e jmp 0x12163997 */
  goto L_12163997;
L_12163773:;
  /* 12163773 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163776 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12163779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1216377b je 0x1216379d */
  if (C.zf) goto L_1216379d;
  /* 1216377d cmp dword ptr [0x12180914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163784 je 0x121637ac */
  if (C.zf) goto L_121637ac;
  /* 12163786 mov ecx, dword ptr [0x12180914] */
  ECX = (r32((uint32_t)(0x12180914)));
  /* 1216378c push ecx */
  push32((uint32_t)(ECX));
  /* 1216378d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163790 push edx */
  push32((uint32_t)(EDX));
  /* 12163791 call 0x12160720 */
  push32(0x12163796u); f_12160720();
  /* 12163796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1216379b jne 0x121637ac */
  if (!C.zf) goto L_121637ac;
L_1216379d:;
  /* 1216379d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1216379f call 0x12158530 */
  push32(0x121637a4u); f_12158530();
  /* 121637a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121637a7 jmp 0x12163997 */
  goto L_12163997;
L_121637ac:;
  /* 121637ac push 2 */
  push32((uint32_t)(0x2u));
  /* 121637ae mov eax, dword ptr [0x12180914] */
  EAX = (r32((uint32_t)(0x12180914)));
  /* 121637b3 push eax */
  push32((uint32_t)(EAX));
  /* 121637b4 call 0x12155520 */
  push32(0x121637b9u); f_12155520();
  /* 121637b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121637bc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 121637c1 push 0x1217ca08 */
  push32((uint32_t)(0x1217ca08u));
  /* 121637c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121637c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121637cb push ecx */
  push32((uint32_t)(ECX));
  /* 121637cc call 0x121578c0 */
  push32(0x121637d1u); f_121578c0();
  /* 121637d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121637d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121637d7 push eax */
  push32((uint32_t)(EAX));
  /* 121637d8 call 0x12154a90 */
  push32(0x121637ddu); f_12154a90();
  /* 121637dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121637e0 mov dword ptr [0x12180914], eax */
  w32((uint32_t)(0x12180914), (EAX));
  /* 121637e5 cmp dword ptr [0x12180914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121637ec jne 0x121637fd */
  if (!C.zf) goto L_121637fd;
  /* 121637ee push 0xc */
  push32((uint32_t)(0xcu));
  /* 121637f0 call 0x12158530 */
  push32(0x121637f5u); f_12158530();
  /* 121637f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121637f8 jmp 0x12163997 */
  goto L_12163997;
L_121637fd:;
  /* 121637fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163800 push edx */
  push32((uint32_t)(EDX));
  /* 12163801 mov eax, dword ptr [0x12180914] */
  EAX = (r32((uint32_t)(0x12180914)));
  /* 12163806 push eax */
  push32((uint32_t)(EAX));
  /* 12163807 call 0x12157a40 */
  push32(0x1216380cu); f_12157a40();
  /* 1216380c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216380f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12163811 call 0x12158530 */
  push32(0x12163816u); f_12158530();
  /* 12163816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163819 push 3 */
  push32((uint32_t)(0x3u));
  /* 1216381b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216381e push ecx */
  push32((uint32_t)(ECX));
  /* 1216381f mov edx, dword ptr [0x1217fe1c] */
  EDX = (r32((uint32_t)(0x1217fe1c)));
  /* 12163825 push edx */
  push32((uint32_t)(EDX));
  /* 12163826 call 0x121582b0 */
  push32(0x1216382bu); f_121582b0();
  /* 1216382b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216382e mov eax, dword ptr [0x1217fe1c] */
  EAX = (r32((uint32_t)(0x1217fe1c)));
  /* 12163833 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12163837 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216383a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216383d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12163840 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163843 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12163846 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163849 jne 0x1216385d */
  if (!C.zf) goto L_1216385d;
  /* 1216384b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216384e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163851 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12163854 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163857 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216385a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1216385d:;
  /* 1216385d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163860 push eax */
  push32((uint32_t)(EAX));
  /* 12163861 call 0x12163340 */
  push32(0x12163866u); f_12163340();
  /* 12163866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163869 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1216386f mov dword ptr [0x1217fd90], eax */
  w32((uint32_t)(0x1217fd90), (EAX));
L_12163874:;
  /* 12163874 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163877 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1216387a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216387d je 0x12163895 */
  if (C.zf) goto L_12163895;
  /* 1216387f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163882 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12163885 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163888 jl 0x121638a0 */
  if ((C.sf!=C.of)) goto L_121638a0;
  /* 1216388a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216388d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12163890 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163893 jg 0x121638a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_121638a0;
L_12163895:;
  /* 12163895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163898 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216389b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1216389e jmp 0x12163874 */
  goto L_12163874;
L_121638a0:;
  /* 121638a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121638a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121638a6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121638a9 jne 0x12163945 */
  if (!C.zf) goto L_12163945;
  /* 121638af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121638b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121638b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121638b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121638bb push edx */
  push32((uint32_t)(EDX));
  /* 121638bc call 0x12163340 */
  push32(0x121638c1u); f_12163340();
  /* 121638c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121638c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121638c7 mov ecx, dword ptr [0x1217fd90] */
  ECX = (r32((uint32_t)(0x1217fd90)));
  /* 121638cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121638cf mov dword ptr [0x1217fd90], ecx */
  w32((uint32_t)(0x1217fd90), (ECX));
L_121638d5:;
  /* 121638d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121638d8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121638db cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121638de jl 0x121638f6 */
  if ((C.sf!=C.of)) goto L_121638f6;
  /* 121638e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121638e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121638e6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121638e9 jg 0x121638f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_121638f6;
  /* 121638eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121638ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121638f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121638f4 jmp 0x121638d5 */
  goto L_121638d5;
L_121638f6:;
  /* 121638f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121638f9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121638fc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121638ff jne 0x12163945 */
  if (!C.zf) goto L_12163945;
  /* 12163901 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163907 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1216390a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216390d push ecx */
  push32((uint32_t)(ECX));
  /* 1216390e call 0x12163340 */
  push32(0x12163913u); f_12163340();
  /* 12163913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163916 mov edx, dword ptr [0x1217fd90] */
  EDX = (r32((uint32_t)(0x1217fd90)));
  /* 1216391c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216391e mov dword ptr [0x1217fd90], edx */
  w32((uint32_t)(0x1217fd90), (EDX));
L_12163924:;
  /* 12163924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163927 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1216392a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216392d jl 0x12163945 */
  if ((C.sf!=C.of)) goto L_12163945;
  /* 1216392f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163932 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12163935 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163938 jg 0x12163945 */
  if ((!C.zf&&C.sf==C.of)) goto L_12163945;
  /* 1216393a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216393d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163940 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12163943 jmp 0x12163924 */
  goto L_12163924;
L_12163945:;
  /* 12163945 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163949 je 0x12163959 */
  if (C.zf) goto L_12163959;
  /* 1216394b mov edx, dword ptr [0x1217fd90] */
  EDX = (r32((uint32_t)(0x1217fd90)));
  /* 12163951 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12163953 mov dword ptr [0x1217fd90], edx */
  w32((uint32_t)(0x1217fd90), (EDX));
L_12163959:;
  /* 12163959 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1216395c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1216395f mov dword ptr [0x1217fd94], ecx */
  w32((uint32_t)(0x1217fd94), (ECX));
  /* 12163965 cmp dword ptr [0x1217fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1217fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216396c je 0x1216398e */
  if (C.zf) goto L_1216398e;
  /* 1216396e push 3 */
  push32((uint32_t)(0x3u));
  /* 12163970 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163973 push edx */
  push32((uint32_t)(EDX));
  /* 12163974 mov eax, dword ptr [0x1217fe20] */
  EAX = (r32((uint32_t)(0x1217fe20)));
  /* 12163979 push eax */
  push32((uint32_t)(EAX));
  /* 1216397a call 0x121582b0 */
  push32(0x1216397fu); f_121582b0();
  /* 1216397f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163982 mov ecx, dword ptr [0x1217fe20] */
  ECX = (r32((uint32_t)(0x1217fe20)));
  /* 12163988 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1216398c jmp 0x12163997 */
  goto L_12163997;
L_1216398e:;
  /* 1216398e mov edx, dword ptr [0x1217fe20] */
  EDX = (r32((uint32_t)(0x1217fe20)));
  /* 12163994 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12163997:;
  /* 12163997 mov esp, ebp */
  ESP = (EBP);
  /* 12163999 pop ebp */
  EBP = (pop32());
  /* 1216399a ret  */
  ESPCHK(0x121635f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139a0 @ 0x121639a0 (46 bytes, 18 insns) */
void f_121639a0(void) {
  FTRACE(0x121639a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121639a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121639a1 mov ebp, esp */
  EBP = (ESP);
  /* 121639a3 push ecx */
  push32((uint32_t)(ECX));
  /* 121639a4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121639a6 call 0x12158490 */
  push32(0x121639abu); f_12158490();
  /* 121639ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121639ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121639b1 push eax */
  push32((uint32_t)(EAX));
  /* 121639b2 call 0x121639d0 */
  push32(0x121639b7u); f_121639d0();
  /* 121639b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121639ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121639bd push 0xb */
  push32((uint32_t)(0xbu));
  /* 121639bf call 0x12158530 */
  push32(0x121639c4u); f_12158530();
  /* 121639c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121639c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121639ca mov esp, ebp */
  ESP = (EBP);
  /* 121639cc pop ebp */
  EBP = (pop32());
  /* 121639cd ret  */
  ESPCHK(0x121639a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139d0 @ 0x121639d0 (762 bytes, 246 insns) */
void f_121639d0(void) {
  FTRACE(0x121639d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121639d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121639d1 mov ebp, esp */
  EBP = (ESP);
  /* 121639d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121639d4 cmp dword ptr [0x1217fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1217fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121639db jne 0x121639e4 */
  if (!C.zf) goto L_121639e4;
  /* 121639dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121639df jmp 0x12163cc6 */
  goto L_12163cc6;
L_121639e4:;
  /* 121639e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121639e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121639ea cmp ecx, dword ptr [0x1217fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1217fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121639f0 jne 0x12163a04 */
  if (!C.zf) goto L_12163a04;
  /* 121639f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121639f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121639f8 cmp eax, dword ptr [0x1217fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1217fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121639fe je 0x12163bcb */
  if (C.zf) goto L_12163bcb;
L_12163a04:;
  /* 12163a04 cmp dword ptr [0x12180860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163a0b je 0x12163b85 */
  if (C.zf) goto L_12163b85;
  /* 12163a11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163a13 mov cx, word ptr [0x12180900] */
  CX = (r16((uint32_t)(0x12180900)));
  /* 12163a1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12163a1c jne 0x12163a79 */
  if (!C.zf) goto L_12163a79;
  /* 12163a1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163a20 mov dx, word ptr [0x1218090e] */
  DX = (r16((uint32_t)(0x1218090e)));
  /* 12163a27 push edx */
  push32((uint32_t)(EDX));
  /* 12163a28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163a2a mov ax, word ptr [0x1218090c] */
  AX = (r16((uint32_t)(0x1218090c)));
  /* 12163a30 push eax */
  push32((uint32_t)(EAX));
  /* 12163a31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163a33 mov cx, word ptr [0x1218090a] */
  CX = (r16((uint32_t)(0x1218090a)));
  /* 12163a3a push ecx */
  push32((uint32_t)(ECX));
  /* 12163a3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163a3d mov dx, word ptr [0x12180908] */
  DX = (r16((uint32_t)(0x12180908)));
  /* 12163a44 push edx */
  push32((uint32_t)(EDX));
  /* 12163a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163a49 mov ax, word ptr [0x12180904] */
  AX = (r16((uint32_t)(0x12180904)));
  /* 12163a4f push eax */
  push32((uint32_t)(EAX));
  /* 12163a50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163a52 mov cx, word ptr [0x12180906] */
  CX = (r16((uint32_t)(0x12180906)));
  /* 12163a59 push ecx */
  push32((uint32_t)(ECX));
  /* 12163a5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163a5c mov dx, word ptr [0x12180902] */
  DX = (r16((uint32_t)(0x12180902)));
  /* 12163a63 push edx */
  push32((uint32_t)(EDX));
  /* 12163a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163a67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12163a6a push ecx */
  push32((uint32_t)(ECX));
  /* 12163a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 12163a6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12163a6f call 0x12163cd0 */
  push32(0x12163a74u); f_12163cd0();
  /* 12163a74 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163a77 jmp 0x12163aca */
  goto L_12163aca;
L_12163a79:;
  /* 12163a79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163a7b mov dx, word ptr [0x1218090e] */
  DX = (r16((uint32_t)(0x1218090e)));
  /* 12163a82 push edx */
  push32((uint32_t)(EDX));
  /* 12163a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163a85 mov ax, word ptr [0x1218090c] */
  AX = (r16((uint32_t)(0x1218090c)));
  /* 12163a8b push eax */
  push32((uint32_t)(EAX));
  /* 12163a8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163a8e mov cx, word ptr [0x1218090a] */
  CX = (r16((uint32_t)(0x1218090a)));
  /* 12163a95 push ecx */
  push32((uint32_t)(ECX));
  /* 12163a96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163a98 mov dx, word ptr [0x12180908] */
  DX = (r16((uint32_t)(0x12180908)));
  /* 12163a9f push edx */
  push32((uint32_t)(EDX));
  /* 12163aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163aa2 mov ax, word ptr [0x12180906] */
  AX = (r16((uint32_t)(0x12180906)));
  /* 12163aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12163aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163aab push 0 */
  push32((uint32_t)(0x0u));
  /* 12163aad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163aaf mov cx, word ptr [0x12180902] */
  CX = (r16((uint32_t)(0x12180902)));
  /* 12163ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12163ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163aba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12163abd push eax */
  push32((uint32_t)(EAX));
  /* 12163abe push 0 */
  push32((uint32_t)(0x0u));
  /* 12163ac0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12163ac2 call 0x12163cd0 */
  push32(0x12163ac7u); f_12163cd0();
  /* 12163ac7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12163aca:;
  /* 12163aca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163acc mov cx, word ptr [0x121808ac] */
  CX = (r16((uint32_t)(0x121808ac)));
  /* 12163ad3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12163ad5 jne 0x12163b32 */
  if (!C.zf) goto L_12163b32;
  /* 12163ad7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163ad9 mov dx, word ptr [0x121808ba] */
  DX = (r16((uint32_t)(0x121808ba)));
  /* 12163ae0 push edx */
  push32((uint32_t)(EDX));
  /* 12163ae1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163ae3 mov ax, word ptr [0x121808b8] */
  AX = (r16((uint32_t)(0x121808b8)));
  /* 12163ae9 push eax */
  push32((uint32_t)(EAX));
  /* 12163aea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163aec mov cx, word ptr [0x121808b6] */
  CX = (r16((uint32_t)(0x121808b6)));
  /* 12163af3 push ecx */
  push32((uint32_t)(ECX));
  /* 12163af4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163af6 mov dx, word ptr [0x121808b4] */
  DX = (r16((uint32_t)(0x121808b4)));
  /* 12163afd push edx */
  push32((uint32_t)(EDX));
  /* 12163afe push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163b02 mov ax, word ptr [0x121808b0] */
  AX = (r16((uint32_t)(0x121808b0)));
  /* 12163b08 push eax */
  push32((uint32_t)(EAX));
  /* 12163b09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163b0b mov cx, word ptr [0x121808b2] */
  CX = (r16((uint32_t)(0x121808b2)));
  /* 12163b12 push ecx */
  push32((uint32_t)(ECX));
  /* 12163b13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163b15 mov dx, word ptr [0x121808ae] */
  DX = (r16((uint32_t)(0x121808ae)));
  /* 12163b1c push edx */
  push32((uint32_t)(EDX));
  /* 12163b1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163b20 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12163b23 push ecx */
  push32((uint32_t)(ECX));
  /* 12163b24 push 1 */
  push32((uint32_t)(0x1u));
  /* 12163b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b28 call 0x12163cd0 */
  push32(0x12163b2du); f_12163cd0();
  /* 12163b2d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163b30 jmp 0x12163b83 */
  goto L_12163b83;
L_12163b32:;
  /* 12163b32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163b34 mov dx, word ptr [0x121808ba] */
  DX = (r16((uint32_t)(0x121808ba)));
  /* 12163b3b push edx */
  push32((uint32_t)(EDX));
  /* 12163b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163b3e mov ax, word ptr [0x121808b8] */
  AX = (r16((uint32_t)(0x121808b8)));
  /* 12163b44 push eax */
  push32((uint32_t)(EAX));
  /* 12163b45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163b47 mov cx, word ptr [0x121808b6] */
  CX = (r16((uint32_t)(0x121808b6)));
  /* 12163b4e push ecx */
  push32((uint32_t)(ECX));
  /* 12163b4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12163b51 mov dx, word ptr [0x121808b4] */
  DX = (r16((uint32_t)(0x121808b4)));
  /* 12163b58 push edx */
  push32((uint32_t)(EDX));
  /* 12163b59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163b5b mov ax, word ptr [0x121808b2] */
  AX = (r16((uint32_t)(0x121808b2)));
  /* 12163b61 push eax */
  push32((uint32_t)(EAX));
  /* 12163b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12163b68 mov cx, word ptr [0x121808ae] */
  CX = (r16((uint32_t)(0x121808ae)));
  /* 12163b6f push ecx */
  push32((uint32_t)(ECX));
  /* 12163b70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163b73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12163b76 push eax */
  push32((uint32_t)(EAX));
  /* 12163b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b7b call 0x12163cd0 */
  push32(0x12163b80u); f_12163cd0();
  /* 12163b80 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12163b83:;
  /* 12163b83 jmp 0x12163bcb */
  goto L_12163bcb;
L_12163b85:;
  /* 12163b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12163b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12163b91 push 1 */
  push32((uint32_t)(0x1u));
  /* 12163b93 push 4 */
  push32((uint32_t)(0x4u));
  /* 12163b95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163b98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12163b9b push edx */
  push32((uint32_t)(EDX));
  /* 12163b9c push 1 */
  push32((uint32_t)(0x1u));
  /* 12163b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 12163ba0 call 0x12163cd0 */
  push32(0x12163ba5u); f_12163cd0();
  /* 12163ba5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163baa push 0 */
  push32((uint32_t)(0x0u));
  /* 12163bac push 0 */
  push32((uint32_t)(0x0u));
  /* 12163bae push 2 */
  push32((uint32_t)(0x2u));
  /* 12163bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163bb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12163bb6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12163bb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163bbb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12163bbe push ecx */
  push32((uint32_t)(ECX));
  /* 12163bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12163bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163bc3 call 0x12163cd0 */
  push32(0x12163bc8u); f_12163cd0();
  /* 12163bc8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12163bcb:;
  /* 12163bcb mov edx, dword ptr [0x1217fe2c] */
  EDX = (r32((uint32_t)(0x1217fe2c)));
  /* 12163bd1 cmp edx, dword ptr [0x1217fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1217fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163bd7 jge 0x12163c24 */
  if ((C.sf==C.of)) goto L_12163c24;
  /* 12163bd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163bdc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12163bdf cmp ecx, dword ptr [0x1217fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1217fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163be5 jl 0x12163bf5 */
  if ((C.sf!=C.of)) goto L_12163bf5;
  /* 12163be7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163bea mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12163bed cmp eax, dword ptr [0x1217fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1217fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163bf3 jle 0x12163bfc */
  if ((C.zf||C.sf!=C.of)) goto L_12163bfc;
L_12163bf5:;
  /* 12163bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163bf7 jmp 0x12163cc6 */
  goto L_12163cc6;
L_12163bfc:;
  /* 12163bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163bff mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12163c02 cmp edx, dword ptr [0x1217fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1217fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163c08 jle 0x12163c22 */
  if ((C.zf||C.sf!=C.of)) goto L_12163c22;
  /* 12163c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163c0d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12163c10 cmp ecx, dword ptr [0x1217fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1217fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163c16 jge 0x12163c22 */
  if ((C.sf==C.of)) goto L_12163c22;
  /* 12163c18 mov eax, 1 */
  EAX = (0x1u);
  /* 12163c1d jmp 0x12163cc6 */
  goto L_12163cc6;
L_12163c22:;
  /* 12163c22 jmp 0x12163c67 */
  goto L_12163c67;
L_12163c24:;
  /* 12163c24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163c27 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12163c2a cmp eax, dword ptr [0x1217fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1217fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163c30 jl 0x12163c40 */
  if ((C.sf!=C.of)) goto L_12163c40;
  /* 12163c32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163c35 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12163c38 cmp edx, dword ptr [0x1217fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1217fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163c3e jle 0x12163c47 */
  if ((C.zf||C.sf!=C.of)) goto L_12163c47;
L_12163c40:;
  /* 12163c40 mov eax, 1 */
  EAX = (0x1u);
  /* 12163c45 jmp 0x12163cc6 */
  goto L_12163cc6;
L_12163c47:;
  /* 12163c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163c4a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12163c4d cmp ecx, dword ptr [0x1217fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1217fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163c53 jle 0x12163c67 */
  if ((C.zf||C.sf!=C.of)) goto L_12163c67;
  /* 12163c55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163c58 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12163c5b cmp eax, dword ptr [0x1217fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1217fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163c61 jge 0x12163c67 */
  if ((C.sf==C.of)) goto L_12163c67;
  /* 12163c63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163c65 jmp 0x12163cc6 */
  goto L_12163cc6;
L_12163c67:;
  /* 12163c67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163c6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12163c6d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163c73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12163c75 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163c77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163c7a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12163c7d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163c83 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163c85 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163c8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12163c8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163c91 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12163c94 cmp edx, dword ptr [0x1217fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1217fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163c9a jne 0x12163cb2 */
  if (!C.zf) goto L_12163cb2;
  /* 12163c9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12163c9f cmp eax, dword ptr [0x1217fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1217fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163ca5 jl 0x12163cae */
  if ((C.sf!=C.of)) goto L_12163cae;
  /* 12163ca7 mov eax, 1 */
  EAX = (0x1u);
  /* 12163cac jmp 0x12163cc6 */
  goto L_12163cc6;
L_12163cae:;
  /* 12163cae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163cb0 jmp 0x12163cc6 */
  goto L_12163cc6;
L_12163cb2:;
  /* 12163cb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12163cb5 cmp ecx, dword ptr [0x1217fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1217fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163cbb jge 0x12163cc4 */
  if ((C.sf==C.of)) goto L_12163cc4;
  /* 12163cbd mov eax, 1 */
  EAX = (0x1u);
  /* 12163cc2 jmp 0x12163cc6 */
  goto L_12163cc6;
L_12163cc4:;
  /* 12163cc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12163cc6:;
  /* 12163cc6 mov esp, ebp */
  ESP = (EBP);
  /* 12163cc8 pop ebp */
  EBP = (pop32());
  /* 12163cc9 ret  */
  ESPCHK(0x121639d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cd0 @ 0x12163cd0 (504 bytes, 145 insns) */
void f_12163cd0(void) {
  FTRACE(0x12163cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12163cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12163cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12163cd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163cd6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163cda jne 0x12163dac */
  if (!C.zf) goto L_12163dac;
  /* 12163ce0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163ce3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12163ce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12163ce8 jne 0x12163cf9 */
  if (!C.zf) goto L_12163cf9;
  /* 12163cea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12163ced mov edx, dword ptr [ecx*4 + 0x1217fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217fe4c)));
  /* 12163cf4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12163cf7 jmp 0x12163d06 */
  goto L_12163d06;
L_12163cf9:;
  /* 12163cf9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12163cfc mov ecx, dword ptr [eax*4 + 0x1217fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1217fe80)));
  /* 12163d03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12163d06:;
  /* 12163d06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12163d09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163d0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12163d0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163d12 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163d15 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163d1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163d1e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163d20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163d23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163d26 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12163d29 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12163d2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12163d2e mov ecx, 7 */
  ECX = (0x7u);
  /* 12163d33 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12163d35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12163d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12163d3b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163d3e jge 0x12163d59 */
  if ((C.sf==C.of)) goto L_12163d59;
  /* 12163d40 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12163d43 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163d46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12163d49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163d4c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163d4f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163d52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163d54 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12163d57 jmp 0x12163d6d */
  goto L_12163d6d;
L_12163d59:;
  /* 12163d59 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12163d5c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163d5f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12163d62 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163d65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163d68 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163d6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12163d6d:;
  /* 12163d6d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163d71 jne 0x12163daa */
  if (!C.zf) goto L_12163daa;
  /* 12163d73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163d76 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12163d79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12163d7b jne 0x12163d8c */
  if (!C.zf) goto L_12163d8c;
  /* 12163d7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12163d80 mov eax, dword ptr [edx*4 + 0x1217fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1217fe50)));
  /* 12163d87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12163d8a jmp 0x12163d99 */
  goto L_12163d99;
L_12163d8c:;
  /* 12163d8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12163d8f mov edx, dword ptr [ecx*4 + 0x1217fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217fe84)));
  /* 12163d96 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12163d99:;
  /* 12163d99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163d9c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163d9f jle 0x12163daa */
  if ((C.zf||C.sf!=C.of)) goto L_12163daa;
  /* 12163da1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163da4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163da7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12163daa:;
  /* 12163daa jmp 0x12163de1 */
  goto L_12163de1;
L_12163dac:;
  /* 12163dac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163daf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12163db2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12163db4 jne 0x12163dc5 */
  if (!C.zf) goto L_12163dc5;
  /* 12163db6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12163db9 mov ecx, dword ptr [eax*4 + 0x1217fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1217fe4c)));
  /* 12163dc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12163dc3 jmp 0x12163dd2 */
  goto L_12163dd2;
L_12163dc5:;
  /* 12163dc5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12163dc8 mov eax, dword ptr [edx*4 + 0x1217fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1217fe80)));
  /* 12163dcf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12163dd2:;
  /* 12163dd2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12163dd5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12163dd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163ddb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163dde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12163de1:;
  /* 12163de1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163de5 jne 0x12163e21 */
  if (!C.zf) goto L_12163e21;
  /* 12163de7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163dea mov dword ptr [0x1217fe2c], eax */
  w32((uint32_t)(0x1217fe2c), (EAX));
  /* 12163def mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12163df2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163df5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12163df8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163dfa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163dfd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12163e00 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163e02 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163e08 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12163e0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163e0d mov dword ptr [0x1217fe30], ecx */
  w32((uint32_t)(0x1217fe30), (ECX));
  /* 12163e13 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163e16 mov dword ptr [0x1217fe28], edx */
  w32((uint32_t)(0x1217fe28), (EDX));
  /* 12163e1c jmp 0x12163ec4 */
  goto L_12163ec4;
L_12163e21:;
  /* 12163e21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12163e24 mov dword ptr [0x1217fe3c], eax */
  w32((uint32_t)(0x1217fe3c), (EAX));
  /* 12163e29 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12163e2c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163e2f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12163e32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163e34 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163e37 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12163e3a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163e3c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163e42 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12163e45 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163e47 mov dword ptr [0x1217fe40], ecx */
  w32((uint32_t)(0x1217fe40), (ECX));
  /* 12163e4d mov edx, dword ptr [0x1217fd98] */
  EDX = (r32((uint32_t)(0x1217fd98)));
  /* 12163e53 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12163e59 mov eax, dword ptr [0x1217fe40] */
  EAX = (r32((uint32_t)(0x1217fe40)));
  /* 12163e5e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163e60 mov dword ptr [0x1217fe40], eax */
  w32((uint32_t)(0x1217fe40), (EAX));
  /* 12163e65 cmp dword ptr [0x1217fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1217fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163e6c jge 0x12163e91 */
  if ((C.sf==C.of)) goto L_12163e91;
  /* 12163e6e mov ecx, dword ptr [0x1217fe40] */
  ECX = (r32((uint32_t)(0x1217fe40)));
  /* 12163e74 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163e7a mov dword ptr [0x1217fe40], ecx */
  w32((uint32_t)(0x1217fe40), (ECX));
  /* 12163e80 mov edx, dword ptr [0x1217fe3c] */
  EDX = (r32((uint32_t)(0x1217fe3c)));
  /* 12163e86 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163e89 mov dword ptr [0x1217fe3c], edx */
  w32((uint32_t)(0x1217fe3c), (EDX));
  /* 12163e8f jmp 0x12163ebb */
  goto L_12163ebb;
L_12163e91:;
  /* 12163e91 cmp dword ptr [0x1217fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1217fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163e9b jl 0x12163ebb */
  if ((C.sf!=C.of)) goto L_12163ebb;
  /* 12163e9d mov eax, dword ptr [0x1217fe40] */
  EAX = (r32((uint32_t)(0x1217fe40)));
  /* 12163ea2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12163ea7 mov dword ptr [0x1217fe40], eax */
  w32((uint32_t)(0x1217fe40), (EAX));
  /* 12163eac mov ecx, dword ptr [0x1217fe3c] */
  ECX = (r32((uint32_t)(0x1217fe3c)));
  /* 12163eb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163eb5 mov dword ptr [0x1217fe3c], ecx */
  w32((uint32_t)(0x1217fe3c), (ECX));
L_12163ebb:;
  /* 12163ebb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163ebe mov dword ptr [0x1217fe38], edx */
  w32((uint32_t)(0x1217fe38), (EDX));
L_12163ec4:;
  /* 12163ec4 mov esp, ebp */
  ESP = (EBP);
  /* 12163ec6 pop ebp */
  EBP = (pop32());
  /* 12163ec7 ret  */
  ESPCHK(0x12163cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ed0 @ 0x12163ed0 (382 bytes, 135 insns) */
void f_12163ed0(void) {
  FTRACE(0x12163ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12163ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12163ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12163ed3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12163ed5 push 0x1217ca18 */
  push32((uint32_t)(0x1217ca18u));
  /* 12163eda push 0x1215db98 */
  push32((uint32_t)(0x1215db98u));
  /* 12163edf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12163ee5 push eax */
  push32((uint32_t)(EAX));
  /* 12163ee6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12163eed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12163ef0 push ebx */
  push32((uint32_t)(EBX));
  /* 12163ef1 push esi */
  push32((uint32_t)(ESI));
  /* 12163ef2 push edi */
  push32((uint32_t)(EDI));
  /* 12163ef3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12163ef6 cmp dword ptr [0x1218091c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218091c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163efd jne 0x12163f42 */
  if (!C.zf) goto L_12163f42;
  /* 12163eff push 0 */
  push32((uint32_t)(0x0u));
  /* 12163f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12163f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163f07 call dword ptr [0x121832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832b4))), 0x12163f0du);
  /* 12163f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12163f0f je 0x12163f1d */
  if (C.zf) goto L_12163f1d;
  /* 12163f11 mov dword ptr [0x1218091c], 1 */
  w32((uint32_t)(0x1218091c), (0x1u));
  /* 12163f1b jmp 0x12163f42 */
  goto L_12163f42;
L_12163f1d:;
  /* 12163f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12163f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12163f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 12163f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163f25 call dword ptr [0x121832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832cc))), 0x12163f2bu);
  /* 12163f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12163f2d je 0x12163f3b */
  if (C.zf) goto L_12163f3b;
  /* 12163f2f mov dword ptr [0x1218091c], 2 */
  w32((uint32_t)(0x1218091c), (0x2u));
  /* 12163f39 jmp 0x12163f42 */
  goto L_12163f42;
L_12163f3b:;
  /* 12163f3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163f3d jmp 0x12164051 */
  goto L_12164051;
L_12163f42:;
  /* 12163f42 cmp dword ptr [0x1218091c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1218091c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163f49 jne 0x12163f66 */
  if (!C.zf) goto L_12163f66;
  /* 12163f4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12163f4e push eax */
  push32((uint32_t)(EAX));
  /* 12163f4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12163f52 push ecx */
  push32((uint32_t)(ECX));
  /* 12163f53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12163f56 push edx */
  push32((uint32_t)(EDX));
  /* 12163f57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163f5a push eax */
  push32((uint32_t)(EAX));
  /* 12163f5b call dword ptr [0x121832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832b4))), 0x12163f61u);
  /* 12163f61 jmp 0x12164051 */
  goto L_12164051;
L_12163f66:;
  /* 12163f66 cmp dword ptr [0x1218091c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1218091c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163f6d jne 0x1216404f */
  if (!C.zf) goto L_1216404f;
  /* 12163f73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163f77 jne 0x12163f82 */
  if (!C.zf) goto L_12163f82;
  /* 12163f79 mov ecx, dword ptr [0x121807d0] */
  ECX = (r32((uint32_t)(0x121807d0)));
  /* 12163f7f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12163f82:;
  /* 12163f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12163f86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12163f89 push edx */
  push32((uint32_t)(EDX));
  /* 12163f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163f8d push eax */
  push32((uint32_t)(EAX));
  /* 12163f8e call dword ptr [0x121832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832cc))), 0x12163f94u);
  /* 12163f94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12163f97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163f9b jne 0x12163fa4 */
  if (!C.zf) goto L_12163fa4;
  /* 12163f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163f9f jmp 0x12164051 */
  goto L_12164051;
L_12163fa4:;
  /* 12163fa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12163fab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12163fae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12163fb1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12163fb3 call 0x12157c30 */
  push32(0x12163fb8u); f_12157c30();
  /* 12163fb8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12163fbb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12163fbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12163fc1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12163fc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12163fcb jmp 0x12163fe4 */
  goto L_12163fe4;
  /* 12163fcd mov eax, 1 */
  EAX = (0x1u);
  /* 12163fd2 ret  */
  ESPCHK(0x12163ed0u, _esp0);
  ESP += 4; return;
  /* 12163fd3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12163fd6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12163fdd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12163fe4:;
  /* 12163fe4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12163fe8 jne 0x12163fee */
  if (!C.zf) goto L_12163fee;
  /* 12163fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12163fec jmp 0x12164051 */
  goto L_12164051;
L_12163fee:;
  /* 12163fee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12163ff1 push edx */
  push32((uint32_t)(EDX));
  /* 12163ff2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12163ff5 push eax */
  push32((uint32_t)(EAX));
  /* 12163ff6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12163ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 12163ffa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12163ffd push edx */
  push32((uint32_t)(EDX));
  /* 12163ffe call dword ptr [0x121832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832cc))), 0x12164004u);
  /* 12164004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12164006 jne 0x1216400c */
  if (!C.zf) goto L_1216400c;
  /* 12164008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216400a jmp 0x12164051 */
  goto L_12164051;
L_1216400c:;
  /* 1216400c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164010 jne 0x1216402d */
  if (!C.zf) goto L_1216402d;
  /* 12164012 push 0 */
  push32((uint32_t)(0x0u));
  /* 12164014 push 0 */
  push32((uint32_t)(0x0u));
  /* 12164016 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12164018 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1216401b push eax */
  push32((uint32_t)(EAX));
  /* 1216401c push 1 */
  push32((uint32_t)(0x1u));
  /* 1216401e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12164021 push ecx */
  push32((uint32_t)(ECX));
  /* 12164022 call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x12164028u);
  /* 12164028 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1216402b jmp 0x1216404a */
  goto L_1216404a;
L_1216402d:;
  /* 1216402d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12164030 push edx */
  push32((uint32_t)(EDX));
  /* 12164031 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12164034 push eax */
  push32((uint32_t)(EAX));
  /* 12164035 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12164037 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1216403a push ecx */
  push32((uint32_t)(ECX));
  /* 1216403b push 1 */
  push32((uint32_t)(0x1u));
  /* 1216403d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12164040 push edx */
  push32((uint32_t)(EDX));
  /* 12164041 call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x12164047u);
  /* 12164047 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1216404a:;
  /* 1216404a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1216404d jmp 0x12164051 */
  goto L_12164051;
L_1216404f:;
  /* 1216404f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12164051:;
  /* 12164051 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12164054 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12164057 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1216405e pop edi */
  EDI = (pop32());
  /* 1216405f pop esi */
  ESI = (pop32());
  /* 12164060 pop ebx */
  EBX = (pop32());
  /* 12164061 mov esp, ebp */
  ESP = (EBP);
  /* 12164063 pop ebp */
  EBP = (pop32());
  /* 12164064 ret  */
  ESPCHK(0x12163ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014070 @ 0x12164070 (398 bytes, 140 insns) */
void f_12164070(void) {
  FTRACE(0x12164070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164070 push ebp */
  push32((uint32_t)(EBP));
  /* 12164071 mov ebp, esp */
  EBP = (ESP);
  /* 12164073 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12164075 push 0x1217ca28 */
  push32((uint32_t)(0x1217ca28u));
  /* 1216407a push 0x1215db98 */
  push32((uint32_t)(0x1215db98u));
  /* 1216407f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12164085 push eax */
  push32((uint32_t)(EAX));
  /* 12164086 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1216408d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164090 push ebx */
  push32((uint32_t)(EBX));
  /* 12164091 push esi */
  push32((uint32_t)(ESI));
  /* 12164092 push edi */
  push32((uint32_t)(EDI));
  /* 12164093 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12164096 cmp dword ptr [0x12180920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216409d jne 0x121640e2 */
  if (!C.zf) goto L_121640e2;
  /* 1216409f push 0 */
  push32((uint32_t)(0x0u));
  /* 121640a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121640a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121640a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121640a7 call dword ptr [0x121832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832b4))), 0x121640adu);
  /* 121640ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121640af je 0x121640bd */
  if (C.zf) goto L_121640bd;
  /* 121640b1 mov dword ptr [0x12180920], 1 */
  w32((uint32_t)(0x12180920), (0x1u));
  /* 121640bb jmp 0x121640e2 */
  goto L_121640e2;
L_121640bd:;
  /* 121640bd push 0 */
  push32((uint32_t)(0x0u));
  /* 121640bf push 0 */
  push32((uint32_t)(0x0u));
  /* 121640c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121640c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121640c5 call dword ptr [0x121832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832cc))), 0x121640cbu);
  /* 121640cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121640cd je 0x121640db */
  if (C.zf) goto L_121640db;
  /* 121640cf mov dword ptr [0x12180920], 2 */
  w32((uint32_t)(0x12180920), (0x2u));
  /* 121640d9 jmp 0x121640e2 */
  goto L_121640e2;
L_121640db:;
  /* 121640db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121640dd jmp 0x12164201 */
  goto L_12164201;
L_121640e2:;
  /* 121640e2 cmp dword ptr [0x12180920], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12180920))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121640e9 jne 0x12164106 */
  if (!C.zf) goto L_12164106;
  /* 121640eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121640ee push eax */
  push32((uint32_t)(EAX));
  /* 121640ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121640f2 push ecx */
  push32((uint32_t)(ECX));
  /* 121640f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121640f6 push edx */
  push32((uint32_t)(EDX));
  /* 121640f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121640fa push eax */
  push32((uint32_t)(EAX));
  /* 121640fb call dword ptr [0x121832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832cc))), 0x12164101u);
  /* 12164101 jmp 0x12164201 */
  goto L_12164201;
L_12164106:;
  /* 12164106 cmp dword ptr [0x12180920], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12180920))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216410d jne 0x121641ff */
  if (!C.zf) goto L_121641ff;
  /* 12164113 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164117 jne 0x12164122 */
  if (!C.zf) goto L_12164122;
  /* 12164119 mov ecx, dword ptr [0x121807d0] */
  ECX = (r32((uint32_t)(0x121807d0)));
  /* 1216411f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12164122:;
  /* 12164122 push 0 */
  push32((uint32_t)(0x0u));
  /* 12164124 push 0 */
  push32((uint32_t)(0x0u));
  /* 12164126 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12164129 push edx */
  push32((uint32_t)(EDX));
  /* 1216412a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216412d push eax */
  push32((uint32_t)(EAX));
  /* 1216412e call dword ptr [0x121832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832b4))), 0x12164134u);
  /* 12164134 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12164137 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216413b jne 0x12164144 */
  if (!C.zf) goto L_12164144;
  /* 1216413d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216413f jmp 0x12164201 */
  goto L_12164201;
L_12164144:;
  /* 12164144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1216414b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1216414e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12164150 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164153 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12164155 call 0x12157c30 */
  push32(0x1216415au); f_12157c30();
  /* 1216415a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1216415d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12164160 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12164163 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12164166 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1216416d jmp 0x12164186 */
  goto L_12164186;
  /* 1216416f mov eax, 1 */
  EAX = (0x1u);
  /* 12164174 ret  */
  ESPCHK(0x12164070u, _esp0);
  ESP += 4; return;
  /* 12164175 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12164178 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1216417f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12164186:;
  /* 12164186 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216418a jne 0x12164190 */
  if (!C.zf) goto L_12164190;
  /* 1216418c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216418e jmp 0x12164201 */
  goto L_12164201;
L_12164190:;
  /* 12164190 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12164193 push edx */
  push32((uint32_t)(EDX));
  /* 12164194 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12164197 push eax */
  push32((uint32_t)(EAX));
  /* 12164198 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216419b push ecx */
  push32((uint32_t)(ECX));
  /* 1216419c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216419f push edx */
  push32((uint32_t)(EDX));
  /* 121641a0 call dword ptr [0x121832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832b4))), 0x121641a6u);
  /* 121641a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121641a8 jne 0x121641ae */
  if (!C.zf) goto L_121641ae;
  /* 121641aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121641ac jmp 0x12164201 */
  goto L_12164201;
L_121641ae:;
  /* 121641ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121641b2 jne 0x121641d6 */
  if (!C.zf) goto L_121641d6;
  /* 121641b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121641b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121641b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121641ba push 0 */
  push32((uint32_t)(0x0u));
  /* 121641bc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121641be mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121641c1 push eax */
  push32((uint32_t)(EAX));
  /* 121641c2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121641c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121641ca push ecx */
  push32((uint32_t)(ECX));
  /* 121641cb call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x121641d1u);
  /* 121641d1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121641d4 jmp 0x121641fa */
  goto L_121641fa;
L_121641d6:;
  /* 121641d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121641d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121641da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121641dd push edx */
  push32((uint32_t)(EDX));
  /* 121641de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121641e1 push eax */
  push32((uint32_t)(EAX));
  /* 121641e2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121641e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121641e7 push ecx */
  push32((uint32_t)(ECX));
  /* 121641e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121641ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121641f0 push edx */
  push32((uint32_t)(EDX));
  /* 121641f1 call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x121641f7u);
  /* 121641f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121641fa:;
  /* 121641fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121641fd jmp 0x12164201 */
  goto L_12164201;
L_121641ff:;
  /* 121641ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12164201:;
  /* 12164201 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12164204 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12164207 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1216420e pop edi */
  EDI = (pop32());
  /* 1216420f pop esi */
  ESI = (pop32());
  /* 12164210 pop ebx */
  EBX = (pop32());
  /* 12164211 mov esp, ebp */
  ESP = (EBP);
  /* 12164213 pop ebp */
  EBP = (pop32());
  /* 12164214 ret  */
  ESPCHK(0x12164070u, _esp0);
  ESP += 4; return;
}

/* FUN_10014220 @ 0x12164220 (11 bytes, 6 insns) */
void f_12164220(void) {
  FTRACE(0x12164220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164220 push ebp */
  push32((uint32_t)(EBP));
  /* 12164221 mov ebp, esp */
  EBP = (ESP);
  /* 12164223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164226 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164229 pop ebp */
  EBP = (pop32());
  /* 1216422a ret  */
  ESPCHK(0x12164220u, _esp0);
  ESP += 4; return;
}

/* FUN_10014230 @ 0x12164230 (147 bytes, 43 insns) */
void f_12164230(void) {
  FTRACE(0x12164230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164230 push ebp */
  push32((uint32_t)(EBP));
  /* 12164231 mov ebp, esp */
  EBP = (ESP);
  /* 12164233 push ecx */
  push32((uint32_t)(ECX));
  /* 12164234 cmp dword ptr [0x121807c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216423b jne 0x12164257 */
  if (!C.zf) goto L_12164257;
  /* 1216423d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164241 jl 0x12164252 */
  if ((C.sf!=C.of)) goto L_12164252;
  /* 12164243 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164247 jg 0x12164252 */
  if ((!C.zf&&C.sf==C.of)) goto L_12164252;
  /* 12164249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216424c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216424f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12164252:;
  /* 12164252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164255 jmp 0x121642bf */
  goto L_121642bf;
L_12164257:;
  /* 12164257 push 0x1218094c */
  push32((uint32_t)(0x1218094cu));
  /* 1216425c call dword ptr [0x12183364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183364))), 0x12164262u);
  /* 12164262 cmp dword ptr [0x1218093c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218093c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164269 je 0x12164289 */
  if (C.zf) goto L_12164289;
  /* 1216426b push 0x1218094c */
  push32((uint32_t)(0x1218094cu));
  /* 12164270 call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x12164276u);
  /* 12164276 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12164278 call 0x12158490 */
  push32(0x1216427du); f_12158490();
  /* 1216427d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164280 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12164287 jmp 0x12164290 */
  goto L_12164290;
L_12164289:;
  /* 12164289 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12164290:;
  /* 12164290 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164293 push ecx */
  push32((uint32_t)(ECX));
  /* 12164294 call 0x121642d0 */
  push32(0x12164299u); f_121642d0();
  /* 12164299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216429c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1216429f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121642a3 je 0x121642b1 */
  if (C.zf) goto L_121642b1;
  /* 121642a5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121642a7 call 0x12158530 */
  push32(0x121642acu); f_12158530();
  /* 121642ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121642af jmp 0x121642bc */
  goto L_121642bc;
L_121642b1:;
  /* 121642b1 push 0x1218094c */
  push32((uint32_t)(0x1218094cu));
  /* 121642b6 call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x121642bcu);
L_121642bc:;
  /* 121642bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_121642bf:;
  /* 121642bf mov esp, ebp */
  ESP = (EBP);
  /* 121642c1 pop ebp */
  EBP = (pop32());
  /* 121642c2 ret  */
  ESPCHK(0x12164230u, _esp0);
  ESP += 4; return;
}

/* FUN_100142d0 @ 0x121642d0 (299 bytes, 91 insns) */
void f_121642d0(void) {
  FTRACE(0x121642d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121642d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121642d1 mov ebp, esp */
  EBP = (ESP);
  /* 121642d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121642d6 cmp dword ptr [0x121807c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121642dd jne 0x121642fc */
  if (!C.zf) goto L_121642fc;
  /* 121642df cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121642e3 jl 0x121642f4 */
  if ((C.sf!=C.of)) goto L_121642f4;
  /* 121642e5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121642e9 jg 0x121642f4 */
  if ((!C.zf&&C.sf==C.of)) goto L_121642f4;
  /* 121642eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121642ee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121642f1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121642f4:;
  /* 121642f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121642f7 jmp 0x121643f7 */
  goto L_121643f7;
L_121642fc:;
  /* 121642fc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164303 jge 0x12164343 */
  if ((C.sf==C.of)) goto L_12164343;
  /* 12164305 cmp dword ptr [0x1217eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1217eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216430c jle 0x12164321 */
  if ((C.zf||C.sf!=C.of)) goto L_12164321;
  /* 1216430e push 1 */
  push32((uint32_t)(0x1u));
  /* 12164310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164313 push ecx */
  push32((uint32_t)(ECX));
  /* 12164314 call 0x1215aaa0 */
  push32(0x12164319u); f_1215aaa0();
  /* 12164319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216431c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1216431f jmp 0x12164335 */
  goto L_12164335;
L_12164321:;
  /* 12164321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164324 mov eax, dword ptr [0x1217ec98] */
  EAX = (r32((uint32_t)(0x1217ec98)));
  /* 12164329 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1216432b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1216432f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12164332 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12164335:;
  /* 12164335 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164339 jne 0x12164343 */
  if (!C.zf) goto L_12164343;
  /* 1216433b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216433e jmp 0x121643f7 */
  goto L_121643f7;
L_12164343:;
  /* 12164343 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164346 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12164349 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1216434f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12164355 mov eax, dword ptr [0x1217ec98] */
  EAX = (r32((uint32_t)(0x1217ec98)));
  /* 1216435a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1216435c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12164360 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12164366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12164368 je 0x1216438c */
  if (C.zf) goto L_1216438c;
  /* 1216436a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1216436d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12164370 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12164376 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12164379 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1216437c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1216437f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12164383 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1216438a jmp 0x1216439d */
  goto L_1216439d;
L_1216438c:;
  /* 1216438c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1216438f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12164392 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12164396 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1216439d:;
  /* 1216439d push 1 */
  push32((uint32_t)(0x1u));
  /* 1216439f push 0 */
  push32((uint32_t)(0x0u));
  /* 121643a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 121643a3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 121643a6 push edx */
  push32((uint32_t)(EDX));
  /* 121643a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121643aa push eax */
  push32((uint32_t)(EAX));
  /* 121643ab lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 121643ae push ecx */
  push32((uint32_t)(ECX));
  /* 121643af push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121643b4 mov edx, dword ptr [0x121807c0] */
  EDX = (r32((uint32_t)(0x121807c0)));
  /* 121643ba push edx */
  push32((uint32_t)(EDX));
  /* 121643bb call 0x1215ce80 */
  push32(0x121643c0u); f_1215ce80();
  /* 121643c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121643c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121643c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121643ca jne 0x121643d1 */
  if (!C.zf) goto L_121643d1;
  /* 121643cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121643cf jmp 0x121643f7 */
  goto L_121643f7;
L_121643d1:;
  /* 121643d1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121643d5 jne 0x121643e1 */
  if (!C.zf) goto L_121643e1;
  /* 121643d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121643da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121643df jmp 0x121643f7 */
  goto L_121643f7;
L_121643e1:;
  /* 121643e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121643e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121643e9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 121643ec and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121643f2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 121643f5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_121643f7:;
  /* 121643f7 mov esp, ebp */
  ESP = (EBP);
  /* 121643f9 pop ebp */
  EBP = (pop32());
  /* 121643fa ret  */
  ESPCHK(0x121642d0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12164400 (52 bytes, 19 insns) */
void f_12164400(void) {
  FTRACE(0x12164400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164400 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12164404 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12164408 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1216440a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1216440e jne 0x12164419 */
  if (!C.zf) goto L_12164419;
  /* 12164410 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12164414 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12164416 ret 0x10 */
  ESPCHK(0x12164400u, _esp0);
  ESP += 20; return;
L_12164419:;
  /* 12164419 push ebx */
  push32((uint32_t)(EBX));
  /* 1216441a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1216441c mov ebx, eax */
  EBX = (EAX);
  /* 1216441e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12164422 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12164426 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164428 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1216442c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1216442e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164430 pop ebx */
  EBX = (pop32());
  /* 12164431 ret 0x10 */
  ESPCHK(0x12164400u, _esp0);
  ESP += 20; return;
}

/* FUN_10014440 @ 0x12164440 (46 bytes, 18 insns) */
void f_12164440(void) {
  FTRACE(0x12164440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164440 push ebp */
  push32((uint32_t)(EBP));
  /* 12164441 mov ebp, esp */
  EBP = (ESP);
  /* 12164443 push ecx */
  push32((uint32_t)(ECX));
  /* 12164444 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12164446 call 0x12158490 */
  push32(0x1216444bu); f_12158490();
  /* 1216444b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216444e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164451 push eax */
  push32((uint32_t)(EAX));
  /* 12164452 call 0x12164470 */
  push32(0x12164457u); f_12164470();
  /* 12164457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216445a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1216445d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1216445f call 0x12158530 */
  push32(0x12164464u); f_12158530();
  /* 12164464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216446a mov esp, ebp */
  ESP = (EBP);
  /* 1216446c pop ebp */
  EBP = (pop32());
  /* 1216446d ret  */
  ESPCHK(0x12164440u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12164470 (198 bytes, 69 insns) */
void f_12164470(void) {
  FTRACE(0x12164470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164470 push ebp */
  push32((uint32_t)(EBP));
  /* 12164471 mov ebp, esp */
  EBP = (ESP);
  /* 12164473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164476 mov eax, dword ptr [0x121805e0] */
  EAX = (r32((uint32_t)(0x121805e0)));
  /* 1216447b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1216447e cmp dword ptr [0x121820e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121820e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164485 jne 0x1216448e */
  if (!C.zf) goto L_1216448e;
  /* 12164487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164489 jmp 0x12164532 */
  goto L_12164532;
L_1216448e:;
  /* 1216448e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164492 jne 0x121644b6 */
  if (!C.zf) goto L_121644b6;
  /* 12164494 cmp dword ptr [0x121805e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216449b je 0x121644b6 */
  if (C.zf) goto L_121644b6;
  /* 1216449d call 0x12164590 */
  push32(0x121644a2u); f_12164590();
  /* 121644a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121644a4 je 0x121644ad */
  if (C.zf) goto L_121644ad;
  /* 121644a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121644a8 jmp 0x12164532 */
  goto L_12164532;
L_121644ad:;
  /* 121644ad mov ecx, dword ptr [0x121805e0] */
  ECX = (r32((uint32_t)(0x121805e0)));
  /* 121644b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121644b6:;
  /* 121644b6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121644ba je 0x12164530 */
  if (C.zf) goto L_12164530;
  /* 121644bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121644c0 je 0x12164530 */
  if (C.zf) goto L_12164530;
  /* 121644c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121644c5 push edx */
  push32((uint32_t)(EDX));
  /* 121644c6 call 0x121578c0 */
  push32(0x121644cbu); f_121578c0();
  /* 121644cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121644ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121644d1:;
  /* 121644d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121644d4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121644d7 je 0x12164530 */
  if (C.zf) goto L_12164530;
  /* 121644d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121644dc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121644de push edx */
  push32((uint32_t)(EDX));
  /* 121644df call 0x121578c0 */
  push32(0x121644e4u); f_121578c0();
  /* 121644e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121644e7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121644ea jbe 0x12164525 */
  if ((C.cf||C.zf)) goto L_12164525;
  /* 121644ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121644ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121644f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121644f4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 121644f8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121644fb jne 0x12164525 */
  if (!C.zf) goto L_12164525;
  /* 121644fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164500 push ecx */
  push32((uint32_t)(ECX));
  /* 12164501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164504 push edx */
  push32((uint32_t)(EDX));
  /* 12164505 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164508 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1216450a push ecx */
  push32((uint32_t)(ECX));
  /* 1216450b call 0x12164540 */
  push32(0x12164510u); f_12164540();
  /* 12164510 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12164515 jne 0x12164525 */
  if (!C.zf) goto L_12164525;
  /* 12164517 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1216451a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1216451c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216451f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12164523 jmp 0x12164532 */
  goto L_12164532;
L_12164525:;
  /* 12164525 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164528 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1216452b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1216452e jmp 0x121644d1 */
  goto L_121644d1;
L_12164530:;
  /* 12164530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12164532:;
  /* 12164532 mov esp, ebp */
  ESP = (EBP);
  /* 12164534 pop ebp */
  EBP = (pop32());
  /* 12164535 ret  */
  ESPCHK(0x12164470u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12164540 (79 bytes, 32 insns) */
void f_12164540(void) {
  FTRACE(0x12164540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164540 push ebp */
  push32((uint32_t)(EBP));
  /* 12164541 mov ebp, esp */
  EBP = (ESP);
  /* 12164543 push ecx */
  push32((uint32_t)(ECX));
  /* 12164544 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164548 jne 0x1216454e */
  if (!C.zf) goto L_1216454e;
  /* 1216454a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216454c jmp 0x1216458b */
  goto L_1216458b;
L_1216454e:;
  /* 1216454e mov eax, dword ptr [0x12181ca4] */
  EAX = (r32((uint32_t)(0x12181ca4)));
  /* 12164553 push eax */
  push32((uint32_t)(EAX));
  /* 12164554 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12164557 push ecx */
  push32((uint32_t)(ECX));
  /* 12164558 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1216455b push edx */
  push32((uint32_t)(EDX));
  /* 1216455c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216455f push eax */
  push32((uint32_t)(EAX));
  /* 12164560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164563 push ecx */
  push32((uint32_t)(ECX));
  /* 12164564 push 1 */
  push32((uint32_t)(0x1u));
  /* 12164566 mov edx, dword ptr [0x12181f44] */
  EDX = (r32((uint32_t)(0x12181f44)));
  /* 1216456c push edx */
  push32((uint32_t)(EDX));
  /* 1216456d call 0x12164640 */
  push32(0x12164572u); f_12164640();
  /* 12164572 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164575 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12164578 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216457c jne 0x12164585 */
  if (!C.zf) goto L_12164585;
  /* 1216457e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12164583 jmp 0x1216458b */
  goto L_1216458b;
L_12164585:;
  /* 12164585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164588 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1216458b:;
  /* 1216458b mov esp, ebp */
  ESP = (EBP);
  /* 1216458d pop ebp */
  EBP = (pop32());
  /* 1216458e ret  */
  ESPCHK(0x12164540u, _esp0);
  ESP += 4; return;
}

/* FUN_10014590 @ 0x12164590 (174 bytes, 66 insns) */
void f_12164590(void) {
  FTRACE(0x12164590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164590 push ebp */
  push32((uint32_t)(EBP));
  /* 12164591 mov ebp, esp */
  EBP = (ESP);
  /* 12164593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164596 mov eax, dword ptr [0x121805e8] */
  EAX = (r32((uint32_t)(0x121805e8)));
  /* 1216459b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1216459e:;
  /* 1216459e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121645a1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121645a4 je 0x12164638 */
  if (C.zf) goto L_12164638;
  /* 121645aa push 0 */
  push32((uint32_t)(0x0u));
  /* 121645ac push 0 */
  push32((uint32_t)(0x0u));
  /* 121645ae push 0 */
  push32((uint32_t)(0x0u));
  /* 121645b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121645b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121645b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121645b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121645b9 push eax */
  push32((uint32_t)(EAX));
  /* 121645ba push 0 */
  push32((uint32_t)(0x0u));
  /* 121645bc push 1 */
  push32((uint32_t)(0x1u));
  /* 121645be call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x121645c4u);
  /* 121645c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121645c7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121645cb jne 0x121645d2 */
  if (!C.zf) goto L_121645d2;
  /* 121645cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121645d0 jmp 0x1216463a */
  goto L_1216463a;
L_121645d2:;
  /* 121645d2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 121645d4 push 0x1217ca34 */
  push32((uint32_t)(0x1217ca34u));
  /* 121645d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121645db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121645de push ecx */
  push32((uint32_t)(ECX));
  /* 121645df call 0x12154a90 */
  push32(0x121645e4u); f_12154a90();
  /* 121645e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121645e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121645ea cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121645ee jne 0x121645f5 */
  if (!C.zf) goto L_121645f5;
  /* 121645f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121645f3 jmp 0x1216463a */
  goto L_1216463a;
L_121645f5:;
  /* 121645f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121645f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121645f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121645fc push edx */
  push32((uint32_t)(EDX));
  /* 121645fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164600 push eax */
  push32((uint32_t)(EAX));
  /* 12164601 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12164603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164606 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12164608 push edx */
  push32((uint32_t)(EDX));
  /* 12164609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1216460b push 1 */
  push32((uint32_t)(0x1u));
  /* 1216460d call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x12164613u);
  /* 12164613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12164615 jne 0x1216461c */
  if (!C.zf) goto L_1216461c;
  /* 12164617 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1216461a jmp 0x1216463a */
  goto L_1216463a;
L_1216461c:;
  /* 1216461c push 0 */
  push32((uint32_t)(0x0u));
  /* 1216461e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164621 push eax */
  push32((uint32_t)(EAX));
  /* 12164622 call 0x12164a90 */
  push32(0x12164627u); f_12164a90();
  /* 12164627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1216462a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1216462d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164630 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12164633 jmp 0x1216459e */
  goto L_1216459e;
L_12164638:;
  /* 12164638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1216463a:;
  /* 1216463a mov esp, ebp */
  ESP = (EBP);
  /* 1216463c pop ebp */
  EBP = (pop32());
  /* 1216463d ret  */
  ESPCHK(0x12164590u, _esp0);
  ESP += 4; return;
}

/* FUN_10014640 @ 0x12164640 (970 bytes, 340 insns) */
void f_12164640(void) {
  FTRACE(0x12164640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164640 push ebp */
  push32((uint32_t)(EBP));
  /* 12164641 mov ebp, esp */
  EBP = (ESP);
  /* 12164643 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12164645 push 0x1217ca88 */
  push32((uint32_t)(0x1217ca88u));
  /* 1216464a push 0x1215db98 */
  push32((uint32_t)(0x1215db98u));
  /* 1216464f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12164655 push eax */
  push32((uint32_t)(EAX));
  /* 12164656 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1216465d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164660 push ebx */
  push32((uint32_t)(EBX));
  /* 12164661 push esi */
  push32((uint32_t)(ESI));
  /* 12164662 push edi */
  push32((uint32_t)(EDI));
  /* 12164663 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12164666 cmp dword ptr [0x12180924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216466d jne 0x121646c6 */
  if (!C.zf) goto L_121646c6;
  /* 1216466f push 1 */
  push32((uint32_t)(0x1u));
  /* 12164671 push 0x1217c0e4 */
  push32((uint32_t)(0x1217c0e4u));
  /* 12164676 push 1 */
  push32((uint32_t)(0x1u));
  /* 12164678 push 0x1217c0e4 */
  push32((uint32_t)(0x1217c0e4u));
  /* 1216467d push 0 */
  push32((uint32_t)(0x0u));
  /* 1216467f push 0 */
  push32((uint32_t)(0x0u));
  /* 12164681 call dword ptr [0x121832b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832b0))), 0x12164687u);
  /* 12164687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12164689 je 0x12164697 */
  if (C.zf) goto L_12164697;
  /* 1216468b mov dword ptr [0x12180924], 1 */
  w32((uint32_t)(0x12180924), (0x1u));
  /* 12164695 jmp 0x121646c6 */
  goto L_121646c6;
L_12164697:;
  /* 12164697 push 1 */
  push32((uint32_t)(0x1u));
  /* 12164699 push 0x1217c0e0 */
  push32((uint32_t)(0x1217c0e0u));
  /* 1216469e push 1 */
  push32((uint32_t)(0x1u));
  /* 121646a0 push 0x1217c0e0 */
  push32((uint32_t)(0x1217c0e0u));
  /* 121646a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121646a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121646a9 call dword ptr [0x121832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832bc))), 0x121646afu);
  /* 121646af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121646b1 je 0x121646bf */
  if (C.zf) goto L_121646bf;
  /* 121646b3 mov dword ptr [0x12180924], 2 */
  w32((uint32_t)(0x12180924), (0x2u));
  /* 121646bd jmp 0x121646c6 */
  goto L_121646c6;
L_121646bf:;
  /* 121646bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121646c1 jmp 0x12164a24 */
  goto L_12164a24;
L_121646c6:;
  /* 121646c6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121646ca jle 0x121646df */
  if ((C.zf||C.sf!=C.of)) goto L_121646df;
  /* 121646cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121646cf push eax */
  push32((uint32_t)(EAX));
  /* 121646d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121646d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121646d4 call 0x12164a40 */
  push32(0x121646d9u); f_12164a40();
  /* 121646d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121646dc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_121646df:;
  /* 121646df cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121646e3 jle 0x121646f8 */
  if ((C.zf||C.sf!=C.of)) goto L_121646f8;
  /* 121646e5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121646e8 push edx */
  push32((uint32_t)(EDX));
  /* 121646e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121646ec push eax */
  push32((uint32_t)(EAX));
  /* 121646ed call 0x12164a40 */
  push32(0x121646f2u); f_12164a40();
  /* 121646f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121646f5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_121646f8:;
  /* 121646f8 cmp dword ptr [0x12180924], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12180924))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121646ff jne 0x12164724 */
  if (!C.zf) goto L_12164724;
  /* 12164701 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12164704 push ecx */
  push32((uint32_t)(ECX));
  /* 12164705 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12164708 push edx */
  push32((uint32_t)(EDX));
  /* 12164709 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1216470c push eax */
  push32((uint32_t)(EAX));
  /* 1216470d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12164710 push ecx */
  push32((uint32_t)(ECX));
  /* 12164711 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12164714 push edx */
  push32((uint32_t)(EDX));
  /* 12164715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164718 push eax */
  push32((uint32_t)(EAX));
  /* 12164719 call dword ptr [0x121832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832bc))), 0x1216471fu);
  /* 1216471f jmp 0x12164a24 */
  goto L_12164a24;
L_12164724:;
  /* 12164724 cmp dword ptr [0x12180924], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12180924))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216472b jne 0x12164a22 */
  if (!C.zf) goto L_12164a22;
  /* 12164731 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164735 jne 0x12164740 */
  if (!C.zf) goto L_12164740;
  /* 12164737 mov ecx, dword ptr [0x121807d0] */
  ECX = (r32((uint32_t)(0x121807d0)));
  /* 1216473d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12164740:;
  /* 12164740 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164744 je 0x12164750 */
  if (C.zf) goto L_12164750;
  /* 12164746 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216474a jne 0x121648cc */
  if (!C.zf) goto L_121648cc;
L_12164750:;
  /* 12164750 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12164753 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164756 jne 0x12164762 */
  if (!C.zf) goto L_12164762;
  /* 12164758 mov eax, 2 */
  EAX = (0x2u);
  /* 1216475d jmp 0x12164a24 */
  goto L_12164a24;
L_12164762:;
  /* 12164762 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164766 jle 0x12164772 */
  if ((C.zf||C.sf!=C.of)) goto L_12164772;
  /* 12164768 mov eax, 1 */
  EAX = (0x1u);
  /* 1216476d jmp 0x12164a24 */
  goto L_12164a24;
L_12164772:;
  /* 12164772 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164776 jle 0x12164782 */
  if ((C.zf||C.sf!=C.of)) goto L_12164782;
  /* 12164778 mov eax, 3 */
  EAX = (0x3u);
  /* 1216477d jmp 0x12164a24 */
  goto L_12164a24;
L_12164782:;
  /* 12164782 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12164785 push eax */
  push32((uint32_t)(EAX));
  /* 12164786 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12164789 push ecx */
  push32((uint32_t)(ECX));
  /* 1216478a call dword ptr [0x12183308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183308))), 0x12164790u);
  /* 12164790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12164792 jne 0x1216479b */
  if (!C.zf) goto L_1216479b;
  /* 12164794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164796 jmp 0x12164a24 */
  goto L_12164a24;
L_1216479b:;
  /* 1216479b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216479f jne 0x121647a7 */
  if (!C.zf) goto L_121647a7;
  /* 121647a1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121647a5 je 0x121647d4 */
  if (C.zf) goto L_121647d4;
L_121647a7:;
  /* 121647a7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121647ab jne 0x121647b3 */
  if (!C.zf) goto L_121647b3;
  /* 121647ad cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121647b1 je 0x121647d4 */
  if (C.zf) goto L_121647d4;
L_121647b3:;
  /* 121647b3 push 0x1217ca48 */
  push32((uint32_t)(0x1217ca48u));
  /* 121647b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121647ba push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 121647bf push 0x1217ca40 */
  push32((uint32_t)(0x1217ca40u));
  /* 121647c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121647c6 call 0x12153b50 */
  push32(0x121647cbu); f_12153b50();
  /* 121647cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121647ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121647d1 jne 0x121647d4 */
  if (!C.zf) goto L_121647d4;
  /* 121647d3 int3  */
  x86_unimpl("int3 @ 0x121647d3");
L_121647d4:;
  /* 121647d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121647d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121647d8 jne 0x1216479b */
  if (!C.zf) goto L_1216479b;
  /* 121647da cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121647de jle 0x12164853 */
  if ((C.zf||C.sf!=C.of)) goto L_12164853;
  /* 121647e0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121647e4 jae 0x121647f0 */
  if (!C.cf) goto L_121647f0;
  /* 121647e6 mov eax, 3 */
  EAX = (0x3u);
  /* 121647eb jmp 0x12164a24 */
  goto L_12164a24;
L_121647f0:;
  /* 121647f0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 121647f3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 121647f6 jmp 0x12164801 */
  goto L_12164801;
L_121647f8:;
  /* 121647f8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 121647fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121647fe mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12164801:;
  /* 12164801 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12164804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164806 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12164808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1216480a je 0x12164849 */
  if (C.zf) goto L_12164849;
  /* 1216480c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1216480f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12164811 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12164814 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12164816 je 0x12164849 */
  if (C.zf) goto L_12164849;
  /* 12164818 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216481b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1216481d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1216481f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12164822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164824 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12164826 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164828 jl 0x12164847 */
  if ((C.sf!=C.of)) goto L_12164847;
  /* 1216482a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1216482d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1216482f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12164831 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12164834 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12164836 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12164839 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216483b jg 0x12164847 */
  if ((!C.zf&&C.sf==C.of)) goto L_12164847;
  /* 1216483d mov eax, 2 */
  EAX = (0x2u);
  /* 12164842 jmp 0x12164a24 */
  goto L_12164a24;
L_12164847:;
  /* 12164847 jmp 0x121647f8 */
  goto L_121647f8;
L_12164849:;
  /* 12164849 mov eax, 3 */
  EAX = (0x3u);
  /* 1216484e jmp 0x12164a24 */
  goto L_12164a24;
L_12164853:;
  /* 12164853 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164857 jle 0x121648cc */
  if ((C.zf||C.sf!=C.of)) goto L_121648cc;
  /* 12164859 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216485d jae 0x12164869 */
  if (!C.cf) goto L_12164869;
  /* 1216485f mov eax, 1 */
  EAX = (0x1u);
  /* 12164864 jmp 0x12164a24 */
  goto L_12164a24;
L_12164869:;
  /* 12164869 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1216486c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1216486f jmp 0x1216487a */
  goto L_1216487a;
L_12164871:;
  /* 12164871 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12164874 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164877 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1216487a:;
  /* 1216487a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1216487d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1216487f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12164881 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12164883 je 0x121648c2 */
  if (C.zf) goto L_121648c2;
  /* 12164885 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12164888 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1216488a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1216488d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1216488f je 0x121648c2 */
  if (C.zf) goto L_121648c2;
  /* 12164891 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12164894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164896 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12164898 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1216489b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1216489d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1216489f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121648a1 jl 0x121648c0 */
  if ((C.sf!=C.of)) goto L_121648c0;
  /* 121648a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121648a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121648a8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121648aa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 121648ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121648af mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121648b2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121648b4 jg 0x121648c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_121648c0;
  /* 121648b6 mov eax, 2 */
  EAX = (0x2u);
  /* 121648bb jmp 0x12164a24 */
  goto L_12164a24;
L_121648c0:;
  /* 121648c0 jmp 0x12164871 */
  goto L_12164871;
L_121648c2:;
  /* 121648c2 mov eax, 1 */
  EAX = (0x1u);
  /* 121648c7 jmp 0x12164a24 */
  goto L_12164a24;
L_121648cc:;
  /* 121648cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121648ce push 0 */
  push32((uint32_t)(0x0u));
  /* 121648d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121648d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121648d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121648d7 push edx */
  push32((uint32_t)(EDX));
  /* 121648d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 121648da mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121648dd push eax */
  push32((uint32_t)(EAX));
  /* 121648de call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x121648e4u);
  /* 121648e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121648e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121648eb jne 0x121648f4 */
  if (!C.zf) goto L_121648f4;
  /* 121648ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121648ef jmp 0x12164a24 */
  goto L_12164a24;
L_121648f4:;
  /* 121648f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121648fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121648fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12164900 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164903 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12164905 call 0x12157c30 */
  push32(0x1216490au); f_12157c30();
  /* 1216490a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1216490d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12164910 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12164913 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12164916 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1216491d jmp 0x12164936 */
  goto L_12164936;
  /* 1216491f mov eax, 1 */
  EAX = (0x1u);
  /* 12164924 ret  */
  ESPCHK(0x12164640u, _esp0);
  ESP += 4; return;
  /* 12164925 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12164928 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1216492f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12164936:;
  /* 12164936 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1216493a jne 0x12164943 */
  if (!C.zf) goto L_12164943;
  /* 1216493c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216493e jmp 0x12164a24 */
  goto L_12164a24;
L_12164943:;
  /* 12164943 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12164946 push edx */
  push32((uint32_t)(EDX));
  /* 12164947 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1216494a push eax */
  push32((uint32_t)(EAX));
  /* 1216494b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1216494e push ecx */
  push32((uint32_t)(ECX));
  /* 1216494f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12164952 push edx */
  push32((uint32_t)(EDX));
  /* 12164953 push 1 */
  push32((uint32_t)(0x1u));
  /* 12164955 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12164958 push eax */
  push32((uint32_t)(EAX));
  /* 12164959 call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x1216495fu);
  /* 1216495f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12164961 jne 0x1216496a */
  if (!C.zf) goto L_1216496a;
  /* 12164963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164965 jmp 0x12164a24 */
  goto L_12164a24;
L_1216496a:;
  /* 1216496a push 0 */
  push32((uint32_t)(0x0u));
  /* 1216496c push 0 */
  push32((uint32_t)(0x0u));
  /* 1216496e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12164971 push ecx */
  push32((uint32_t)(ECX));
  /* 12164972 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12164975 push edx */
  push32((uint32_t)(EDX));
  /* 12164976 push 9 */
  push32((uint32_t)(0x9u));
  /* 12164978 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1216497b push eax */
  push32((uint32_t)(EAX));
  /* 1216497c call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x12164982u);
  /* 12164982 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12164985 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164989 jne 0x12164992 */
  if (!C.zf) goto L_12164992;
  /* 1216498b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1216498d jmp 0x12164a24 */
  goto L_12164a24;
L_12164992:;
  /* 12164992 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12164999 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1216499c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1216499e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121649a1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121649a3 call 0x12157c30 */
  push32(0x121649a8u); f_12157c30();
  /* 121649a8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 121649ab mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121649ae mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 121649b1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 121649b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121649bb jmp 0x121649d4 */
  goto L_121649d4;
  /* 121649bd mov eax, 1 */
  EAX = (0x1u);
  /* 121649c2 ret  */
  ESPCHK(0x12164640u, _esp0);
  ESP += 4; return;
  /* 121649c3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121649c6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 121649cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121649d4:;
  /* 121649d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121649d8 jne 0x121649de */
  if (!C.zf) goto L_121649de;
  /* 121649da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121649dc jmp 0x12164a24 */
  goto L_12164a24;
L_121649de:;
  /* 121649de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121649e1 push edx */
  push32((uint32_t)(EDX));
  /* 121649e2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121649e5 push eax */
  push32((uint32_t)(EAX));
  /* 121649e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121649e9 push ecx */
  push32((uint32_t)(ECX));
  /* 121649ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121649ed push edx */
  push32((uint32_t)(EDX));
  /* 121649ee push 1 */
  push32((uint32_t)(0x1u));
  /* 121649f0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121649f3 push eax */
  push32((uint32_t)(EAX));
  /* 121649f4 call dword ptr [0x121832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832fc))), 0x121649fau);
  /* 121649fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121649fc jne 0x12164a02 */
  if (!C.zf) goto L_12164a02;
  /* 121649fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164a00 jmp 0x12164a24 */
  goto L_12164a24;
L_12164a02:;
  /* 12164a02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12164a05 push ecx */
  push32((uint32_t)(ECX));
  /* 12164a06 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12164a09 push edx */
  push32((uint32_t)(EDX));
  /* 12164a0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12164a0d push eax */
  push32((uint32_t)(EAX));
  /* 12164a0e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12164a11 push ecx */
  push32((uint32_t)(ECX));
  /* 12164a12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12164a15 push edx */
  push32((uint32_t)(EDX));
  /* 12164a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164a19 push eax */
  push32((uint32_t)(EAX));
  /* 12164a1a call dword ptr [0x121832b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832b0))), 0x12164a20u);
  /* 12164a20 jmp 0x12164a24 */
  goto L_12164a24;
L_12164a22:;
  /* 12164a22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12164a24:;
  /* 12164a24 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12164a27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12164a2a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12164a31 pop edi */
  EDI = (pop32());
  /* 12164a32 pop esi */
  ESI = (pop32());
  /* 12164a33 pop ebx */
  EBX = (pop32());
  /* 12164a34 mov esp, ebp */
  ESP = (EBP);
  /* 12164a36 pop ebp */
  EBP = (pop32());
  /* 12164a37 ret  */
  ESPCHK(0x12164640u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a40 @ 0x12164a40 (80 bytes, 32 insns) */
void f_12164a40(void) {
  FTRACE(0x12164a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12164a41 mov ebp, esp */
  EBP = (ESP);
  /* 12164a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164a46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12164a49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12164a4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164a4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12164a52:;
  /* 12164a52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164a55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164a58 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164a5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12164a5e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12164a60 je 0x12164a77 */
  if (C.zf) goto L_12164a77;
  /* 12164a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164a65 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12164a68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12164a6a je 0x12164a77 */
  if (C.zf) goto L_12164a77;
  /* 12164a6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164a6f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164a72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12164a75 jmp 0x12164a52 */
  goto L_12164a52;
L_12164a77:;
  /* 12164a77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164a7a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12164a7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12164a7f jne 0x12164a89 */
  if (!C.zf) goto L_12164a89;
  /* 12164a81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164a84 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164a87 jmp 0x12164a8c */
  goto L_12164a8c;
L_12164a89:;
  /* 12164a89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12164a8c:;
  /* 12164a8c mov esp, ebp */
  ESP = (EBP);
  /* 12164a8e pop ebp */
  EBP = (pop32());
  /* 12164a8f ret  */
  ESPCHK(0x12164a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a90 @ 0x12164a90 (736 bytes, 224 insns) */
void f_12164a90(void) {
  FTRACE(0x12164a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12164a91 mov ebp, esp */
  EBP = (ESP);
  /* 12164a93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164a96 push esi */
  push32((uint32_t)(ESI));
  /* 12164a97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164a9b je 0x12164abc */
  if (C.zf) goto L_12164abc;
  /* 12164a9d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12164a9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164aa2 push eax */
  push32((uint32_t)(EAX));
  /* 12164aa3 call 0x12164ee0 */
  push32(0x12164aa8u); f_12164ee0();
  /* 12164aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164aab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12164aae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164ab2 je 0x12164abc */
  if (C.zf) goto L_12164abc;
  /* 12164ab4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164ab7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164aba jne 0x12164ac4 */
  if (!C.zf) goto L_12164ac4;
L_12164abc:;
  /* 12164abc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12164abf jmp 0x12164d6b */
  goto L_12164d6b;
L_12164ac4:;
  /* 12164ac4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12164ac7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12164acb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12164acd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164acf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12164ad0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12164ad3 mov ecx, dword ptr [0x121805e0] */
  ECX = (r32((uint32_t)(0x121805e0)));
  /* 12164ad9 cmp ecx, dword ptr [0x121805e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121805e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164adf jne 0x12164af5 */
  if (!C.zf) goto L_12164af5;
  /* 12164ae1 mov edx, dword ptr [0x121805e0] */
  EDX = (r32((uint32_t)(0x121805e0)));
  /* 12164ae7 push edx */
  push32((uint32_t)(EDX));
  /* 12164ae8 call 0x12164df0 */
  push32(0x12164aedu); f_12164df0();
  /* 12164aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164af0 mov dword ptr [0x121805e0], eax */
  w32((uint32_t)(0x121805e0), (EAX));
L_12164af5:;
  /* 12164af5 cmp dword ptr [0x121805e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164afc jne 0x12164bb5 */
  if (!C.zf) goto L_12164bb5;
  /* 12164b02 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164b06 je 0x12164b27 */
  if (C.zf) goto L_12164b27;
  /* 12164b08 cmp dword ptr [0x121805e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164b0f je 0x12164b27 */
  if (C.zf) goto L_12164b27;
  /* 12164b11 call 0x12164590 */
  push32(0x12164b16u); f_12164590();
  /* 12164b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12164b18 je 0x12164b22 */
  if (C.zf) goto L_12164b22;
  /* 12164b1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12164b1d jmp 0x12164d6b */
  goto L_12164d6b;
L_12164b22:;
  /* 12164b22 jmp 0x12164bb5 */
  goto L_12164bb5;
L_12164b27:;
  /* 12164b27 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164b2b je 0x12164b34 */
  if (C.zf) goto L_12164b34;
  /* 12164b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164b2f jmp 0x12164d6b */
  goto L_12164d6b;
L_12164b34:;
  /* 12164b34 cmp dword ptr [0x121805e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164b3b jne 0x12164b74 */
  if (!C.zf) goto L_12164b74;
  /* 12164b3d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12164b42 push 0x1217caa0 */
  push32((uint32_t)(0x1217caa0u));
  /* 12164b47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12164b49 push 4 */
  push32((uint32_t)(0x4u));
  /* 12164b4b call 0x12154a90 */
  push32(0x12164b50u); f_12154a90();
  /* 12164b50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164b53 mov dword ptr [0x121805e0], eax */
  w32((uint32_t)(0x121805e0), (EAX));
  /* 12164b58 cmp dword ptr [0x121805e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164b5f jne 0x12164b69 */
  if (!C.zf) goto L_12164b69;
  /* 12164b61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12164b64 jmp 0x12164d6b */
  goto L_12164d6b;
L_12164b69:;
  /* 12164b69 mov eax, dword ptr [0x121805e0] */
  EAX = (r32((uint32_t)(0x121805e0)));
  /* 12164b6e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12164b74:;
  /* 12164b74 cmp dword ptr [0x121805e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164b7b jne 0x12164bb5 */
  if (!C.zf) goto L_12164bb5;
  /* 12164b7d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12164b82 push 0x1217caa0 */
  push32((uint32_t)(0x1217caa0u));
  /* 12164b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12164b89 push 4 */
  push32((uint32_t)(0x4u));
  /* 12164b8b call 0x12154a90 */
  push32(0x12164b90u); f_12154a90();
  /* 12164b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164b93 mov dword ptr [0x121805e8], eax */
  w32((uint32_t)(0x121805e8), (EAX));
  /* 12164b98 cmp dword ptr [0x121805e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164b9f jne 0x12164ba9 */
  if (!C.zf) goto L_12164ba9;
  /* 12164ba1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12164ba4 jmp 0x12164d6b */
  goto L_12164d6b;
L_12164ba9:;
  /* 12164ba9 mov ecx, dword ptr [0x121805e8] */
  ECX = (r32((uint32_t)(0x121805e8)));
  /* 12164baf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12164bb5:;
  /* 12164bb5 mov edx, dword ptr [0x121805e0] */
  EDX = (r32((uint32_t)(0x121805e0)));
  /* 12164bbb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12164bbe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12164bc1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164bc4 push eax */
  push32((uint32_t)(EAX));
  /* 12164bc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12164bc9 call 0x12164d70 */
  push32(0x12164bceu); f_12164d70();
  /* 12164bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164bd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12164bd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164bd8 jl 0x12164c71 */
  if ((C.sf!=C.of)) goto L_12164c71;
  /* 12164bde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164be1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164be4 je 0x12164c71 */
  if (C.zf) goto L_12164c71;
  /* 12164bea cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164bee je 0x12164c63 */
  if (C.zf) goto L_12164c63;
  /* 12164bf0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12164bf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164bf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164bf8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12164bfb push edx */
  push32((uint32_t)(EDX));
  /* 12164bfc call 0x12155520 */
  push32(0x12164c01u); f_12155520();
  /* 12164c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164c04 jmp 0x12164c0f */
  goto L_12164c0f;
L_12164c06:;
  /* 12164c06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164c09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164c0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12164c0f:;
  /* 12164c0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164c12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164c15 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164c19 je 0x12164c30 */
  if (C.zf) goto L_12164c30;
  /* 12164c1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164c1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164c21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164c24 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12164c27 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12164c2b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12164c2e jmp 0x12164c06 */
  goto L_12164c06;
L_12164c30:;
  /* 12164c30 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12164c35 push 0x1217caa0 */
  push32((uint32_t)(0x1217caa0u));
  /* 12164c3a push 2 */
  push32((uint32_t)(0x2u));
  /* 12164c3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164c3f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12164c42 push eax */
  push32((uint32_t)(EAX));
  /* 12164c43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164c46 push ecx */
  push32((uint32_t)(ECX));
  /* 12164c47 call 0x12154f20 */
  push32(0x12164c4cu); f_12154f20();
  /* 12164c4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164c4f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12164c52 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164c56 je 0x12164c61 */
  if (C.zf) goto L_12164c61;
  /* 12164c58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164c5b mov dword ptr [0x121805e0], edx */
  w32((uint32_t)(0x121805e0), (EDX));
L_12164c61:;
  /* 12164c61 jmp 0x12164c6f */
  goto L_12164c6f;
L_12164c63:;
  /* 12164c63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164c66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164c69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164c6c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12164c6f:;
  /* 12164c6f jmp 0x12164ce4 */
  goto L_12164ce4;
L_12164c71:;
  /* 12164c71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164c75 jne 0x12164cdd */
  if (!C.zf) goto L_12164cdd;
  /* 12164c77 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164c7b jge 0x12164c85 */
  if ((C.sf==C.of)) goto L_12164c85;
  /* 12164c7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164c80 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12164c82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12164c85:;
  /* 12164c85 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12164c8a push 0x1217caa0 */
  push32((uint32_t)(0x1217caa0u));
  /* 12164c8f push 2 */
  push32((uint32_t)(0x2u));
  /* 12164c91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164c94 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12164c9b push edx */
  push32((uint32_t)(EDX));
  /* 12164c9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164c9f push eax */
  push32((uint32_t)(EAX));
  /* 12164ca0 call 0x12154f20 */
  push32(0x12164ca5u); f_12154f20();
  /* 12164ca5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164ca8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12164cab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164caf jne 0x12164cb9 */
  if (!C.zf) goto L_12164cb9;
  /* 12164cb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12164cb4 jmp 0x12164d6b */
  goto L_12164d6b;
L_12164cb9:;
  /* 12164cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164cbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164cbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164cc2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12164cc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164cc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164ccb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12164cd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164cd6 mov dword ptr [0x121805e0], eax */
  w32((uint32_t)(0x121805e0), (EAX));
  /* 12164cdb jmp 0x12164ce4 */
  goto L_12164ce4;
L_12164cdd:;
  /* 12164cdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164cdf jmp 0x12164d6b */
  goto L_12164d6b;
L_12164ce4:;
  /* 12164ce4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164ce8 je 0x12164d69 */
  if (C.zf) goto L_12164d69;
  /* 12164cea push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12164cef push 0x1217caa0 */
  push32((uint32_t)(0x1217caa0u));
  /* 12164cf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12164cf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 12164cfa call 0x121578c0 */
  push32(0x12164cffu); f_121578c0();
  /* 12164cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164d02 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164d05 push eax */
  push32((uint32_t)(EAX));
  /* 12164d06 call 0x12154a90 */
  push32(0x12164d0bu); f_12154a90();
  /* 12164d0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164d0e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12164d11 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164d15 je 0x12164d69 */
  if (C.zf) goto L_12164d69;
  /* 12164d17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164d1a push edx */
  push32((uint32_t)(EDX));
  /* 12164d1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12164d1e push eax */
  push32((uint32_t)(EAX));
  /* 12164d1f call 0x12157a40 */
  push32(0x12164d24u); f_12157a40();
  /* 12164d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164d27 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12164d2a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164d2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12164d30 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164d32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12164d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164d38 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12164d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164d41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12164d44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12164d47 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12164d49 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164d4b not edx */
  EDX = (~(EDX));
  /* 12164d4d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12164d50 push edx */
  push32((uint32_t)(EDX));
  /* 12164d51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12164d54 push eax */
  push32((uint32_t)(EAX));
  /* 12164d55 call dword ptr [0x121832ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832ac))), 0x12164d5bu);
  /* 12164d5b push 2 */
  push32((uint32_t)(0x2u));
  /* 12164d5d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12164d60 push ecx */
  push32((uint32_t)(ECX));
  /* 12164d61 call 0x12155520 */
  push32(0x12164d66u); f_12155520();
  /* 12164d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12164d69:;
  /* 12164d69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12164d6b:;
  /* 12164d6b pop esi */
  ESI = (pop32());
  /* 12164d6c mov esp, ebp */
  ESP = (EBP);
  /* 12164d6e pop ebp */
  EBP = (pop32());
  /* 12164d6f ret  */
  ESPCHK(0x12164a90u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12164d70 (124 bytes, 47 insns) */
void f_12164d70(void) {
  FTRACE(0x12164d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12164d71 mov ebp, esp */
  EBP = (ESP);
  /* 12164d73 push ecx */
  push32((uint32_t)(ECX));
  /* 12164d74 mov eax, dword ptr [0x121805e0] */
  EAX = (r32((uint32_t)(0x121805e0)));
  /* 12164d79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12164d7c jmp 0x12164d87 */
  goto L_12164d87;
L_12164d7e:;
  /* 12164d7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164d81 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164d84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12164d87:;
  /* 12164d87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164d8a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164d8d je 0x12164dda */
  if (C.zf) goto L_12164dda;
  /* 12164d8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12164d92 push eax */
  push32((uint32_t)(EAX));
  /* 12164d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164d96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12164d98 push edx */
  push32((uint32_t)(EDX));
  /* 12164d99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164d9c push eax */
  push32((uint32_t)(EAX));
  /* 12164d9d call 0x12164540 */
  push32(0x12164da2u); f_12164540();
  /* 12164da2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12164da7 jne 0x12164dd8 */
  if (!C.zf) goto L_12164dd8;
  /* 12164da9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164dac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12164dae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12164db1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12164db5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164db8 je 0x12164dca */
  if (C.zf) goto L_12164dca;
  /* 12164dba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164dbd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12164dbf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12164dc2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12164dc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12164dc8 jne 0x12164dd8 */
  if (!C.zf) goto L_12164dd8;
L_12164dca:;
  /* 12164dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164dcd sub eax, dword ptr [0x121805e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121805e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164dd3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12164dd6 jmp 0x12164de8 */
  goto L_12164de8;
L_12164dd8:;
  /* 12164dd8 jmp 0x12164d7e */
  goto L_12164d7e;
L_12164dda:;
  /* 12164dda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164ddd sub eax, dword ptr [0x121805e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121805e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164de3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12164de6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12164de8:;
  /* 12164de8 mov esp, ebp */
  ESP = (EBP);
  /* 12164dea pop ebp */
  EBP = (pop32());
  /* 12164deb ret  */
  ESPCHK(0x12164d70u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12164df0 (238 bytes, 80 insns) */
void f_12164df0(void) {
  FTRACE(0x12164df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12164df1 mov ebp, esp */
  EBP = (ESP);
  /* 12164df3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164df6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12164dfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164e00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12164e03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164e07 jne 0x12164e10 */
  if (!C.zf) goto L_12164e10;
  /* 12164e09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164e0b jmp 0x12164eda */
  goto L_12164eda;
L_12164e10:;
  /* 12164e10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164e13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12164e15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164e18 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164e1b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12164e1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12164e20 je 0x12164e2d */
  if (C.zf) goto L_12164e2d;
  /* 12164e22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12164e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164e28 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12164e2b jmp 0x12164e10 */
  goto L_12164e10;
L_12164e2d:;
  /* 12164e2d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12164e32 push 0x1217caa0 */
  push32((uint32_t)(0x1217caa0u));
  /* 12164e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12164e39 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12164e3c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12164e43 push eax */
  push32((uint32_t)(EAX));
  /* 12164e44 call 0x12154a90 */
  push32(0x12164e49u); f_12154a90();
  /* 12164e49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164e4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12164e4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164e52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12164e55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164e59 jne 0x12164e65 */
  if (!C.zf) goto L_12164e65;
  /* 12164e5b push 9 */
  push32((uint32_t)(0x9u));
  /* 12164e5d call 0x12153a00 */
  push32(0x12164e62u); f_12153a00();
  /* 12164e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12164e65:;
  /* 12164e65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164e68 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12164e6b:;
  /* 12164e6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164e6e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164e71 je 0x12164ece */
  if (C.zf) goto L_12164ece;
  /* 12164e73 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12164e78 push 0x1217caa0 */
  push32((uint32_t)(0x1217caa0u));
  /* 12164e7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12164e7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164e82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12164e84 push edx */
  push32((uint32_t)(EDX));
  /* 12164e85 call 0x121578c0 */
  push32(0x12164e8au); f_121578c0();
  /* 12164e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164e8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164e90 push eax */
  push32((uint32_t)(EAX));
  /* 12164e91 call 0x12154a90 */
  push32(0x12164e96u); f_12154a90();
  /* 12164e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164e99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164e9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12164e9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164ea1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164ea4 je 0x12164eba */
  if (C.zf) goto L_12164eba;
  /* 12164ea6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164ea9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12164eab push ecx */
  push32((uint32_t)(ECX));
  /* 12164eac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164eaf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12164eb1 push eax */
  push32((uint32_t)(EAX));
  /* 12164eb2 call 0x12157a40 */
  push32(0x12164eb7u); f_12157a40();
  /* 12164eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12164eba:;
  /* 12164eba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12164ebd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164ec0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12164ec3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164ec6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164ec9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12164ecc jmp 0x12164e6b */
  goto L_12164e6b;
L_12164ece:;
  /* 12164ece mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12164ed1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12164ed7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12164eda:;
  /* 12164eda mov esp, ebp */
  ESP = (EBP);
  /* 12164edc pop ebp */
  EBP = (pop32());
  /* 12164edd ret  */
  ESPCHK(0x12164df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ee0 @ 0x12164ee0 (237 bytes, 81 insns) */
void f_12164ee0(void) {
  FTRACE(0x12164ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12164ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12164ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12164ee4 cmp dword ptr [0x12181d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12181d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164eeb jne 0x12164f02 */
  if (!C.zf) goto L_12164f02;
  /* 12164eed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12164ef0 push eax */
  push32((uint32_t)(EAX));
  /* 12164ef1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 12164ef5 call 0x12164fe0 */
  push32(0x12164efau); f_12164fe0();
  /* 12164efa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164efd jmp 0x12164fc9 */
  goto L_12164fc9;
L_12164f02:;
  /* 12164f02 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12164f04 call 0x12158490 */
  push32(0x12164f09u); f_12158490();
  /* 12164f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164f0c jmp 0x12164f17 */
  goto L_12164f17;
L_12164f0e:;
  /* 12164f0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164f11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164f14 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12164f17:;
  /* 12164f17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164f1a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12164f1e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12164f22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164f25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12164f2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12164f2d je 0x12164fab */
  if (C.zf) goto L_12164fab;
  /* 12164f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164f32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12164f37 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12164f39 mov cl, byte ptr [eax + 0x12181e41] */
  CL = (r8((uint32_t)(EAX + 0x12181e41)));
  /* 12164f3f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12164f42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12164f44 je 0x12164f96 */
  if (C.zf) goto L_12164f96;
  /* 12164f46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164f49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12164f4c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12164f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164f52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12164f54 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12164f56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12164f58 jne 0x12164f68 */
  if (!C.zf) goto L_12164f68;
  /* 12164f5a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12164f5c call 0x12158530 */
  push32(0x12164f61u); f_12158530();
  /* 12164f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164f66 jmp 0x12164fc9 */
  goto L_12164fc9;
L_12164f68:;
  /* 12164f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164f6b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12164f71 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12164f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164f77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12164f79 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12164f7b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12164f7d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164f80 jne 0x12164f94 */
  if (!C.zf) goto L_12164f94;
  /* 12164f82 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12164f84 call 0x12158530 */
  push32(0x12164f89u); f_12158530();
  /* 12164f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164f8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164f8f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12164f92 jmp 0x12164fc9 */
  goto L_12164fc9;
L_12164f94:;
  /* 12164f94 jmp 0x12164fa6 */
  goto L_12164fa6;
L_12164f96:;
  /* 12164f96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164f99 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12164f9f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164fa2 jne 0x12164fa6 */
  if (!C.zf) goto L_12164fa6;
  /* 12164fa4 jmp 0x12164fab */
  goto L_12164fab;
L_12164fa6:;
  /* 12164fa6 jmp 0x12164f0e */
  goto L_12164f0e;
L_12164fab:;
  /* 12164fab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12164fad call 0x12158530 */
  push32(0x12164fb2u); f_12158530();
  /* 12164fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12164fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12164fb8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12164fbd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12164fc0 jne 0x12164fc7 */
  if (!C.zf) goto L_12164fc7;
  /* 12164fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12164fc5 jmp 0x12164fc9 */
  goto L_12164fc9;
L_12164fc7:;
  /* 12164fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12164fc9:;
  /* 12164fc9 mov esp, ebp */
  ESP = (EBP);
  /* 12164fcb pop ebp */
  EBP = (pop32());
  /* 12164fcc ret  */
  ESPCHK(0x12164ee0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12164fe0 (193 bytes, 87 insns) */
void f_12164fe0(void) {
  FTRACE(0x12164fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12164fe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12164fe2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12164fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 12164fe7 mov ebx, eax */
  EBX = (EAX);
  /* 12164fe9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12164fec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12164ff0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12164ff6 je 0x1216500b */
  if (C.zf) goto L_1216500b;
L_12164ff8:;
  /* 12164ff8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12164ffa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12164ffb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12164ffd je 0x12164fd0 */
  if (C.zf) { jmp_ind(0x12164fd0u); return; }
  /* 12164fff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12165001 je 0x12165054 */
  if (C.zf) goto L_12165054;
  /* 12165003 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12165009 jne 0x12164ff8 */
  if (!C.zf) goto L_12164ff8;
L_1216500b:;
  /* 1216500b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1216500d push edi */
  push32((uint32_t)(EDI));
  /* 1216500e mov eax, ebx */
  EAX = (EBX);
  /* 12165010 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12165013 push esi */
  push32((uint32_t)(ESI));
  /* 12165014 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12165016:;
  /* 12165016 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12165018 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1216501d mov eax, ecx */
  EAX = (ECX);
  /* 1216501f mov esi, edi */
  ESI = (EDI);
  /* 12165021 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12165023 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12165025 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12165027 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1216502a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1216502d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1216502f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12165031 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12165034 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1216503a jne 0x12165058 */
  if (!C.zf) goto L_12165058;
  /* 1216503c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12165041 je 0x12165016 */
  if (C.zf) goto L_12165016;
  /* 12165043 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12165048 jne 0x12165052 */
  if (!C.zf) goto L_12165052;
  /* 1216504a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12165050 jne 0x12165016 */
  if (!C.zf) goto L_12165016;
L_12165052:;
  /* 12165052 pop esi */
  ESI = (pop32());
  /* 12165053 pop edi */
  EDI = (pop32());
L_12165054:;
  /* 12165054 pop ebx */
  EBX = (pop32());
  /* 12165055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12165057 ret  */
  ESPCHK(0x12164fe0u, _esp0);
  ESP += 4; return;
L_12165058:;
  /* 12165058 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1216505b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1216505d je 0x12165095 */
  if (C.zf) goto L_12165095;
  /* 1216505f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12165061 je 0x12165052 */
  if (C.zf) goto L_12165052;
  /* 12165063 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12165065 je 0x1216508e */
  if (C.zf) goto L_1216508e;
  /* 12165067 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12165069 je 0x12165052 */
  if (C.zf) goto L_12165052;
  /* 1216506b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1216506e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12165070 je 0x12165087 */
  if (C.zf) goto L_12165087;
  /* 12165072 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12165074 je 0x12165052 */
  if (C.zf) goto L_12165052;
  /* 12165076 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12165078 je 0x12165080 */
  if (C.zf) goto L_12165080;
  /* 1216507a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1216507c je 0x12165052 */
  if (C.zf) goto L_12165052;
  /* 1216507e jmp 0x12165016 */
  goto L_12165016;
L_12165080:;
  /* 12165080 pop esi */
  ESI = (pop32());
  /* 12165081 pop edi */
  EDI = (pop32());
  /* 12165082 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12165085 pop ebx */
  EBX = (pop32());
  /* 12165086 ret  */
  ESPCHK(0x12164fe0u, _esp0);
  ESP += 4; return;
L_12165087:;
  /* 12165087 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1216508a pop esi */
  ESI = (pop32());
  /* 1216508b pop edi */
  EDI = (pop32());
  /* 1216508c pop ebx */
  EBX = (pop32());
  /* 1216508d ret  */
  ESPCHK(0x12164fe0u, _esp0);
  ESP += 4; return;
L_1216508e:;
  /* 1216508e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12165091 pop esi */
  ESI = (pop32());
  /* 12165092 pop edi */
  EDI = (pop32());
  /* 12165093 pop ebx */
  EBX = (pop32());
  /* 12165094 ret  */
  ESPCHK(0x12164fe0u, _esp0);
  ESP += 4; return;
L_12165095:;
  /* 12165095 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12165098 pop esi */
  ESI = (pop32());
  /* 12165099 pop edi */
  EDI = (pop32());
  /* 1216509a pop ebx */
  EBX = (pop32());
  /* 1216509b ret  */
  ESPCHK(0x12164fe0u, _esp0);
  ESP += 4; return;
  /* 1216509c jmp dword ptr [0x12183340] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12183340)))); return;
}

/* RtlUnwind @ 0x121651ec (6 bytes, 1 insns) */
void f_121651ec(void) {
  FTRACE(0x121651ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121651ec jmp dword ptr [0x121832e4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x121832e4)))); return;
}

