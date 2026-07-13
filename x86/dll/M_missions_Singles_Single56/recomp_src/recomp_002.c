#include "recomp.h"

/* FUN_10015e20 @ 0x11945e20 (393 bytes, 123 insns) */
void f_11945e20(void) {
  FTRACE(0x11945e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11945e21 mov ebp, esp */
  EBP = (ESP);
  /* 11945e23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945e26 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945e2a jne 0x11945e36 */
  if (!C.zf) goto L_11945e36;
  /* 11945e2c mov eax, dword ptr [0x11964c98] */
  EAX = (r32((uint32_t)(0x11964c98)));
  /* 11945e31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11945e34 jmp 0x11945e3c */
  goto L_11945e3c;
L_11945e36:;
  /* 11945e36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11945e39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11945e3c:;
  /* 11945e3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11945e3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11945e42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11945e45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11945e48 push 0x11965bdc */
  push32((uint32_t)(0x11965bdcu));
  /* 11945e4d call dword ptr [0x119683b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683b4))), 0x11945e53u);
  /* 11945e53 cmp dword ptr [0x11965bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945e5a je 0x11945e7a */
  if (C.zf) goto L_11945e7a;
  /* 11945e5c push 0x11965bdc */
  push32((uint32_t)(0x11965bdcu));
  /* 11945e61 call dword ptr [0x119683a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683a4))), 0x11945e67u);
  /* 11945e67 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11945e69 call 0x1193c4e0 */
  push32(0x11945e6eu); f_1193c4e0();
  /* 11945e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945e71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11945e78 jmp 0x11945e81 */
  goto L_11945e81;
L_11945e7a:;
  /* 11945e7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11945e81:;
  /* 11945e81 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945e85 jbe 0x11945f72 */
  if ((C.cf||C.zf)) goto L_11945f72;
  /* 11945e8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945e8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11945e90 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11945e93 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11945e97 je 0x11945ea1 */
  if (C.zf) goto L_11945ea1;
  /* 11945e99 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11945e9d je 0x11945ea6 */
  if (C.zf) goto L_11945ea6;
  /* 11945e9f jmp 0x11945f00 */
  goto L_11945f00;
L_11945ea1:;
  /* 11945ea1 jmp 0x11945f72 */
  goto L_11945f72;
L_11945ea6:;
  /* 11945ea6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945ea9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945eac mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11945eaf mov dword ptr [0x11965bb8], 0 */
  w32((uint32_t)(0x11965bb8), (0x0u));
  /* 11945eb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945ebc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11945ebf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945ec2 jne 0x11945ed7 */
  if (!C.zf) goto L_11945ed7;
  /* 11945ec4 mov dword ptr [0x11965bb8], 1 */
  w32((uint32_t)(0x11965bb8), (0x1u));
  /* 11945ece mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945ed1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945ed4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11945ed7:;
  /* 11945ed7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11945eda push ecx */
  push32((uint32_t)(ECX));
  /* 11945edb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11945ede push edx */
  push32((uint32_t)(EDX));
  /* 11945edf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11945ee2 push eax */
  push32((uint32_t)(EAX));
  /* 11945ee3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11945ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 11945ee7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945eea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11945eec push eax */
  push32((uint32_t)(EAX));
  /* 11945eed call 0x11945fb0 */
  push32(0x11945ef2u); f_11945fb0();
  /* 11945ef2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945ef5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945ef8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945efb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11945efe jmp 0x11945f6d */
  goto L_11945f6d;
L_11945f00:;
  /* 11945f00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11945f05 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11945f07 mov ecx, dword ptr [0x11963c98] */
  ECX = (r32((uint32_t)(0x11963c98)));
  /* 11945f0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11945f0f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11945f13 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11945f19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11945f1b je 0x11945f48 */
  if (C.zf) goto L_11945f48;
  /* 11945f1d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945f21 jbe 0x11945f48 */
  if ((C.cf||C.zf)) goto L_11945f48;
  /* 11945f23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945f26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945f29 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11945f2b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11945f2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945f30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945f33 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11945f36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945f39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945f3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11945f3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945f42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945f45 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11945f48:;
  /* 11945f48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945f4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945f4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11945f50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11945f52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945f55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945f58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11945f5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945f5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11945f61 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11945f64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945f67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945f6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11945f6d:;
  /* 11945f6d jmp 0x11945e81 */
  goto L_11945e81;
L_11945f72:;
  /* 11945f72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945f76 je 0x11945f84 */
  if (C.zf) goto L_11945f84;
  /* 11945f78 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11945f7a call 0x1193c580 */
  push32(0x11945f7fu); f_1193c580();
  /* 11945f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11945f82 jmp 0x11945f8f */
  goto L_11945f8f;
L_11945f84:;
  /* 11945f84 push 0x11965bdc */
  push32((uint32_t)(0x11965bdcu));
  /* 11945f89 call dword ptr [0x119683a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683a4))), 0x11945f8fu);
L_11945f8f:;
  /* 11945f8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945f93 jbe 0x11945fa3 */
  if ((C.cf||C.zf)) goto L_11945fa3;
  /* 11945f95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11945f98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11945f9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11945f9e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945fa1 jmp 0x11945fa5 */
  goto L_11945fa5;
L_11945fa3:;
  /* 11945fa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11945fa5:;
  /* 11945fa5 mov esp, ebp */
  ESP = (EBP);
  /* 11945fa7 pop ebp */
  EBP = (pop32());
  /* 11945fa8 ret  */
  ESPCHK(0x11945e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10015fb0 @ 0x11945fb0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11945fb0(void) {
  FTRACE(0x11945fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11945fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11945fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11945fb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945fb6 push esi */
  push32((uint32_t)(ESI));
  /* 11945fb7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11945fbb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11945fbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945fc1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11945fc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11945fc7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11945fcb ja 0x11946518 */
  if ((!C.cf&&!C.zf)) goto L_11946518;
  /* 11945fd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11945fd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11945fd6 mov dl, byte ptr [eax + 0x11946579] */
  DL = (r8((uint32_t)(EAX + 0x11946579)));
  /* 11945fdc jmp dword ptr [edx*4 + 0x1194651d] */
  switch (EDX) {
    case 0: goto L_119464f6;
    case 1: goto L_11946005;
    case 2: goto L_1194604b;
    case 3: goto L_11946198;
    case 4: goto L_119461c0;
    case 5: goto L_1194625f;
    case 6: goto L_119462cb;
    case 7: goto L_119462f4;
    case 8: goto L_11946335;
    case 9: goto L_11946417;
    case 10: goto L_1194647e;
    case 11: goto L_119464cb;
    case 12: goto L_11945fe3;
    case 13: goto L_11946028;
    case 14: goto L_1194606e;
    case 15: goto L_1194616e;
    case 16: goto L_11946205;
    case 17: goto L_11946232;
    case 18: goto L_11946287;
    case 19: goto L_1194630b;
    case 20: goto L_119463b9;
    case 21: goto L_11946448;
    case 22: goto L_11946518;
    default: x86_unimpl("switch@0x11945fdc out of table"); return;
  }
L_11945fe3:;
  /* 11945fe3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11945fe6 push ecx */
  push32((uint32_t)(ECX));
  /* 11945fe7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11945fea push edx */
  push32((uint32_t)(EDX));
  /* 11945feb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11945fee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11945ff1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11945ff4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11945ff7 push eax */
  push32((uint32_t)(EAX));
  /* 11945ff8 call 0x119465d0 */
  push32(0x11945ffdu); f_119465d0();
  /* 11945ffd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946000 jmp 0x11946518 */
  goto L_11946518;
L_11946005:;
  /* 11946005 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946008 push ecx */
  push32((uint32_t)(ECX));
  /* 11946009 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194600c push edx */
  push32((uint32_t)(EDX));
  /* 1194600d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946010 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11946013 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11946016 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1194601a push eax */
  push32((uint32_t)(EAX));
  /* 1194601b call 0x119465d0 */
  push32(0x11946020u); f_119465d0();
  /* 11946020 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946023 jmp 0x11946518 */
  goto L_11946518;
L_11946028:;
  /* 11946028 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194602b push ecx */
  push32((uint32_t)(ECX));
  /* 1194602c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194602f push edx */
  push32((uint32_t)(EDX));
  /* 11946030 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946033 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11946036 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11946039 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1194603d push eax */
  push32((uint32_t)(EAX));
  /* 1194603e call 0x119465d0 */
  push32(0x11946043u); f_119465d0();
  /* 11946043 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946046 jmp 0x11946518 */
  goto L_11946518;
L_1194604b:;
  /* 1194604b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194604e push ecx */
  push32((uint32_t)(ECX));
  /* 1194604f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946052 push edx */
  push32((uint32_t)(EDX));
  /* 11946053 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946056 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11946059 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1194605c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11946060 push eax */
  push32((uint32_t)(EAX));
  /* 11946061 call 0x119465d0 */
  push32(0x11946066u); f_119465d0();
  /* 11946066 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946069 jmp 0x11946518 */
  goto L_11946518;
L_1194606e:;
  /* 1194606e cmp dword ptr [0x11965bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946075 je 0x119460f6 */
  if (C.zf) goto L_119460f6;
  /* 11946077 mov dword ptr [0x11965bb8], 0 */
  w32((uint32_t)(0x11965bb8), (0x0u));
  /* 11946081 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11946084 push ecx */
  push32((uint32_t)(ECX));
  /* 11946085 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946088 push edx */
  push32((uint32_t)(EDX));
  /* 11946089 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194608c push eax */
  push32((uint32_t)(EAX));
  /* 1194608d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946090 push ecx */
  push32((uint32_t)(ECX));
  /* 11946091 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11946094 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1194609a push eax */
  push32((uint32_t)(EAX));
  /* 1194609b call 0x11946780 */
  push32(0x119460a0u); f_11946780();
  /* 119460a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119460a3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119460a6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119460a9 jne 0x119460b0 */
  if (!C.zf) goto L_119460b0;
  /* 119460ab jmp 0x11946518 */
  goto L_11946518;
L_119460b0:;
  /* 119460b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119460b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119460b5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 119460b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119460bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119460bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119460c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119460c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119460c5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119460c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119460ca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119460cd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119460d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119460d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119460d5 push ecx */
  push32((uint32_t)(ECX));
  /* 119460d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119460d9 push edx */
  push32((uint32_t)(EDX));
  /* 119460da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119460dd push eax */
  push32((uint32_t)(EAX));
  /* 119460de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119460e1 push ecx */
  push32((uint32_t)(ECX));
  /* 119460e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119460e5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 119460eb push eax */
  push32((uint32_t)(EAX));
  /* 119460ec call 0x11946780 */
  push32(0x119460f1u); f_11946780();
  /* 119460f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119460f4 jmp 0x11946169 */
  goto L_11946169;
L_119460f6:;
  /* 119460f6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119460f9 push ecx */
  push32((uint32_t)(ECX));
  /* 119460fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119460fd push edx */
  push32((uint32_t)(EDX));
  /* 119460fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946101 push eax */
  push32((uint32_t)(EAX));
  /* 11946102 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946105 push ecx */
  push32((uint32_t)(ECX));
  /* 11946106 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11946109 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1194610f push eax */
  push32((uint32_t)(EAX));
  /* 11946110 call 0x11946780 */
  push32(0x11946115u); f_11946780();
  /* 11946115 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946118 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194611b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194611e jne 0x11946125 */
  if (!C.zf) goto L_11946125;
  /* 11946120 jmp 0x11946518 */
  goto L_11946518;
L_11946125:;
  /* 11946125 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946128 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1194612a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1194612d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946130 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11946132 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946135 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946138 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1194613a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194613d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1194613f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946142 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946145 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11946147 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1194614a push ecx */
  push32((uint32_t)(ECX));
  /* 1194614b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194614e push edx */
  push32((uint32_t)(EDX));
  /* 1194614f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946152 push eax */
  push32((uint32_t)(EAX));
  /* 11946153 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946156 push ecx */
  push32((uint32_t)(ECX));
  /* 11946157 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1194615a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11946160 push eax */
  push32((uint32_t)(EAX));
  /* 11946161 call 0x11946780 */
  push32(0x11946166u); f_11946780();
  /* 11946166 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11946169:;
  /* 11946169 jmp 0x11946518 */
  goto L_11946518;
L_1194616e:;
  /* 1194616e mov ecx, dword ptr [0x11965bb8] */
  ECX = (r32((uint32_t)(0x11965bb8)));
  /* 11946174 mov dword ptr [0x11965bc8], ecx */
  w32((uint32_t)(0x11965bc8), (ECX));
  /* 1194617a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194617d push edx */
  push32((uint32_t)(EDX));
  /* 1194617e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946181 push eax */
  push32((uint32_t)(EAX));
  /* 11946182 push 2 */
  push32((uint32_t)(0x2u));
  /* 11946184 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946187 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1194618a push edx */
  push32((uint32_t)(EDX));
  /* 1194618b call 0x11946620 */
  push32(0x11946190u); f_11946620();
  /* 11946190 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946193 jmp 0x11946518 */
  goto L_11946518;
L_11946198:;
  /* 11946198 mov eax, dword ptr [0x11965bb8] */
  EAX = (r32((uint32_t)(0x11965bb8)));
  /* 1194619d mov dword ptr [0x11965bc8], eax */
  w32((uint32_t)(0x11965bc8), (EAX));
  /* 119461a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119461a5 push ecx */
  push32((uint32_t)(ECX));
  /* 119461a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119461a9 push edx */
  push32((uint32_t)(EDX));
  /* 119461aa push 2 */
  push32((uint32_t)(0x2u));
  /* 119461ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119461af mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119461b2 push ecx */
  push32((uint32_t)(ECX));
  /* 119461b3 call 0x11946620 */
  push32(0x119461b8u); f_11946620();
  /* 119461b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119461bb jmp 0x11946518 */
  goto L_11946518;
L_119461c0:;
  /* 119461c0 mov edx, dword ptr [0x11965bb8] */
  EDX = (r32((uint32_t)(0x11965bb8)));
  /* 119461c6 mov dword ptr [0x11965bc8], edx */
  w32((uint32_t)(0x11965bc8), (EDX));
  /* 119461cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119461cf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 119461d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119461d3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 119461d8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119461da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119461dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119461e1 jne 0x119461ea */
  if (!C.zf) goto L_119461ea;
  /* 119461e3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_119461ea:;
  /* 119461ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119461ed push edx */
  push32((uint32_t)(EDX));
  /* 119461ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119461f1 push eax */
  push32((uint32_t)(EAX));
  /* 119461f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 119461f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119461f7 push ecx */
  push32((uint32_t)(ECX));
  /* 119461f8 call 0x11946620 */
  push32(0x119461fdu); f_11946620();
  /* 119461fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946200 jmp 0x11946518 */
  goto L_11946518;
L_11946205:;
  /* 11946205 mov edx, dword ptr [0x11965bb8] */
  EDX = (r32((uint32_t)(0x11965bb8)));
  /* 1194620b mov dword ptr [0x11965bc8], edx */
  w32((uint32_t)(0x11965bc8), (EDX));
  /* 11946211 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946214 push eax */
  push32((uint32_t)(EAX));
  /* 11946215 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946218 push ecx */
  push32((uint32_t)(ECX));
  /* 11946219 push 3 */
  push32((uint32_t)(0x3u));
  /* 1194621b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194621e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11946221 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946224 push eax */
  push32((uint32_t)(EAX));
  /* 11946225 call 0x11946620 */
  push32(0x1194622au); f_11946620();
  /* 1194622a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194622d jmp 0x11946518 */
  goto L_11946518;
L_11946232:;
  /* 11946232 mov ecx, dword ptr [0x11965bb8] */
  ECX = (r32((uint32_t)(0x11965bb8)));
  /* 11946238 mov dword ptr [0x11965bc8], ecx */
  w32((uint32_t)(0x11965bc8), (ECX));
  /* 1194623e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946241 push edx */
  push32((uint32_t)(EDX));
  /* 11946242 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946245 push eax */
  push32((uint32_t)(EAX));
  /* 11946246 push 2 */
  push32((uint32_t)(0x2u));
  /* 11946248 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194624b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1194624e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946251 push edx */
  push32((uint32_t)(EDX));
  /* 11946252 call 0x11946620 */
  push32(0x11946257u); f_11946620();
  /* 11946257 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194625a jmp 0x11946518 */
  goto L_11946518;
L_1194625f:;
  /* 1194625f mov eax, dword ptr [0x11965bb8] */
  EAX = (r32((uint32_t)(0x11965bb8)));
  /* 11946264 mov dword ptr [0x11965bc8], eax */
  w32((uint32_t)(0x11965bc8), (EAX));
  /* 11946269 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194626c push ecx */
  push32((uint32_t)(ECX));
  /* 1194626d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946270 push edx */
  push32((uint32_t)(EDX));
  /* 11946271 push 2 */
  push32((uint32_t)(0x2u));
  /* 11946273 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946276 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11946279 push ecx */
  push32((uint32_t)(ECX));
  /* 1194627a call 0x11946620 */
  push32(0x1194627fu); f_11946620();
  /* 1194627f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946282 jmp 0x11946518 */
  goto L_11946518;
L_11946287:;
  /* 11946287 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194628a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194628e jg 0x119462ac */
  if ((!C.zf&&C.sf==C.of)) goto L_119462ac;
  /* 11946290 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946293 push eax */
  push32((uint32_t)(EAX));
  /* 11946294 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946297 push ecx */
  push32((uint32_t)(ECX));
  /* 11946298 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1194629b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 119462a1 push eax */
  push32((uint32_t)(EAX));
  /* 119462a2 call 0x119465d0 */
  push32(0x119462a7u); f_119465d0();
  /* 119462a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119462aa jmp 0x119462c6 */
  goto L_119462c6;
L_119462ac:;
  /* 119462ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119462af push ecx */
  push32((uint32_t)(ECX));
  /* 119462b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119462b3 push edx */
  push32((uint32_t)(EDX));
  /* 119462b4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119462b7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 119462bd push ecx */
  push32((uint32_t)(ECX));
  /* 119462be call 0x119465d0 */
  push32(0x119462c3u); f_119465d0();
  /* 119462c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119462c6:;
  /* 119462c6 jmp 0x11946518 */
  goto L_11946518;
L_119462cb:;
  /* 119462cb mov edx, dword ptr [0x11965bb8] */
  EDX = (r32((uint32_t)(0x11965bb8)));
  /* 119462d1 mov dword ptr [0x11965bc8], edx */
  w32((uint32_t)(0x11965bc8), (EDX));
  /* 119462d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119462da push eax */
  push32((uint32_t)(EAX));
  /* 119462db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119462de push ecx */
  push32((uint32_t)(ECX));
  /* 119462df push 2 */
  push32((uint32_t)(0x2u));
  /* 119462e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119462e4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119462e6 push eax */
  push32((uint32_t)(EAX));
  /* 119462e7 call 0x11946620 */
  push32(0x119462ecu); f_11946620();
  /* 119462ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119462ef jmp 0x11946518 */
  goto L_11946518;
L_119462f4:;
  /* 119462f4 mov ecx, dword ptr [0x11965bb8] */
  ECX = (r32((uint32_t)(0x11965bb8)));
  /* 119462fa mov dword ptr [0x11965bc8], ecx */
  w32((uint32_t)(0x11965bc8), (ECX));
  /* 11946300 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946303 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11946306 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11946309 jmp 0x1194635d */
  goto L_1194635d;
L_1194630b:;
  /* 1194630b mov ecx, dword ptr [0x11965bb8] */
  ECX = (r32((uint32_t)(0x11965bb8)));
  /* 11946311 mov dword ptr [0x11965bc8], ecx */
  w32((uint32_t)(0x11965bc8), (ECX));
  /* 11946317 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194631a push edx */
  push32((uint32_t)(EDX));
  /* 1194631b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194631e push eax */
  push32((uint32_t)(EAX));
  /* 1194631f push 1 */
  push32((uint32_t)(0x1u));
  /* 11946321 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946324 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11946327 push edx */
  push32((uint32_t)(EDX));
  /* 11946328 call 0x11946620 */
  push32(0x1194632du); f_11946620();
  /* 1194632d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946330 jmp 0x11946518 */
  goto L_11946518;
L_11946335:;
  /* 11946335 mov eax, dword ptr [0x11965bb8] */
  EAX = (r32((uint32_t)(0x11965bb8)));
  /* 1194633a mov dword ptr [0x11965bc8], eax */
  w32((uint32_t)(0x11965bc8), (EAX));
  /* 1194633f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946342 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946346 jne 0x11946351 */
  if (!C.zf) goto L_11946351;
  /* 11946348 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1194634f jmp 0x1194635d */
  goto L_1194635d;
L_11946351:;
  /* 11946351 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946354 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11946357 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194635a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1194635d:;
  /* 1194635d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946360 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11946363 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946366 jge 0x11946371 */
  if ((C.sf==C.of)) goto L_11946371;
  /* 11946368 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194636f jmp 0x1194639e */
  goto L_1194639e;
L_11946371:;
  /* 11946371 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946374 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11946377 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11946378 mov ecx, 7 */
  ECX = (0x7u);
  /* 1194637d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1194637f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11946382 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946385 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11946388 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11946389 mov ecx, 7 */
  ECX = (0x7u);
  /* 1194638e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11946390 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946393 jl 0x1194639e */
  if ((C.sf!=C.of)) goto L_1194639e;
  /* 11946395 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11946398 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194639b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1194639e:;
  /* 1194639e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119463a1 push eax */
  push32((uint32_t)(EAX));
  /* 119463a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119463a5 push ecx */
  push32((uint32_t)(ECX));
  /* 119463a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119463a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119463ab push edx */
  push32((uint32_t)(EDX));
  /* 119463ac call 0x11946620 */
  push32(0x119463b1u); f_11946620();
  /* 119463b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119463b4 jmp 0x11946518 */
  goto L_11946518;
L_119463b9:;
  /* 119463b9 cmp dword ptr [0x11965bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119463c0 je 0x119463f0 */
  if (C.zf) goto L_119463f0;
  /* 119463c2 mov dword ptr [0x11965bb8], 0 */
  w32((uint32_t)(0x11965bb8), (0x0u));
  /* 119463cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119463cf push eax */
  push32((uint32_t)(EAX));
  /* 119463d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119463d3 push ecx */
  push32((uint32_t)(ECX));
  /* 119463d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119463d7 push edx */
  push32((uint32_t)(EDX));
  /* 119463d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119463db push eax */
  push32((uint32_t)(EAX));
  /* 119463dc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119463df mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 119463e5 push edx */
  push32((uint32_t)(EDX));
  /* 119463e6 call 0x11946780 */
  push32(0x119463ebu); f_11946780();
  /* 119463eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119463ee jmp 0x11946412 */
  goto L_11946412;
L_119463f0:;
  /* 119463f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119463f3 push eax */
  push32((uint32_t)(EAX));
  /* 119463f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119463f7 push ecx */
  push32((uint32_t)(ECX));
  /* 119463f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119463fb push edx */
  push32((uint32_t)(EDX));
  /* 119463fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119463ff push eax */
  push32((uint32_t)(EAX));
  /* 11946400 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11946403 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11946409 push edx */
  push32((uint32_t)(EDX));
  /* 1194640a call 0x11946780 */
  push32(0x1194640fu); f_11946780();
  /* 1194640f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11946412:;
  /* 11946412 jmp 0x11946518 */
  goto L_11946518;
L_11946417:;
  /* 11946417 mov dword ptr [0x11965bb8], 0 */
  w32((uint32_t)(0x11965bb8), (0x0u));
  /* 11946421 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11946424 push eax */
  push32((uint32_t)(EAX));
  /* 11946425 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946428 push ecx */
  push32((uint32_t)(ECX));
  /* 11946429 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194642c push edx */
  push32((uint32_t)(EDX));
  /* 1194642d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946430 push eax */
  push32((uint32_t)(EAX));
  /* 11946431 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11946434 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1194643a push edx */
  push32((uint32_t)(EDX));
  /* 1194643b call 0x11946780 */
  push32(0x11946440u); f_11946780();
  /* 11946440 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946443 jmp 0x11946518 */
  goto L_11946518;
L_11946448:;
  /* 11946448 mov eax, dword ptr [0x11965bb8] */
  EAX = (r32((uint32_t)(0x11965bb8)));
  /* 1194644d mov dword ptr [0x11965bc8], eax */
  w32((uint32_t)(0x11965bc8), (EAX));
  /* 11946452 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946455 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11946458 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11946459 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1194645e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11946460 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11946463 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946466 push edx */
  push32((uint32_t)(EDX));
  /* 11946467 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194646a push eax */
  push32((uint32_t)(EAX));
  /* 1194646b push 2 */
  push32((uint32_t)(0x2u));
  /* 1194646d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11946470 push ecx */
  push32((uint32_t)(ECX));
  /* 11946471 call 0x11946620 */
  push32(0x11946476u); f_11946620();
  /* 11946476 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946479 jmp 0x11946518 */
  goto L_11946518;
L_1194647e:;
  /* 1194647e mov edx, dword ptr [0x11965bb8] */
  EDX = (r32((uint32_t)(0x11965bb8)));
  /* 11946484 mov dword ptr [0x11965bc8], edx */
  w32((uint32_t)(0x11965bc8), (EDX));
  /* 1194648a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194648d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11946490 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11946491 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11946496 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11946498 mov ecx, eax */
  ECX = (EAX);
  /* 1194649a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194649d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119464a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119464a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119464a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119464a7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 119464ac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119464ae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119464b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119464b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119464b6 push eax */
  push32((uint32_t)(EAX));
  /* 119464b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119464ba push ecx */
  push32((uint32_t)(ECX));
  /* 119464bb push 4 */
  push32((uint32_t)(0x4u));
  /* 119464bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119464c0 push edx */
  push32((uint32_t)(EDX));
  /* 119464c1 call 0x11946620 */
  push32(0x119464c6u); f_11946620();
  /* 119464c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119464c9 jmp 0x11946518 */
  goto L_11946518;
L_119464cb:;
  /* 119464cb call 0x119475e0 */
  push32(0x119464d0u); f_119475e0();
  /* 119464d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119464d3 push eax */
  push32((uint32_t)(EAX));
  /* 119464d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119464d7 push ecx */
  push32((uint32_t)(ECX));
  /* 119464d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119464db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119464dd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119464e1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 119464e4 mov ecx, dword ptr [eax*4 + 0x11964e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11964e1c)));
  /* 119464eb push ecx */
  push32((uint32_t)(ECX));
  /* 119464ec call 0x119465d0 */
  push32(0x119464f1u); f_119465d0();
  /* 119464f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119464f4 jmp 0x11946518 */
  goto L_11946518;
L_119464f6:;
  /* 119464f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119464f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119464fb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 119464fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946501 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11946503 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946506 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946509 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1194650b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194650e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11946510 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946513 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946516 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11946518:;
  /* 11946518 pop esi */
  ESI = (pop32());
  /* 11946519 mov esp, ebp */
  ESP = (EBP);
  /* 1194651b pop ebp */
  EBP = (pop32());
  /* 1194651c ret  */
  ESPCHK(0x11945fb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x119465d0 (72 bytes, 30 insns) */
void f_119465d0(void) {
  FTRACE(0x119465d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119465d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119465d1 mov ebp, esp */
  EBP = (ESP);
L_119465d3:;
  /* 119465d3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119465d6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119465d9 je 0x11946616 */
  if (C.zf) goto L_11946616;
  /* 119465db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119465de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119465e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119465e3 je 0x11946616 */
  if (C.zf) goto L_11946616;
  /* 119465e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119465e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119465ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119465ed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119465ef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119465f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119465f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119465f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119465f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119465fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119465fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946601 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946604 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11946607 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194660a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1194660c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194660f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946612 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11946614 jmp 0x119465d3 */
  goto L_119465d3;
L_11946616:;
  /* 11946616 pop ebp */
  EBP = (pop32());
  /* 11946617 ret  */
  ESPCHK(0x119465d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016620 @ 0x11946620 (173 bytes, 64 insns) */
void f_11946620(void) {
  FTRACE(0x11946620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11946620 push ebp */
  push32((uint32_t)(EBP));
  /* 11946621 mov ebp, esp */
  EBP = (ESP);
  /* 11946623 push ecx */
  push32((uint32_t)(ECX));
  /* 11946624 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194662b cmp dword ptr [0x11965bc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946632 je 0x1194664a */
  if (C.zf) goto L_1194664a;
  /* 11946634 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946637 push eax */
  push32((uint32_t)(EAX));
  /* 11946638 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194663b push ecx */
  push32((uint32_t)(ECX));
  /* 1194663c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194663f push edx */
  push32((uint32_t)(EDX));
  /* 11946640 call 0x119466d0 */
  push32(0x11946645u); f_119466d0();
  /* 11946645 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946648 jmp 0x119466c9 */
  goto L_119466c9;
L_1194664a:;
  /* 1194664a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194664d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946650 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946652 jae 0x119466c0 */
  if (!C.cf) goto L_119466c0;
  /* 11946654 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946657 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194665a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1194665d jmp 0x11946668 */
  goto L_11946668;
L_1194665f:;
  /* 1194665f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946662 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946665 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11946668:;
  /* 11946668 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194666b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194666e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11946670 je 0x119466a4 */
  if (C.zf) goto L_119466a4;
  /* 11946672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946675 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11946676 mov ecx, 0xa */
  ECX = (0xau);
  /* 1194667b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1194667d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946680 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946683 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11946685 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946688 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 1194668b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194668e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1194668f mov ecx, 0xa */
  ECX = (0xau);
  /* 11946694 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11946696 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11946699 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194669c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194669f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119466a2 jmp 0x1194665f */
  goto L_1194665f;
L_119466a4:;
  /* 119466a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119466a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119466a9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119466ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119466af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119466b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119466b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119466b6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119466b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119466bc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119466be jmp 0x119466c9 */
  goto L_119466c9;
L_119466c0:;
  /* 119466c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119466c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_119466c9:;
  /* 119466c9 mov esp, ebp */
  ESP = (EBP);
  /* 119466cb pop ebp */
  EBP = (pop32());
  /* 119466cc ret  */
  ESPCHK(0x11946620u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x119466d0 (172 bytes, 65 insns) */
void f_119466d0(void) {
  FTRACE(0x119466d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119466d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119466d1 mov ebp, esp */
  EBP = (ESP);
  /* 119466d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119466d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119466d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119466db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119466de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119466e1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119466e4 jbe 0x1194672b */
  if ((C.cf||C.zf)) goto L_1194672b;
L_119466e6:;
  /* 119466e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119466e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119466ea mov ecx, 0xa */
  ECX = (0xau);
  /* 119466ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119466f1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119466f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119466f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119466f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119466fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119466ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11946702 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946705 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11946707 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194670a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194670d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1194670f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946712 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11946713 mov ecx, 0xa */
  ECX = (0xau);
  /* 11946718 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1194671a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1194671d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946721 jle 0x1194672b */
  if ((C.zf||C.sf!=C.of)) goto L_1194672b;
  /* 11946723 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946726 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946729 ja 0x119466e6 */
  if ((!C.cf&&!C.zf)) goto L_119466e6;
L_1194672b:;
  /* 1194672b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194672e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11946730 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11946733 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946736 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11946739 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1194673b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194673e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946741 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11946744:;
  /* 11946744 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11946747 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11946749 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1194674c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194674f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11946752 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11946754 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11946756 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11946759 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194675c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1194675f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11946762 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11946765 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11946767 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194676a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194676d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11946770 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11946773 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946776 jb 0x11946744 */
  if (C.cf) goto L_11946744;
  /* 11946778 mov esp, ebp */
  ESP = (EBP);
  /* 1194677a pop ebp */
  EBP = (pop32());
  /* 1194677b ret  */
  ESPCHK(0x119466d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016780 @ 0x11946780 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11946780(void) {
  FTRACE(0x11946780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11946780 push ebp */
  push32((uint32_t)(EBP));
  /* 11946781 mov ebp, esp */
  EBP = (ESP);
  /* 11946783 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11946786:;
  /* 11946786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946789 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1194678c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1194678e je 0x11946bfc */
  if (C.zf) goto L_11946bfc;
  /* 11946794 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946797 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194679a je 0x11946bfc */
  if (C.zf) goto L_11946bfc;
  /* 119467a0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 119467a4 mov dword ptr [0x11965bc8], 0 */
  w32((uint32_t)(0x11965bc8), (0x0u));
  /* 119467ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119467b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119467b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119467bb jmp 0x119467c6 */
  goto L_119467c6;
L_119467bd:;
  /* 119467bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119467c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119467c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_119467c6:;
  /* 119467c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119467c9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119467cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119467cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119467d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119467d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119467d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119467db cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119467dd jne 0x119467e1 */
  if (!C.zf) goto L_119467e1;
  /* 119467df jmp 0x119467bd */
  goto L_119467bd;
L_119467e1:;
  /* 119467e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119467e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119467e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119467ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119467ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119467f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119467f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119467f6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119467f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119467fc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946800 ja 0x11946b50 */
  if ((!C.cf&&!C.zf)) goto L_11946b50;
  /* 11946806 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11946809 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194680b mov al, byte ptr [ecx + 0x11946c2c] */
  AL = (r8((uint32_t)(ECX + 0x11946c2c)));
  /* 11946811 jmp dword ptr [eax*4 + 0x11946c00] */
  switch (EAX) {
    case 0: goto L_11946a6f;
    case 1: goto L_11946953;
    case 2: goto L_119468de;
    case 3: goto L_11946818;
    case 4: goto L_11946856;
    case 5: goto L_119468b7;
    case 6: goto L_11946905;
    case 7: goto L_1194692c;
    case 8: goto L_1194699a;
    case 9: goto L_11946894;
    case 10: goto L_11946b50;
    default: x86_unimpl("switch@0x11946811 out of table"); return;
  }
L_11946818:;
  /* 11946818 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194681b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1194681e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11946821 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946824 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11946827 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194682b ja 0x11946851 */
  if ((!C.cf&&!C.zf)) goto L_11946851;
  /* 1194682d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11946830 jmp dword ptr [ecx*4 + 0x11946c7f] */
  switch (ECX) {
    case 0: goto L_11946837;
    case 1: goto L_11946841;
    case 2: goto L_11946847;
    case 3: goto L_1194684d;
    case 4: goto L_11946875;
    case 5: goto L_1194687f;
    case 6: goto L_11946885;
    case 7: goto L_1194688b;
    default: x86_unimpl("switch@0x11946830 out of table"); return;
  }
L_11946837:;
  /* 11946837 mov dword ptr [0x11965bc8], 1 */
  w32((uint32_t)(0x11965bc8), (0x1u));
L_11946841:;
  /* 11946841 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11946845 jmp 0x11946851 */
  goto L_11946851;
L_11946847:;
  /* 11946847 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 1194684b jmp 0x11946851 */
  goto L_11946851;
L_1194684d:;
  /* 1194684d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11946851:;
  /* 11946851 jmp 0x11946b50 */
  goto L_11946b50;
L_11946856:;
  /* 11946856 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946859 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1194685c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1194685f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946862 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11946865 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946869 ja 0x1194688f */
  if ((!C.cf&&!C.zf)) goto L_1194688f;
  /* 1194686b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1194686e jmp dword ptr [ecx*4 + 0x11946c8f] */
  switch (ECX) {
    case 0: goto L_11946875;
    case 1: goto L_1194687f;
    case 2: goto L_11946885;
    case 3: goto L_1194688b;
    default: x86_unimpl("switch@0x1194686e out of table"); return;
  }
L_11946875:;
  /* 11946875 mov dword ptr [0x11965bc8], 1 */
  w32((uint32_t)(0x11965bc8), (0x1u));
L_1194687f:;
  /* 1194687f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11946883 jmp 0x1194688f */
  goto L_1194688f;
L_11946885:;
  /* 11946885 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11946889 jmp 0x1194688f */
  goto L_1194688f;
L_1194688b:;
  /* 1194688b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_1194688f:;
  /* 1194688f jmp 0x11946b50 */
  goto L_11946b50;
L_11946894:;
  /* 11946894 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946897 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1194689a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194689e je 0x119468a8 */
  if (C.zf) goto L_119468a8;
  /* 119468a0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119468a4 je 0x119468ae */
  if (C.zf) goto L_119468ae;
  /* 119468a6 jmp 0x119468b2 */
  goto L_119468b2;
L_119468a8:;
  /* 119468a8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 119468ac jmp 0x119468b2 */
  goto L_119468b2;
L_119468ae:;
  /* 119468ae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_119468b2:;
  /* 119468b2 jmp 0x11946b50 */
  goto L_11946b50;
L_119468b7:;
  /* 119468b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119468ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119468bd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119468c1 je 0x119468cb */
  if (C.zf) goto L_119468cb;
  /* 119468c3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119468c7 je 0x119468d5 */
  if (C.zf) goto L_119468d5;
  /* 119468c9 jmp 0x119468d9 */
  goto L_119468d9;
L_119468cb:;
  /* 119468cb mov dword ptr [0x11965bc8], 1 */
  w32((uint32_t)(0x11965bc8), (0x1u));
L_119468d5:;
  /* 119468d5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_119468d9:;
  /* 119468d9 jmp 0x11946b50 */
  goto L_11946b50;
L_119468de:;
  /* 119468de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119468e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 119468e4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119468e8 je 0x119468f2 */
  if (C.zf) goto L_119468f2;
  /* 119468ea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119468ee je 0x119468fc */
  if (C.zf) goto L_119468fc;
  /* 119468f0 jmp 0x11946900 */
  goto L_11946900;
L_119468f2:;
  /* 119468f2 mov dword ptr [0x11965bc8], 1 */
  w32((uint32_t)(0x11965bc8), (0x1u));
L_119468fc:;
  /* 119468fc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11946900:;
  /* 11946900 jmp 0x11946b50 */
  goto L_11946b50;
L_11946905:;
  /* 11946905 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946908 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1194690b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194690f je 0x11946919 */
  if (C.zf) goto L_11946919;
  /* 11946911 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946915 je 0x11946923 */
  if (C.zf) goto L_11946923;
  /* 11946917 jmp 0x11946927 */
  goto L_11946927;
L_11946919:;
  /* 11946919 mov dword ptr [0x11965bc8], 1 */
  w32((uint32_t)(0x11965bc8), (0x1u));
L_11946923:;
  /* 11946923 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11946927:;
  /* 11946927 jmp 0x11946b50 */
  goto L_11946b50;
L_1194692c:;
  /* 1194692c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194692f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11946932 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946936 je 0x11946940 */
  if (C.zf) goto L_11946940;
  /* 11946938 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194693c je 0x1194694a */
  if (C.zf) goto L_1194694a;
  /* 1194693e jmp 0x1194694e */
  goto L_1194694e;
L_11946940:;
  /* 11946940 mov dword ptr [0x11965bc8], 1 */
  w32((uint32_t)(0x11965bc8), (0x1u));
L_1194694a:;
  /* 1194694a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_1194694e:;
  /* 1194694e jmp 0x11946b50 */
  goto L_11946b50;
L_11946953:;
  /* 11946953 push 0x1196178c */
  push32((uint32_t)(0x1196178cu));
  /* 11946958 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194695b push ecx */
  push32((uint32_t)(ECX));
  /* 1194695c call 0x119471b0 */
  push32(0x11946961u); f_119471b0();
  /* 11946961 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11946966 jne 0x11946973 */
  if (!C.zf) goto L_11946973;
  /* 11946968 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194696b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194696e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11946971 jmp 0x11946991 */
  goto L_11946991;
L_11946973:;
  /* 11946973 push 0x11961788 */
  push32((uint32_t)(0x11961788u));
  /* 11946978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194697b push eax */
  push32((uint32_t)(EAX));
  /* 1194697c call 0x119471b0 */
  push32(0x11946981u); f_119471b0();
  /* 11946981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11946986 jne 0x11946991 */
  if (!C.zf) goto L_11946991;
  /* 11946988 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194698b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194698e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11946991:;
  /* 11946991 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11946995 jmp 0x11946b50 */
  goto L_11946b50;
L_1194699a:;
  /* 1194699a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194699d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119469a1 jg 0x119469b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_119469b1;
  /* 119469a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119469a6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 119469ac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119469af jmp 0x119469bd */
  goto L_119469bd;
L_119469b1:;
  /* 119469b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119469b4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 119469ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_119469bd:;
  /* 119469bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119469c1 jle 0x11946a64 */
  if ((C.zf||C.sf!=C.of)) goto L_11946a64;
  /* 119469c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119469ca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119469cd jbe 0x11946a64 */
  if ((C.cf||C.zf)) goto L_11946a64;
  /* 119469d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119469d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119469d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119469da mov ecx, dword ptr [0x11963c98] */
  ECX = (r32((uint32_t)(0x11963c98)));
  /* 119469e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119469e2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119469e6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 119469ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119469ee je 0x11946a27 */
  if (C.zf) goto L_11946a27;
  /* 119469f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119469f3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119469f6 jbe 0x11946a27 */
  if ((C.cf||C.zf)) goto L_11946a27;
  /* 119469f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119469fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119469fd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11946a00 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11946a02 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11946a04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946a07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11946a09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946a0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946a0f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11946a11 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11946a14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946a17 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11946a1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946a1d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11946a1f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946a22 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946a25 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11946a27:;
  /* 11946a27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946a2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11946a2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11946a2f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11946a31 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11946a33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946a36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11946a38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946a3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946a3e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11946a40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11946a43 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946a46 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11946a49 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946a4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11946a4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946a51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946a54 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11946a56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946a59 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946a5c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11946a5f jmp 0x119469bd */
  goto L_119469bd;
L_11946a64:;
  /* 11946a64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11946a67 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11946a6a jmp 0x11946786 */
  goto L_11946786;
L_11946a6f:;
  /* 11946a6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946a72 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11946a75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11946a77 je 0x11946b42 */
  if (C.zf) goto L_11946b42;
  /* 11946a7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946a80 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946a83 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11946a86:;
  /* 11946a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946a89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11946a8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11946a8e je 0x11946b40 */
  if (C.zf) goto L_11946b40;
  /* 11946a94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946a97 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946a9a je 0x11946b40 */
  if (C.zf) goto L_11946b40;
  /* 11946aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946aa3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11946aa6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946aa9 jne 0x11946ab9 */
  if (!C.zf) goto L_11946ab9;
  /* 11946aab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946aae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946ab1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11946ab4 jmp 0x11946b40 */
  goto L_11946b40;
L_11946ab9:;
  /* 11946ab9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946abc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11946abe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11946ac0 mov edx, dword ptr [0x11963c98] */
  EDX = (r32((uint32_t)(0x11963c98)));
  /* 11946ac6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11946ac8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11946acc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11946ad1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11946ad3 je 0x11946b0c */
  if (C.zf) goto L_11946b0c;
  /* 11946ad5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946ad8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946adb jbe 0x11946b0c */
  if ((C.cf||C.zf)) goto L_11946b0c;
  /* 11946add mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946ae0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11946ae2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946ae5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11946ae7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11946ae9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946aec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11946aee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946af1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946af4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11946af6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946af9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946afc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11946aff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946b02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11946b04 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946b07 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946b0a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11946b0c:;
  /* 11946b0c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946b0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11946b11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946b14 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11946b16 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11946b18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946b1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11946b1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946b20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946b23 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11946b25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946b28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946b2b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11946b2e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946b31 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11946b33 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946b36 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946b39 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11946b3b jmp 0x11946a86 */
  goto L_11946a86;
L_11946b40:;
  /* 11946b40 jmp 0x11946b4b */
  goto L_11946b4b;
L_11946b42:;
  /* 11946b42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946b45 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946b48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11946b4b:;
  /* 11946b4b jmp 0x11946786 */
  goto L_11946786;
L_11946b50:;
  /* 11946b50 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11946b54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11946b56 je 0x11946b7c */
  if (C.zf) goto L_11946b7c;
  /* 11946b58 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11946b5b push edx */
  push32((uint32_t)(EDX));
  /* 11946b5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946b5f push eax */
  push32((uint32_t)(EAX));
  /* 11946b60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11946b64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946b67 push edx */
  push32((uint32_t)(EDX));
  /* 11946b68 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11946b6b push eax */
  push32((uint32_t)(EAX));
  /* 11946b6c call 0x11945fb0 */
  push32(0x11946b71u); f_11945fb0();
  /* 11946b71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946b74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11946b77 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11946b7a jmp 0x11946bf7 */
  goto L_11946bf7;
L_11946b7c:;
  /* 11946b7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946b7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11946b81 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11946b83 mov ecx, dword ptr [0x11963c98] */
  ECX = (r32((uint32_t)(0x11963c98)));
  /* 11946b89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11946b8b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11946b8f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11946b95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11946b97 je 0x11946bc8 */
  if (C.zf) goto L_11946bc8;
  /* 11946b99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946b9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11946b9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946ba1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11946ba3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11946ba5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946ba8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11946baa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946bad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946bb0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11946bb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946bb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946bb8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11946bbb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946bbe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11946bc0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946bc3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946bc6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11946bc8:;
  /* 11946bc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946bcb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11946bcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946bd0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11946bd2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11946bd4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946bd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11946bd9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946bdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946bdf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11946be1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946be4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946be7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11946bea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946bed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11946bef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946bf2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946bf5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11946bf7:;
  /* 11946bf7 jmp 0x11946786 */
  goto L_11946786;
L_11946bfc:;
  /* 11946bfc mov esp, ebp */
  ESP = (EBP);
  /* 11946bfe pop ebp */
  EBP = (pop32());
  /* 11946bff ret  */
  ESPCHK(0x11946780u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ca0 @ 0x11946ca0 (650 bytes, 178 insns) */
void f_11946ca0(void) {
  FTRACE(0x11946ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11946ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11946ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11946ca3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11946ca9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946cad jne 0x11946e09 */
  if (!C.zf) goto L_11946e09;
  /* 11946cb3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946cb6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11946cbc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11946cc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11946cc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11946ccc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11946cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11946cd8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11946cde push edx */
  push32((uint32_t)(EDX));
  /* 11946cdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946ce2 push eax */
  push32((uint32_t)(EAX));
  /* 11946ce3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 11946ce7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946cea push edx */
  push32((uint32_t)(EDX));
  /* 11946ceb call 0x119480c0 */
  push32(0x11946cf0u); f_119480c0();
  /* 11946cf0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946cf3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11946cf6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946cfa jne 0x11946d8f */
  if (!C.zf) goto L_11946d8f;
  /* 11946d00 call dword ptr [0x119683dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683dc))), 0x11946d06u);
  /* 11946d06 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946d09 je 0x11946d10 */
  if (C.zf) goto L_11946d10;
  /* 11946d0b jmp 0x11946ded */
  goto L_11946ded;
L_11946d10:;
  /* 11946d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11946d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11946d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11946d16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946d19 push eax */
  push32((uint32_t)(EAX));
  /* 11946d1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946d1d push ecx */
  push32((uint32_t)(ECX));
  /* 11946d1e call 0x119480c0 */
  push32(0x11946d23u); f_119480c0();
  /* 11946d23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946d26 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11946d2c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946d33 jne 0x11946d3a */
  if (!C.zf) goto L_11946d3a;
  /* 11946d35 jmp 0x11946ded */
  goto L_11946ded;
L_11946d3a:;
  /* 11946d3a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11946d3c push 0x11961794 */
  push32((uint32_t)(0x11961794u));
  /* 11946d41 push 2 */
  push32((uint32_t)(0x2u));
  /* 11946d43 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11946d49 push edx */
  push32((uint32_t)(EDX));
  /* 11946d4a call 0x11938ae0 */
  push32(0x11946d4fu); f_11938ae0();
  /* 11946d4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946d52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11946d55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946d59 jne 0x11946d60 */
  if (!C.zf) goto L_11946d60;
  /* 11946d5b jmp 0x11946ded */
  goto L_11946ded;
L_11946d60:;
  /* 11946d60 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11946d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11946d69 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11946d6f push eax */
  push32((uint32_t)(EAX));
  /* 11946d70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11946d74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946d77 push edx */
  push32((uint32_t)(EDX));
  /* 11946d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946d7b push eax */
  push32((uint32_t)(EAX));
  /* 11946d7c call 0x119480c0 */
  push32(0x11946d81u); f_119480c0();
  /* 11946d81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946d84 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11946d87 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946d8b jne 0x11946d8f */
  if (!C.zf) goto L_11946d8f;
  /* 11946d8d jmp 0x11946ded */
  goto L_11946ded;
L_11946d8f:;
  /* 11946d8f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11946d91 push 0x11961794 */
  push32((uint32_t)(0x11961794u));
  /* 11946d96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11946d98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11946d9b push ecx */
  push32((uint32_t)(ECX));
  /* 11946d9c call 0x11938ae0 */
  push32(0x11946da1u); f_11938ae0();
  /* 11946da1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946da4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11946daa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11946dac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11946db2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946db5 jne 0x11946db9 */
  if (!C.zf) goto L_11946db9;
  /* 11946db7 jmp 0x11946ded */
  goto L_11946ded;
L_11946db9:;
  /* 11946db9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11946dbc push ecx */
  push32((uint32_t)(ECX));
  /* 11946dbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946dc0 push edx */
  push32((uint32_t)(EDX));
  /* 11946dc1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11946dc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11946dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11946dca call 0x1193c300 */
  push32(0x11946dcfu); f_1193c300();
  /* 11946dcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946dd2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946dd6 je 0x11946de6 */
  if (C.zf) goto L_11946de6;
  /* 11946dd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11946dda mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946ddd push edx */
  push32((uint32_t)(EDX));
  /* 11946dde call 0x11939570 */
  push32(0x11946de3u); f_11939570();
  /* 11946de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11946de6:;
  /* 11946de6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11946de8 jmp 0x11946f26 */
  goto L_11946f26;
L_11946ded:;
  /* 11946ded cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946df1 je 0x11946e01 */
  if (C.zf) goto L_11946e01;
  /* 11946df3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11946df5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11946df8 push eax */
  push32((uint32_t)(EAX));
  /* 11946df9 call 0x11939570 */
  push32(0x11946dfeu); f_11939570();
  /* 11946dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11946e01:;
  /* 11946e01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11946e04 jmp 0x11946f26 */
  goto L_11946f26;
L_11946e09:;
  /* 11946e09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946e0d jne 0x11946f23 */
  if (!C.zf) goto L_11946f23;
  /* 11946e13 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11946e1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946e20 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11946e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11946e28 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11946e2e push edx */
  push32((uint32_t)(EDX));
  /* 11946e2f push 0x11965ae0 */
  push32((uint32_t)(0x11965ae0u));
  /* 11946e34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946e37 push eax */
  push32((uint32_t)(EAX));
  /* 11946e38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946e3b push ecx */
  push32((uint32_t)(ECX));
  /* 11946e3c call 0x11947f20 */
  push32(0x11946e41u); f_11947f20();
  /* 11946e41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946e44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11946e46 jne 0x11946e50 */
  if (!C.zf) goto L_11946e50;
  /* 11946e48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11946e4b jmp 0x11946f26 */
  goto L_11946f26;
L_11946e50:;
  /* 11946e50 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11946e56 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11946e59 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11946e63 jmp 0x11946e74 */
  goto L_11946e74;
L_11946e65:;
  /* 11946e65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11946e6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11946e6e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11946e74:;
  /* 11946e74 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946e7b jge 0x11946f1f */
  if ((C.sf==C.of)) goto L_11946f1f;
  /* 11946e81 cmp dword ptr [0x11963ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11963ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946e88 jle 0x11946ebb */
  if ((C.zf||C.sf!=C.of)) goto L_11946ebb;
  /* 11946e8a push 4 */
  push32((uint32_t)(0x4u));
  /* 11946e8c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11946e92 mov dl, byte ptr [ecx*2 + 0x11965ae0] */
  DL = (r8((uint32_t)(ECX*2 + 0x11965ae0)));
  /* 11946e99 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11946e9f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11946ea5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11946eaa push eax */
  push32((uint32_t)(EAX));
  /* 11946eab call 0x1193eaf0 */
  push32(0x11946eb0u); f_1193eaf0();
  /* 11946eb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946eb3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11946eb9 jmp 0x11946eee */
  goto L_11946eee;
L_11946ebb:;
  /* 11946ebb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11946ec1 mov dl, byte ptr [ecx*2 + 0x11965ae0] */
  DL = (r8((uint32_t)(ECX*2 + 0x11965ae0)));
  /* 11946ec8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11946ece mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11946ed4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11946ed9 mov ecx, dword ptr [0x11963c98] */
  ECX = (r32((uint32_t)(0x11963c98)));
  /* 11946edf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11946ee1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11946ee5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11946ee8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11946eee:;
  /* 11946eee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946ef5 je 0x11946f18 */
  if (C.zf) goto L_11946f18;
  /* 11946ef7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11946efd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11946f00 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11946f03 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11946f0a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11946f0e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11946f14 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11946f16 jmp 0x11946f1a */
  goto L_11946f1a;
L_11946f18:;
  /* 11946f18 jmp 0x11946f1f */
  goto L_11946f1f;
L_11946f1a:;
  /* 11946f1a jmp 0x11946e65 */
  goto L_11946e65;
L_11946f1f:;
  /* 11946f1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11946f21 jmp 0x11946f26 */
  goto L_11946f26;
L_11946f23:;
  /* 11946f23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11946f26:;
  /* 11946f26 mov esp, ebp */
  ESP = (EBP);
  /* 11946f28 pop ebp */
  EBP = (pop32());
  /* 11946f29 ret  */
  ESPCHK(0x11946ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f30 @ 0x11946f30 (10 bytes, 5 insns) */
void f_11946f30(void) {
  FTRACE(0x11946f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11946f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11946f31 mov ebp, esp */
  EBP = (ESP);
  /* 11946f33 mov eax, dword ptr [0x11964d88] */
  EAX = (r32((uint32_t)(0x11964d88)));
  /* 11946f38 pop ebp */
  EBP = (pop32());
  /* 11946f39 ret  */
  ESPCHK(0x11946f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f40 @ 0x11946f40 (575 bytes, 196 insns) */
void f_11946f40(void) {
  FTRACE(0x11946f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11946f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11946f41 mov ebp, esp */
  EBP = (ESP);
  /* 11946f43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11946f45 push 0x119617a0 */
  push32((uint32_t)(0x119617a0u));
  /* 11946f4a push 0x11941be8 */
  push32((uint32_t)(0x11941be8u));
  /* 11946f4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11946f55 push eax */
  push32((uint32_t)(EAX));
  /* 11946f56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11946f5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11946f60 push ebx */
  push32((uint32_t)(EBX));
  /* 11946f61 push esi */
  push32((uint32_t)(ESI));
  /* 11946f62 push edi */
  push32((uint32_t)(EDI));
  /* 11946f63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11946f66 cmp dword ptr [0x11965aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946f6d jne 0x11946fbe */
  if (!C.zf) goto L_11946fbe;
  /* 11946f6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11946f72 push eax */
  push32((uint32_t)(EAX));
  /* 11946f73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11946f75 push 0x11960ed0 */
  push32((uint32_t)(0x11960ed0u));
  /* 11946f7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11946f7c call dword ptr [0x11968324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968324))), 0x11946f82u);
  /* 11946f82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11946f84 je 0x11946f92 */
  if (C.zf) goto L_11946f92;
  /* 11946f86 mov dword ptr [0x11965aec], 1 */
  w32((uint32_t)(0x11965aec), (0x1u));
  /* 11946f90 jmp 0x11946fbe */
  goto L_11946fbe;
L_11946f92:;
  /* 11946f92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11946f95 push ecx */
  push32((uint32_t)(ECX));
  /* 11946f96 push 1 */
  push32((uint32_t)(0x1u));
  /* 11946f98 push 0x11960ecc */
  push32((uint32_t)(0x11960eccu));
  /* 11946f9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11946f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11946fa1 call dword ptr [0x11968328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968328))), 0x11946fa7u);
  /* 11946fa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11946fa9 je 0x11946fb7 */
  if (C.zf) goto L_11946fb7;
  /* 11946fab mov dword ptr [0x11965aec], 2 */
  w32((uint32_t)(0x11965aec), (0x2u));
  /* 11946fb5 jmp 0x11946fbe */
  goto L_11946fbe;
L_11946fb7:;
  /* 11946fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11946fb9 jmp 0x11947199 */
  goto L_11947199;
L_11946fbe:;
  /* 11946fbe cmp dword ptr [0x11965aec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11965aec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946fc5 jne 0x11946fe2 */
  if (!C.zf) goto L_11946fe2;
  /* 11946fc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11946fca push edx */
  push32((uint32_t)(EDX));
  /* 11946fcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11946fce push eax */
  push32((uint32_t)(EAX));
  /* 11946fcf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11946fd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11946fd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11946fd6 push edx */
  push32((uint32_t)(EDX));
  /* 11946fd7 call dword ptr [0x11968324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968324))), 0x11946fddu);
  /* 11946fdd jmp 0x11947199 */
  goto L_11947199;
L_11946fe2:;
  /* 11946fe2 cmp dword ptr [0x11965aec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11965aec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946fe9 jne 0x11947197 */
  if (!C.zf) goto L_11947197;
  /* 11946fef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11946ff3 jne 0x11946ffd */
  if (!C.zf) goto L_11946ffd;
  /* 11946ff5 mov eax, dword ptr [0x11965a60] */
  EAX = (r32((uint32_t)(0x11965a60)));
  /* 11946ffa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11946ffd:;
  /* 11946ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 11946fff push 0 */
  push32((uint32_t)(0x0u));
  /* 11947001 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947003 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947005 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947008 push ecx */
  push32((uint32_t)(ECX));
  /* 11947009 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194700c push edx */
  push32((uint32_t)(EDX));
  /* 1194700d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11947012 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11947015 push eax */
  push32((uint32_t)(EAX));
  /* 11947016 call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x1194701cu);
  /* 1194701c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1194701f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947023 jne 0x1194702c */
  if (!C.zf) goto L_1194702c;
  /* 11947025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947027 jmp 0x11947199 */
  goto L_11947199;
L_1194702c:;
  /* 1194702c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11947033 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11947036 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947039 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1194703b call 0x1193bc80 */
  push32(0x11947040u); f_1193bc80();
  /* 11947040 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11947043 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11947046 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11947049 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1194704c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1194704f push edx */
  push32((uint32_t)(EDX));
  /* 11947050 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947052 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11947055 push eax */
  push32((uint32_t)(EAX));
  /* 11947056 call 0x1193c850 */
  push32(0x1194705bu); f_1193c850();
  /* 1194705b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194705e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11947065 jmp 0x1194707e */
  goto L_1194707e;
  /* 11947067 mov eax, 1 */
  EAX = (0x1u);
  /* 1194706c ret  */
  ESPCHK(0x11946f40u, _esp0);
  ESP += 4; return;
  /* 1194706d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11947070 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11947077 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1194707e:;
  /* 1194707e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947082 jne 0x1194708b */
  if (!C.zf) goto L_1194708b;
  /* 11947084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947086 jmp 0x11947199 */
  goto L_11947199;
L_1194708b:;
  /* 1194708b push 0 */
  push32((uint32_t)(0x0u));
  /* 1194708d push 0 */
  push32((uint32_t)(0x0u));
  /* 1194708f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11947092 push ecx */
  push32((uint32_t)(ECX));
  /* 11947093 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11947096 push edx */
  push32((uint32_t)(EDX));
  /* 11947097 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194709a push eax */
  push32((uint32_t)(EAX));
  /* 1194709b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1194709e push ecx */
  push32((uint32_t)(ECX));
  /* 1194709f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119470a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119470a7 push edx */
  push32((uint32_t)(EDX));
  /* 119470a8 call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x119470aeu);
  /* 119470ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119470b0 jne 0x119470b9 */
  if (!C.zf) goto L_119470b9;
  /* 119470b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119470b4 jmp 0x11947199 */
  goto L_11947199;
L_119470b9:;
  /* 119470b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119470c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119470c3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 119470c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119470ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119470cc call 0x1193bc80 */
  push32(0x119470d1u); f_1193bc80();
  /* 119470d1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 119470d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119470d7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 119470da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119470dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119470e4 jmp 0x119470fd */
  goto L_119470fd;
  /* 119470e6 mov eax, 1 */
  EAX = (0x1u);
  /* 119470eb ret  */
  ESPCHK(0x11946f40u, _esp0);
  ESP += 4; return;
  /* 119470ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119470ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 119470f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119470fd:;
  /* 119470fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947101 jne 0x1194710a */
  if (!C.zf) goto L_1194710a;
  /* 11947103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947105 jmp 0x11947199 */
  goto L_11947199;
L_1194710a:;
  /* 1194710a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194710e jne 0x11947119 */
  if (!C.zf) goto L_11947119;
  /* 11947110 mov edx, dword ptr [0x11965a50] */
  EDX = (r32((uint32_t)(0x11965a50)));
  /* 11947116 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11947119:;
  /* 11947119 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194711c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1194711f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11947125 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947128 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1194712b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11947132 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11947135 push ecx */
  push32((uint32_t)(ECX));
  /* 11947136 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11947139 push edx */
  push32((uint32_t)(EDX));
  /* 1194713a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1194713d push eax */
  push32((uint32_t)(EAX));
  /* 1194713e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947141 push ecx */
  push32((uint32_t)(ECX));
  /* 11947142 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11947145 push edx */
  push32((uint32_t)(EDX));
  /* 11947146 call dword ptr [0x11968328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968328))), 0x1194714cu);
  /* 1194714c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1194714f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947152 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11947155 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947157 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1194715c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947162 je 0x11947178 */
  if (C.zf) goto L_11947178;
  /* 11947164 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947167 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1194716a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1194716c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11947170 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947176 je 0x1194717c */
  if (C.zf) goto L_1194717c;
L_11947178:;
  /* 11947178 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194717a jmp 0x11947199 */
  goto L_11947199;
L_1194717c:;
  /* 1194717c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194717f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11947181 push eax */
  push32((uint32_t)(EAX));
  /* 11947182 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11947185 push ecx */
  push32((uint32_t)(ECX));
  /* 11947186 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11947189 push edx */
  push32((uint32_t)(EDX));
  /* 1194718a call 0x119409d0 */
  push32(0x1194718fu); f_119409d0();
  /* 1194718f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947192 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11947195 jmp 0x11947199 */
  goto L_11947199;
L_11947197:;
  /* 11947197 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11947199:;
  /* 11947199 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1194719c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1194719f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119471a6 pop edi */
  EDI = (pop32());
  /* 119471a7 pop esi */
  ESI = (pop32());
  /* 119471a8 pop ebx */
  EBX = (pop32());
  /* 119471a9 mov esp, ebp */
  ESP = (EBP);
  /* 119471ab pop ebp */
  EBP = (pop32());
  /* 119471ac ret  */
  ESPCHK(0x11946f40u, _esp0);
  ESP += 4; return;
}

/* FUN_100171b0 @ 0x119471b0 (208 bytes, 85 insns) */
void f_119471b0(void) {
  FTRACE(0x119471b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119471b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119471b1 mov ebp, esp */
  EBP = (ESP);
  /* 119471b3 push edi */
  push32((uint32_t)(EDI));
  /* 119471b4 push esi */
  push32((uint32_t)(ESI));
  /* 119471b5 push ebx */
  push32((uint32_t)(EBX));
  /* 119471b6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119471b9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119471bc lea eax, [0x11965a48] */
  EAX = ((uint32_t)(0x11965a48));
  /* 119471c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119471c6 jne 0x11947203 */
  if (!C.zf) goto L_11947203;
  /* 119471c8 mov al, 0xff */
  AL = (0xffu);
  /* 119471ca mov edi, edi */
  EDI = (EDI);
L_119471cc:;
  /* 119471cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119471ce je 0x119471fe */
  if (C.zf) goto L_119471fe;
  /* 119471d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119471d2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119471d3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 119471d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119471d6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119471d8 je 0x119471cc */
  if (C.zf) goto L_119471cc;
  /* 119471da sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119471dc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119471de sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119471e0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 119471e3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119471e5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119471e7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 119471e9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119471eb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119471ed sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119471ef and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 119471f2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119471f4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119471f6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119471f8 je 0x119471cc */
  if (C.zf) goto L_119471cc;
  /* 119471fa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119471fc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_119471fe:;
  /* 119471fe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11947201 jmp 0x1194727b */
  goto L_1194727b;
L_11947203:;
  /* 11947203 lock inc dword ptr [0x11965bdc] */
  x86_unimpl("lock inc @ 0x11947203");
  /* 1194720a cmp dword ptr [0x11965bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947211 jg 0x11947217 */
  if ((!C.zf&&C.sf==C.of)) goto L_11947217;
  /* 11947213 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947215 jmp 0x1194722c */
  goto L_1194722c;
L_11947217:;
  /* 11947217 lock dec dword ptr [0x11965bdc] */
  x86_unimpl("lock dec @ 0x11947217");
  /* 1194721e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11947220 call 0x1193c4e0 */
  push32(0x11947225u); f_1193c4e0();
  /* 11947225 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1194722c:;
  /* 1194722c mov eax, 0xff */
  EAX = (0xffu);
  /* 11947231 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11947233 nop  */
  /* nop */
L_11947234:;
  /* 11947234 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11947236 je 0x1194725f */
  if (C.zf) goto L_1194725f;
  /* 11947238 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1194723a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1194723b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1194723d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1194723e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11947240 je 0x11947234 */
  if (C.zf) goto L_11947234;
  /* 11947242 push eax */
  push32((uint32_t)(EAX));
  /* 11947243 push ebx */
  push32((uint32_t)(EBX));
  /* 11947244 call 0x11948320 */
  push32(0x11947249u); f_11948320();
  /* 11947249 mov ebx, eax */
  EBX = (EAX);
  /* 1194724b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194724e call 0x11948320 */
  push32(0x11947253u); f_11948320();
  /* 11947253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947256 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11947258 je 0x11947234 */
  if (C.zf) goto L_11947234;
  /* 1194725a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1194725c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1194725f:;
  /* 1194725f mov ebx, eax */
  EBX = (EAX);
  /* 11947261 pop eax */
  EAX = (pop32());
  /* 11947262 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947264 jne 0x1194726f */
  if (!C.zf) goto L_1194726f;
  /* 11947266 lock dec dword ptr [0x11965bdc] */
  x86_unimpl("lock dec @ 0x11947266");
  /* 1194726d jmp 0x11947279 */
  goto L_11947279;
L_1194726f:;
  /* 1194726f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11947271 call 0x1193c580 */
  push32(0x11947276u); f_1193c580();
  /* 11947276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11947279:;
  /* 11947279 mov eax, ebx */
  EAX = (EBX);
L_1194727b:;
  /* 1194727b pop ebx */
  EBX = (pop32());
  /* 1194727c pop esi */
  ESI = (pop32());
  /* 1194727d pop edi */
  EDI = (pop32());
  /* 1194727e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1194727f ret  */
  ESPCHK(0x119471b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017280 @ 0x11947280 (257 bytes, 103 insns) */
void f_11947280(void) {
  FTRACE(0x11947280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11947280 push ebp */
  push32((uint32_t)(EBP));
  /* 11947281 mov ebp, esp */
  EBP = (ESP);
  /* 11947283 push edi */
  push32((uint32_t)(EDI));
  /* 11947284 push esi */
  push32((uint32_t)(ESI));
  /* 11947285 push ebx */
  push32((uint32_t)(EBX));
  /* 11947286 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947289 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1194728b je 0x1194737a */
  if (C.zf) goto L_1194737a;
  /* 11947291 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11947294 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11947297 lea eax, [0x11965a48] */
  EAX = ((uint32_t)(0x11965a48));
  /* 1194729d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119472a1 jne 0x119472f1 */
  if (!C.zf) goto L_119472f1;
  /* 119472a3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 119472a5 mov bl, 0x5a */
  BL = (0x5au);
  /* 119472a7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 119472a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119472ac:;
  /* 119472ac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 119472ae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 119472b0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 119472b2 je 0x119472d5 */
  if (C.zf) goto L_119472d5;
  /* 119472b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119472b6 je 0x119472d5 */
  if (C.zf) goto L_119472d5;
  /* 119472b8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119472b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119472ba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119472bc jb 0x119472c4 */
  if (C.cf) goto L_119472c4;
  /* 119472be cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119472c0 ja 0x119472c4 */
  if ((!C.cf&&!C.zf)) goto L_119472c4;
  /* 119472c2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_119472c4:;
  /* 119472c4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119472c6 jb 0x119472ce */
  if (C.cf) goto L_119472ce;
  /* 119472c8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119472ca ja 0x119472ce */
  if ((!C.cf&&!C.zf)) goto L_119472ce;
  /* 119472cc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_119472ce:;
  /* 119472ce cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119472d0 jne 0x119472df */
  if (!C.zf) goto L_119472df;
  /* 119472d2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119472d3 jne 0x119472ac */
  if (!C.zf) goto L_119472ac;
L_119472d5:;
  /* 119472d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119472d7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119472d9 je 0x1194737a */
  if (C.zf) goto L_1194737a;
L_119472df:;
  /* 119472df mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 119472e4 jb 0x1194737a */
  if (C.cf) goto L_1194737a;
  /* 119472ea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119472ec jmp 0x1194737a */
  goto L_1194737a;
L_119472f1:;
  /* 119472f1 lock inc dword ptr [0x11965bdc] */
  x86_unimpl("lock inc @ 0x119472f1");
  /* 119472f8 cmp dword ptr [0x11965bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119472ff jg 0x11947305 */
  if ((!C.zf&&C.sf==C.of)) goto L_11947305;
  /* 11947301 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947303 jmp 0x1194731e */
  goto L_1194731e;
L_11947305:;
  /* 11947305 lock dec dword ptr [0x11965bdc] */
  x86_unimpl("lock dec @ 0x11947305");
  /* 1194730c mov ebx, ecx */
  EBX = (ECX);
  /* 1194730e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11947310 call 0x1193c4e0 */
  push32(0x11947315u); f_1193c4e0();
  /* 11947315 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1194731c mov ecx, ebx */
  ECX = (EBX);
L_1194731e:;
  /* 1194731e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947320 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11947322 mov edi, edi */
  EDI = (EDI);
L_11947324:;
  /* 11947324 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11947326 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947328 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1194732a je 0x1194734f */
  if (C.zf) goto L_1194734f;
  /* 1194732c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1194732e je 0x1194734f */
  if (C.zf) goto L_1194734f;
  /* 11947330 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11947331 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11947332 push ecx */
  push32((uint32_t)(ECX));
  /* 11947333 push eax */
  push32((uint32_t)(EAX));
  /* 11947334 push ebx */
  push32((uint32_t)(EBX));
  /* 11947335 call 0x11948320 */
  push32(0x1194733au); f_11948320();
  /* 1194733a mov ebx, eax */
  EBX = (EAX);
  /* 1194733c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194733f call 0x11948320 */
  push32(0x11947344u); f_11948320();
  /* 11947344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947347 pop ecx */
  ECX = (pop32());
  /* 11947348 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194734a jne 0x11947355 */
  if (!C.zf) goto L_11947355;
  /* 1194734c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1194734d jne 0x11947324 */
  if (!C.zf) goto L_11947324;
L_1194734f:;
  /* 1194734f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947351 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947353 je 0x1194735e */
  if (C.zf) goto L_1194735e;
L_11947355:;
  /* 11947355 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1194735a jb 0x1194735e */
  if (C.cf) goto L_1194735e;
  /* 1194735c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1194735e:;
  /* 1194735e pop eax */
  EAX = (pop32());
  /* 1194735f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947361 jne 0x1194736c */
  if (!C.zf) goto L_1194736c;
  /* 11947363 lock dec dword ptr [0x11965bdc] */
  x86_unimpl("lock dec @ 0x11947363");
  /* 1194736a jmp 0x1194737a */
  goto L_1194737a;
L_1194736c:;
  /* 1194736c mov ebx, ecx */
  EBX = (ECX);
  /* 1194736e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11947370 call 0x1193c580 */
  push32(0x11947375u); f_1193c580();
  /* 11947375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947378 mov ecx, ebx */
  ECX = (EBX);
L_1194737a:;
  /* 1194737a mov eax, ecx */
  EAX = (ECX);
  /* 1194737c pop ebx */
  EBX = (pop32());
  /* 1194737d pop esi */
  ESI = (pop32());
  /* 1194737e pop edi */
  EDI = (pop32());
  /* 1194737f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11947380 ret  */
  ESPCHK(0x11947280u, _esp0);
  ESP += 4; return;
}

/* FUN_10017390 @ 0x11947390 (255 bytes, 88 insns) */
void f_11947390(void) {
  FTRACE(0x11947390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11947390 push ebp */
  push32((uint32_t)(EBP));
  /* 11947391 mov ebp, esp */
  EBP = (ESP);
  /* 11947393 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11947396:;
  /* 11947396 cmp dword ptr [0x11963ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11963ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194739d jle 0x119473b6 */
  if ((C.zf||C.sf!=C.of)) goto L_119473b6;
  /* 1194739f push 8 */
  push32((uint32_t)(0x8u));
  /* 119473a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119473a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119473a6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119473a8 push ecx */
  push32((uint32_t)(ECX));
  /* 119473a9 call 0x1193eaf0 */
  push32(0x119473aeu); f_1193eaf0();
  /* 119473ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119473b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119473b4 jmp 0x119473cf */
  goto L_119473cf;
L_119473b6:;
  /* 119473b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119473b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119473bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119473bd mov ecx, dword ptr [0x11963c98] */
  ECX = (r32((uint32_t)(0x11963c98)));
  /* 119473c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119473c5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119473c9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 119473cc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119473cf:;
  /* 119473cf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119473d3 je 0x119473e0 */
  if (C.zf) goto L_119473e0;
  /* 119473d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119473d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119473db mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119473de jmp 0x11947396 */
  goto L_11947396;
L_119473e0:;
  /* 119473e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119473e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119473e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119473e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119473ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119473ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119473f0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119473f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119473f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119473f9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119473fd je 0x11947405 */
  if (C.zf) goto L_11947405;
  /* 119473ff cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947403 jne 0x11947418 */
  if (!C.zf) goto L_11947418;
L_11947405:;
  /* 11947405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947408 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194740a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1194740c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1194740f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947412 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947415 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11947418:;
  /* 11947418 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1194741f:;
  /* 1194741f cmp dword ptr [0x11963ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11963ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947426 jle 0x1194743b */
  if ((C.zf||C.sf!=C.of)) goto L_1194743b;
  /* 11947428 push 4 */
  push32((uint32_t)(0x4u));
  /* 1194742a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194742d push edx */
  push32((uint32_t)(EDX));
  /* 1194742e call 0x1193eaf0 */
  push32(0x11947433u); f_1193eaf0();
  /* 11947433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947436 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11947439 jmp 0x11947450 */
  goto L_11947450;
L_1194743b:;
  /* 1194743b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194743e mov ecx, dword ptr [0x11963c98] */
  ECX = (r32((uint32_t)(0x11963c98)));
  /* 11947444 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947446 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1194744a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1194744d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11947450:;
  /* 11947450 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947454 je 0x1194747b */
  if (C.zf) goto L_1194747b;
  /* 11947456 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11947459 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1194745c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194745f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11947463 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11947466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947469 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1194746b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1194746d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11947470 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947473 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947476 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11947479 jmp 0x1194741f */
  goto L_1194741f;
L_1194747b:;
  /* 1194747b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194747f jne 0x11947488 */
  if (!C.zf) goto L_11947488;
  /* 11947481 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11947484 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11947486 jmp 0x1194748b */
  goto L_1194748b;
L_11947488:;
  /* 11947488 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1194748b:;
  /* 1194748b mov esp, ebp */
  ESP = (EBP);
  /* 1194748d pop ebp */
  EBP = (pop32());
  /* 1194748e ret  */
  ESPCHK(0x11947390u, _esp0);
  ESP += 4; return;
}

/* FUN_10017490 @ 0x11947490 (17 bytes, 8 insns) */
void f_11947490(void) {
  FTRACE(0x11947490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11947490 push ebp */
  push32((uint32_t)(EBP));
  /* 11947491 mov ebp, esp */
  EBP = (ESP);
  /* 11947493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947496 push eax */
  push32((uint32_t)(EAX));
  /* 11947497 call 0x11947390 */
  push32(0x1194749cu); f_11947390();
  /* 1194749c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194749f pop ebp */
  EBP = (pop32());
  /* 119474a0 ret  */
  ESPCHK(0x11947490u, _esp0);
  ESP += 4; return;
}

/* FUN_100174b0 @ 0x119474b0 (297 bytes, 106 insns) */
void f_119474b0(void) {
  FTRACE(0x119474b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119474b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119474b1 mov ebp, esp */
  EBP = (ESP);
  /* 119474b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119474b6 push esi */
  push32((uint32_t)(ESI));
L_119474b7:;
  /* 119474b7 cmp dword ptr [0x11963ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11963ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119474be jle 0x119474d7 */
  if ((C.zf||C.sf!=C.of)) goto L_119474d7;
  /* 119474c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 119474c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119474c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119474c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119474c9 push ecx */
  push32((uint32_t)(ECX));
  /* 119474ca call 0x1193eaf0 */
  push32(0x119474cfu); f_1193eaf0();
  /* 119474cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119474d2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119474d5 jmp 0x119474f0 */
  goto L_119474f0;
L_119474d7:;
  /* 119474d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119474da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119474dc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119474de mov ecx, dword ptr [0x11963c98] */
  ECX = (r32((uint32_t)(0x11963c98)));
  /* 119474e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119474e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119474ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 119474ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_119474f0:;
  /* 119474f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119474f4 je 0x11947501 */
  if (C.zf) goto L_11947501;
  /* 119474f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119474f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119474fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119474ff jmp 0x119474b7 */
  goto L_119474b7;
L_11947501:;
  /* 11947501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947504 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947506 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11947508 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1194750b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194750e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947511 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11947514 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11947517 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1194751a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194751e je 0x11947526 */
  if (C.zf) goto L_11947526;
  /* 11947520 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947524 jne 0x11947539 */
  if (!C.zf) goto L_11947539;
L_11947526:;
  /* 11947526 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947529 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194752b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1194752d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11947530 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947533 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947536 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11947539:;
  /* 11947539 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11947540 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11947547:;
  /* 11947547 cmp dword ptr [0x11963ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11963ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194754e jle 0x11947563 */
  if ((C.zf||C.sf!=C.of)) goto L_11947563;
  /* 11947550 push 4 */
  push32((uint32_t)(0x4u));
  /* 11947552 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11947555 push edx */
  push32((uint32_t)(EDX));
  /* 11947556 call 0x1193eaf0 */
  push32(0x1194755bu); f_1193eaf0();
  /* 1194755b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194755e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11947561 jmp 0x11947578 */
  goto L_11947578;
L_11947563:;
  /* 11947563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11947566 mov ecx, dword ptr [0x11963c98] */
  ECX = (r32((uint32_t)(0x11963c98)));
  /* 1194756c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1194756e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11947572 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11947575 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11947578:;
  /* 11947578 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194757c je 0x119475b9 */
  if (C.zf) goto L_119475b9;
  /* 1194757e push 0 */
  push32((uint32_t)(0x0u));
  /* 11947580 push 0xa */
  push32((uint32_t)(0xau));
  /* 11947582 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11947585 push eax */
  push32((uint32_t)(EAX));
  /* 11947586 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947589 push ecx */
  push32((uint32_t)(ECX));
  /* 1194758a call 0x11948450 */
  push32(0x1194758fu); f_11948450();
  /* 1194758f mov ecx, eax */
  ECX = (EAX);
  /* 11947591 mov esi, edx */
  ESI = (EDX);
  /* 11947593 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11947596 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947599 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1194759a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194759c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1194759e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119475a1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 119475a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119475a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119475a9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119475ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119475ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119475b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119475b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 119475b7 jmp 0x11947547 */
  goto L_11947547;
L_119475b9:;
  /* 119475b9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119475bd jne 0x119475ce */
  if (!C.zf) goto L_119475ce;
  /* 119475bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119475c2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119475c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119475c7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119475ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119475cc jmp 0x119475d4 */
  goto L_119475d4;
L_119475ce:;
  /* 119475ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119475d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_119475d4:;
  /* 119475d4 pop esi */
  ESI = (pop32());
  /* 119475d5 mov esp, ebp */
  ESP = (EBP);
  /* 119475d7 pop ebp */
  EBP = (pop32());
  /* 119475d8 ret  */
  ESPCHK(0x119474b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100175e0 @ 0x119475e0 (61 bytes, 18 insns) */
void f_119475e0(void) {
  FTRACE(0x119475e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119475e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119475e1 mov ebp, esp */
  EBP = (ESP);
  /* 119475e3 cmp dword ptr [0x11965ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119475ea jne 0x1194761b */
  if (!C.zf) goto L_1194761b;
  /* 119475ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 119475ee call 0x1193c4e0 */
  push32(0x119475f3u); f_1193c4e0();
  /* 119475f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119475f6 cmp dword ptr [0x11965ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119475fd jne 0x11947611 */
  if (!C.zf) goto L_11947611;
  /* 119475ff call 0x11947640 */
  push32(0x11947604u); f_11947640();
  /* 11947604 mov eax, dword ptr [0x11965ba8] */
  EAX = (r32((uint32_t)(0x11965ba8)));
  /* 11947609 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194760c mov dword ptr [0x11965ba8], eax */
  w32((uint32_t)(0x11965ba8), (EAX));
L_11947611:;
  /* 11947611 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11947613 call 0x1193c580 */
  push32(0x11947618u); f_1193c580();
  /* 11947618 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1194761b:;
  /* 1194761b pop ebp */
  EBP = (pop32());
  /* 1194761c ret  */
  ESPCHK(0x119475e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017620 @ 0x11947620 (30 bytes, 11 insns) */
void f_11947620(void) {
  FTRACE(0x11947620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11947620 push ebp */
  push32((uint32_t)(EBP));
  /* 11947621 mov ebp, esp */
  EBP = (ESP);
  /* 11947623 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11947625 call 0x1193c4e0 */
  push32(0x1194762au); f_1193c4e0();
  /* 1194762a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194762d call 0x11947640 */
  push32(0x11947632u); f_11947640();
  /* 11947632 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11947634 call 0x1193c580 */
  push32(0x11947639u); f_1193c580();
  /* 11947639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194763c pop ebp */
  EBP = (pop32());
  /* 1194763d ret  */
  ESPCHK(0x11947620u, _esp0);
  ESP += 4; return;
}

/* FUN_10017640 @ 0x11947640 (939 bytes, 266 insns) */
void f_11947640(void) {
  FTRACE(0x11947640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11947640 push ebp */
  push32((uint32_t)(EBP));
  /* 11947641 mov ebp, esp */
  EBP = (ESP);
  /* 11947643 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947646 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194764d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1194764f call 0x1193c4e0 */
  push32(0x11947654u); f_1193c4e0();
  /* 11947654 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947657 mov dword ptr [0x11965af0], 0 */
  w32((uint32_t)(0x11965af0), (0x0u));
  /* 11947661 mov dword ptr [0x11964e38], 0xffffffff */
  w32((uint32_t)(0x11964e38), (0xffffffffu));
  /* 1194766b mov eax, dword ptr [0x11964e38] */
  EAX = (r32((uint32_t)(0x11964e38)));
  /* 11947670 mov dword ptr [0x11964e28], eax */
  w32((uint32_t)(0x11964e28), (EAX));
  /* 11947675 push 0x11961800 */
  push32((uint32_t)(0x11961800u));
  /* 1194767a call 0x119484c0 */
  push32(0x1194767fu); f_119484c0();
  /* 1194767f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947682 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11947685 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947689 jne 0x119477c3 */
  if (!C.zf) goto L_119477c3;
  /* 1194768f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11947691 call 0x1193c580 */
  push32(0x11947696u); f_1193c580();
  /* 11947696 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947699 push 0x11965af8 */
  push32((uint32_t)(0x11965af8u));
  /* 1194769e call dword ptr [0x119682e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682e8))), 0x119476a4u);
  /* 119476a4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119476a7 je 0x119477be */
  if (C.zf) goto L_119477be;
  /* 119476ad mov dword ptr [0x11965af0], 1 */
  w32((uint32_t)(0x11965af0), (0x1u));
  /* 119476b7 mov ecx, dword ptr [0x11965af8] */
  ECX = (r32((uint32_t)(0x11965af8)));
  /* 119476bd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119476c0 mov dword ptr [0x11964d90], ecx */
  w32((uint32_t)(0x11964d90), (ECX));
  /* 119476c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119476c8 mov dx, word ptr [0x11965b3e] */
  DX = (r16((uint32_t)(0x11965b3e)));
  /* 119476cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119476d1 je 0x119476e9 */
  if (C.zf) goto L_119476e9;
  /* 119476d3 mov eax, dword ptr [0x11965b4c] */
  EAX = (r32((uint32_t)(0x11965b4c)));
  /* 119476d8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119476db mov ecx, dword ptr [0x11964d90] */
  ECX = (r32((uint32_t)(0x11964d90)));
  /* 119476e1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119476e3 mov dword ptr [0x11964d90], ecx */
  w32((uint32_t)(0x11964d90), (ECX));
L_119476e9:;
  /* 119476e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119476eb mov dx, word ptr [0x11965b92] */
  DX = (r16((uint32_t)(0x11965b92)));
  /* 119476f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119476f4 je 0x1194771e */
  if (C.zf) goto L_1194771e;
  /* 119476f6 cmp dword ptr [0x11965ba0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ba0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119476fd je 0x1194771e */
  if (C.zf) goto L_1194771e;
  /* 119476ff mov dword ptr [0x11964d94], 1 */
  w32((uint32_t)(0x11964d94), (0x1u));
  /* 11947709 mov eax, dword ptr [0x11965ba0] */
  EAX = (r32((uint32_t)(0x11965ba0)));
  /* 1194770e sub eax, dword ptr [0x11965b4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11965b4c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947714 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947717 mov dword ptr [0x11964d98], eax */
  w32((uint32_t)(0x11964d98), (EAX));
  /* 1194771c jmp 0x11947732 */
  goto L_11947732;
L_1194771e:;
  /* 1194771e mov dword ptr [0x11964d94], 0 */
  w32((uint32_t)(0x11964d94), (0x0u));
  /* 11947728 mov dword ptr [0x11964d98], 0 */
  w32((uint32_t)(0x11964d98), (0x0u));
L_11947732:;
  /* 11947732 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11947735 push ecx */
  push32((uint32_t)(ECX));
  /* 11947736 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947738 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1194773a mov edx, dword ptr [0x11964e1c] */
  EDX = (r32((uint32_t)(0x11964e1c)));
  /* 11947740 push edx */
  push32((uint32_t)(EDX));
  /* 11947741 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11947743 push 0x11965afc */
  push32((uint32_t)(0x11965afcu));
  /* 11947748 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1194774d mov eax, dword ptr [0x11965a60] */
  EAX = (r32((uint32_t)(0x11965a60)));
  /* 11947752 push eax */
  push32((uint32_t)(EAX));
  /* 11947753 call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x11947759u);
  /* 11947759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194775b je 0x1194776f */
  if (C.zf) goto L_1194776f;
  /* 1194775d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947761 jne 0x1194776f */
  if (!C.zf) goto L_1194776f;
  /* 11947763 mov ecx, dword ptr [0x11964e1c] */
  ECX = (r32((uint32_t)(0x11964e1c)));
  /* 11947769 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 1194776d jmp 0x11947778 */
  goto L_11947778;
L_1194776f:;
  /* 1194776f mov edx, dword ptr [0x11964e1c] */
  EDX = (r32((uint32_t)(0x11964e1c)));
  /* 11947775 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11947778:;
  /* 11947778 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1194777b push eax */
  push32((uint32_t)(EAX));
  /* 1194777c push 0 */
  push32((uint32_t)(0x0u));
  /* 1194777e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11947780 mov ecx, dword ptr [0x11964e20] */
  ECX = (r32((uint32_t)(0x11964e20)));
  /* 11947786 push ecx */
  push32((uint32_t)(ECX));
  /* 11947787 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11947789 push 0x11965b50 */
  push32((uint32_t)(0x11965b50u));
  /* 1194778e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11947793 mov edx, dword ptr [0x11965a60] */
  EDX = (r32((uint32_t)(0x11965a60)));
  /* 11947799 push edx */
  push32((uint32_t)(EDX));
  /* 1194779a call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x119477a0u);
  /* 119477a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119477a2 je 0x119477b5 */
  if (C.zf) goto L_119477b5;
  /* 119477a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119477a8 jne 0x119477b5 */
  if (!C.zf) goto L_119477b5;
  /* 119477aa mov eax, dword ptr [0x11964e20] */
  EAX = (r32((uint32_t)(0x11964e20)));
  /* 119477af mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 119477b3 jmp 0x119477be */
  goto L_119477be;
L_119477b5:;
  /* 119477b5 mov ecx, dword ptr [0x11964e20] */
  ECX = (r32((uint32_t)(0x11964e20)));
  /* 119477bb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_119477be:;
  /* 119477be jmp 0x119479e7 */
  goto L_119479e7;
L_119477c3:;
  /* 119477c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119477c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119477c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119477cb je 0x119477ed */
  if (C.zf) goto L_119477ed;
  /* 119477cd cmp dword ptr [0x11965ba4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ba4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119477d4 je 0x119477fc */
  if (C.zf) goto L_119477fc;
  /* 119477d6 mov ecx, dword ptr [0x11965ba4] */
  ECX = (r32((uint32_t)(0x11965ba4)));
  /* 119477dc push ecx */
  push32((uint32_t)(ECX));
  /* 119477dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119477e0 push edx */
  push32((uint32_t)(EDX));
  /* 119477e1 call 0x11944770 */
  push32(0x119477e6u); f_11944770();
  /* 119477e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119477e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119477eb jne 0x119477fc */
  if (!C.zf) goto L_119477fc;
L_119477ed:;
  /* 119477ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 119477ef call 0x1193c580 */
  push32(0x119477f4u); f_1193c580();
  /* 119477f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119477f7 jmp 0x119479e7 */
  goto L_119479e7;
L_119477fc:;
  /* 119477fc push 2 */
  push32((uint32_t)(0x2u));
  /* 119477fe mov eax, dword ptr [0x11965ba4] */
  EAX = (r32((uint32_t)(0x11965ba4)));
  /* 11947803 push eax */
  push32((uint32_t)(EAX));
  /* 11947804 call 0x11939570 */
  push32(0x11947809u); f_11939570();
  /* 11947809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194780c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11947811 push 0x119617f8 */
  push32((uint32_t)(0x119617f8u));
  /* 11947816 push 2 */
  push32((uint32_t)(0x2u));
  /* 11947818 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194781b push ecx */
  push32((uint32_t)(ECX));
  /* 1194781c call 0x1193b910 */
  push32(0x11947821u); f_1193b910();
  /* 11947821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947824 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947827 push eax */
  push32((uint32_t)(EAX));
  /* 11947828 call 0x11938ae0 */
  push32(0x1194782du); f_11938ae0();
  /* 1194782d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947830 mov dword ptr [0x11965ba4], eax */
  w32((uint32_t)(0x11965ba4), (EAX));
  /* 11947835 cmp dword ptr [0x11965ba4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965ba4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194783c jne 0x1194784d */
  if (!C.zf) goto L_1194784d;
  /* 1194783e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11947840 call 0x1193c580 */
  push32(0x11947845u); f_1193c580();
  /* 11947845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947848 jmp 0x119479e7 */
  goto L_119479e7;
L_1194784d:;
  /* 1194784d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947850 push edx */
  push32((uint32_t)(EDX));
  /* 11947851 mov eax, dword ptr [0x11965ba4] */
  EAX = (r32((uint32_t)(0x11965ba4)));
  /* 11947856 push eax */
  push32((uint32_t)(EAX));
  /* 11947857 call 0x1193ba90 */
  push32(0x1194785cu); f_1193ba90();
  /* 1194785c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194785f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11947861 call 0x1193c580 */
  push32(0x11947866u); f_1193c580();
  /* 11947866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947869 push 3 */
  push32((uint32_t)(0x3u));
  /* 1194786b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194786e push ecx */
  push32((uint32_t)(ECX));
  /* 1194786f mov edx, dword ptr [0x11964e1c] */
  EDX = (r32((uint32_t)(0x11964e1c)));
  /* 11947875 push edx */
  push32((uint32_t)(EDX));
  /* 11947876 call 0x1193c300 */
  push32(0x1194787bu); f_1193c300();
  /* 1194787b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194787e mov eax, dword ptr [0x11964e1c] */
  EAX = (r32((uint32_t)(0x11964e1c)));
  /* 11947883 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11947887 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194788a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194788d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11947890 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947893 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11947896 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947899 jne 0x119478ad */
  if (!C.zf) goto L_119478ad;
  /* 1194789b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194789e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119478a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119478a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119478a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119478aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119478ad:;
  /* 119478ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119478b0 push eax */
  push32((uint32_t)(EAX));
  /* 119478b1 call 0x11947390 */
  push32(0x119478b6u); f_11947390();
  /* 119478b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119478b9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119478bf mov dword ptr [0x11964d90], eax */
  w32((uint32_t)(0x11964d90), (EAX));
L_119478c4:;
  /* 119478c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119478c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119478ca cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119478cd je 0x119478e5 */
  if (C.zf) goto L_119478e5;
  /* 119478cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119478d2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119478d5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119478d8 jl 0x119478f0 */
  if ((C.sf!=C.of)) goto L_119478f0;
  /* 119478da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119478dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119478e0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119478e3 jg 0x119478f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_119478f0;
L_119478e5:;
  /* 119478e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119478e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119478eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119478ee jmp 0x119478c4 */
  goto L_119478c4;
L_119478f0:;
  /* 119478f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119478f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119478f6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119478f9 jne 0x11947995 */
  if (!C.zf) goto L_11947995;
  /* 119478ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947902 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947905 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11947908 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194790b push edx */
  push32((uint32_t)(EDX));
  /* 1194790c call 0x11947390 */
  push32(0x11947911u); f_11947390();
  /* 11947911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947914 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947917 mov ecx, dword ptr [0x11964d90] */
  ECX = (r32((uint32_t)(0x11964d90)));
  /* 1194791d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194791f mov dword ptr [0x11964d90], ecx */
  w32((uint32_t)(0x11964d90), (ECX));
L_11947925:;
  /* 11947925 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947928 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1194792b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194792e jl 0x11947946 */
  if ((C.sf!=C.of)) goto L_11947946;
  /* 11947930 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947933 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11947936 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947939 jg 0x11947946 */
  if ((!C.zf&&C.sf==C.of)) goto L_11947946;
  /* 1194793b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194793e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947941 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11947944 jmp 0x11947925 */
  goto L_11947925;
L_11947946:;
  /* 11947946 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947949 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1194794c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194794f jne 0x11947995 */
  if (!C.zf) goto L_11947995;
  /* 11947951 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947954 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947957 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1194795a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194795d push ecx */
  push32((uint32_t)(ECX));
  /* 1194795e call 0x11947390 */
  push32(0x11947963u); f_11947390();
  /* 11947963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947966 mov edx, dword ptr [0x11964d90] */
  EDX = (r32((uint32_t)(0x11964d90)));
  /* 1194796c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194796e mov dword ptr [0x11964d90], edx */
  w32((uint32_t)(0x11964d90), (EDX));
L_11947974:;
  /* 11947974 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947977 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1194797a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194797d jl 0x11947995 */
  if ((C.sf!=C.of)) goto L_11947995;
  /* 1194797f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947982 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11947985 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947988 jg 0x11947995 */
  if ((!C.zf&&C.sf==C.of)) goto L_11947995;
  /* 1194798a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194798d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947990 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11947993 jmp 0x11947974 */
  goto L_11947974;
L_11947995:;
  /* 11947995 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947999 je 0x119479a9 */
  if (C.zf) goto L_119479a9;
  /* 1194799b mov edx, dword ptr [0x11964d90] */
  EDX = (r32((uint32_t)(0x11964d90)));
  /* 119479a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119479a3 mov dword ptr [0x11964d90], edx */
  w32((uint32_t)(0x11964d90), (EDX));
L_119479a9:;
  /* 119479a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119479ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119479af mov dword ptr [0x11964d94], ecx */
  w32((uint32_t)(0x11964d94), (ECX));
  /* 119479b5 cmp dword ptr [0x11964d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11964d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119479bc je 0x119479de */
  if (C.zf) goto L_119479de;
  /* 119479be push 3 */
  push32((uint32_t)(0x3u));
  /* 119479c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119479c3 push edx */
  push32((uint32_t)(EDX));
  /* 119479c4 mov eax, dword ptr [0x11964e20] */
  EAX = (r32((uint32_t)(0x11964e20)));
  /* 119479c9 push eax */
  push32((uint32_t)(EAX));
  /* 119479ca call 0x1193c300 */
  push32(0x119479cfu); f_1193c300();
  /* 119479cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119479d2 mov ecx, dword ptr [0x11964e20] */
  ECX = (r32((uint32_t)(0x11964e20)));
  /* 119479d8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 119479dc jmp 0x119479e7 */
  goto L_119479e7;
L_119479de:;
  /* 119479de mov edx, dword ptr [0x11964e20] */
  EDX = (r32((uint32_t)(0x11964e20)));
  /* 119479e4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_119479e7:;
  /* 119479e7 mov esp, ebp */
  ESP = (EBP);
  /* 119479e9 pop ebp */
  EBP = (pop32());
  /* 119479ea ret  */
  ESPCHK(0x11947640u, _esp0);
  ESP += 4; return;
}

/* FUN_100179f0 @ 0x119479f0 (46 bytes, 18 insns) */
void f_119479f0(void) {
  FTRACE(0x119479f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119479f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119479f1 mov ebp, esp */
  EBP = (ESP);
  /* 119479f3 push ecx */
  push32((uint32_t)(ECX));
  /* 119479f4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 119479f6 call 0x1193c4e0 */
  push32(0x119479fbu); f_1193c4e0();
  /* 119479fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119479fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947a01 push eax */
  push32((uint32_t)(EAX));
  /* 11947a02 call 0x11947a20 */
  push32(0x11947a07u); f_11947a20();
  /* 11947a07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947a0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11947a0d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11947a0f call 0x1193c580 */
  push32(0x11947a14u); f_1193c580();
  /* 11947a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947a17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11947a1a mov esp, ebp */
  ESP = (EBP);
  /* 11947a1c pop ebp */
  EBP = (pop32());
  /* 11947a1d ret  */
  ESPCHK(0x119479f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017a20 @ 0x11947a20 (762 bytes, 246 insns) */
void f_11947a20(void) {
  FTRACE(0x11947a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11947a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11947a21 mov ebp, esp */
  EBP = (ESP);
  /* 11947a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11947a24 cmp dword ptr [0x11964d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11964d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947a2b jne 0x11947a34 */
  if (!C.zf) goto L_11947a34;
  /* 11947a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947a2f jmp 0x11947d16 */
  goto L_11947d16;
L_11947a34:;
  /* 11947a34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947a37 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11947a3a cmp ecx, dword ptr [0x11964e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11964e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947a40 jne 0x11947a54 */
  if (!C.zf) goto L_11947a54;
  /* 11947a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947a45 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11947a48 cmp eax, dword ptr [0x11964e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11964e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947a4e je 0x11947c1b */
  if (C.zf) goto L_11947c1b;
L_11947a54:;
  /* 11947a54 cmp dword ptr [0x11965af0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965af0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947a5b je 0x11947bd5 */
  if (C.zf) goto L_11947bd5;
  /* 11947a61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947a63 mov cx, word ptr [0x11965b90] */
  CX = (r16((uint32_t)(0x11965b90)));
  /* 11947a6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11947a6c jne 0x11947ac9 */
  if (!C.zf) goto L_11947ac9;
  /* 11947a6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947a70 mov dx, word ptr [0x11965b9e] */
  DX = (r16((uint32_t)(0x11965b9e)));
  /* 11947a77 push edx */
  push32((uint32_t)(EDX));
  /* 11947a78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947a7a mov ax, word ptr [0x11965b9c] */
  AX = (r16((uint32_t)(0x11965b9c)));
  /* 11947a80 push eax */
  push32((uint32_t)(EAX));
  /* 11947a81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947a83 mov cx, word ptr [0x11965b9a] */
  CX = (r16((uint32_t)(0x11965b9a)));
  /* 11947a8a push ecx */
  push32((uint32_t)(ECX));
  /* 11947a8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947a8d mov dx, word ptr [0x11965b98] */
  DX = (r16((uint32_t)(0x11965b98)));
  /* 11947a94 push edx */
  push32((uint32_t)(EDX));
  /* 11947a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947a97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947a99 mov ax, word ptr [0x11965b94] */
  AX = (r16((uint32_t)(0x11965b94)));
  /* 11947a9f push eax */
  push32((uint32_t)(EAX));
  /* 11947aa0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947aa2 mov cx, word ptr [0x11965b96] */
  CX = (r16((uint32_t)(0x11965b96)));
  /* 11947aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 11947aaa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947aac mov dx, word ptr [0x11965b92] */
  DX = (r16((uint32_t)(0x11965b92)));
  /* 11947ab3 push edx */
  push32((uint32_t)(EDX));
  /* 11947ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947ab7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11947aba push ecx */
  push32((uint32_t)(ECX));
  /* 11947abb push 1 */
  push32((uint32_t)(0x1u));
  /* 11947abd push 1 */
  push32((uint32_t)(0x1u));
  /* 11947abf call 0x11947d20 */
  push32(0x11947ac4u); f_11947d20();
  /* 11947ac4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947ac7 jmp 0x11947b1a */
  goto L_11947b1a;
L_11947ac9:;
  /* 11947ac9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947acb mov dx, word ptr [0x11965b9e] */
  DX = (r16((uint32_t)(0x11965b9e)));
  /* 11947ad2 push edx */
  push32((uint32_t)(EDX));
  /* 11947ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947ad5 mov ax, word ptr [0x11965b9c] */
  AX = (r16((uint32_t)(0x11965b9c)));
  /* 11947adb push eax */
  push32((uint32_t)(EAX));
  /* 11947adc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947ade mov cx, word ptr [0x11965b9a] */
  CX = (r16((uint32_t)(0x11965b9a)));
  /* 11947ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 11947ae6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947ae8 mov dx, word ptr [0x11965b98] */
  DX = (r16((uint32_t)(0x11965b98)));
  /* 11947aef push edx */
  push32((uint32_t)(EDX));
  /* 11947af0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947af2 mov ax, word ptr [0x11965b96] */
  AX = (r16((uint32_t)(0x11965b96)));
  /* 11947af8 push eax */
  push32((uint32_t)(EAX));
  /* 11947af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947afb push 0 */
  push32((uint32_t)(0x0u));
  /* 11947afd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947aff mov cx, word ptr [0x11965b92] */
  CX = (r16((uint32_t)(0x11965b92)));
  /* 11947b06 push ecx */
  push32((uint32_t)(ECX));
  /* 11947b07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947b0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11947b0d push eax */
  push32((uint32_t)(EAX));
  /* 11947b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11947b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 11947b12 call 0x11947d20 */
  push32(0x11947b17u); f_11947d20();
  /* 11947b17 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11947b1a:;
  /* 11947b1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947b1c mov cx, word ptr [0x11965b3c] */
  CX = (r16((uint32_t)(0x11965b3c)));
  /* 11947b23 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11947b25 jne 0x11947b82 */
  if (!C.zf) goto L_11947b82;
  /* 11947b27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947b29 mov dx, word ptr [0x11965b4a] */
  DX = (r16((uint32_t)(0x11965b4a)));
  /* 11947b30 push edx */
  push32((uint32_t)(EDX));
  /* 11947b31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947b33 mov ax, word ptr [0x11965b48] */
  AX = (r16((uint32_t)(0x11965b48)));
  /* 11947b39 push eax */
  push32((uint32_t)(EAX));
  /* 11947b3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947b3c mov cx, word ptr [0x11965b46] */
  CX = (r16((uint32_t)(0x11965b46)));
  /* 11947b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11947b44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947b46 mov dx, word ptr [0x11965b44] */
  DX = (r16((uint32_t)(0x11965b44)));
  /* 11947b4d push edx */
  push32((uint32_t)(EDX));
  /* 11947b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11947b50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947b52 mov ax, word ptr [0x11965b40] */
  AX = (r16((uint32_t)(0x11965b40)));
  /* 11947b58 push eax */
  push32((uint32_t)(EAX));
  /* 11947b59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947b5b mov cx, word ptr [0x11965b42] */
  CX = (r16((uint32_t)(0x11965b42)));
  /* 11947b62 push ecx */
  push32((uint32_t)(ECX));
  /* 11947b63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947b65 mov dx, word ptr [0x11965b3e] */
  DX = (r16((uint32_t)(0x11965b3e)));
  /* 11947b6c push edx */
  push32((uint32_t)(EDX));
  /* 11947b6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947b70 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11947b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11947b74 push 1 */
  push32((uint32_t)(0x1u));
  /* 11947b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947b78 call 0x11947d20 */
  push32(0x11947b7du); f_11947d20();
  /* 11947b7d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947b80 jmp 0x11947bd3 */
  goto L_11947bd3;
L_11947b82:;
  /* 11947b82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947b84 mov dx, word ptr [0x11965b4a] */
  DX = (r16((uint32_t)(0x11965b4a)));
  /* 11947b8b push edx */
  push32((uint32_t)(EDX));
  /* 11947b8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947b8e mov ax, word ptr [0x11965b48] */
  AX = (r16((uint32_t)(0x11965b48)));
  /* 11947b94 push eax */
  push32((uint32_t)(EAX));
  /* 11947b95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947b97 mov cx, word ptr [0x11965b46] */
  CX = (r16((uint32_t)(0x11965b46)));
  /* 11947b9e push ecx */
  push32((uint32_t)(ECX));
  /* 11947b9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11947ba1 mov dx, word ptr [0x11965b44] */
  DX = (r16((uint32_t)(0x11965b44)));
  /* 11947ba8 push edx */
  push32((uint32_t)(EDX));
  /* 11947ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947bab mov ax, word ptr [0x11965b42] */
  AX = (r16((uint32_t)(0x11965b42)));
  /* 11947bb1 push eax */
  push32((uint32_t)(EAX));
  /* 11947bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11947bb8 mov cx, word ptr [0x11965b3e] */
  CX = (r16((uint32_t)(0x11965b3e)));
  /* 11947bbf push ecx */
  push32((uint32_t)(ECX));
  /* 11947bc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947bc3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11947bc6 push eax */
  push32((uint32_t)(EAX));
  /* 11947bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bcb call 0x11947d20 */
  push32(0x11947bd0u); f_11947d20();
  /* 11947bd0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11947bd3:;
  /* 11947bd3 jmp 0x11947c1b */
  goto L_11947c1b;
L_11947bd5:;
  /* 11947bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bdb push 2 */
  push32((uint32_t)(0x2u));
  /* 11947bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 11947be1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11947be3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11947be5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947be8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11947beb push edx */
  push32((uint32_t)(EDX));
  /* 11947bec push 1 */
  push32((uint32_t)(0x1u));
  /* 11947bee push 1 */
  push32((uint32_t)(0x1u));
  /* 11947bf0 call 0x11947d20 */
  push32(0x11947bf5u); f_11947d20();
  /* 11947bf5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11947bfe push 2 */
  push32((uint32_t)(0x2u));
  /* 11947c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947c04 push 5 */
  push32((uint32_t)(0x5u));
  /* 11947c06 push 0xa */
  push32((uint32_t)(0xau));
  /* 11947c08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947c0b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11947c0e push ecx */
  push32((uint32_t)(ECX));
  /* 11947c0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11947c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947c13 call 0x11947d20 */
  push32(0x11947c18u); f_11947d20();
  /* 11947c18 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11947c1b:;
  /* 11947c1b mov edx, dword ptr [0x11964e2c] */
  EDX = (r32((uint32_t)(0x11964e2c)));
  /* 11947c21 cmp edx, dword ptr [0x11964e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11964e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947c27 jge 0x11947c74 */
  if ((C.sf==C.of)) goto L_11947c74;
  /* 11947c29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947c2c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11947c2f cmp ecx, dword ptr [0x11964e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11964e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947c35 jl 0x11947c45 */
  if ((C.sf!=C.of)) goto L_11947c45;
  /* 11947c37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947c3a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11947c3d cmp eax, dword ptr [0x11964e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11964e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947c43 jle 0x11947c4c */
  if ((C.zf||C.sf!=C.of)) goto L_11947c4c;
L_11947c45:;
  /* 11947c45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947c47 jmp 0x11947d16 */
  goto L_11947d16;
L_11947c4c:;
  /* 11947c4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947c4f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11947c52 cmp edx, dword ptr [0x11964e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11964e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947c58 jle 0x11947c72 */
  if ((C.zf||C.sf!=C.of)) goto L_11947c72;
  /* 11947c5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947c5d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11947c60 cmp ecx, dword ptr [0x11964e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11964e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947c66 jge 0x11947c72 */
  if ((C.sf==C.of)) goto L_11947c72;
  /* 11947c68 mov eax, 1 */
  EAX = (0x1u);
  /* 11947c6d jmp 0x11947d16 */
  goto L_11947d16;
L_11947c72:;
  /* 11947c72 jmp 0x11947cb7 */
  goto L_11947cb7;
L_11947c74:;
  /* 11947c74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947c77 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11947c7a cmp eax, dword ptr [0x11964e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11964e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947c80 jl 0x11947c90 */
  if ((C.sf!=C.of)) goto L_11947c90;
  /* 11947c82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947c85 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11947c88 cmp edx, dword ptr [0x11964e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11964e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947c8e jle 0x11947c97 */
  if ((C.zf||C.sf!=C.of)) goto L_11947c97;
L_11947c90:;
  /* 11947c90 mov eax, 1 */
  EAX = (0x1u);
  /* 11947c95 jmp 0x11947d16 */
  goto L_11947d16;
L_11947c97:;
  /* 11947c97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947c9a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11947c9d cmp ecx, dword ptr [0x11964e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11964e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947ca3 jle 0x11947cb7 */
  if ((C.zf||C.sf!=C.of)) goto L_11947cb7;
  /* 11947ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947ca8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11947cab cmp eax, dword ptr [0x11964e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11964e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947cb1 jge 0x11947cb7 */
  if ((C.sf==C.of)) goto L_11947cb7;
  /* 11947cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947cb5 jmp 0x11947d16 */
  goto L_11947d16;
L_11947cb7:;
  /* 11947cb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947cba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11947cbd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947cc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11947cc5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947cc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947cca mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11947ccd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947cd3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947cd5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947cdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11947cde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947ce1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11947ce4 cmp edx, dword ptr [0x11964e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11964e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947cea jne 0x11947d02 */
  if (!C.zf) goto L_11947d02;
  /* 11947cec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11947cef cmp eax, dword ptr [0x11964e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11964e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947cf5 jl 0x11947cfe */
  if ((C.sf!=C.of)) goto L_11947cfe;
  /* 11947cf7 mov eax, 1 */
  EAX = (0x1u);
  /* 11947cfc jmp 0x11947d16 */
  goto L_11947d16;
L_11947cfe:;
  /* 11947cfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947d00 jmp 0x11947d16 */
  goto L_11947d16;
L_11947d02:;
  /* 11947d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11947d05 cmp ecx, dword ptr [0x11964e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11964e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947d0b jge 0x11947d14 */
  if ((C.sf==C.of)) goto L_11947d14;
  /* 11947d0d mov eax, 1 */
  EAX = (0x1u);
  /* 11947d12 jmp 0x11947d16 */
  goto L_11947d16;
L_11947d14:;
  /* 11947d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11947d16:;
  /* 11947d16 mov esp, ebp */
  ESP = (EBP);
  /* 11947d18 pop ebp */
  EBP = (pop32());
  /* 11947d19 ret  */
  ESPCHK(0x11947a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d20 @ 0x11947d20 (504 bytes, 145 insns) */
void f_11947d20(void) {
  FTRACE(0x11947d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11947d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11947d21 mov ebp, esp */
  EBP = (ESP);
  /* 11947d23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947d26 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947d2a jne 0x11947dfc */
  if (!C.zf) goto L_11947dfc;
  /* 11947d30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947d33 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11947d36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11947d38 jne 0x11947d49 */
  if (!C.zf) goto L_11947d49;
  /* 11947d3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11947d3d mov edx, dword ptr [ecx*4 + 0x11964e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11964e4c)));
  /* 11947d44 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11947d47 jmp 0x11947d56 */
  goto L_11947d56;
L_11947d49:;
  /* 11947d49 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11947d4c mov ecx, dword ptr [eax*4 + 0x11964e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11964e80)));
  /* 11947d53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11947d56:;
  /* 11947d56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11947d59 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947d5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11947d5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947d62 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947d65 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947d6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11947d6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947d70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947d73 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947d76 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11947d79 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11947d7d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11947d7e mov ecx, 7 */
  ECX = (0x7u);
  /* 11947d83 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11947d85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11947d88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11947d8b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947d8e jge 0x11947da9 */
  if ((C.sf==C.of)) goto L_11947da9;
  /* 11947d90 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11947d93 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947d96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11947d99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947d9c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947d9f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947da2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947da4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11947da7 jmp 0x11947dbd */
  goto L_11947dbd;
L_11947da9:;
  /* 11947da9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11947dac sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947daf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11947db2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947db5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947db8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947dba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11947dbd:;
  /* 11947dbd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947dc1 jne 0x11947dfa */
  if (!C.zf) goto L_11947dfa;
  /* 11947dc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947dc6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11947dc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11947dcb jne 0x11947ddc */
  if (!C.zf) goto L_11947ddc;
  /* 11947dcd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11947dd0 mov eax, dword ptr [edx*4 + 0x11964e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11964e50)));
  /* 11947dd7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11947dda jmp 0x11947de9 */
  goto L_11947de9;
L_11947ddc:;
  /* 11947ddc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11947ddf mov edx, dword ptr [ecx*4 + 0x11964e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11964e84)));
  /* 11947de6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11947de9:;
  /* 11947de9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11947dec cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947def jle 0x11947dfa */
  if ((C.zf||C.sf!=C.of)) goto L_11947dfa;
  /* 11947df1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11947df4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947df7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11947dfa:;
  /* 11947dfa jmp 0x11947e31 */
  goto L_11947e31;
L_11947dfc:;
  /* 11947dfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947dff and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11947e02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11947e04 jne 0x11947e15 */
  if (!C.zf) goto L_11947e15;
  /* 11947e06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11947e09 mov ecx, dword ptr [eax*4 + 0x11964e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11964e4c)));
  /* 11947e10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11947e13 jmp 0x11947e22 */
  goto L_11947e22;
L_11947e15:;
  /* 11947e15 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11947e18 mov eax, dword ptr [edx*4 + 0x11964e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11964e80)));
  /* 11947e1f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11947e22:;
  /* 11947e22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11947e25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11947e28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11947e2b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947e2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11947e31:;
  /* 11947e31 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947e35 jne 0x11947e71 */
  if (!C.zf) goto L_11947e71;
  /* 11947e37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11947e3a mov dword ptr [0x11964e2c], eax */
  w32((uint32_t)(0x11964e2c), (EAX));
  /* 11947e3f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11947e42 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947e45 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11947e48 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947e4a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947e4d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11947e50 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947e52 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947e58 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11947e5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947e5d mov dword ptr [0x11964e30], ecx */
  w32((uint32_t)(0x11964e30), (ECX));
  /* 11947e63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947e66 mov dword ptr [0x11964e28], edx */
  w32((uint32_t)(0x11964e28), (EDX));
  /* 11947e6c jmp 0x11947f14 */
  goto L_11947f14;
L_11947e71:;
  /* 11947e71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11947e74 mov dword ptr [0x11964e3c], eax */
  w32((uint32_t)(0x11964e3c), (EAX));
  /* 11947e79 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11947e7c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947e7f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11947e82 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947e84 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947e87 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11947e8a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947e8c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947e92 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11947e95 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947e97 mov dword ptr [0x11964e40], ecx */
  w32((uint32_t)(0x11964e40), (ECX));
  /* 11947e9d mov edx, dword ptr [0x11964d98] */
  EDX = (r32((uint32_t)(0x11964d98)));
  /* 11947ea3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11947ea9 mov eax, dword ptr [0x11964e40] */
  EAX = (r32((uint32_t)(0x11964e40)));
  /* 11947eae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947eb0 mov dword ptr [0x11964e40], eax */
  w32((uint32_t)(0x11964e40), (EAX));
  /* 11947eb5 cmp dword ptr [0x11964e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11964e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947ebc jge 0x11947ee1 */
  if ((C.sf==C.of)) goto L_11947ee1;
  /* 11947ebe mov ecx, dword ptr [0x11964e40] */
  ECX = (r32((uint32_t)(0x11964e40)));
  /* 11947ec4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947eca mov dword ptr [0x11964e40], ecx */
  w32((uint32_t)(0x11964e40), (ECX));
  /* 11947ed0 mov edx, dword ptr [0x11964e3c] */
  EDX = (r32((uint32_t)(0x11964e3c)));
  /* 11947ed6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947ed9 mov dword ptr [0x11964e3c], edx */
  w32((uint32_t)(0x11964e3c), (EDX));
  /* 11947edf jmp 0x11947f0b */
  goto L_11947f0b;
L_11947ee1:;
  /* 11947ee1 cmp dword ptr [0x11964e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11964e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947eeb jl 0x11947f0b */
  if ((C.sf!=C.of)) goto L_11947f0b;
  /* 11947eed mov eax, dword ptr [0x11964e40] */
  EAX = (r32((uint32_t)(0x11964e40)));
  /* 11947ef2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11947ef7 mov dword ptr [0x11964e40], eax */
  w32((uint32_t)(0x11964e40), (EAX));
  /* 11947efc mov ecx, dword ptr [0x11964e3c] */
  ECX = (r32((uint32_t)(0x11964e3c)));
  /* 11947f02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11947f05 mov dword ptr [0x11964e3c], ecx */
  w32((uint32_t)(0x11964e3c), (ECX));
L_11947f0b:;
  /* 11947f0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947f0e mov dword ptr [0x11964e38], edx */
  w32((uint32_t)(0x11964e38), (EDX));
L_11947f14:;
  /* 11947f14 mov esp, ebp */
  ESP = (EBP);
  /* 11947f16 pop ebp */
  EBP = (pop32());
  /* 11947f17 ret  */
  ESPCHK(0x11947d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f20 @ 0x11947f20 (382 bytes, 135 insns) */
void f_11947f20(void) {
  FTRACE(0x11947f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11947f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11947f21 mov ebp, esp */
  EBP = (ESP);
  /* 11947f23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11947f25 push 0x11961808 */
  push32((uint32_t)(0x11961808u));
  /* 11947f2a push 0x11941be8 */
  push32((uint32_t)(0x11941be8u));
  /* 11947f2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11947f35 push eax */
  push32((uint32_t)(EAX));
  /* 11947f36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11947f3d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11947f40 push ebx */
  push32((uint32_t)(EBX));
  /* 11947f41 push esi */
  push32((uint32_t)(ESI));
  /* 11947f42 push edi */
  push32((uint32_t)(EDI));
  /* 11947f43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11947f46 cmp dword ptr [0x11965bac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947f4d jne 0x11947f92 */
  if (!C.zf) goto L_11947f92;
  /* 11947f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11947f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11947f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947f57 call dword ptr [0x119682e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682e4))), 0x11947f5du);
  /* 11947f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11947f5f je 0x11947f6d */
  if (C.zf) goto L_11947f6d;
  /* 11947f61 mov dword ptr [0x11965bac], 1 */
  w32((uint32_t)(0x11965bac), (0x1u));
  /* 11947f6b jmp 0x11947f92 */
  goto L_11947f92;
L_11947f6d:;
  /* 11947f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11947f6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11947f71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11947f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947f75 call dword ptr [0x119682fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682fc))), 0x11947f7bu);
  /* 11947f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11947f7d je 0x11947f8b */
  if (C.zf) goto L_11947f8b;
  /* 11947f7f mov dword ptr [0x11965bac], 2 */
  w32((uint32_t)(0x11965bac), (0x2u));
  /* 11947f89 jmp 0x11947f92 */
  goto L_11947f92;
L_11947f8b:;
  /* 11947f8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947f8d jmp 0x119480a1 */
  goto L_119480a1;
L_11947f92:;
  /* 11947f92 cmp dword ptr [0x11965bac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11965bac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947f99 jne 0x11947fb6 */
  if (!C.zf) goto L_11947fb6;
  /* 11947f9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11947f9e push eax */
  push32((uint32_t)(EAX));
  /* 11947f9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11947fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 11947fa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11947fa6 push edx */
  push32((uint32_t)(EDX));
  /* 11947fa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947faa push eax */
  push32((uint32_t)(EAX));
  /* 11947fab call dword ptr [0x119682e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682e4))), 0x11947fb1u);
  /* 11947fb1 jmp 0x119480a1 */
  goto L_119480a1;
L_11947fb6:;
  /* 11947fb6 cmp dword ptr [0x11965bac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11965bac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947fbd jne 0x1194809f */
  if (!C.zf) goto L_1194809f;
  /* 11947fc3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947fc7 jne 0x11947fd2 */
  if (!C.zf) goto L_11947fd2;
  /* 11947fc9 mov ecx, dword ptr [0x11965a60] */
  ECX = (r32((uint32_t)(0x11965a60)));
  /* 11947fcf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11947fd2:;
  /* 11947fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11947fd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11947fd9 push edx */
  push32((uint32_t)(EDX));
  /* 11947fda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11947fdd push eax */
  push32((uint32_t)(EAX));
  /* 11947fde call dword ptr [0x119682fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682fc))), 0x11947fe4u);
  /* 11947fe4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11947fe7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11947feb jne 0x11947ff4 */
  if (!C.zf) goto L_11947ff4;
  /* 11947fed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11947fef jmp 0x119480a1 */
  goto L_119480a1;
L_11947ff4:;
  /* 11947ff4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11947ffb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11947ffe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948001 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11948003 call 0x1193bc80 */
  push32(0x11948008u); f_1193bc80();
  /* 11948008 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1194800b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1194800e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11948011 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11948014 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1194801b jmp 0x11948034 */
  goto L_11948034;
  /* 1194801d mov eax, 1 */
  EAX = (0x1u);
  /* 11948022 ret  */
  ESPCHK(0x11947f20u, _esp0);
  ESP += 4; return;
  /* 11948023 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11948026 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1194802d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11948034:;
  /* 11948034 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948038 jne 0x1194803e */
  if (!C.zf) goto L_1194803e;
  /* 1194803a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194803c jmp 0x119480a1 */
  goto L_119480a1;
L_1194803e:;
  /* 1194803e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11948041 push edx */
  push32((uint32_t)(EDX));
  /* 11948042 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11948045 push eax */
  push32((uint32_t)(EAX));
  /* 11948046 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948049 push ecx */
  push32((uint32_t)(ECX));
  /* 1194804a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194804d push edx */
  push32((uint32_t)(EDX));
  /* 1194804e call dword ptr [0x119682fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682fc))), 0x11948054u);
  /* 11948054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11948056 jne 0x1194805c */
  if (!C.zf) goto L_1194805c;
  /* 11948058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194805a jmp 0x119480a1 */
  goto L_119480a1;
L_1194805c:;
  /* 1194805c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948060 jne 0x1194807d */
  if (!C.zf) goto L_1194807d;
  /* 11948062 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948064 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948066 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11948068 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194806b push eax */
  push32((uint32_t)(EAX));
  /* 1194806c push 1 */
  push32((uint32_t)(0x1u));
  /* 1194806e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11948071 push ecx */
  push32((uint32_t)(ECX));
  /* 11948072 call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x11948078u);
  /* 11948078 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1194807b jmp 0x1194809a */
  goto L_1194809a;
L_1194807d:;
  /* 1194807d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11948080 push edx */
  push32((uint32_t)(EDX));
  /* 11948081 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11948084 push eax */
  push32((uint32_t)(EAX));
  /* 11948085 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11948087 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1194808a push ecx */
  push32((uint32_t)(ECX));
  /* 1194808b push 1 */
  push32((uint32_t)(0x1u));
  /* 1194808d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11948090 push edx */
  push32((uint32_t)(EDX));
  /* 11948091 call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x11948097u);
  /* 11948097 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1194809a:;
  /* 1194809a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1194809d jmp 0x119480a1 */
  goto L_119480a1;
L_1194809f:;
  /* 1194809f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119480a1:;
  /* 119480a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 119480a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119480a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119480ae pop edi */
  EDI = (pop32());
  /* 119480af pop esi */
  ESI = (pop32());
  /* 119480b0 pop ebx */
  EBX = (pop32());
  /* 119480b1 mov esp, ebp */
  ESP = (EBP);
  /* 119480b3 pop ebp */
  EBP = (pop32());
  /* 119480b4 ret  */
  ESPCHK(0x11947f20u, _esp0);
  ESP += 4; return;
}

/* FUN_100180c0 @ 0x119480c0 (398 bytes, 140 insns) */
void f_119480c0(void) {
  FTRACE(0x119480c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119480c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119480c1 mov ebp, esp */
  EBP = (ESP);
  /* 119480c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119480c5 push 0x11961818 */
  push32((uint32_t)(0x11961818u));
  /* 119480ca push 0x11941be8 */
  push32((uint32_t)(0x11941be8u));
  /* 119480cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119480d5 push eax */
  push32((uint32_t)(EAX));
  /* 119480d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119480dd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119480e0 push ebx */
  push32((uint32_t)(EBX));
  /* 119480e1 push esi */
  push32((uint32_t)(ESI));
  /* 119480e2 push edi */
  push32((uint32_t)(EDI));
  /* 119480e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119480e6 cmp dword ptr [0x11965bb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119480ed jne 0x11948132 */
  if (!C.zf) goto L_11948132;
  /* 119480ef push 0 */
  push32((uint32_t)(0x0u));
  /* 119480f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119480f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119480f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119480f7 call dword ptr [0x119682e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682e4))), 0x119480fdu);
  /* 119480fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119480ff je 0x1194810d */
  if (C.zf) goto L_1194810d;
  /* 11948101 mov dword ptr [0x11965bb0], 1 */
  w32((uint32_t)(0x11965bb0), (0x1u));
  /* 1194810b jmp 0x11948132 */
  goto L_11948132;
L_1194810d:;
  /* 1194810d push 0 */
  push32((uint32_t)(0x0u));
  /* 1194810f push 0 */
  push32((uint32_t)(0x0u));
  /* 11948111 push 1 */
  push32((uint32_t)(0x1u));
  /* 11948113 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948115 call dword ptr [0x119682fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682fc))), 0x1194811bu);
  /* 1194811b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194811d je 0x1194812b */
  if (C.zf) goto L_1194812b;
  /* 1194811f mov dword ptr [0x11965bb0], 2 */
  w32((uint32_t)(0x11965bb0), (0x2u));
  /* 11948129 jmp 0x11948132 */
  goto L_11948132;
L_1194812b:;
  /* 1194812b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194812d jmp 0x11948251 */
  goto L_11948251;
L_11948132:;
  /* 11948132 cmp dword ptr [0x11965bb0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11965bb0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948139 jne 0x11948156 */
  if (!C.zf) goto L_11948156;
  /* 1194813b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194813e push eax */
  push32((uint32_t)(EAX));
  /* 1194813f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11948142 push ecx */
  push32((uint32_t)(ECX));
  /* 11948143 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948146 push edx */
  push32((uint32_t)(EDX));
  /* 11948147 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194814a push eax */
  push32((uint32_t)(EAX));
  /* 1194814b call dword ptr [0x119682fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682fc))), 0x11948151u);
  /* 11948151 jmp 0x11948251 */
  goto L_11948251;
L_11948156:;
  /* 11948156 cmp dword ptr [0x11965bb0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11965bb0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194815d jne 0x1194824f */
  if (!C.zf) goto L_1194824f;
  /* 11948163 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948167 jne 0x11948172 */
  if (!C.zf) goto L_11948172;
  /* 11948169 mov ecx, dword ptr [0x11965a60] */
  ECX = (r32((uint32_t)(0x11965a60)));
  /* 1194816f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11948172:;
  /* 11948172 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948174 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948176 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948179 push edx */
  push32((uint32_t)(EDX));
  /* 1194817a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194817d push eax */
  push32((uint32_t)(EAX));
  /* 1194817e call dword ptr [0x119682e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682e4))), 0x11948184u);
  /* 11948184 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11948187 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194818b jne 0x11948194 */
  if (!C.zf) goto L_11948194;
  /* 1194818d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194818f jmp 0x11948251 */
  goto L_11948251;
L_11948194:;
  /* 11948194 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194819b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1194819e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119481a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119481a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119481a5 call 0x1193bc80 */
  push32(0x119481aau); f_1193bc80();
  /* 119481aa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 119481ad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119481b0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119481b3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119481b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119481bd jmp 0x119481d6 */
  goto L_119481d6;
  /* 119481bf mov eax, 1 */
  EAX = (0x1u);
  /* 119481c4 ret  */
  ESPCHK(0x119480c0u, _esp0);
  ESP += 4; return;
  /* 119481c5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119481c8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 119481cf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119481d6:;
  /* 119481d6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119481da jne 0x119481e0 */
  if (!C.zf) goto L_119481e0;
  /* 119481dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119481de jmp 0x11948251 */
  goto L_11948251;
L_119481e0:;
  /* 119481e0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119481e3 push edx */
  push32((uint32_t)(EDX));
  /* 119481e4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119481e7 push eax */
  push32((uint32_t)(EAX));
  /* 119481e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119481eb push ecx */
  push32((uint32_t)(ECX));
  /* 119481ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119481ef push edx */
  push32((uint32_t)(EDX));
  /* 119481f0 call dword ptr [0x119682e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682e4))), 0x119481f6u);
  /* 119481f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119481f8 jne 0x119481fe */
  if (!C.zf) goto L_119481fe;
  /* 119481fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119481fc jmp 0x11948251 */
  goto L_11948251;
L_119481fe:;
  /* 119481fe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948202 jne 0x11948226 */
  if (!C.zf) goto L_11948226;
  /* 11948204 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948206 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948208 push 0 */
  push32((uint32_t)(0x0u));
  /* 1194820a push 0 */
  push32((uint32_t)(0x0u));
  /* 1194820c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1194820e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11948211 push eax */
  push32((uint32_t)(EAX));
  /* 11948212 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11948217 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1194821a push ecx */
  push32((uint32_t)(ECX));
  /* 1194821b call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x11948221u);
  /* 11948221 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11948224 jmp 0x1194824a */
  goto L_1194824a;
L_11948226:;
  /* 11948226 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1194822a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194822d push edx */
  push32((uint32_t)(EDX));
  /* 1194822e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11948231 push eax */
  push32((uint32_t)(EAX));
  /* 11948232 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11948234 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11948237 push ecx */
  push32((uint32_t)(ECX));
  /* 11948238 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1194823d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11948240 push edx */
  push32((uint32_t)(EDX));
  /* 11948241 call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x11948247u);
  /* 11948247 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1194824a:;
  /* 1194824a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1194824d jmp 0x11948251 */
  goto L_11948251;
L_1194824f:;
  /* 1194824f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11948251:;
  /* 11948251 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11948254 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11948257 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1194825e pop edi */
  EDI = (pop32());
  /* 1194825f pop esi */
  ESI = (pop32());
  /* 11948260 pop ebx */
  EBX = (pop32());
  /* 11948261 mov esp, ebp */
  ESP = (EBP);
  /* 11948263 pop ebp */
  EBP = (pop32());
  /* 11948264 ret  */
  ESPCHK(0x119480c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018270 @ 0x11948270 (11 bytes, 6 insns) */
void f_11948270(void) {
  FTRACE(0x11948270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948270 push ebp */
  push32((uint32_t)(EBP));
  /* 11948271 mov ebp, esp */
  EBP = (ESP);
  /* 11948273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948276 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948279 pop ebp */
  EBP = (pop32());
  /* 1194827a ret  */
  ESPCHK(0x11948270u, _esp0);
  ESP += 4; return;
}

/* FUN_10018280 @ 0x11948280 (147 bytes, 43 insns) */
void f_11948280(void) {
  FTRACE(0x11948280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948280 push ebp */
  push32((uint32_t)(EBP));
  /* 11948281 mov ebp, esp */
  EBP = (ESP);
  /* 11948283 push ecx */
  push32((uint32_t)(ECX));
  /* 11948284 cmp dword ptr [0x11965a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194828b jne 0x119482a7 */
  if (!C.zf) goto L_119482a7;
  /* 1194828d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948291 jl 0x119482a2 */
  if ((C.sf!=C.of)) goto L_119482a2;
  /* 11948293 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948297 jg 0x119482a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_119482a2;
  /* 11948299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194829c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194829f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119482a2:;
  /* 119482a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119482a5 jmp 0x1194830f */
  goto L_1194830f;
L_119482a7:;
  /* 119482a7 push 0x11965bdc */
  push32((uint32_t)(0x11965bdcu));
  /* 119482ac call dword ptr [0x119683b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683b4))), 0x119482b2u);
  /* 119482b2 cmp dword ptr [0x11965bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119482b9 je 0x119482d9 */
  if (C.zf) goto L_119482d9;
  /* 119482bb push 0x11965bdc */
  push32((uint32_t)(0x11965bdcu));
  /* 119482c0 call dword ptr [0x119683a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683a4))), 0x119482c6u);
  /* 119482c6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119482c8 call 0x1193c4e0 */
  push32(0x119482cdu); f_1193c4e0();
  /* 119482cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119482d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119482d7 jmp 0x119482e0 */
  goto L_119482e0;
L_119482d9:;
  /* 119482d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119482e0:;
  /* 119482e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119482e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119482e4 call 0x11948320 */
  push32(0x119482e9u); f_11948320();
  /* 119482e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119482ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119482ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119482f3 je 0x11948301 */
  if (C.zf) goto L_11948301;
  /* 119482f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119482f7 call 0x1193c580 */
  push32(0x119482fcu); f_1193c580();
  /* 119482fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119482ff jmp 0x1194830c */
  goto L_1194830c;
L_11948301:;
  /* 11948301 push 0x11965bdc */
  push32((uint32_t)(0x11965bdcu));
  /* 11948306 call dword ptr [0x119683a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119683a4))), 0x1194830cu);
L_1194830c:;
  /* 1194830c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1194830f:;
  /* 1194830f mov esp, ebp */
  ESP = (EBP);
  /* 11948311 pop ebp */
  EBP = (pop32());
  /* 11948312 ret  */
  ESPCHK(0x11948280u, _esp0);
  ESP += 4; return;
}

/* FUN_10018320 @ 0x11948320 (299 bytes, 91 insns) */
void f_11948320(void) {
  FTRACE(0x11948320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948320 push ebp */
  push32((uint32_t)(EBP));
  /* 11948321 mov ebp, esp */
  EBP = (ESP);
  /* 11948323 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948326 cmp dword ptr [0x11965a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194832d jne 0x1194834c */
  if (!C.zf) goto L_1194834c;
  /* 1194832f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948333 jl 0x11948344 */
  if ((C.sf!=C.of)) goto L_11948344;
  /* 11948335 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948339 jg 0x11948344 */
  if ((!C.zf&&C.sf==C.of)) goto L_11948344;
  /* 1194833b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194833e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948341 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11948344:;
  /* 11948344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948347 jmp 0x11948447 */
  goto L_11948447;
L_1194834c:;
  /* 1194834c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948353 jge 0x11948393 */
  if ((C.sf==C.of)) goto L_11948393;
  /* 11948355 cmp dword ptr [0x11963ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11963ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194835c jle 0x11948371 */
  if ((C.zf||C.sf!=C.of)) goto L_11948371;
  /* 1194835e push 1 */
  push32((uint32_t)(0x1u));
  /* 11948360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948363 push ecx */
  push32((uint32_t)(ECX));
  /* 11948364 call 0x1193eaf0 */
  push32(0x11948369u); f_1193eaf0();
  /* 11948369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194836c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1194836f jmp 0x11948385 */
  goto L_11948385;
L_11948371:;
  /* 11948371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948374 mov eax, dword ptr [0x11963c98] */
  EAX = (r32((uint32_t)(0x11963c98)));
  /* 11948379 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1194837b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1194837f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11948382 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11948385:;
  /* 11948385 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948389 jne 0x11948393 */
  if (!C.zf) goto L_11948393;
  /* 1194838b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194838e jmp 0x11948447 */
  goto L_11948447;
L_11948393:;
  /* 11948393 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948396 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11948399 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1194839f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119483a5 mov eax, dword ptr [0x11963c98] */
  EAX = (r32((uint32_t)(0x11963c98)));
  /* 119483aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119483ac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 119483b0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 119483b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119483b8 je 0x119483dc */
  if (C.zf) goto L_119483dc;
  /* 119483ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119483bd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 119483c0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119483c6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 119483c9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 119483cc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 119483cf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 119483d3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 119483da jmp 0x119483ed */
  goto L_119483ed;
L_119483dc:;
  /* 119483dc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 119483df mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 119483e2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 119483e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_119483ed:;
  /* 119483ed push 1 */
  push32((uint32_t)(0x1u));
  /* 119483ef push 0 */
  push32((uint32_t)(0x0u));
  /* 119483f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 119483f3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 119483f6 push edx */
  push32((uint32_t)(EDX));
  /* 119483f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119483fa push eax */
  push32((uint32_t)(EAX));
  /* 119483fb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 119483fe push ecx */
  push32((uint32_t)(ECX));
  /* 119483ff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11948404 mov edx, dword ptr [0x11965a50] */
  EDX = (r32((uint32_t)(0x11965a50)));
  /* 1194840a push edx */
  push32((uint32_t)(EDX));
  /* 1194840b call 0x11940ed0 */
  push32(0x11948410u); f_11940ed0();
  /* 11948410 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948413 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11948416 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194841a jne 0x11948421 */
  if (!C.zf) goto L_11948421;
  /* 1194841c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1194841f jmp 0x11948447 */
  goto L_11948447;
L_11948421:;
  /* 11948421 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948425 jne 0x11948431 */
  if (!C.zf) goto L_11948431;
  /* 11948427 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194842a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1194842f jmp 0x11948447 */
  goto L_11948447;
L_11948431:;
  /* 11948431 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948434 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11948439 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1194843c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11948442 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11948445 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11948447:;
  /* 11948447 mov esp, ebp */
  ESP = (EBP);
  /* 11948449 pop ebp */
  EBP = (pop32());
  /* 1194844a ret  */
  ESPCHK(0x11948320u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11948450 (52 bytes, 19 insns) */
void f_11948450(void) {
  FTRACE(0x11948450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948450 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11948454 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11948458 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1194845a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1194845e jne 0x11948469 */
  if (!C.zf) goto L_11948469;
  /* 11948460 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11948464 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11948466 ret 0x10 */
  ESPCHK(0x11948450u, _esp0);
  ESP += 20; return;
L_11948469:;
  /* 11948469 push ebx */
  push32((uint32_t)(EBX));
  /* 1194846a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1194846c mov ebx, eax */
  EBX = (EAX);
  /* 1194846e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11948472 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11948476 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948478 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1194847c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1194847e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948480 pop ebx */
  EBX = (pop32());
  /* 11948481 ret 0x10 */
  ESPCHK(0x11948450u, _esp0);
  ESP += 20; return;
}

/* FUN_10018490 @ 0x11948490 (46 bytes, 18 insns) */
void f_11948490(void) {
  FTRACE(0x11948490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948490 push ebp */
  push32((uint32_t)(EBP));
  /* 11948491 mov ebp, esp */
  EBP = (ESP);
  /* 11948493 push ecx */
  push32((uint32_t)(ECX));
  /* 11948494 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11948496 call 0x1193c4e0 */
  push32(0x1194849bu); f_1193c4e0();
  /* 1194849b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194849e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119484a1 push eax */
  push32((uint32_t)(EAX));
  /* 119484a2 call 0x119484c0 */
  push32(0x119484a7u); f_119484c0();
  /* 119484a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119484aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119484ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 119484af call 0x1193c580 */
  push32(0x119484b4u); f_1193c580();
  /* 119484b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119484b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119484ba mov esp, ebp */
  ESP = (EBP);
  /* 119484bc pop ebp */
  EBP = (pop32());
  /* 119484bd ret  */
  ESPCHK(0x11948490u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x119484c0 (198 bytes, 69 insns) */
void f_119484c0(void) {
  FTRACE(0x119484c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119484c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119484c1 mov ebp, esp */
  EBP = (ESP);
  /* 119484c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119484c6 mov eax, dword ptr [0x1196586c] */
  EAX = (r32((uint32_t)(0x1196586c)));
  /* 119484cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119484ce cmp dword ptr [0x11967360], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11967360))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119484d5 jne 0x119484de */
  if (!C.zf) goto L_119484de;
  /* 119484d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119484d9 jmp 0x11948582 */
  goto L_11948582;
L_119484de:;
  /* 119484de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119484e2 jne 0x11948506 */
  if (!C.zf) goto L_11948506;
  /* 119484e4 cmp dword ptr [0x11965874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119484eb je 0x11948506 */
  if (C.zf) goto L_11948506;
  /* 119484ed call 0x119485e0 */
  push32(0x119484f2u); f_119485e0();
  /* 119484f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119484f4 je 0x119484fd */
  if (C.zf) goto L_119484fd;
  /* 119484f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119484f8 jmp 0x11948582 */
  goto L_11948582;
L_119484fd:;
  /* 119484fd mov ecx, dword ptr [0x1196586c] */
  ECX = (r32((uint32_t)(0x1196586c)));
  /* 11948503 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11948506:;
  /* 11948506 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194850a je 0x11948580 */
  if (C.zf) goto L_11948580;
  /* 1194850c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948510 je 0x11948580 */
  if (C.zf) goto L_11948580;
  /* 11948512 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948515 push edx */
  push32((uint32_t)(EDX));
  /* 11948516 call 0x1193b910 */
  push32(0x1194851bu); f_1193b910();
  /* 1194851b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194851e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11948521:;
  /* 11948521 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948524 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948527 je 0x11948580 */
  if (C.zf) goto L_11948580;
  /* 11948529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194852c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1194852e push edx */
  push32((uint32_t)(EDX));
  /* 1194852f call 0x1193b910 */
  push32(0x11948534u); f_1193b910();
  /* 11948534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948537 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194853a jbe 0x11948575 */
  if ((C.cf||C.zf)) goto L_11948575;
  /* 1194853c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194853f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11948541 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948544 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11948548 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194854b jne 0x11948575 */
  if (!C.zf) goto L_11948575;
  /* 1194854d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948550 push ecx */
  push32((uint32_t)(ECX));
  /* 11948551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948554 push edx */
  push32((uint32_t)(EDX));
  /* 11948555 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948558 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1194855a push ecx */
  push32((uint32_t)(ECX));
  /* 1194855b call 0x11948590 */
  push32(0x11948560u); f_11948590();
  /* 11948560 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11948565 jne 0x11948575 */
  if (!C.zf) goto L_11948575;
  /* 11948567 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1194856a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1194856c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194856f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11948573 jmp 0x11948582 */
  goto L_11948582;
L_11948575:;
  /* 11948575 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948578 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194857b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1194857e jmp 0x11948521 */
  goto L_11948521;
L_11948580:;
  /* 11948580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11948582:;
  /* 11948582 mov esp, ebp */
  ESP = (EBP);
  /* 11948584 pop ebp */
  EBP = (pop32());
  /* 11948585 ret  */
  ESPCHK(0x119484c0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11948590 (79 bytes, 32 insns) */
void f_11948590(void) {
  FTRACE(0x11948590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948590 push ebp */
  push32((uint32_t)(EBP));
  /* 11948591 mov ebp, esp */
  EBP = (ESP);
  /* 11948593 push ecx */
  push32((uint32_t)(ECX));
  /* 11948594 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948598 jne 0x1194859e */
  if (!C.zf) goto L_1194859e;
  /* 1194859a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194859c jmp 0x119485db */
  goto L_119485db;
L_1194859e:;
  /* 1194859e mov eax, dword ptr [0x11966f24] */
  EAX = (r32((uint32_t)(0x11966f24)));
  /* 119485a3 push eax */
  push32((uint32_t)(EAX));
  /* 119485a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119485a7 push ecx */
  push32((uint32_t)(ECX));
  /* 119485a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119485ab push edx */
  push32((uint32_t)(EDX));
  /* 119485ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119485af push eax */
  push32((uint32_t)(EAX));
  /* 119485b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119485b3 push ecx */
  push32((uint32_t)(ECX));
  /* 119485b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119485b6 mov edx, dword ptr [0x119671c4] */
  EDX = (r32((uint32_t)(0x119671c4)));
  /* 119485bc push edx */
  push32((uint32_t)(EDX));
  /* 119485bd call 0x11948690 */
  push32(0x119485c2u); f_11948690();
  /* 119485c2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119485c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119485c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119485cc jne 0x119485d5 */
  if (!C.zf) goto L_119485d5;
  /* 119485ce mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 119485d3 jmp 0x119485db */
  goto L_119485db;
L_119485d5:;
  /* 119485d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119485d8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_119485db:;
  /* 119485db mov esp, ebp */
  ESP = (EBP);
  /* 119485dd pop ebp */
  EBP = (pop32());
  /* 119485de ret  */
  ESPCHK(0x11948590u, _esp0);
  ESP += 4; return;
}

/* FUN_100185e0 @ 0x119485e0 (174 bytes, 66 insns) */
void f_119485e0(void) {
  FTRACE(0x119485e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119485e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119485e1 mov ebp, esp */
  EBP = (ESP);
  /* 119485e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119485e6 mov eax, dword ptr [0x11965874] */
  EAX = (r32((uint32_t)(0x11965874)));
  /* 119485eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119485ee:;
  /* 119485ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119485f1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119485f4 je 0x11948688 */
  if (C.zf) goto L_11948688;
  /* 119485fa push 0 */
  push32((uint32_t)(0x0u));
  /* 119485fc push 0 */
  push32((uint32_t)(0x0u));
  /* 119485fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11948600 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948602 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11948604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948607 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11948609 push eax */
  push32((uint32_t)(EAX));
  /* 1194860a push 0 */
  push32((uint32_t)(0x0u));
  /* 1194860c push 1 */
  push32((uint32_t)(0x1u));
  /* 1194860e call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x11948614u);
  /* 11948614 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11948617 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194861b jne 0x11948622 */
  if (!C.zf) goto L_11948622;
  /* 1194861d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11948620 jmp 0x1194868a */
  goto L_1194868a;
L_11948622:;
  /* 11948622 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11948624 push 0x11961824 */
  push32((uint32_t)(0x11961824u));
  /* 11948629 push 2 */
  push32((uint32_t)(0x2u));
  /* 1194862b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194862e push ecx */
  push32((uint32_t)(ECX));
  /* 1194862f call 0x11938ae0 */
  push32(0x11948634u); f_11938ae0();
  /* 11948634 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948637 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1194863a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194863e jne 0x11948645 */
  if (!C.zf) goto L_11948645;
  /* 11948640 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11948643 jmp 0x1194868a */
  goto L_1194868a;
L_11948645:;
  /* 11948645 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11948649 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1194864c push edx */
  push32((uint32_t)(EDX));
  /* 1194864d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948650 push eax */
  push32((uint32_t)(EAX));
  /* 11948651 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11948653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948656 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11948658 push edx */
  push32((uint32_t)(EDX));
  /* 11948659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1194865b push 1 */
  push32((uint32_t)(0x1u));
  /* 1194865d call dword ptr [0x11968378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968378))), 0x11948663u);
  /* 11948663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11948665 jne 0x1194866c */
  if (!C.zf) goto L_1194866c;
  /* 11948667 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1194866a jmp 0x1194868a */
  goto L_1194868a;
L_1194866c:;
  /* 1194866c push 0 */
  push32((uint32_t)(0x0u));
  /* 1194866e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948671 push eax */
  push32((uint32_t)(EAX));
  /* 11948672 call 0x11948ae0 */
  push32(0x11948677u); f_11948ae0();
  /* 11948677 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194867a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1194867d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948680 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11948683 jmp 0x119485ee */
  goto L_119485ee;
L_11948688:;
  /* 11948688 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1194868a:;
  /* 1194868a mov esp, ebp */
  ESP = (EBP);
  /* 1194868c pop ebp */
  EBP = (pop32());
  /* 1194868d ret  */
  ESPCHK(0x119485e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018690 @ 0x11948690 (970 bytes, 340 insns) */
void f_11948690(void) {
  FTRACE(0x11948690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948690 push ebp */
  push32((uint32_t)(EBP));
  /* 11948691 mov ebp, esp */
  EBP = (ESP);
  /* 11948693 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11948695 push 0x11961878 */
  push32((uint32_t)(0x11961878u));
  /* 1194869a push 0x11941be8 */
  push32((uint32_t)(0x11941be8u));
  /* 1194869f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119486a5 push eax */
  push32((uint32_t)(EAX));
  /* 119486a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119486ad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119486b0 push ebx */
  push32((uint32_t)(EBX));
  /* 119486b1 push esi */
  push32((uint32_t)(ESI));
  /* 119486b2 push edi */
  push32((uint32_t)(EDI));
  /* 119486b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119486b6 cmp dword ptr [0x11965bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119486bd jne 0x11948716 */
  if (!C.zf) goto L_11948716;
  /* 119486bf push 1 */
  push32((uint32_t)(0x1u));
  /* 119486c1 push 0x11960ed0 */
  push32((uint32_t)(0x11960ed0u));
  /* 119486c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 119486c8 push 0x11960ed0 */
  push32((uint32_t)(0x11960ed0u));
  /* 119486cd push 0 */
  push32((uint32_t)(0x0u));
  /* 119486cf push 0 */
  push32((uint32_t)(0x0u));
  /* 119486d1 call dword ptr [0x119682dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682dc))), 0x119486d7u);
  /* 119486d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119486d9 je 0x119486e7 */
  if (C.zf) goto L_119486e7;
  /* 119486db mov dword ptr [0x11965bb4], 1 */
  w32((uint32_t)(0x11965bb4), (0x1u));
  /* 119486e5 jmp 0x11948716 */
  goto L_11948716;
L_119486e7:;
  /* 119486e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 119486e9 push 0x11960ecc */
  push32((uint32_t)(0x11960eccu));
  /* 119486ee push 1 */
  push32((uint32_t)(0x1u));
  /* 119486f0 push 0x11960ecc */
  push32((uint32_t)(0x11960eccu));
  /* 119486f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119486f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119486f9 call dword ptr [0x119682e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682e0))), 0x119486ffu);
  /* 119486ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11948701 je 0x1194870f */
  if (C.zf) goto L_1194870f;
  /* 11948703 mov dword ptr [0x11965bb4], 2 */
  w32((uint32_t)(0x11965bb4), (0x2u));
  /* 1194870d jmp 0x11948716 */
  goto L_11948716;
L_1194870f:;
  /* 1194870f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11948711 jmp 0x11948a74 */
  goto L_11948a74;
L_11948716:;
  /* 11948716 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194871a jle 0x1194872f */
  if ((C.zf||C.sf!=C.of)) goto L_1194872f;
  /* 1194871c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194871f push eax */
  push32((uint32_t)(EAX));
  /* 11948720 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11948723 push ecx */
  push32((uint32_t)(ECX));
  /* 11948724 call 0x11948a90 */
  push32(0x11948729u); f_11948a90();
  /* 11948729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194872c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1194872f:;
  /* 1194872f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948733 jle 0x11948748 */
  if ((C.zf||C.sf!=C.of)) goto L_11948748;
  /* 11948735 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11948738 push edx */
  push32((uint32_t)(EDX));
  /* 11948739 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1194873c push eax */
  push32((uint32_t)(EAX));
  /* 1194873d call 0x11948a90 */
  push32(0x11948742u); f_11948a90();
  /* 11948742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948745 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11948748:;
  /* 11948748 cmp dword ptr [0x11965bb4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11965bb4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194874f jne 0x11948774 */
  if (!C.zf) goto L_11948774;
  /* 11948751 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11948754 push ecx */
  push32((uint32_t)(ECX));
  /* 11948755 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11948758 push edx */
  push32((uint32_t)(EDX));
  /* 11948759 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194875c push eax */
  push32((uint32_t)(EAX));
  /* 1194875d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11948760 push ecx */
  push32((uint32_t)(ECX));
  /* 11948761 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948764 push edx */
  push32((uint32_t)(EDX));
  /* 11948765 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948768 push eax */
  push32((uint32_t)(EAX));
  /* 11948769 call dword ptr [0x119682e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682e0))), 0x1194876fu);
  /* 1194876f jmp 0x11948a74 */
  goto L_11948a74;
L_11948774:;
  /* 11948774 cmp dword ptr [0x11965bb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11965bb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194877b jne 0x11948a72 */
  if (!C.zf) goto L_11948a72;
  /* 11948781 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948785 jne 0x11948790 */
  if (!C.zf) goto L_11948790;
  /* 11948787 mov ecx, dword ptr [0x11965a60] */
  ECX = (r32((uint32_t)(0x11965a60)));
  /* 1194878d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11948790:;
  /* 11948790 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948794 je 0x119487a0 */
  if (C.zf) goto L_119487a0;
  /* 11948796 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194879a jne 0x1194891c */
  if (!C.zf) goto L_1194891c;
L_119487a0:;
  /* 119487a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119487a3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119487a6 jne 0x119487b2 */
  if (!C.zf) goto L_119487b2;
  /* 119487a8 mov eax, 2 */
  EAX = (0x2u);
  /* 119487ad jmp 0x11948a74 */
  goto L_11948a74;
L_119487b2:;
  /* 119487b2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119487b6 jle 0x119487c2 */
  if ((C.zf||C.sf!=C.of)) goto L_119487c2;
  /* 119487b8 mov eax, 1 */
  EAX = (0x1u);
  /* 119487bd jmp 0x11948a74 */
  goto L_11948a74;
L_119487c2:;
  /* 119487c2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119487c6 jle 0x119487d2 */
  if ((C.zf||C.sf!=C.of)) goto L_119487d2;
  /* 119487c8 mov eax, 3 */
  EAX = (0x3u);
  /* 119487cd jmp 0x11948a74 */
  goto L_11948a74;
L_119487d2:;
  /* 119487d2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 119487d5 push eax */
  push32((uint32_t)(EAX));
  /* 119487d6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 119487d9 push ecx */
  push32((uint32_t)(ECX));
  /* 119487da call dword ptr [0x11968338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11968338))), 0x119487e0u);
  /* 119487e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119487e2 jne 0x119487eb */
  if (!C.zf) goto L_119487eb;
  /* 119487e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119487e6 jmp 0x11948a74 */
  goto L_11948a74;
L_119487eb:;
  /* 119487eb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119487ef jne 0x119487f7 */
  if (!C.zf) goto L_119487f7;
  /* 119487f1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119487f5 je 0x11948824 */
  if (C.zf) goto L_11948824;
L_119487f7:;
  /* 119487f7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119487fb jne 0x11948803 */
  if (!C.zf) goto L_11948803;
  /* 119487fd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948801 je 0x11948824 */
  if (C.zf) goto L_11948824;
L_11948803:;
  /* 11948803 push 0x11961838 */
  push32((uint32_t)(0x11961838u));
  /* 11948808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1194880a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1194880f push 0x11961830 */
  push32((uint32_t)(0x11961830u));
  /* 11948814 push 2 */
  push32((uint32_t)(0x2u));
  /* 11948816 call 0x11937ba0 */
  push32(0x1194881bu); f_11937ba0();
  /* 1194881b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1194881e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948821 jne 0x11948824 */
  if (!C.zf) goto L_11948824;
  /* 11948823 int3  */
  x86_unimpl("int3 @ 0x11948823");
L_11948824:;
  /* 11948824 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11948826 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11948828 jne 0x119487eb */
  if (!C.zf) goto L_119487eb;
  /* 1194882a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194882e jle 0x119488a3 */
  if ((C.zf||C.sf!=C.of)) goto L_119488a3;
  /* 11948830 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948834 jae 0x11948840 */
  if (!C.cf) goto L_11948840;
  /* 11948836 mov eax, 3 */
  EAX = (0x3u);
  /* 1194883b jmp 0x11948a74 */
  goto L_11948a74;
L_11948840:;
  /* 11948840 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11948843 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11948846 jmp 0x11948851 */
  goto L_11948851;
L_11948848:;
  /* 11948848 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1194884b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1194884e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11948851:;
  /* 11948851 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11948854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11948856 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11948858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1194885a je 0x11948899 */
  if (C.zf) goto L_11948899;
  /* 1194885c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1194885f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11948861 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11948864 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11948866 je 0x11948899 */
  if (C.zf) goto L_11948899;
  /* 11948868 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194886b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1194886d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1194886f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11948872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11948874 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11948876 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948878 jl 0x11948897 */
  if ((C.sf!=C.of)) goto L_11948897;
  /* 1194887a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1194887d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1194887f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11948881 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11948884 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11948886 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11948889 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194888b jg 0x11948897 */
  if ((!C.zf&&C.sf==C.of)) goto L_11948897;
  /* 1194888d mov eax, 2 */
  EAX = (0x2u);
  /* 11948892 jmp 0x11948a74 */
  goto L_11948a74;
L_11948897:;
  /* 11948897 jmp 0x11948848 */
  goto L_11948848;
L_11948899:;
  /* 11948899 mov eax, 3 */
  EAX = (0x3u);
  /* 1194889e jmp 0x11948a74 */
  goto L_11948a74;
L_119488a3:;
  /* 119488a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119488a7 jle 0x1194891c */
  if ((C.zf||C.sf!=C.of)) goto L_1194891c;
  /* 119488a9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119488ad jae 0x119488b9 */
  if (!C.cf) goto L_119488b9;
  /* 119488af mov eax, 1 */
  EAX = (0x1u);
  /* 119488b4 jmp 0x11948a74 */
  goto L_11948a74;
L_119488b9:;
  /* 119488b9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 119488bc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 119488bf jmp 0x119488ca */
  goto L_119488ca;
L_119488c1:;
  /* 119488c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 119488c4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119488c7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_119488ca:;
  /* 119488ca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 119488cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119488cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119488d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119488d3 je 0x11948912 */
  if (C.zf) goto L_11948912;
  /* 119488d5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 119488d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119488da mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 119488dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119488df je 0x11948912 */
  if (C.zf) goto L_11948912;
  /* 119488e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119488e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119488e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119488e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 119488eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119488ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119488ef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119488f1 jl 0x11948910 */
  if ((C.sf!=C.of)) goto L_11948910;
  /* 119488f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119488f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119488f8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119488fa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 119488fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119488ff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11948902 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948904 jg 0x11948910 */
  if ((!C.zf&&C.sf==C.of)) goto L_11948910;
  /* 11948906 mov eax, 2 */
  EAX = (0x2u);
  /* 1194890b jmp 0x11948a74 */
  goto L_11948a74;
L_11948910:;
  /* 11948910 jmp 0x119488c1 */
  goto L_119488c1;
L_11948912:;
  /* 11948912 mov eax, 1 */
  EAX = (0x1u);
  /* 11948917 jmp 0x11948a74 */
  goto L_11948a74;
L_1194891c:;
  /* 1194891c push 0 */
  push32((uint32_t)(0x0u));
  /* 1194891e push 0 */
  push32((uint32_t)(0x0u));
  /* 11948920 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11948923 push ecx */
  push32((uint32_t)(ECX));
  /* 11948924 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11948927 push edx */
  push32((uint32_t)(EDX));
  /* 11948928 push 9 */
  push32((uint32_t)(0x9u));
  /* 1194892a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1194892d push eax */
  push32((uint32_t)(EAX));
  /* 1194892e call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x11948934u);
  /* 11948934 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11948937 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194893b jne 0x11948944 */
  if (!C.zf) goto L_11948944;
  /* 1194893d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194893f jmp 0x11948a74 */
  goto L_11948a74;
L_11948944:;
  /* 11948944 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1194894b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1194894e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11948950 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948953 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11948955 call 0x1193bc80 */
  push32(0x1194895au); f_1193bc80();
  /* 1194895a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 1194895d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11948960 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11948963 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11948966 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1194896d jmp 0x11948986 */
  goto L_11948986;
  /* 1194896f mov eax, 1 */
  EAX = (0x1u);
  /* 11948974 ret  */
  ESPCHK(0x11948690u, _esp0);
  ESP += 4; return;
  /* 11948975 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11948978 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1194897f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11948986:;
  /* 11948986 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1194898a jne 0x11948993 */
  if (!C.zf) goto L_11948993;
  /* 1194898c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1194898e jmp 0x11948a74 */
  goto L_11948a74;
L_11948993:;
  /* 11948993 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11948996 push edx */
  push32((uint32_t)(EDX));
  /* 11948997 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1194899a push eax */
  push32((uint32_t)(EAX));
  /* 1194899b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1194899e push ecx */
  push32((uint32_t)(ECX));
  /* 1194899f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119489a2 push edx */
  push32((uint32_t)(EDX));
  /* 119489a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119489a5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119489a8 push eax */
  push32((uint32_t)(EAX));
  /* 119489a9 call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x119489afu);
  /* 119489af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119489b1 jne 0x119489ba */
  if (!C.zf) goto L_119489ba;
  /* 119489b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119489b5 jmp 0x11948a74 */
  goto L_11948a74;
L_119489ba:;
  /* 119489ba push 0 */
  push32((uint32_t)(0x0u));
  /* 119489bc push 0 */
  push32((uint32_t)(0x0u));
  /* 119489be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119489c1 push ecx */
  push32((uint32_t)(ECX));
  /* 119489c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119489c5 push edx */
  push32((uint32_t)(EDX));
  /* 119489c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 119489c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119489cb push eax */
  push32((uint32_t)(EAX));
  /* 119489cc call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x119489d2u);
  /* 119489d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119489d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119489d9 jne 0x119489e2 */
  if (!C.zf) goto L_119489e2;
  /* 119489db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119489dd jmp 0x11948a74 */
  goto L_11948a74;
L_119489e2:;
  /* 119489e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119489e9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119489ec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119489ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119489f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119489f3 call 0x1193bc80 */
  push32(0x119489f8u); f_1193bc80();
  /* 119489f8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 119489fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119489fe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11948a01 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11948a04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11948a0b jmp 0x11948a24 */
  goto L_11948a24;
  /* 11948a0d mov eax, 1 */
  EAX = (0x1u);
  /* 11948a12 ret  */
  ESPCHK(0x11948690u, _esp0);
  ESP += 4; return;
  /* 11948a13 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11948a16 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11948a1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11948a24:;
  /* 11948a24 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948a28 jne 0x11948a2e */
  if (!C.zf) goto L_11948a2e;
  /* 11948a2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11948a2c jmp 0x11948a74 */
  goto L_11948a74;
L_11948a2e:;
  /* 11948a2e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11948a31 push edx */
  push32((uint32_t)(EDX));
  /* 11948a32 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11948a35 push eax */
  push32((uint32_t)(EAX));
  /* 11948a36 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11948a39 push ecx */
  push32((uint32_t)(ECX));
  /* 11948a3a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11948a3d push edx */
  push32((uint32_t)(EDX));
  /* 11948a3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11948a40 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11948a43 push eax */
  push32((uint32_t)(EAX));
  /* 11948a44 call dword ptr [0x1196832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1196832c))), 0x11948a4au);
  /* 11948a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11948a4c jne 0x11948a52 */
  if (!C.zf) goto L_11948a52;
  /* 11948a4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11948a50 jmp 0x11948a74 */
  goto L_11948a74;
L_11948a52:;
  /* 11948a52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11948a55 push ecx */
  push32((uint32_t)(ECX));
  /* 11948a56 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11948a59 push edx */
  push32((uint32_t)(EDX));
  /* 11948a5a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11948a5d push eax */
  push32((uint32_t)(EAX));
  /* 11948a5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11948a61 push ecx */
  push32((uint32_t)(ECX));
  /* 11948a62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948a65 push edx */
  push32((uint32_t)(EDX));
  /* 11948a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948a69 push eax */
  push32((uint32_t)(EAX));
  /* 11948a6a call dword ptr [0x119682dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682dc))), 0x11948a70u);
  /* 11948a70 jmp 0x11948a74 */
  goto L_11948a74;
L_11948a72:;
  /* 11948a72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11948a74:;
  /* 11948a74 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11948a77 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11948a7a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11948a81 pop edi */
  EDI = (pop32());
  /* 11948a82 pop esi */
  ESI = (pop32());
  /* 11948a83 pop ebx */
  EBX = (pop32());
  /* 11948a84 mov esp, ebp */
  ESP = (EBP);
  /* 11948a86 pop ebp */
  EBP = (pop32());
  /* 11948a87 ret  */
  ESPCHK(0x11948690u, _esp0);
  ESP += 4; return;
}

/* FUN_10018a90 @ 0x11948a90 (80 bytes, 32 insns) */
void f_11948a90(void) {
  FTRACE(0x11948a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11948a91 mov ebp, esp */
  EBP = (ESP);
  /* 11948a93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948a96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948a99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11948a9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948a9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11948aa2:;
  /* 11948aa2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948aa5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948aa8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948aab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11948aae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11948ab0 je 0x11948ac7 */
  if (C.zf) goto L_11948ac7;
  /* 11948ab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948ab5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11948ab8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11948aba je 0x11948ac7 */
  if (C.zf) goto L_11948ac7;
  /* 11948abc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948abf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948ac2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11948ac5 jmp 0x11948aa2 */
  goto L_11948aa2;
L_11948ac7:;
  /* 11948ac7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948aca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11948acd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11948acf jne 0x11948ad9 */
  if (!C.zf) goto L_11948ad9;
  /* 11948ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948ad4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948ad7 jmp 0x11948adc */
  goto L_11948adc;
L_11948ad9:;
  /* 11948ad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11948adc:;
  /* 11948adc mov esp, ebp */
  ESP = (EBP);
  /* 11948ade pop ebp */
  EBP = (pop32());
  /* 11948adf ret  */
  ESPCHK(0x11948a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10018ae0 @ 0x11948ae0 (736 bytes, 224 insns) */
void f_11948ae0(void) {
  FTRACE(0x11948ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11948ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11948ae3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948ae6 push esi */
  push32((uint32_t)(ESI));
  /* 11948ae7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948aeb je 0x11948b0c */
  if (C.zf) goto L_11948b0c;
  /* 11948aed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11948aef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948af2 push eax */
  push32((uint32_t)(EAX));
  /* 11948af3 call 0x11948f30 */
  push32(0x11948af8u); f_11948f30();
  /* 11948af8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948afb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11948afe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948b02 je 0x11948b0c */
  if (C.zf) goto L_11948b0c;
  /* 11948b04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948b07 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948b0a jne 0x11948b14 */
  if (!C.zf) goto L_11948b14;
L_11948b0c:;
  /* 11948b0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11948b0f jmp 0x11948dbb */
  goto L_11948dbb;
L_11948b14:;
  /* 11948b14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11948b17 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11948b1b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11948b1d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948b1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11948b20 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11948b23 mov ecx, dword ptr [0x1196586c] */
  ECX = (r32((uint32_t)(0x1196586c)));
  /* 11948b29 cmp ecx, dword ptr [0x11965870] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11965870))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948b2f jne 0x11948b45 */
  if (!C.zf) goto L_11948b45;
  /* 11948b31 mov edx, dword ptr [0x1196586c] */
  EDX = (r32((uint32_t)(0x1196586c)));
  /* 11948b37 push edx */
  push32((uint32_t)(EDX));
  /* 11948b38 call 0x11948e40 */
  push32(0x11948b3du); f_11948e40();
  /* 11948b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948b40 mov dword ptr [0x1196586c], eax */
  w32((uint32_t)(0x1196586c), (EAX));
L_11948b45:;
  /* 11948b45 cmp dword ptr [0x1196586c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1196586c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948b4c jne 0x11948c05 */
  if (!C.zf) goto L_11948c05;
  /* 11948b52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948b56 je 0x11948b77 */
  if (C.zf) goto L_11948b77;
  /* 11948b58 cmp dword ptr [0x11965874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948b5f je 0x11948b77 */
  if (C.zf) goto L_11948b77;
  /* 11948b61 call 0x119485e0 */
  push32(0x11948b66u); f_119485e0();
  /* 11948b66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11948b68 je 0x11948b72 */
  if (C.zf) goto L_11948b72;
  /* 11948b6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11948b6d jmp 0x11948dbb */
  goto L_11948dbb;
L_11948b72:;
  /* 11948b72 jmp 0x11948c05 */
  goto L_11948c05;
L_11948b77:;
  /* 11948b77 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948b7b je 0x11948b84 */
  if (C.zf) goto L_11948b84;
  /* 11948b7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11948b7f jmp 0x11948dbb */
  goto L_11948dbb;
L_11948b84:;
  /* 11948b84 cmp dword ptr [0x1196586c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1196586c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948b8b jne 0x11948bc4 */
  if (!C.zf) goto L_11948bc4;
  /* 11948b8d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11948b92 push 0x11961890 */
  push32((uint32_t)(0x11961890u));
  /* 11948b97 push 2 */
  push32((uint32_t)(0x2u));
  /* 11948b99 push 4 */
  push32((uint32_t)(0x4u));
  /* 11948b9b call 0x11938ae0 */
  push32(0x11948ba0u); f_11938ae0();
  /* 11948ba0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948ba3 mov dword ptr [0x1196586c], eax */
  w32((uint32_t)(0x1196586c), (EAX));
  /* 11948ba8 cmp dword ptr [0x1196586c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1196586c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948baf jne 0x11948bb9 */
  if (!C.zf) goto L_11948bb9;
  /* 11948bb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11948bb4 jmp 0x11948dbb */
  goto L_11948dbb;
L_11948bb9:;
  /* 11948bb9 mov eax, dword ptr [0x1196586c] */
  EAX = (r32((uint32_t)(0x1196586c)));
  /* 11948bbe mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11948bc4:;
  /* 11948bc4 cmp dword ptr [0x11965874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948bcb jne 0x11948c05 */
  if (!C.zf) goto L_11948c05;
  /* 11948bcd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11948bd2 push 0x11961890 */
  push32((uint32_t)(0x11961890u));
  /* 11948bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11948bd9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11948bdb call 0x11938ae0 */
  push32(0x11948be0u); f_11938ae0();
  /* 11948be0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948be3 mov dword ptr [0x11965874], eax */
  w32((uint32_t)(0x11965874), (EAX));
  /* 11948be8 cmp dword ptr [0x11965874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11965874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948bef jne 0x11948bf9 */
  if (!C.zf) goto L_11948bf9;
  /* 11948bf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11948bf4 jmp 0x11948dbb */
  goto L_11948dbb;
L_11948bf9:;
  /* 11948bf9 mov ecx, dword ptr [0x11965874] */
  ECX = (r32((uint32_t)(0x11965874)));
  /* 11948bff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11948c05:;
  /* 11948c05 mov edx, dword ptr [0x1196586c] */
  EDX = (r32((uint32_t)(0x1196586c)));
  /* 11948c0b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11948c0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11948c11 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948c14 push eax */
  push32((uint32_t)(EAX));
  /* 11948c15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948c18 push ecx */
  push32((uint32_t)(ECX));
  /* 11948c19 call 0x11948dc0 */
  push32(0x11948c1eu); f_11948dc0();
  /* 11948c1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948c21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11948c24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948c28 jl 0x11948cc1 */
  if ((C.sf!=C.of)) goto L_11948cc1;
  /* 11948c2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948c31 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948c34 je 0x11948cc1 */
  if (C.zf) goto L_11948cc1;
  /* 11948c3a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948c3e je 0x11948cb3 */
  if (C.zf) goto L_11948cb3;
  /* 11948c40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11948c42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948c45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948c48 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11948c4b push edx */
  push32((uint32_t)(EDX));
  /* 11948c4c call 0x11939570 */
  push32(0x11948c51u); f_11939570();
  /* 11948c51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948c54 jmp 0x11948c5f */
  goto L_11948c5f;
L_11948c56:;
  /* 11948c56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948c59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948c5c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11948c5f:;
  /* 11948c5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948c62 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948c65 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948c69 je 0x11948c80 */
  if (C.zf) goto L_11948c80;
  /* 11948c6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948c6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948c71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948c74 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11948c77 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11948c7b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11948c7e jmp 0x11948c56 */
  goto L_11948c56;
L_11948c80:;
  /* 11948c80 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11948c85 push 0x11961890 */
  push32((uint32_t)(0x11961890u));
  /* 11948c8a push 2 */
  push32((uint32_t)(0x2u));
  /* 11948c8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948c8f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11948c92 push eax */
  push32((uint32_t)(EAX));
  /* 11948c93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948c96 push ecx */
  push32((uint32_t)(ECX));
  /* 11948c97 call 0x11938f70 */
  push32(0x11948c9cu); f_11938f70();
  /* 11948c9c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948c9f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11948ca2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948ca6 je 0x11948cb1 */
  if (C.zf) goto L_11948cb1;
  /* 11948ca8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948cab mov dword ptr [0x1196586c], edx */
  w32((uint32_t)(0x1196586c), (EDX));
L_11948cb1:;
  /* 11948cb1 jmp 0x11948cbf */
  goto L_11948cbf;
L_11948cb3:;
  /* 11948cb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948cb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948cb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948cbc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11948cbf:;
  /* 11948cbf jmp 0x11948d34 */
  goto L_11948d34;
L_11948cc1:;
  /* 11948cc1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948cc5 jne 0x11948d2d */
  if (!C.zf) goto L_11948d2d;
  /* 11948cc7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948ccb jge 0x11948cd5 */
  if ((C.sf==C.of)) goto L_11948cd5;
  /* 11948ccd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948cd0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11948cd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11948cd5:;
  /* 11948cd5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11948cda push 0x11961890 */
  push32((uint32_t)(0x11961890u));
  /* 11948cdf push 2 */
  push32((uint32_t)(0x2u));
  /* 11948ce1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948ce4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11948ceb push edx */
  push32((uint32_t)(EDX));
  /* 11948cec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948cef push eax */
  push32((uint32_t)(EAX));
  /* 11948cf0 call 0x11938f70 */
  push32(0x11948cf5u); f_11938f70();
  /* 11948cf5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948cf8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11948cfb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948cff jne 0x11948d09 */
  if (!C.zf) goto L_11948d09;
  /* 11948d01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11948d04 jmp 0x11948dbb */
  goto L_11948dbb;
L_11948d09:;
  /* 11948d09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948d0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948d0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948d12 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11948d15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948d1b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11948d23 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948d26 mov dword ptr [0x1196586c], eax */
  w32((uint32_t)(0x1196586c), (EAX));
  /* 11948d2b jmp 0x11948d34 */
  goto L_11948d34;
L_11948d2d:;
  /* 11948d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11948d2f jmp 0x11948dbb */
  goto L_11948dbb;
L_11948d34:;
  /* 11948d34 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948d38 je 0x11948db9 */
  if (C.zf) goto L_11948db9;
  /* 11948d3a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11948d3f push 0x11961890 */
  push32((uint32_t)(0x11961890u));
  /* 11948d44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11948d46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948d49 push ecx */
  push32((uint32_t)(ECX));
  /* 11948d4a call 0x1193b910 */
  push32(0x11948d4fu); f_1193b910();
  /* 11948d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948d52 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948d55 push eax */
  push32((uint32_t)(EAX));
  /* 11948d56 call 0x11938ae0 */
  push32(0x11948d5bu); f_11938ae0();
  /* 11948d5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948d5e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11948d61 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948d65 je 0x11948db9 */
  if (C.zf) goto L_11948db9;
  /* 11948d67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948d6a push edx */
  push32((uint32_t)(EDX));
  /* 11948d6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11948d6e push eax */
  push32((uint32_t)(EAX));
  /* 11948d6f call 0x1193ba90 */
  push32(0x11948d74u); f_1193ba90();
  /* 11948d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948d77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11948d7a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948d7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11948d80 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948d82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11948d85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948d88 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11948d8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948d8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948d91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11948d94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11948d97 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11948d99 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948d9b not edx */
  EDX = (~(EDX));
  /* 11948d9d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11948da0 push edx */
  push32((uint32_t)(EDX));
  /* 11948da1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11948da4 push eax */
  push32((uint32_t)(EAX));
  /* 11948da5 call dword ptr [0x119682d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119682d8))), 0x11948dabu);
  /* 11948dab push 2 */
  push32((uint32_t)(0x2u));
  /* 11948dad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11948db0 push ecx */
  push32((uint32_t)(ECX));
  /* 11948db1 call 0x11939570 */
  push32(0x11948db6u); f_11939570();
  /* 11948db6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11948db9:;
  /* 11948db9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11948dbb:;
  /* 11948dbb pop esi */
  ESI = (pop32());
  /* 11948dbc mov esp, ebp */
  ESP = (EBP);
  /* 11948dbe pop ebp */
  EBP = (pop32());
  /* 11948dbf ret  */
  ESPCHK(0x11948ae0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11948dc0 (124 bytes, 47 insns) */
void f_11948dc0(void) {
  FTRACE(0x11948dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11948dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11948dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11948dc4 mov eax, dword ptr [0x1196586c] */
  EAX = (r32((uint32_t)(0x1196586c)));
  /* 11948dc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11948dcc jmp 0x11948dd7 */
  goto L_11948dd7;
L_11948dce:;
  /* 11948dce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948dd1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948dd4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11948dd7:;
  /* 11948dd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948dda cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948ddd je 0x11948e2a */
  if (C.zf) goto L_11948e2a;
  /* 11948ddf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948de2 push eax */
  push32((uint32_t)(EAX));
  /* 11948de3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948de6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11948de8 push edx */
  push32((uint32_t)(EDX));
  /* 11948de9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948dec push eax */
  push32((uint32_t)(EAX));
  /* 11948ded call 0x11948590 */
  push32(0x11948df2u); f_11948590();
  /* 11948df2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948df5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11948df7 jne 0x11948e28 */
  if (!C.zf) goto L_11948e28;
  /* 11948df9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948dfc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11948dfe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948e01 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11948e05 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948e08 je 0x11948e1a */
  if (C.zf) goto L_11948e1a;
  /* 11948e0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948e0d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11948e0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948e12 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11948e16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11948e18 jne 0x11948e28 */
  if (!C.zf) goto L_11948e28;
L_11948e1a:;
  /* 11948e1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948e1d sub eax, dword ptr [0x1196586c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196586c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948e23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11948e26 jmp 0x11948e38 */
  goto L_11948e38;
L_11948e28:;
  /* 11948e28 jmp 0x11948dce */
  goto L_11948dce;
L_11948e2a:;
  /* 11948e2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948e2d sub eax, dword ptr [0x1196586c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1196586c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948e33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11948e36 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11948e38:;
  /* 11948e38 mov esp, ebp */
  ESP = (EBP);
  /* 11948e3a pop ebp */
  EBP = (pop32());
  /* 11948e3b ret  */
  ESPCHK(0x11948dc0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11948e40 (238 bytes, 80 insns) */
void f_11948e40(void) {
  FTRACE(0x11948e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11948e41 mov ebp, esp */
  EBP = (ESP);
  /* 11948e43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948e46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11948e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948e50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11948e53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948e57 jne 0x11948e60 */
  if (!C.zf) goto L_11948e60;
  /* 11948e59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11948e5b jmp 0x11948f2a */
  goto L_11948f2a;
L_11948e60:;
  /* 11948e60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948e63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11948e65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948e68 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948e6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11948e6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11948e70 je 0x11948e7d */
  if (C.zf) goto L_11948e7d;
  /* 11948e72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11948e75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948e78 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11948e7b jmp 0x11948e60 */
  goto L_11948e60;
L_11948e7d:;
  /* 11948e7d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11948e82 push 0x11961890 */
  push32((uint32_t)(0x11961890u));
  /* 11948e87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11948e89 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11948e8c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11948e93 push eax */
  push32((uint32_t)(EAX));
  /* 11948e94 call 0x11938ae0 */
  push32(0x11948e99u); f_11938ae0();
  /* 11948e99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948e9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11948e9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948ea2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11948ea5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948ea9 jne 0x11948eb5 */
  if (!C.zf) goto L_11948eb5;
  /* 11948eab push 9 */
  push32((uint32_t)(0x9u));
  /* 11948ead call 0x11937a50 */
  push32(0x11948eb2u); f_11937a50();
  /* 11948eb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11948eb5:;
  /* 11948eb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948eb8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11948ebb:;
  /* 11948ebb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948ebe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948ec1 je 0x11948f1e */
  if (C.zf) goto L_11948f1e;
  /* 11948ec3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11948ec8 push 0x11961890 */
  push32((uint32_t)(0x11961890u));
  /* 11948ecd push 2 */
  push32((uint32_t)(0x2u));
  /* 11948ecf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948ed2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11948ed4 push edx */
  push32((uint32_t)(EDX));
  /* 11948ed5 call 0x1193b910 */
  push32(0x11948edau); f_1193b910();
  /* 11948eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948edd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948ee0 push eax */
  push32((uint32_t)(EAX));
  /* 11948ee1 call 0x11938ae0 */
  push32(0x11948ee6u); f_11938ae0();
  /* 11948ee6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948ee9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948eec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11948eee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948ef1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948ef4 je 0x11948f0a */
  if (C.zf) goto L_11948f0a;
  /* 11948ef6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948ef9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11948efb push ecx */
  push32((uint32_t)(ECX));
  /* 11948efc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948eff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11948f01 push eax */
  push32((uint32_t)(EAX));
  /* 11948f02 call 0x1193ba90 */
  push32(0x11948f07u); f_1193ba90();
  /* 11948f07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11948f0a:;
  /* 11948f0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11948f0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948f10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11948f13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948f16 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948f19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11948f1c jmp 0x11948ebb */
  goto L_11948ebb;
L_11948f1e:;
  /* 11948f1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11948f21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11948f27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11948f2a:;
  /* 11948f2a mov esp, ebp */
  ESP = (EBP);
  /* 11948f2c pop ebp */
  EBP = (pop32());
  /* 11948f2d ret  */
  ESPCHK(0x11948e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f30 @ 0x11948f30 (237 bytes, 81 insns) */
void f_11948f30(void) {
  FTRACE(0x11948f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11948f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11948f31 mov ebp, esp */
  EBP = (ESP);
  /* 11948f33 push ecx */
  push32((uint32_t)(ECX));
  /* 11948f34 cmp dword ptr [0x11966fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11966fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948f3b jne 0x11948f52 */
  if (!C.zf) goto L_11948f52;
  /* 11948f3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11948f40 push eax */
  push32((uint32_t)(EAX));
  /* 11948f41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948f44 push ecx */
  push32((uint32_t)(ECX));
  /* 11948f45 call 0x11949030 */
  push32(0x11948f4au); f_11949030();
  /* 11948f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948f4d jmp 0x11949019 */
  goto L_11949019;
L_11948f52:;
  /* 11948f52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11948f54 call 0x1193c4e0 */
  push32(0x11948f59u); f_1193c4e0();
  /* 11948f59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948f5c jmp 0x11948f67 */
  goto L_11948f67;
L_11948f5e:;
  /* 11948f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948f61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948f64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11948f67:;
  /* 11948f67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948f6a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11948f6e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11948f72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948f75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11948f7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11948f7d je 0x11948ffb */
  if (C.zf) goto L_11948ffb;
  /* 11948f7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948f82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11948f87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11948f89 mov cl, byte ptr [eax + 0x119670c1] */
  CL = (r8((uint32_t)(EAX + 0x119670c1)));
  /* 11948f8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11948f92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11948f94 je 0x11948fe6 */
  if (C.zf) goto L_11948fe6;
  /* 11948f96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948f99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11948f9c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11948f9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948fa2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11948fa4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11948fa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11948fa8 jne 0x11948fb8 */
  if (!C.zf) goto L_11948fb8;
  /* 11948faa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11948fac call 0x1193c580 */
  push32(0x11948fb1u); f_1193c580();
  /* 11948fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948fb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11948fb6 jmp 0x11949019 */
  goto L_11949019;
L_11948fb8:;
  /* 11948fb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948fbb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11948fc1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11948fc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948fc7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11948fc9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11948fcb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11948fcd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948fd0 jne 0x11948fe4 */
  if (!C.zf) goto L_11948fe4;
  /* 11948fd2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11948fd4 call 0x1193c580 */
  push32(0x11948fd9u); f_1193c580();
  /* 11948fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11948fdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11948fdf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11948fe2 jmp 0x11949019 */
  goto L_11949019;
L_11948fe4:;
  /* 11948fe4 jmp 0x11948ff6 */
  goto L_11948ff6;
L_11948fe6:;
  /* 11948fe6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11948fe9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11948fef cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11948ff2 jne 0x11948ff6 */
  if (!C.zf) goto L_11948ff6;
  /* 11948ff4 jmp 0x11948ffb */
  goto L_11948ffb;
L_11948ff6:;
  /* 11948ff6 jmp 0x11948f5e */
  goto L_11948f5e;
L_11948ffb:;
  /* 11948ffb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11948ffd call 0x1193c580 */
  push32(0x11949002u); f_1193c580();
  /* 11949002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11949005 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11949008 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1194900d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11949010 jne 0x11949017 */
  if (!C.zf) goto L_11949017;
  /* 11949012 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11949015 jmp 0x11949019 */
  goto L_11949019;
L_11949017:;
  /* 11949017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11949019:;
  /* 11949019 mov esp, ebp */
  ESP = (EBP);
  /* 1194901b pop ebp */
  EBP = (pop32());
  /* 1194901c ret  */
  ESPCHK(0x11948f30u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11949030 (193 bytes, 87 insns) */
void f_11949030(void) {
  FTRACE(0x11949030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11949030 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11949032 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11949036 push ebx */
  push32((uint32_t)(EBX));
  /* 11949037 mov ebx, eax */
  EBX = (EAX);
  /* 11949039 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1194903c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11949040 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11949046 je 0x1194905b */
  if (C.zf) goto L_1194905b;
L_11949048:;
  /* 11949048 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1194904a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1194904b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1194904d je 0x11949020 */
  if (C.zf) { jmp_ind(0x11949020u); return; }
  /* 1194904f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11949051 je 0x119490a4 */
  if (C.zf) goto L_119490a4;
  /* 11949053 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11949059 jne 0x11949048 */
  if (!C.zf) goto L_11949048;
L_1194905b:;
  /* 1194905b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1194905d push edi */
  push32((uint32_t)(EDI));
  /* 1194905e mov eax, ebx */
  EAX = (EBX);
  /* 11949060 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11949063 push esi */
  push32((uint32_t)(ESI));
  /* 11949064 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11949066:;
  /* 11949066 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11949068 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1194906d mov eax, ecx */
  EAX = (ECX);
  /* 1194906f mov esi, edi */
  ESI = (EDI);
  /* 11949071 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11949073 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11949075 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11949077 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1194907a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1194907d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1194907f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11949081 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11949084 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1194908a jne 0x119490a8 */
  if (!C.zf) goto L_119490a8;
  /* 1194908c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11949091 je 0x11949066 */
  if (C.zf) goto L_11949066;
  /* 11949093 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11949098 jne 0x119490a2 */
  if (!C.zf) goto L_119490a2;
  /* 1194909a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 119490a0 jne 0x11949066 */
  if (!C.zf) goto L_11949066;
L_119490a2:;
  /* 119490a2 pop esi */
  ESI = (pop32());
  /* 119490a3 pop edi */
  EDI = (pop32());
L_119490a4:;
  /* 119490a4 pop ebx */
  EBX = (pop32());
  /* 119490a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119490a7 ret  */
  ESPCHK(0x11949030u, _esp0);
  ESP += 4; return;
L_119490a8:;
  /* 119490a8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 119490ab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119490ad je 0x119490e5 */
  if (C.zf) goto L_119490e5;
  /* 119490af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119490b1 je 0x119490a2 */
  if (C.zf) goto L_119490a2;
  /* 119490b3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119490b5 je 0x119490de */
  if (C.zf) goto L_119490de;
  /* 119490b7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119490b9 je 0x119490a2 */
  if (C.zf) goto L_119490a2;
  /* 119490bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119490be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119490c0 je 0x119490d7 */
  if (C.zf) goto L_119490d7;
  /* 119490c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119490c4 je 0x119490a2 */
  if (C.zf) goto L_119490a2;
  /* 119490c6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119490c8 je 0x119490d0 */
  if (C.zf) goto L_119490d0;
  /* 119490ca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119490cc je 0x119490a2 */
  if (C.zf) goto L_119490a2;
  /* 119490ce jmp 0x11949066 */
  goto L_11949066;
L_119490d0:;
  /* 119490d0 pop esi */
  ESI = (pop32());
  /* 119490d1 pop edi */
  EDI = (pop32());
  /* 119490d2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 119490d5 pop ebx */
  EBX = (pop32());
  /* 119490d6 ret  */
  ESPCHK(0x11949030u, _esp0);
  ESP += 4; return;
L_119490d7:;
  /* 119490d7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 119490da pop esi */
  ESI = (pop32());
  /* 119490db pop edi */
  EDI = (pop32());
  /* 119490dc pop ebx */
  EBX = (pop32());
  /* 119490dd ret  */
  ESPCHK(0x11949030u, _esp0);
  ESP += 4; return;
L_119490de:;
  /* 119490de lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 119490e1 pop esi */
  ESI = (pop32());
  /* 119490e2 pop edi */
  EDI = (pop32());
  /* 119490e3 pop ebx */
  EBX = (pop32());
  /* 119490e4 ret  */
  ESPCHK(0x11949030u, _esp0);
  ESP += 4; return;
L_119490e5:;
  /* 119490e5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 119490e8 pop esi */
  ESI = (pop32());
  /* 119490e9 pop edi */
  EDI = (pop32());
  /* 119490ea pop ebx */
  EBX = (pop32());
  /* 119490eb ret  */
  ESPCHK(0x11949030u, _esp0);
  ESP += 4; return;
  /* 119490ec jmp dword ptr [0x11968390] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11968390)))); return;
}

/* RtlUnwind @ 0x1194923c (6 bytes, 1 insns) */
void f_1194923c(void) {
  FTRACE(0x1194923cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1194923c jmp dword ptr [0x11968314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11968314)))); return;
}

