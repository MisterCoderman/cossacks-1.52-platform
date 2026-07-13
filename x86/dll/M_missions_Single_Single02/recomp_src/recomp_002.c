#include "recomp.h"

/* FUN_1000fbe0 @ 0x10c1fbe0 (393 bytes, 123 insns) */
void f_10c1fbe0(void) {
  FTRACE(0x10c1fbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1fbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1fbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10c1fbe3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1fbe6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fbea jne 0x10c1fbf6 */
  if (!C.zf) goto L_10c1fbf6;
  /* 10c1fbec mov eax, dword ptr [0x10c3dc98] */
  EAX = (r32((uint32_t)(0x10c3dc98)));
  /* 10c1fbf1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c1fbf4 jmp 0x10c1fbfc */
  goto L_10c1fbfc;
L_10c1fbf6:;
  /* 10c1fbf6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fbf9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c1fbfc:;
  /* 10c1fbfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c1fbff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1fc02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fc05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1fc08 push 0x10c3e78c */
  push32((uint32_t)(0x10c3e78cu));
  /* 10c1fc0d call dword ptr [0x10c40244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40244))), 0x10c1fc13u);
  /* 10c1fc13 cmp dword ptr [0x10c3e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fc1a je 0x10c1fc3a */
  if (C.zf) goto L_10c1fc3a;
  /* 10c1fc1c push 0x10c3e78c */
  push32((uint32_t)(0x10c3e78cu));
  /* 10c1fc21 call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c1fc27u);
  /* 10c1fc27 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c1fc29 call 0x10c162a0 */
  push32(0x10c1fc2eu); f_10c162a0();
  /* 10c1fc2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fc31 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c1fc38 jmp 0x10c1fc41 */
  goto L_10c1fc41;
L_10c1fc3a:;
  /* 10c1fc3a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c1fc41:;
  /* 10c1fc41 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fc45 jbe 0x10c1fd32 */
  if ((C.cf||C.zf)) goto L_10c1fd32;
  /* 10c1fc4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fc4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c1fc50 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10c1fc53 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1fc57 je 0x10c1fc61 */
  if (C.zf) goto L_10c1fc61;
  /* 10c1fc59 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c1fc5d je 0x10c1fc66 */
  if (C.zf) goto L_10c1fc66;
  /* 10c1fc5f jmp 0x10c1fcc0 */
  goto L_10c1fcc0;
L_10c1fc61:;
  /* 10c1fc61 jmp 0x10c1fd32 */
  goto L_10c1fd32;
L_10c1fc66:;
  /* 10c1fc66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fc69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fc6c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10c1fc6f mov dword ptr [0x10c3e768], 0 */
  w32((uint32_t)(0x10c3e768), (0x0u));
  /* 10c1fc79 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fc7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c1fc7f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fc82 jne 0x10c1fc97 */
  if (!C.zf) goto L_10c1fc97;
  /* 10c1fc84 mov dword ptr [0x10c3e768], 1 */
  w32((uint32_t)(0x10c3e768), (0x1u));
  /* 10c1fc8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fc91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fc94 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c1fc97:;
  /* 10c1fc97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1fc9a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fc9b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10c1fc9e push edx */
  push32((uint32_t)(EDX));
  /* 10c1fc9f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10c1fca2 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fca3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fca6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fca7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fcaa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1fcac push eax */
  push32((uint32_t)(EAX));
  /* 10c1fcad call 0x10c1fd70 */
  push32(0x10c1fcb2u); f_10c1fd70();
  /* 10c1fcb2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fcb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fcb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fcbb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c1fcbe jmp 0x10c1fd2d */
  goto L_10c1fd2d;
L_10c1fcc0:;
  /* 10c1fcc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fcc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c1fcc5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c1fcc7 mov ecx, dword ptr [0x10c3cc98] */
  ECX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c1fccd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1fccf mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c1fcd3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c1fcd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c1fcdb je 0x10c1fd08 */
  if (C.zf) goto L_10c1fd08;
  /* 10c1fcdd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fce1 jbe 0x10c1fd08 */
  if ((C.cf||C.zf)) goto L_10c1fd08;
  /* 10c1fce3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1fce6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fce9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c1fceb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c1fced mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1fcf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fcf3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c1fcf6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fcf9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fcfc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c1fcff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fd02 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1fd05 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c1fd08:;
  /* 10c1fd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1fd0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fd0e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c1fd10 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c1fd12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1fd15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fd18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c1fd1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fd1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fd21 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c1fd24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fd27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1fd2a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c1fd2d:;
  /* 10c1fd2d jmp 0x10c1fc41 */
  goto L_10c1fc41;
L_10c1fd32:;
  /* 10c1fd32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fd36 je 0x10c1fd44 */
  if (C.zf) goto L_10c1fd44;
  /* 10c1fd38 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c1fd3a call 0x10c16340 */
  push32(0x10c1fd3fu); f_10c16340();
  /* 10c1fd3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fd42 jmp 0x10c1fd4f */
  goto L_10c1fd4f;
L_10c1fd44:;
  /* 10c1fd44 push 0x10c3e78c */
  push32((uint32_t)(0x10c3e78cu));
  /* 10c1fd49 call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c1fd4fu);
L_10c1fd4f:;
  /* 10c1fd4f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fd53 jbe 0x10c1fd63 */
  if ((C.cf||C.zf)) goto L_10c1fd63;
  /* 10c1fd55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c1fd58 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c1fd5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fd5e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1fd61 jmp 0x10c1fd65 */
  goto L_10c1fd65;
L_10c1fd63:;
  /* 10c1fd63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c1fd65:;
  /* 10c1fd65 mov esp, ebp */
  ESP = (EBP);
  /* 10c1fd67 pop ebp */
  EBP = (pop32());
  /* 10c1fd68 ret  */
  ESPCHK(0x10c1fbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd70 @ 0x10c1fd70 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10c1fd70(void) {
  FTRACE(0x10c1fd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c1fd70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c1fd71 mov ebp, esp */
  EBP = (ESP);
  /* 10c1fd73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1fd76 push esi */
  push32((uint32_t)(ESI));
  /* 10c1fd77 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10c1fd7b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c1fd7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fd81 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1fd84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c1fd87 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fd8b ja 0x10c202d8 */
  if ((!C.cf&&!C.zf)) goto L_10c202d8;
  /* 10c1fd91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c1fd94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c1fd96 mov dl, byte ptr [eax + 0x10c20339] */
  DL = (r8((uint32_t)(EAX + 0x10c20339)));
  /* 10c1fd9c jmp dword ptr [edx*4 + 0x10c202dd] */
  switch (EDX) {
    case 0: goto L_10c202b6;
    case 1: goto L_10c1fdc5;
    case 2: goto L_10c1fe0b;
    case 3: goto L_10c1ff58;
    case 4: goto L_10c1ff80;
    case 5: goto L_10c2001f;
    case 6: goto L_10c2008b;
    case 7: goto L_10c200b4;
    case 8: goto L_10c200f5;
    case 9: goto L_10c201d7;
    case 10: goto L_10c2023e;
    case 11: goto L_10c2028b;
    case 12: goto L_10c1fda3;
    case 13: goto L_10c1fde8;
    case 14: goto L_10c1fe2e;
    case 15: goto L_10c1ff2e;
    case 16: goto L_10c1ffc5;
    case 17: goto L_10c1fff2;
    case 18: goto L_10c20047;
    case 19: goto L_10c200cb;
    case 20: goto L_10c20179;
    case 21: goto L_10c20208;
    case 22: goto L_10c202d8;
    default: x86_unimpl("switch@0x10c1fd9c out of table"); return;
  }
L_10c1fda3:;
  /* 10c1fda3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fda6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fda7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fdaa push edx */
  push32((uint32_t)(EDX));
  /* 10c1fdab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fdae mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c1fdb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fdb4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10c1fdb7 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fdb8 call 0x10c20390 */
  push32(0x10c1fdbdu); f_10c20390();
  /* 10c1fdbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fdc0 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1fdc5:;
  /* 10c1fdc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fdc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fdc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fdcc push edx */
  push32((uint32_t)(EDX));
  /* 10c1fdcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fdd0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c1fdd3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fdd6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10c1fdda push eax */
  push32((uint32_t)(EAX));
  /* 10c1fddb call 0x10c20390 */
  push32(0x10c1fde0u); f_10c20390();
  /* 10c1fde0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fde3 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1fde8:;
  /* 10c1fde8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fdeb push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fdec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fdef push edx */
  push32((uint32_t)(EDX));
  /* 10c1fdf0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fdf3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1fdf6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fdf9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10c1fdfd push eax */
  push32((uint32_t)(EAX));
  /* 10c1fdfe call 0x10c20390 */
  push32(0x10c1fe03u); f_10c20390();
  /* 10c1fe03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fe06 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1fe0b:;
  /* 10c1fe0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fe0e push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fe0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fe12 push edx */
  push32((uint32_t)(EDX));
  /* 10c1fe13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fe16 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c1fe19 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fe1c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10c1fe20 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fe21 call 0x10c20390 */
  push32(0x10c1fe26u); f_10c20390();
  /* 10c1fe26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fe29 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1fe2e:;
  /* 10c1fe2e cmp dword ptr [0x10c3e768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fe35 je 0x10c1feb6 */
  if (C.zf) goto L_10c1feb6;
  /* 10c1fe37 mov dword ptr [0x10c3e768], 0 */
  w32((uint32_t)(0x10c3e768), (0x0u));
  /* 10c1fe41 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fe44 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fe45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fe48 push edx */
  push32((uint32_t)(EDX));
  /* 10c1fe49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fe4c push eax */
  push32((uint32_t)(EAX));
  /* 10c1fe4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fe50 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fe51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fe54 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10c1fe5a push eax */
  push32((uint32_t)(EAX));
  /* 10c1fe5b call 0x10c20540 */
  push32(0x10c1fe60u); f_10c20540();
  /* 10c1fe60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fe63 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fe66 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fe69 jne 0x10c1fe70 */
  if (!C.zf) goto L_10c1fe70;
  /* 10c1fe6b jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1fe70:;
  /* 10c1fe70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fe73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c1fe75 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10c1fe78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fe7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1fe7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fe80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fe83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c1fe85 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fe88 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1fe8a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1fe8d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fe90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c1fe92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fe95 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fe96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fe99 push edx */
  push32((uint32_t)(EDX));
  /* 10c1fe9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fe9d push eax */
  push32((uint32_t)(EAX));
  /* 10c1fe9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fea1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fea2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fea5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10c1feab push eax */
  push32((uint32_t)(EAX));
  /* 10c1feac call 0x10c20540 */
  push32(0x10c1feb1u); f_10c20540();
  /* 10c1feb1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1feb4 jmp 0x10c1ff29 */
  goto L_10c1ff29;
L_10c1feb6:;
  /* 10c1feb6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1feb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1feba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1febd push edx */
  push32((uint32_t)(EDX));
  /* 10c1febe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fec1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1fec2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1fec5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1fec6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1fec9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10c1fecf push eax */
  push32((uint32_t)(EAX));
  /* 10c1fed0 call 0x10c20540 */
  push32(0x10c1fed5u); f_10c20540();
  /* 10c1fed5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fed8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fedb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1fede jne 0x10c1fee5 */
  if (!C.zf) goto L_10c1fee5;
  /* 10c1fee0 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1fee5:;
  /* 10c1fee5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fee8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c1feea mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10c1feed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fef0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1fef2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1fef5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1fef8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c1fefa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1fefd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c1feff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c1ff02 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ff05 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c1ff07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1ff0a push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ff0b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ff0e push edx */
  push32((uint32_t)(EDX));
  /* 10c1ff0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ff12 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ff13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ff16 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ff17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c1ff1a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10c1ff20 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ff21 call 0x10c20540 */
  push32(0x10c1ff26u); f_10c20540();
  /* 10c1ff26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c1ff29:;
  /* 10c1ff29 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1ff2e:;
  /* 10c1ff2e mov ecx, dword ptr [0x10c3e768] */
  ECX = (r32((uint32_t)(0x10c3e768)));
  /* 10c1ff34 mov dword ptr [0x10c3e778], ecx */
  w32((uint32_t)(0x10c3e778), (ECX));
  /* 10c1ff3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ff3d push edx */
  push32((uint32_t)(EDX));
  /* 10c1ff3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ff41 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ff42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1ff44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ff47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c1ff4a push edx */
  push32((uint32_t)(EDX));
  /* 10c1ff4b call 0x10c203e0 */
  push32(0x10c1ff50u); f_10c203e0();
  /* 10c1ff50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ff53 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1ff58:;
  /* 10c1ff58 mov eax, dword ptr [0x10c3e768] */
  EAX = (r32((uint32_t)(0x10c3e768)));
  /* 10c1ff5d mov dword ptr [0x10c3e778], eax */
  w32((uint32_t)(0x10c3e778), (EAX));
  /* 10c1ff62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ff65 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ff66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ff69 push edx */
  push32((uint32_t)(EDX));
  /* 10c1ff6a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1ff6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ff6f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c1ff72 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ff73 call 0x10c203e0 */
  push32(0x10c1ff78u); f_10c203e0();
  /* 10c1ff78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ff7b jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1ff80:;
  /* 10c1ff80 mov edx, dword ptr [0x10c3e768] */
  EDX = (r32((uint32_t)(0x10c3e768)));
  /* 10c1ff86 mov dword ptr [0x10c3e778], edx */
  w32((uint32_t)(0x10c3e778), (EDX));
  /* 10c1ff8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ff8f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c1ff92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c1ff93 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10c1ff98 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c1ff9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c1ff9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c1ffa1 jne 0x10c1ffaa */
  if (!C.zf) goto L_10c1ffaa;
  /* 10c1ffa3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10c1ffaa:;
  /* 10c1ffaa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ffad push edx */
  push32((uint32_t)(EDX));
  /* 10c1ffae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ffb1 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ffb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c1ffb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c1ffb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ffb8 call 0x10c203e0 */
  push32(0x10c1ffbdu); f_10c203e0();
  /* 10c1ffbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ffc0 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1ffc5:;
  /* 10c1ffc5 mov edx, dword ptr [0x10c3e768] */
  EDX = (r32((uint32_t)(0x10c3e768)));
  /* 10c1ffcb mov dword ptr [0x10c3e778], edx */
  w32((uint32_t)(0x10c3e778), (EDX));
  /* 10c1ffd1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c1ffd4 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ffd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c1ffd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c1ffd9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c1ffdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c1ffde mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c1ffe1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ffe4 push eax */
  push32((uint32_t)(EAX));
  /* 10c1ffe5 call 0x10c203e0 */
  push32(0x10c1ffeau); f_10c203e0();
  /* 10c1ffea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c1ffed jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c1fff2:;
  /* 10c1fff2 mov ecx, dword ptr [0x10c3e768] */
  ECX = (r32((uint32_t)(0x10c3e768)));
  /* 10c1fff8 mov dword ptr [0x10c3e778], ecx */
  w32((uint32_t)(0x10c3e778), (ECX));
  /* 10c1fffe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20001 push edx */
  push32((uint32_t)(EDX));
  /* 10c20002 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20005 push eax */
  push32((uint32_t)(EAX));
  /* 10c20006 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c20008 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c2000b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c2000e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20011 push edx */
  push32((uint32_t)(EDX));
  /* 10c20012 call 0x10c203e0 */
  push32(0x10c20017u); f_10c203e0();
  /* 10c20017 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2001a jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c2001f:;
  /* 10c2001f mov eax, dword ptr [0x10c3e768] */
  EAX = (r32((uint32_t)(0x10c3e768)));
  /* 10c20024 mov dword ptr [0x10c3e778], eax */
  w32((uint32_t)(0x10c3e778), (EAX));
  /* 10c20029 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2002c push ecx */
  push32((uint32_t)(ECX));
  /* 10c2002d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20030 push edx */
  push32((uint32_t)(EDX));
  /* 10c20031 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c20033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20036 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c20039 push ecx */
  push32((uint32_t)(ECX));
  /* 10c2003a call 0x10c203e0 */
  push32(0x10c2003fu); f_10c203e0();
  /* 10c2003f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20042 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c20047:;
  /* 10c20047 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c2004a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2004e jg 0x10c2006c */
  if ((!C.zf&&C.sf==C.of)) goto L_10c2006c;
  /* 10c20050 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20053 push eax */
  push32((uint32_t)(EAX));
  /* 10c20054 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20057 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20058 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c2005b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10c20061 push eax */
  push32((uint32_t)(EAX));
  /* 10c20062 call 0x10c20390 */
  push32(0x10c20067u); f_10c20390();
  /* 10c20067 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2006a jmp 0x10c20086 */
  goto L_10c20086;
L_10c2006c:;
  /* 10c2006c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2006f push ecx */
  push32((uint32_t)(ECX));
  /* 10c20070 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20073 push edx */
  push32((uint32_t)(EDX));
  /* 10c20074 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c20077 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10c2007d push ecx */
  push32((uint32_t)(ECX));
  /* 10c2007e call 0x10c20390 */
  push32(0x10c20083u); f_10c20390();
  /* 10c20083 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c20086:;
  /* 10c20086 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c2008b:;
  /* 10c2008b mov edx, dword ptr [0x10c3e768] */
  EDX = (r32((uint32_t)(0x10c3e768)));
  /* 10c20091 mov dword ptr [0x10c3e778], edx */
  w32((uint32_t)(0x10c3e778), (EDX));
  /* 10c20097 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2009a push eax */
  push32((uint32_t)(EAX));
  /* 10c2009b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2009e push ecx */
  push32((uint32_t)(ECX));
  /* 10c2009f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c200a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c200a4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c200a6 push eax */
  push32((uint32_t)(EAX));
  /* 10c200a7 call 0x10c203e0 */
  push32(0x10c200acu); f_10c203e0();
  /* 10c200ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c200af jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c200b4:;
  /* 10c200b4 mov ecx, dword ptr [0x10c3e768] */
  ECX = (r32((uint32_t)(0x10c3e768)));
  /* 10c200ba mov dword ptr [0x10c3e778], ecx */
  w32((uint32_t)(0x10c3e778), (ECX));
  /* 10c200c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c200c3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10c200c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c200c9 jmp 0x10c2011d */
  goto L_10c2011d;
L_10c200cb:;
  /* 10c200cb mov ecx, dword ptr [0x10c3e768] */
  ECX = (r32((uint32_t)(0x10c3e768)));
  /* 10c200d1 mov dword ptr [0x10c3e778], ecx */
  w32((uint32_t)(0x10c3e778), (ECX));
  /* 10c200d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c200da push edx */
  push32((uint32_t)(EDX));
  /* 10c200db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c200de push eax */
  push32((uint32_t)(EAX));
  /* 10c200df push 1 */
  push32((uint32_t)(0x1u));
  /* 10c200e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c200e4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c200e7 push edx */
  push32((uint32_t)(EDX));
  /* 10c200e8 call 0x10c203e0 */
  push32(0x10c200edu); f_10c203e0();
  /* 10c200ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c200f0 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c200f5:;
  /* 10c200f5 mov eax, dword ptr [0x10c3e768] */
  EAX = (r32((uint32_t)(0x10c3e768)));
  /* 10c200fa mov dword ptr [0x10c3e778], eax */
  w32((uint32_t)(0x10c3e778), (EAX));
  /* 10c200ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20102 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20106 jne 0x10c20111 */
  if (!C.zf) goto L_10c20111;
  /* 10c20108 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10c2010f jmp 0x10c2011d */
  goto L_10c2011d;
L_10c20111:;
  /* 10c20111 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20114 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10c20117 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c2011a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c2011d:;
  /* 10c2011d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20120 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c20123 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20126 jge 0x10c20131 */
  if ((C.sf==C.of)) goto L_10c20131;
  /* 10c20128 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c2012f jmp 0x10c2015e */
  goto L_10c2015e;
L_10c20131:;
  /* 10c20131 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20134 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c20137 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c20138 mov ecx, 7 */
  ECX = (0x7u);
  /* 10c2013d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c2013f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c20142 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20145 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c20148 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c20149 mov ecx, 7 */
  ECX = (0x7u);
  /* 10c2014e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c20150 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20153 jl 0x10c2015e */
  if ((C.sf!=C.of)) goto L_10c2015e;
  /* 10c20155 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c20158 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2015b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c2015e:;
  /* 10c2015e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20161 push eax */
  push32((uint32_t)(EAX));
  /* 10c20162 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20165 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20166 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c20168 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2016b push edx */
  push32((uint32_t)(EDX));
  /* 10c2016c call 0x10c203e0 */
  push32(0x10c20171u); f_10c203e0();
  /* 10c20171 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20174 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c20179:;
  /* 10c20179 cmp dword ptr [0x10c3e768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20180 je 0x10c201b0 */
  if (C.zf) goto L_10c201b0;
  /* 10c20182 mov dword ptr [0x10c3e768], 0 */
  w32((uint32_t)(0x10c3e768), (0x0u));
  /* 10c2018c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c2018f push eax */
  push32((uint32_t)(EAX));
  /* 10c20190 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20193 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20194 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20197 push edx */
  push32((uint32_t)(EDX));
  /* 10c20198 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c2019b push eax */
  push32((uint32_t)(EAX));
  /* 10c2019c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c2019f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10c201a5 push edx */
  push32((uint32_t)(EDX));
  /* 10c201a6 call 0x10c20540 */
  push32(0x10c201abu); f_10c20540();
  /* 10c201ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c201ae jmp 0x10c201d2 */
  goto L_10c201d2;
L_10c201b0:;
  /* 10c201b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c201b3 push eax */
  push32((uint32_t)(EAX));
  /* 10c201b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c201b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c201b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c201bb push edx */
  push32((uint32_t)(EDX));
  /* 10c201bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c201bf push eax */
  push32((uint32_t)(EAX));
  /* 10c201c0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c201c3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10c201c9 push edx */
  push32((uint32_t)(EDX));
  /* 10c201ca call 0x10c20540 */
  push32(0x10c201cfu); f_10c20540();
  /* 10c201cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c201d2:;
  /* 10c201d2 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c201d7:;
  /* 10c201d7 mov dword ptr [0x10c3e768], 0 */
  w32((uint32_t)(0x10c3e768), (0x0u));
  /* 10c201e1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c201e4 push eax */
  push32((uint32_t)(EAX));
  /* 10c201e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c201e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c201e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c201ec push edx */
  push32((uint32_t)(EDX));
  /* 10c201ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c201f0 push eax */
  push32((uint32_t)(EAX));
  /* 10c201f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c201f4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10c201fa push edx */
  push32((uint32_t)(EDX));
  /* 10c201fb call 0x10c20540 */
  push32(0x10c20200u); f_10c20540();
  /* 10c20200 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20203 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c20208:;
  /* 10c20208 mov eax, dword ptr [0x10c3e768] */
  EAX = (r32((uint32_t)(0x10c3e768)));
  /* 10c2020d mov dword ptr [0x10c3e778], eax */
  w32((uint32_t)(0x10c3e778), (EAX));
  /* 10c20212 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20215 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c20218 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c20219 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10c2021e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c20220 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c20223 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20226 push edx */
  push32((uint32_t)(EDX));
  /* 10c20227 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2022a push eax */
  push32((uint32_t)(EAX));
  /* 10c2022b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c2022d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c20230 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20231 call 0x10c203e0 */
  push32(0x10c20236u); f_10c203e0();
  /* 10c20236 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20239 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c2023e:;
  /* 10c2023e mov edx, dword ptr [0x10c3e768] */
  EDX = (r32((uint32_t)(0x10c3e768)));
  /* 10c20244 mov dword ptr [0x10c3e778], edx */
  w32((uint32_t)(0x10c3e778), (EDX));
  /* 10c2024a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c2024d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c20250 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c20251 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10c20256 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c20258 mov ecx, eax */
  ECX = (EAX);
  /* 10c2025a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2025d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c20260 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20263 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c20266 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c20267 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10c2026c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c2026e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20270 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c20273 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20276 push eax */
  push32((uint32_t)(EAX));
  /* 10c20277 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2027a push ecx */
  push32((uint32_t)(ECX));
  /* 10c2027b push 4 */
  push32((uint32_t)(0x4u));
  /* 10c2027d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c20280 push edx */
  push32((uint32_t)(EDX));
  /* 10c20281 call 0x10c203e0 */
  push32(0x10c20286u); f_10c203e0();
  /* 10c20286 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20289 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c2028b:;
  /* 10c2028b call 0x10c213a0 */
  push32(0x10c20290u); f_10c213a0();
  /* 10c20290 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20293 push eax */
  push32((uint32_t)(EAX));
  /* 10c20294 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20297 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20298 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c2029b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2029d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c202a1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10c202a4 mov ecx, dword ptr [eax*4 + 0x10c3de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c3de1c)));
  /* 10c202ab push ecx */
  push32((uint32_t)(ECX));
  /* 10c202ac call 0x10c20390 */
  push32(0x10c202b1u); f_10c20390();
  /* 10c202b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c202b4 jmp 0x10c202d8 */
  goto L_10c202d8;
L_10c202b6:;
  /* 10c202b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c202b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c202bb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10c202be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c202c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c202c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c202c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c202c9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c202cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c202ce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c202d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c202d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c202d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c202d8:;
  /* 10c202d8 pop esi */
  ESI = (pop32());
  /* 10c202d9 mov esp, ebp */
  ESP = (EBP);
  /* 10c202db pop ebp */
  EBP = (pop32());
  /* 10c202dc ret  */
  ESPCHK(0x10c1fd70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10c20390 (72 bytes, 30 insns) */
void f_10c20390(void) {
  FTRACE(0x10c20390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c20390 push ebp */
  push32((uint32_t)(EBP));
  /* 10c20391 mov ebp, esp */
  EBP = (ESP);
L_10c20393:;
  /* 10c20393 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20396 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20399 je 0x10c203d6 */
  if (C.zf) goto L_10c203d6;
  /* 10c2039b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2039e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c203a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c203a3 je 0x10c203d6 */
  if (C.zf) goto L_10c203d6;
  /* 10c203a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c203a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c203aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c203ad mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c203af mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c203b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c203b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c203b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c203b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c203bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c203be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c203c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c203c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c203c7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c203ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c203cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c203cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c203d2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c203d4 jmp 0x10c20393 */
  goto L_10c20393;
L_10c203d6:;
  /* 10c203d6 pop ebp */
  EBP = (pop32());
  /* 10c203d7 ret  */
  ESPCHK(0x10c20390u, _esp0);
  ESP += 4; return;
}

/* FUN_100103e0 @ 0x10c203e0 (173 bytes, 64 insns) */
void f_10c203e0(void) {
  FTRACE(0x10c203e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c203e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c203e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c203e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c203e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c203eb cmp dword ptr [0x10c3e778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c203f2 je 0x10c2040a */
  if (C.zf) goto L_10c2040a;
  /* 10c203f4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c203f7 push eax */
  push32((uint32_t)(EAX));
  /* 10c203f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c203fb push ecx */
  push32((uint32_t)(ECX));
  /* 10c203fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c203ff push edx */
  push32((uint32_t)(EDX));
  /* 10c20400 call 0x10c20490 */
  push32(0x10c20405u); f_10c20490();
  /* 10c20405 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20408 jmp 0x10c20489 */
  goto L_10c20489;
L_10c2040a:;
  /* 10c2040a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2040d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20410 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20412 jae 0x10c20480 */
  if (!C.cf) goto L_10c20480;
  /* 10c20414 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20417 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c2041a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10c2041d jmp 0x10c20428 */
  goto L_10c20428;
L_10c2041f:;
  /* 10c2041f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20422 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c20425 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10c20428:;
  /* 10c20428 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c2042b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2042e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c20430 je 0x10c20464 */
  if (C.zf) goto L_10c20464;
  /* 10c20432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20435 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c20436 mov ecx, 0xa */
  ECX = (0xau);
  /* 10c2043b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c2043d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20440 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20443 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c20445 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20448 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10c2044b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2044e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c2044f mov ecx, 0xa */
  ECX = (0xau);
  /* 10c20454 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c20456 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c20459 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2045c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2045f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c20462 jmp 0x10c2041f */
  goto L_10c2041f;
L_10c20464:;
  /* 10c20464 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20467 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c20469 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2046c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2046f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c20471 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20474 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c20476 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c20479 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2047c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c2047e jmp 0x10c20489 */
  goto L_10c20489;
L_10c20480:;
  /* 10c20480 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20483 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c20489:;
  /* 10c20489 mov esp, ebp */
  ESP = (EBP);
  /* 10c2048b pop ebp */
  EBP = (pop32());
  /* 10c2048c ret  */
  ESPCHK(0x10c203e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10c20490 (172 bytes, 65 insns) */
void f_10c20490(void) {
  FTRACE(0x10c20490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c20490 push ebp */
  push32((uint32_t)(EBP));
  /* 10c20491 mov ebp, esp */
  EBP = (ESP);
  /* 10c20493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c20496 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20499 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c2049b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c2049e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c204a1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c204a4 jbe 0x10c204eb */
  if ((C.cf||C.zf)) goto L_10c204eb;
L_10c204a6:;
  /* 10c204a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c204a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c204aa mov ecx, 0xa */
  ECX = (0xau);
  /* 10c204af idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c204b1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c204b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c204b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c204b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c204bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c204bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c204c2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c204c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c204c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c204ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c204cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c204cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c204d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c204d3 mov ecx, 0xa */
  ECX = (0xau);
  /* 10c204d8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c204da mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c204dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c204e1 jle 0x10c204eb */
  if ((C.zf||C.sf!=C.of)) goto L_10c204eb;
  /* 10c204e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c204e6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c204e9 ja 0x10c204a6 */
  if ((!C.cf&&!C.zf)) goto L_10c204a6;
L_10c204eb:;
  /* 10c204eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c204ee mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c204f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c204f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c204f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c204f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c204fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c204fe sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c20501 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c20504:;
  /* 10c20504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c20507 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c20509 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10c2050c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2050f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c20512 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c20514 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c20516 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c20519 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c2051c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c2051f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c20522 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10c20525 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10c20527 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c2052a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2052d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c20530 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c20533 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20536 jb 0x10c20504 */
  if (C.cf) goto L_10c20504;
  /* 10c20538 mov esp, ebp */
  ESP = (EBP);
  /* 10c2053a pop ebp */
  EBP = (pop32());
  /* 10c2053b ret  */
  ESPCHK(0x10c20490u, _esp0);
  ESP += 4; return;
}

/* FUN_10010540 @ 0x10c20540 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10c20540(void) {
  FTRACE(0x10c20540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c20540 push ebp */
  push32((uint32_t)(EBP));
  /* 10c20541 mov ebp, esp */
  EBP = (ESP);
  /* 10c20543 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10c20546:;
  /* 10c20546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20549 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c2054c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c2054e je 0x10c209bc */
  if (C.zf) goto L_10c209bc;
  /* 10c20554 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20557 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2055a je 0x10c209bc */
  if (C.zf) goto L_10c209bc;
  /* 10c20560 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c20564 mov dword ptr [0x10c3e778], 0 */
  w32((uint32_t)(0x10c3e778), (0x0u));
  /* 10c2056e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c20575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20578 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c2057b jmp 0x10c20586 */
  goto L_10c20586;
L_10c2057d:;
  /* 10c2057d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20580 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20583 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c20586:;
  /* 10c20586 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c20589 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c2058c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2058f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c20592 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c20595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20598 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c2059b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2059d jne 0x10c205a1 */
  if (!C.zf) goto L_10c205a1;
  /* 10c2059f jmp 0x10c2057d */
  goto L_10c2057d;
L_10c205a1:;
  /* 10c205a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c205a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c205a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c205aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c205ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c205b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c205b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c205b6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c205b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c205bc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c205c0 ja 0x10c20910 */
  if ((!C.cf&&!C.zf)) goto L_10c20910;
  /* 10c205c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c205c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c205cb mov al, byte ptr [ecx + 0x10c209ec] */
  AL = (r8((uint32_t)(ECX + 0x10c209ec)));
  /* 10c205d1 jmp dword ptr [eax*4 + 0x10c209c0] */
  switch (EAX) {
    case 0: goto L_10c2082f;
    case 1: goto L_10c20713;
    case 2: goto L_10c2069e;
    case 3: goto L_10c205d8;
    case 4: goto L_10c20616;
    case 5: goto L_10c20677;
    case 6: goto L_10c206c5;
    case 7: goto L_10c206ec;
    case 8: goto L_10c2075a;
    case 9: goto L_10c20654;
    case 10: goto L_10c20910;
    default: x86_unimpl("switch@0x10c205d1 out of table"); return;
  }
L_10c205d8:;
  /* 10c205d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c205db mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c205de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c205e1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c205e4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c205e7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c205eb ja 0x10c20611 */
  if ((!C.cf&&!C.zf)) goto L_10c20611;
  /* 10c205ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c205f0 jmp dword ptr [ecx*4 + 0x10c20a3f] */
  switch (ECX) {
    case 0: goto L_10c205f7;
    case 1: goto L_10c20601;
    case 2: goto L_10c20607;
    case 3: goto L_10c2060d;
    case 4: goto L_10c20635;
    case 5: goto L_10c2063f;
    case 6: goto L_10c20645;
    case 7: goto L_10c2064b;
    default: x86_unimpl("switch@0x10c205f0 out of table"); return;
  }
L_10c205f7:;
  /* 10c205f7 mov dword ptr [0x10c3e778], 1 */
  w32((uint32_t)(0x10c3e778), (0x1u));
L_10c20601:;
  /* 10c20601 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10c20605 jmp 0x10c20611 */
  goto L_10c20611;
L_10c20607:;
  /* 10c20607 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10c2060b jmp 0x10c20611 */
  goto L_10c20611;
L_10c2060d:;
  /* 10c2060d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10c20611:;
  /* 10c20611 jmp 0x10c20910 */
  goto L_10c20910;
L_10c20616:;
  /* 10c20616 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20619 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c2061c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c2061f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c20622 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c20625 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20629 ja 0x10c2064f */
  if ((!C.cf&&!C.zf)) goto L_10c2064f;
  /* 10c2062b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c2062e jmp dword ptr [ecx*4 + 0x10c20a4f] */
  switch (ECX) {
    case 0: goto L_10c20635;
    case 1: goto L_10c2063f;
    case 2: goto L_10c20645;
    case 3: goto L_10c2064b;
    default: x86_unimpl("switch@0x10c2062e out of table"); return;
  }
L_10c20635:;
  /* 10c20635 mov dword ptr [0x10c3e778], 1 */
  w32((uint32_t)(0x10c3e778), (0x1u));
L_10c2063f:;
  /* 10c2063f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10c20643 jmp 0x10c2064f */
  goto L_10c2064f;
L_10c20645:;
  /* 10c20645 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10c20649 jmp 0x10c2064f */
  goto L_10c2064f;
L_10c2064b:;
  /* 10c2064b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10c2064f:;
  /* 10c2064f jmp 0x10c20910 */
  goto L_10c20910;
L_10c20654:;
  /* 10c20654 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20657 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10c2065a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2065e je 0x10c20668 */
  if (C.zf) goto L_10c20668;
  /* 10c20660 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20664 je 0x10c2066e */
  if (C.zf) goto L_10c2066e;
  /* 10c20666 jmp 0x10c20672 */
  goto L_10c20672;
L_10c20668:;
  /* 10c20668 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10c2066c jmp 0x10c20672 */
  goto L_10c20672;
L_10c2066e:;
  /* 10c2066e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10c20672:;
  /* 10c20672 jmp 0x10c20910 */
  goto L_10c20910;
L_10c20677:;
  /* 10c20677 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c2067a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c2067d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20681 je 0x10c2068b */
  if (C.zf) goto L_10c2068b;
  /* 10c20683 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20687 je 0x10c20695 */
  if (C.zf) goto L_10c20695;
  /* 10c20689 jmp 0x10c20699 */
  goto L_10c20699;
L_10c2068b:;
  /* 10c2068b mov dword ptr [0x10c3e778], 1 */
  w32((uint32_t)(0x10c3e778), (0x1u));
L_10c20695:;
  /* 10c20695 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10c20699:;
  /* 10c20699 jmp 0x10c20910 */
  goto L_10c20910;
L_10c2069e:;
  /* 10c2069e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c206a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10c206a4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c206a8 je 0x10c206b2 */
  if (C.zf) goto L_10c206b2;
  /* 10c206aa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c206ae je 0x10c206bc */
  if (C.zf) goto L_10c206bc;
  /* 10c206b0 jmp 0x10c206c0 */
  goto L_10c206c0;
L_10c206b2:;
  /* 10c206b2 mov dword ptr [0x10c3e778], 1 */
  w32((uint32_t)(0x10c3e778), (0x1u));
L_10c206bc:;
  /* 10c206bc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10c206c0:;
  /* 10c206c0 jmp 0x10c20910 */
  goto L_10c20910;
L_10c206c5:;
  /* 10c206c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c206c8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10c206cb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c206cf je 0x10c206d9 */
  if (C.zf) goto L_10c206d9;
  /* 10c206d1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c206d5 je 0x10c206e3 */
  if (C.zf) goto L_10c206e3;
  /* 10c206d7 jmp 0x10c206e7 */
  goto L_10c206e7;
L_10c206d9:;
  /* 10c206d9 mov dword ptr [0x10c3e778], 1 */
  w32((uint32_t)(0x10c3e778), (0x1u));
L_10c206e3:;
  /* 10c206e3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10c206e7:;
  /* 10c206e7 jmp 0x10c20910 */
  goto L_10c20910;
L_10c206ec:;
  /* 10c206ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c206ef mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10c206f2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c206f6 je 0x10c20700 */
  if (C.zf) goto L_10c20700;
  /* 10c206f8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c206fc je 0x10c2070a */
  if (C.zf) goto L_10c2070a;
  /* 10c206fe jmp 0x10c2070e */
  goto L_10c2070e;
L_10c20700:;
  /* 10c20700 mov dword ptr [0x10c3e778], 1 */
  w32((uint32_t)(0x10c3e778), (0x1u));
L_10c2070a:;
  /* 10c2070a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10c2070e:;
  /* 10c2070e jmp 0x10c20910 */
  goto L_10c20910;
L_10c20713:;
  /* 10c20713 push 0x10c3a7dc */
  push32((uint32_t)(0x10c3a7dcu));
  /* 10c20718 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2071b push ecx */
  push32((uint32_t)(ECX));
  /* 10c2071c call 0x10c20f70 */
  push32(0x10c20721u); f_10c20f70();
  /* 10c20721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c20726 jne 0x10c20733 */
  if (!C.zf) goto L_10c20733;
  /* 10c20728 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2072b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2072e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c20731 jmp 0x10c20751 */
  goto L_10c20751;
L_10c20733:;
  /* 10c20733 push 0x10c3a7d8 */
  push32((uint32_t)(0x10c3a7d8u));
  /* 10c20738 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2073b push eax */
  push32((uint32_t)(EAX));
  /* 10c2073c call 0x10c20f70 */
  push32(0x10c20741u); f_10c20f70();
  /* 10c20741 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20744 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c20746 jne 0x10c20751 */
  if (!C.zf) goto L_10c20751;
  /* 10c20748 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2074b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2074e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c20751:;
  /* 10c20751 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10c20755 jmp 0x10c20910 */
  goto L_10c20910;
L_10c2075a:;
  /* 10c2075a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c2075d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20761 jg 0x10c20771 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c20771;
  /* 10c20763 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c20766 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10c2076c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c2076f jmp 0x10c2077d */
  goto L_10c2077d;
L_10c20771:;
  /* 10c20771 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c20774 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10c2077a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c2077d:;
  /* 10c2077d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20781 jle 0x10c20824 */
  if ((C.zf||C.sf!=C.of)) goto L_10c20824;
  /* 10c20787 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2078a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2078d jbe 0x10c20824 */
  if ((C.cf||C.zf)) goto L_10c20824;
  /* 10c20793 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c20796 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20798 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c2079a mov ecx, dword ptr [0x10c3cc98] */
  ECX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c207a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c207a2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c207a6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c207ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c207ae je 0x10c207e7 */
  if (C.zf) goto L_10c207e7;
  /* 10c207b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c207b3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c207b6 jbe 0x10c207e7 */
  if ((C.cf||C.zf)) goto L_10c207e7;
  /* 10c207b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c207bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c207bd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c207c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c207c2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c207c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c207c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c207c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c207cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c207cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c207d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c207d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c207d7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c207da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c207dd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c207df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c207e2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c207e5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c207e7:;
  /* 10c207e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c207ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c207ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c207ef mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c207f1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c207f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c207f6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c207f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c207fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c207fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c20800 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c20803 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20806 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c20809 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2080c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c2080e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c20811 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20814 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c20816 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20819 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c2081c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c2081f jmp 0x10c2077d */
  goto L_10c2077d;
L_10c20824:;
  /* 10c20824 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c20827 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c2082a jmp 0x10c20546 */
  goto L_10c20546;
L_10c2082f:;
  /* 10c2082f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20832 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c20835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c20837 je 0x10c20902 */
  if (C.zf) goto L_10c20902;
  /* 10c2083d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20840 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20843 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10c20846:;
  /* 10c20846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20849 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c2084c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c2084e je 0x10c20900 */
  if (C.zf) goto L_10c20900;
  /* 10c20854 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20857 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2085a je 0x10c20900 */
  if (C.zf) goto L_10c20900;
  /* 10c20860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20863 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c20866 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20869 jne 0x10c20879 */
  if (!C.zf) goto L_10c20879;
  /* 10c2086b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2086e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20871 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c20874 jmp 0x10c20900 */
  goto L_10c20900;
L_10c20879:;
  /* 10c20879 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2087c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2087e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c20880 mov edx, dword ptr [0x10c3cc98] */
  EDX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c20886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20888 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10c2088c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10c20891 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c20893 je 0x10c208cc */
  if (C.zf) goto L_10c208cc;
  /* 10c20895 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20898 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2089b jbe 0x10c208cc */
  if ((C.cf||C.zf)) goto L_10c208cc;
  /* 10c2089d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c208a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c208a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c208a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c208a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c208a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c208ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c208ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c208b1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c208b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c208b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c208b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c208bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c208bf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c208c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c208c4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c208c7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c208ca mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c208cc:;
  /* 10c208cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c208cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c208d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c208d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c208d6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c208d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c208db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c208dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c208e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c208e3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c208e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c208e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c208eb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c208ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c208f1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c208f3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c208f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c208f9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c208fb jmp 0x10c20846 */
  goto L_10c20846;
L_10c20900:;
  /* 10c20900 jmp 0x10c2090b */
  goto L_10c2090b;
L_10c20902:;
  /* 10c20902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20905 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20908 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c2090b:;
  /* 10c2090b jmp 0x10c20546 */
  goto L_10c20546;
L_10c20910:;
  /* 10c20910 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10c20914 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c20916 je 0x10c2093c */
  if (C.zf) goto L_10c2093c;
  /* 10c20918 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c2091b push edx */
  push32((uint32_t)(EDX));
  /* 10c2091c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2091f push eax */
  push32((uint32_t)(EAX));
  /* 10c20920 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20923 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20924 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20927 push edx */
  push32((uint32_t)(EDX));
  /* 10c20928 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10c2092b push eax */
  push32((uint32_t)(EAX));
  /* 10c2092c call 0x10c1fd70 */
  push32(0x10c20931u); f_10c1fd70();
  /* 10c20931 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20934 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c20937 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c2093a jmp 0x10c209b7 */
  goto L_10c209b7;
L_10c2093c:;
  /* 10c2093c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2093f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20941 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c20943 mov ecx, dword ptr [0x10c3cc98] */
  ECX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c20949 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c2094b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c2094f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10c20955 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c20957 je 0x10c20988 */
  if (C.zf) goto L_10c20988;
  /* 10c20959 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2095c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c2095e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20961 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c20963 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c20965 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20968 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c2096a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2096d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20970 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c20972 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20978 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c2097b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2097e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c20980 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c20983 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20986 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10c20988:;
  /* 10c20988 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2098b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c2098d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20990 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c20992 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c20994 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20997 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c20999 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2099c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2099f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c209a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c209a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c209a7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c209aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c209ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c209af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c209b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c209b5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c209b7:;
  /* 10c209b7 jmp 0x10c20546 */
  goto L_10c20546;
L_10c209bc:;
  /* 10c209bc mov esp, ebp */
  ESP = (EBP);
  /* 10c209be pop ebp */
  EBP = (pop32());
  /* 10c209bf ret  */
  ESPCHK(0x10c20540u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a60 @ 0x10c20a60 (650 bytes, 178 insns) */
void f_10c20a60(void) {
  FTRACE(0x10c20a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c20a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c20a61 mov ebp, esp */
  EBP = (ESP);
  /* 10c20a63 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c20a69 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20a6d jne 0x10c20bc9 */
  if (!C.zf) goto L_10c20bc9;
  /* 10c20a73 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20a76 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10c20a7c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10c20a82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c20a85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c20a8c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10c20a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20a98 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10c20a9e push edx */
  push32((uint32_t)(EDX));
  /* 10c20a9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20aa2 push eax */
  push32((uint32_t)(EAX));
  /* 10c20aa3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20aa7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20aaa push edx */
  push32((uint32_t)(EDX));
  /* 10c20aab call 0x10c21e80 */
  push32(0x10c20ab0u); f_10c21e80();
  /* 10c20ab0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20ab3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c20ab6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20aba jne 0x10c20b4f */
  if (!C.zf) goto L_10c20b4f;
  /* 10c20ac0 call dword ptr [0x10c40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40270))), 0x10c20ac6u);
  /* 10c20ac6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20ac9 je 0x10c20ad0 */
  if (C.zf) goto L_10c20ad0;
  /* 10c20acb jmp 0x10c20bad */
  goto L_10c20bad;
L_10c20ad0:;
  /* 10c20ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20ad6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20ad9 push eax */
  push32((uint32_t)(EAX));
  /* 10c20ada mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20add push ecx */
  push32((uint32_t)(ECX));
  /* 10c20ade call 0x10c21e80 */
  push32(0x10c20ae3u); f_10c21e80();
  /* 10c20ae3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20ae6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10c20aec cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20af3 jne 0x10c20afa */
  if (!C.zf) goto L_10c20afa;
  /* 10c20af5 jmp 0x10c20bad */
  goto L_10c20bad;
L_10c20afa:;
  /* 10c20afa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10c20afc push 0x10c3a7e4 */
  push32((uint32_t)(0x10c3a7e4u));
  /* 10c20b01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c20b03 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10c20b09 push edx */
  push32((uint32_t)(EDX));
  /* 10c20b0a call 0x10c128a0 */
  push32(0x10c20b0fu); f_10c128a0();
  /* 10c20b0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20b12 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c20b15 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20b19 jne 0x10c20b20 */
  if (!C.zf) goto L_10c20b20;
  /* 10c20b1b jmp 0x10c20bad */
  goto L_10c20bad;
L_10c20b20:;
  /* 10c20b20 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c20b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20b29 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10c20b2f push eax */
  push32((uint32_t)(EAX));
  /* 10c20b30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20b34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20b37 push edx */
  push32((uint32_t)(EDX));
  /* 10c20b38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20b3b push eax */
  push32((uint32_t)(EAX));
  /* 10c20b3c call 0x10c21e80 */
  push32(0x10c20b41u); f_10c21e80();
  /* 10c20b41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20b44 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c20b47 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20b4b jne 0x10c20b4f */
  if (!C.zf) goto L_10c20b4f;
  /* 10c20b4d jmp 0x10c20bad */
  goto L_10c20bad;
L_10c20b4f:;
  /* 10c20b4f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10c20b51 push 0x10c3a7e4 */
  push32((uint32_t)(0x10c3a7e4u));
  /* 10c20b56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c20b58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c20b5b push ecx */
  push32((uint32_t)(ECX));
  /* 10c20b5c call 0x10c128a0 */
  push32(0x10c20b61u); f_10c128a0();
  /* 10c20b61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20b64 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10c20b6a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c20b6c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10c20b72 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20b75 jne 0x10c20b79 */
  if (!C.zf) goto L_10c20b79;
  /* 10c20b77 jmp 0x10c20bad */
  goto L_10c20bad;
L_10c20b79:;
  /* 10c20b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c20b7c push ecx */
  push32((uint32_t)(ECX));
  /* 10c20b7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20b80 push edx */
  push32((uint32_t)(EDX));
  /* 10c20b81 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10c20b87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c20b89 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20b8a call 0x10c160c0 */
  push32(0x10c20b8fu); f_10c160c0();
  /* 10c20b8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20b92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20b96 je 0x10c20ba6 */
  if (C.zf) goto L_10c20ba6;
  /* 10c20b98 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c20b9a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20b9d push edx */
  push32((uint32_t)(EDX));
  /* 10c20b9e call 0x10c13330 */
  push32(0x10c20ba3u); f_10c13330();
  /* 10c20ba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c20ba6:;
  /* 10c20ba6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20ba8 jmp 0x10c20ce6 */
  goto L_10c20ce6;
L_10c20bad:;
  /* 10c20bad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20bb1 je 0x10c20bc1 */
  if (C.zf) goto L_10c20bc1;
  /* 10c20bb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c20bb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c20bb8 push eax */
  push32((uint32_t)(EAX));
  /* 10c20bb9 call 0x10c13330 */
  push32(0x10c20bbeu); f_10c13330();
  /* 10c20bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c20bc1:;
  /* 10c20bc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c20bc4 jmp 0x10c20ce6 */
  goto L_10c20ce6;
L_10c20bc9:;
  /* 10c20bc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20bcd jne 0x10c20ce3 */
  if (!C.zf) goto L_10c20ce3;
  /* 10c20bd3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10c20bdd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20be0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10c20be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20be8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10c20bee push edx */
  push32((uint32_t)(EDX));
  /* 10c20bef push 0x10c3e690 */
  push32((uint32_t)(0x10c3e690u));
  /* 10c20bf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20bf7 push eax */
  push32((uint32_t)(EAX));
  /* 10c20bf8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20bfb push ecx */
  push32((uint32_t)(ECX));
  /* 10c20bfc call 0x10c21ce0 */
  push32(0x10c20c01u); f_10c21ce0();
  /* 10c20c01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20c04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c20c06 jne 0x10c20c10 */
  if (!C.zf) goto L_10c20c10;
  /* 10c20c08 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c20c0b jmp 0x10c20ce6 */
  goto L_10c20ce6;
L_10c20c10:;
  /* 10c20c10 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c20c16 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c20c19 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10c20c23 jmp 0x10c20c34 */
  goto L_10c20c34;
L_10c20c25:;
  /* 10c20c25 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c20c2b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20c2e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10c20c34:;
  /* 10c20c34 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20c3b jge 0x10c20cdf */
  if ((C.sf==C.of)) goto L_10c20cdf;
  /* 10c20c41 cmp dword ptr [0x10c3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20c48 jle 0x10c20c7b */
  if ((C.zf||C.sf!=C.of)) goto L_10c20c7b;
  /* 10c20c4a push 4 */
  push32((uint32_t)(0x4u));
  /* 10c20c4c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c20c52 mov dl, byte ptr [ecx*2 + 0x10c3e690] */
  DL = (r8((uint32_t)(ECX*2 + 0x10c3e690)));
  /* 10c20c59 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10c20c5f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10c20c65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c20c6a push eax */
  push32((uint32_t)(EAX));
  /* 10c20c6b call 0x10c188b0 */
  push32(0x10c20c70u); f_10c188b0();
  /* 10c20c70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20c73 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10c20c79 jmp 0x10c20cae */
  goto L_10c20cae;
L_10c20c7b:;
  /* 10c20c7b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10c20c81 mov dl, byte ptr [ecx*2 + 0x10c3e690] */
  DL = (r8((uint32_t)(ECX*2 + 0x10c3e690)));
  /* 10c20c88 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10c20c8e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10c20c94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c20c99 mov ecx, dword ptr [0x10c3cc98] */
  ECX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c20c9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c20ca1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c20ca5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c20ca8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10c20cae:;
  /* 10c20cae cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20cb5 je 0x10c20cd8 */
  if (C.zf) goto L_10c20cd8;
  /* 10c20cb7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c20cbd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c20cc0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c20cc3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10c20cca lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10c20cce mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10c20cd4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c20cd6 jmp 0x10c20cda */
  goto L_10c20cda;
L_10c20cd8:;
  /* 10c20cd8 jmp 0x10c20cdf */
  goto L_10c20cdf;
L_10c20cda:;
  /* 10c20cda jmp 0x10c20c25 */
  goto L_10c20c25;
L_10c20cdf:;
  /* 10c20cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20ce1 jmp 0x10c20ce6 */
  goto L_10c20ce6;
L_10c20ce3:;
  /* 10c20ce3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c20ce6:;
  /* 10c20ce6 mov esp, ebp */
  ESP = (EBP);
  /* 10c20ce8 pop ebp */
  EBP = (pop32());
  /* 10c20ce9 ret  */
  ESPCHK(0x10c20a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010cf0 @ 0x10c20cf0 (10 bytes, 5 insns) */
void f_10c20cf0(void) {
  FTRACE(0x10c20cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c20cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c20cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10c20cf3 mov eax, dword ptr [0x10c3dd88] */
  EAX = (r32((uint32_t)(0x10c3dd88)));
  /* 10c20cf8 pop ebp */
  EBP = (pop32());
  /* 10c20cf9 ret  */
  ESPCHK(0x10c20cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d00 @ 0x10c20d00 (575 bytes, 196 insns) */
void f_10c20d00(void) {
  FTRACE(0x10c20d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c20d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c20d01 mov ebp, esp */
  EBP = (ESP);
  /* 10c20d03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c20d05 push 0x10c3a7f0 */
  push32((uint32_t)(0x10c3a7f0u));
  /* 10c20d0a push 0x10c1b9a8 */
  push32((uint32_t)(0x10c1b9a8u));
  /* 10c20d0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c20d15 push eax */
  push32((uint32_t)(EAX));
  /* 10c20d16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c20d1d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20d20 push ebx */
  push32((uint32_t)(EBX));
  /* 10c20d21 push esi */
  push32((uint32_t)(ESI));
  /* 10c20d22 push edi */
  push32((uint32_t)(EDI));
  /* 10c20d23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c20d26 cmp dword ptr [0x10c3e69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20d2d jne 0x10c20d7e */
  if (!C.zf) goto L_10c20d7e;
  /* 10c20d2f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10c20d32 push eax */
  push32((uint32_t)(EAX));
  /* 10c20d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c20d35 push 0x10c39f20 */
  push32((uint32_t)(0x10c39f20u));
  /* 10c20d3a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c20d3c call dword ptr [0x10c402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f0))), 0x10c20d42u);
  /* 10c20d42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c20d44 je 0x10c20d52 */
  if (C.zf) goto L_10c20d52;
  /* 10c20d46 mov dword ptr [0x10c3e69c], 1 */
  w32((uint32_t)(0x10c3e69c), (0x1u));
  /* 10c20d50 jmp 0x10c20d7e */
  goto L_10c20d7e;
L_10c20d52:;
  /* 10c20d52 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10c20d55 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20d56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c20d58 push 0x10c39f1c */
  push32((uint32_t)(0x10c39f1cu));
  /* 10c20d5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c20d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20d61 call dword ptr [0x10c402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402ec))), 0x10c20d67u);
  /* 10c20d67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c20d69 je 0x10c20d77 */
  if (C.zf) goto L_10c20d77;
  /* 10c20d6b mov dword ptr [0x10c3e69c], 2 */
  w32((uint32_t)(0x10c3e69c), (0x2u));
  /* 10c20d75 jmp 0x10c20d7e */
  goto L_10c20d7e;
L_10c20d77:;
  /* 10c20d77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20d79 jmp 0x10c20f59 */
  goto L_10c20f59;
L_10c20d7e:;
  /* 10c20d7e cmp dword ptr [0x10c3e69c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e69c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20d85 jne 0x10c20da2 */
  if (!C.zf) goto L_10c20da2;
  /* 10c20d87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20d8a push edx */
  push32((uint32_t)(EDX));
  /* 10c20d8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20d8e push eax */
  push32((uint32_t)(EAX));
  /* 10c20d8f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20d92 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20d93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20d96 push edx */
  push32((uint32_t)(EDX));
  /* 10c20d97 call dword ptr [0x10c402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402f0))), 0x10c20d9du);
  /* 10c20d9d jmp 0x10c20f59 */
  goto L_10c20f59;
L_10c20da2:;
  /* 10c20da2 cmp dword ptr [0x10c3e69c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e69c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20da9 jne 0x10c20f57 */
  if (!C.zf) goto L_10c20f57;
  /* 10c20daf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20db3 jne 0x10c20dbd */
  if (!C.zf) goto L_10c20dbd;
  /* 10c20db5 mov eax, dword ptr [0x10c3e610] */
  EAX = (r32((uint32_t)(0x10c3e610)));
  /* 10c20dba mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10c20dbd:;
  /* 10c20dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20dbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20dc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20dc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20dc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20dcc push edx */
  push32((uint32_t)(EDX));
  /* 10c20dcd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c20dd2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c20dd5 push eax */
  push32((uint32_t)(EAX));
  /* 10c20dd6 call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c20ddcu);
  /* 10c20ddc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c20ddf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20de3 jne 0x10c20dec */
  if (!C.zf) goto L_10c20dec;
  /* 10c20de5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20de7 jmp 0x10c20f59 */
  goto L_10c20f59;
L_10c20dec:;
  /* 10c20dec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c20df3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c20df6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20df9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c20dfb call 0x10c15a40 */
  push32(0x10c20e00u); f_10c15a40();
  /* 10c20e00 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10c20e03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c20e06 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10c20e09 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c20e0c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c20e0f push edx */
  push32((uint32_t)(EDX));
  /* 10c20e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20e12 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c20e15 push eax */
  push32((uint32_t)(EAX));
  /* 10c20e16 call 0x10c16610 */
  push32(0x10c20e1bu); f_10c16610();
  /* 10c20e1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20e1e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c20e25 jmp 0x10c20e3e */
  goto L_10c20e3e;
  /* 10c20e27 mov eax, 1 */
  EAX = (0x1u);
  /* 10c20e2c ret  */
  ESPCHK(0x10c20d00u, _esp0);
  ESP += 4; return;
  /* 10c20e2d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c20e30 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10c20e37 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c20e3e:;
  /* 10c20e3e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20e42 jne 0x10c20e4b */
  if (!C.zf) goto L_10c20e4b;
  /* 10c20e44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20e46 jmp 0x10c20f59 */
  goto L_10c20f59;
L_10c20e4b:;
  /* 10c20e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20e4f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c20e52 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20e53 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c20e56 push edx */
  push32((uint32_t)(EDX));
  /* 10c20e57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20e5a push eax */
  push32((uint32_t)(EAX));
  /* 10c20e5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20e5e push ecx */
  push32((uint32_t)(ECX));
  /* 10c20e5f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c20e64 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c20e67 push edx */
  push32((uint32_t)(EDX));
  /* 10c20e68 call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c20e6eu);
  /* 10c20e6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c20e70 jne 0x10c20e79 */
  if (!C.zf) goto L_10c20e79;
  /* 10c20e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20e74 jmp 0x10c20f59 */
  goto L_10c20f59;
L_10c20e79:;
  /* 10c20e79 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c20e80 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c20e83 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10c20e87 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20e8a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c20e8c call 0x10c15a40 */
  push32(0x10c20e91u); f_10c15a40();
  /* 10c20e91 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10c20e94 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c20e97 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10c20e9a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c20e9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c20ea4 jmp 0x10c20ebd */
  goto L_10c20ebd;
  /* 10c20ea6 mov eax, 1 */
  EAX = (0x1u);
  /* 10c20eab ret  */
  ESPCHK(0x10c20d00u, _esp0);
  ESP += 4; return;
  /* 10c20eac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c20eaf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c20eb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c20ebd:;
  /* 10c20ebd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20ec1 jne 0x10c20eca */
  if (!C.zf) goto L_10c20eca;
  /* 10c20ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20ec5 jmp 0x10c20f59 */
  goto L_10c20f59;
L_10c20eca:;
  /* 10c20eca cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20ece jne 0x10c20ed9 */
  if (!C.zf) goto L_10c20ed9;
  /* 10c20ed0 mov edx, dword ptr [0x10c3e600] */
  EDX = (r32((uint32_t)(0x10c3e600)));
  /* 10c20ed6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10c20ed9:;
  /* 10c20ed9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20edc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c20edf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10c20ee5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20ee8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c20eeb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10c20ef2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c20ef5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20ef6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c20ef9 push edx */
  push32((uint32_t)(EDX));
  /* 10c20efa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c20efd push eax */
  push32((uint32_t)(EAX));
  /* 10c20efe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20f01 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20f02 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c20f05 push edx */
  push32((uint32_t)(EDX));
  /* 10c20f06 call dword ptr [0x10c402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402ec))), 0x10c20f0cu);
  /* 10c20f0c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c20f0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20f12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c20f15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c20f17 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10c20f1c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20f22 je 0x10c20f38 */
  if (C.zf) goto L_10c20f38;
  /* 10c20f24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20f27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c20f2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c20f2c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c20f30 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20f36 je 0x10c20f3c */
  if (C.zf) goto L_10c20f3c;
L_10c20f38:;
  /* 10c20f38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c20f3a jmp 0x10c20f59 */
  goto L_10c20f59;
L_10c20f3c:;
  /* 10c20f3c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c20f3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c20f41 push eax */
  push32((uint32_t)(EAX));
  /* 10c20f42 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c20f45 push ecx */
  push32((uint32_t)(ECX));
  /* 10c20f46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c20f49 push edx */
  push32((uint32_t)(EDX));
  /* 10c20f4a call 0x10c1a790 */
  push32(0x10c20f4fu); f_10c1a790();
  /* 10c20f4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c20f52 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c20f55 jmp 0x10c20f59 */
  goto L_10c20f59;
L_10c20f57:;
  /* 10c20f57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c20f59:;
  /* 10c20f59 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10c20f5c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c20f5f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c20f66 pop edi */
  EDI = (pop32());
  /* 10c20f67 pop esi */
  ESI = (pop32());
  /* 10c20f68 pop ebx */
  EBX = (pop32());
  /* 10c20f69 mov esp, ebp */
  ESP = (EBP);
  /* 10c20f6b pop ebp */
  EBP = (pop32());
  /* 10c20f6c ret  */
  ESPCHK(0x10c20d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f70 @ 0x10c20f70 (208 bytes, 85 insns) */
void f_10c20f70(void) {
  FTRACE(0x10c20f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c20f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c20f71 mov ebp, esp */
  EBP = (ESP);
  /* 10c20f73 push edi */
  push32((uint32_t)(EDI));
  /* 10c20f74 push esi */
  push32((uint32_t)(ESI));
  /* 10c20f75 push ebx */
  push32((uint32_t)(EBX));
  /* 10c20f76 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c20f79 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c20f7c lea eax, [0x10c3e5f8] */
  EAX = ((uint32_t)(0x10c3e5f8));
  /* 10c20f82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20f86 jne 0x10c20fc3 */
  if (!C.zf) goto L_10c20fc3;
  /* 10c20f88 mov al, 0xff */
  AL = (0xffu);
  /* 10c20f8a mov edi, edi */
  EDI = (EDI);
L_10c20f8c:;
  /* 10c20f8c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c20f8e je 0x10c20fbe */
  if (C.zf) goto L_10c20fbe;
  /* 10c20f90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c20f92 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c20f93 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10c20f95 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c20f96 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c20f98 je 0x10c20f8c */
  if (C.zf) goto L_10c20f8c;
  /* 10c20f9a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c20f9c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c20f9e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c20fa0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c20fa3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c20fa5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c20fa7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10c20fa9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c20fab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c20fad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c20faf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10c20fb2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c20fb4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10c20fb6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c20fb8 je 0x10c20f8c */
  if (C.zf) goto L_10c20f8c;
  /* 10c20fba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10c20fbc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10c20fbe:;
  /* 10c20fbe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10c20fc1 jmp 0x10c2103b */
  goto L_10c2103b;
L_10c20fc3:;
  /* 10c20fc3 lock inc dword ptr [0x10c3e78c] */
  x86_unimpl("lock inc @ 0x10c20fc3");
  /* 10c20fca cmp dword ptr [0x10c3e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c20fd1 jg 0x10c20fd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c20fd7;
  /* 10c20fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c20fd5 jmp 0x10c20fec */
  goto L_10c20fec;
L_10c20fd7:;
  /* 10c20fd7 lock dec dword ptr [0x10c3e78c] */
  x86_unimpl("lock dec @ 0x10c20fd7");
  /* 10c20fde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c20fe0 call 0x10c162a0 */
  push32(0x10c20fe5u); f_10c162a0();
  /* 10c20fe5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10c20fec:;
  /* 10c20fec mov eax, 0xff */
  EAX = (0xffu);
  /* 10c20ff1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10c20ff3 nop  */
  /* nop */
L_10c20ff4:;
  /* 10c20ff4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c20ff6 je 0x10c2101f */
  if (C.zf) goto L_10c2101f;
  /* 10c20ff8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c20ffa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c20ffb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10c20ffd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c20ffe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c21000 je 0x10c20ff4 */
  if (C.zf) goto L_10c20ff4;
  /* 10c21002 push eax */
  push32((uint32_t)(EAX));
  /* 10c21003 push ebx */
  push32((uint32_t)(EBX));
  /* 10c21004 call 0x10c220e0 */
  push32(0x10c21009u); f_10c220e0();
  /* 10c21009 mov ebx, eax */
  EBX = (EAX);
  /* 10c2100b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2100e call 0x10c220e0 */
  push32(0x10c21013u); f_10c220e0();
  /* 10c21013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21016 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c21018 je 0x10c20ff4 */
  if (C.zf) goto L_10c20ff4;
  /* 10c2101a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c2101c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10c2101f:;
  /* 10c2101f mov ebx, eax */
  EBX = (EAX);
  /* 10c21021 pop eax */
  EAX = (pop32());
  /* 10c21022 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21024 jne 0x10c2102f */
  if (!C.zf) goto L_10c2102f;
  /* 10c21026 lock dec dword ptr [0x10c3e78c] */
  x86_unimpl("lock dec @ 0x10c21026");
  /* 10c2102d jmp 0x10c21039 */
  goto L_10c21039;
L_10c2102f:;
  /* 10c2102f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c21031 call 0x10c16340 */
  push32(0x10c21036u); f_10c16340();
  /* 10c21036 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c21039:;
  /* 10c21039 mov eax, ebx */
  EAX = (EBX);
L_10c2103b:;
  /* 10c2103b pop ebx */
  EBX = (pop32());
  /* 10c2103c pop esi */
  ESI = (pop32());
  /* 10c2103d pop edi */
  EDI = (pop32());
  /* 10c2103e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c2103f ret  */
  ESPCHK(0x10c20f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011040 @ 0x10c21040 (257 bytes, 103 insns) */
void f_10c21040(void) {
  FTRACE(0x10c21040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c21040 push ebp */
  push32((uint32_t)(EBP));
  /* 10c21041 mov ebp, esp */
  EBP = (ESP);
  /* 10c21043 push edi */
  push32((uint32_t)(EDI));
  /* 10c21044 push esi */
  push32((uint32_t)(ESI));
  /* 10c21045 push ebx */
  push32((uint32_t)(EBX));
  /* 10c21046 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21049 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2104b je 0x10c2113a */
  if (C.zf) goto L_10c2113a;
  /* 10c21051 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21054 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c21057 lea eax, [0x10c3e5f8] */
  EAX = ((uint32_t)(0x10c3e5f8));
  /* 10c2105d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21061 jne 0x10c210b1 */
  if (!C.zf) goto L_10c210b1;
  /* 10c21063 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10c21065 mov bl, 0x5a */
  BL = (0x5au);
  /* 10c21067 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10c21069 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10c2106c:;
  /* 10c2106c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10c2106e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10c21070 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10c21072 je 0x10c21095 */
  if (C.zf) goto L_10c21095;
  /* 10c21074 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10c21076 je 0x10c21095 */
  if (C.zf) goto L_10c21095;
  /* 10c21078 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c21079 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c2107a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c2107c jb 0x10c21084 */
  if (C.cf) goto L_10c21084;
  /* 10c2107e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c21080 ja 0x10c21084 */
  if ((!C.cf&&!C.zf)) goto L_10c21084;
  /* 10c21082 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10c21084:;
  /* 10c21084 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c21086 jb 0x10c2108e */
  if (C.cf) goto L_10c2108e;
  /* 10c21088 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c2108a ja 0x10c2108e */
  if ((!C.cf&&!C.zf)) goto L_10c2108e;
  /* 10c2108c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10c2108e:;
  /* 10c2108e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c21090 jne 0x10c2109f */
  if (!C.zf) goto L_10c2109f;
  /* 10c21092 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c21093 jne 0x10c2106c */
  if (!C.zf) goto L_10c2106c;
L_10c21095:;
  /* 10c21095 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c21097 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c21099 je 0x10c2113a */
  if (C.zf) goto L_10c2113a;
L_10c2109f:;
  /* 10c2109f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10c210a4 jb 0x10c2113a */
  if (C.cf) goto L_10c2113a;
  /* 10c210aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c210ac jmp 0x10c2113a */
  goto L_10c2113a;
L_10c210b1:;
  /* 10c210b1 lock inc dword ptr [0x10c3e78c] */
  x86_unimpl("lock inc @ 0x10c210b1");
  /* 10c210b8 cmp dword ptr [0x10c3e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c210bf jg 0x10c210c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c210c5;
  /* 10c210c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c210c3 jmp 0x10c210de */
  goto L_10c210de;
L_10c210c5:;
  /* 10c210c5 lock dec dword ptr [0x10c3e78c] */
  x86_unimpl("lock dec @ 0x10c210c5");
  /* 10c210cc mov ebx, ecx */
  EBX = (ECX);
  /* 10c210ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c210d0 call 0x10c162a0 */
  push32(0x10c210d5u); f_10c162a0();
  /* 10c210d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10c210dc mov ecx, ebx */
  ECX = (EBX);
L_10c210de:;
  /* 10c210de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c210e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10c210e2 mov edi, edi */
  EDI = (EDI);
L_10c210e4:;
  /* 10c210e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c210e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c210e8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10c210ea je 0x10c2110f */
  if (C.zf) goto L_10c2110f;
  /* 10c210ec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10c210ee je 0x10c2110f */
  if (C.zf) goto L_10c2110f;
  /* 10c210f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c210f1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c210f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c210f3 push eax */
  push32((uint32_t)(EAX));
  /* 10c210f4 push ebx */
  push32((uint32_t)(EBX));
  /* 10c210f5 call 0x10c220e0 */
  push32(0x10c210fau); f_10c220e0();
  /* 10c210fa mov ebx, eax */
  EBX = (EAX);
  /* 10c210fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c210ff call 0x10c220e0 */
  push32(0x10c21104u); f_10c220e0();
  /* 10c21104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21107 pop ecx */
  ECX = (pop32());
  /* 10c21108 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2110a jne 0x10c21115 */
  if (!C.zf) goto L_10c21115;
  /* 10c2110c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c2110d jne 0x10c210e4 */
  if (!C.zf) goto L_10c210e4;
L_10c2110f:;
  /* 10c2110f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c21111 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21113 je 0x10c2111e */
  if (C.zf) goto L_10c2111e;
L_10c21115:;
  /* 10c21115 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10c2111a jb 0x10c2111e */
  if (C.cf) goto L_10c2111e;
  /* 10c2111c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10c2111e:;
  /* 10c2111e pop eax */
  EAX = (pop32());
  /* 10c2111f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21121 jne 0x10c2112c */
  if (!C.zf) goto L_10c2112c;
  /* 10c21123 lock dec dword ptr [0x10c3e78c] */
  x86_unimpl("lock dec @ 0x10c21123");
  /* 10c2112a jmp 0x10c2113a */
  goto L_10c2113a;
L_10c2112c:;
  /* 10c2112c mov ebx, ecx */
  EBX = (ECX);
  /* 10c2112e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c21130 call 0x10c16340 */
  push32(0x10c21135u); f_10c16340();
  /* 10c21135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21138 mov ecx, ebx */
  ECX = (EBX);
L_10c2113a:;
  /* 10c2113a mov eax, ecx */
  EAX = (ECX);
  /* 10c2113c pop ebx */
  EBX = (pop32());
  /* 10c2113d pop esi */
  ESI = (pop32());
  /* 10c2113e pop edi */
  EDI = (pop32());
  /* 10c2113f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10c21140 ret  */
  ESPCHK(0x10c21040u, _esp0);
  ESP += 4; return;
}

/* FUN_10011150 @ 0x10c21150 (255 bytes, 88 insns) */
void f_10c21150(void) {
  FTRACE(0x10c21150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c21150 push ebp */
  push32((uint32_t)(EBP));
  /* 10c21151 mov ebp, esp */
  EBP = (ESP);
  /* 10c21153 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10c21156:;
  /* 10c21156 cmp dword ptr [0x10c3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2115d jle 0x10c21176 */
  if ((C.zf||C.sf!=C.of)) goto L_10c21176;
  /* 10c2115f push 8 */
  push32((uint32_t)(0x8u));
  /* 10c21161 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21164 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c21166 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c21168 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21169 call 0x10c188b0 */
  push32(0x10c2116eu); f_10c188b0();
  /* 10c2116e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c21174 jmp 0x10c2118f */
  goto L_10c2118f;
L_10c21176:;
  /* 10c21176 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21179 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2117b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c2117d mov ecx, dword ptr [0x10c3cc98] */
  ECX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c21183 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c21185 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c21189 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c2118c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c2118f:;
  /* 10c2118f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21193 je 0x10c211a0 */
  if (C.zf) goto L_10c211a0;
  /* 10c21195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21198 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2119b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c2119e jmp 0x10c21156 */
  goto L_10c21156;
L_10c211a0:;
  /* 10c211a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c211a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c211a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c211a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c211aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c211ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c211b0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c211b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c211b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c211b9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c211bd je 0x10c211c5 */
  if (C.zf) goto L_10c211c5;
  /* 10c211bf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c211c3 jne 0x10c211d8 */
  if (!C.zf) goto L_10c211d8;
L_10c211c5:;
  /* 10c211c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c211c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c211ca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c211cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c211cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c211d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c211d5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c211d8:;
  /* 10c211d8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c211df:;
  /* 10c211df cmp dword ptr [0x10c3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c211e6 jle 0x10c211fb */
  if ((C.zf||C.sf!=C.of)) goto L_10c211fb;
  /* 10c211e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c211ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c211ed push edx */
  push32((uint32_t)(EDX));
  /* 10c211ee call 0x10c188b0 */
  push32(0x10c211f3u); f_10c188b0();
  /* 10c211f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c211f6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c211f9 jmp 0x10c21210 */
  goto L_10c21210;
L_10c211fb:;
  /* 10c211fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c211fe mov ecx, dword ptr [0x10c3cc98] */
  ECX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c21204 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c21206 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c2120a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c2120d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c21210:;
  /* 10c21210 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21214 je 0x10c2123b */
  if (C.zf) goto L_10c2123b;
  /* 10c21216 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21219 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c2121c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2121f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10c21223 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c21226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21229 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2122b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c2122d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c21230 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21233 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21236 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c21239 jmp 0x10c211df */
  goto L_10c211df;
L_10c2123b:;
  /* 10c2123b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2123f jne 0x10c21248 */
  if (!C.zf) goto L_10c21248;
  /* 10c21241 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21244 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c21246 jmp 0x10c2124b */
  goto L_10c2124b;
L_10c21248:;
  /* 10c21248 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c2124b:;
  /* 10c2124b mov esp, ebp */
  ESP = (EBP);
  /* 10c2124d pop ebp */
  EBP = (pop32());
  /* 10c2124e ret  */
  ESPCHK(0x10c21150u, _esp0);
  ESP += 4; return;
}

/* FUN_10011250 @ 0x10c21250 (17 bytes, 8 insns) */
void f_10c21250(void) {
  FTRACE(0x10c21250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c21250 push ebp */
  push32((uint32_t)(EBP));
  /* 10c21251 mov ebp, esp */
  EBP = (ESP);
  /* 10c21253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21256 push eax */
  push32((uint32_t)(EAX));
  /* 10c21257 call 0x10c21150 */
  push32(0x10c2125cu); f_10c21150();
  /* 10c2125c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2125f pop ebp */
  EBP = (pop32());
  /* 10c21260 ret  */
  ESPCHK(0x10c21250u, _esp0);
  ESP += 4; return;
}

/* FUN_10011270 @ 0x10c21270 (297 bytes, 106 insns) */
void f_10c21270(void) {
  FTRACE(0x10c21270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c21270 push ebp */
  push32((uint32_t)(EBP));
  /* 10c21271 mov ebp, esp */
  EBP = (ESP);
  /* 10c21273 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21276 push esi */
  push32((uint32_t)(ESI));
L_10c21277:;
  /* 10c21277 cmp dword ptr [0x10c3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2127e jle 0x10c21297 */
  if ((C.zf||C.sf!=C.of)) goto L_10c21297;
  /* 10c21280 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c21282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21285 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c21287 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c21289 push ecx */
  push32((uint32_t)(ECX));
  /* 10c2128a call 0x10c188b0 */
  push32(0x10c2128fu); f_10c188b0();
  /* 10c2128f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21292 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c21295 jmp 0x10c212b0 */
  goto L_10c212b0;
L_10c21297:;
  /* 10c21297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2129a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2129c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c2129e mov ecx, dword ptr [0x10c3cc98] */
  ECX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c212a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c212a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c212aa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10c212ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c212b0:;
  /* 10c212b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c212b4 je 0x10c212c1 */
  if (C.zf) goto L_10c212c1;
  /* 10c212b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c212b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c212bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c212bf jmp 0x10c21277 */
  goto L_10c21277;
L_10c212c1:;
  /* 10c212c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c212c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c212c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c212c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c212cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c212ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c212d1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c212d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c212d7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c212da cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c212de je 0x10c212e6 */
  if (C.zf) goto L_10c212e6;
  /* 10c212e0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c212e4 jne 0x10c212f9 */
  if (!C.zf) goto L_10c212f9;
L_10c212e6:;
  /* 10c212e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c212e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c212eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c212ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c212f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c212f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c212f6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10c212f9:;
  /* 10c212f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c21300 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c21307:;
  /* 10c21307 cmp dword ptr [0x10c3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2130e jle 0x10c21323 */
  if ((C.zf||C.sf!=C.of)) goto L_10c21323;
  /* 10c21310 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c21312 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c21315 push edx */
  push32((uint32_t)(EDX));
  /* 10c21316 call 0x10c188b0 */
  push32(0x10c2131bu); f_10c188b0();
  /* 10c2131b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2131e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c21321 jmp 0x10c21338 */
  goto L_10c21338;
L_10c21323:;
  /* 10c21323 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c21326 mov ecx, dword ptr [0x10c3cc98] */
  ECX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c2132c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c2132e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10c21332 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c21335 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10c21338:;
  /* 10c21338 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2133c je 0x10c21379 */
  if (C.zf) goto L_10c21379;
  /* 10c2133e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21340 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c21342 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21345 push eax */
  push32((uint32_t)(EAX));
  /* 10c21346 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21349 push ecx */
  push32((uint32_t)(ECX));
  /* 10c2134a call 0x10c22210 */
  push32(0x10c2134fu); f_10c22210();
  /* 10c2134f mov ecx, eax */
  ECX = (EAX);
  /* 10c21351 mov esi, edx */
  ESI = (EDX);
  /* 10c21353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c21356 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21359 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c2135a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2135c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2135e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c21361 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10c21364 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21369 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c2136b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c2136e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21371 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21374 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10c21377 jmp 0x10c21307 */
  goto L_10c21307;
L_10c21379:;
  /* 10c21379 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2137d jne 0x10c2138e */
  if (!C.zf) goto L_10c2138e;
  /* 10c2137f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21382 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c21384 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21387 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2138a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c2138c jmp 0x10c21394 */
  goto L_10c21394;
L_10c2138e:;
  /* 10c2138e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21391 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10c21394:;
  /* 10c21394 pop esi */
  ESI = (pop32());
  /* 10c21395 mov esp, ebp */
  ESP = (EBP);
  /* 10c21397 pop ebp */
  EBP = (pop32());
  /* 10c21398 ret  */
  ESPCHK(0x10c21270u, _esp0);
  ESP += 4; return;
}

/* FUN_100113a0 @ 0x10c213a0 (61 bytes, 18 insns) */
void f_10c213a0(void) {
  FTRACE(0x10c213a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c213a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c213a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c213a3 cmp dword ptr [0x10c3e758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c213aa jne 0x10c213db */
  if (!C.zf) goto L_10c213db;
  /* 10c213ac push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c213ae call 0x10c162a0 */
  push32(0x10c213b3u); f_10c162a0();
  /* 10c213b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c213b6 cmp dword ptr [0x10c3e758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c213bd jne 0x10c213d1 */
  if (!C.zf) goto L_10c213d1;
  /* 10c213bf call 0x10c21400 */
  push32(0x10c213c4u); f_10c21400();
  /* 10c213c4 mov eax, dword ptr [0x10c3e758] */
  EAX = (r32((uint32_t)(0x10c3e758)));
  /* 10c213c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c213cc mov dword ptr [0x10c3e758], eax */
  w32((uint32_t)(0x10c3e758), (EAX));
L_10c213d1:;
  /* 10c213d1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c213d3 call 0x10c16340 */
  push32(0x10c213d8u); f_10c16340();
  /* 10c213d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c213db:;
  /* 10c213db pop ebp */
  EBP = (pop32());
  /* 10c213dc ret  */
  ESPCHK(0x10c213a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113e0 @ 0x10c213e0 (30 bytes, 11 insns) */
void f_10c213e0(void) {
  FTRACE(0x10c213e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c213e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c213e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c213e3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c213e5 call 0x10c162a0 */
  push32(0x10c213eau); f_10c162a0();
  /* 10c213ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c213ed call 0x10c21400 */
  push32(0x10c213f2u); f_10c21400();
  /* 10c213f2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c213f4 call 0x10c16340 */
  push32(0x10c213f9u); f_10c16340();
  /* 10c213f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c213fc pop ebp */
  EBP = (pop32());
  /* 10c213fd ret  */
  ESPCHK(0x10c213e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011400 @ 0x10c21400 (939 bytes, 266 insns) */
void f_10c21400(void) {
  FTRACE(0x10c21400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c21400 push ebp */
  push32((uint32_t)(EBP));
  /* 10c21401 mov ebp, esp */
  EBP = (ESP);
  /* 10c21403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21406 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c2140d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c2140f call 0x10c162a0 */
  push32(0x10c21414u); f_10c162a0();
  /* 10c21414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21417 mov dword ptr [0x10c3e6a0], 0 */
  w32((uint32_t)(0x10c3e6a0), (0x0u));
  /* 10c21421 mov dword ptr [0x10c3de38], 0xffffffff */
  w32((uint32_t)(0x10c3de38), (0xffffffffu));
  /* 10c2142b mov eax, dword ptr [0x10c3de38] */
  EAX = (r32((uint32_t)(0x10c3de38)));
  /* 10c21430 mov dword ptr [0x10c3de28], eax */
  w32((uint32_t)(0x10c3de28), (EAX));
  /* 10c21435 push 0x10c3a850 */
  push32((uint32_t)(0x10c3a850u));
  /* 10c2143a call 0x10c22280 */
  push32(0x10c2143fu); f_10c22280();
  /* 10c2143f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21442 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c21445 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21449 jne 0x10c21583 */
  if (!C.zf) goto L_10c21583;
  /* 10c2144f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c21451 call 0x10c16340 */
  push32(0x10c21456u); f_10c16340();
  /* 10c21456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21459 push 0x10c3e6a8 */
  push32((uint32_t)(0x10c3e6a8u));
  /* 10c2145e call dword ptr [0x10c402a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a0))), 0x10c21464u);
  /* 10c21464 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21467 je 0x10c2157e */
  if (C.zf) goto L_10c2157e;
  /* 10c2146d mov dword ptr [0x10c3e6a0], 1 */
  w32((uint32_t)(0x10c3e6a0), (0x1u));
  /* 10c21477 mov ecx, dword ptr [0x10c3e6a8] */
  ECX = (r32((uint32_t)(0x10c3e6a8)));
  /* 10c2147d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21480 mov dword ptr [0x10c3dd90], ecx */
  w32((uint32_t)(0x10c3dd90), (ECX));
  /* 10c21486 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c21488 mov dx, word ptr [0x10c3e6ee] */
  DX = (r16((uint32_t)(0x10c3e6ee)));
  /* 10c2148f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c21491 je 0x10c214a9 */
  if (C.zf) goto L_10c214a9;
  /* 10c21493 mov eax, dword ptr [0x10c3e6fc] */
  EAX = (r32((uint32_t)(0x10c3e6fc)));
  /* 10c21498 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c2149b mov ecx, dword ptr [0x10c3dd90] */
  ECX = (r32((uint32_t)(0x10c3dd90)));
  /* 10c214a1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c214a3 mov dword ptr [0x10c3dd90], ecx */
  w32((uint32_t)(0x10c3dd90), (ECX));
L_10c214a9:;
  /* 10c214a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c214ab mov dx, word ptr [0x10c3e742] */
  DX = (r16((uint32_t)(0x10c3e742)));
  /* 10c214b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c214b4 je 0x10c214de */
  if (C.zf) goto L_10c214de;
  /* 10c214b6 cmp dword ptr [0x10c3e750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c214bd je 0x10c214de */
  if (C.zf) goto L_10c214de;
  /* 10c214bf mov dword ptr [0x10c3dd94], 1 */
  w32((uint32_t)(0x10c3dd94), (0x1u));
  /* 10c214c9 mov eax, dword ptr [0x10c3e750] */
  EAX = (r32((uint32_t)(0x10c3e750)));
  /* 10c214ce sub eax, dword ptr [0x10c3e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3e6fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c214d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c214d7 mov dword ptr [0x10c3dd98], eax */
  w32((uint32_t)(0x10c3dd98), (EAX));
  /* 10c214dc jmp 0x10c214f2 */
  goto L_10c214f2;
L_10c214de:;
  /* 10c214de mov dword ptr [0x10c3dd94], 0 */
  w32((uint32_t)(0x10c3dd94), (0x0u));
  /* 10c214e8 mov dword ptr [0x10c3dd98], 0 */
  w32((uint32_t)(0x10c3dd98), (0x0u));
L_10c214f2:;
  /* 10c214f2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10c214f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c214f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c214f8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10c214fa mov edx, dword ptr [0x10c3de1c] */
  EDX = (r32((uint32_t)(0x10c3de1c)));
  /* 10c21500 push edx */
  push32((uint32_t)(EDX));
  /* 10c21501 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c21503 push 0x10c3e6ac */
  push32((uint32_t)(0x10c3e6acu));
  /* 10c21508 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c2150d mov eax, dword ptr [0x10c3e610] */
  EAX = (r32((uint32_t)(0x10c3e610)));
  /* 10c21512 push eax */
  push32((uint32_t)(EAX));
  /* 10c21513 call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c21519u);
  /* 10c21519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c2151b je 0x10c2152f */
  if (C.zf) goto L_10c2152f;
  /* 10c2151d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21521 jne 0x10c2152f */
  if (!C.zf) goto L_10c2152f;
  /* 10c21523 mov ecx, dword ptr [0x10c3de1c] */
  ECX = (r32((uint32_t)(0x10c3de1c)));
  /* 10c21529 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10c2152d jmp 0x10c21538 */
  goto L_10c21538;
L_10c2152f:;
  /* 10c2152f mov edx, dword ptr [0x10c3de1c] */
  EDX = (r32((uint32_t)(0x10c3de1c)));
  /* 10c21535 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10c21538:;
  /* 10c21538 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10c2153b push eax */
  push32((uint32_t)(EAX));
  /* 10c2153c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c2153e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10c21540 mov ecx, dword ptr [0x10c3de20] */
  ECX = (r32((uint32_t)(0x10c3de20)));
  /* 10c21546 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21547 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c21549 push 0x10c3e700 */
  push32((uint32_t)(0x10c3e700u));
  /* 10c2154e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c21553 mov edx, dword ptr [0x10c3e610] */
  EDX = (r32((uint32_t)(0x10c3e610)));
  /* 10c21559 push edx */
  push32((uint32_t)(EDX));
  /* 10c2155a call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c21560u);
  /* 10c21560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c21562 je 0x10c21575 */
  if (C.zf) goto L_10c21575;
  /* 10c21564 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21568 jne 0x10c21575 */
  if (!C.zf) goto L_10c21575;
  /* 10c2156a mov eax, dword ptr [0x10c3de20] */
  EAX = (r32((uint32_t)(0x10c3de20)));
  /* 10c2156f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10c21573 jmp 0x10c2157e */
  goto L_10c2157e;
L_10c21575:;
  /* 10c21575 mov ecx, dword ptr [0x10c3de20] */
  ECX = (r32((uint32_t)(0x10c3de20)));
  /* 10c2157b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10c2157e:;
  /* 10c2157e jmp 0x10c217a7 */
  goto L_10c217a7;
L_10c21583:;
  /* 10c21583 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21586 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c21589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c2158b je 0x10c215ad */
  if (C.zf) goto L_10c215ad;
  /* 10c2158d cmp dword ptr [0x10c3e754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21594 je 0x10c215bc */
  if (C.zf) goto L_10c215bc;
  /* 10c21596 mov ecx, dword ptr [0x10c3e754] */
  ECX = (r32((uint32_t)(0x10c3e754)));
  /* 10c2159c push ecx */
  push32((uint32_t)(ECX));
  /* 10c2159d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c215a0 push edx */
  push32((uint32_t)(EDX));
  /* 10c215a1 call 0x10c1e530 */
  push32(0x10c215a6u); f_10c1e530();
  /* 10c215a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c215a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c215ab jne 0x10c215bc */
  if (!C.zf) goto L_10c215bc;
L_10c215ad:;
  /* 10c215ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c215af call 0x10c16340 */
  push32(0x10c215b4u); f_10c16340();
  /* 10c215b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c215b7 jmp 0x10c217a7 */
  goto L_10c217a7;
L_10c215bc:;
  /* 10c215bc push 2 */
  push32((uint32_t)(0x2u));
  /* 10c215be mov eax, dword ptr [0x10c3e754] */
  EAX = (r32((uint32_t)(0x10c3e754)));
  /* 10c215c3 push eax */
  push32((uint32_t)(EAX));
  /* 10c215c4 call 0x10c13330 */
  push32(0x10c215c9u); f_10c13330();
  /* 10c215c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c215cc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10c215d1 push 0x10c3a848 */
  push32((uint32_t)(0x10c3a848u));
  /* 10c215d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c215d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c215db push ecx */
  push32((uint32_t)(ECX));
  /* 10c215dc call 0x10c156d0 */
  push32(0x10c215e1u); f_10c156d0();
  /* 10c215e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c215e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c215e7 push eax */
  push32((uint32_t)(EAX));
  /* 10c215e8 call 0x10c128a0 */
  push32(0x10c215edu); f_10c128a0();
  /* 10c215ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c215f0 mov dword ptr [0x10c3e754], eax */
  w32((uint32_t)(0x10c3e754), (EAX));
  /* 10c215f5 cmp dword ptr [0x10c3e754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c215fc jne 0x10c2160d */
  if (!C.zf) goto L_10c2160d;
  /* 10c215fe push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c21600 call 0x10c16340 */
  push32(0x10c21605u); f_10c16340();
  /* 10c21605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21608 jmp 0x10c217a7 */
  goto L_10c217a7;
L_10c2160d:;
  /* 10c2160d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21610 push edx */
  push32((uint32_t)(EDX));
  /* 10c21611 mov eax, dword ptr [0x10c3e754] */
  EAX = (r32((uint32_t)(0x10c3e754)));
  /* 10c21616 push eax */
  push32((uint32_t)(EAX));
  /* 10c21617 call 0x10c15850 */
  push32(0x10c2161cu); f_10c15850();
  /* 10c2161c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2161f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c21621 call 0x10c16340 */
  push32(0x10c21626u); f_10c16340();
  /* 10c21626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21629 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c2162b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c2162e push ecx */
  push32((uint32_t)(ECX));
  /* 10c2162f mov edx, dword ptr [0x10c3de1c] */
  EDX = (r32((uint32_t)(0x10c3de1c)));
  /* 10c21635 push edx */
  push32((uint32_t)(EDX));
  /* 10c21636 call 0x10c160c0 */
  push32(0x10c2163bu); f_10c160c0();
  /* 10c2163b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2163e mov eax, dword ptr [0x10c3de1c] */
  EAX = (r32((uint32_t)(0x10c3de1c)));
  /* 10c21643 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10c21647 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c2164a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2164d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c21650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21653 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c21656 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21659 jne 0x10c2166d */
  if (!C.zf) goto L_10c2166d;
  /* 10c2165b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2165e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21661 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c21664 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21667 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2166a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c2166d:;
  /* 10c2166d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21670 push eax */
  push32((uint32_t)(EAX));
  /* 10c21671 call 0x10c21150 */
  push32(0x10c21676u); f_10c21150();
  /* 10c21676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21679 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c2167f mov dword ptr [0x10c3dd90], eax */
  w32((uint32_t)(0x10c3dd90), (EAX));
L_10c21684:;
  /* 10c21684 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21687 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c2168a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2168d je 0x10c216a5 */
  if (C.zf) goto L_10c216a5;
  /* 10c2168f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21692 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c21695 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21698 jl 0x10c216b0 */
  if ((C.sf!=C.of)) goto L_10c216b0;
  /* 10c2169a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c2169d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c216a0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c216a3 jg 0x10c216b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c216b0;
L_10c216a5:;
  /* 10c216a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c216a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c216ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c216ae jmp 0x10c21684 */
  goto L_10c21684;
L_10c216b0:;
  /* 10c216b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c216b3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c216b6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c216b9 jne 0x10c21755 */
  if (!C.zf) goto L_10c21755;
  /* 10c216bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c216c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c216c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c216c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c216cb push edx */
  push32((uint32_t)(EDX));
  /* 10c216cc call 0x10c21150 */
  push32(0x10c216d1u); f_10c21150();
  /* 10c216d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c216d4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c216d7 mov ecx, dword ptr [0x10c3dd90] */
  ECX = (r32((uint32_t)(0x10c3dd90)));
  /* 10c216dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c216df mov dword ptr [0x10c3dd90], ecx */
  w32((uint32_t)(0x10c3dd90), (ECX));
L_10c216e5:;
  /* 10c216e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c216e8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c216eb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c216ee jl 0x10c21706 */
  if ((C.sf!=C.of)) goto L_10c21706;
  /* 10c216f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c216f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c216f6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c216f9 jg 0x10c21706 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c21706;
  /* 10c216fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c216fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21701 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c21704 jmp 0x10c216e5 */
  goto L_10c216e5;
L_10c21706:;
  /* 10c21706 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21709 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c2170c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2170f jne 0x10c21755 */
  if (!C.zf) goto L_10c21755;
  /* 10c21711 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21714 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21717 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c2171a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c2171d push ecx */
  push32((uint32_t)(ECX));
  /* 10c2171e call 0x10c21150 */
  push32(0x10c21723u); f_10c21150();
  /* 10c21723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21726 mov edx, dword ptr [0x10c3dd90] */
  EDX = (r32((uint32_t)(0x10c3dd90)));
  /* 10c2172c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2172e mov dword ptr [0x10c3dd90], edx */
  w32((uint32_t)(0x10c3dd90), (EDX));
L_10c21734:;
  /* 10c21734 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21737 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c2173a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2173d jl 0x10c21755 */
  if ((C.sf!=C.of)) goto L_10c21755;
  /* 10c2173f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21742 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c21745 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21748 jg 0x10c21755 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c21755;
  /* 10c2174a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c2174d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21750 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c21753 jmp 0x10c21734 */
  goto L_10c21734;
L_10c21755:;
  /* 10c21755 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21759 je 0x10c21769 */
  if (C.zf) goto L_10c21769;
  /* 10c2175b mov edx, dword ptr [0x10c3dd90] */
  EDX = (r32((uint32_t)(0x10c3dd90)));
  /* 10c21761 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c21763 mov dword ptr [0x10c3dd90], edx */
  w32((uint32_t)(0x10c3dd90), (EDX));
L_10c21769:;
  /* 10c21769 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c2176c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c2176f mov dword ptr [0x10c3dd94], ecx */
  w32((uint32_t)(0x10c3dd94), (ECX));
  /* 10c21775 cmp dword ptr [0x10c3dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2177c je 0x10c2179e */
  if (C.zf) goto L_10c2179e;
  /* 10c2177e push 3 */
  push32((uint32_t)(0x3u));
  /* 10c21780 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21783 push edx */
  push32((uint32_t)(EDX));
  /* 10c21784 mov eax, dword ptr [0x10c3de20] */
  EAX = (r32((uint32_t)(0x10c3de20)));
  /* 10c21789 push eax */
  push32((uint32_t)(EAX));
  /* 10c2178a call 0x10c160c0 */
  push32(0x10c2178fu); f_10c160c0();
  /* 10c2178f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21792 mov ecx, dword ptr [0x10c3de20] */
  ECX = (r32((uint32_t)(0x10c3de20)));
  /* 10c21798 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10c2179c jmp 0x10c217a7 */
  goto L_10c217a7;
L_10c2179e:;
  /* 10c2179e mov edx, dword ptr [0x10c3de20] */
  EDX = (r32((uint32_t)(0x10c3de20)));
  /* 10c217a4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10c217a7:;
  /* 10c217a7 mov esp, ebp */
  ESP = (EBP);
  /* 10c217a9 pop ebp */
  EBP = (pop32());
  /* 10c217aa ret  */
  ESPCHK(0x10c21400u, _esp0);
  ESP += 4; return;
}

/* FUN_100117b0 @ 0x10c217b0 (46 bytes, 18 insns) */
void f_10c217b0(void) {
  FTRACE(0x10c217b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c217b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c217b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c217b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c217b4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c217b6 call 0x10c162a0 */
  push32(0x10c217bbu); f_10c162a0();
  /* 10c217bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c217be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c217c1 push eax */
  push32((uint32_t)(EAX));
  /* 10c217c2 call 0x10c217e0 */
  push32(0x10c217c7u); f_10c217e0();
  /* 10c217c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c217ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c217cd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10c217cf call 0x10c16340 */
  push32(0x10c217d4u); f_10c16340();
  /* 10c217d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c217d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c217da mov esp, ebp */
  ESP = (EBP);
  /* 10c217dc pop ebp */
  EBP = (pop32());
  /* 10c217dd ret  */
  ESPCHK(0x10c217b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117e0 @ 0x10c217e0 (762 bytes, 246 insns) */
void f_10c217e0(void) {
  FTRACE(0x10c217e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c217e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c217e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c217e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c217e4 cmp dword ptr [0x10c3dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c217eb jne 0x10c217f4 */
  if (!C.zf) goto L_10c217f4;
  /* 10c217ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c217ef jmp 0x10c21ad6 */
  goto L_10c21ad6;
L_10c217f4:;
  /* 10c217f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c217f7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c217fa cmp ecx, dword ptr [0x10c3de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21800 jne 0x10c21814 */
  if (!C.zf) goto L_10c21814;
  /* 10c21802 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21805 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c21808 cmp eax, dword ptr [0x10c3de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2180e je 0x10c219db */
  if (C.zf) goto L_10c219db;
L_10c21814:;
  /* 10c21814 cmp dword ptr [0x10c3e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2181b je 0x10c21995 */
  if (C.zf) goto L_10c21995;
  /* 10c21821 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c21823 mov cx, word ptr [0x10c3e740] */
  CX = (r16((uint32_t)(0x10c3e740)));
  /* 10c2182a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c2182c jne 0x10c21889 */
  if (!C.zf) goto L_10c21889;
  /* 10c2182e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c21830 mov dx, word ptr [0x10c3e74e] */
  DX = (r16((uint32_t)(0x10c3e74e)));
  /* 10c21837 push edx */
  push32((uint32_t)(EDX));
  /* 10c21838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2183a mov ax, word ptr [0x10c3e74c] */
  AX = (r16((uint32_t)(0x10c3e74c)));
  /* 10c21840 push eax */
  push32((uint32_t)(EAX));
  /* 10c21841 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c21843 mov cx, word ptr [0x10c3e74a] */
  CX = (r16((uint32_t)(0x10c3e74a)));
  /* 10c2184a push ecx */
  push32((uint32_t)(ECX));
  /* 10c2184b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c2184d mov dx, word ptr [0x10c3e748] */
  DX = (r16((uint32_t)(0x10c3e748)));
  /* 10c21854 push edx */
  push32((uint32_t)(EDX));
  /* 10c21855 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21859 mov ax, word ptr [0x10c3e744] */
  AX = (r16((uint32_t)(0x10c3e744)));
  /* 10c2185f push eax */
  push32((uint32_t)(EAX));
  /* 10c21860 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c21862 mov cx, word ptr [0x10c3e746] */
  CX = (r16((uint32_t)(0x10c3e746)));
  /* 10c21869 push ecx */
  push32((uint32_t)(ECX));
  /* 10c2186a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c2186c mov dx, word ptr [0x10c3e742] */
  DX = (r16((uint32_t)(0x10c3e742)));
  /* 10c21873 push edx */
  push32((uint32_t)(EDX));
  /* 10c21874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21877 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c2187a push ecx */
  push32((uint32_t)(ECX));
  /* 10c2187b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c2187d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c2187f call 0x10c21ae0 */
  push32(0x10c21884u); f_10c21ae0();
  /* 10c21884 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21887 jmp 0x10c218da */
  goto L_10c218da;
L_10c21889:;
  /* 10c21889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c2188b mov dx, word ptr [0x10c3e74e] */
  DX = (r16((uint32_t)(0x10c3e74e)));
  /* 10c21892 push edx */
  push32((uint32_t)(EDX));
  /* 10c21893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21895 mov ax, word ptr [0x10c3e74c] */
  AX = (r16((uint32_t)(0x10c3e74c)));
  /* 10c2189b push eax */
  push32((uint32_t)(EAX));
  /* 10c2189c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2189e mov cx, word ptr [0x10c3e74a] */
  CX = (r16((uint32_t)(0x10c3e74a)));
  /* 10c218a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c218a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c218a8 mov dx, word ptr [0x10c3e748] */
  DX = (r16((uint32_t)(0x10c3e748)));
  /* 10c218af push edx */
  push32((uint32_t)(EDX));
  /* 10c218b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c218b2 mov ax, word ptr [0x10c3e746] */
  AX = (r16((uint32_t)(0x10c3e746)));
  /* 10c218b8 push eax */
  push32((uint32_t)(EAX));
  /* 10c218b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c218bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c218bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c218bf mov cx, word ptr [0x10c3e742] */
  CX = (r16((uint32_t)(0x10c3e742)));
  /* 10c218c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c218c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c218ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c218cd push eax */
  push32((uint32_t)(EAX));
  /* 10c218ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10c218d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c218d2 call 0x10c21ae0 */
  push32(0x10c218d7u); f_10c21ae0();
  /* 10c218d7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c218da:;
  /* 10c218da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c218dc mov cx, word ptr [0x10c3e6ec] */
  CX = (r16((uint32_t)(0x10c3e6ec)));
  /* 10c218e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c218e5 jne 0x10c21942 */
  if (!C.zf) goto L_10c21942;
  /* 10c218e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c218e9 mov dx, word ptr [0x10c3e6fa] */
  DX = (r16((uint32_t)(0x10c3e6fa)));
  /* 10c218f0 push edx */
  push32((uint32_t)(EDX));
  /* 10c218f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c218f3 mov ax, word ptr [0x10c3e6f8] */
  AX = (r16((uint32_t)(0x10c3e6f8)));
  /* 10c218f9 push eax */
  push32((uint32_t)(EAX));
  /* 10c218fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c218fc mov cx, word ptr [0x10c3e6f6] */
  CX = (r16((uint32_t)(0x10c3e6f6)));
  /* 10c21903 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21904 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c21906 mov dx, word ptr [0x10c3e6f4] */
  DX = (r16((uint32_t)(0x10c3e6f4)));
  /* 10c2190d push edx */
  push32((uint32_t)(EDX));
  /* 10c2190e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21912 mov ax, word ptr [0x10c3e6f0] */
  AX = (r16((uint32_t)(0x10c3e6f0)));
  /* 10c21918 push eax */
  push32((uint32_t)(EAX));
  /* 10c21919 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2191b mov cx, word ptr [0x10c3e6f2] */
  CX = (r16((uint32_t)(0x10c3e6f2)));
  /* 10c21922 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21923 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c21925 mov dx, word ptr [0x10c3e6ee] */
  DX = (r16((uint32_t)(0x10c3e6ee)));
  /* 10c2192c push edx */
  push32((uint32_t)(EDX));
  /* 10c2192d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21930 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c21933 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c21936 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21938 call 0x10c21ae0 */
  push32(0x10c2193du); f_10c21ae0();
  /* 10c2193d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21940 jmp 0x10c21993 */
  goto L_10c21993;
L_10c21942:;
  /* 10c21942 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c21944 mov dx, word ptr [0x10c3e6fa] */
  DX = (r16((uint32_t)(0x10c3e6fa)));
  /* 10c2194b push edx */
  push32((uint32_t)(EDX));
  /* 10c2194c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2194e mov ax, word ptr [0x10c3e6f8] */
  AX = (r16((uint32_t)(0x10c3e6f8)));
  /* 10c21954 push eax */
  push32((uint32_t)(EAX));
  /* 10c21955 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c21957 mov cx, word ptr [0x10c3e6f6] */
  CX = (r16((uint32_t)(0x10c3e6f6)));
  /* 10c2195e push ecx */
  push32((uint32_t)(ECX));
  /* 10c2195f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c21961 mov dx, word ptr [0x10c3e6f4] */
  DX = (r16((uint32_t)(0x10c3e6f4)));
  /* 10c21968 push edx */
  push32((uint32_t)(EDX));
  /* 10c21969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2196b mov ax, word ptr [0x10c3e6f2] */
  AX = (r16((uint32_t)(0x10c3e6f2)));
  /* 10c21971 push eax */
  push32((uint32_t)(EAX));
  /* 10c21972 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21974 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21976 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c21978 mov cx, word ptr [0x10c3e6ee] */
  CX = (r16((uint32_t)(0x10c3e6ee)));
  /* 10c2197f push ecx */
  push32((uint32_t)(ECX));
  /* 10c21980 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21983 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c21986 push eax */
  push32((uint32_t)(EAX));
  /* 10c21987 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21989 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c2198b call 0x10c21ae0 */
  push32(0x10c21990u); f_10c21ae0();
  /* 10c21990 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c21993:;
  /* 10c21993 jmp 0x10c219db */
  goto L_10c219db;
L_10c21995:;
  /* 10c21995 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21997 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21999 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c2199b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c2199d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c2199f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c219a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c219a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c219a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c219a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c219ab push edx */
  push32((uint32_t)(EDX));
  /* 10c219ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10c219ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10c219b0 call 0x10c21ae0 */
  push32(0x10c219b5u); f_10c21ae0();
  /* 10c219b5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c219b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c219ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10c219bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c219be push 2 */
  push32((uint32_t)(0x2u));
  /* 10c219c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c219c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c219c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c219c6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c219c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c219cb mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c219ce push ecx */
  push32((uint32_t)(ECX));
  /* 10c219cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10c219d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c219d3 call 0x10c21ae0 */
  push32(0x10c219d8u); f_10c21ae0();
  /* 10c219d8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c219db:;
  /* 10c219db mov edx, dword ptr [0x10c3de2c] */
  EDX = (r32((uint32_t)(0x10c3de2c)));
  /* 10c219e1 cmp edx, dword ptr [0x10c3de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c219e7 jge 0x10c21a34 */
  if ((C.sf==C.of)) goto L_10c21a34;
  /* 10c219e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c219ec mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c219ef cmp ecx, dword ptr [0x10c3de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c219f5 jl 0x10c21a05 */
  if ((C.sf!=C.of)) goto L_10c21a05;
  /* 10c219f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c219fa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c219fd cmp eax, dword ptr [0x10c3de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21a03 jle 0x10c21a0c */
  if ((C.zf||C.sf!=C.of)) goto L_10c21a0c;
L_10c21a05:;
  /* 10c21a05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21a07 jmp 0x10c21ad6 */
  goto L_10c21ad6;
L_10c21a0c:;
  /* 10c21a0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21a0f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c21a12 cmp edx, dword ptr [0x10c3de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21a18 jle 0x10c21a32 */
  if ((C.zf||C.sf!=C.of)) goto L_10c21a32;
  /* 10c21a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21a1d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c21a20 cmp ecx, dword ptr [0x10c3de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21a26 jge 0x10c21a32 */
  if ((C.sf==C.of)) goto L_10c21a32;
  /* 10c21a28 mov eax, 1 */
  EAX = (0x1u);
  /* 10c21a2d jmp 0x10c21ad6 */
  goto L_10c21ad6;
L_10c21a32:;
  /* 10c21a32 jmp 0x10c21a77 */
  goto L_10c21a77;
L_10c21a34:;
  /* 10c21a34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21a37 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c21a3a cmp eax, dword ptr [0x10c3de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21a40 jl 0x10c21a50 */
  if ((C.sf!=C.of)) goto L_10c21a50;
  /* 10c21a42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21a45 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c21a48 cmp edx, dword ptr [0x10c3de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21a4e jle 0x10c21a57 */
  if ((C.zf||C.sf!=C.of)) goto L_10c21a57;
L_10c21a50:;
  /* 10c21a50 mov eax, 1 */
  EAX = (0x1u);
  /* 10c21a55 jmp 0x10c21ad6 */
  goto L_10c21ad6;
L_10c21a57:;
  /* 10c21a57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21a5a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10c21a5d cmp ecx, dword ptr [0x10c3de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21a63 jle 0x10c21a77 */
  if ((C.zf||C.sf!=C.of)) goto L_10c21a77;
  /* 10c21a65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21a68 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10c21a6b cmp eax, dword ptr [0x10c3de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21a71 jge 0x10c21a77 */
  if ((C.sf==C.of)) goto L_10c21a77;
  /* 10c21a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21a75 jmp 0x10c21ad6 */
  goto L_10c21ad6;
L_10c21a77:;
  /* 10c21a77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21a7a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c21a7d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21a80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21a83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c21a85 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21a87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21a8a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c21a8d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21a93 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21a95 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21a9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c21a9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21aa1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10c21aa4 cmp edx, dword ptr [0x10c3de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10c3de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21aaa jne 0x10c21ac2 */
  if (!C.zf) goto L_10c21ac2;
  /* 10c21aac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c21aaf cmp eax, dword ptr [0x10c3de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21ab5 jl 0x10c21abe */
  if ((C.sf!=C.of)) goto L_10c21abe;
  /* 10c21ab7 mov eax, 1 */
  EAX = (0x1u);
  /* 10c21abc jmp 0x10c21ad6 */
  goto L_10c21ad6;
L_10c21abe:;
  /* 10c21abe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21ac0 jmp 0x10c21ad6 */
  goto L_10c21ad6;
L_10c21ac2:;
  /* 10c21ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c21ac5 cmp ecx, dword ptr [0x10c3de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21acb jge 0x10c21ad4 */
  if ((C.sf==C.of)) goto L_10c21ad4;
  /* 10c21acd mov eax, 1 */
  EAX = (0x1u);
  /* 10c21ad2 jmp 0x10c21ad6 */
  goto L_10c21ad6;
L_10c21ad4:;
  /* 10c21ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c21ad6:;
  /* 10c21ad6 mov esp, ebp */
  ESP = (EBP);
  /* 10c21ad8 pop ebp */
  EBP = (pop32());
  /* 10c21ad9 ret  */
  ESPCHK(0x10c217e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ae0 @ 0x10c21ae0 (504 bytes, 145 insns) */
void f_10c21ae0(void) {
  FTRACE(0x10c21ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c21ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c21ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10c21ae3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21ae6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21aea jne 0x10c21bbc */
  if (!C.zf) goto L_10c21bbc;
  /* 10c21af0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21af3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10c21af6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c21af8 jne 0x10c21b09 */
  if (!C.zf) goto L_10c21b09;
  /* 10c21afa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21afd mov edx, dword ptr [ecx*4 + 0x10c3de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3de4c)));
  /* 10c21b04 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c21b07 jmp 0x10c21b16 */
  goto L_10c21b16;
L_10c21b09:;
  /* 10c21b09 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21b0c mov ecx, dword ptr [eax*4 + 0x10c3de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c3de80)));
  /* 10c21b13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c21b16:;
  /* 10c21b16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c21b19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21b1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c21b1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21b22 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21b25 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21b2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21b2e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21b30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21b33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21b36 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10c21b39 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10c21b3d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10c21b3e mov ecx, 7 */
  ECX = (0x7u);
  /* 10c21b43 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c21b45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c21b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c21b4b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21b4e jge 0x10c21b69 */
  if ((C.sf==C.of)) goto L_10c21b69;
  /* 10c21b50 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c21b53 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21b56 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c21b59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21b5c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21b5f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21b62 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21b64 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c21b67 jmp 0x10c21b7d */
  goto L_10c21b7d;
L_10c21b69:;
  /* 10c21b69 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c21b6c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21b6f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c21b72 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21b75 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21b78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21b7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c21b7d:;
  /* 10c21b7d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21b81 jne 0x10c21bba */
  if (!C.zf) goto L_10c21bba;
  /* 10c21b83 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21b86 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10c21b89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c21b8b jne 0x10c21b9c */
  if (!C.zf) goto L_10c21b9c;
  /* 10c21b8d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21b90 mov eax, dword ptr [edx*4 + 0x10c3de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3de50)));
  /* 10c21b97 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c21b9a jmp 0x10c21ba9 */
  goto L_10c21ba9;
L_10c21b9c:;
  /* 10c21b9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21b9f mov edx, dword ptr [ecx*4 + 0x10c3de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10c3de84)));
  /* 10c21ba6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10c21ba9:;
  /* 10c21ba9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21bac cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21baf jle 0x10c21bba */
  if ((C.zf||C.sf!=C.of)) goto L_10c21bba;
  /* 10c21bb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21bb4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21bb7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c21bba:;
  /* 10c21bba jmp 0x10c21bf1 */
  goto L_10c21bf1;
L_10c21bbc:;
  /* 10c21bbc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21bbf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c21bc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c21bc4 jne 0x10c21bd5 */
  if (!C.zf) goto L_10c21bd5;
  /* 10c21bc6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21bc9 mov ecx, dword ptr [eax*4 + 0x10c3de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10c3de4c)));
  /* 10c21bd0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c21bd3 jmp 0x10c21be2 */
  goto L_10c21be2;
L_10c21bd5:;
  /* 10c21bd5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21bd8 mov eax, dword ptr [edx*4 + 0x10c3de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10c3de80)));
  /* 10c21bdf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10c21be2:;
  /* 10c21be2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c21be5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c21be8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21beb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21bee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c21bf1:;
  /* 10c21bf1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21bf5 jne 0x10c21c31 */
  if (!C.zf) goto L_10c21c31;
  /* 10c21bf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21bfa mov dword ptr [0x10c3de2c], eax */
  w32((uint32_t)(0x10c3de2c), (EAX));
  /* 10c21bff mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10c21c02 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21c05 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10c21c08 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21c0a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21c0d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10c21c10 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21c12 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21c18 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10c21c1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21c1d mov dword ptr [0x10c3de30], ecx */
  w32((uint32_t)(0x10c3de30), (ECX));
  /* 10c21c23 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21c26 mov dword ptr [0x10c3de28], edx */
  w32((uint32_t)(0x10c3de28), (EDX));
  /* 10c21c2c jmp 0x10c21cd4 */
  goto L_10c21cd4;
L_10c21c31:;
  /* 10c21c31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c21c34 mov dword ptr [0x10c3de3c], eax */
  w32((uint32_t)(0x10c3de3c), (EAX));
  /* 10c21c39 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10c21c3c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21c3f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10c21c42 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21c44 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21c47 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10c21c4a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21c4c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21c52 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10c21c55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21c57 mov dword ptr [0x10c3de40], ecx */
  w32((uint32_t)(0x10c3de40), (ECX));
  /* 10c21c5d mov edx, dword ptr [0x10c3dd98] */
  EDX = (r32((uint32_t)(0x10c3dd98)));
  /* 10c21c63 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c21c69 mov eax, dword ptr [0x10c3de40] */
  EAX = (r32((uint32_t)(0x10c3de40)));
  /* 10c21c6e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21c70 mov dword ptr [0x10c3de40], eax */
  w32((uint32_t)(0x10c3de40), (EAX));
  /* 10c21c75 cmp dword ptr [0x10c3de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21c7c jge 0x10c21ca1 */
  if ((C.sf==C.of)) goto L_10c21ca1;
  /* 10c21c7e mov ecx, dword ptr [0x10c3de40] */
  ECX = (r32((uint32_t)(0x10c3de40)));
  /* 10c21c84 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21c8a mov dword ptr [0x10c3de40], ecx */
  w32((uint32_t)(0x10c3de40), (ECX));
  /* 10c21c90 mov edx, dword ptr [0x10c3de3c] */
  EDX = (r32((uint32_t)(0x10c3de3c)));
  /* 10c21c96 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21c99 mov dword ptr [0x10c3de3c], edx */
  w32((uint32_t)(0x10c3de3c), (EDX));
  /* 10c21c9f jmp 0x10c21ccb */
  goto L_10c21ccb;
L_10c21ca1:;
  /* 10c21ca1 cmp dword ptr [0x10c3de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10c3de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21cab jl 0x10c21ccb */
  if ((C.sf!=C.of)) goto L_10c21ccb;
  /* 10c21cad mov eax, dword ptr [0x10c3de40] */
  EAX = (r32((uint32_t)(0x10c3de40)));
  /* 10c21cb2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c21cb7 mov dword ptr [0x10c3de40], eax */
  w32((uint32_t)(0x10c3de40), (EAX));
  /* 10c21cbc mov ecx, dword ptr [0x10c3de3c] */
  ECX = (r32((uint32_t)(0x10c3de3c)));
  /* 10c21cc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21cc5 mov dword ptr [0x10c3de3c], ecx */
  w32((uint32_t)(0x10c3de3c), (ECX));
L_10c21ccb:;
  /* 10c21ccb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21cce mov dword ptr [0x10c3de38], edx */
  w32((uint32_t)(0x10c3de38), (EDX));
L_10c21cd4:;
  /* 10c21cd4 mov esp, ebp */
  ESP = (EBP);
  /* 10c21cd6 pop ebp */
  EBP = (pop32());
  /* 10c21cd7 ret  */
  ESPCHK(0x10c21ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ce0 @ 0x10c21ce0 (382 bytes, 135 insns) */
void f_10c21ce0(void) {
  FTRACE(0x10c21ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c21ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c21ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10c21ce3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c21ce5 push 0x10c3a858 */
  push32((uint32_t)(0x10c3a858u));
  /* 10c21cea push 0x10c1b9a8 */
  push32((uint32_t)(0x10c1b9a8u));
  /* 10c21cef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c21cf5 push eax */
  push32((uint32_t)(EAX));
  /* 10c21cf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c21cfd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21d00 push ebx */
  push32((uint32_t)(EBX));
  /* 10c21d01 push esi */
  push32((uint32_t)(ESI));
  /* 10c21d02 push edi */
  push32((uint32_t)(EDI));
  /* 10c21d03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c21d06 cmp dword ptr [0x10c3e75c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e75c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21d0d jne 0x10c21d52 */
  if (!C.zf) goto L_10c21d52;
  /* 10c21d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21d11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21d13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c21d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21d17 call dword ptr [0x10c4021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4021c))), 0x10c21d1du);
  /* 10c21d1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c21d1f je 0x10c21d2d */
  if (C.zf) goto L_10c21d2d;
  /* 10c21d21 mov dword ptr [0x10c3e75c], 1 */
  w32((uint32_t)(0x10c3e75c), (0x1u));
  /* 10c21d2b jmp 0x10c21d52 */
  goto L_10c21d52;
L_10c21d2d:;
  /* 10c21d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21d31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c21d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21d35 call dword ptr [0x10c40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40308))), 0x10c21d3bu);
  /* 10c21d3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c21d3d je 0x10c21d4b */
  if (C.zf) goto L_10c21d4b;
  /* 10c21d3f mov dword ptr [0x10c3e75c], 2 */
  w32((uint32_t)(0x10c3e75c), (0x2u));
  /* 10c21d49 jmp 0x10c21d52 */
  goto L_10c21d52;
L_10c21d4b:;
  /* 10c21d4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21d4d jmp 0x10c21e61 */
  goto L_10c21e61;
L_10c21d52:;
  /* 10c21d52 cmp dword ptr [0x10c3e75c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e75c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21d59 jne 0x10c21d76 */
  if (!C.zf) goto L_10c21d76;
  /* 10c21d5b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21d5e push eax */
  push32((uint32_t)(EAX));
  /* 10c21d5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21d62 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21d63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c21d66 push edx */
  push32((uint32_t)(EDX));
  /* 10c21d67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21d6a push eax */
  push32((uint32_t)(EAX));
  /* 10c21d6b call dword ptr [0x10c4021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4021c))), 0x10c21d71u);
  /* 10c21d71 jmp 0x10c21e61 */
  goto L_10c21e61;
L_10c21d76:;
  /* 10c21d76 cmp dword ptr [0x10c3e75c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e75c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21d7d jne 0x10c21e5f */
  if (!C.zf) goto L_10c21e5f;
  /* 10c21d83 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21d87 jne 0x10c21d92 */
  if (!C.zf) goto L_10c21d92;
  /* 10c21d89 mov ecx, dword ptr [0x10c3e610] */
  ECX = (r32((uint32_t)(0x10c3e610)));
  /* 10c21d8f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10c21d92:;
  /* 10c21d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21d96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c21d99 push edx */
  push32((uint32_t)(EDX));
  /* 10c21d9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21d9d push eax */
  push32((uint32_t)(EAX));
  /* 10c21d9e call dword ptr [0x10c40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40308))), 0x10c21da4u);
  /* 10c21da4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c21da7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21dab jne 0x10c21db4 */
  if (!C.zf) goto L_10c21db4;
  /* 10c21dad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21daf jmp 0x10c21e61 */
  goto L_10c21e61;
L_10c21db4:;
  /* 10c21db4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c21dbb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c21dbe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21dc1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c21dc3 call 0x10c15a40 */
  push32(0x10c21dc8u); f_10c15a40();
  /* 10c21dc8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10c21dcb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c21dce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c21dd1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c21dd4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c21ddb jmp 0x10c21df4 */
  goto L_10c21df4;
  /* 10c21ddd mov eax, 1 */
  EAX = (0x1u);
  /* 10c21de2 ret  */
  ESPCHK(0x10c21ce0u, _esp0);
  ESP += 4; return;
  /* 10c21de3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c21de6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c21ded mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c21df4:;
  /* 10c21df4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21df8 jne 0x10c21dfe */
  if (!C.zf) goto L_10c21dfe;
  /* 10c21dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21dfc jmp 0x10c21e61 */
  goto L_10c21e61;
L_10c21dfe:;
  /* 10c21dfe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c21e01 push edx */
  push32((uint32_t)(EDX));
  /* 10c21e02 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c21e05 push eax */
  push32((uint32_t)(EAX));
  /* 10c21e06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c21e09 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21e0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21e0d push edx */
  push32((uint32_t)(EDX));
  /* 10c21e0e call dword ptr [0x10c40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40308))), 0x10c21e14u);
  /* 10c21e14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c21e16 jne 0x10c21e1c */
  if (!C.zf) goto L_10c21e1c;
  /* 10c21e18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21e1a jmp 0x10c21e61 */
  goto L_10c21e61;
L_10c21e1c:;
  /* 10c21e1c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21e20 jne 0x10c21e3d */
  if (!C.zf) goto L_10c21e3d;
  /* 10c21e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21e26 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c21e28 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c21e2b push eax */
  push32((uint32_t)(EAX));
  /* 10c21e2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c21e2e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c21e31 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21e32 call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c21e38u);
  /* 10c21e38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c21e3b jmp 0x10c21e5a */
  goto L_10c21e5a;
L_10c21e3d:;
  /* 10c21e3d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21e40 push edx */
  push32((uint32_t)(EDX));
  /* 10c21e41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21e44 push eax */
  push32((uint32_t)(EAX));
  /* 10c21e45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c21e47 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c21e4a push ecx */
  push32((uint32_t)(ECX));
  /* 10c21e4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c21e4d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c21e50 push edx */
  push32((uint32_t)(EDX));
  /* 10c21e51 call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c21e57u);
  /* 10c21e57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c21e5a:;
  /* 10c21e5a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c21e5d jmp 0x10c21e61 */
  goto L_10c21e61;
L_10c21e5f:;
  /* 10c21e5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c21e61:;
  /* 10c21e61 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10c21e64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c21e67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c21e6e pop edi */
  EDI = (pop32());
  /* 10c21e6f pop esi */
  ESI = (pop32());
  /* 10c21e70 pop ebx */
  EBX = (pop32());
  /* 10c21e71 mov esp, ebp */
  ESP = (EBP);
  /* 10c21e73 pop ebp */
  EBP = (pop32());
  /* 10c21e74 ret  */
  ESPCHK(0x10c21ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x10c21e80 (398 bytes, 140 insns) */
void f_10c21e80(void) {
  FTRACE(0x10c21e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c21e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c21e81 mov ebp, esp */
  EBP = (ESP);
  /* 10c21e83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c21e85 push 0x10c3a868 */
  push32((uint32_t)(0x10c3a868u));
  /* 10c21e8a push 0x10c1b9a8 */
  push32((uint32_t)(0x10c1b9a8u));
  /* 10c21e8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c21e95 push eax */
  push32((uint32_t)(EAX));
  /* 10c21e96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c21e9d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 10c21ea1 push esi */
  push32((uint32_t)(ESI));
  /* 10c21ea2 push edi */
  push32((uint32_t)(EDI));
  /* 10c21ea3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c21ea6 cmp dword ptr [0x10c3e760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21ead jne 0x10c21ef2 */
  if (!C.zf) goto L_10c21ef2;
  /* 10c21eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c21eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21eb7 call dword ptr [0x10c4021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4021c))), 0x10c21ebdu);
  /* 10c21ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c21ebf je 0x10c21ecd */
  if (C.zf) goto L_10c21ecd;
  /* 10c21ec1 mov dword ptr [0x10c3e760], 1 */
  w32((uint32_t)(0x10c3e760), (0x1u));
  /* 10c21ecb jmp 0x10c21ef2 */
  goto L_10c21ef2;
L_10c21ecd:;
  /* 10c21ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c21ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21ed5 call dword ptr [0x10c40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40308))), 0x10c21edbu);
  /* 10c21edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c21edd je 0x10c21eeb */
  if (C.zf) goto L_10c21eeb;
  /* 10c21edf mov dword ptr [0x10c3e760], 2 */
  w32((uint32_t)(0x10c3e760), (0x2u));
  /* 10c21ee9 jmp 0x10c21ef2 */
  goto L_10c21ef2;
L_10c21eeb:;
  /* 10c21eeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21eed jmp 0x10c22011 */
  goto L_10c22011;
L_10c21ef2:;
  /* 10c21ef2 cmp dword ptr [0x10c3e760], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e760))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21ef9 jne 0x10c21f16 */
  if (!C.zf) goto L_10c21f16;
  /* 10c21efb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21efe push eax */
  push32((uint32_t)(EAX));
  /* 10c21eff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21f02 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21f03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c21f06 push edx */
  push32((uint32_t)(EDX));
  /* 10c21f07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21f0a push eax */
  push32((uint32_t)(EAX));
  /* 10c21f0b call dword ptr [0x10c40308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40308))), 0x10c21f11u);
  /* 10c21f11 jmp 0x10c22011 */
  goto L_10c22011;
L_10c21f16:;
  /* 10c21f16 cmp dword ptr [0x10c3e760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21f1d jne 0x10c2200f */
  if (!C.zf) goto L_10c2200f;
  /* 10c21f23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21f27 jne 0x10c21f32 */
  if (!C.zf) goto L_10c21f32;
  /* 10c21f29 mov ecx, dword ptr [0x10c3e610] */
  ECX = (r32((uint32_t)(0x10c3e610)));
  /* 10c21f2f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10c21f32:;
  /* 10c21f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21f36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c21f39 push edx */
  push32((uint32_t)(EDX));
  /* 10c21f3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21f3d push eax */
  push32((uint32_t)(EAX));
  /* 10c21f3e call dword ptr [0x10c4021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4021c))), 0x10c21f44u);
  /* 10c21f44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c21f47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21f4b jne 0x10c21f54 */
  if (!C.zf) goto L_10c21f54;
  /* 10c21f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21f4f jmp 0x10c22011 */
  goto L_10c22011;
L_10c21f54:;
  /* 10c21f54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c21f5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c21f5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c21f60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c21f63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c21f65 call 0x10c15a40 */
  push32(0x10c21f6au); f_10c15a40();
  /* 10c21f6a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10c21f6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c21f70 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c21f73 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c21f76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c21f7d jmp 0x10c21f96 */
  goto L_10c21f96;
  /* 10c21f7f mov eax, 1 */
  EAX = (0x1u);
  /* 10c21f84 ret  */
  ESPCHK(0x10c21e80u, _esp0);
  ESP += 4; return;
  /* 10c21f85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c21f88 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10c21f8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c21f96:;
  /* 10c21f96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21f9a jne 0x10c21fa0 */
  if (!C.zf) goto L_10c21fa0;
  /* 10c21f9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21f9e jmp 0x10c22011 */
  goto L_10c22011;
L_10c21fa0:;
  /* 10c21fa0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c21fa3 push edx */
  push32((uint32_t)(EDX));
  /* 10c21fa4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c21fa7 push eax */
  push32((uint32_t)(EAX));
  /* 10c21fa8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c21fab push ecx */
  push32((uint32_t)(ECX));
  /* 10c21fac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c21faf push edx */
  push32((uint32_t)(EDX));
  /* 10c21fb0 call dword ptr [0x10c4021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4021c))), 0x10c21fb6u);
  /* 10c21fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c21fb8 jne 0x10c21fbe */
  if (!C.zf) goto L_10c21fbe;
  /* 10c21fba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c21fbc jmp 0x10c22011 */
  goto L_10c22011;
L_10c21fbe:;
  /* 10c21fbe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c21fc2 jne 0x10c21fe6 */
  if (!C.zf) goto L_10c21fe6;
  /* 10c21fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21fca push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21fcc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c21fce mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c21fd1 push eax */
  push32((uint32_t)(EAX));
  /* 10c21fd2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c21fd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c21fda push ecx */
  push32((uint32_t)(ECX));
  /* 10c21fdb call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c21fe1u);
  /* 10c21fe1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c21fe4 jmp 0x10c2200a */
  goto L_10c2200a;
L_10c21fe6:;
  /* 10c21fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21fe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c21fea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c21fed push edx */
  push32((uint32_t)(EDX));
  /* 10c21fee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c21ff1 push eax */
  push32((uint32_t)(EAX));
  /* 10c21ff2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c21ff4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c21ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c21ff8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10c21ffd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c22000 push edx */
  push32((uint32_t)(EDX));
  /* 10c22001 call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c22007u);
  /* 10c22007 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c2200a:;
  /* 10c2200a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c2200d jmp 0x10c22011 */
  goto L_10c22011;
L_10c2200f:;
  /* 10c2200f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c22011:;
  /* 10c22011 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10c22014 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c22017 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c2201e pop edi */
  EDI = (pop32());
  /* 10c2201f pop esi */
  ESI = (pop32());
  /* 10c22020 pop ebx */
  EBX = (pop32());
  /* 10c22021 mov esp, ebp */
  ESP = (EBP);
  /* 10c22023 pop ebp */
  EBP = (pop32());
  /* 10c22024 ret  */
  ESPCHK(0x10c21e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012030 @ 0x10c22030 (11 bytes, 6 insns) */
void f_10c22030(void) {
  FTRACE(0x10c22030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22030 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22031 mov ebp, esp */
  EBP = (ESP);
  /* 10c22033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22036 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22039 pop ebp */
  EBP = (pop32());
  /* 10c2203a ret  */
  ESPCHK(0x10c22030u, _esp0);
  ESP += 4; return;
}

/* FUN_10012040 @ 0x10c22040 (147 bytes, 43 insns) */
void f_10c22040(void) {
  FTRACE(0x10c22040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22040 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22041 mov ebp, esp */
  EBP = (ESP);
  /* 10c22043 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22044 cmp dword ptr [0x10c3e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2204b jne 0x10c22067 */
  if (!C.zf) goto L_10c22067;
  /* 10c2204d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22051 jl 0x10c22062 */
  if ((C.sf!=C.of)) goto L_10c22062;
  /* 10c22053 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22057 jg 0x10c22062 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c22062;
  /* 10c22059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2205c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2205f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c22062:;
  /* 10c22062 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22065 jmp 0x10c220cf */
  goto L_10c220cf;
L_10c22067:;
  /* 10c22067 push 0x10c3e78c */
  push32((uint32_t)(0x10c3e78cu));
  /* 10c2206c call dword ptr [0x10c40244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40244))), 0x10c22072u);
  /* 10c22072 cmp dword ptr [0x10c3e77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22079 je 0x10c22099 */
  if (C.zf) goto L_10c22099;
  /* 10c2207b push 0x10c3e78c */
  push32((uint32_t)(0x10c3e78cu));
  /* 10c22080 call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c22086u);
  /* 10c22086 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c22088 call 0x10c162a0 */
  push32(0x10c2208du); f_10c162a0();
  /* 10c2208d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22090 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c22097 jmp 0x10c220a0 */
  goto L_10c220a0;
L_10c22099:;
  /* 10c22099 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c220a0:;
  /* 10c220a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c220a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c220a4 call 0x10c220e0 */
  push32(0x10c220a9u); f_10c220e0();
  /* 10c220a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c220ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c220af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c220b3 je 0x10c220c1 */
  if (C.zf) goto L_10c220c1;
  /* 10c220b5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10c220b7 call 0x10c16340 */
  push32(0x10c220bcu); f_10c16340();
  /* 10c220bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c220bf jmp 0x10c220cc */
  goto L_10c220cc;
L_10c220c1:;
  /* 10c220c1 push 0x10c3e78c */
  push32((uint32_t)(0x10c3e78cu));
  /* 10c220c6 call dword ptr [0x10c40234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40234))), 0x10c220ccu);
L_10c220cc:;
  /* 10c220cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10c220cf:;
  /* 10c220cf mov esp, ebp */
  ESP = (EBP);
  /* 10c220d1 pop ebp */
  EBP = (pop32());
  /* 10c220d2 ret  */
  ESPCHK(0x10c22040u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x10c220e0 (299 bytes, 91 insns) */
void f_10c220e0(void) {
  FTRACE(0x10c220e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c220e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c220e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c220e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c220e6 cmp dword ptr [0x10c3e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c220ed jne 0x10c2210c */
  if (!C.zf) goto L_10c2210c;
  /* 10c220ef cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c220f3 jl 0x10c22104 */
  if ((C.sf!=C.of)) goto L_10c22104;
  /* 10c220f5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c220f9 jg 0x10c22104 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c22104;
  /* 10c220fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c220fe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22101 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c22104:;
  /* 10c22104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22107 jmp 0x10c22207 */
  goto L_10c22207;
L_10c2210c:;
  /* 10c2210c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22113 jge 0x10c22153 */
  if ((C.sf==C.of)) goto L_10c22153;
  /* 10c22115 cmp dword ptr [0x10c3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2211c jle 0x10c22131 */
  if ((C.zf||C.sf!=C.of)) goto L_10c22131;
  /* 10c2211e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c22120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22123 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22124 call 0x10c188b0 */
  push32(0x10c22129u); f_10c188b0();
  /* 10c22129 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2212c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c2212f jmp 0x10c22145 */
  goto L_10c22145;
L_10c22131:;
  /* 10c22131 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22134 mov eax, dword ptr [0x10c3cc98] */
  EAX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c22139 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2213b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c2213f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c22142 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c22145:;
  /* 10c22145 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22149 jne 0x10c22153 */
  if (!C.zf) goto L_10c22153;
  /* 10c2214b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2214e jmp 0x10c22207 */
  goto L_10c22207;
L_10c22153:;
  /* 10c22153 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22156 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10c22159 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c2215f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c22165 mov eax, dword ptr [0x10c3cc98] */
  EAX = (r32((uint32_t)(0x10c3cc98)));
  /* 10c2216a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2216c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c22170 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c22176 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c22178 je 0x10c2219c */
  if (C.zf) goto L_10c2219c;
  /* 10c2217a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2217d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10c22180 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c22186 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10c22189 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c2218c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10c2218f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10c22193 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c2219a jmp 0x10c221ad */
  goto L_10c221ad;
L_10c2219c:;
  /* 10c2219c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10c2219f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10c221a2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10c221a6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10c221ad:;
  /* 10c221ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10c221af push 0 */
  push32((uint32_t)(0x0u));
  /* 10c221b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c221b3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10c221b6 push edx */
  push32((uint32_t)(EDX));
  /* 10c221b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c221ba push eax */
  push32((uint32_t)(EAX));
  /* 10c221bb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10c221be push ecx */
  push32((uint32_t)(ECX));
  /* 10c221bf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10c221c4 mov edx, dword ptr [0x10c3e600] */
  EDX = (r32((uint32_t)(0x10c3e600)));
  /* 10c221ca push edx */
  push32((uint32_t)(EDX));
  /* 10c221cb call 0x10c1ac90 */
  push32(0x10c221d0u); f_10c1ac90();
  /* 10c221d0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c221d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c221d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c221da jne 0x10c221e1 */
  if (!C.zf) goto L_10c221e1;
  /* 10c221dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c221df jmp 0x10c22207 */
  goto L_10c22207;
L_10c221e1:;
  /* 10c221e1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c221e5 jne 0x10c221f1 */
  if (!C.zf) goto L_10c221f1;
  /* 10c221e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c221ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c221ef jmp 0x10c22207 */
  goto L_10c22207;
L_10c221f1:;
  /* 10c221f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c221f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c221f9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10c221fc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c22202 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10c22205 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10c22207:;
  /* 10c22207 mov esp, ebp */
  ESP = (EBP);
  /* 10c22209 pop ebp */
  EBP = (pop32());
  /* 10c2220a ret  */
  ESPCHK(0x10c220e0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10c22210 (52 bytes, 19 insns) */
void f_10c22210(void) {
  FTRACE(0x10c22210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22210 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c22214 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c22218 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2221a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c2221e jne 0x10c22229 */
  if (!C.zf) goto L_10c22229;
  /* 10c22220 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c22224 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c22226 ret 0x10 */
  ESPCHK(0x10c22210u, _esp0);
  ESP += 20; return;
L_10c22229:;
  /* 10c22229 push ebx */
  push32((uint32_t)(EBX));
  /* 10c2222a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c2222c mov ebx, eax */
  EBX = (EAX);
  /* 10c2222e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c22232 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c22236 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22238 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c2223c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10c2223e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22240 pop ebx */
  EBX = (pop32());
  /* 10c22241 ret 0x10 */
  ESPCHK(0x10c22210u, _esp0);
  ESP += 20; return;
}

/* FUN_10012250 @ 0x10c22250 (46 bytes, 18 insns) */
void f_10c22250(void) {
  FTRACE(0x10c22250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22250 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22251 mov ebp, esp */
  EBP = (ESP);
  /* 10c22253 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22254 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c22256 call 0x10c162a0 */
  push32(0x10c2225bu); f_10c162a0();
  /* 10c2225b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2225e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22261 push eax */
  push32((uint32_t)(EAX));
  /* 10c22262 call 0x10c22280 */
  push32(0x10c22267u); f_10c22280();
  /* 10c22267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2226a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c2226d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10c2226f call 0x10c16340 */
  push32(0x10c22274u); f_10c16340();
  /* 10c22274 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22277 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2227a mov esp, ebp */
  ESP = (EBP);
  /* 10c2227c pop ebp */
  EBP = (pop32());
  /* 10c2227d ret  */
  ESPCHK(0x10c22250u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10c22280 (198 bytes, 69 insns) */
void f_10c22280(void) {
  FTRACE(0x10c22280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22280 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22281 mov ebp, esp */
  EBP = (ESP);
  /* 10c22283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c22286 mov eax, dword ptr [0x10c3e41c] */
  EAX = (r32((uint32_t)(0x10c3e41c)));
  /* 10c2228b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c2228e cmp dword ptr [0x10c3ff20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3ff20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22295 jne 0x10c2229e */
  if (!C.zf) goto L_10c2229e;
  /* 10c22297 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22299 jmp 0x10c22342 */
  goto L_10c22342;
L_10c2229e:;
  /* 10c2229e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c222a2 jne 0x10c222c6 */
  if (!C.zf) goto L_10c222c6;
  /* 10c222a4 cmp dword ptr [0x10c3e424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c222ab je 0x10c222c6 */
  if (C.zf) goto L_10c222c6;
  /* 10c222ad call 0x10c223a0 */
  push32(0x10c222b2u); f_10c223a0();
  /* 10c222b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c222b4 je 0x10c222bd */
  if (C.zf) goto L_10c222bd;
  /* 10c222b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c222b8 jmp 0x10c22342 */
  goto L_10c22342;
L_10c222bd:;
  /* 10c222bd mov ecx, dword ptr [0x10c3e41c] */
  ECX = (r32((uint32_t)(0x10c3e41c)));
  /* 10c222c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c222c6:;
  /* 10c222c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c222ca je 0x10c22340 */
  if (C.zf) goto L_10c22340;
  /* 10c222cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c222d0 je 0x10c22340 */
  if (C.zf) goto L_10c22340;
  /* 10c222d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c222d5 push edx */
  push32((uint32_t)(EDX));
  /* 10c222d6 call 0x10c156d0 */
  push32(0x10c222dbu); f_10c156d0();
  /* 10c222db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c222de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c222e1:;
  /* 10c222e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c222e4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c222e7 je 0x10c22340 */
  if (C.zf) goto L_10c22340;
  /* 10c222e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c222ec mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c222ee push edx */
  push32((uint32_t)(EDX));
  /* 10c222ef call 0x10c156d0 */
  push32(0x10c222f4u); f_10c156d0();
  /* 10c222f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c222f7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c222fa jbe 0x10c22335 */
  if ((C.cf||C.zf)) goto L_10c22335;
  /* 10c222fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c222ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c22301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22304 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10c22308 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2230b jne 0x10c22335 */
  if (!C.zf) goto L_10c22335;
  /* 10c2230d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22310 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22311 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22314 push edx */
  push32((uint32_t)(EDX));
  /* 10c22315 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22318 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c2231a push ecx */
  push32((uint32_t)(ECX));
  /* 10c2231b call 0x10c22350 */
  push32(0x10c22320u); f_10c22350();
  /* 10c22320 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22323 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c22325 jne 0x10c22335 */
  if (!C.zf) goto L_10c22335;
  /* 10c22327 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c2232a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c2232c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2232f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10c22333 jmp 0x10c22342 */
  goto L_10c22342;
L_10c22335:;
  /* 10c22335 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22338 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2233b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c2233e jmp 0x10c222e1 */
  goto L_10c222e1;
L_10c22340:;
  /* 10c22340 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c22342:;
  /* 10c22342 mov esp, ebp */
  ESP = (EBP);
  /* 10c22344 pop ebp */
  EBP = (pop32());
  /* 10c22345 ret  */
  ESPCHK(0x10c22280u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10c22350 (79 bytes, 32 insns) */
void f_10c22350(void) {
  FTRACE(0x10c22350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22350 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22351 mov ebp, esp */
  EBP = (ESP);
  /* 10c22353 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22354 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22358 jne 0x10c2235e */
  if (!C.zf) goto L_10c2235e;
  /* 10c2235a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2235c jmp 0x10c2239b */
  goto L_10c2239b;
L_10c2235e:;
  /* 10c2235e mov eax, dword ptr [0x10c3fae4] */
  EAX = (r32((uint32_t)(0x10c3fae4)));
  /* 10c22363 push eax */
  push32((uint32_t)(EAX));
  /* 10c22364 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c22367 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22368 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c2236b push edx */
  push32((uint32_t)(EDX));
  /* 10c2236c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2236f push eax */
  push32((uint32_t)(EAX));
  /* 10c22370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22373 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22374 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c22376 mov edx, dword ptr [0x10c3fd84] */
  EDX = (r32((uint32_t)(0x10c3fd84)));
  /* 10c2237c push edx */
  push32((uint32_t)(EDX));
  /* 10c2237d call 0x10c22450 */
  push32(0x10c22382u); f_10c22450();
  /* 10c22382 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22385 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c22388 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2238c jne 0x10c22395 */
  if (!C.zf) goto L_10c22395;
  /* 10c2238e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10c22393 jmp 0x10c2239b */
  goto L_10c2239b;
L_10c22395:;
  /* 10c22395 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22398 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10c2239b:;
  /* 10c2239b mov esp, ebp */
  ESP = (EBP);
  /* 10c2239d pop ebp */
  EBP = (pop32());
  /* 10c2239e ret  */
  ESPCHK(0x10c22350u, _esp0);
  ESP += 4; return;
}

/* FUN_100123a0 @ 0x10c223a0 (174 bytes, 66 insns) */
void f_10c223a0(void) {
  FTRACE(0x10c223a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c223a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c223a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c223a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c223a6 mov eax, dword ptr [0x10c3e424] */
  EAX = (r32((uint32_t)(0x10c3e424)));
  /* 10c223ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c223ae:;
  /* 10c223ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c223b1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c223b4 je 0x10c22448 */
  if (C.zf) goto L_10c22448;
  /* 10c223ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10c223bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c223be push 0 */
  push32((uint32_t)(0x0u));
  /* 10c223c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c223c2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c223c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c223c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c223c9 push eax */
  push32((uint32_t)(EAX));
  /* 10c223ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10c223cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10c223ce call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c223d4u);
  /* 10c223d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c223d7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c223db jne 0x10c223e2 */
  if (!C.zf) goto L_10c223e2;
  /* 10c223dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c223e0 jmp 0x10c2244a */
  goto L_10c2244a;
L_10c223e2:;
  /* 10c223e2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10c223e4 push 0x10c3a874 */
  push32((uint32_t)(0x10c3a874u));
  /* 10c223e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c223eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c223ee push ecx */
  push32((uint32_t)(ECX));
  /* 10c223ef call 0x10c128a0 */
  push32(0x10c223f4u); f_10c128a0();
  /* 10c223f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c223f7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c223fa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c223fe jne 0x10c22405 */
  if (!C.zf) goto L_10c22405;
  /* 10c22400 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c22403 jmp 0x10c2244a */
  goto L_10c2244a;
L_10c22405:;
  /* 10c22405 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c22407 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c22409 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c2240c push edx */
  push32((uint32_t)(EDX));
  /* 10c2240d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22410 push eax */
  push32((uint32_t)(EAX));
  /* 10c22411 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c22413 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22416 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c22418 push edx */
  push32((uint32_t)(EDX));
  /* 10c22419 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c2241b push 1 */
  push32((uint32_t)(0x1u));
  /* 10c2241d call dword ptr [0x10c4029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c4029c))), 0x10c22423u);
  /* 10c22423 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c22425 jne 0x10c2242c */
  if (!C.zf) goto L_10c2242c;
  /* 10c22427 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c2242a jmp 0x10c2244a */
  goto L_10c2244a;
L_10c2242c:;
  /* 10c2242c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c2242e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22431 push eax */
  push32((uint32_t)(EAX));
  /* 10c22432 call 0x10c228a0 */
  push32(0x10c22437u); f_10c228a0();
  /* 10c22437 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2243a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2243d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22440 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c22443 jmp 0x10c223ae */
  goto L_10c223ae;
L_10c22448:;
  /* 10c22448 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c2244a:;
  /* 10c2244a mov esp, ebp */
  ESP = (EBP);
  /* 10c2244c pop ebp */
  EBP = (pop32());
  /* 10c2244d ret  */
  ESPCHK(0x10c223a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012450 @ 0x10c22450 (970 bytes, 340 insns) */
void f_10c22450(void) {
  FTRACE(0x10c22450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22450 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22451 mov ebp, esp */
  EBP = (ESP);
  /* 10c22453 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c22455 push 0x10c3a8c8 */
  push32((uint32_t)(0x10c3a8c8u));
  /* 10c2245a push 0x10c1b9a8 */
  push32((uint32_t)(0x10c1b9a8u));
  /* 10c2245f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10c22465 push eax */
  push32((uint32_t)(EAX));
  /* 10c22466 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10c2246d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22470 push ebx */
  push32((uint32_t)(EBX));
  /* 10c22471 push esi */
  push32((uint32_t)(ESI));
  /* 10c22472 push edi */
  push32((uint32_t)(EDI));
  /* 10c22473 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c22476 cmp dword ptr [0x10c3e764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2247d jne 0x10c224d6 */
  if (!C.zf) goto L_10c224d6;
  /* 10c2247f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c22481 push 0x10c39f20 */
  push32((uint32_t)(0x10c39f20u));
  /* 10c22486 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c22488 push 0x10c39f20 */
  push32((uint32_t)(0x10c39f20u));
  /* 10c2248d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c2248f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c22491 call dword ptr [0x10c40214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40214))), 0x10c22497u);
  /* 10c22497 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c22499 je 0x10c224a7 */
  if (C.zf) goto L_10c224a7;
  /* 10c2249b mov dword ptr [0x10c3e764], 1 */
  w32((uint32_t)(0x10c3e764), (0x1u));
  /* 10c224a5 jmp 0x10c224d6 */
  goto L_10c224d6;
L_10c224a7:;
  /* 10c224a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c224a9 push 0x10c39f1c */
  push32((uint32_t)(0x10c39f1cu));
  /* 10c224ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10c224b0 push 0x10c39f1c */
  push32((uint32_t)(0x10c39f1cu));
  /* 10c224b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c224b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c224b9 call dword ptr [0x10c40218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40218))), 0x10c224bfu);
  /* 10c224bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c224c1 je 0x10c224cf */
  if (C.zf) goto L_10c224cf;
  /* 10c224c3 mov dword ptr [0x10c3e764], 2 */
  w32((uint32_t)(0x10c3e764), (0x2u));
  /* 10c224cd jmp 0x10c224d6 */
  goto L_10c224d6;
L_10c224cf:;
  /* 10c224cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c224d1 jmp 0x10c22834 */
  goto L_10c22834;
L_10c224d6:;
  /* 10c224d6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c224da jle 0x10c224ef */
  if ((C.zf||C.sf!=C.of)) goto L_10c224ef;
  /* 10c224dc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c224df push eax */
  push32((uint32_t)(EAX));
  /* 10c224e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c224e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c224e4 call 0x10c22850 */
  push32(0x10c224e9u); f_10c22850();
  /* 10c224e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c224ec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10c224ef:;
  /* 10c224ef cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c224f3 jle 0x10c22508 */
  if ((C.zf||C.sf!=C.of)) goto L_10c22508;
  /* 10c224f5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c224f8 push edx */
  push32((uint32_t)(EDX));
  /* 10c224f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c224fc push eax */
  push32((uint32_t)(EAX));
  /* 10c224fd call 0x10c22850 */
  push32(0x10c22502u); f_10c22850();
  /* 10c22502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22505 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10c22508:;
  /* 10c22508 cmp dword ptr [0x10c3e764], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e764))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2250f jne 0x10c22534 */
  if (!C.zf) goto L_10c22534;
  /* 10c22511 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c22514 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22515 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c22518 push edx */
  push32((uint32_t)(EDX));
  /* 10c22519 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2251c push eax */
  push32((uint32_t)(EAX));
  /* 10c2251d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c22520 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22521 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c22524 push edx */
  push32((uint32_t)(EDX));
  /* 10c22525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22528 push eax */
  push32((uint32_t)(EAX));
  /* 10c22529 call dword ptr [0x10c40218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40218))), 0x10c2252fu);
  /* 10c2252f jmp 0x10c22834 */
  goto L_10c22834;
L_10c22534:;
  /* 10c22534 cmp dword ptr [0x10c3e764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2253b jne 0x10c22832 */
  if (!C.zf) goto L_10c22832;
  /* 10c22541 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22545 jne 0x10c22550 */
  if (!C.zf) goto L_10c22550;
  /* 10c22547 mov ecx, dword ptr [0x10c3e610] */
  ECX = (r32((uint32_t)(0x10c3e610)));
  /* 10c2254d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10c22550:;
  /* 10c22550 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22554 je 0x10c22560 */
  if (C.zf) goto L_10c22560;
  /* 10c22556 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2255a jne 0x10c226dc */
  if (!C.zf) goto L_10c226dc;
L_10c22560:;
  /* 10c22560 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c22563 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22566 jne 0x10c22572 */
  if (!C.zf) goto L_10c22572;
  /* 10c22568 mov eax, 2 */
  EAX = (0x2u);
  /* 10c2256d jmp 0x10c22834 */
  goto L_10c22834;
L_10c22572:;
  /* 10c22572 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22576 jle 0x10c22582 */
  if ((C.zf||C.sf!=C.of)) goto L_10c22582;
  /* 10c22578 mov eax, 1 */
  EAX = (0x1u);
  /* 10c2257d jmp 0x10c22834 */
  goto L_10c22834;
L_10c22582:;
  /* 10c22582 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22586 jle 0x10c22592 */
  if ((C.zf||C.sf!=C.of)) goto L_10c22592;
  /* 10c22588 mov eax, 3 */
  EAX = (0x3u);
  /* 10c2258d jmp 0x10c22834 */
  goto L_10c22834;
L_10c22592:;
  /* 10c22592 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10c22595 push eax */
  push32((uint32_t)(EAX));
  /* 10c22596 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c22599 push ecx */
  push32((uint32_t)(ECX));
  /* 10c2259a call dword ptr [0x10c402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402dc))), 0x10c225a0u);
  /* 10c225a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c225a2 jne 0x10c225ab */
  if (!C.zf) goto L_10c225ab;
  /* 10c225a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c225a6 jmp 0x10c22834 */
  goto L_10c22834;
L_10c225ab:;
  /* 10c225ab cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c225af jne 0x10c225b7 */
  if (!C.zf) goto L_10c225b7;
  /* 10c225b1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c225b5 je 0x10c225e4 */
  if (C.zf) goto L_10c225e4;
L_10c225b7:;
  /* 10c225b7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c225bb jne 0x10c225c3 */
  if (!C.zf) goto L_10c225c3;
  /* 10c225bd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c225c1 je 0x10c225e4 */
  if (C.zf) goto L_10c225e4;
L_10c225c3:;
  /* 10c225c3 push 0x10c3a888 */
  push32((uint32_t)(0x10c3a888u));
  /* 10c225c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c225ca push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10c225cf push 0x10c3a880 */
  push32((uint32_t)(0x10c3a880u));
  /* 10c225d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c225d6 call 0x10c11960 */
  push32(0x10c225dbu); f_10c11960();
  /* 10c225db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c225de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c225e1 jne 0x10c225e4 */
  if (!C.zf) goto L_10c225e4;
  /* 10c225e3 int3  */
  x86_unimpl("int3 @ 0x10c225e3");
L_10c225e4:;
  /* 10c225e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c225e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c225e8 jne 0x10c225ab */
  if (!C.zf) goto L_10c225ab;
  /* 10c225ea cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c225ee jle 0x10c22663 */
  if ((C.zf||C.sf!=C.of)) goto L_10c22663;
  /* 10c225f0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c225f4 jae 0x10c22600 */
  if (!C.cf) goto L_10c22600;
  /* 10c225f6 mov eax, 3 */
  EAX = (0x3u);
  /* 10c225fb jmp 0x10c22834 */
  goto L_10c22834;
L_10c22600:;
  /* 10c22600 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10c22603 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10c22606 jmp 0x10c22611 */
  goto L_10c22611;
L_10c22608:;
  /* 10c22608 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c2260b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c2260e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10c22611:;
  /* 10c22611 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c22614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22616 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c22618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c2261a je 0x10c22659 */
  if (C.zf) goto L_10c22659;
  /* 10c2261c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c2261f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c22621 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10c22624 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c22626 je 0x10c22659 */
  if (C.zf) goto L_10c22659;
  /* 10c22628 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2262b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2262d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c2262f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c22632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22634 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c22636 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22638 jl 0x10c22657 */
  if ((C.sf!=C.of)) goto L_10c22657;
  /* 10c2263a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c2263d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c2263f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c22641 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c22644 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c22646 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c22649 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2264b jg 0x10c22657 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c22657;
  /* 10c2264d mov eax, 2 */
  EAX = (0x2u);
  /* 10c22652 jmp 0x10c22834 */
  goto L_10c22834;
L_10c22657:;
  /* 10c22657 jmp 0x10c22608 */
  goto L_10c22608;
L_10c22659:;
  /* 10c22659 mov eax, 3 */
  EAX = (0x3u);
  /* 10c2265e jmp 0x10c22834 */
  goto L_10c22834;
L_10c22663:;
  /* 10c22663 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22667 jle 0x10c226dc */
  if ((C.zf||C.sf!=C.of)) goto L_10c226dc;
  /* 10c22669 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2266d jae 0x10c22679 */
  if (!C.cf) goto L_10c22679;
  /* 10c2266f mov eax, 1 */
  EAX = (0x1u);
  /* 10c22674 jmp 0x10c22834 */
  goto L_10c22834;
L_10c22679:;
  /* 10c22679 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10c2267c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10c2267f jmp 0x10c2268a */
  goto L_10c2268a;
L_10c22681:;
  /* 10c22681 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c22684 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22687 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10c2268a:;
  /* 10c2268a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c2268d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c2268f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c22691 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c22693 je 0x10c226d2 */
  if (C.zf) goto L_10c226d2;
  /* 10c22695 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c22698 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c2269a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10c2269d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c2269f je 0x10c226d2 */
  if (C.zf) goto L_10c226d2;
  /* 10c226a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c226a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c226a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c226a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c226ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c226ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c226af cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c226b1 jl 0x10c226d0 */
  if ((C.sf!=C.of)) goto L_10c226d0;
  /* 10c226b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c226b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c226b8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c226ba mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10c226bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c226bf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10c226c2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c226c4 jg 0x10c226d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c226d0;
  /* 10c226c6 mov eax, 2 */
  EAX = (0x2u);
  /* 10c226cb jmp 0x10c22834 */
  goto L_10c22834;
L_10c226d0:;
  /* 10c226d0 jmp 0x10c22681 */
  goto L_10c22681;
L_10c226d2:;
  /* 10c226d2 mov eax, 1 */
  EAX = (0x1u);
  /* 10c226d7 jmp 0x10c22834 */
  goto L_10c22834;
L_10c226dc:;
  /* 10c226dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c226de push 0 */
  push32((uint32_t)(0x0u));
  /* 10c226e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c226e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c226e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c226e7 push edx */
  push32((uint32_t)(EDX));
  /* 10c226e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c226ea mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c226ed push eax */
  push32((uint32_t)(EAX));
  /* 10c226ee call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c226f4u);
  /* 10c226f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10c226f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c226fb jne 0x10c22704 */
  if (!C.zf) goto L_10c22704;
  /* 10c226fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c226ff jmp 0x10c22834 */
  goto L_10c22834;
L_10c22704:;
  /* 10c22704 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c2270b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c2270e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c22710 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22713 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c22715 call 0x10c15a40 */
  push32(0x10c2271au); f_10c15a40();
  /* 10c2271a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10c2271d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c22720 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10c22723 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10c22726 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c2272d jmp 0x10c22746 */
  goto L_10c22746;
  /* 10c2272f mov eax, 1 */
  EAX = (0x1u);
  /* 10c22734 ret  */
  ESPCHK(0x10c22450u, _esp0);
  ESP += 4; return;
  /* 10c22735 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c22738 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10c2273f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c22746:;
  /* 10c22746 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2274a jne 0x10c22753 */
  if (!C.zf) goto L_10c22753;
  /* 10c2274c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2274e jmp 0x10c22834 */
  goto L_10c22834;
L_10c22753:;
  /* 10c22753 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c22756 push edx */
  push32((uint32_t)(EDX));
  /* 10c22757 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c2275a push eax */
  push32((uint32_t)(EAX));
  /* 10c2275b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c2275e push ecx */
  push32((uint32_t)(ECX));
  /* 10c2275f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c22762 push edx */
  push32((uint32_t)(EDX));
  /* 10c22763 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c22765 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c22768 push eax */
  push32((uint32_t)(EAX));
  /* 10c22769 call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c2276fu);
  /* 10c2276f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c22771 jne 0x10c2277a */
  if (!C.zf) goto L_10c2277a;
  /* 10c22773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22775 jmp 0x10c22834 */
  goto L_10c22834;
L_10c2277a:;
  /* 10c2277a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c2277c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c2277e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c22781 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22782 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c22785 push edx */
  push32((uint32_t)(EDX));
  /* 10c22786 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c22788 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c2278b push eax */
  push32((uint32_t)(EAX));
  /* 10c2278c call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c22792u);
  /* 10c22792 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c22795 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22799 jne 0x10c227a2 */
  if (!C.zf) goto L_10c227a2;
  /* 10c2279b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2279d jmp 0x10c22834 */
  goto L_10c22834;
L_10c227a2:;
  /* 10c227a2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c227a9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c227ac shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c227ae add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c227b1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10c227b3 call 0x10c15a40 */
  push32(0x10c227b8u); f_10c15a40();
  /* 10c227b8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10c227bb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10c227be mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10c227c1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10c227c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10c227cb jmp 0x10c227e4 */
  goto L_10c227e4;
  /* 10c227cd mov eax, 1 */
  EAX = (0x1u);
  /* 10c227d2 ret  */
  ESPCHK(0x10c22450u, _esp0);
  ESP += 4; return;
  /* 10c227d3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10c227d6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10c227dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10c227e4:;
  /* 10c227e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c227e8 jne 0x10c227ee */
  if (!C.zf) goto L_10c227ee;
  /* 10c227ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c227ec jmp 0x10c22834 */
  goto L_10c22834;
L_10c227ee:;
  /* 10c227ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c227f1 push edx */
  push32((uint32_t)(EDX));
  /* 10c227f2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c227f5 push eax */
  push32((uint32_t)(EAX));
  /* 10c227f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10c227f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c227fa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c227fd push edx */
  push32((uint32_t)(EDX));
  /* 10c227fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10c22800 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10c22803 push eax */
  push32((uint32_t)(EAX));
  /* 10c22804 call dword ptr [0x10c402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c402a4))), 0x10c2280au);
  /* 10c2280a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c2280c jne 0x10c22812 */
  if (!C.zf) goto L_10c22812;
  /* 10c2280e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22810 jmp 0x10c22834 */
  goto L_10c22834;
L_10c22812:;
  /* 10c22812 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c22815 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22816 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c22819 push edx */
  push32((uint32_t)(EDX));
  /* 10c2281a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10c2281d push eax */
  push32((uint32_t)(EAX));
  /* 10c2281e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c22821 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22822 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c22825 push edx */
  push32((uint32_t)(EDX));
  /* 10c22826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22829 push eax */
  push32((uint32_t)(EAX));
  /* 10c2282a call dword ptr [0x10c40214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40214))), 0x10c22830u);
  /* 10c22830 jmp 0x10c22834 */
  goto L_10c22834;
L_10c22832:;
  /* 10c22832 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c22834:;
  /* 10c22834 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10c22837 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c2283a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10c22841 pop edi */
  EDI = (pop32());
  /* 10c22842 pop esi */
  ESI = (pop32());
  /* 10c22843 pop ebx */
  EBX = (pop32());
  /* 10c22844 mov esp, ebp */
  ESP = (EBP);
  /* 10c22846 pop ebp */
  EBP = (pop32());
  /* 10c22847 ret  */
  ESPCHK(0x10c22450u, _esp0);
  ESP += 4; return;
}

/* FUN_10012850 @ 0x10c22850 (80 bytes, 32 insns) */
void f_10c22850(void) {
  FTRACE(0x10c22850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22850 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22851 mov ebp, esp */
  EBP = (ESP);
  /* 10c22853 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c22856 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c22859 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c2285c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c2285f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c22862:;
  /* 10c22862 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22865 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22868 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c2286b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c2286e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c22870 je 0x10c22887 */
  if (C.zf) goto L_10c22887;
  /* 10c22872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22875 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c22878 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c2287a je 0x10c22887 */
  if (C.zf) goto L_10c22887;
  /* 10c2287c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2287f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22882 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c22885 jmp 0x10c22862 */
  goto L_10c22862;
L_10c22887:;
  /* 10c22887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c2288a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c2288d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c2288f jne 0x10c22899 */
  if (!C.zf) goto L_10c22899;
  /* 10c22891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22894 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c22897 jmp 0x10c2289c */
  goto L_10c2289c;
L_10c22899:;
  /* 10c22899 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10c2289c:;
  /* 10c2289c mov esp, ebp */
  ESP = (EBP);
  /* 10c2289e pop ebp */
  EBP = (pop32());
  /* 10c2289f ret  */
  ESPCHK(0x10c22850u, _esp0);
  ESP += 4; return;
}

/* FUN_100128a0 @ 0x10c228a0 (736 bytes, 224 insns) */
void f_10c228a0(void) {
  FTRACE(0x10c228a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c228a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c228a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c228a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c228a6 push esi */
  push32((uint32_t)(ESI));
  /* 10c228a7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c228ab je 0x10c228cc */
  if (C.zf) goto L_10c228cc;
  /* 10c228ad push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10c228af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c228b2 push eax */
  push32((uint32_t)(EAX));
  /* 10c228b3 call 0x10c22cf0 */
  push32(0x10c228b8u); f_10c22cf0();
  /* 10c228b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c228bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c228be cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c228c2 je 0x10c228cc */
  if (C.zf) goto L_10c228cc;
  /* 10c228c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c228c7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c228ca jne 0x10c228d4 */
  if (!C.zf) goto L_10c228d4;
L_10c228cc:;
  /* 10c228cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c228cf jmp 0x10c22b7b */
  goto L_10c22b7b;
L_10c228d4:;
  /* 10c228d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c228d7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c228db neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c228dd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c228df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10c228e0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c228e3 mov ecx, dword ptr [0x10c3e41c] */
  ECX = (r32((uint32_t)(0x10c3e41c)));
  /* 10c228e9 cmp ecx, dword ptr [0x10c3e420] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10c3e420))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c228ef jne 0x10c22905 */
  if (!C.zf) goto L_10c22905;
  /* 10c228f1 mov edx, dword ptr [0x10c3e41c] */
  EDX = (r32((uint32_t)(0x10c3e41c)));
  /* 10c228f7 push edx */
  push32((uint32_t)(EDX));
  /* 10c228f8 call 0x10c22c00 */
  push32(0x10c228fdu); f_10c22c00();
  /* 10c228fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22900 mov dword ptr [0x10c3e41c], eax */
  w32((uint32_t)(0x10c3e41c), (EAX));
L_10c22905:;
  /* 10c22905 cmp dword ptr [0x10c3e41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2290c jne 0x10c229c5 */
  if (!C.zf) goto L_10c229c5;
  /* 10c22912 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22916 je 0x10c22937 */
  if (C.zf) goto L_10c22937;
  /* 10c22918 cmp dword ptr [0x10c3e424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2291f je 0x10c22937 */
  if (C.zf) goto L_10c22937;
  /* 10c22921 call 0x10c223a0 */
  push32(0x10c22926u); f_10c223a0();
  /* 10c22926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c22928 je 0x10c22932 */
  if (C.zf) goto L_10c22932;
  /* 10c2292a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c2292d jmp 0x10c22b7b */
  goto L_10c22b7b;
L_10c22932:;
  /* 10c22932 jmp 0x10c229c5 */
  goto L_10c229c5;
L_10c22937:;
  /* 10c22937 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2293b je 0x10c22944 */
  if (C.zf) goto L_10c22944;
  /* 10c2293d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c2293f jmp 0x10c22b7b */
  goto L_10c22b7b;
L_10c22944:;
  /* 10c22944 cmp dword ptr [0x10c3e41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2294b jne 0x10c22984 */
  if (!C.zf) goto L_10c22984;
  /* 10c2294d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10c22952 push 0x10c3a8e0 */
  push32((uint32_t)(0x10c3a8e0u));
  /* 10c22957 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c22959 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c2295b call 0x10c128a0 */
  push32(0x10c22960u); f_10c128a0();
  /* 10c22960 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22963 mov dword ptr [0x10c3e41c], eax */
  w32((uint32_t)(0x10c3e41c), (EAX));
  /* 10c22968 cmp dword ptr [0x10c3e41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2296f jne 0x10c22979 */
  if (!C.zf) goto L_10c22979;
  /* 10c22971 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c22974 jmp 0x10c22b7b */
  goto L_10c22b7b;
L_10c22979:;
  /* 10c22979 mov eax, dword ptr [0x10c3e41c] */
  EAX = (r32((uint32_t)(0x10c3e41c)));
  /* 10c2297e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c22984:;
  /* 10c22984 cmp dword ptr [0x10c3e424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c2298b jne 0x10c229c5 */
  if (!C.zf) goto L_10c229c5;
  /* 10c2298d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10c22992 push 0x10c3a8e0 */
  push32((uint32_t)(0x10c3a8e0u));
  /* 10c22997 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c22999 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c2299b call 0x10c128a0 */
  push32(0x10c229a0u); f_10c128a0();
  /* 10c229a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c229a3 mov dword ptr [0x10c3e424], eax */
  w32((uint32_t)(0x10c3e424), (EAX));
  /* 10c229a8 cmp dword ptr [0x10c3e424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3e424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c229af jne 0x10c229b9 */
  if (!C.zf) goto L_10c229b9;
  /* 10c229b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c229b4 jmp 0x10c22b7b */
  goto L_10c22b7b;
L_10c229b9:;
  /* 10c229b9 mov ecx, dword ptr [0x10c3e424] */
  ECX = (r32((uint32_t)(0x10c3e424)));
  /* 10c229bf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10c229c5:;
  /* 10c229c5 mov edx, dword ptr [0x10c3e41c] */
  EDX = (r32((uint32_t)(0x10c3e41c)));
  /* 10c229cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c229ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c229d1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c229d4 push eax */
  push32((uint32_t)(EAX));
  /* 10c229d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c229d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c229d9 call 0x10c22b80 */
  push32(0x10c229deu); f_10c22b80();
  /* 10c229de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c229e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c229e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c229e8 jl 0x10c22a81 */
  if ((C.sf!=C.of)) goto L_10c22a81;
  /* 10c229ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c229f1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c229f4 je 0x10c22a81 */
  if (C.zf) goto L_10c22a81;
  /* 10c229fa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c229fe je 0x10c22a73 */
  if (C.zf) goto L_10c22a73;
  /* 10c22a00 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c22a02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22a05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22a08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10c22a0b push edx */
  push32((uint32_t)(EDX));
  /* 10c22a0c call 0x10c13330 */
  push32(0x10c22a11u); f_10c13330();
  /* 10c22a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22a14 jmp 0x10c22a1f */
  goto L_10c22a1f;
L_10c22a16:;
  /* 10c22a16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22a19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22a1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c22a1f:;
  /* 10c22a1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22a22 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22a25 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22a29 je 0x10c22a40 */
  if (C.zf) goto L_10c22a40;
  /* 10c22a2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22a2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22a31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22a34 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22a37 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10c22a3b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10c22a3e jmp 0x10c22a16 */
  goto L_10c22a16;
L_10c22a40:;
  /* 10c22a40 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10c22a45 push 0x10c3a8e0 */
  push32((uint32_t)(0x10c3a8e0u));
  /* 10c22a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c22a4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22a4f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10c22a52 push eax */
  push32((uint32_t)(EAX));
  /* 10c22a53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22a56 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22a57 call 0x10c12d30 */
  push32(0x10c22a5cu); f_10c12d30();
  /* 10c22a5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22a5f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c22a62 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22a66 je 0x10c22a71 */
  if (C.zf) goto L_10c22a71;
  /* 10c22a68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22a6b mov dword ptr [0x10c3e41c], edx */
  w32((uint32_t)(0x10c3e41c), (EDX));
L_10c22a71:;
  /* 10c22a71 jmp 0x10c22a7f */
  goto L_10c22a7f;
L_10c22a73:;
  /* 10c22a73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22a76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22a79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22a7c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10c22a7f:;
  /* 10c22a7f jmp 0x10c22af4 */
  goto L_10c22af4;
L_10c22a81:;
  /* 10c22a81 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22a85 jne 0x10c22aed */
  if (!C.zf) goto L_10c22aed;
  /* 10c22a87 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22a8b jge 0x10c22a95 */
  if ((C.sf==C.of)) goto L_10c22a95;
  /* 10c22a8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22a90 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c22a92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c22a95:;
  /* 10c22a95 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10c22a9a push 0x10c3a8e0 */
  push32((uint32_t)(0x10c3a8e0u));
  /* 10c22a9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c22aa1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22aa4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10c22aab push edx */
  push32((uint32_t)(EDX));
  /* 10c22aac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22aaf push eax */
  push32((uint32_t)(EAX));
  /* 10c22ab0 call 0x10c12d30 */
  push32(0x10c22ab5u); f_10c12d30();
  /* 10c22ab5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22ab8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c22abb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22abf jne 0x10c22ac9 */
  if (!C.zf) goto L_10c22ac9;
  /* 10c22ac1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c22ac4 jmp 0x10c22b7b */
  goto L_10c22b7b;
L_10c22ac9:;
  /* 10c22ac9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22acc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22acf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22ad2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10c22ad5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22ad8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22adb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10c22ae3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22ae6 mov dword ptr [0x10c3e41c], eax */
  w32((uint32_t)(0x10c3e41c), (EAX));
  /* 10c22aeb jmp 0x10c22af4 */
  goto L_10c22af4;
L_10c22aed:;
  /* 10c22aed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22aef jmp 0x10c22b7b */
  goto L_10c22b7b;
L_10c22af4:;
  /* 10c22af4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22af8 je 0x10c22b79 */
  if (C.zf) goto L_10c22b79;
  /* 10c22afa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10c22aff push 0x10c3a8e0 */
  push32((uint32_t)(0x10c3a8e0u));
  /* 10c22b04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c22b06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22b09 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22b0a call 0x10c156d0 */
  push32(0x10c22b0fu); f_10c156d0();
  /* 10c22b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22b12 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22b15 push eax */
  push32((uint32_t)(EAX));
  /* 10c22b16 call 0x10c128a0 */
  push32(0x10c22b1bu); f_10c128a0();
  /* 10c22b1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22b1e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c22b21 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22b25 je 0x10c22b79 */
  if (C.zf) goto L_10c22b79;
  /* 10c22b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22b2a push edx */
  push32((uint32_t)(EDX));
  /* 10c22b2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c22b2e push eax */
  push32((uint32_t)(EAX));
  /* 10c22b2f call 0x10c15850 */
  push32(0x10c22b34u); f_10c15850();
  /* 10c22b34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22b37 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c22b3a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c22b3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c22b40 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22b42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c22b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22b48 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c22b4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22b4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22b51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c22b54 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c22b57 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c22b59 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c22b5b not edx */
  EDX = (~(EDX));
  /* 10c22b5d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10c22b60 push edx */
  push32((uint32_t)(EDX));
  /* 10c22b61 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c22b64 push eax */
  push32((uint32_t)(EAX));
  /* 10c22b65 call dword ptr [0x10c40210] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c40210))), 0x10c22b6bu);
  /* 10c22b6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c22b6d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c22b70 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22b71 call 0x10c13330 */
  push32(0x10c22b76u); f_10c13330();
  /* 10c22b76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c22b79:;
  /* 10c22b79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c22b7b:;
  /* 10c22b7b pop esi */
  ESI = (pop32());
  /* 10c22b7c mov esp, ebp */
  ESP = (EBP);
  /* 10c22b7e pop ebp */
  EBP = (pop32());
  /* 10c22b7f ret  */
  ESPCHK(0x10c228a0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10c22b80 (124 bytes, 47 insns) */
void f_10c22b80(void) {
  FTRACE(0x10c22b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22b81 mov ebp, esp */
  EBP = (ESP);
  /* 10c22b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22b84 mov eax, dword ptr [0x10c3e41c] */
  EAX = (r32((uint32_t)(0x10c3e41c)));
  /* 10c22b89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c22b8c jmp 0x10c22b97 */
  goto L_10c22b97;
L_10c22b8e:;
  /* 10c22b8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22b91 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22b94 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c22b97:;
  /* 10c22b97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22b9a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22b9d je 0x10c22bea */
  if (C.zf) goto L_10c22bea;
  /* 10c22b9f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c22ba2 push eax */
  push32((uint32_t)(EAX));
  /* 10c22ba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22ba6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c22ba8 push edx */
  push32((uint32_t)(EDX));
  /* 10c22ba9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22bac push eax */
  push32((uint32_t)(EAX));
  /* 10c22bad call 0x10c22350 */
  push32(0x10c22bb2u); f_10c22350();
  /* 10c22bb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22bb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c22bb7 jne 0x10c22be8 */
  if (!C.zf) goto L_10c22be8;
  /* 10c22bb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22bbc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c22bbe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c22bc1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10c22bc5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22bc8 je 0x10c22bda */
  if (C.zf) goto L_10c22bda;
  /* 10c22bca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22bcd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c22bcf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c22bd2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10c22bd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c22bd8 jne 0x10c22be8 */
  if (!C.zf) goto L_10c22be8;
L_10c22bda:;
  /* 10c22bda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22bdd sub eax, dword ptr [0x10c3e41c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3e41c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c22be3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10c22be6 jmp 0x10c22bf8 */
  goto L_10c22bf8;
L_10c22be8:;
  /* 10c22be8 jmp 0x10c22b8e */
  goto L_10c22b8e;
L_10c22bea:;
  /* 10c22bea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22bed sub eax, dword ptr [0x10c3e41c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10c3e41c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c22bf3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10c22bf6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10c22bf8:;
  /* 10c22bf8 mov esp, ebp */
  ESP = (EBP);
  /* 10c22bfa pop ebp */
  EBP = (pop32());
  /* 10c22bfb ret  */
  ESPCHK(0x10c22b80u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10c22c00 (238 bytes, 80 insns) */
void f_10c22c00(void) {
  FTRACE(0x10c22c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22c01 mov ebp, esp */
  EBP = (ESP);
  /* 10c22c03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c22c06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10c22c0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22c10 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c22c13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22c17 jne 0x10c22c20 */
  if (!C.zf) goto L_10c22c20;
  /* 10c22c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22c1b jmp 0x10c22cea */
  goto L_10c22cea;
L_10c22c20:;
  /* 10c22c20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22c23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c22c25 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22c28 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22c2b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c22c2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c22c30 je 0x10c22c3d */
  if (C.zf) goto L_10c22c3d;
  /* 10c22c32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c22c35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22c38 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c22c3b jmp 0x10c22c20 */
  goto L_10c22c20;
L_10c22c3d:;
  /* 10c22c3d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10c22c42 push 0x10c3a8e0 */
  push32((uint32_t)(0x10c3a8e0u));
  /* 10c22c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c22c49 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c22c4c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10c22c53 push eax */
  push32((uint32_t)(EAX));
  /* 10c22c54 call 0x10c128a0 */
  push32(0x10c22c59u); f_10c128a0();
  /* 10c22c59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22c5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c22c5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22c62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c22c65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22c69 jne 0x10c22c75 */
  if (!C.zf) goto L_10c22c75;
  /* 10c22c6b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c22c6d call 0x10c11810 */
  push32(0x10c22c72u); f_10c11810();
  /* 10c22c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c22c75:;
  /* 10c22c75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22c78 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c22c7b:;
  /* 10c22c7b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22c7e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22c81 je 0x10c22cde */
  if (C.zf) goto L_10c22cde;
  /* 10c22c83 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10c22c88 push 0x10c3a8e0 */
  push32((uint32_t)(0x10c3a8e0u));
  /* 10c22c8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c22c8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22c92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c22c94 push edx */
  push32((uint32_t)(EDX));
  /* 10c22c95 call 0x10c156d0 */
  push32(0x10c22c9au); f_10c156d0();
  /* 10c22c9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22c9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22ca0 push eax */
  push32((uint32_t)(EAX));
  /* 10c22ca1 call 0x10c128a0 */
  push32(0x10c22ca6u); f_10c128a0();
  /* 10c22ca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22ca9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22cac mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c22cae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22cb1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22cb4 je 0x10c22cca */
  if (C.zf) goto L_10c22cca;
  /* 10c22cb6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22cb9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c22cbb push ecx */
  push32((uint32_t)(ECX));
  /* 10c22cbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22cbf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c22cc1 push eax */
  push32((uint32_t)(EAX));
  /* 10c22cc2 call 0x10c15850 */
  push32(0x10c22cc7u); f_10c15850();
  /* 10c22cc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c22cca:;
  /* 10c22cca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c22ccd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22cd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c22cd3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22cd6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22cd9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c22cdc jmp 0x10c22c7b */
  goto L_10c22c7b;
L_10c22cde:;
  /* 10c22cde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c22ce1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c22ce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c22cea:;
  /* 10c22cea mov esp, ebp */
  ESP = (EBP);
  /* 10c22cec pop ebp */
  EBP = (pop32());
  /* 10c22ced ret  */
  ESPCHK(0x10c22c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cf0 @ 0x10c22cf0 (237 bytes, 81 insns) */
void f_10c22cf0(void) {
  FTRACE(0x10c22cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c22cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10c22cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22cf4 cmp dword ptr [0x10c3fb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10c3fb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22cfb jne 0x10c22d12 */
  if (!C.zf) goto L_10c22d12;
  /* 10c22cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c22d00 push eax */
  push32((uint32_t)(EAX));
  /* 10c22d01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22d04 push ecx */
  push32((uint32_t)(ECX));
  /* 10c22d05 call 0x10c22df0 */
  push32(0x10c22d0au); f_10c22df0();
  /* 10c22d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22d0d jmp 0x10c22dd9 */
  goto L_10c22dd9;
L_10c22d12:;
  /* 10c22d12 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c22d14 call 0x10c162a0 */
  push32(0x10c22d19u); f_10c162a0();
  /* 10c22d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22d1c jmp 0x10c22d27 */
  goto L_10c22d27;
L_10c22d1e:;
  /* 10c22d1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22d21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22d24 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10c22d27:;
  /* 10c22d27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22d2a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10c22d2e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10c22d32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22d35 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c22d3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c22d3d je 0x10c22dbb */
  if (C.zf) goto L_10c22dbb;
  /* 10c22d3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22d42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c22d47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c22d49 mov cl, byte ptr [eax + 0x10c3fc81] */
  CL = (r8((uint32_t)(EAX + 0x10c3fc81)));
  /* 10c22d4f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c22d52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c22d54 je 0x10c22da6 */
  if (C.zf) goto L_10c22da6;
  /* 10c22d56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22d59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22d5c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c22d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22d62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c22d64 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c22d66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c22d68 jne 0x10c22d78 */
  if (!C.zf) goto L_10c22d78;
  /* 10c22d6a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c22d6c call 0x10c16340 */
  push32(0x10c22d71u); f_10c16340();
  /* 10c22d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22d76 jmp 0x10c22dd9 */
  goto L_10c22dd9;
L_10c22d78:;
  /* 10c22d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22d7b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c22d81 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10c22d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22d87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c22d89 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c22d8b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10c22d8d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22d90 jne 0x10c22da4 */
  if (!C.zf) goto L_10c22da4;
  /* 10c22d92 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c22d94 call 0x10c16340 */
  push32(0x10c22d99u); f_10c16340();
  /* 10c22d99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22d9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22d9f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c22da2 jmp 0x10c22dd9 */
  goto L_10c22dd9;
L_10c22da4:;
  /* 10c22da4 jmp 0x10c22db6 */
  goto L_10c22db6;
L_10c22da6:;
  /* 10c22da6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22da9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c22daf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22db2 jne 0x10c22db6 */
  if (!C.zf) goto L_10c22db6;
  /* 10c22db4 jmp 0x10c22dbb */
  goto L_10c22dbb;
L_10c22db6:;
  /* 10c22db6 jmp 0x10c22d1e */
  goto L_10c22d1e;
L_10c22dbb:;
  /* 10c22dbb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10c22dbd call 0x10c16340 */
  push32(0x10c22dc2u); f_10c16340();
  /* 10c22dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c22dc8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c22dcd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c22dd0 jne 0x10c22dd7 */
  if (!C.zf) goto L_10c22dd7;
  /* 10c22dd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c22dd5 jmp 0x10c22dd9 */
  goto L_10c22dd9;
L_10c22dd7:;
  /* 10c22dd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c22dd9:;
  /* 10c22dd9 mov esp, ebp */
  ESP = (EBP);
  /* 10c22ddb pop ebp */
  EBP = (pop32());
  /* 10c22ddc ret  */
  ESPCHK(0x10c22cf0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10c22df0 (193 bytes, 87 insns) */
void f_10c22df0(void) {
  FTRACE(0x10c22df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22df2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10c22df6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c22df7 mov ebx, eax */
  EBX = (EAX);
  /* 10c22df9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10c22dfc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c22e00 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10c22e06 je 0x10c22e1b */
  if (C.zf) goto L_10c22e1b;
L_10c22e08:;
  /* 10c22e08 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10c22e0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10c22e0b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c22e0d je 0x10c22de0 */
  if (C.zf) { jmp_ind(0x10c22de0u); return; }
  /* 10c22e0f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10c22e11 je 0x10c22e64 */
  if (C.zf) goto L_10c22e64;
  /* 10c22e13 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10c22e19 jne 0x10c22e08 */
  if (!C.zf) goto L_10c22e08;
L_10c22e1b:;
  /* 10c22e1b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10c22e1d push edi */
  push32((uint32_t)(EDI));
  /* 10c22e1e mov eax, ebx */
  EAX = (EBX);
  /* 10c22e20 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10c22e23 push esi */
  push32((uint32_t)(ESI));
  /* 10c22e24 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10c22e26:;
  /* 10c22e26 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10c22e28 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10c22e2d mov eax, ecx */
  EAX = (ECX);
  /* 10c22e2f mov esi, edi */
  ESI = (EDI);
  /* 10c22e31 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10c22e33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22e35 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22e37 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c22e3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c22e3d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10c22e3f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10c22e41 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c22e44 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10c22e4a jne 0x10c22e68 */
  if (!C.zf) goto L_10c22e68;
  /* 10c22e4c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10c22e51 je 0x10c22e26 */
  if (C.zf) goto L_10c22e26;
  /* 10c22e53 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10c22e58 jne 0x10c22e62 */
  if (!C.zf) goto L_10c22e62;
  /* 10c22e5a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10c22e60 jne 0x10c22e26 */
  if (!C.zf) goto L_10c22e26;
L_10c22e62:;
  /* 10c22e62 pop esi */
  ESI = (pop32());
  /* 10c22e63 pop edi */
  EDI = (pop32());
L_10c22e64:;
  /* 10c22e64 pop ebx */
  EBX = (pop32());
  /* 10c22e65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c22e67 ret  */
  ESPCHK(0x10c22df0u, _esp0);
  ESP += 4; return;
L_10c22e68:;
  /* 10c22e68 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10c22e6b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c22e6d je 0x10c22ea5 */
  if (C.zf) goto L_10c22ea5;
  /* 10c22e6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c22e71 je 0x10c22e62 */
  if (C.zf) goto L_10c22e62;
  /* 10c22e73 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c22e75 je 0x10c22e9e */
  if (C.zf) goto L_10c22e9e;
  /* 10c22e77 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c22e79 je 0x10c22e62 */
  if (C.zf) goto L_10c22e62;
  /* 10c22e7b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c22e7e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c22e80 je 0x10c22e97 */
  if (C.zf) goto L_10c22e97;
  /* 10c22e82 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c22e84 je 0x10c22e62 */
  if (C.zf) goto L_10c22e62;
  /* 10c22e86 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10c22e88 je 0x10c22e90 */
  if (C.zf) goto L_10c22e90;
  /* 10c22e8a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c22e8c je 0x10c22e62 */
  if (C.zf) goto L_10c22e62;
  /* 10c22e8e jmp 0x10c22e26 */
  goto L_10c22e26;
L_10c22e90:;
  /* 10c22e90 pop esi */
  ESI = (pop32());
  /* 10c22e91 pop edi */
  EDI = (pop32());
  /* 10c22e92 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10c22e95 pop ebx */
  EBX = (pop32());
  /* 10c22e96 ret  */
  ESPCHK(0x10c22df0u, _esp0);
  ESP += 4; return;
L_10c22e97:;
  /* 10c22e97 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10c22e9a pop esi */
  ESI = (pop32());
  /* 10c22e9b pop edi */
  EDI = (pop32());
  /* 10c22e9c pop ebx */
  EBX = (pop32());
  /* 10c22e9d ret  */
  ESPCHK(0x10c22df0u, _esp0);
  ESP += 4; return;
L_10c22e9e:;
  /* 10c22e9e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10c22ea1 pop esi */
  ESI = (pop32());
  /* 10c22ea2 pop edi */
  EDI = (pop32());
  /* 10c22ea3 pop ebx */
  EBX = (pop32());
  /* 10c22ea4 ret  */
  ESPCHK(0x10c22df0u, _esp0);
  ESP += 4; return;
L_10c22ea5:;
  /* 10c22ea5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10c22ea8 pop esi */
  ESI = (pop32());
  /* 10c22ea9 pop edi */
  EDI = (pop32());
  /* 10c22eaa pop ebx */
  EBX = (pop32());
  /* 10c22eab ret  */
  ESPCHK(0x10c22df0u, _esp0);
  ESP += 4; return;
  /* 10c22eac jmp dword ptr [0x10c40220] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10c40220)))); return;
}

/* RtlUnwind @ 0x10c22ffc (6 bytes, 1 insns) */
void f_10c22ffc(void) {
  FTRACE(0x10c22ffcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c22ffc jmp dword ptr [0x10c40300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10c40300)))); return;
}

