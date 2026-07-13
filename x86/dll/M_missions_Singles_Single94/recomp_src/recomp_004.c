#include "recomp.h"

/* FUN_10014f00 @ 0x11fe4f00 (770 bytes, 175 insns) */
void f_11fe4f00(void) {
  FTRACE(0x11fe4f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe4f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe4f01 mov ebp, esp */
  EBP = (ESP);
  /* 11fe4f03 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe4f09 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11fe4f0f push eax */
  push32((uint32_t)(EAX));
  /* 11fe4f10 mov ecx, dword ptr [0x12010618] */
  ECX = (r32((uint32_t)(0x12010618)));
  /* 11fe4f16 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4f17 call dword ptr [0x12011384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011384))), 0x11fe4f1du);
  /* 11fe4f1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4f20 jne 0x11fe5139 */
  if (!C.zf) goto L_11fe5139;
  /* 11fe4f26 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11fe4f30 jmp 0x11fe4f41 */
  goto L_11fe4f41;
L_11fe4f32:;
  /* 11fe4f32 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe4f38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4f3b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11fe4f41:;
  /* 11fe4f41 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4f4b jae 0x11fe4f62 */
  if (!C.cf) goto L_11fe4f62;
  /* 11fe4f4d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe4f53 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11fe4f59 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11fe4f60 jmp 0x11fe4f32 */
  goto L_11fe4f32;
L_11fe4f62:;
  /* 11fe4f62 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11fe4f69 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11fe4f6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe4f72 jmp 0x11fe4f7d */
  goto L_11fe4f7d;
L_11fe4f74:;
  /* 11fe4f74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4f77 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4f7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe4f7d:;
  /* 11fe4f7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4f80 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe4f82 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe4f84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe4f86 je 0x11fe4fc8 */
  if (C.zf) goto L_11fe4fc8;
  /* 11fe4f88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4f8b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe4f8d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe4f8f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11fe4f95 jmp 0x11fe4fa6 */
  goto L_11fe4fa6;
L_11fe4f97:;
  /* 11fe4f97 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe4f9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4fa0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11fe4fa6:;
  /* 11fe4fa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe4fa9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe4fab mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11fe4fae cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe4fb4 ja 0x11fe4fc6 */
  if ((!C.cf&&!C.zf)) goto L_11fe4fc6;
  /* 11fe4fb6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe4fbc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11fe4fc4 jmp 0x11fe4f97 */
  goto L_11fe4f97;
L_11fe4fc6:;
  /* 11fe4fc6 jmp 0x11fe4f74 */
  goto L_11fe4f74;
L_11fe4fc8:;
  /* 11fe4fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4fca mov eax, dword ptr [0x120108a4] */
  EAX = (r32((uint32_t)(0x120108a4)));
  /* 11fe4fcf push eax */
  push32((uint32_t)(EAX));
  /* 11fe4fd0 mov ecx, dword ptr [0x12010618] */
  ECX = (r32((uint32_t)(0x12010618)));
  /* 11fe4fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4fd7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11fe4fdd push edx */
  push32((uint32_t)(EDX));
  /* 11fe4fde push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fe4fe3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11fe4fe9 push eax */
  push32((uint32_t)(EAX));
  /* 11fe4fea push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe4fec call 0x11fe75d0 */
  push32(0x11fe4ff1u); f_11fe75d0();
  /* 11fe4ff1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe4ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe4ff6 mov ecx, dword ptr [0x12010618] */
  ECX = (r32((uint32_t)(0x12010618)));
  /* 11fe4ffc push ecx */
  push32((uint32_t)(ECX));
  /* 11fe4ffd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fe5002 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11fe5008 push edx */
  push32((uint32_t)(EDX));
  /* 11fe5009 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fe500e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11fe5014 push eax */
  push32((uint32_t)(EAX));
  /* 11fe5015 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fe501a mov ecx, dword ptr [0x120108a4] */
  ECX = (r32((uint32_t)(0x120108a4)));
  /* 11fe5020 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe5021 call 0x11fe81e0 */
  push32(0x11fe5026u); f_11fe81e0();
  /* 11fe5026 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5029 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe502b mov edx, dword ptr [0x12010618] */
  EDX = (r32((uint32_t)(0x12010618)));
  /* 11fe5031 push edx */
  push32((uint32_t)(EDX));
  /* 11fe5032 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fe5037 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11fe503d push eax */
  push32((uint32_t)(EAX));
  /* 11fe503e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fe5043 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11fe5049 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe504a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11fe504f mov edx, dword ptr [0x120108a4] */
  EDX = (r32((uint32_t)(0x120108a4)));
  /* 11fe5055 push edx */
  push32((uint32_t)(EDX));
  /* 11fe5056 call 0x11fe81e0 */
  push32(0x11fe505bu); f_11fe81e0();
  /* 11fe505b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe505e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11fe5068 jmp 0x11fe5079 */
  goto L_11fe5079;
L_11fe506a:;
  /* 11fe506a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe5070 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5073 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11fe5079:;
  /* 11fe5079 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5083 jae 0x11fe5134 */
  if (!C.cf) goto L_11fe5134;
  /* 11fe5089 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe508f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe5091 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11fe5099 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe509c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe509e je 0x11fe50d6 */
  if (C.zf) goto L_11fe50d6;
  /* 11fe50a0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe50a6 mov cl, byte ptr [eax + 0x120107a1] */
  CL = (r8((uint32_t)(EAX + 0x120107a1)));
  /* 11fe50ac or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11fe50af mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe50b5 mov byte ptr [edx + 0x120107a1], cl */
  w8((uint32_t)(EDX + 0x120107a1), (CL));
  /* 11fe50bb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe50c1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe50c7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11fe50ce mov byte ptr [eax + 0x120106a0], dl */
  w8((uint32_t)(EAX + 0x120106a0), (DL));
  /* 11fe50d4 jmp 0x11fe512f */
  goto L_11fe512f;
L_11fe50d6:;
  /* 11fe50d6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe50dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe50de mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11fe50e6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe50e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe50eb je 0x11fe5122 */
  if (C.zf) goto L_11fe5122;
  /* 11fe50ed mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe50f3 mov al, byte ptr [edx + 0x120107a1] */
  AL = (r8((uint32_t)(EDX + 0x120107a1)));
  /* 11fe50f9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11fe50fb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe5101 mov byte ptr [ecx + 0x120107a1], al */
  w8((uint32_t)(ECX + 0x120107a1), (AL));
  /* 11fe5107 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe510d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe5113 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11fe511a mov byte ptr [edx + 0x120106a0], cl */
  w8((uint32_t)(EDX + 0x120106a0), (CL));
  /* 11fe5120 jmp 0x11fe512f */
  goto L_11fe512f;
L_11fe5122:;
  /* 11fe5122 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe5128 mov byte ptr [edx + 0x120106a0], 0 */
  w8((uint32_t)(EDX + 0x120106a0), (0x0u));
L_11fe512f:;
  /* 11fe512f jmp 0x11fe506a */
  goto L_11fe506a;
L_11fe5134:;
  /* 11fe5134 jmp 0x11fe51fe */
  goto L_11fe51fe;
L_11fe5139:;
  /* 11fe5139 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11fe5143 jmp 0x11fe5154 */
  goto L_11fe5154;
L_11fe5145:;
  /* 11fe5145 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe514b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe514e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11fe5154:;
  /* 11fe5154 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe515e jae 0x11fe51fe */
  if (!C.cf) goto L_11fe51fe;
  /* 11fe5164 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe516b jb 0x11fe51a8 */
  if (C.cf) goto L_11fe51a8;
  /* 11fe516d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5174 ja 0x11fe51a8 */
  if ((!C.cf&&!C.zf)) goto L_11fe51a8;
  /* 11fe5176 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe517c mov dl, byte ptr [ecx + 0x120107a1] */
  DL = (r8((uint32_t)(ECX + 0x120107a1)));
  /* 11fe5182 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11fe5185 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe518b mov byte ptr [eax + 0x120107a1], dl */
  w8((uint32_t)(EAX + 0x120107a1), (DL));
  /* 11fe5191 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe5197 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe519a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe51a0 mov byte ptr [edx + 0x120106a0], cl */
  w8((uint32_t)(EDX + 0x120106a0), (CL));
  /* 11fe51a6 jmp 0x11fe51f9 */
  goto L_11fe51f9;
L_11fe51a8:;
  /* 11fe51a8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe51af jb 0x11fe51ec */
  if (C.cf) goto L_11fe51ec;
  /* 11fe51b1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe51b8 ja 0x11fe51ec */
  if ((!C.cf&&!C.zf)) goto L_11fe51ec;
  /* 11fe51ba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe51c0 mov cl, byte ptr [eax + 0x120107a1] */
  CL = (r8((uint32_t)(EAX + 0x120107a1)));
  /* 11fe51c6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11fe51c9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe51cf mov byte ptr [edx + 0x120107a1], cl */
  w8((uint32_t)(EDX + 0x120107a1), (CL));
  /* 11fe51d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe51db sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe51de mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe51e4 mov byte ptr [ecx + 0x120106a0], al */
  w8((uint32_t)(ECX + 0x120106a0), (AL));
  /* 11fe51ea jmp 0x11fe51f9 */
  goto L_11fe51f9;
L_11fe51ec:;
  /* 11fe51ec mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11fe51f2 mov byte ptr [edx + 0x120106a0], 0 */
  w8((uint32_t)(EDX + 0x120106a0), (0x0u));
L_11fe51f9:;
  /* 11fe51f9 jmp 0x11fe5145 */
  goto L_11fe5145;
L_11fe51fe:;
  /* 11fe51fe mov esp, ebp */
  ESP = (EBP);
  /* 11fe5200 pop ebp */
  EBP = (pop32());
  /* 11fe5201 ret  */
  ESPCHK(0x11fe4f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015210 @ 0x11fe5210 (23 bytes, 9 insns) */
void f_11fe5210(void) {
  FTRACE(0x11fe5210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe5210 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe5211 mov ebp, esp */
  EBP = (ESP);
  /* 11fe5213 cmp dword ptr [0x1201069c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1201069c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe521a je 0x11fe5223 */
  if (C.zf) goto L_11fe5223;
  /* 11fe521c mov eax, dword ptr [0x12010618] */
  EAX = (r32((uint32_t)(0x12010618)));
  /* 11fe5221 jmp 0x11fe5225 */
  goto L_11fe5225;
L_11fe5223:;
  /* 11fe5223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe5225:;
  /* 11fe5225 pop ebp */
  EBP = (pop32());
  /* 11fe5226 ret  */
  ESPCHK(0x11fe5210u, _esp0);
  ESP += 4; return;
}

/* FUN_10015230 @ 0x11fe5230 (34 bytes, 10 insns) */
void f_11fe5230(void) {
  FTRACE(0x11fe5230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe5230 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe5231 mov ebp, esp */
  EBP = (ESP);
  /* 11fe5233 cmp dword ptr [0x12010a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe523a jne 0x11fe5250 */
  if (!C.zf) goto L_11fe5250;
  /* 11fe523c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11fe523e call 0x11fe4a50 */
  push32(0x11fe5243u); f_11fe4a50();
  /* 11fe5243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5246 mov dword ptr [0x12010a30], 1 */
  w32((uint32_t)(0x12010a30), (0x1u));
L_11fe5250:;
  /* 11fe5250 pop ebp */
  EBP = (pop32());
  /* 11fe5251 ret  */
  ESPCHK(0x11fe5230u, _esp0);
  ESP += 4; return;
}

/* FUN_10015260 @ 0x11fe5260 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11fe5260(void) {
  FTRACE(0x11fe5260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe5260 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe5261 mov ebp, esp */
  EBP = (ESP);
  /* 11fe5263 push edi */
  push32((uint32_t)(EDI));
  /* 11fe5264 push esi */
  push32((uint32_t)(ESI));
  /* 11fe5265 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe5268 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe526b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe526e mov eax, ecx */
  EAX = (ECX);
  /* 11fe5270 mov edx, ecx */
  EDX = (ECX);
  /* 11fe5272 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5274 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5276 jbe 0x11fe5280 */
  if ((C.cf||C.zf)) goto L_11fe5280;
  /* 11fe5278 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe527a jb 0x11fe53f8 */
  if (C.cf) goto L_11fe53f8;
L_11fe5280:;
  /* 11fe5280 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11fe5286 jne 0x11fe529c */
  if (!C.zf) goto L_11fe529c;
  /* 11fe5288 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe528b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe528e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5291 jb 0x11fe52bc */
  if (C.cf) goto L_11fe52bc;
  /* 11fe5293 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe5295 jmp dword ptr [edx*4 + 0x11fe53a8] */
  switch (EDX) {
    case 0: goto L_11fe53b8;
    case 1: goto L_11fe53c0;
    case 2: goto L_11fe53cc;
    case 3: goto L_11fe53e0;
    default: x86_unimpl("switch@0x11fe5295 out of table"); return;
  }
L_11fe529c:;
  /* 11fe529c mov eax, edi */
  EAX = (EDI);
  /* 11fe529e mov edx, 3 */
  EDX = (0x3u);
  /* 11fe52a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe52a6 jb 0x11fe52b4 */
  if (C.cf) goto L_11fe52b4;
  /* 11fe52a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe52ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe52ad jmp dword ptr [eax*4 + 0x11fe52c0] */
  switch (EAX) {
    case 1: goto L_11fe52d0;
    case 2: goto L_11fe52fc;
    case 3: goto L_11fe5320;
    default: x86_unimpl("switch@0x11fe52ad out of table"); return;
  }
L_11fe52b4:;
  /* 11fe52b4 jmp dword ptr [ecx*4 + 0x11fe53b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11fe53b8)))); return;
  /* 11fe52bb nop  */
  /* nop */
L_11fe52bc:;
  /* 11fe52bc jmp dword ptr [ecx*4 + 0x11fe533c] */
  switch (ECX) {
    case 0: goto L_11fe539f;
    case 1: goto L_11fe538c;
    case 2: goto L_11fe5384;
    case 3: goto L_11fe537c;
    case 4: goto L_11fe5374;
    case 5: goto L_11fe536c;
    case 6: goto L_11fe5364;
    case 7: goto L_11fe535c;
    default: x86_unimpl("switch@0x11fe52bc out of table"); return;
  }
  /* 11fe52c3 nop  */
  /* nop */
L_11fe52d0:;
  /* 11fe52d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe52d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe52d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe52d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe52d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe52dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe52df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe52e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe52e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe52e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe52eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe52ee jb 0x11fe52bc */
  if (C.cf) goto L_11fe52bc;
  /* 11fe52f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe52f2 jmp dword ptr [edx*4 + 0x11fe53a8] */
  switch (EDX) {
    case 0: goto L_11fe53b8;
    case 1: goto L_11fe53c0;
    case 2: goto L_11fe53cc;
    case 3: goto L_11fe53e0;
    default: x86_unimpl("switch@0x11fe52f2 out of table"); return;
  }
  /* 11fe52f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe52fc:;
  /* 11fe52fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe52fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe5300 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe5302 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe5305 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe5308 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe530b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe530e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5311 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5314 jb 0x11fe52bc */
  if (C.cf) goto L_11fe52bc;
  /* 11fe5316 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe5318 jmp dword ptr [edx*4 + 0x11fe53a8] */
  switch (EDX) {
    case 0: goto L_11fe53b8;
    case 1: goto L_11fe53c0;
    case 2: goto L_11fe53cc;
    case 3: goto L_11fe53e0;
    default: x86_unimpl("switch@0x11fe5318 out of table"); return;
  }
  /* 11fe531f nop  */
  /* nop */
L_11fe5320:;
  /* 11fe5320 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe5322 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe5324 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe5326 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11fe5327 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe532a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11fe532b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe532e jb 0x11fe52bc */
  if (C.cf) goto L_11fe52bc;
  /* 11fe5330 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe5332 jmp dword ptr [edx*4 + 0x11fe53a8] */
  switch (EDX) {
    case 0: goto L_11fe53b8;
    case 1: goto L_11fe53c0;
    case 2: goto L_11fe53cc;
    case 3: goto L_11fe53e0;
    default: x86_unimpl("switch@0x11fe5332 out of table"); return;
  }
  /* 11fe5339 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe535c:;
  /* 11fe535c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11fe5360 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11fe5364:;
  /* 11fe5364 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11fe5368 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11fe536c:;
  /* 11fe536c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11fe5370 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11fe5374:;
  /* 11fe5374 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11fe5378 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11fe537c:;
  /* 11fe537c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11fe5380 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11fe5384:;
  /* 11fe5384 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11fe5388 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11fe538c:;
  /* 11fe538c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11fe5390 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11fe5394 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11fe539b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe539d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11fe539f:;
  /* 11fe539f jmp dword ptr [edx*4 + 0x11fe53a8] */
  switch (EDX) {
    case 0: goto L_11fe53b8;
    case 1: goto L_11fe53c0;
    case 2: goto L_11fe53cc;
    case 3: goto L_11fe53e0;
    default: x86_unimpl("switch@0x11fe539f out of table"); return;
  }
  /* 11fe53a6 mov edi, edi */
  EDI = (EDI);
L_11fe53b8:;
  /* 11fe53b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe53bb pop esi */
  ESI = (pop32());
  /* 11fe53bc pop edi */
  EDI = (pop32());
  /* 11fe53bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe53be ret  */
  ESPCHK(0x11fe5260u, _esp0);
  ESP += 4; return;
  /* 11fe53bf nop  */
  /* nop */
L_11fe53c0:;
  /* 11fe53c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe53c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe53c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe53c7 pop esi */
  ESI = (pop32());
  /* 11fe53c8 pop edi */
  EDI = (pop32());
  /* 11fe53c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe53ca ret  */
  ESPCHK(0x11fe5260u, _esp0);
  ESP += 4; return;
  /* 11fe53cb nop  */
  /* nop */
L_11fe53cc:;
  /* 11fe53cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe53ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe53d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe53d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe53d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe53d9 pop esi */
  ESI = (pop32());
  /* 11fe53da pop edi */
  EDI = (pop32());
  /* 11fe53db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe53dc ret  */
  ESPCHK(0x11fe5260u, _esp0);
  ESP += 4; return;
  /* 11fe53dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe53e0:;
  /* 11fe53e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11fe53e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11fe53e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe53e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe53ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe53ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe53f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe53f3 pop esi */
  ESI = (pop32());
  /* 11fe53f4 pop edi */
  EDI = (pop32());
  /* 11fe53f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe53f6 ret  */
  ESPCHK(0x11fe5260u, _esp0);
  ESP += 4; return;
  /* 11fe53f7 nop  */
  /* nop */
L_11fe53f8:;
  /* 11fe53f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11fe53fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11fe5400 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11fe5406 jne 0x11fe542c */
  if (!C.zf) goto L_11fe542c;
  /* 11fe5408 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe540b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe540e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5411 jb 0x11fe5420 */
  if (C.cf) goto L_11fe5420;
  /* 11fe5413 std  */
  C.df=1;
  /* 11fe5414 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe5416 cld  */
  C.df=0;
  /* 11fe5417 jmp dword ptr [edx*4 + 0x11fe5540] */
  switch (EDX) {
    case 0: goto L_11fe5550;
    case 1: goto L_11fe5558;
    case 2: goto L_11fe5568;
    case 3: goto L_11fe557c;
    default: x86_unimpl("switch@0x11fe5417 out of table"); return;
  }
  /* 11fe541e mov edi, edi */
  EDI = (EDI);
L_11fe5420:;
  /* 11fe5420 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe5422 jmp dword ptr [ecx*4 + 0x11fe54f0] */
  switch (ECX) {
    case 0: goto L_11fe5537;
    default: x86_unimpl("switch@0x11fe5422 out of table"); return;
  }
  /* 11fe5429 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe542c:;
  /* 11fe542c mov eax, edi */
  EAX = (EDI);
  /* 11fe542e mov edx, 3 */
  EDX = (0x3u);
  /* 11fe5433 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5436 jb 0x11fe5444 */
  if (C.cf) goto L_11fe5444;
  /* 11fe5438 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe543b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe543d jmp dword ptr [eax*4 + 0x11fe5448] */
  switch (EAX) {
    case 1: goto L_11fe5458;
    case 2: goto L_11fe5478;
    case 3: goto L_11fe54a0;
    default: x86_unimpl("switch@0x11fe543d out of table"); return;
  }
L_11fe5444:;
  /* 11fe5444 jmp dword ptr [ecx*4 + 0x11fe5540] */
  switch (ECX) {
    case 0: goto L_11fe5550;
    case 1: goto L_11fe5558;
    case 2: goto L_11fe5568;
    case 3: goto L_11fe557c;
    default: x86_unimpl("switch@0x11fe5444 out of table"); return;
  }
  /* 11fe544b nop  */
  /* nop */
L_11fe5458:;
  /* 11fe5458 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe545b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe545d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe5460 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11fe5461 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe5464 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11fe5465 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5468 jb 0x11fe5420 */
  if (C.cf) goto L_11fe5420;
  /* 11fe546a std  */
  C.df=1;
  /* 11fe546b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe546d cld  */
  C.df=0;
  /* 11fe546e jmp dword ptr [edx*4 + 0x11fe5540] */
  switch (EDX) {
    case 0: goto L_11fe5550;
    case 1: goto L_11fe5558;
    case 2: goto L_11fe5568;
    case 3: goto L_11fe557c;
    default: x86_unimpl("switch@0x11fe546e out of table"); return;
  }
  /* 11fe5475 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe5478:;
  /* 11fe5478 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe547b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe547d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe5480 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe5483 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe5486 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe5489 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe548c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe548f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5492 jb 0x11fe5420 */
  if (C.cf) goto L_11fe5420;
  /* 11fe5494 std  */
  C.df=1;
  /* 11fe5495 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe5497 cld  */
  C.df=0;
  /* 11fe5498 jmp dword ptr [edx*4 + 0x11fe5540] */
  switch (EDX) {
    case 0: goto L_11fe5550;
    case 1: goto L_11fe5558;
    case 2: goto L_11fe5568;
    case 3: goto L_11fe557c;
    default: x86_unimpl("switch@0x11fe5498 out of table"); return;
  }
  /* 11fe549f nop  */
  /* nop */
L_11fe54a0:;
  /* 11fe54a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe54a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe54a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe54a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe54ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe54ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe54b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe54b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe54b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe54ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe54bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe54c0 jb 0x11fe5420 */
  if (C.cf) goto L_11fe5420;
  /* 11fe54c6 std  */
  C.df=1;
  /* 11fe54c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11fe54c9 cld  */
  C.df=0;
  /* 11fe54ca jmp dword ptr [edx*4 + 0x11fe5540] */
  switch (EDX) {
    case 0: goto L_11fe5550;
    case 1: goto L_11fe5558;
    case 2: goto L_11fe5568;
    case 3: goto L_11fe557c;
    default: x86_unimpl("switch@0x11fe54ca out of table"); return;
  }
  /* 11fe54d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11fe54d4 hlt  */
  x86_unimpl("hlt @ 0x11fe54d4");
  /* 11fe54d5 push esp */
  push32((uint32_t)(ESP));
  /* 11fe54d7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe54d9 push esp */
  push32((uint32_t)(ESP));
  /* 11fe54db adc dword ptr [edx*2 + 0x550c11fe], eax */
  { uint32_t _a=(r32((uint32_t)(EDX*2 + 0x550c11fe))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDX*2 + 0x550c11fe), (_r)); fl_add(_a,_b,_r,32); }
  /* 11fe54e3 adc dword ptr [edx*2 + 0x551c11fe], edx */
  { uint32_t _a=(r32((uint32_t)(EDX*2 + 0x551c11fe))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX*2 + 0x551c11fe), (_r)); fl_add(_a,_b,_r,32); }
  /* 11fe54ec and al, 0x55 */
  { uint32_t _r=(AL)&(0x55u); AL = (_r); fl_logic(_r,8); }
  /* 11fe54f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11fe54f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11fe54fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11fe5500 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11fe5504 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11fe5508 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11fe550c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11fe5510 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11fe5514 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11fe5518 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11fe551c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11fe5520 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11fe5524 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11fe5528 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11fe552c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11fe5533 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5535 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11fe5537:;
  /* 11fe5537 jmp dword ptr [edx*4 + 0x11fe5540] */
  switch (EDX) {
    case 0: goto L_11fe5550;
    case 1: goto L_11fe5558;
    case 2: goto L_11fe5568;
    case 3: goto L_11fe557c;
    default: x86_unimpl("switch@0x11fe5537 out of table"); return;
  }
  /* 11fe553e mov edi, edi */
  EDI = (EDI);
L_11fe5550:;
  /* 11fe5550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe5553 pop esi */
  ESI = (pop32());
  /* 11fe5554 pop edi */
  EDI = (pop32());
  /* 11fe5555 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe5556 ret  */
  ESPCHK(0x11fe5260u, _esp0);
  ESP += 4; return;
  /* 11fe5557 nop  */
  /* nop */
L_11fe5558:;
  /* 11fe5558 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe555b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe555e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe5561 pop esi */
  ESI = (pop32());
  /* 11fe5562 pop edi */
  EDI = (pop32());
  /* 11fe5563 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe5564 ret  */
  ESPCHK(0x11fe5260u, _esp0);
  ESP += 4; return;
  /* 11fe5565 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11fe5568:;
  /* 11fe5568 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe556b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe556e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe5571 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe5574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe5577 pop esi */
  ESI = (pop32());
  /* 11fe5578 pop edi */
  EDI = (pop32());
  /* 11fe5579 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe557a ret  */
  ESPCHK(0x11fe5260u, _esp0);
  ESP += 4; return;
  /* 11fe557b nop  */
  /* nop */
L_11fe557c:;
  /* 11fe557c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11fe557f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11fe5582 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11fe5585 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11fe5588 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11fe558b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11fe558e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe5591 pop esi */
  ESI = (pop32());
  /* 11fe5592 pop edi */
  EDI = (pop32());
  /* 11fe5593 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11fe5594 ret  */
  ESPCHK(0x11fe5260u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11fe55a0 (104 bytes, 43 insns) */
void f_11fe55a0(void) {
  FTRACE(0x11fe55a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe55a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe55a1 push esi */
  push32((uint32_t)(ESI));
  /* 11fe55a2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11fe55a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe55a8 jne 0x11fe55c2 */
  if (!C.zf) goto L_11fe55c2;
  /* 11fe55aa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11fe55ae mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11fe55b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe55b4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fe55b6 mov ebx, eax */
  EBX = (EAX);
  /* 11fe55b8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11fe55bc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fe55be mov edx, ebx */
  EDX = (EBX);
  /* 11fe55c0 jmp 0x11fe5603 */
  goto L_11fe5603;
L_11fe55c2:;
  /* 11fe55c2 mov ecx, eax */
  ECX = (EAX);
  /* 11fe55c4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11fe55c8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11fe55cc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11fe55d0:;
  /* 11fe55d0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11fe55d2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11fe55d4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe55d6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11fe55d8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe55da jne 0x11fe55d0 */
  if (!C.zf) goto L_11fe55d0;
  /* 11fe55dc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fe55de mov esi, eax */
  ESI = (EAX);
  /* 11fe55e0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fe55e4 mov ecx, eax */
  ECX = (EAX);
  /* 11fe55e6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11fe55ea mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fe55ec add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe55ee jb 0x11fe55fe */
  if (C.cf) goto L_11fe55fe;
  /* 11fe55f0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe55f4 ja 0x11fe55fe */
  if ((!C.cf&&!C.zf)) goto L_11fe55fe;
  /* 11fe55f6 jb 0x11fe55ff */
  if (C.cf) goto L_11fe55ff;
  /* 11fe55f8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe55fc jbe 0x11fe55ff */
  if ((C.cf||C.zf)) goto L_11fe55ff;
L_11fe55fe:;
  /* 11fe55fe dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11fe55ff:;
  /* 11fe55ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe5601 mov eax, esi */
  EAX = (ESI);
L_11fe5603:;
  /* 11fe5603 pop esi */
  ESI = (pop32());
  /* 11fe5604 pop ebx */
  EBX = (pop32());
  /* 11fe5605 ret 0x10 */
  ESPCHK(0x11fe55a0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11fe5610 (117 bytes, 44 insns) */
void f_11fe5610(void) {
  FTRACE(0x11fe5610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe5610 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe5611 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11fe5615 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5617 jne 0x11fe5631 */
  if (!C.zf) goto L_11fe5631;
  /* 11fe5619 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11fe561d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11fe5621 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe5623 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fe5625 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fe5629 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fe562b mov eax, edx */
  EAX = (EDX);
  /* 11fe562d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe562f jmp 0x11fe5681 */
  goto L_11fe5681;
L_11fe5631:;
  /* 11fe5631 mov ecx, eax */
  ECX = (EAX);
  /* 11fe5633 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11fe5637 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11fe563b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11fe563f:;
  /* 11fe563f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11fe5641 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11fe5643 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe5645 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11fe5647 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe5649 jne 0x11fe563f */
  if (!C.zf) goto L_11fe563f;
  /* 11fe564b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fe564d mov ecx, eax */
  ECX = (EAX);
  /* 11fe564f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fe5653 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11fe5654 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fe5658 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe565a jb 0x11fe566a */
  if (C.cf) goto L_11fe566a;
  /* 11fe565c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5660 ja 0x11fe566a */
  if ((!C.cf&&!C.zf)) goto L_11fe566a;
  /* 11fe5662 jb 0x11fe5672 */
  if (C.cf) goto L_11fe5672;
  /* 11fe5664 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5668 jbe 0x11fe5672 */
  if ((C.cf||C.zf)) goto L_11fe5672;
L_11fe566a:;
  /* 11fe566a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe566e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11fe5672:;
  /* 11fe5672 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5676 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe567a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe567c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe567e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11fe5681:;
  /* 11fe5681 pop ebx */
  EBX = (pop32());
  /* 11fe5682 ret 0x10 */
  ESPCHK(0x11fe5610u, _esp0);
  ESP += 20; return;
}

/* FUN_10015690 @ 0x11fe5690 (628 bytes, 214 insns) */
void f_11fe5690(void) {
  FTRACE(0x11fe5690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe5690 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe5691 mov ebp, esp */
  EBP = (ESP);
  /* 11fe5693 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5696 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe5697 push esi */
  push32((uint32_t)(ESI));
  /* 11fe5698 push edi */
  push32((uint32_t)(EDI));
L_11fe5699:;
  /* 11fe5699 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe569d jne 0x11fe56bd */
  if (!C.zf) goto L_11fe56bd;
  /* 11fe569f push 0x1200a100 */
  push32((uint32_t)(0x1200a100u));
  /* 11fe56a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe56a6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11fe56a8 push 0x1200a0f4 */
  push32((uint32_t)(0x1200a0f4u));
  /* 11fe56ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe56af call 0x11fd9d80 */
  push32(0x11fe56b4u); f_11fd9d80();
  /* 11fe56b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe56b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe56ba jne 0x11fe56bd */
  if (!C.zf) goto L_11fe56bd;
  /* 11fe56bc int3  */
  x86_unimpl("int3 @ 0x11fe56bc");
L_11fe56bd:;
  /* 11fe56bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe56bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe56c1 jne 0x11fe5699 */
  if (!C.zf) goto L_11fe5699;
  /* 11fe56c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe56c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe56c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe56cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11fe56cf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe56d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe56d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe56d8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe56de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe56e0 je 0x11fe56ef */
  if (C.zf) goto L_11fe56ef;
  /* 11fe56e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe56e5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fe56e8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe56eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe56ed je 0x11fe5705 */
  if (C.zf) goto L_11fe5705;
L_11fe56ef:;
  /* 11fe56ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe56f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fe56f5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11fe56f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe56fa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11fe56fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5700 jmp 0x11fe58fd */
  goto L_11fe58fd;
L_11fe5705:;
  /* 11fe5705 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5708 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fe570b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe570e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5710 je 0x11fe575c */
  if (C.zf) goto L_11fe575c;
  /* 11fe5712 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5715 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11fe571c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe571f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fe5722 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5727 je 0x11fe5745 */
  if (C.zf) goto L_11fe5745;
  /* 11fe5729 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe572c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe572f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe5732 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fe5734 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5737 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe573a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe573d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5740 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11fe5743 jmp 0x11fe575c */
  goto L_11fe575c;
L_11fe5745:;
  /* 11fe5745 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5748 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe574b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe574e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5751 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11fe5754 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5757 jmp 0x11fe58fd */
  goto L_11fe58fd;
L_11fe575c:;
  /* 11fe575c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe575f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe5762 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe5765 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5768 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11fe576b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe576e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe5771 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe5774 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5777 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11fe577a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe577d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11fe5784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe578b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe578e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe5791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5794 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fe5797 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe579d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe579f jne 0x11fe57cf */
  if (!C.zf) goto L_11fe57cf;
  /* 11fe57a1 cmp dword ptr [ebp - 8], 0x1200d8b8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1200d8b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe57a8 je 0x11fe57b3 */
  if (C.zf) goto L_11fe57b3;
  /* 11fe57aa cmp dword ptr [ebp - 8], 0x1200d8d8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1200d8d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe57b1 jne 0x11fe57c3 */
  if (!C.zf) goto L_11fe57c3;
L_11fe57b3:;
  /* 11fe57b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe57b6 push edx */
  push32((uint32_t)(EDX));
  /* 11fe57b7 call 0x11fea160 */
  push32(0x11fe57bcu); f_11fea160();
  /* 11fe57bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe57bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe57c1 jne 0x11fe57cf */
  if (!C.zf) goto L_11fe57cf;
L_11fe57c3:;
  /* 11fe57c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe57c6 push eax */
  push32((uint32_t)(EAX));
  /* 11fe57c7 call 0x11fea090 */
  push32(0x11fe57ccu); f_11fea090();
  /* 11fe57cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe57cf:;
  /* 11fe57cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe57d2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe57d5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe57db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe57dd je 0x11fe58bb */
  if (C.zf) goto L_11fe58bb;
L_11fe57e3:;
  /* 11fe57e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe57e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe57e9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11fe57eb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe57ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe57f0 jge 0x11fe5813 */
  if ((C.sf==C.of)) goto L_11fe5813;
  /* 11fe57f2 push 0x1200a0b4 */
  push32((uint32_t)(0x1200a0b4u));
  /* 11fe57f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe57f9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11fe57fe push 0x1200a0f4 */
  push32((uint32_t)(0x1200a0f4u));
  /* 11fe5803 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe5805 call 0x11fd9d80 */
  push32(0x11fe580au); f_11fd9d80();
  /* 11fe580a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe580d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5810 jne 0x11fe5813 */
  if (!C.zf) goto L_11fe5813;
  /* 11fe5812 int3  */
  x86_unimpl("int3 @ 0x11fe5812");
L_11fe5813:;
  /* 11fe5813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5815 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5817 jne 0x11fe57e3 */
  if (!C.zf) goto L_11fe57e3;
  /* 11fe5819 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe581c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe581f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11fe5821 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5824 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe5827 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe582a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe582d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5830 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5833 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe5835 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5838 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11fe583b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe583e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5841 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe5844 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5848 jle 0x11fe5866 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe5866;
  /* 11fe584a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe584d push ecx */
  push32((uint32_t)(ECX));
  /* 11fe584e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5851 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe5854 push eax */
  push32((uint32_t)(EAX));
  /* 11fe5855 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe5858 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe5859 call 0x11fe9d80 */
  push32(0x11fe585eu); f_11fe9d80();
  /* 11fe585e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5861 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe5864 jmp 0x11fe58ae */
  goto L_11fe58ae;
L_11fe5866:;
  /* 11fe5866 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe586a je 0x11fe5889 */
  if (C.zf) goto L_11fe5889;
  /* 11fe586c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe586f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11fe5872 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe5875 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5878 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe587b mov ecx, dword ptr [edx*4 + 0x120108e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120108e0)));
  /* 11fe5882 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5884 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fe5887 jmp 0x11fe5890 */
  goto L_11fe5890;
L_11fe5889:;
  /* 11fe5889 mov dword ptr [ebp - 0x14], 0x1200cf28 */
  w32((uint32_t)(EBP + -0x14), (0x1200cf28u));
L_11fe5890:;
  /* 11fe5890 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe5893 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11fe5897 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe589a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe589c je 0x11fe58ae */
  if (C.zf) goto L_11fe58ae;
  /* 11fe589e push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe58a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe58a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe58a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe58a6 call 0x11fe9c30 */
  push32(0x11fe58abu); f_11fe9c30();
  /* 11fe58ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe58ae:;
  /* 11fe58ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe58b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe58b4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fe58b7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11fe58b9 jmp 0x11fe58d9 */
  goto L_11fe58d9;
L_11fe58bb:;
  /* 11fe58bb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fe58c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe58c5 push edx */
  push32((uint32_t)(EDX));
  /* 11fe58c6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11fe58c9 push eax */
  push32((uint32_t)(EAX));
  /* 11fe58ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe58cd push ecx */
  push32((uint32_t)(ECX));
  /* 11fe58ce call 0x11fe9d80 */
  push32(0x11fe58d3u); f_11fe9d80();
  /* 11fe58d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe58d6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fe58d9:;
  /* 11fe58d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe58dc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe58df je 0x11fe58f5 */
  if (C.zf) goto L_11fe58f5;
  /* 11fe58e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe58e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fe58e7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe58ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe58ed mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11fe58f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe58f3 jmp 0x11fe58fd */
  goto L_11fe58fd;
L_11fe58f5:;
  /* 11fe58f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe58f8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11fe58fd:;
  /* 11fe58fd pop edi */
  EDI = (pop32());
  /* 11fe58fe pop esi */
  ESI = (pop32());
  /* 11fe58ff pop ebx */
  EBX = (pop32());
  /* 11fe5900 mov esp, ebp */
  ESP = (EBP);
  /* 11fe5902 pop ebp */
  EBP = (pop32());
  /* 11fe5903 ret  */
  ESPCHK(0x11fe5690u, _esp0);
  ESP += 4; return;
}

/* FUN_10015910 @ 0x11fe5910 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11fe5910(void) {
  FTRACE(0x11fe5910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe5910 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe5911 mov ebp, esp */
  EBP = (ESP);
  /* 11fe5913 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5919 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe591a push esi */
  push32((uint32_t)(ESI));
  /* 11fe591b push edi */
  push32((uint32_t)(EDI));
  /* 11fe591c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fe5923 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11fe592d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11fe5934:;
  /* 11fe5934 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe5937 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe5939 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11fe593c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5940 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe5943 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5946 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11fe5949 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe594b je 0x11fe6527 */
  if (C.zf) goto L_11fe6527;
  /* 11fe5951 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5958 jl 0x11fe6527 */
  if ((C.sf!=C.of)) goto L_11fe6527;
  /* 11fe595e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5962 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5965 jl 0x11fe5986 */
  if ((C.sf!=C.of)) goto L_11fe5986;
  /* 11fe5967 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe596b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe596e jg 0x11fe5986 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe5986;
  /* 11fe5970 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5974 movsx ecx, byte ptr [eax + 0x1200a0ec] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1200a0ec))));
  /* 11fe597b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe597e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11fe5984 jmp 0x11fe5990 */
  goto L_11fe5990;
L_11fe5986:;
  /* 11fe5986 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11fe5990:;
  /* 11fe5990 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11fe5996 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe5999 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe599c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe599f movsx edx, byte ptr [ecx + eax*8 + 0x1200a10c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1200a10c))));
  /* 11fe59a7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11fe59aa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fe59ad mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe59b0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11fe59b6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe59bd ja 0x11fe6522 */
  if ((!C.cf&&!C.zf)) goto L_11fe6522;
  /* 11fe59c3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11fe59c9 jmp dword ptr [ecx*4 + 0x11fe6534] */
  switch (ECX) {
    case 0: goto L_11fe59d0;
    case 1: goto L_11fe5a6a;
    case 2: goto L_11fe5aac;
    case 3: goto L_11fe5b1b;
    case 4: goto L_11fe5b73;
    case 5: goto L_11fe5b82;
    case 6: goto L_11fe5bce;
    case 7: goto L_11fe5c61;
    case 8: goto L_11fe5af8;
    case 9: goto L_11fe5b03;
    case 10: goto L_11fe5aee;
    case 11: goto L_11fe5ae3;
    case 12: goto L_11fe5b0e;
    case 13: goto L_11fe5b16;
    default: x86_unimpl("switch@0x11fe59c9 out of table"); return;
  }
L_11fe59d0:;
  /* 11fe59d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11fe59d7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe59da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe59e0 mov eax, dword ptr [0x1200cfec] */
  EAX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe59e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe59e7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11fe59eb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe59f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe59f3 je 0x11fe5a4d */
  if (C.zf) goto L_11fe5a4d;
  /* 11fe59f5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11fe59fb push edx */
  push32((uint32_t)(EDX));
  /* 11fe59fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe59ff push eax */
  push32((uint32_t)(EAX));
  /* 11fe5a00 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5a04 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe5a05 call 0x11fe6640 */
  push32(0x11fe5a0au); f_11fe6640();
  /* 11fe5a0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5a0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe5a10 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe5a12 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11fe5a15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe5a18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5a1b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11fe5a1e:;
  /* 11fe5a1e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5a22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe5a24 jne 0x11fe5a47 */
  if (!C.zf) goto L_11fe5a47;
  /* 11fe5a26 push 0x1200a18c */
  push32((uint32_t)(0x1200a18cu));
  /* 11fe5a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe5a2d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11fe5a32 push 0x1200a180 */
  push32((uint32_t)(0x1200a180u));
  /* 11fe5a37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe5a39 call 0x11fd9d80 */
  push32(0x11fe5a3eu); f_11fd9d80();
  /* 11fe5a3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5a41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5a44 jne 0x11fe5a47 */
  if (!C.zf) goto L_11fe5a47;
  /* 11fe5a46 int3  */
  x86_unimpl("int3 @ 0x11fe5a46");
L_11fe5a47:;
  /* 11fe5a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5a4b jne 0x11fe5a1e */
  if (!C.zf) goto L_11fe5a1e;
L_11fe5a4d:;
  /* 11fe5a4d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11fe5a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe5a54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe5a57 push edx */
  push32((uint32_t)(EDX));
  /* 11fe5a58 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5a5c push eax */
  push32((uint32_t)(EAX));
  /* 11fe5a5d call 0x11fe6640 */
  push32(0x11fe5a62u); f_11fe6640();
  /* 11fe5a62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5a65 jmp 0x11fe6522 */
  goto L_11fe6522;
L_11fe5a6a:;
  /* 11fe5a6a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe5a71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5a74 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11fe5a7a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11fe5a80 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11fe5a86 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11fe5a8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe5a8f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe5a96 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11fe5aa0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11fe5aa7 jmp 0x11fe6522 */
  goto L_11fe6522;
L_11fe5aac:;
  /* 11fe5aac movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5ab0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11fe5ab6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11fe5abc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5abf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11fe5ac5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5acc ja 0x11fe5b16 */
  if ((!C.cf&&!C.zf)) goto L_11fe5b16;
  /* 11fe5ace mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11fe5ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5ad6 mov al, byte ptr [ecx + 0x11fe656c] */
  AL = (r8((uint32_t)(ECX + 0x11fe656c)));
  /* 11fe5adc jmp dword ptr [eax*4 + 0x11fe6554] */
  switch (EAX) {
    case 0: goto L_11fe5af8;
    case 1: goto L_11fe5b03;
    case 2: goto L_11fe5aee;
    case 3: goto L_11fe5ae3;
    case 4: goto L_11fe5b0e;
    case 5: goto L_11fe5b16;
    default: x86_unimpl("switch@0x11fe5adc out of table"); return;
  }
L_11fe5ae3:;
  /* 11fe5ae3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5ae6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe5ae9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe5aec jmp 0x11fe5b16 */
  goto L_11fe5b16;
L_11fe5aee:;
  /* 11fe5aee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5af1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11fe5af3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe5af6 jmp 0x11fe5b16 */
  goto L_11fe5b16;
L_11fe5af8:;
  /* 11fe5af8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5afb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe5afe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe5b01 jmp 0x11fe5b16 */
  goto L_11fe5b16;
L_11fe5b03:;
  /* 11fe5b03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5b06 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11fe5b09 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe5b0c jmp 0x11fe5b16 */
  goto L_11fe5b16;
L_11fe5b0e:;
  /* 11fe5b0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5b11 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11fe5b13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe5b16:;
  /* 11fe5b16 jmp 0x11fe6522 */
  goto L_11fe6522;
L_11fe5b1b:;
  /* 11fe5b1b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5b1f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5b22 jne 0x11fe5b57 */
  if (!C.zf) goto L_11fe5b57;
  /* 11fe5b24 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11fe5b27 push edx */
  push32((uint32_t)(EDX));
  /* 11fe5b28 call 0x11fe6750 */
  push32(0x11fe5b2du); f_11fe6750();
  /* 11fe5b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5b30 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11fe5b36 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5b3d jge 0x11fe5b55 */
  if ((C.sf==C.of)) goto L_11fe5b55;
  /* 11fe5b3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5b42 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11fe5b44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe5b47 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11fe5b4d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe5b4f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11fe5b55:;
  /* 11fe5b55 jmp 0x11fe5b6e */
  goto L_11fe5b6e;
L_11fe5b57:;
  /* 11fe5b57 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11fe5b5d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe5b60 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5b64 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11fe5b68 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11fe5b6e:;
  /* 11fe5b6e jmp 0x11fe6522 */
  goto L_11fe6522;
L_11fe5b73:;
  /* 11fe5b73 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11fe5b7d jmp 0x11fe6522 */
  goto L_11fe6522;
L_11fe5b82:;
  /* 11fe5b82 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5b86 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5b89 jne 0x11fe5bb2 */
  if (!C.zf) goto L_11fe5bb2;
  /* 11fe5b8b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11fe5b8e push eax */
  push32((uint32_t)(EAX));
  /* 11fe5b8f call 0x11fe6750 */
  push32(0x11fe5b94u); f_11fe6750();
  /* 11fe5b94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5b97 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11fe5b9d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5ba4 jge 0x11fe5bb0 */
  if ((C.sf==C.of)) goto L_11fe5bb0;
  /* 11fe5ba6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11fe5bb0:;
  /* 11fe5bb0 jmp 0x11fe5bc9 */
  goto L_11fe5bc9;
L_11fe5bb2:;
  /* 11fe5bb2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11fe5bb8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe5bbb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5bbf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11fe5bc3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11fe5bc9:;
  /* 11fe5bc9 jmp 0x11fe6522 */
  goto L_11fe6522;
L_11fe5bce:;
  /* 11fe5bce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5bd2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11fe5bd8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11fe5bde sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5be1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11fe5be7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5bee ja 0x11fe5c5c */
  if ((!C.cf&&!C.zf)) goto L_11fe5c5c;
  /* 11fe5bf0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11fe5bf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5bf8 mov al, byte ptr [ecx + 0x11fe6591] */
  AL = (r8((uint32_t)(ECX + 0x11fe6591)));
  /* 11fe5bfe jmp dword ptr [eax*4 + 0x11fe657d] */
  switch (EAX) {
    case 0: goto L_11fe5c10;
    case 1: goto L_11fe5c49;
    case 2: goto L_11fe5c05;
    case 3: goto L_11fe5c53;
    case 4: goto L_11fe5c5c;
    default: x86_unimpl("switch@0x11fe5bfe out of table"); return;
  }
L_11fe5c05:;
  /* 11fe5c05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5c08 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe5c0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe5c0e jmp 0x11fe5c5c */
  goto L_11fe5c5c;
L_11fe5c10:;
  /* 11fe5c10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe5c13 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe5c16 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5c19 jne 0x11fe5c3b */
  if (!C.zf) goto L_11fe5c3b;
  /* 11fe5c1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe5c1e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fe5c22 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5c25 jne 0x11fe5c3b */
  if (!C.zf) goto L_11fe5c3b;
  /* 11fe5c27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe5c2a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5c2d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11fe5c30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5c33 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe5c36 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe5c39 jmp 0x11fe5c47 */
  goto L_11fe5c47;
L_11fe5c3b:;
  /* 11fe5c3b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11fe5c42 jmp 0x11fe59d0 */
  goto L_11fe59d0;
L_11fe5c47:;
  /* 11fe5c47 jmp 0x11fe5c5c */
  goto L_11fe5c5c;
L_11fe5c49:;
  /* 11fe5c49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5c4c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11fe5c4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe5c51 jmp 0x11fe5c5c */
  goto L_11fe5c5c;
L_11fe5c53:;
  /* 11fe5c53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5c56 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fe5c59 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe5c5c:;
  /* 11fe5c5c jmp 0x11fe6522 */
  goto L_11fe6522;
L_11fe5c61:;
  /* 11fe5c61 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5c65 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11fe5c6b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11fe5c71 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5c74 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11fe5c7a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5c81 ja 0x11fe6347 */
  if ((!C.cf&&!C.zf)) goto L_11fe6347;
  /* 11fe5c87 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11fe5c8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe5c8f mov cl, byte ptr [edx + 0x11fe65fc] */
  CL = (r8((uint32_t)(EDX + 0x11fe65fc)));
  /* 11fe5c95 jmp dword ptr [ecx*4 + 0x11fe65c0] */
  switch (ECX) {
    case 0: goto L_11fe5c9c;
    case 1: goto L_11fe5f30;
    case 2: goto L_11fe5dc0;
    case 3: goto L_11fe6069;
    case 4: goto L_11fe5d2b;
    case 5: goto L_11fe5cb1;
    case 6: goto L_11fe603b;
    case 7: goto L_11fe5f40;
    case 8: goto L_11fe5ee5;
    case 9: goto L_11fe60b5;
    case 10: goto L_11fe605f;
    case 11: goto L_11fe5dd6;
    case 12: goto L_11fe6053;
    case 13: goto L_11fe6075;
    case 14: goto L_11fe6347;
    default: x86_unimpl("switch@0x11fe5c95 out of table"); return;
  }
L_11fe5c9c:;
  /* 11fe5c9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5c9f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5ca6 jne 0x11fe5cb1 */
  if (!C.zf) goto L_11fe5cb1;
  /* 11fe5ca8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5cab or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fe5cae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe5cb1:;
  /* 11fe5cb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5cb4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe5cba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe5cbc je 0x11fe5cf7 */
  if (C.zf) goto L_11fe5cf7;
  /* 11fe5cbe lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11fe5cc1 push eax */
  push32((uint32_t)(EAX));
  /* 11fe5cc2 call 0x11fe6790 */
  push32(0x11fe5cc7u); f_11fe6790();
  /* 11fe5cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5cca mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11fe5cce mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11fe5cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe5cd3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11fe5cd9 push edx */
  push32((uint32_t)(EDX));
  /* 11fe5cda call 0x11fea3d0 */
  push32(0x11fe5cdfu); f_11fea3d0();
  /* 11fe5cdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5ce2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fe5ce5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5ce9 jge 0x11fe5cf5 */
  if ((C.sf==C.of)) goto L_11fe5cf5;
  /* 11fe5ceb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11fe5cf5:;
  /* 11fe5cf5 jmp 0x11fe5d1d */
  goto L_11fe5d1d;
L_11fe5cf7:;
  /* 11fe5cf7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11fe5cfa push eax */
  push32((uint32_t)(EAX));
  /* 11fe5cfb call 0x11fe6750 */
  push32(0x11fe5d00u); f_11fe6750();
  /* 11fe5d00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5d03 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11fe5d0a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11fe5d10 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11fe5d16 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11fe5d1d:;
  /* 11fe5d1d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11fe5d23 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11fe5d26 jmp 0x11fe6347 */
  goto L_11fe6347;
L_11fe5d2b:;
  /* 11fe5d2b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11fe5d2e push eax */
  push32((uint32_t)(EAX));
  /* 11fe5d2f call 0x11fe6750 */
  push32(0x11fe5d34u); f_11fe6750();
  /* 11fe5d34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5d37 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11fe5d3d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5d44 je 0x11fe5d52 */
  if (C.zf) goto L_11fe5d52;
  /* 11fe5d46 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11fe5d4c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5d50 jne 0x11fe5d6c */
  if (!C.zf) goto L_11fe5d6c;
L_11fe5d52:;
  /* 11fe5d52 mov edx, dword ptr [0x1200d4e0] */
  EDX = (r32((uint32_t)(0x1200d4e0)));
  /* 11fe5d58 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11fe5d5b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe5d5e push eax */
  push32((uint32_t)(EAX));
  /* 11fe5d5f call 0x11fdf750 */
  push32(0x11fe5d64u); f_11fdf750();
  /* 11fe5d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5d67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fe5d6a jmp 0x11fe5dbb */
  goto L_11fe5dbb;
L_11fe5d6c:;
  /* 11fe5d6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5d6f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe5d75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe5d77 je 0x11fe5d9c */
  if (C.zf) goto L_11fe5d9c;
  /* 11fe5d79 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11fe5d7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe5d82 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe5d85 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11fe5d8b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11fe5d8e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe5d90 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11fe5d93 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11fe5d9a jmp 0x11fe5dbb */
  goto L_11fe5dbb;
L_11fe5d9c:;
  /* 11fe5d9c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11fe5da3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11fe5da9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe5dac mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fe5daf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11fe5db5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11fe5db8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11fe5dbb:;
  /* 11fe5dbb jmp 0x11fe6347 */
  goto L_11fe6347;
L_11fe5dc0:;
  /* 11fe5dc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5dc3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe5dc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe5dcb jne 0x11fe5dd6 */
  if (!C.zf) goto L_11fe5dd6;
  /* 11fe5dcd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5dd0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe5dd3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe5dd6:;
  /* 11fe5dd6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5ddd jne 0x11fe5deb */
  if (!C.zf) goto L_11fe5deb;
  /* 11fe5ddf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11fe5de9 jmp 0x11fe5df7 */
  goto L_11fe5df7;
L_11fe5deb:;
  /* 11fe5deb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11fe5df1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11fe5df7:;
  /* 11fe5df7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11fe5dfd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11fe5e03 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11fe5e06 push edx */
  push32((uint32_t)(EDX));
  /* 11fe5e07 call 0x11fe6750 */
  push32(0x11fe5e0cu); f_11fe6750();
  /* 11fe5e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5e0f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe5e12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5e15 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5e1c je 0x11fe5e86 */
  if (C.zf) goto L_11fe5e86;
  /* 11fe5e1e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5e22 jne 0x11fe5e2d */
  if (!C.zf) goto L_11fe5e2d;
  /* 11fe5e24 mov ecx, dword ptr [0x1200d4e4] */
  ECX = (r32((uint32_t)(0x1200d4e4)));
  /* 11fe5e2a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11fe5e2d:;
  /* 11fe5e2d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11fe5e34 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe5e37 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11fe5e3d:;
  /* 11fe5e3d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11fe5e43 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11fe5e49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5e4c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11fe5e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5e54 je 0x11fe5e76 */
  if (C.zf) goto L_11fe5e76;
  /* 11fe5e56 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11fe5e5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5e5e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11fe5e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5e63 je 0x11fe5e76 */
  if (C.zf) goto L_11fe5e76;
  /* 11fe5e65 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11fe5e6b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5e6e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11fe5e74 jmp 0x11fe5e3d */
  goto L_11fe5e3d;
L_11fe5e76:;
  /* 11fe5e76 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11fe5e7c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5e7f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe5e81 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11fe5e84 jmp 0x11fe5ee0 */
  goto L_11fe5ee0;
L_11fe5e86:;
  /* 11fe5e86 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5e8a jne 0x11fe5e94 */
  if (!C.zf) goto L_11fe5e94;
  /* 11fe5e8c mov eax, dword ptr [0x1200d4e0] */
  EAX = (r32((uint32_t)(0x1200d4e0)));
  /* 11fe5e91 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11fe5e94:;
  /* 11fe5e94 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe5e97 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11fe5e9d:;
  /* 11fe5e9d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11fe5ea3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11fe5ea9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5eac mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11fe5eb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe5eb4 je 0x11fe5ed4 */
  if (C.zf) goto L_11fe5ed4;
  /* 11fe5eb6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11fe5ebc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe5ebf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe5ec1 je 0x11fe5ed4 */
  if (C.zf) goto L_11fe5ed4;
  /* 11fe5ec3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11fe5ec9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5ecc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11fe5ed2 jmp 0x11fe5e9d */
  goto L_11fe5e9d;
L_11fe5ed4:;
  /* 11fe5ed4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11fe5eda sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5edd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11fe5ee0:;
  /* 11fe5ee0 jmp 0x11fe6347 */
  goto L_11fe6347;
L_11fe5ee5:;
  /* 11fe5ee5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11fe5ee8 push edx */
  push32((uint32_t)(EDX));
  /* 11fe5ee9 call 0x11fe6750 */
  push32(0x11fe5eeeu); f_11fe6750();
  /* 11fe5eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5ef1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11fe5ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5efa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5eff je 0x11fe5f13 */
  if (C.zf) goto L_11fe5f13;
  /* 11fe5f01 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11fe5f07 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11fe5f0e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11fe5f11 jmp 0x11fe5f21 */
  goto L_11fe5f21;
L_11fe5f13:;
  /* 11fe5f13 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11fe5f19 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11fe5f1f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11fe5f21:;
  /* 11fe5f21 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11fe5f2b jmp 0x11fe6347 */
  goto L_11fe6347;
L_11fe5f30:;
  /* 11fe5f30 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11fe5f37 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11fe5f3a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe5f3d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11fe5f40:;
  /* 11fe5f40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5f43 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11fe5f45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe5f48 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11fe5f4e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fe5f51 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5f58 jge 0x11fe5f66 */
  if ((C.sf==C.of)) goto L_11fe5f66;
  /* 11fe5f5a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11fe5f64 jmp 0x11fe5f82 */
  goto L_11fe5f82;
L_11fe5f66:;
  /* 11fe5f66 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5f6d jne 0x11fe5f82 */
  if (!C.zf) goto L_11fe5f82;
  /* 11fe5f6f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5f73 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5f76 jne 0x11fe5f82 */
  if (!C.zf) goto L_11fe5f82;
  /* 11fe5f78 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11fe5f82:;
  /* 11fe5f82 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe5f85 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5f88 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11fe5f8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe5f8e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe5f91 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe5f93 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe5f96 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11fe5f9c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11fe5fa2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe5fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe5fa6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11fe5fac push edx */
  push32((uint32_t)(EDX));
  /* 11fe5fad movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5fb1 push eax */
  push32((uint32_t)(EAX));
  /* 11fe5fb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe5fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe5fb6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11fe5fbc push edx */
  push32((uint32_t)(EDX));
  /* 11fe5fbd call dword ptr [0x1200ce20] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200ce20))), 0x11fe5fc3u);
  /* 11fe5fc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe5fc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5fc9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5fce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5fd0 je 0x11fe5fe8 */
  if (C.zf) goto L_11fe5fe8;
  /* 11fe5fd2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5fd9 jne 0x11fe5fe8 */
  if (!C.zf) goto L_11fe5fe8;
  /* 11fe5fdb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe5fde push ecx */
  push32((uint32_t)(ECX));
  /* 11fe5fdf call dword ptr [0x1200ce2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200ce2c))), 0x11fe5fe5u);
  /* 11fe5fe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe5fe8:;
  /* 11fe5fe8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe5fec cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe5fef jne 0x11fe600a */
  if (!C.zf) goto L_11fe600a;
  /* 11fe5ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe5ff4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe5ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe5ffb jne 0x11fe600a */
  if (!C.zf) goto L_11fe600a;
  /* 11fe5ffd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe6000 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6001 call dword ptr [0x1200ce24] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200ce24))), 0x11fe6007u);
  /* 11fe6007 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe600a:;
  /* 11fe600a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe600d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe6010 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6013 jne 0x11fe6027 */
  if (!C.zf) goto L_11fe6027;
  /* 11fe6015 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6018 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fe601b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe601e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe6021 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6024 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11fe6027:;
  /* 11fe6027 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe602a push eax */
  push32((uint32_t)(EAX));
  /* 11fe602b call 0x11fdf750 */
  push32(0x11fe6030u); f_11fdf750();
  /* 11fe6030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6033 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fe6036 jmp 0x11fe6347 */
  goto L_11fe6347;
L_11fe603b:;
  /* 11fe603b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe603e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6041 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe6044 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11fe604e jmp 0x11fe60d5 */
  goto L_11fe60d5;
L_11fe6053:;
  /* 11fe6053 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11fe605d jmp 0x11fe60d5 */
  goto L_11fe60d5;
L_11fe605f:;
  /* 11fe605f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11fe6069:;
  /* 11fe6069 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11fe6073 jmp 0x11fe607f */
  goto L_11fe607f;
L_11fe6075:;
  /* 11fe6075 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11fe607f:;
  /* 11fe607f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11fe6089 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe608c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6092 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6094 je 0x11fe60b3 */
  if (C.zf) goto L_11fe60b3;
  /* 11fe6096 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11fe609d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11fe60a3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe60a6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11fe60ac mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11fe60b3:;
  /* 11fe60b3 jmp 0x11fe60d5 */
  goto L_11fe60d5;
L_11fe60b5:;
  /* 11fe60b5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11fe60bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe60c2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe60c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe60ca je 0x11fe60d5 */
  if (C.zf) goto L_11fe60d5;
  /* 11fe60cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe60cf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe60d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe60d5:;
  /* 11fe60d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe60d8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe60dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe60df je 0x11fe60fe */
  if (C.zf) goto L_11fe60fe;
  /* 11fe60e1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11fe60e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe60e5 call 0x11fe6770 */
  push32(0x11fe60eau); f_11fe6770();
  /* 11fe60ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe60ed mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11fe60f3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11fe60f9 jmp 0x11fe618f */
  goto L_11fe618f;
L_11fe60fe:;
  /* 11fe60fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6101 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6104 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6106 je 0x11fe6150 */
  if (C.zf) goto L_11fe6150;
  /* 11fe6108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe610b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe610e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6110 je 0x11fe6130 */
  if (C.zf) goto L_11fe6130;
  /* 11fe6112 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11fe6115 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6116 call 0x11fe6750 */
  push32(0x11fe611bu); f_11fe6750();
  /* 11fe611b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe611e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11fe6121 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe6122 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11fe6128 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11fe612e jmp 0x11fe614e */
  goto L_11fe614e;
L_11fe6130:;
  /* 11fe6130 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11fe6133 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6134 call 0x11fe6750 */
  push32(0x11fe6139u); f_11fe6750();
  /* 11fe6139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe613c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6141 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe6142 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11fe6148 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11fe614e:;
  /* 11fe614e jmp 0x11fe618f */
  goto L_11fe618f;
L_11fe6150:;
  /* 11fe6150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6153 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6158 je 0x11fe6175 */
  if (C.zf) goto L_11fe6175;
  /* 11fe615a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11fe615d push ecx */
  push32((uint32_t)(ECX));
  /* 11fe615e call 0x11fe6750 */
  push32(0x11fe6163u); f_11fe6750();
  /* 11fe6163 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6166 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe6167 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11fe616d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11fe6173 jmp 0x11fe618f */
  goto L_11fe618f;
L_11fe6175:;
  /* 11fe6175 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11fe6178 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6179 call 0x11fe6750 */
  push32(0x11fe617eu); f_11fe6750();
  /* 11fe617e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6181 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6183 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11fe6189 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11fe618f:;
  /* 11fe618f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6192 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6195 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6197 je 0x11fe61d7 */
  if (C.zf) goto L_11fe61d7;
  /* 11fe6199 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe61a0 jg 0x11fe61d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe61d7;
  /* 11fe61a2 jl 0x11fe61ad */
  if ((C.sf!=C.of)) goto L_11fe61ad;
  /* 11fe61a4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe61ab jae 0x11fe61d7 */
  if (!C.cf) goto L_11fe61d7;
L_11fe61ad:;
  /* 11fe61ad mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11fe61b3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe61b5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11fe61bb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe61be neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe61c0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11fe61c6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11fe61cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe61cf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe61d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe61d5 jmp 0x11fe61ef */
  goto L_11fe61ef;
L_11fe61d7:;
  /* 11fe61d7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11fe61dd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11fe61e3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11fe61e9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11fe61ef:;
  /* 11fe61ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe61f2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe61f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe61fa jne 0x11fe6217 */
  if (!C.zf) goto L_11fe6217;
  /* 11fe61fc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11fe6202 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11fe6208 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe620b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11fe6211 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11fe6217:;
  /* 11fe6217 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe621e jge 0x11fe622c */
  if ((C.sf==C.of)) goto L_11fe622c;
  /* 11fe6220 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11fe622a jmp 0x11fe6235 */
  goto L_11fe6235;
L_11fe622c:;
  /* 11fe622c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe622f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6232 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe6235:;
  /* 11fe6235 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11fe623b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6243 jne 0x11fe624c */
  if (!C.zf) goto L_11fe624c;
  /* 11fe6245 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11fe624c:;
  /* 11fe624c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11fe624f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11fe6252:;
  /* 11fe6252 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11fe6258 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11fe625e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6261 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11fe6267 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6269 jg 0x11fe627f */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe627f;
  /* 11fe626b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11fe6271 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6277 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6279 je 0x11fe6300 */
  if (C.zf) goto L_11fe6300;
L_11fe627f:;
  /* 11fe627f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11fe6285 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe6286 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6287 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6288 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11fe628e push edx */
  push32((uint32_t)(EDX));
  /* 11fe628f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11fe6295 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6296 call 0x11fe5610 */
  push32(0x11fe629bu); f_11fe5610();
  /* 11fe629b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe629e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11fe62a4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11fe62aa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe62ab push edx */
  push32((uint32_t)(EDX));
  /* 11fe62ac push eax */
  push32((uint32_t)(EAX));
  /* 11fe62ad mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11fe62b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe62b4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11fe62ba push edx */
  push32((uint32_t)(EDX));
  /* 11fe62bb call 0x11fe55a0 */
  push32(0x11fe62c0u); f_11fe55a0();
  /* 11fe62c0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11fe62c6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11fe62cc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe62d3 jle 0x11fe62e7 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe62e7;
  /* 11fe62d5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11fe62db add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe62e1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11fe62e7:;
  /* 11fe62e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe62ea mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11fe62f0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11fe62f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe62f5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe62f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe62fb jmp 0x11fe6252 */
  goto L_11fe6252;
L_11fe6300:;
  /* 11fe6300 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11fe6303 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6306 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fe6309 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe630c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe630f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11fe6312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6315 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe631a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe631c je 0x11fe6347 */
  if (C.zf) goto L_11fe6347;
  /* 11fe631e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe6321 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe6324 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6327 jne 0x11fe632f */
  if (!C.zf) goto L_11fe632f;
  /* 11fe6329 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe632d jne 0x11fe6347 */
  if (!C.zf) goto L_11fe6347;
L_11fe632f:;
  /* 11fe632f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe6332 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6335 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe6338 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe633b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11fe633e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe6341 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6344 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11fe6347:;
  /* 11fe6347 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe634e jne 0x11fe6522 */
  if (!C.zf) goto L_11fe6522;
  /* 11fe6354 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6357 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe635a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe635c je 0x11fe63ad */
  if (C.zf) goto L_11fe63ad;
  /* 11fe635e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6361 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6367 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6369 je 0x11fe637b */
  if (C.zf) goto L_11fe637b;
  /* 11fe636b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11fe6372 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11fe6379 jmp 0x11fe63ad */
  goto L_11fe63ad;
L_11fe637b:;
  /* 11fe637b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe637e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6381 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6383 je 0x11fe6395 */
  if (C.zf) goto L_11fe6395;
  /* 11fe6385 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11fe638c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11fe6393 jmp 0x11fe63ad */
  goto L_11fe63ad;
L_11fe6395:;
  /* 11fe6395 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6398 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe639b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe639d je 0x11fe63ad */
  if (C.zf) goto L_11fe63ad;
  /* 11fe639f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11fe63a6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11fe63ad:;
  /* 11fe63ad mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11fe63b3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe63b6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe63b9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11fe63bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe63c2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe63c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe63c7 jne 0x11fe63e5 */
  if (!C.zf) goto L_11fe63e5;
  /* 11fe63c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11fe63cf push eax */
  push32((uint32_t)(EAX));
  /* 11fe63d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe63d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe63d4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11fe63da push edx */
  push32((uint32_t)(EDX));
  /* 11fe63db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11fe63dd call 0x11fe66c0 */
  push32(0x11fe63e2u); f_11fe66c0();
  /* 11fe63e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe63e5:;
  /* 11fe63e5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11fe63eb push eax */
  push32((uint32_t)(EAX));
  /* 11fe63ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe63ef push ecx */
  push32((uint32_t)(ECX));
  /* 11fe63f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe63f3 push edx */
  push32((uint32_t)(EDX));
  /* 11fe63f4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11fe63fa push eax */
  push32((uint32_t)(EAX));
  /* 11fe63fb call 0x11fe6700 */
  push32(0x11fe6400u); f_11fe6700();
  /* 11fe6400 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6406 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6409 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe640b je 0x11fe6433 */
  if (C.zf) goto L_11fe6433;
  /* 11fe640d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6410 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6413 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6415 jne 0x11fe6433 */
  if (!C.zf) goto L_11fe6433;
  /* 11fe6417 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11fe641d push eax */
  push32((uint32_t)(EAX));
  /* 11fe641e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6421 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6422 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11fe6428 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6429 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11fe642b call 0x11fe66c0 */
  push32(0x11fe6430u); f_11fe66c0();
  /* 11fe6430 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe6433:;
  /* 11fe6433 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6437 je 0x11fe64e1 */
  if (C.zf) goto L_11fe64e1;
  /* 11fe643d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6441 jle 0x11fe64e1 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe64e1;
  /* 11fe6447 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe644a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11fe6450 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe6453 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11fe6459:;
  /* 11fe6459 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11fe645f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11fe6465 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6468 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11fe646e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6470 je 0x11fe64df */
  if (C.zf) goto L_11fe64df;
  /* 11fe6472 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11fe6478 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11fe647b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11fe6482 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11fe6489 push eax */
  push32((uint32_t)(EAX));
  /* 11fe648a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11fe6490 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6491 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11fe6497 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe649a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11fe64a0 call 0x11fea3d0 */
  push32(0x11fe64a5u); f_11fea3d0();
  /* 11fe64a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe64a8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11fe64ae cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe64b5 jg 0x11fe64b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe64b9;
  /* 11fe64b7 jmp 0x11fe64df */
  goto L_11fe64df;
L_11fe64b9:;
  /* 11fe64b9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11fe64bf push eax */
  push32((uint32_t)(EAX));
  /* 11fe64c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe64c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe64c4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11fe64ca push edx */
  push32((uint32_t)(EDX));
  /* 11fe64cb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11fe64d1 push eax */
  push32((uint32_t)(EAX));
  /* 11fe64d2 call 0x11fe6700 */
  push32(0x11fe64d7u); f_11fe6700();
  /* 11fe64d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe64da jmp 0x11fe6459 */
  goto L_11fe6459;
L_11fe64df:;
  /* 11fe64df jmp 0x11fe64fc */
  goto L_11fe64fc;
L_11fe64e1:;
  /* 11fe64e1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11fe64e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe64e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe64eb push edx */
  push32((uint32_t)(EDX));
  /* 11fe64ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe64ef push eax */
  push32((uint32_t)(EAX));
  /* 11fe64f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe64f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe64f4 call 0x11fe6700 */
  push32(0x11fe64f9u); f_11fe6700();
  /* 11fe64f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe64fc:;
  /* 11fe64fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe64ff and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6502 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6504 je 0x11fe6522 */
  if (C.zf) goto L_11fe6522;
  /* 11fe6506 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11fe650c push eax */
  push32((uint32_t)(EAX));
  /* 11fe650d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6510 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6511 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11fe6517 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6518 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11fe651a call 0x11fe66c0 */
  push32(0x11fe651fu); f_11fe66c0();
  /* 11fe651f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe6522:;
  /* 11fe6522 jmp 0x11fe5934 */
  goto L_11fe5934;
L_11fe6527:;
  /* 11fe6527 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11fe652d pop edi */
  EDI = (pop32());
  /* 11fe652e pop esi */
  ESI = (pop32());
  /* 11fe652f pop ebx */
  EBX = (pop32());
  /* 11fe6530 mov esp, ebp */
  ESP = (EBP);
  /* 11fe6532 pop ebp */
  EBP = (pop32());
  /* 11fe6533 ret  */
  ESPCHK(0x11fe5910u, _esp0);
  ESP += 4; return;
}

/* FUN_10016640 @ 0x11fe6640 (119 bytes, 44 insns) */
void f_11fe6640(void) {
  FTRACE(0x11fe6640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6640 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6641 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6643 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6644 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6647 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe664a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe664d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6650 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fe6653 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6656 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe665a jl 0x11fe6682 */
  if ((C.sf!=C.of)) goto L_11fe6682;
  /* 11fe665c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe665f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6661 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11fe6664 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11fe6666 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11fe666a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6670 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe6673 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6676 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6678 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe667b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe667e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fe6680 jmp 0x11fe6695 */
  goto L_11fe6695;
L_11fe6682:;
  /* 11fe6682 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6685 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6689 push eax */
  push32((uint32_t)(EAX));
  /* 11fe668a call 0x11fe5690 */
  push32(0x11fe668fu); f_11fe5690();
  /* 11fe668f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6692 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe6695:;
  /* 11fe6695 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6699 jne 0x11fe66a6 */
  if (!C.zf) goto L_11fe66a6;
  /* 11fe669b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe669e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11fe66a4 jmp 0x11fe66b3 */
  goto L_11fe66b3;
L_11fe66a6:;
  /* 11fe66a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe66a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe66ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe66ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe66b1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11fe66b3:;
  /* 11fe66b3 mov esp, ebp */
  ESP = (EBP);
  /* 11fe66b5 pop ebp */
  EBP = (pop32());
  /* 11fe66b6 ret  */
  ESPCHK(0x11fe6640u, _esp0);
  ESP += 4; return;
}

/* FUN_100166c0 @ 0x11fe66c0 (53 bytes, 23 insns) */
void f_11fe66c0(void) {
  FTRACE(0x11fe66c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe66c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe66c1 mov ebp, esp */
  EBP = (ESP);
L_11fe66c3:;
  /* 11fe66c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe66c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe66c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe66cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11fe66cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe66d1 jle 0x11fe66f3 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe66f3;
  /* 11fe66d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe66d6 push edx */
  push32((uint32_t)(EDX));
  /* 11fe66d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe66da push eax */
  push32((uint32_t)(EAX));
  /* 11fe66db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe66de push ecx */
  push32((uint32_t)(ECX));
  /* 11fe66df call 0x11fe6640 */
  push32(0x11fe66e4u); f_11fe6640();
  /* 11fe66e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe66e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe66ea cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe66ed jne 0x11fe66f1 */
  if (!C.zf) goto L_11fe66f1;
  /* 11fe66ef jmp 0x11fe66f3 */
  goto L_11fe66f3;
L_11fe66f1:;
  /* 11fe66f1 jmp 0x11fe66c3 */
  goto L_11fe66c3;
L_11fe66f3:;
  /* 11fe66f3 pop ebp */
  EBP = (pop32());
  /* 11fe66f4 ret  */
  ESPCHK(0x11fe66c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016700 @ 0x11fe6700 (74 bytes, 31 insns) */
void f_11fe6700(void) {
  FTRACE(0x11fe6700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6700 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6701 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6703 push ecx */
  push32((uint32_t)(ECX));
L_11fe6704:;
  /* 11fe6704 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6707 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe670a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe670d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11fe6710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6712 jle 0x11fe6746 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe6746;
  /* 11fe6714 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe6717 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6718 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe671b push eax */
  push32((uint32_t)(EAX));
  /* 11fe671c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe671f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe6722 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe6725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6728 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6729 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe672c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe672f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fe6732 call 0x11fe6640 */
  push32(0x11fe6737u); f_11fe6640();
  /* 11fe6737 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe673a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe673d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6740 jne 0x11fe6744 */
  if (!C.zf) goto L_11fe6744;
  /* 11fe6742 jmp 0x11fe6746 */
  goto L_11fe6746;
L_11fe6744:;
  /* 11fe6744 jmp 0x11fe6704 */
  goto L_11fe6704;
L_11fe6746:;
  /* 11fe6746 mov esp, ebp */
  ESP = (EBP);
  /* 11fe6748 pop ebp */
  EBP = (pop32());
  /* 11fe6749 ret  */
  ESPCHK(0x11fe6700u, _esp0);
  ESP += 4; return;
}

/* FUN_10016750 @ 0x11fe6750 (26 bytes, 12 insns) */
void f_11fe6750(void) {
  FTRACE(0x11fe6750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6750 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6751 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6756 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6758 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe675b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe675e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fe6760 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6763 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6765 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11fe6768 pop ebp */
  EBP = (pop32());
  /* 11fe6769 ret  */
  ESPCHK(0x11fe6750u, _esp0);
  ESP += 4; return;
}

/* FUN_10016770 @ 0x11fe6770 (31 bytes, 14 insns) */
void f_11fe6770(void) {
  FTRACE(0x11fe6770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6770 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6771 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6773 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6776 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6778 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe677b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe677e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fe6780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6783 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6785 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6788 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11fe678a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe678d pop ebp */
  EBP = (pop32());
  /* 11fe678e ret  */
  ESPCHK(0x11fe6770u, _esp0);
  ESP += 4; return;
}

/* FUN_10016790 @ 0x11fe6790 (27 bytes, 12 insns) */
void f_11fe6790(void) {
  FTRACE(0x11fe6790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6790 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6791 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6796 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6798 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe679b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe679e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fe67a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe67a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe67a5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11fe67a9 pop ebp */
  EBP = (pop32());
  /* 11fe67aa ret  */
  ESPCHK(0x11fe6790u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11fe67b0 (145 bytes, 42 insns) */
void f_11fe67b0(void) {
  FTRACE(0x11fe67b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe67b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe67b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe67b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe67b4 call 0x11fe6860 */
  push32(0x11fe67b9u); f_11fe6860();
  /* 11fe67b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe67bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fe67be mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe67c5 jmp 0x11fe67d0 */
  goto L_11fe67d0;
L_11fe67c7:;
  /* 11fe67c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe67ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe67cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe67d0:;
  /* 11fe67d0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe67d4 jae 0x11fe67fa */
  if (!C.cf) goto L_11fe67fa;
  /* 11fe67d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe67d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe67dc cmp ecx, dword ptr [eax*8 + 0x1200d4e8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1200d4e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe67e3 jne 0x11fe67f8 */
  if (!C.zf) goto L_11fe67f8;
  /* 11fe67e5 call 0x11fe6850 */
  push32(0x11fe67eau); f_11fe6850();
  /* 11fe67ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe67ed mov ecx, dword ptr [edx*8 + 0x1200d4ec] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1200d4ec)));
  /* 11fe67f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fe67f6 jmp 0x11fe683d */
  goto L_11fe683d;
L_11fe67f8:;
  /* 11fe67f8 jmp 0x11fe67c7 */
  goto L_11fe67c7;
L_11fe67fa:;
  /* 11fe67fa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe67fe jb 0x11fe6813 */
  if (C.cf) goto L_11fe6813;
  /* 11fe6800 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6804 ja 0x11fe6813 */
  if ((!C.cf&&!C.zf)) goto L_11fe6813;
  /* 11fe6806 call 0x11fe6850 */
  push32(0x11fe680bu); f_11fe6850();
  /* 11fe680b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11fe6811 jmp 0x11fe683d */
  goto L_11fe683d;
L_11fe6813:;
  /* 11fe6813 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe681a jb 0x11fe6832 */
  if (C.cf) goto L_11fe6832;
  /* 11fe681c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6823 ja 0x11fe6832 */
  if ((!C.cf&&!C.zf)) goto L_11fe6832;
  /* 11fe6825 call 0x11fe6850 */
  push32(0x11fe682au); f_11fe6850();
  /* 11fe682a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11fe6830 jmp 0x11fe683d */
  goto L_11fe683d;
L_11fe6832:;
  /* 11fe6832 call 0x11fe6850 */
  push32(0x11fe6837u); f_11fe6850();
  /* 11fe6837 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11fe683d:;
  /* 11fe683d mov esp, ebp */
  ESP = (EBP);
  /* 11fe683f pop ebp */
  EBP = (pop32());
  /* 11fe6840 ret  */
  ESPCHK(0x11fe67b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016850 @ 0x11fe6850 (13 bytes, 6 insns) */
void f_11fe6850(void) {
  FTRACE(0x11fe6850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6850 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6851 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6853 call 0x11fddec0 */
  push32(0x11fe6858u); f_11fddec0();
  /* 11fe6858 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe685b pop ebp */
  EBP = (pop32());
  /* 11fe685c ret  */
  ESPCHK(0x11fe6850u, _esp0);
  ESP += 4; return;
}

/* FUN_10016860 @ 0x11fe6860 (13 bytes, 6 insns) */
void f_11fe6860(void) {
  FTRACE(0x11fe6860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6860 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6861 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6863 call 0x11fddec0 */
  push32(0x11fe6868u); f_11fddec0();
  /* 11fe6868 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe686b pop ebp */
  EBP = (pop32());
  /* 11fe686c ret  */
  ESPCHK(0x11fe6860u, _esp0);
  ESP += 4; return;
}

/* FUN_10016870 @ 0x11fe6870 (85 bytes, 32 insns) */
void f_11fe6870(void) {
  FTRACE(0x11fe6870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6870 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6871 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6873 cmp dword ptr [0x1200d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe687a jne 0x11fe68a4 */
  if (!C.zf) goto L_11fe68a4;
  /* 11fe687c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe687f push eax */
  push32((uint32_t)(EAX));
  /* 11fe6880 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe6883 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6884 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6887 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6888 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe688a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe688c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe688f push eax */
  push32((uint32_t)(EAX));
  /* 11fe6890 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6893 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6894 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6897 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6898 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe689a call 0x11fe7320 */
  push32(0x11fe689fu); f_11fe7320();
  /* 11fe689f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe68a2 jmp 0x11fe68c3 */
  goto L_11fe68c3;
L_11fe68a4:;
  /* 11fe68a4 call 0x11fe6850 */
  push32(0x11fe68a9u); f_11fe6850();
  /* 11fe68a9 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11fe68af push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11fe68b4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe68b7 push eax */
  push32((uint32_t)(EAX));
  /* 11fe68b8 call 0x11fe7510 */
  push32(0x11fe68bdu); f_11fe7510();
  /* 11fe68bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe68c0 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_11fe68c3:;
  /* 11fe68c3 pop ebp */
  EBP = (pop32());
  /* 11fe68c4 ret  */
  ESPCHK(0x11fe6870u, _esp0);
  ESP += 4; return;
}

/* FUN_100168d0 @ 0x11fe68d0 (103 bytes, 39 insns) */
void f_11fe68d0(void) {
  FTRACE(0x11fe68d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe68d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe68d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe68d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe68d6 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 11fe68d9 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 11fe68dc fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11fe68df cmp dword ptr [0x1200d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe68e6 jne 0x11fe6914 */
  if (!C.zf) goto L_11fe6914;
  /* 11fe68e8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe68eb push eax */
  push32((uint32_t)(EAX));
  /* 11fe68ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe68ef push ecx */
  push32((uint32_t)(ECX));
  /* 11fe68f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe68f3 push edx */
  push32((uint32_t)(EDX));
  /* 11fe68f4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe68f7 push eax */
  push32((uint32_t)(EAX));
  /* 11fe68f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe68fb push ecx */
  push32((uint32_t)(ECX));
  /* 11fe68fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe68ff push edx */
  push32((uint32_t)(EDX));
  /* 11fe6900 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6903 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6904 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6907 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6908 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe690a call 0x11fe7320 */
  push32(0x11fe690fu); f_11fe7320();
  /* 11fe690f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6912 jmp 0x11fe6933 */
  goto L_11fe6933;
L_11fe6914:;
  /* 11fe6914 call 0x11fe6850 */
  push32(0x11fe6919u); f_11fe6850();
  /* 11fe6919 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11fe691f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11fe6924 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe6927 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6928 call 0x11fe7510 */
  push32(0x11fe692du); f_11fe7510();
  /* 11fe692d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6930 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_11fe6933:;
  /* 11fe6933 mov esp, ebp */
  ESP = (EBP);
  /* 11fe6935 pop ebp */
  EBP = (pop32());
  /* 11fe6936 ret  */
  ESPCHK(0x11fe68d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016940 @ 0x11fe6940 (178 bytes, 71 insns) */
void f_11fe6940(void) {
  FTRACE(0x11fe6940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6940 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6941 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6943 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6946 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe6949 push eax */
  push32((uint32_t)(EAX));
  /* 11fe694a lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11fe694d push ecx */
  push32((uint32_t)(ECX));
  /* 11fe694e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6951 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6952 call 0x11fe6fa0 */
  push32(0x11fe6957u); f_11fe6fa0();
  /* 11fe6957 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe695a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe695c jne 0x11fe6986 */
  if (!C.zf) goto L_11fe6986;
  /* 11fe695e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe6961 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11fe6963 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fe6966 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11fe6969 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe696a lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11fe696d push edx */
  push32((uint32_t)(EDX));
  /* 11fe696e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6971 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6972 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6975 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6976 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 11fe6979 push edx */
  push32((uint32_t)(EDX));
  /* 11fe697a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11fe697d push eax */
  push32((uint32_t)(EAX));
  /* 11fe697e call 0x11fe6ad0 */
  push32(0x11fe6983u); f_11fe6ad0();
  /* 11fe6983 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe6986:;
  /* 11fe6986 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6989 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe698a call 0x11fe7440 */
  push32(0x11fe698fu); f_11fe7440();
  /* 11fe698f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6992 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe6995 cmp dword ptr [0x1200d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe699c jne 0x11fe69ce */
  if (!C.zf) goto L_11fe69ce;
  /* 11fe699e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe69a2 je 0x11fe69ce */
  if (C.zf) goto L_11fe69ce;
  /* 11fe69a4 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe69a7 push edx */
  push32((uint32_t)(EDX));
  /* 11fe69a8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe69ab push eax */
  push32((uint32_t)(EAX));
  /* 11fe69ac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe69af push ecx */
  push32((uint32_t)(ECX));
  /* 11fe69b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe69b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe69b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe69b7 push edx */
  push32((uint32_t)(EDX));
  /* 11fe69b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe69bb push eax */
  push32((uint32_t)(EAX));
  /* 11fe69bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe69bf push ecx */
  push32((uint32_t)(ECX));
  /* 11fe69c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe69c3 push edx */
  push32((uint32_t)(EDX));
  /* 11fe69c4 call 0x11fe7320 */
  push32(0x11fe69c9u); f_11fe7320();
  /* 11fe69c9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe69cc jmp 0x11fe69ee */
  goto L_11fe69ee;
L_11fe69ce:;
  /* 11fe69ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe69d1 push eax */
  push32((uint32_t)(EAX));
  /* 11fe69d2 call 0x11fe73c0 */
  push32(0x11fe69d7u); f_11fe73c0();
  /* 11fe69d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe69da push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11fe69df mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe69e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe69e3 call 0x11fe7510 */
  push32(0x11fe69e8u); f_11fe7510();
  /* 11fe69e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe69eb fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_11fe69ee:;
  /* 11fe69ee mov esp, ebp */
  ESP = (EBP);
  /* 11fe69f0 pop ebp */
  EBP = (pop32());
  /* 11fe69f1 ret  */
  ESPCHK(0x11fe6940u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a00 @ 0x11fe6a00 (206 bytes, 81 insns) */
void f_11fe6a00(void) {
  FTRACE(0x11fe6a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6a01 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6a03 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6a06 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fe6a09 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6a0a lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11fe6a0d push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6a11 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6a12 call 0x11fe6fa0 */
  push32(0x11fe6a17u); f_11fe6fa0();
  /* 11fe6a17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6a1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6a1c jne 0x11fe6a5e */
  if (!C.zf) goto L_11fe6a5e;
  /* 11fe6a1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe6a21 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11fe6a23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fe6a26 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe6a29 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6a2c or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6a2f mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fe6a32 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe6a35 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11fe6a38 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe6a3b mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11fe6a3e lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11fe6a41 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6a42 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11fe6a45 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6a46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6a49 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6a4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6a4d push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6a4e lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 11fe6a51 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6a52 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11fe6a55 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6a56 call 0x11fe6ad0 */
  push32(0x11fe6a5bu); f_11fe6ad0();
  /* 11fe6a5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe6a5e:;
  /* 11fe6a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6a61 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6a62 call 0x11fe7440 */
  push32(0x11fe6a67u); f_11fe7440();
  /* 11fe6a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6a6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe6a6d cmp dword ptr [0x1200d728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6a74 jne 0x11fe6aaa */
  if (!C.zf) goto L_11fe6aaa;
  /* 11fe6a76 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6a7a je 0x11fe6aaa */
  if (C.zf) goto L_11fe6aaa;
  /* 11fe6a7c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fe6a7f push edx */
  push32((uint32_t)(EDX));
  /* 11fe6a80 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fe6a83 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6a84 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe6a87 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6a88 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe6a8b push edx */
  push32((uint32_t)(EDX));
  /* 11fe6a8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe6a8f push eax */
  push32((uint32_t)(EAX));
  /* 11fe6a90 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe6a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6a94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe6a97 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6a98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6a9b push eax */
  push32((uint32_t)(EAX));
  /* 11fe6a9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6a9f push ecx */
  push32((uint32_t)(ECX));
  /* 11fe6aa0 call 0x11fe7320 */
  push32(0x11fe6aa5u); f_11fe7320();
  /* 11fe6aa5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6aa8 jmp 0x11fe6aca */
  goto L_11fe6aca;
L_11fe6aaa:;
  /* 11fe6aaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6aad push edx */
  push32((uint32_t)(EDX));
  /* 11fe6aae call 0x11fe73c0 */
  push32(0x11fe6ab3u); f_11fe73c0();
  /* 11fe6ab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6ab6 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11fe6abb mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fe6abe push eax */
  push32((uint32_t)(EAX));
  /* 11fe6abf call 0x11fe7510 */
  push32(0x11fe6ac4u); f_11fe7510();
  /* 11fe6ac4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6ac7 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11fe6aca:;
  /* 11fe6aca mov esp, ebp */
  ESP = (EBP);
  /* 11fe6acc pop ebp */
  EBP = (pop32());
  /* 11fe6acd ret  */
  ESPCHK(0x11fe6a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ad0 @ 0x11fe6ad0 (1201 bytes, 425 insns) [1 switch table(s)] */
void f_11fe6ad0(void) {
  FTRACE(0x11fe6ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6ad3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6ad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6ad9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11fe6ae0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6ae3 mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11fe6aea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6aed mov dword ptr [edx + 0xc], 0 */
  w32((uint32_t)(EDX + 0xc), (0x0u));
  /* 11fe6af4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe6af7 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6afa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6afc je 0x11fe6b14 */
  if (C.zf) goto L_11fe6b14;
  /* 11fe6afe mov dword ptr [ebp - 4], 0xc000008f */
  w32((uint32_t)(EBP + -0x4), (0xc000008fu));
  /* 11fe6b05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b08 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe6b0b or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6b0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11fe6b14:;
  /* 11fe6b14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe6b17 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6b1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6b1c je 0x11fe6b33 */
  if (C.zf) goto L_11fe6b33;
  /* 11fe6b1e mov dword ptr [ebp - 4], 0xc0000093 */
  w32((uint32_t)(EBP + -0x4), (0xc0000093u));
  /* 11fe6b25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b28 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe6b2b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11fe6b2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b30 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11fe6b33:;
  /* 11fe6b33 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe6b36 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6b39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6b3b je 0x11fe6b53 */
  if (C.zf) goto L_11fe6b53;
  /* 11fe6b3d mov dword ptr [ebp - 4], 0xc0000091 */
  w32((uint32_t)(EBP + -0x4), (0xc0000091u));
  /* 11fe6b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b47 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe6b4a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6b4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b50 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11fe6b53:;
  /* 11fe6b53 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe6b56 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6b5b je 0x11fe6b73 */
  if (C.zf) goto L_11fe6b73;
  /* 11fe6b5d mov dword ptr [ebp - 4], 0xc000008e */
  w32((uint32_t)(EBP + -0x4), (0xc000008eu));
  /* 11fe6b64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b67 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe6b6a or edx, 8 */
  { uint32_t _r=(EDX)|(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6b6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b70 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11fe6b73:;
  /* 11fe6b73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe6b76 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6b79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6b7b je 0x11fe6b92 */
  if (C.zf) goto L_11fe6b92;
  /* 11fe6b7d mov dword ptr [ebp - 4], 0xc0000090 */
  w32((uint32_t)(EBP + -0x4), (0xc0000090u));
  /* 11fe6b84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b87 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe6b8a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 11fe6b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6b8f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11fe6b92:;
  /* 11fe6b92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6b95 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6b97 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6b9a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe6b9c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6b9e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11fe6b9f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6ba2 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fe6ba5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6ba8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe6bab and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6bae or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6bb3 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11fe6bb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6bb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6bbb and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6bbe neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe6bc0 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6bc2 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11fe6bc3 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6bc6 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11fe6bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6bcc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe6bcf and ecx, 0xfffffff7 */
  { uint32_t _r=(ECX)&(0xfffffff7u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6bd2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6bd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6bd7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fe6bda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6bdd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6bdf and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6be2 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe6be4 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6be6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11fe6be7 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6bea shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11fe6bed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6bf0 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe6bf3 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11fe6bf5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6bf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6bfa mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11fe6bfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6c00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6c02 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6c05 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe6c07 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6c09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11fe6c0a and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6c0d shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fe6c0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c12 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe6c15 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6c18 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6c1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c1d mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11fe6c20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6c23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6c25 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6c28 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe6c2a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6c2c inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11fe6c2d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c33 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe6c36 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6c39 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6c3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c3e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fe6c41 call 0x11fe74d0 */
  push32(0x11fe6c46u); f_11fe74d0();
  /* 11fe6c46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe6c49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe6c4c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6c51 je 0x11fe6c62 */
  if (C.zf) goto L_11fe6c62;
  /* 11fe6c53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c56 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe6c59 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6c5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c5f mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11fe6c62:;
  /* 11fe6c62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe6c65 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6c68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6c6a je 0x11fe6c7a */
  if (C.zf) goto L_11fe6c7a;
  /* 11fe6c6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c6f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fe6c72 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11fe6c74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c77 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11fe6c7a:;
  /* 11fe6c7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe6c7d and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6c80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6c82 je 0x11fe6c93 */
  if (C.zf) goto L_11fe6c93;
  /* 11fe6c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c87 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fe6c8a or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6c8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6c90 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11fe6c93:;
  /* 11fe6c93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe6c96 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6c9b je 0x11fe6cac */
  if (C.zf) goto L_11fe6cac;
  /* 11fe6c9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6ca0 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fe6ca3 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6ca9 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
L_11fe6cac:;
  /* 11fe6cac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe6caf and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6cb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6cb4 je 0x11fe6cc4 */
  if (C.zf) goto L_11fe6cc4;
  /* 11fe6cb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6cb9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11fe6cbc or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11fe6cbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6cc1 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
L_11fe6cc4:;
  /* 11fe6cc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6cc7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6cc9 and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6cce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe6cd1 cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6cd8 ja 0x11fe6cf4 */
  if ((!C.cf&&!C.zf)) goto L_11fe6cf4;
  /* 11fe6cda cmp dword ptr [ebp - 0xc], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6ce1 je 0x11fe6d0e */
  if (C.zf) goto L_11fe6d0e;
  /* 11fe6ce3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6ce7 je 0x11fe6d32 */
  if (C.zf) goto L_11fe6d32;
  /* 11fe6ce9 cmp dword ptr [ebp - 0xc], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6cf0 je 0x11fe6d20 */
  if (C.zf) goto L_11fe6d20;
  /* 11fe6cf2 jmp 0x11fe6d3f */
  goto L_11fe6d3f;
L_11fe6cf4:;
  /* 11fe6cf4 cmp dword ptr [ebp - 0xc], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6cfb je 0x11fe6cff */
  if (C.zf) goto L_11fe6cff;
  /* 11fe6cfd jmp 0x11fe6d3f */
  goto L_11fe6d3f;
L_11fe6cff:;
  /* 11fe6cff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6d04 or edx, 3 */
  { uint32_t _r=(EDX)|(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d0a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe6d0c jmp 0x11fe6d3f */
  goto L_11fe6d3f;
L_11fe6d0e:;
  /* 11fe6d0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d11 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6d13 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6d16 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6d19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d1c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe6d1e jmp 0x11fe6d3f */
  goto L_11fe6d3f;
L_11fe6d20:;
  /* 11fe6d20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6d25 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6d28 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6d2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d2e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe6d30 jmp 0x11fe6d3f */
  goto L_11fe6d3f;
L_11fe6d32:;
  /* 11fe6d32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d35 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6d37 and edx, 0xfffffffc */
  { uint32_t _r=(EDX)&(0xfffffffcu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d3d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fe6d3f:;
  /* 11fe6d3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6d42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6d44 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6d4a mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fe6d4d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6d51 je 0x11fe6d88 */
  if (C.zf) goto L_11fe6d88;
  /* 11fe6d53 cmp dword ptr [ebp - 0x10], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6d5a je 0x11fe6d76 */
  if (C.zf) goto L_11fe6d76;
  /* 11fe6d5c cmp dword ptr [ebp - 0x10], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6d63 je 0x11fe6d67 */
  if (C.zf) goto L_11fe6d67;
  /* 11fe6d65 jmp 0x11fe6d98 */
  goto L_11fe6d98;
L_11fe6d67:;
  /* 11fe6d67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6d6c and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6d6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d72 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fe6d74 jmp 0x11fe6d98 */
  goto L_11fe6d98;
L_11fe6d76:;
  /* 11fe6d76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6d7b and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6d7e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6d81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11fe6d86 jmp 0x11fe6d98 */
  goto L_11fe6d98;
L_11fe6d88:;
  /* 11fe6d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d8b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6d8d and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6d90 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6d93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6d96 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fe6d98:;
  /* 11fe6d98 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe6d9b and eax, 0xfff */
  { uint32_t _r=(EAX)&(0xfffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6da0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fe6da3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6da6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6da8 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6dae or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6db3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe6db5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6db8 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11fe6dbb or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6dbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6dc1 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11fe6dc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6dc7 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11fe6dca and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6dcd or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6dd3 mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11fe6dd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6dd9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe6ddc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6dde mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11fe6de1 mov edx, dword ptr [edx + 4] */
  EDX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe6de4 mov dword ptr [ecx + 0x14], edx */
  w32((uint32_t)(ECX + 0x14), (EDX));
  /* 11fe6de7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6dea mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11fe6ded or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6df0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6df3 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11fe6df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6df9 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11fe6dfc and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6dff or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6e02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6e05 mov dword ptr [edx + 0x50], ecx */
  w32((uint32_t)(EDX + 0x50), (ECX));
  /* 11fe6e08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6e0b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe6e0e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6e10 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 11fe6e13 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe6e16 mov dword ptr [eax + 0x44], ecx */
  w32((uint32_t)(EAX + 0x44), (ECX));
  /* 11fe6e19 call 0x11fe74f0 */
  push32(0x11fe6e1eu); f_11fe74f0();
  /* 11fe6e1e lea edx, [ebp + 8] */
  EDX = ((uint32_t)(EBP + 0x8));
  /* 11fe6e21 push edx */
  push32((uint32_t)(EDX));
  /* 11fe6e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe6e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe6e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6e29 push eax */
  push32((uint32_t)(EAX));
  /* 11fe6e2a call dword ptr [0x12011378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011378))), 0x11fe6e30u);
  /* 11fe6e30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6e33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe6e36 shr edx, 4 */
  EDX = (sh_shr((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11fe6e39 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6e3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6e3e je 0x11fe6e4d */
  if (C.zf) goto L_11fe6e4d;
  /* 11fe6e40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6e43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6e45 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6e48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6e4b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fe6e4d:;
  /* 11fe6e4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6e50 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe6e53 shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11fe6e56 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6e59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6e5b je 0x11fe6e69 */
  if (C.zf) goto L_11fe6e69;
  /* 11fe6e5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6e60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6e62 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11fe6e64 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6e67 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11fe6e69:;
  /* 11fe6e69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6e6c mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe6e6f shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11fe6e72 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6e75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe6e77 je 0x11fe6e86 */
  if (C.zf) goto L_11fe6e86;
  /* 11fe6e79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6e7c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6e7e and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6e81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6e84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fe6e86:;
  /* 11fe6e86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6e89 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe6e8c shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe6e8e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6e91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6e93 je 0x11fe6ea2 */
  if (C.zf) goto L_11fe6ea2;
  /* 11fe6e95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6e98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe6e9a and ecx, 0xffffffef */
  { uint32_t _r=(ECX)&(0xffffffefu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6e9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6ea0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11fe6ea2:;
  /* 11fe6ea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6ea5 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe6ea8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6eab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6ead je 0x11fe6ebb */
  if (C.zf) goto L_11fe6ebb;
  /* 11fe6eaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6eb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6eb4 and al, 0xdf */
  { uint32_t _r=(AL)&(0xdfu); AL = (_r); fl_logic(_r,8); }
  /* 11fe6eb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6eb9 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11fe6ebb:;
  /* 11fe6ebb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6ebe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6ec0 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6ec3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fe6ec6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6eca ja 0x11fe6f19 */
  if ((!C.cf&&!C.zf)) goto L_11fe6f19;
  /* 11fe6ecc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe6ecf jmp dword ptr [ecx*4 + 0x11fe6f81] */
  switch (ECX) {
    case 0: goto L_11fe6f0c;
    case 1: goto L_11fe6efa;
    case 2: goto L_11fe6ee8;
    case 3: goto L_11fe6ed6;
    default: x86_unimpl("switch@0x11fe6ecf out of table"); return;
  }
L_11fe6ed6:;
  /* 11fe6ed6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6ed9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6edb and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11fe6ede or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11fe6ee1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6ee4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fe6ee6 jmp 0x11fe6f19 */
  goto L_11fe6f19;
L_11fe6ee8:;
  /* 11fe6ee8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6eeb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6eed and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11fe6ef0 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11fe6ef3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6ef6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fe6ef8 jmp 0x11fe6f19 */
  goto L_11fe6f19;
L_11fe6efa:;
  /* 11fe6efa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6efd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6eff and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11fe6f02 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11fe6f05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6f08 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fe6f0a jmp 0x11fe6f19 */
  goto L_11fe6f19;
L_11fe6f0c:;
  /* 11fe6f0c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6f0f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6f11 and ah, 0xf3 */
  { uint32_t _r=(AH)&(0xf3u); AH = (_r); fl_logic(_r,8); }
  /* 11fe6f14 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6f17 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11fe6f19:;
  /* 11fe6f19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6f1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe6f1e shr eax, 2 */
  EAX = (sh_shr((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11fe6f21 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6f24 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe6f27 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6f2b je 0x11fe6f3b */
  if (C.zf) goto L_11fe6f3b;
  /* 11fe6f2d cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6f31 je 0x11fe6f4d */
  if (C.zf) goto L_11fe6f4d;
  /* 11fe6f33 cmp dword ptr [ebp - 0x18], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe6f37 je 0x11fe6f5f */
  if (C.zf) goto L_11fe6f5f;
  /* 11fe6f39 jmp 0x11fe6f6c */
  goto L_11fe6f6c;
L_11fe6f3b:;
  /* 11fe6f3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6f3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6f40 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe6f43 or dh, 3 */
  { uint32_t _r=(C.d.b.h)|(0x3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe6f46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6f49 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe6f4b jmp 0x11fe6f6c */
  goto L_11fe6f6c;
L_11fe6f4d:;
  /* 11fe6f4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6f50 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6f52 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe6f55 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe6f58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6f5b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe6f5d jmp 0x11fe6f6c */
  goto L_11fe6f6c;
L_11fe6f5f:;
  /* 11fe6f5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6f62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe6f64 and dh, 0xf3 */
  { uint32_t _r=(C.d.b.h)&(0xf3u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fe6f67 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe6f6a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11fe6f6c:;
  /* 11fe6f6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6f6f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe6f72 mov eax, dword ptr [ecx + 0x40] */
  EAX = (r32((uint32_t)(ECX + 0x40)));
  /* 11fe6f75 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fe6f77 mov ecx, dword ptr [ecx + 0x44] */
  ECX = (r32((uint32_t)(ECX + 0x44)));
  /* 11fe6f7a mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fe6f7d mov esp, ebp */
  ESP = (EBP);
  /* 11fe6f7f pop ebp */
  EBP = (pop32());
  /* 11fe6f80 ret  */
  ESPCHK(0x11fe6ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016fa0 @ 0x11fe6fa0 (882 bytes, 268 insns) */
void f_11fe6fa0(void) {
  FTRACE(0x11fe6fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe6fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe6fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe6fa3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe6fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6fa9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe6fac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe6faf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6fb2 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6fb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6fb7 je 0x11fe6fda */
  if (C.zf) goto L_11fe6fda;
  /* 11fe6fb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe6fbc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6fbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6fc1 je 0x11fe6fda */
  if (C.zf) goto L_11fe6fda;
  /* 11fe6fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe6fc5 call 0x11fe7550 */
  push32(0x11fe6fcau); f_11fe7550();
  /* 11fe6fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6fd0 and al, 0xf7 */
  { uint32_t _r=(AL)&(0xf7u); AL = (_r); fl_logic(_r,8); }
  /* 11fe6fd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe6fd5 jmp 0x11fe72de */
  goto L_11fe72de;
L_11fe6fda:;
  /* 11fe6fda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe6fdd and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe6fe0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe6fe2 je 0x11fe7005 */
  if (C.zf) goto L_11fe7005;
  /* 11fe6fe4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe6fe7 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe6fea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe6fec je 0x11fe7005 */
  if (C.zf) goto L_11fe7005;
  /* 11fe6fee push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe6ff0 call 0x11fe7550 */
  push32(0x11fe6ff5u); f_11fe7550();
  /* 11fe6ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe6ff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe6ffb and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
  /* 11fe6ffd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe7000 jmp 0x11fe72de */
  goto L_11fe72de;
L_11fe7005:;
  /* 11fe7005 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7008 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe700b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe700d je 0x11fe7181 */
  if (C.zf) goto L_11fe7181;
  /* 11fe7013 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe7016 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe7019 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe701b je 0x11fe7181 */
  if (C.zf) goto L_11fe7181;
  /* 11fe7021 push 8 */
  push32((uint32_t)(0x8u));
  /* 11fe7023 call 0x11fe7550 */
  push32(0x11fe7028u); f_11fe7550();
  /* 11fe7028 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe702b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe702e and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7033 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe7036 cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe703d ja 0x11fe7060 */
  if ((!C.cf&&!C.zf)) goto L_11fe7060;
  /* 11fe703f cmp dword ptr [ebp - 0x20], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7046 je 0x11fe70b5 */
  if (C.zf) goto L_11fe70b5;
  /* 11fe7048 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe704c je 0x11fe7072 */
  if (C.zf) goto L_11fe7072;
  /* 11fe704e cmp dword ptr [ebp - 0x20], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7055 je 0x11fe70f5 */
  if (C.zf) goto L_11fe70f5;
  /* 11fe705b jmp 0x11fe7173 */
  goto L_11fe7173;
L_11fe7060:;
  /* 11fe7060 cmp dword ptr [ebp - 0x20], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7067 je 0x11fe7135 */
  if (C.zf) goto L_11fe7135;
  /* 11fe706d jmp 0x11fe7173 */
  goto L_11fe7173;
L_11fe7072:;
  /* 11fe7072 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7075 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11fe7077 fcomp qword ptr [0x12009558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009558)));
  (void)fpu_pop();
  /* 11fe707d fnstsw ax */
  AX = fpu_status();
  /* 11fe707f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11fe7082 jne 0x11fe7097 */
  if (!C.zf) goto L_11fe7097;
  /* 11fe7084 mov edx, dword ptr [0x1200db18] */
  EDX = (r32((uint32_t)(0x1200db18)));
  /* 11fe708a mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11fe708d mov eax, dword ptr [0x1200db1c] */
  EAX = (r32((uint32_t)(0x1200db1c)));
  /* 11fe7092 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11fe7095 jmp 0x11fe70a2 */
  goto L_11fe70a2;
L_11fe7097:;
  /* 11fe7097 fld qword ptr [0x1200db18] */
  fpu_push(rf64((uint32_t)(0x1200db18)));
  /* 11fe709d fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11fe709f fstp qword ptr [ebp - 0x28] */
  wf64((uint32_t)(EBP + -0x28), FPU_ST(0));
  (void)fpu_pop();
L_11fe70a2:;
  /* 11fe70a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe70a5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe70a8 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fe70aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe70ad mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fe70b0 jmp 0x11fe7173 */
  goto L_11fe7173;
L_11fe70b5:;
  /* 11fe70b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe70b8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11fe70ba fcomp qword ptr [0x12009558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009558)));
  (void)fpu_pop();
  /* 11fe70c0 fnstsw ax */
  AX = fpu_status();
  /* 11fe70c2 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11fe70c5 jne 0x11fe70da */
  if (!C.zf) goto L_11fe70da;
  /* 11fe70c7 mov edx, dword ptr [0x1200db18] */
  EDX = (r32((uint32_t)(0x1200db18)));
  /* 11fe70cd mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11fe70d0 mov eax, dword ptr [0x1200db1c] */
  EAX = (r32((uint32_t)(0x1200db1c)));
  /* 11fe70d5 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11fe70d8 jmp 0x11fe70e5 */
  goto L_11fe70e5;
L_11fe70da:;
  /* 11fe70da fld qword ptr [0x1200db28] */
  fpu_push(rf64((uint32_t)(0x1200db28)));
  /* 11fe70e0 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11fe70e2 fstp qword ptr [ebp - 0x30] */
  wf64((uint32_t)(EBP + -0x30), FPU_ST(0));
  (void)fpu_pop();
L_11fe70e5:;
  /* 11fe70e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe70e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe70eb mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fe70ed mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe70f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fe70f3 jmp 0x11fe7173 */
  goto L_11fe7173;
L_11fe70f5:;
  /* 11fe70f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe70f8 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11fe70fa fcomp qword ptr [0x12009558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009558)));
  (void)fpu_pop();
  /* 11fe7100 fnstsw ax */
  AX = fpu_status();
  /* 11fe7102 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11fe7105 jne 0x11fe711a */
  if (!C.zf) goto L_11fe711a;
  /* 11fe7107 mov edx, dword ptr [0x1200db28] */
  EDX = (r32((uint32_t)(0x1200db28)));
  /* 11fe710d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11fe7110 mov eax, dword ptr [0x1200db2c] */
  EAX = (r32((uint32_t)(0x1200db2c)));
  /* 11fe7115 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11fe7118 jmp 0x11fe7125 */
  goto L_11fe7125;
L_11fe711a:;
  /* 11fe711a fld qword ptr [0x1200db18] */
  fpu_push(rf64((uint32_t)(0x1200db18)));
  /* 11fe7120 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11fe7122 fstp qword ptr [ebp - 0x38] */
  wf64((uint32_t)(EBP + -0x38), FPU_ST(0));
  (void)fpu_pop();
L_11fe7125:;
  /* 11fe7125 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7128 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe712b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fe712d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe7130 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11fe7133 jmp 0x11fe7173 */
  goto L_11fe7173;
L_11fe7135:;
  /* 11fe7135 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7138 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 11fe713a fcomp qword ptr [0x12009558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009558)));
  (void)fpu_pop();
  /* 11fe7140 fnstsw ax */
  AX = fpu_status();
  /* 11fe7142 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11fe7145 jne 0x11fe715a */
  if (!C.zf) goto L_11fe715a;
  /* 11fe7147 mov edx, dword ptr [0x1200db28] */
  EDX = (r32((uint32_t)(0x1200db28)));
  /* 11fe714d mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11fe7150 mov eax, dword ptr [0x1200db2c] */
  EAX = (r32((uint32_t)(0x1200db2c)));
  /* 11fe7155 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11fe7158 jmp 0x11fe7165 */
  goto L_11fe7165;
L_11fe715a:;
  /* 11fe715a fld qword ptr [0x1200db28] */
  fpu_push(rf64((uint32_t)(0x1200db28)));
  /* 11fe7160 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11fe7162 fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
L_11fe7165:;
  /* 11fe7165 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7168 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fe716b mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fe716d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe7170 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11fe7173:;
  /* 11fe7173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7176 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe7179 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe717c jmp 0x11fe72de */
  goto L_11fe72de;
L_11fe7181:;
  /* 11fe7181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7184 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe7187 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe7189 je 0x11fe72de */
  if (C.zf) goto L_11fe72de;
  /* 11fe718f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe7192 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7197 je 0x11fe72de */
  if (C.zf) goto L_11fe72de;
  /* 11fe719d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe71a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe71a7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe71aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe71ac je 0x11fe71b5 */
  if (C.zf) goto L_11fe71b5;
  /* 11fe71ae mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11fe71b5:;
  /* 11fe71b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe71b8 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11fe71ba fcomp qword ptr [0x12009558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009558)));
  (void)fpu_pop();
  /* 11fe71c0 fnstsw ax */
  AX = fpu_status();
  /* 11fe71c2 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11fe71c5 jne 0x11fe72be */
  if (!C.zf) goto L_11fe72be;
  /* 11fe71cb lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11fe71ce push eax */
  push32((uint32_t)(EAX));
  /* 11fe71cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe71d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe71d5 push edx */
  push32((uint32_t)(EDX));
  /* 11fe71d6 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11fe71d8 push eax */
  push32((uint32_t)(EAX));
  /* 11fe71d9 call 0x11fea660 */
  push32(0x11fe71deu); f_11fea660();
  /* 11fe71de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe71e1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11fe71e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe71e7 sub ecx, 0x600 */
  { uint32_t _a=(ECX),_b=(0x600u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe71ed mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11fe71f0 cmp dword ptr [ebp - 0x14], 0xfffffbce */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe71f7 jge 0x11fe7211 */
  if ((C.sf==C.of)) goto L_11fe7211;
  /* 11fe71f9 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11fe71fc fmul qword ptr [0x12009558] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x12009558)));
  /* 11fe7202 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11fe7205 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11fe720c jmp 0x11fe72ae */
  goto L_11fe72ae;
L_11fe7211:;
  /* 11fe7211 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11fe7214 fcomp qword ptr [0x12009558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009558)));
  (void)fpu_pop();
  /* 11fe721a fnstsw ax */
  AX = fpu_status();
  /* 11fe721c test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11fe721f je 0x11fe722a */
  if (C.zf) goto L_11fe722a;
  /* 11fe7221 mov dword ptr [ebp - 0x44], 1 */
  w32((uint32_t)(EBP + -0x44), (0x1u));
  /* 11fe7228 jmp 0x11fe7231 */
  goto L_11fe7231;
L_11fe722a:;
  /* 11fe722a mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
L_11fe7231:;
  /* 11fe7231 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fe7234 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11fe7237 mov ax, word ptr [ebp - 0xa] */
  AX = (r16((uint32_t)(EBP + -0xa)));
  /* 11fe723b and ax, 0xf */
  { uint32_t _r=(AX)&(0xfu); AX = (_r); fl_logic(_r,16); }
  /* 11fe723f mov word ptr [ebp - 0xa], ax */
  w16((uint32_t)(EBP + -0xa), (AX));
  /* 11fe7243 mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11fe7247 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11fe724a mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
  /* 11fe724e jmp 0x11fe7259 */
  goto L_11fe7259;
L_11fe7250:;
  /* 11fe7250 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe7253 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7256 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11fe7259:;
  /* 11fe7259 cmp dword ptr [ebp - 0x14], 0xfffffc03 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xfffffc03u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7260 jge 0x11fe72a0 */
  if ((C.sf==C.of)) goto L_11fe72a0;
  /* 11fe7262 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe7265 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7268 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe726a je 0x11fe7279 */
  if (C.zf) goto L_11fe7279;
  /* 11fe726c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7270 jne 0x11fe7279 */
  if (!C.zf) goto L_11fe7279;
  /* 11fe7272 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11fe7279:;
  /* 11fe7279 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe727c shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11fe727e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe7281 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe7284 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe7287 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe7289 je 0x11fe7296 */
  if (C.zf) goto L_11fe7296;
  /* 11fe728b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe728e or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7293 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fe7296:;
  /* 11fe7296 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe7299 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11fe729b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe729e jmp 0x11fe7250 */
  goto L_11fe7250;
L_11fe72a0:;
  /* 11fe72a0 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe72a4 je 0x11fe72ae */
  if (C.zf) goto L_11fe72ae;
  /* 11fe72a6 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11fe72a9 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11fe72ab fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
L_11fe72ae:;
  /* 11fe72ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe72b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe72b4 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fe72b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe72b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11fe72bc jmp 0x11fe72c5 */
  goto L_11fe72c5;
L_11fe72be:;
  /* 11fe72be mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11fe72c5:;
  /* 11fe72c5 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe72c9 je 0x11fe72d5 */
  if (C.zf) goto L_11fe72d5;
  /* 11fe72cb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11fe72cd call 0x11fe7550 */
  push32(0x11fe72d2u); f_11fe7550();
  /* 11fe72d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe72d5:;
  /* 11fe72d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe72d8 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe72db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe72de:;
  /* 11fe72de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe72e1 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe72e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe72e6 je 0x11fe7305 */
  if (C.zf) goto L_11fe7305;
  /* 11fe72e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe72eb and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe72ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe72f0 je 0x11fe7305 */
  if (C.zf) goto L_11fe7305;
  /* 11fe72f2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11fe72f4 call 0x11fe7550 */
  push32(0x11fe72f9u); f_11fe7550();
  /* 11fe72f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe72fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe72ff and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe7302 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe7305:;
  /* 11fe7305 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7307 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe730b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11fe730e mov esp, ebp */
  ESP = (EBP);
  /* 11fe7310 pop ebp */
  EBP = (pop32());
  /* 11fe7311 ret  */
  ESPCHK(0x11fe6fa0u, _esp0);
  ESP += 4; return;
}

/* __umatherr @ 0x11fe7320 (155 bytes, 54 insns) */
void f_11fe7320(void) {
  FTRACE(0x11fe7320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7320 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7321 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7323 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe7326 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7329 push eax */
  push32((uint32_t)(EAX));
  /* 11fe732a call 0x11fe7400 */
  push32(0x11fe732fu); f_11fe7400();
  /* 11fe732f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7332 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fe7335 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7339 je 0x11fe7397 */
  if (C.zf) goto L_11fe7397;
  /* 11fe733b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe733e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11fe7341 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe7344 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fe7347 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe734a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fe734d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe7350 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe7353 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe7356 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe7359 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe735c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe735f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fe7362 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe7365 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11fe736a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fe736d push edx */
  push32((uint32_t)(EDX));
  /* 11fe736e call 0x11fe7510 */
  push32(0x11fe7373u); f_11fe7510();
  /* 11fe7373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7376 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11fe7379 push eax */
  push32((uint32_t)(EAX));
  /* 11fe737a call 0x11fe74c0 */
  push32(0x11fe737fu); f_11fe74c0();
  /* 11fe737f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7384 jne 0x11fe7392 */
  if (!C.zf) goto L_11fe7392;
  /* 11fe7386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7389 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe738a call 0x11fe73c0 */
  push32(0x11fe738fu); f_11fe73c0();
  /* 11fe738f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe7392:;
  /* 11fe7392 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11fe7395 jmp 0x11fe73b7 */
  goto L_11fe73b7;
L_11fe7397:;
  /* 11fe7397 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11fe739c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11fe739f push edx */
  push32((uint32_t)(EDX));
  /* 11fe73a0 call 0x11fe7510 */
  push32(0x11fe73a5u); f_11fe7510();
  /* 11fe73a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe73a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe73ab push eax */
  push32((uint32_t)(EAX));
  /* 11fe73ac call 0x11fe73c0 */
  push32(0x11fe73b1u); f_11fe73c0();
  /* 11fe73b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe73b4 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11fe73b7:;
  /* 11fe73b7 mov esp, ebp */
  ESP = (EBP);
  /* 11fe73b9 pop ebp */
  EBP = (pop32());
  /* 11fe73ba ret  */
  ESPCHK(0x11fe7320u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__set_errno_from_matherr @ 0x11fe73c0 (58 bytes, 20 insns) */
void f_11fe73c0(void) {
  FTRACE(0x11fe73c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe73c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe73c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe73c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe73c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe73c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe73ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe73ce je 0x11fe73de */
  if (C.zf) goto L_11fe73de;
  /* 11fe73d0 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe73d4 jle 0x11fe73f6 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe73f6;
  /* 11fe73d6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe73da jle 0x11fe73eb */
  if ((C.zf||C.sf!=C.of)) goto L_11fe73eb;
  /* 11fe73dc jmp 0x11fe73f6 */
  goto L_11fe73f6;
L_11fe73de:;
  /* 11fe73de call 0x11fe6850 */
  push32(0x11fe73e3u); f_11fe6850();
  /* 11fe73e3 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11fe73e9 jmp 0x11fe73f6 */
  goto L_11fe73f6;
L_11fe73eb:;
  /* 11fe73eb call 0x11fe6850 */
  push32(0x11fe73f0u); f_11fe6850();
  /* 11fe73f0 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
L_11fe73f6:;
  /* 11fe73f6 mov esp, ebp */
  ESP = (EBP);
  /* 11fe73f8 pop ebp */
  EBP = (pop32());
  /* 11fe73f9 ret  */
  ESPCHK(0x11fe73c0u, _esp0);
  ESP += 4; return;
}

/* __get_fname @ 0x11fe7400 (63 bytes, 22 insns) */
void f_11fe7400(void) {
  FTRACE(0x11fe7400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7400 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7401 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7403 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7404 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe740b jmp 0x11fe7416 */
  goto L_11fe7416;
L_11fe740d:;
  /* 11fe740d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7410 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7413 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe7416:;
  /* 11fe7416 cmp dword ptr [ebp - 4], 0x1b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe741a jge 0x11fe7439 */
  if ((C.sf==C.of)) goto L_11fe7439;
  /* 11fe741c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe741f mov edx, dword ptr [ecx*8 + 0x1200d650] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1200d650)));
  /* 11fe7426 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7429 jne 0x11fe7437 */
  if (!C.zf) goto L_11fe7437;
  /* 11fe742b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe742e mov eax, dword ptr [eax*8 + 0x1200d654] */
  EAX = (r32((uint32_t)(EAX*8 + 0x1200d654)));
  /* 11fe7435 jmp 0x11fe743b */
  goto L_11fe743b;
L_11fe7437:;
  /* 11fe7437 jmp 0x11fe740d */
  goto L_11fe740d;
L_11fe7439:;
  /* 11fe7439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe743b:;
  /* 11fe743b mov esp, ebp */
  ESP = (EBP);
  /* 11fe743d pop ebp */
  EBP = (pop32());
  /* 11fe743e ret  */
  ESPCHK(0x11fe7400u, _esp0);
  ESP += 4; return;
}

/* FUN_10017440 @ 0x11fe7440 (113 bytes, 38 insns) */
void f_11fe7440(void) {
  FTRACE(0x11fe7440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7440 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7441 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7443 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7447 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe744a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe744c je 0x11fe7457 */
  if (C.zf) goto L_11fe7457;
  /* 11fe744e mov dword ptr [ebp - 4], 5 */
  w32((uint32_t)(EBP + -0x4), (0x5u));
  /* 11fe7455 jmp 0x11fe74aa */
  goto L_11fe74aa;
L_11fe7457:;
  /* 11fe7457 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe745a and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe745d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe745f je 0x11fe746a */
  if (C.zf) goto L_11fe746a;
  /* 11fe7461 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fe7468 jmp 0x11fe74aa */
  goto L_11fe74aa;
L_11fe746a:;
  /* 11fe746a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe746d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe7470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe7472 je 0x11fe747d */
  if (C.zf) goto L_11fe747d;
  /* 11fe7474 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11fe747b jmp 0x11fe74aa */
  goto L_11fe74aa;
L_11fe747d:;
  /* 11fe747d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7480 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7485 je 0x11fe7490 */
  if (C.zf) goto L_11fe7490;
  /* 11fe7487 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11fe748e jmp 0x11fe74aa */
  goto L_11fe74aa;
L_11fe7490:;
  /* 11fe7490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7493 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe7496 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe7498 je 0x11fe74a3 */
  if (C.zf) goto L_11fe74a3;
  /* 11fe749a mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11fe74a1 jmp 0x11fe74aa */
  goto L_11fe74aa;
L_11fe74a3:;
  /* 11fe74a3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fe74aa:;
  /* 11fe74aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe74ad mov esp, ebp */
  ESP = (EBP);
  /* 11fe74af pop ebp */
  EBP = (pop32());
  /* 11fe74b0 ret  */
  ESPCHK(0x11fe7440u, _esp0);
  ESP += 4; return;
}

/* __matherr @ 0x11fe74c0 (7 bytes, 5 insns) */
void f_11fe74c0(void) {
  FTRACE(0x11fe74c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe74c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe74c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe74c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe74c5 pop ebp */
  EBP = (pop32());
  /* 11fe74c6 ret  */
  ESPCHK(0x11fe74c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100174d0 @ 0x11fe74d0 (22 bytes, 15 insns) */
void f_11fe74d0(void) {
  FTRACE(0x11fe74d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe74d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe74d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe74d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe74d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe74d5 push esi */
  push32((uint32_t)(ESI));
  /* 11fe74d6 push edi */
  push32((uint32_t)(EDI));
  /* 11fe74d7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fe74d8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11fe74db movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11fe74df pop edi */
  EDI = (pop32());
  /* 11fe74e0 pop esi */
  ESI = (pop32());
  /* 11fe74e1 pop ebx */
  EBX = (pop32());
  /* 11fe74e2 mov esp, ebp */
  ESP = (EBP);
  /* 11fe74e4 pop ebp */
  EBP = (pop32());
  /* 11fe74e5 ret  */
  ESPCHK(0x11fe74d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100174f0 @ 0x11fe74f0 (23 bytes, 15 insns) */
void f_11fe74f0(void) {
  FTRACE(0x11fe74f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe74f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe74f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe74f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe74f4 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe74f5 push esi */
  push32((uint32_t)(ESI));
  /* 11fe74f6 push edi */
  push32((uint32_t)(EDI));
  /* 11fe74f7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11fe74fa fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11fe74fc movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11fe7500 pop edi */
  EDI = (pop32());
  /* 11fe7501 pop esi */
  ESI = (pop32());
  /* 11fe7502 pop ebx */
  EBX = (pop32());
  /* 11fe7503 mov esp, ebp */
  ESP = (EBP);
  /* 11fe7505 pop ebp */
  EBP = (pop32());
  /* 11fe7506 ret  */
  ESPCHK(0x11fe74f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017510 @ 0x11fe7510 (50 bytes, 24 insns) */
void f_11fe7510(void) {
  FTRACE(0x11fe7510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7510 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7511 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe7516 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe7517 push esi */
  push32((uint32_t)(ESI));
  /* 11fe7518 push edi */
  push32((uint32_t)(EDI));
  /* 11fe7519 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fe751a fnstcw word ptr [ebp - 8] */
  w16((uint32_t)(EBP + -0x8), C.fcw);
  /* 11fe751d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7520 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7523 movsx ecx, word ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11fe7527 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe752a not edx */
  EDX = (~(EDX));
  /* 11fe752c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe752e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7530 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11fe7534 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11fe7537 movsx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11fe753b pop edi */
  EDI = (pop32());
  /* 11fe753c pop esi */
  ESI = (pop32());
  /* 11fe753d pop ebx */
  EBX = (pop32());
  /* 11fe753e mov esp, ebp */
  ESP = (EBP);
  /* 11fe7540 pop ebp */
  EBP = (pop32());
  /* 11fe7541 ret  */
  ESPCHK(0x11fe7510u, _esp0);
  ESP += 4; return;
}

/* FUN_10017550 @ 0x11fe7550 (117 bytes, 53 insns) */
void f_11fe7550(void) {
  FTRACE(0x11fe7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7550 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7551 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7553 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe7556 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe7557 push esi */
  push32((uint32_t)(ESI));
  /* 11fe7558 push edi */
  push32((uint32_t)(EDI));
  /* 11fe7559 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe755c and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe755f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7561 je 0x11fe756d */
  if (C.zf) goto L_11fe756d;
  /* 11fe7563 fld xword ptr [0x1200d72c] */
  fpu_push(rf80((uint32_t)(0x1200d72c)));
  /* 11fe7569 fistp dword ptr [ebp - 0xc] */
  w32((uint32_t)(EBP + -0xc), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 11fe756c wait  */
  /* wait (no observable integer/reg state) */
L_11fe756d:;
  /* 11fe756d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7570 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe7573 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe7575 je 0x11fe7587 */
  if (C.zf) goto L_11fe7587;
  /* 11fe7577 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fe7578 fnstsw ax */
  AX = fpu_status();
  /* 11fe757a fld xword ptr [0x1200d72c] */
  fpu_push(rf80((uint32_t)(0x1200d72c)));
  /* 11fe7580 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11fe7583 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fe7584 wait  */
  /* wait (no observable integer/reg state) */
  /* 11fe7585 fnstsw ax */
  AX = fpu_status();
L_11fe7587:;
  /* 11fe7587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe758a and edx, 0x10 */
  { uint32_t _r=(EDX)&(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe758d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe758f je 0x11fe759b */
  if (C.zf) goto L_11fe759b;
  /* 11fe7591 fld xword ptr [0x1200d738] */
  fpu_push(rf80((uint32_t)(0x1200d738)));
  /* 11fe7597 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11fe759a wait  */
  /* wait (no observable integer/reg state) */
L_11fe759b:;
  /* 11fe759b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe759e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe75a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe75a3 je 0x11fe75ae */
  if (C.zf) goto L_11fe75ae;
  /* 11fe75a5 fldz  */
  fpu_push(0.0);
  /* 11fe75a7 fld1  */
  fpu_push(1.0);
  /* 11fe75a9 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 11fe75ab fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11fe75ad wait  */
  /* wait (no observable integer/reg state) */
L_11fe75ae:;
  /* 11fe75ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe75b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe75b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe75b6 je 0x11fe75be */
  if (C.zf) goto L_11fe75be;
  /* 11fe75b8 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 11fe75ba fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11fe75bd wait  */
  /* wait (no observable integer/reg state) */
L_11fe75be:;
  /* 11fe75be pop edi */
  EDI = (pop32());
  /* 11fe75bf pop esi */
  ESI = (pop32());
  /* 11fe75c0 pop ebx */
  EBX = (pop32());
  /* 11fe75c1 mov esp, ebp */
  ESP = (EBP);
  /* 11fe75c3 pop ebp */
  EBP = (pop32());
  /* 11fe75c4 ret  */
  ESPCHK(0x11fe7550u, _esp0);
  ESP += 4; return;
}

/* FUN_100175d0 @ 0x11fe75d0 (421 bytes, 148 insns) */
void f_11fe75d0(void) {
  FTRACE(0x11fe75d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe75d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe75d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe75d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fe75d5 push 0x1200a258 */
  push32((uint32_t)(0x1200a258u));
  /* 11fe75da push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fe75df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fe75e5 push eax */
  push32((uint32_t)(EAX));
  /* 11fe75e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fe75ed add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe75f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe75f1 push esi */
  push32((uint32_t)(ESI));
  /* 11fe75f2 push edi */
  push32((uint32_t)(EDI));
  /* 11fe75f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fe75f6 cmp dword ptr [0x1200f1e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe75fd jne 0x11fe764e */
  if (!C.zf) goto L_11fe764e;
  /* 11fe75ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11fe7602 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7603 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe7605 push 0x1200a254 */
  push32((uint32_t)(0x1200a254u));
  /* 11fe760a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe760c call dword ptr [0x1201136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201136c))), 0x11fe7612u);
  /* 11fe7612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7614 je 0x11fe7622 */
  if (C.zf) goto L_11fe7622;
  /* 11fe7616 mov dword ptr [0x1200f1e0], 1 */
  w32((uint32_t)(0x1200f1e0), (0x1u));
  /* 11fe7620 jmp 0x11fe764e */
  goto L_11fe764e;
L_11fe7622:;
  /* 11fe7622 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11fe7625 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7626 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe7628 push 0x1200a250 */
  push32((uint32_t)(0x1200a250u));
  /* 11fe762d push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe762f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe7631 call dword ptr [0x12011364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011364))), 0x11fe7637u);
  /* 11fe7637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7639 je 0x11fe7647 */
  if (C.zf) goto L_11fe7647;
  /* 11fe763b mov dword ptr [0x1200f1e0], 2 */
  w32((uint32_t)(0x1200f1e0), (0x2u));
  /* 11fe7645 jmp 0x11fe764e */
  goto L_11fe764e;
L_11fe7647:;
  /* 11fe7647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7649 jmp 0x11fe7778 */
  goto L_11fe7778;
L_11fe764e:;
  /* 11fe764e cmp dword ptr [0x1200f1e0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1e0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7655 jne 0x11fe7685 */
  if (!C.zf) goto L_11fe7685;
  /* 11fe7657 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe765b jne 0x11fe7666 */
  if (!C.zf) goto L_11fe7666;
  /* 11fe765d mov edx, dword ptr [0x1200f1f8] */
  EDX = (r32((uint32_t)(0x1200f1f8)));
  /* 11fe7663 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11fe7666:;
  /* 11fe7666 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe7669 push eax */
  push32((uint32_t)(EAX));
  /* 11fe766a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe766d push ecx */
  push32((uint32_t)(ECX));
  /* 11fe766e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7671 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7675 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7676 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe7679 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe767a call dword ptr [0x12011364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011364))), 0x11fe7680u);
  /* 11fe7680 jmp 0x11fe7778 */
  goto L_11fe7778;
L_11fe7685:;
  /* 11fe7685 cmp dword ptr [0x1200f1e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe768c jne 0x11fe7776 */
  if (!C.zf) goto L_11fe7776;
  /* 11fe7692 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7696 jne 0x11fe76a1 */
  if (!C.zf) goto L_11fe76a1;
  /* 11fe7698 mov edx, dword ptr [0x1200f208] */
  EDX = (r32((uint32_t)(0x1200f208)));
  /* 11fe769e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11fe76a1:;
  /* 11fe76a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe76a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe76a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe76a8 push eax */
  push32((uint32_t)(EAX));
  /* 11fe76a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe76ac push ecx */
  push32((uint32_t)(ECX));
  /* 11fe76ad mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe76b0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe76b2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe76b4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe76b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe76ba push edx */
  push32((uint32_t)(EDX));
  /* 11fe76bb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe76be push eax */
  push32((uint32_t)(EAX));
  /* 11fe76bf call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11fe76c5u);
  /* 11fe76c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11fe76c8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe76cc jne 0x11fe76d5 */
  if (!C.zf) goto L_11fe76d5;
  /* 11fe76ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe76d0 jmp 0x11fe7778 */
  goto L_11fe7778;
L_11fe76d5:;
  /* 11fe76d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe76dc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe76df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fe76e1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe76e4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fe76e6 call 0x11fdfac0 */
  push32(0x11fe76ebu); f_11fdfac0();
  /* 11fe76eb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11fe76ee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fe76f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe76f4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fe76f7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe76fa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe76fc push edx */
  push32((uint32_t)(EDX));
  /* 11fe76fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe76ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe7702 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7703 call 0x11fe15d0 */
  push32(0x11fe7708u); f_11fe15d0();
  /* 11fe7708 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe770b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fe7712 jmp 0x11fe772b */
  goto L_11fe772b;
  /* 11fe7714 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe7719 ret  */
  ESPCHK(0x11fe75d0u, _esp0);
  ESP += 4; return;
  /* 11fe771a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe771d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fe7724 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fe772b:;
  /* 11fe772b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe772f jne 0x11fe7735 */
  if (!C.zf) goto L_11fe7735;
  /* 11fe7731 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7733 jmp 0x11fe7778 */
  goto L_11fe7778;
L_11fe7735:;
  /* 11fe7735 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe7738 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7739 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe773c push edx */
  push32((uint32_t)(EDX));
  /* 11fe773d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe7740 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7741 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7744 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7745 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe7747 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe774a push edx */
  push32((uint32_t)(EDX));
  /* 11fe774b call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11fe7751u);
  /* 11fe7751 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fe7754 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7758 jne 0x11fe775e */
  if (!C.zf) goto L_11fe775e;
  /* 11fe775a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe775c jmp 0x11fe7778 */
  goto L_11fe7778;
L_11fe775e:;
  /* 11fe775e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe7761 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7762 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe7765 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7766 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe7769 push edx */
  push32((uint32_t)(EDX));
  /* 11fe776a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe776d push eax */
  push32((uint32_t)(EAX));
  /* 11fe776e call dword ptr [0x1201136c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201136c))), 0x11fe7774u);
  /* 11fe7774 jmp 0x11fe7778 */
  goto L_11fe7778;
L_11fe7776:;
  /* 11fe7776 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe7778:;
  /* 11fe7778 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11fe777b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe777e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fe7785 pop edi */
  EDI = (pop32());
  /* 11fe7786 pop esi */
  ESI = (pop32());
  /* 11fe7787 pop ebx */
  EBX = (pop32());
  /* 11fe7788 mov esp, ebp */
  ESP = (EBP);
  /* 11fe778a pop ebp */
  EBP = (pop32());
  /* 11fe778b ret  */
  ESPCHK(0x11fe75d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017790 @ 0x11fe7790 (1007 bytes, 269 insns) */
void f_11fe7790(void) {
  FTRACE(0x11fe7790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7790 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7791 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7793 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe7799 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe779d jl 0x11fe77a5 */
  if ((C.sf!=C.of)) goto L_11fe77a5;
  /* 11fe779f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe77a3 jle 0x11fe77ac */
  if ((C.zf||C.sf!=C.of)) goto L_11fe77ac;
L_11fe77a5:;
  /* 11fe77a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe77a7 jmp 0x11fe7b7b */
  goto L_11fe7b7b;
L_11fe77ac:;
  /* 11fe77ac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fe77ae call 0x11fdb0c0 */
  push32(0x11fe77b3u); f_11fdb0c0();
  /* 11fe77b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe77b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fe77bd mov eax, dword ptr [0x12010604] */
  EAX = (r32((uint32_t)(0x12010604)));
  /* 11fe77c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe77c5 mov dword ptr [0x12010604], eax */
  w32((uint32_t)(0x12010604), (EAX));
L_11fe77ca:;
  /* 11fe77ca cmp dword ptr [0x12010614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe77d1 je 0x11fe77dd */
  if (C.zf) goto L_11fe77dd;
  /* 11fe77d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe77d5 call dword ptr [0x1201135c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201135c))), 0x11fe77dbu);
  /* 11fe77db jmp 0x11fe77ca */
  goto L_11fe77ca;
L_11fe77dd:;
  /* 11fe77dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe77e1 je 0x11fe7821 */
  if (C.zf) goto L_11fe7821;
  /* 11fe77e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe77e7 je 0x11fe7801 */
  if (C.zf) goto L_11fe7801;
  /* 11fe77e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe77ec push ecx */
  push32((uint32_t)(ECX));
  /* 11fe77ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe77f0 push edx */
  push32((uint32_t)(EDX));
  /* 11fe77f1 call 0x11fe7b80 */
  push32(0x11fe77f6u); f_11fe7b80();
  /* 11fe77f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe77f9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11fe77ff jmp 0x11fe7813 */
  goto L_11fe7813;
L_11fe7801:;
  /* 11fe7801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7804 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7807 mov ecx, dword ptr [eax + 0x1200d854] */
  ECX = (r32((uint32_t)(EAX + 0x1200d854)));
  /* 11fe780d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11fe7813:;
  /* 11fe7813 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11fe7819 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe781c jmp 0x11fe7b5b */
  goto L_11fe7b5b;
L_11fe7821:;
  /* 11fe7821 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11fe7828 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe782f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7833 je 0x11fe7b53 */
  if (C.zf) goto L_11fe7b53;
  /* 11fe7839 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe783c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe783f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7842 jne 0x11fe7a64 */
  if (!C.zf) goto L_11fe7a64;
  /* 11fe7848 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe784b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fe784f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7852 jne 0x11fe7a64 */
  if (!C.zf) goto L_11fe7a64;
  /* 11fe7858 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe785b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11fe785f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7862 jne 0x11fe7a64 */
  if (!C.zf) goto L_11fe7a64;
  /* 11fe7868 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe786b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11fe7871:;
  /* 11fe7871 push 0x1200a2a8 */
  push32((uint32_t)(0x1200a2a8u));
  /* 11fe7876 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fe787c push ecx */
  push32((uint32_t)(ECX));
  /* 11fe787d call 0x11febce0 */
  push32(0x11fe7882u); f_11febce0();
  /* 11fe7882 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7885 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11fe788b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7892 je 0x11fe78bd */
  if (C.zf) goto L_11fe78bd;
  /* 11fe7894 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fe789a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe78a0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11fe78a6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe78ad je 0x11fe78bd */
  if (C.zf) goto L_11fe78bd;
  /* 11fe78af mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fe78b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe78b8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe78bb jne 0x11fe78e3 */
  if (!C.zf) goto L_11fe78e3;
L_11fe78bd:;
  /* 11fe78bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe78c1 je 0x11fe78dc */
  if (C.zf) goto L_11fe78dc;
  /* 11fe78c3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fe78c5 call 0x11fdb160 */
  push32(0x11fe78cau); f_11fdb160();
  /* 11fe78ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe78cd mov edx, dword ptr [0x12010604] */
  EDX = (r32((uint32_t)(0x12010604)));
  /* 11fe78d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe78d6 mov dword ptr [0x12010604], edx */
  w32((uint32_t)(0x12010604), (EDX));
L_11fe78dc:;
  /* 11fe78dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe78de jmp 0x11fe7b7b */
  goto L_11fe7b7b;
L_11fe78e3:;
  /* 11fe78e3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11fe78ea jmp 0x11fe78f5 */
  goto L_11fe78f5;
L_11fe78ec:;
  /* 11fe78ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe78ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe78f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11fe78f5:;
  /* 11fe78f5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe78f9 jg 0x11fe7943 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe7943;
  /* 11fe78fb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11fe7901 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7902 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fe7908 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7909 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe790c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe790f mov ecx, dword ptr [eax + 0x1200d850] */
  ECX = (r32((uint32_t)(EAX + 0x1200d850)));
  /* 11fe7915 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7916 call 0x11febca0 */
  push32(0x11fe791bu); f_11febca0();
  /* 11fe791b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe791e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7920 jne 0x11fe7941 */
  if (!C.zf) goto L_11fe7941;
  /* 11fe7922 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe7925 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7928 mov eax, dword ptr [edx + 0x1200d850] */
  EAX = (r32((uint32_t)(EDX + 0x1200d850)));
  /* 11fe792e push eax */
  push32((uint32_t)(EAX));
  /* 11fe792f call 0x11fdf750 */
  push32(0x11fe7934u); f_11fdf750();
  /* 11fe7934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7937 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe793d jne 0x11fe7941 */
  if (!C.zf) goto L_11fe7941;
  /* 11fe793f jmp 0x11fe7943 */
  goto L_11fe7943;
L_11fe7941:;
  /* 11fe7941 jmp 0x11fe78ec */
  goto L_11fe78ec;
L_11fe7943:;
  /* 11fe7943 push 0x1200a2a4 */
  push32((uint32_t)(0x1200a2a4u));
  /* 11fe7948 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fe794e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7951 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11fe7957 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fe795d push edx */
  push32((uint32_t)(EDX));
  /* 11fe795e call 0x11febc60 */
  push32(0x11fe7963u); f_11febc60();
  /* 11fe7963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7966 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11fe796c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7973 jne 0x11fe79a9 */
  if (!C.zf) goto L_11fe79a9;
  /* 11fe7975 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fe797b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe797e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7981 je 0x11fe79a9 */
  if (C.zf) goto L_11fe79a9;
  /* 11fe7983 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7987 je 0x11fe79a2 */
  if (C.zf) goto L_11fe79a2;
  /* 11fe7989 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fe798b call 0x11fdb160 */
  push32(0x11fe7990u); f_11fdb160();
  /* 11fe7990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7993 mov edx, dword ptr [0x12010604] */
  EDX = (r32((uint32_t)(0x12010604)));
  /* 11fe7999 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe799c mov dword ptr [0x12010604], edx */
  w32((uint32_t)(0x12010604), (EDX));
L_11fe79a2:;
  /* 11fe79a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe79a4 jmp 0x11fe7b7b */
  goto L_11fe7b7b;
L_11fe79a9:;
  /* 11fe79a9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe79ad jg 0x11fe79fa */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe79fa;
  /* 11fe79af mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11fe79b5 push eax */
  push32((uint32_t)(EAX));
  /* 11fe79b6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fe79bc push ecx */
  push32((uint32_t)(ECX));
  /* 11fe79bd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11fe79c3 push edx */
  push32((uint32_t)(EDX));
  /* 11fe79c4 call 0x11fe0140 */
  push32(0x11fe79c9u); f_11fe0140();
  /* 11fe79c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe79cc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11fe79d2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11fe79da lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11fe79e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe79e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe79e4 push edx */
  push32((uint32_t)(EDX));
  /* 11fe79e5 call 0x11fe7b80 */
  push32(0x11fe79eau); f_11fe7b80();
  /* 11fe79ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe79ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe79ef je 0x11fe79fa */
  if (C.zf) goto L_11fe79fa;
  /* 11fe79f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe79f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe79f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fe79fa:;
  /* 11fe79fa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fe7a00 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7a06 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11fe7a0c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fe7a12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe7a15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7a17 je 0x11fe7a28 */
  if (C.zf) goto L_11fe7a28;
  /* 11fe7a19 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fe7a1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7a22 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11fe7a28:;
  /* 11fe7a28 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fe7a2e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe7a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7a33 jne 0x11fe7871 */
  if (!C.zf) goto L_11fe7871;
  /* 11fe7a39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7a3d je 0x11fe7a4c */
  if (C.zf) goto L_11fe7a4c;
  /* 11fe7a3f call 0x11fe7d20 */
  push32(0x11fe7a44u); f_11fe7d20();
  /* 11fe7a44 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11fe7a4a jmp 0x11fe7a56 */
  goto L_11fe7a56;
L_11fe7a4c:;
  /* 11fe7a4c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11fe7a56:;
  /* 11fe7a56 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11fe7a5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe7a5f jmp 0x11fe7b51 */
  goto L_11fe7b51;
L_11fe7a64:;
  /* 11fe7a64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7a67 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe7a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe7a6c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11fe7a72 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7a73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7a76 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7a77 call 0x11fe7e20 */
  push32(0x11fe7a7cu); f_11fe7e20();
  /* 11fe7a7c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7a7f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe7a82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7a86 je 0x11fe7b51 */
  if (C.zf) goto L_11fe7b51;
  /* 11fe7a8c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fe7a93 jmp 0x11fe7a9e */
  goto L_11fe7a9e;
L_11fe7a95:;
  /* 11fe7a95 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe7a98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7a9b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fe7a9e:;
  /* 11fe7a9e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7aa2 jg 0x11fe7b00 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe7b00;
  /* 11fe7aa4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7aa8 je 0x11fe7afe */
  if (C.zf) goto L_11fe7afe;
  /* 11fe7aaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe7aad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7ab0 mov ecx, dword ptr [eax + 0x1200d854] */
  ECX = (r32((uint32_t)(EAX + 0x1200d854)));
  /* 11fe7ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7ab7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11fe7abd push edx */
  push32((uint32_t)(EDX));
  /* 11fe7abe call 0x11fe3d60 */
  push32(0x11fe7ac3u); f_11fe3d60();
  /* 11fe7ac3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7ac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7ac8 je 0x11fe7af5 */
  if (C.zf) goto L_11fe7af5;
  /* 11fe7aca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11fe7ad0 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7ad1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe7ad4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7ad5 call 0x11fe7b80 */
  push32(0x11fe7adau); f_11fe7b80();
  /* 11fe7ada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7add test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7adf je 0x11fe7aec */
  if (C.zf) goto L_11fe7aec;
  /* 11fe7ae1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe7ae4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7ae7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fe7aea jmp 0x11fe7af3 */
  goto L_11fe7af3;
L_11fe7aec:;
  /* 11fe7aec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11fe7af3:;
  /* 11fe7af3 jmp 0x11fe7afe */
  goto L_11fe7afe;
L_11fe7af5:;
  /* 11fe7af5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe7af8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7afb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fe7afe:;
  /* 11fe7afe jmp 0x11fe7a95 */
  goto L_11fe7a95;
L_11fe7b00:;
  /* 11fe7b00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7b04 je 0x11fe7b2b */
  if (C.zf) goto L_11fe7b2b;
  /* 11fe7b06 call 0x11fe7d20 */
  push32(0x11fe7b0bu); f_11fe7d20();
  /* 11fe7b0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe7b0e push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe7b10 mov ecx, dword ptr [0x1200d854] */
  ECX = (r32((uint32_t)(0x1200d854)));
  /* 11fe7b16 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7b17 call 0x11fdbc50 */
  push32(0x11fe7b1cu); f_11fdbc50();
  /* 11fe7b1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7b1f mov dword ptr [0x1200d854], 0 */
  w32((uint32_t)(0x1200d854), (0x0u));
  /* 11fe7b29 jmp 0x11fe7b51 */
  goto L_11fe7b51;
L_11fe7b2b:;
  /* 11fe7b2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7b2f je 0x11fe7b3e */
  if (C.zf) goto L_11fe7b3e;
  /* 11fe7b31 call 0x11fe7d20 */
  push32(0x11fe7b36u); f_11fe7d20();
  /* 11fe7b36 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11fe7b3c jmp 0x11fe7b48 */
  goto L_11fe7b48;
L_11fe7b3e:;
  /* 11fe7b3e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11fe7b48:;
  /* 11fe7b48 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11fe7b4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11fe7b51:;
  /* 11fe7b51 jmp 0x11fe7b5b */
  goto L_11fe7b5b;
L_11fe7b53:;
  /* 11fe7b53 call 0x11fe7d20 */
  push32(0x11fe7b58u); f_11fe7d20();
  /* 11fe7b58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fe7b5b:;
  /* 11fe7b5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7b5f je 0x11fe7b78 */
  if (C.zf) goto L_11fe7b78;
  /* 11fe7b61 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fe7b63 call 0x11fdb160 */
  push32(0x11fe7b68u); f_11fdb160();
  /* 11fe7b68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7b6b mov eax, dword ptr [0x12010604] */
  EAX = (r32((uint32_t)(0x12010604)));
  /* 11fe7b70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe7b73 mov dword ptr [0x12010604], eax */
  w32((uint32_t)(0x12010604), (EAX));
L_11fe7b78:;
  /* 11fe7b78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11fe7b7b:;
  /* 11fe7b7b mov esp, ebp */
  ESP = (EBP);
  /* 11fe7b7d pop ebp */
  EBP = (pop32());
  /* 11fe7b7e ret  */
  ESPCHK(0x11fe7790u, _esp0);
  ESP += 4; return;
}

/* FUN_10017b80 @ 0x11fe7b80 (403 bytes, 117 insns) */
void f_11fe7b80(void) {
  FTRACE(0x11fe7b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7b81 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7b83 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe7b89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7b8c push eax */
  push32((uint32_t)(EAX));
  /* 11fe7b8d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11fe7b93 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7b94 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11fe7b9a push edx */
  push32((uint32_t)(EDX));
  /* 11fe7b9b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11fe7ba1 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7ba2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7ba6 call 0x11fe7e20 */
  push32(0x11fe7babu); f_11fe7e20();
  /* 11fe7bab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7bae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7bb0 jne 0x11fe7bb9 */
  if (!C.zf) goto L_11fe7bb9;
  /* 11fe7bb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7bb4 jmp 0x11fe7d0f */
  goto L_11fe7d0f;
L_11fe7bb9:;
  /* 11fe7bb9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11fe7bbe push 0x1200a2ac */
  push32((uint32_t)(0x1200a2acu));
  /* 11fe7bc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe7bc5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11fe7bcb push edx */
  push32((uint32_t)(EDX));
  /* 11fe7bcc call 0x11fdf750 */
  push32(0x11fe7bd1u); f_11fdf750();
  /* 11fe7bd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7bd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7bd7 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7bd8 call 0x11fdb1c0 */
  push32(0x11fe7bddu); f_11fdb1c0();
  /* 11fe7bdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7be0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe7be3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7be7 jne 0x11fe7bf0 */
  if (!C.zf) goto L_11fe7bf0;
  /* 11fe7be9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7beb jmp 0x11fe7d0f */
  goto L_11fe7d0f;
L_11fe7bf0:;
  /* 11fe7bf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7bf3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7bf6 mov ecx, dword ptr [eax + 0x1200d854] */
  ECX = (r32((uint32_t)(EAX + 0x1200d854)));
  /* 11fe7bfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe7bff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7c02 mov eax, dword ptr [edx*4 + 0x1200f1f0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1200f1f0)));
  /* 11fe7c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe7c0c push 6 */
  push32((uint32_t)(0x6u));
  /* 11fe7c0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7c11 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7c14 add ecx, 0x1200f234 */
  { uint32_t _a=(ECX),_b=(0x1200f234u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7c1a push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7c1b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11fe7c1e push edx */
  push32((uint32_t)(EDX));
  /* 11fe7c1f call 0x11fe5260 */
  push32(0x11fe7c24u); f_11fe5260();
  /* 11fe7c24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7c27 mov eax, dword ptr [0x1200f208] */
  EAX = (r32((uint32_t)(0x1200f208)));
  /* 11fe7c2c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe7c2f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11fe7c35 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7c36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe7c39 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7c3a call 0x11fdf8d0 */
  push32(0x11fe7c3fu); f_11fdf8d0();
  /* 11fe7c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7c42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7c45 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7c48 mov dword ptr [ecx + 0x1200d854], eax */
  w32((uint32_t)(ECX + 0x1200d854), (EAX));
  /* 11fe7c4e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11fe7c54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe7c5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7c5d mov dword ptr [eax*4 + 0x1200f1f0], edx */
  w32((uint32_t)(EAX*4 + 0x1200f1f0), (EDX));
  /* 11fe7c64 push 6 */
  push32((uint32_t)(0x6u));
  /* 11fe7c66 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11fe7c6c push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7c6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7c70 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7c73 add edx, 0x1200f234 */
  { uint32_t _a=(EDX),_b=(0x1200f234u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7c79 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7c7a call 0x11fe5260 */
  push32(0x11fe7c7fu); f_11fe5260();
  /* 11fe7c7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7c82 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7c86 jne 0x11fe7c93 */
  if (!C.zf) goto L_11fe7c93;
  /* 11fe7c88 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fe7c8e mov dword ptr [0x1200f208], eax */
  w32((uint32_t)(0x1200f208), (EAX));
L_11fe7c93:;
  /* 11fe7c93 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7c97 jne 0x11fe7ca5 */
  if (!C.zf) goto L_11fe7ca5;
  /* 11fe7c99 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11fe7c9f mov dword ptr [0x1200f20c], ecx */
  w32((uint32_t)(0x1200f20c), (ECX));
L_11fe7ca5:;
  /* 11fe7ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7ca8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7cab call dword ptr [edx + 0x1200d858] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1200d858))), 0x11fe7cb1u);
  /* 11fe7cb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7cb3 je 0x11fe7cec */
  if (C.zf) goto L_11fe7cec;
  /* 11fe7cb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7cb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7cbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe7cbe mov dword ptr [eax + 0x1200d854], ecx */
  w32((uint32_t)(EAX + 0x1200d854), (ECX));
  /* 11fe7cc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe7cc6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe7cc9 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7cca call 0x11fdbc50 */
  push32(0x11fe7ccfu); f_11fdbc50();
  /* 11fe7ccf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7cd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7cd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7cd8 mov dword ptr [eax*4 + 0x1200f1f0], ecx */
  w32((uint32_t)(EAX*4 + 0x1200f1f0), (ECX));
  /* 11fe7cdf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe7ce2 mov dword ptr [0x1200f208], edx */
  w32((uint32_t)(0x1200f208), (EDX));
  /* 11fe7ce8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7cea jmp 0x11fe7d0f */
  goto L_11fe7d0f;
L_11fe7cec:;
  /* 11fe7cec cmp dword ptr [ebp - 0xc], 0x1200d744 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1200d744u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7cf3 je 0x11fe7d03 */
  if (C.zf) goto L_11fe7d03;
  /* 11fe7cf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe7cf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe7cfa push eax */
  push32((uint32_t)(EAX));
  /* 11fe7cfb call 0x11fdbc50 */
  push32(0x11fe7d00u); f_11fdbc50();
  /* 11fe7d00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe7d03:;
  /* 11fe7d03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7d06 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7d09 mov eax, dword ptr [ecx + 0x1200d854] */
  EAX = (r32((uint32_t)(ECX + 0x1200d854)));
L_11fe7d0f:;
  /* 11fe7d0f mov esp, ebp */
  ESP = (EBP);
  /* 11fe7d11 pop ebp */
  EBP = (pop32());
  /* 11fe7d12 ret  */
  ESPCHK(0x11fe7b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10017d20 @ 0x11fe7d20 (256 bytes, 72 insns) */
void f_11fe7d20(void) {
  FTRACE(0x11fe7d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7d21 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7d23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe7d26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11fe7d2d cmp dword ptr [0x1200d854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200d854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7d34 jne 0x11fe7d54 */
  if (!C.zf) goto L_11fe7d54;
  /* 11fe7d36 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11fe7d3b push 0x1200a2ac */
  push32((uint32_t)(0x1200a2acu));
  /* 11fe7d40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe7d42 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11fe7d47 call 0x11fdb1c0 */
  push32(0x11fe7d4cu); f_11fdb1c0();
  /* 11fe7d4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7d4f mov dword ptr [0x1200d854], eax */
  w32((uint32_t)(0x1200d854), (EAX));
L_11fe7d54:;
  /* 11fe7d54 mov eax, dword ptr [0x1200d854] */
  EAX = (r32((uint32_t)(0x1200d854)));
  /* 11fe7d59 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11fe7d5c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fe7d63 jmp 0x11fe7d6e */
  goto L_11fe7d6e;
L_11fe7d65:;
  /* 11fe7d65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7d68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7d6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe7d6e:;
  /* 11fe7d6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7d71 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7d74 mov eax, dword ptr [edx + 0x1200d854] */
  EAX = (r32((uint32_t)(EDX + 0x1200d854)));
  /* 11fe7d7a push eax */
  push32((uint32_t)(EAX));
  /* 11fe7d7b push 0x1200a2b8 */
  push32((uint32_t)(0x1200a2b8u));
  /* 11fe7d80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7d83 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7d86 mov edx, dword ptr [ecx + 0x1200d850] */
  EDX = (r32((uint32_t)(ECX + 0x1200d850)));
  /* 11fe7d8c push edx */
  push32((uint32_t)(EDX));
  /* 11fe7d8d push 3 */
  push32((uint32_t)(0x3u));
  /* 11fe7d8f mov eax, dword ptr [0x1200d854] */
  EAX = (r32((uint32_t)(0x1200d854)));
  /* 11fe7d94 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7d95 call 0x11fe7fc0 */
  push32(0x11fe7d9au); f_11fe7fc0();
  /* 11fe7d9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7d9d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7da1 jge 0x11fe7de9 */
  if ((C.sf==C.of)) goto L_11fe7de9;
  /* 11fe7da3 push 0x1200a2a4 */
  push32((uint32_t)(0x1200a2a4u));
  /* 11fe7da8 mov ecx, dword ptr [0x1200d854] */
  ECX = (r32((uint32_t)(0x1200d854)));
  /* 11fe7dae push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7daf call 0x11fdf8e0 */
  push32(0x11fe7db4u); f_11fdf8e0();
  /* 11fe7db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7db7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7dba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7dbd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7dc0 mov eax, dword ptr [edx + 0x1200d854] */
  EAX = (r32((uint32_t)(EDX + 0x1200d854)));
  /* 11fe7dc6 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7dc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7dca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe7dcd mov edx, dword ptr [ecx + 0x1200d854] */
  EDX = (r32((uint32_t)(ECX + 0x1200d854)));
  /* 11fe7dd3 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7dd4 call 0x11fe3d60 */
  push32(0x11fe7dd9u); f_11fe3d60();
  /* 11fe7dd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7ddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7dde je 0x11fe7de7 */
  if (C.zf) goto L_11fe7de7;
  /* 11fe7de0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fe7de7:;
  /* 11fe7de7 jmp 0x11fe7e17 */
  goto L_11fe7e17;
L_11fe7de9:;
  /* 11fe7de9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7ded jne 0x11fe7df6 */
  if (!C.zf) goto L_11fe7df6;
  /* 11fe7def mov eax, dword ptr [0x1200d854] */
  EAX = (r32((uint32_t)(0x1200d854)));
  /* 11fe7df4 jmp 0x11fe7e1c */
  goto L_11fe7e1c;
L_11fe7df6:;
  /* 11fe7df6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe7df8 mov eax, dword ptr [0x1200d854] */
  EAX = (r32((uint32_t)(0x1200d854)));
  /* 11fe7dfd push eax */
  push32((uint32_t)(EAX));
  /* 11fe7dfe call 0x11fdbc50 */
  push32(0x11fe7e03u); f_11fdbc50();
  /* 11fe7e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7e06 mov dword ptr [0x1200d854], 0 */
  w32((uint32_t)(0x1200d854), (0x0u));
  /* 11fe7e10 mov eax, dword ptr [0x1200d86c] */
  EAX = (r32((uint32_t)(0x1200d86c)));
  /* 11fe7e15 jmp 0x11fe7e1c */
  goto L_11fe7e1c;
L_11fe7e17:;
  /* 11fe7e17 jmp 0x11fe7d65 */
  goto L_11fe7d65;
L_11fe7e1c:;
  /* 11fe7e1c mov esp, ebp */
  ESP = (EBP);
  /* 11fe7e1e pop ebp */
  EBP = (pop32());
  /* 11fe7e1f ret  */
  ESPCHK(0x11fe7d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e20 @ 0x11fe7e20 (388 bytes, 115 insns) */
void f_11fe7e20(void) {
  FTRACE(0x11fe7e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7e21 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7e23 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe7e29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7e2d jne 0x11fe7e36 */
  if (!C.zf) goto L_11fe7e36;
  /* 11fe7e2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7e31 jmp 0x11fe7fa0 */
  goto L_11fe7fa0;
L_11fe7e36:;
  /* 11fe7e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7e39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe7e3c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7e3f jne 0x11fe7e90 */
  if (!C.zf) goto L_11fe7e90;
  /* 11fe7e41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7e44 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fe7e48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7e4a jne 0x11fe7e90 */
  if (!C.zf) goto L_11fe7e90;
  /* 11fe7e4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7e4f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11fe7e52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7e55 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11fe7e59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7e5d je 0x11fe7e79 */
  if (C.zf) goto L_11fe7e79;
  /* 11fe7e5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe7e62 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11fe7e67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe7e6a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11fe7e70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe7e73 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11fe7e79:;
  /* 11fe7e79 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7e7d je 0x11fe7e88 */
  if (C.zf) goto L_11fe7e88;
  /* 11fe7e7f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe7e82 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11fe7e88:;
  /* 11fe7e88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7e8b jmp 0x11fe7fa0 */
  goto L_11fe7fa0;
L_11fe7e90:;
  /* 11fe7e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7e93 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7e94 push 0x1200d7cc */
  push32((uint32_t)(0x1200d7ccu));
  /* 11fe7e99 call 0x11fe3d60 */
  push32(0x11fe7e9eu); f_11fe3d60();
  /* 11fe7e9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7ea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7ea3 je 0x11fe7f58 */
  if (C.zf) goto L_11fe7f58;
  /* 11fe7ea9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7eac push edx */
  push32((uint32_t)(EDX));
  /* 11fe7ead push 0x1200d748 */
  push32((uint32_t)(0x1200d748u));
  /* 11fe7eb2 call 0x11fe3d60 */
  push32(0x11fe7eb7u); f_11fe3d60();
  /* 11fe7eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7ebc je 0x11fe7f58 */
  if (C.zf) goto L_11fe7f58;
  /* 11fe7ec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7ec5 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7ec6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11fe7ecc push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7ecd call 0x11fe8010 */
  push32(0x11fe7ed2u); f_11fe8010();
  /* 11fe7ed2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7ed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7ed7 je 0x11fe7ee0 */
  if (C.zf) goto L_11fe7ee0;
  /* 11fe7ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7edb jmp 0x11fe7fa0 */
  goto L_11fe7fa0;
L_11fe7ee0:;
  /* 11fe7ee0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11fe7ee6 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7ee7 push 0x1200f1e4 */
  push32((uint32_t)(0x1200f1e4u));
  /* 11fe7eec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11fe7ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7ef3 call 0x11febd20 */
  push32(0x11fe7ef8u); f_11febd20();
  /* 11fe7ef8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7efb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe7efd jne 0x11fe7f06 */
  if (!C.zf) goto L_11fe7f06;
  /* 11fe7eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7f01 jmp 0x11fe7fa0 */
  goto L_11fe7fa0;
L_11fe7f06:;
  /* 11fe7f06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe7f08 mov cx, word ptr [0x1200f1e8] */
  CX = (r16((uint32_t)(0x1200f1e8)));
  /* 11fe7f0f mov dword ptr [0x1200f1ec], ecx */
  w32((uint32_t)(0x1200f1ec), (ECX));
  /* 11fe7f15 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11fe7f1b push edx */
  push32((uint32_t)(EDX));
  /* 11fe7f1c push 0x1200d7cc */
  push32((uint32_t)(0x1200d7ccu));
  /* 11fe7f21 call 0x11fe8170 */
  push32(0x11fe7f26u); f_11fe8170();
  /* 11fe7f26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7f29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7f2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe7f2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe7f31 je 0x11fe7f46 */
  if (C.zf) goto L_11fe7f46;
  /* 11fe7f33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7f36 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7f37 push 0x1200d748 */
  push32((uint32_t)(0x1200d748u));
  /* 11fe7f3c call 0x11fdf8d0 */
  push32(0x11fe7f41u); f_11fdf8d0();
  /* 11fe7f41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7f44 jmp 0x11fe7f58 */
  goto L_11fe7f58;
L_11fe7f46:;
  /* 11fe7f46 push 0x1200d7cc */
  push32((uint32_t)(0x1200d7ccu));
  /* 11fe7f4b push 0x1200d748 */
  push32((uint32_t)(0x1200d748u));
  /* 11fe7f50 call 0x11fdf8d0 */
  push32(0x11fe7f55u); f_11fdf8d0();
  /* 11fe7f55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe7f58:;
  /* 11fe7f58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7f5c je 0x11fe7f71 */
  if (C.zf) goto L_11fe7f71;
  /* 11fe7f5e push 6 */
  push32((uint32_t)(0x6u));
  /* 11fe7f60 push 0x1200f1e4 */
  push32((uint32_t)(0x1200f1e4u));
  /* 11fe7f65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe7f68 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7f69 call 0x11fe5260 */
  push32(0x11fe7f6eu); f_11fe5260();
  /* 11fe7f6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe7f71:;
  /* 11fe7f71 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7f75 je 0x11fe7f8a */
  if (C.zf) goto L_11fe7f8a;
  /* 11fe7f77 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe7f79 push 0x1200f1ec */
  push32((uint32_t)(0x1200f1ecu));
  /* 11fe7f7e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe7f81 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe7f82 call 0x11fe5260 */
  push32(0x11fe7f87u); f_11fe5260();
  /* 11fe7f87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe7f8a:;
  /* 11fe7f8a push 0x1200d7cc */
  push32((uint32_t)(0x1200d7ccu));
  /* 11fe7f8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe7f92 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7f93 call 0x11fdf8d0 */
  push32(0x11fe7f98u); f_11fdf8d0();
  /* 11fe7f98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7f9b mov eax, 0x1200d7cc */
  EAX = (0x1200d7ccu);
L_11fe7fa0:;
  /* 11fe7fa0 mov esp, ebp */
  ESP = (EBP);
  /* 11fe7fa2 pop ebp */
  EBP = (pop32());
  /* 11fe7fa3 ret  */
  ESPCHK(0x11fe7e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fb0 @ 0x11fe7fb0 (7 bytes, 5 insns) */
void f_11fe7fb0(void) {
  FTRACE(0x11fe7fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7fb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe7fb5 pop ebp */
  EBP = (pop32());
  /* 11fe7fb6 ret  */
  ESPCHK(0x11fe7fb0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11fe7fc0 (79 bytes, 28 insns) */
void f_11fe7fc0(void) {
  FTRACE(0x11fe7fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe7fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe7fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe7fc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe7fc6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11fe7fc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe7fcc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe7fd3 jmp 0x11fe7fde */
  goto L_11fe7fde;
L_11fe7fd5:;
  /* 11fe7fd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe7fd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7fdb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fe7fde:;
  /* 11fe7fde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe7fe1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe7fe4 jge 0x11fe8004 */
  if ((C.sf==C.of)) goto L_11fe8004;
  /* 11fe7fe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7fe9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe7fec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe7fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe7ff2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11fe7ff5 push edx */
  push32((uint32_t)(EDX));
  /* 11fe7ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe7ff9 push eax */
  push32((uint32_t)(EAX));
  /* 11fe7ffa call 0x11fdf8e0 */
  push32(0x11fe7fffu); f_11fdf8e0();
  /* 11fe7fff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8002 jmp 0x11fe7fd5 */
  goto L_11fe7fd5;
L_11fe8004:;
  /* 11fe8004 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe800b mov esp, ebp */
  ESP = (EBP);
  /* 11fe800d pop ebp */
  EBP = (pop32());
  /* 11fe800e ret  */
  ESPCHK(0x11fe7fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018010 @ 0x11fe8010 (349 bytes, 122 insns) */
void f_11fe8010(void) {
  FTRACE(0x11fe8010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe8010 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe8011 mov ebp, esp */
  EBP = (ESP);
  /* 11fe8013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8016 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11fe801b push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe801d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8020 push eax */
  push32((uint32_t)(EAX));
  /* 11fe8021 call 0x11fe15d0 */
  push32(0x11fe8026u); f_11fe15d0();
  /* 11fe8026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8029 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe802c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe802f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe8031 jne 0x11fe803a */
  if (!C.zf) goto L_11fe803a;
  /* 11fe8033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8035 jmp 0x11fe8169 */
  goto L_11fe8169;
L_11fe803a:;
  /* 11fe803a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe803d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe8040 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8043 jne 0x11fe8070 */
  if (!C.zf) goto L_11fe8070;
  /* 11fe8045 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe8048 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11fe804c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe804e je 0x11fe8070 */
  if (C.zf) goto L_11fe8070;
  /* 11fe8050 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe8053 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8056 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8057 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe805a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8060 push edx */
  push32((uint32_t)(EDX));
  /* 11fe8061 call 0x11fdf8d0 */
  push32(0x11fe8066u); f_11fdf8d0();
  /* 11fe8066 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8069 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe806b jmp 0x11fe8169 */
  goto L_11fe8169;
L_11fe8070:;
  /* 11fe8070 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe8077 jmp 0x11fe8082 */
  goto L_11fe8082;
L_11fe8079:;
  /* 11fe8079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe807c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe807f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe8082:;
  /* 11fe8082 push 0x1200a2bc */
  push32((uint32_t)(0x1200a2bcu));
  /* 11fe8087 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe808a push ecx */
  push32((uint32_t)(ECX));
  /* 11fe808b call 0x11febc60 */
  push32(0x11fe8090u); f_11febc60();
  /* 11fe8090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8093 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe8096 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe809a jne 0x11fe80a4 */
  if (!C.zf) goto L_11fe80a4;
  /* 11fe809c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe809f jmp 0x11fe8169 */
  goto L_11fe8169;
L_11fe80a4:;
  /* 11fe80a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe80a7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe80aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe80ac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11fe80af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe80b3 jne 0x11fe80da */
  if (!C.zf) goto L_11fe80da;
  /* 11fe80b5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe80b9 jge 0x11fe80da */
  if ((C.sf==C.of)) goto L_11fe80da;
  /* 11fe80bb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fe80bf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe80c2 je 0x11fe80da */
  if (C.zf) goto L_11fe80da;
  /* 11fe80c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe80c7 push edx */
  push32((uint32_t)(EDX));
  /* 11fe80c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe80cb push eax */
  push32((uint32_t)(EAX));
  /* 11fe80cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe80cf push ecx */
  push32((uint32_t)(ECX));
  /* 11fe80d0 call 0x11fe0140 */
  push32(0x11fe80d5u); f_11fe0140();
  /* 11fe80d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe80d8 jmp 0x11fe8140 */
  goto L_11fe8140;
L_11fe80da:;
  /* 11fe80da cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe80de jne 0x11fe8108 */
  if (!C.zf) goto L_11fe8108;
  /* 11fe80e0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe80e4 jge 0x11fe8108 */
  if ((C.sf==C.of)) goto L_11fe8108;
  /* 11fe80e6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fe80ea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe80ed je 0x11fe8108 */
  if (C.zf) goto L_11fe8108;
  /* 11fe80ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe80f2 push eax */
  push32((uint32_t)(EAX));
  /* 11fe80f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe80f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe80f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe80fa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe80fd push edx */
  push32((uint32_t)(EDX));
  /* 11fe80fe call 0x11fe0140 */
  push32(0x11fe8103u); f_11fe0140();
  /* 11fe8103 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8106 jmp 0x11fe8140 */
  goto L_11fe8140;
L_11fe8108:;
  /* 11fe8108 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe810c jne 0x11fe813b */
  if (!C.zf) goto L_11fe813b;
  /* 11fe810e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fe8112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe8114 je 0x11fe811f */
  if (C.zf) goto L_11fe811f;
  /* 11fe8116 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fe811a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe811d jne 0x11fe813b */
  if (!C.zf) goto L_11fe813b;
L_11fe811f:;
  /* 11fe811f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe8122 push edx */
  push32((uint32_t)(EDX));
  /* 11fe8123 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe8126 push eax */
  push32((uint32_t)(EAX));
  /* 11fe8127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe812a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8130 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8131 call 0x11fe0140 */
  push32(0x11fe8136u); f_11fe0140();
  /* 11fe8136 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8139 jmp 0x11fe8140 */
  goto L_11fe8140;
L_11fe813b:;
  /* 11fe813b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe813e jmp 0x11fe8169 */
  goto L_11fe8169;
L_11fe8140:;
  /* 11fe8140 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fe8144 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8147 jne 0x11fe814b */
  if (!C.zf) goto L_11fe814b;
  /* 11fe8149 jmp 0x11fe8167 */
  goto L_11fe8167;
L_11fe814b:;
  /* 11fe814b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fe814f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe8151 jne 0x11fe8155 */
  if (!C.zf) goto L_11fe8155;
  /* 11fe8153 jmp 0x11fe8167 */
  goto L_11fe8167;
L_11fe8155:;
  /* 11fe8155 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe8158 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe815b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11fe815f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11fe8162 jmp 0x11fe8079 */
  goto L_11fe8079;
L_11fe8167:;
  /* 11fe8167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe8169:;
  /* 11fe8169 mov esp, ebp */
  ESP = (EBP);
  /* 11fe816b pop ebp */
  EBP = (pop32());
  /* 11fe816c ret  */
  ESPCHK(0x11fe8010u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11fe8170 (101 bytes, 36 insns) */
void f_11fe8170(void) {
  FTRACE(0x11fe8170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe8170 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe8171 mov ebp, esp */
  EBP = (ESP);
  /* 11fe8173 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe8176 push eax */
  push32((uint32_t)(EAX));
  /* 11fe8177 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe817a push ecx */
  push32((uint32_t)(ECX));
  /* 11fe817b call 0x11fdf8d0 */
  push32(0x11fe8180u); f_11fdf8d0();
  /* 11fe8180 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8183 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe8186 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11fe818a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe818c je 0x11fe81a8 */
  if (C.zf) goto L_11fe81a8;
  /* 11fe818e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe8191 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8194 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8195 push 0x1200a2c4 */
  push32((uint32_t)(0x1200a2c4u));
  /* 11fe819a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe819c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe819f push edx */
  push32((uint32_t)(EDX));
  /* 11fe81a0 call 0x11fe7fc0 */
  push32(0x11fe81a5u); f_11fe7fc0();
  /* 11fe81a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe81a8:;
  /* 11fe81a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe81ab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11fe81b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe81b4 je 0x11fe81d3 */
  if (C.zf) goto L_11fe81d3;
  /* 11fe81b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe81b9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe81bf push edx */
  push32((uint32_t)(EDX));
  /* 11fe81c0 push 0x1200a2c0 */
  push32((uint32_t)(0x1200a2c0u));
  /* 11fe81c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe81c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe81ca push eax */
  push32((uint32_t)(EAX));
  /* 11fe81cb call 0x11fe7fc0 */
  push32(0x11fe81d0u); f_11fe7fc0();
  /* 11fe81d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe81d3:;
  /* 11fe81d3 pop ebp */
  EBP = (pop32());
  /* 11fe81d4 ret  */
  ESPCHK(0x11fe8170u, _esp0);
  ESP += 4; return;
}

/* FUN_100181e0 @ 0x11fe81e0 (727 bytes, 263 insns) */
void f_11fe81e0(void) {
  FTRACE(0x11fe81e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe81e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe81e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe81e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fe81e5 push 0x1200a2c8 */
  push32((uint32_t)(0x1200a2c8u));
  /* 11fe81ea push 0x11fe3dec */
  push32((uint32_t)(0x11fe3decu));
  /* 11fe81ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11fe81f5 push eax */
  push32((uint32_t)(EAX));
  /* 11fe81f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11fe81fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8200 push ebx */
  push32((uint32_t)(EBX));
  /* 11fe8201 push esi */
  push32((uint32_t)(ESI));
  /* 11fe8202 push edi */
  push32((uint32_t)(EDI));
  /* 11fe8203 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fe8206 cmp dword ptr [0x1200f210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe820d jne 0x11fe8266 */
  if (!C.zf) goto L_11fe8266;
  /* 11fe820f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8211 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8213 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe8215 push 0x1200a254 */
  push32((uint32_t)(0x1200a254u));
  /* 11fe821a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fe821f push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8221 call dword ptr [0x12011360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011360))), 0x11fe8227u);
  /* 11fe8227 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe8229 je 0x11fe8237 */
  if (C.zf) goto L_11fe8237;
  /* 11fe822b mov dword ptr [0x1200f210], 1 */
  w32((uint32_t)(0x1200f210), (0x1u));
  /* 11fe8235 jmp 0x11fe8266 */
  goto L_11fe8266;
L_11fe8237:;
  /* 11fe8237 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8239 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe823b push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe823d push 0x1200a250 */
  push32((uint32_t)(0x1200a250u));
  /* 11fe8242 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11fe8247 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8249 call dword ptr [0x12011358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011358))), 0x11fe824fu);
  /* 11fe824f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe8251 je 0x11fe825f */
  if (C.zf) goto L_11fe825f;
  /* 11fe8253 mov dword ptr [0x1200f210], 2 */
  w32((uint32_t)(0x1200f210), (0x2u));
  /* 11fe825d jmp 0x11fe8266 */
  goto L_11fe8266;
L_11fe825f:;
  /* 11fe825f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8261 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe8266:;
  /* 11fe8266 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe826a jle 0x11fe827f */
  if ((C.zf||C.sf!=C.of)) goto L_11fe827f;
  /* 11fe826c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe826f push eax */
  push32((uint32_t)(EAX));
  /* 11fe8270 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8273 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8274 call 0x11fe84f0 */
  push32(0x11fe8279u); f_11fe84f0();
  /* 11fe8279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe827c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11fe827f:;
  /* 11fe827f cmp dword ptr [0x1200f210], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1200f210))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8286 jne 0x11fe82ab */
  if (!C.zf) goto L_11fe82ab;
  /* 11fe8288 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe828b push edx */
  push32((uint32_t)(EDX));
  /* 11fe828c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe828f push eax */
  push32((uint32_t)(EAX));
  /* 11fe8290 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe8293 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8294 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8297 push edx */
  push32((uint32_t)(EDX));
  /* 11fe8298 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe829b push eax */
  push32((uint32_t)(EAX));
  /* 11fe829c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe829f push ecx */
  push32((uint32_t)(ECX));
  /* 11fe82a0 call dword ptr [0x12011358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011358))), 0x11fe82a6u);
  /* 11fe82a6 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe82ab:;
  /* 11fe82ab cmp dword ptr [0x1200f210], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200f210))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe82b2 jne 0x11fe84cf */
  if (!C.zf) goto L_11fe84cf;
  /* 11fe82b8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe82bc jne 0x11fe82c7 */
  if (!C.zf) goto L_11fe82c7;
  /* 11fe82be mov edx, dword ptr [0x1200f208] */
  EDX = (r32((uint32_t)(0x1200f208)));
  /* 11fe82c4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11fe82c7:;
  /* 11fe82c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe82c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe82cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe82ce push eax */
  push32((uint32_t)(EAX));
  /* 11fe82cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe82d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe82d3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11fe82d6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe82d8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe82da and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe82dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe82e0 push edx */
  push32((uint32_t)(EDX));
  /* 11fe82e1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe82e4 push eax */
  push32((uint32_t)(EAX));
  /* 11fe82e5 call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11fe82ebu);
  /* 11fe82eb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fe82ee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe82f2 jne 0x11fe82fb */
  if (!C.zf) goto L_11fe82fb;
  /* 11fe82f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe82f6 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe82fb:;
  /* 11fe82fb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe8302 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe8305 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fe8307 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe830a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fe830c call 0x11fdfac0 */
  push32(0x11fe8311u); f_11fdfac0();
  /* 11fe8311 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11fe8314 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fe8317 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe831a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fe831d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fe8324 jmp 0x11fe833d */
  goto L_11fe833d;
  /* 11fe8326 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe832b ret  */
  ESPCHK(0x11fe81e0u, _esp0);
  ESP += 4; return;
  /* 11fe832c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe832f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11fe8336 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fe833d:;
  /* 11fe833d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8341 jne 0x11fe834a */
  if (!C.zf) goto L_11fe834a;
  /* 11fe8343 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8345 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe834a:;
  /* 11fe834a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe834d push edx */
  push32((uint32_t)(EDX));
  /* 11fe834e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe8351 push eax */
  push32((uint32_t)(EAX));
  /* 11fe8352 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe8355 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8356 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8359 push edx */
  push32((uint32_t)(EDX));
  /* 11fe835a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe835c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe835f push eax */
  push32((uint32_t)(EAX));
  /* 11fe8360 call dword ptr [0x12011368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011368))), 0x11fe8366u);
  /* 11fe8366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe8368 jne 0x11fe8371 */
  if (!C.zf) goto L_11fe8371;
  /* 11fe836a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe836c jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe8371:;
  /* 11fe8371 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8373 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8375 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe8378 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8379 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe837c push edx */
  push32((uint32_t)(EDX));
  /* 11fe837d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe8380 push eax */
  push32((uint32_t)(EAX));
  /* 11fe8381 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8384 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8385 call dword ptr [0x12011360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011360))), 0x11fe838bu);
  /* 11fe838b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fe838e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8392 jne 0x11fe839b */
  if (!C.zf) goto L_11fe839b;
  /* 11fe8394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8396 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe839b:;
  /* 11fe839b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe839e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe83a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe83a6 je 0x11fe83eb */
  if (C.zf) goto L_11fe83eb;
  /* 11fe83a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe83ac je 0x11fe83e6 */
  if (C.zf) goto L_11fe83e6;
  /* 11fe83ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe83b1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe83b4 jle 0x11fe83bd */
  if ((C.zf||C.sf!=C.of)) goto L_11fe83bd;
  /* 11fe83b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe83b8 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe83bd:;
  /* 11fe83bd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe83c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe83c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe83c4 push edx */
  push32((uint32_t)(EDX));
  /* 11fe83c5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe83c8 push eax */
  push32((uint32_t)(EAX));
  /* 11fe83c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe83cc push ecx */
  push32((uint32_t)(ECX));
  /* 11fe83cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe83d0 push edx */
  push32((uint32_t)(EDX));
  /* 11fe83d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe83d4 push eax */
  push32((uint32_t)(EAX));
  /* 11fe83d5 call dword ptr [0x12011360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011360))), 0x11fe83dbu);
  /* 11fe83db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe83dd jne 0x11fe83e6 */
  if (!C.zf) goto L_11fe83e6;
  /* 11fe83df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe83e1 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe83e6:;
  /* 11fe83e6 jmp 0x11fe84ca */
  goto L_11fe84ca;
L_11fe83eb:;
  /* 11fe83eb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe83ee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11fe83f1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fe83f8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe83fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fe83fd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8400 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11fe8402 call 0x11fdfac0 */
  push32(0x11fe8407u); f_11fdfac0();
  /* 11fe8407 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11fe840a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11fe840d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe8410 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11fe8413 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11fe841a jmp 0x11fe8433 */
  goto L_11fe8433;
  /* 11fe841c mov eax, 1 */
  EAX = (0x1u);
  /* 11fe8421 ret  */
  ESPCHK(0x11fe81e0u, _esp0);
  ESP += 4; return;
  /* 11fe8422 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11fe8425 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11fe842c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11fe8433:;
  /* 11fe8433 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8437 jne 0x11fe8440 */
  if (!C.zf) goto L_11fe8440;
  /* 11fe8439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe843b jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe8440:;
  /* 11fe8440 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe8443 push eax */
  push32((uint32_t)(EAX));
  /* 11fe8444 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe8447 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8448 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe844b push edx */
  push32((uint32_t)(EDX));
  /* 11fe844c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe844f push eax */
  push32((uint32_t)(EAX));
  /* 11fe8450 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe8453 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8457 push edx */
  push32((uint32_t)(EDX));
  /* 11fe8458 call dword ptr [0x12011360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011360))), 0x11fe845eu);
  /* 11fe845e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe8460 jne 0x11fe8466 */
  if (!C.zf) goto L_11fe8466;
  /* 11fe8462 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8464 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe8466:;
  /* 11fe8466 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe846a jne 0x11fe849a */
  if (!C.zf) goto L_11fe849a;
  /* 11fe846c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe846e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8470 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8472 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe8474 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe8477 push eax */
  push32((uint32_t)(EAX));
  /* 11fe8478 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe847b push ecx */
  push32((uint32_t)(ECX));
  /* 11fe847c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fe8481 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe8484 push edx */
  push32((uint32_t)(EDX));
  /* 11fe8485 call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fe848bu);
  /* 11fe848b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fe848e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8492 jne 0x11fe8498 */
  if (!C.zf) goto L_11fe8498;
  /* 11fe8494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8496 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe8498:;
  /* 11fe8498 jmp 0x11fe84ca */
  goto L_11fe84ca;
L_11fe849a:;
  /* 11fe849a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe849c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe849e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe84a1 push eax */
  push32((uint32_t)(EAX));
  /* 11fe84a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe84a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe84a6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe84a9 push edx */
  push32((uint32_t)(EDX));
  /* 11fe84aa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fe84ad push eax */
  push32((uint32_t)(EAX));
  /* 11fe84ae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fe84b3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11fe84b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe84b7 call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fe84bdu);
  /* 11fe84bd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11fe84c0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe84c4 jne 0x11fe84ca */
  if (!C.zf) goto L_11fe84ca;
  /* 11fe84c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe84c8 jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe84ca:;
  /* 11fe84ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fe84cd jmp 0x11fe84d1 */
  goto L_11fe84d1;
L_11fe84cf:;
  /* 11fe84cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe84d1:;
  /* 11fe84d1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11fe84d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe84d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11fe84de pop edi */
  EDI = (pop32());
  /* 11fe84df pop esi */
  ESI = (pop32());
  /* 11fe84e0 pop ebx */
  EBX = (pop32());
  /* 11fe84e1 mov esp, ebp */
  ESP = (EBP);
  /* 11fe84e3 pop ebp */
  EBP = (pop32());
  /* 11fe84e4 ret  */
  ESPCHK(0x11fe81e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100184f0 @ 0x11fe84f0 (80 bytes, 32 insns) */
void f_11fe84f0(void) {
  FTRACE(0x11fe84f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe84f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe84f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe84f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe84f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe84f9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe84fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe84ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe8502:;
  /* 11fe8502 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe8505 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe8508 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe850b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe850e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe8510 je 0x11fe8527 */
  if (C.zf) goto L_11fe8527;
  /* 11fe8512 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8515 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe8518 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe851a je 0x11fe8527 */
  if (C.zf) goto L_11fe8527;
  /* 11fe851c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe851f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8522 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe8525 jmp 0x11fe8502 */
  goto L_11fe8502;
L_11fe8527:;
  /* 11fe8527 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe852a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe852d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe852f jne 0x11fe8539 */
  if (!C.zf) goto L_11fe8539;
  /* 11fe8531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8534 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8537 jmp 0x11fe853c */
  goto L_11fe853c;
L_11fe8539:;
  /* 11fe8539 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11fe853c:;
  /* 11fe853c mov esp, ebp */
  ESP = (EBP);
  /* 11fe853e pop ebp */
  EBP = (pop32());
  /* 11fe853f ret  */
  ESPCHK(0x11fe84f0u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11fe8540 (62 bytes, 23 insns) */
void f_11fe8540(void) {
  FTRACE(0x11fe8540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe8540 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe8541 mov ebp, esp */
  EBP = (ESP);
  /* 11fe8543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8546 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe854d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8550 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8553 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe8556 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8559 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe855c jb 0x11fe8566 */
  if (C.cf) goto L_11fe8566;
  /* 11fe855e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8561 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8564 jae 0x11fe856f */
  if (!C.cf) goto L_11fe856f;
L_11fe8566:;
  /* 11fe8566 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe8569 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe856c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fe856f:;
  /* 11fe856f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8572 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8575 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fe8577 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe857a mov esp, ebp */
  ESP = (EBP);
  /* 11fe857c pop ebp */
  EBP = (pop32());
  /* 11fe857d ret  */
  ESPCHK(0x11fe8540u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11fe8580 (173 bytes, 66 insns) */
void f_11fe8580(void) {
  FTRACE(0x11fe8580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe8580 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe8581 mov ebp, esp */
  EBP = (ESP);
  /* 11fe8583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8589 push eax */
  push32((uint32_t)(EAX));
  /* 11fe858a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe858d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe858f push edx */
  push32((uint32_t)(EDX));
  /* 11fe8590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8593 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe8595 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8596 call 0x11fe8540 */
  push32(0x11fe859bu); f_11fe8540();
  /* 11fe859b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe859e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe85a1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe85a5 je 0x11fe85d7 */
  if (C.zf) goto L_11fe85d7;
  /* 11fe85a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe85aa add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe85ad push edx */
  push32((uint32_t)(EDX));
  /* 11fe85ae push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe85b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe85b3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe85b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe85b7 call 0x11fe8540 */
  push32(0x11fe85bcu); f_11fe8540();
  /* 11fe85bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe85bf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe85c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe85c6 je 0x11fe85d7 */
  if (C.zf) goto L_11fe85d7;
  /* 11fe85c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe85cb mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe85ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe85d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe85d4 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11fe85d7:;
  /* 11fe85d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe85da add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe85dd push edx */
  push32((uint32_t)(EDX));
  /* 11fe85de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe85e1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11fe85e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe85e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe85e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe85eb push eax */
  push32((uint32_t)(EAX));
  /* 11fe85ec call 0x11fe8540 */
  push32(0x11fe85f1u); f_11fe8540();
  /* 11fe85f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe85f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe85f7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe85fb je 0x11fe860c */
  if (C.zf) goto L_11fe860c;
  /* 11fe85fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8600 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe8603 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8609 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11fe860c:;
  /* 11fe860c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe860f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8612 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8613 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe8616 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe8619 push eax */
  push32((uint32_t)(EAX));
  /* 11fe861a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe861d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe8620 push edx */
  push32((uint32_t)(EDX));
  /* 11fe8621 call 0x11fe8540 */
  push32(0x11fe8626u); f_11fe8540();
  /* 11fe8626 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8629 mov esp, ebp */
  ESP = (EBP);
  /* 11fe862b pop ebp */
  EBP = (pop32());
  /* 11fe862c ret  */
  ESPCHK(0x11fe8580u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11fe8630 (96 bytes, 37 insns) */
void f_11fe8630(void) {
  FTRACE(0x11fe8630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe8630 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe8631 mov ebp, esp */
  EBP = (ESP);
  /* 11fe8633 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8639 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe863b and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8641 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe8643 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8645 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe8647 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe864a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe864d mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe8650 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8655 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe8657 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8659 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe865b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe865e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8661 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe8663 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe8665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8668 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe866a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe866d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe8670 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe8672 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe8675 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8678 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe867b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe867e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe8681 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe8683 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe8686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8689 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11fe868c mov esp, ebp */
  ESP = (EBP);
  /* 11fe868e pop ebp */
  EBP = (pop32());
  /* 11fe868f ret  */
  ESPCHK(0x11fe8630u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11fe8690 (99 bytes, 37 insns) */
void f_11fe8690(void) {
  FTRACE(0x11fe8690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe8690 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe8691 mov ebp, esp */
  EBP = (ESP);
  /* 11fe8693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8699 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fe869c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe869f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe86a1 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe86a3 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe86a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe86ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe86af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe86b2 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe86b5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe86b7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe86b9 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe86be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe86c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe86c4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11fe86c7 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe86c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe86cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11fe86cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe86d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe86d5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe86d7 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe86da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe86dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe86e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe86e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe86e5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11fe86e7 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11fe86ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe86ed mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe86ef mov esp, ebp */
  ESP = (EBP);
  /* 11fe86f1 pop ebp */
  EBP = (pop32());
  /* 11fe86f2 ret  */
  ESPCHK(0x11fe8690u, _esp0);
  ESP += 4; return;
}

/* FUN_10018700 @ 0x11fe8700 (315 bytes, 101 insns) */
void f_11fe8700(void) {
  FTRACE(0x11fe8700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe8700 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe8701 mov ebp, esp */
  EBP = (ESP);
  /* 11fe8703 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8706 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11fe870c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe870f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fe8715 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8718 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11fe871f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8722 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11fe8729 jmp 0x11fe873d */
  goto L_11fe873d;
L_11fe872b:;
  /* 11fe872b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe872e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8731 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11fe8734 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe8737 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe873a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11fe873d:;
  /* 11fe873d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8741 jbe 0x11fe87b7 */
  if ((C.cf||C.zf)) goto L_11fe87b7;
  /* 11fe8743 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8746 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe8748 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe874b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fe874e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe8751 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe8754 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe8757 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe875a push eax */
  push32((uint32_t)(EAX));
  /* 11fe875b call 0x11fe8630 */
  push32(0x11fe8760u); f_11fe8630();
  /* 11fe8760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8763 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8766 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8767 call 0x11fe8630 */
  push32(0x11fe876cu); f_11fe8630();
  /* 11fe876c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe876f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fe8772 push edx */
  push32((uint32_t)(EDX));
  /* 11fe8773 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8776 push eax */
  push32((uint32_t)(EAX));
  /* 11fe8777 call 0x11fe8580 */
  push32(0x11fe877cu); f_11fe8580();
  /* 11fe877c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe877f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8782 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8783 call 0x11fe8630 */
  push32(0x11fe8788u); f_11fe8630();
  /* 11fe8788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe878b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe878e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe8791 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe8794 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe879b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fe87a2 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11fe87a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe87a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe87a9 push edx */
  push32((uint32_t)(EDX));
  /* 11fe87aa call 0x11fe8580 */
  push32(0x11fe87afu); f_11fe8580();
  /* 11fe87af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe87b2 jmp 0x11fe872b */
  goto L_11fe872b;
L_11fe87b7:;
  /* 11fe87b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe87ba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe87be jne 0x11fe8803 */
  if (!C.zf) goto L_11fe8803;
  /* 11fe87c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe87c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe87c6 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11fe87c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe87cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11fe87cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe87d2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11fe87d5 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11fe87d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe87db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe87dd shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11fe87e0 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe87e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe87e5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11fe87e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe87eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe87ed shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11fe87f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe87f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11fe87f5 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11fe87f9 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11fe87fd mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11fe8801 jmp 0x11fe87b7 */
  goto L_11fe87b7;
L_11fe8803:;
  /* 11fe8803 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8806 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fe8809 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe880e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe8810 jne 0x11fe882c */
  if (!C.zf) goto L_11fe882c;
  /* 11fe8812 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe8815 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8816 call 0x11fe8630 */
  push32(0x11fe881bu); f_11fe8630();
  /* 11fe881b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe881e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11fe8822 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11fe8826 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11fe882a jmp 0x11fe8803 */
  goto L_11fe8803;
L_11fe882c:;
  /* 11fe882c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe882f mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11fe8833 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11fe8837 mov esp, ebp */
  ESP = (EBP);
  /* 11fe8839 pop ebp */
  EBP = (pop32());
  /* 11fe883a ret  */
  ESPCHK(0x11fe8700u, _esp0);
  ESP += 4; return;
}

/* FUN_10018840 @ 0x11fe8840 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11fe8840(void) {
  FTRACE(0x11fe8840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe8840 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe8841 mov ebp, esp */
  EBP = (ESP);
  /* 11fe8843 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8849 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11fe884c mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11fe884f mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11fe8855 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11fe885c mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11fe8863 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11fe886a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe8871 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11fe8878 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11fe887f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11fe8886 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11fe888d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11fe8894 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11fe889b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11fe88a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe88a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe88a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe88ab mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11fe88ae jmp 0x11fe88b9 */
  goto L_11fe88b9;
L_11fe88b0:;
  /* 11fe88b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe88b3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe88b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe88b9:;
  /* 11fe88b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe88bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe88bf cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe88c2 je 0x11fe88e5 */
  if (C.zf) goto L_11fe88e5;
  /* 11fe88c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe88c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe88ca cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe88cd je 0x11fe88e5 */
  if (C.zf) goto L_11fe88e5;
  /* 11fe88cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe88d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11fe88d5 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe88d8 je 0x11fe88e5 */
  if (C.zf) goto L_11fe88e5;
  /* 11fe88da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe88dd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe88e0 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe88e3 jne 0x11fe88e7 */
  if (!C.zf) goto L_11fe88e7;
L_11fe88e5:;
  /* 11fe88e5 jmp 0x11fe88b0 */
  goto L_11fe88b0;
L_11fe88e7:;
  /* 11fe88e7 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe88eb je 0x11fe9048 */
  if (C.zf) goto L_11fe9048;
  /* 11fe88f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe88f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe88f6 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11fe88f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe88fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe88ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe8902 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11fe8905 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11fe8908 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe890c ja 0x11fe9043 */
  if ((!C.cf&&!C.zf)) goto L_11fe9043;
  /* 11fe8912 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11fe8915 jmp dword ptr [ecx*4 + 0x11fe925a] */
  switch (ECX) {
    case 0: goto L_11fe891c;
    case 1: goto L_11fe89ba;
    case 2: goto L_11fe8a70;
    case 3: goto L_11fe8adb;
    case 4: goto L_11fe8bf3;
    case 5: goto L_11fe8d25;
    case 6: goto L_11fe8d9b;
    case 7: goto L_11fe8e80;
    case 8: goto L_11fe8e22;
    case 9: goto L_11fe8ed3;
    case 10: goto L_11fe9043;
    case 11: goto L_11fe8fdf;
    case 12: goto L_11fe8a49;
    case 13: goto L_11fe8a37;
    case 14: goto L_11fe8a40;
    case 15: goto L_11fe8a5b;
    default: x86_unimpl("switch@0x11fe8915 out of table"); return;
  }
L_11fe891c:;
  /* 11fe891c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8920 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8923 jl 0x11fe8940 */
  if ((C.sf!=C.of)) goto L_11fe8940;
  /* 11fe8925 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8929 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe892c jg 0x11fe8940 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe8940;
  /* 11fe892e mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11fe8935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8938 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe893b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe893e jmp 0x11fe89b5 */
  goto L_11fe89b5;
L_11fe8940:;
  /* 11fe8940 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8944 movsx eax, byte ptr [0x1200cfe4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1200cfe4))));
  /* 11fe894b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe894d jne 0x11fe8958 */
  if (!C.zf) goto L_11fe8958;
  /* 11fe894f mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11fe8956 jmp 0x11fe89b5 */
  goto L_11fe89b5;
L_11fe8958:;
  /* 11fe8958 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11fe895b mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11fe8961 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe8968 je 0x11fe8987 */
  if (C.zf) goto L_11fe8987;
  /* 11fe896a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe8971 je 0x11fe8996 */
  if (C.zf) goto L_11fe8996;
  /* 11fe8973 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe897a je 0x11fe897e */
  if (C.zf) goto L_11fe897e;
  /* 11fe897c jmp 0x11fe89a5 */
  goto L_11fe89a5;
L_11fe897e:;
  /* 11fe897e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11fe8985 jmp 0x11fe89b5 */
  goto L_11fe89b5;
L_11fe8987:;
  /* 11fe8987 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11fe898e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11fe8994 jmp 0x11fe89b5 */
  goto L_11fe89b5;
L_11fe8996:;
  /* 11fe8996 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11fe899d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11fe89a3 jmp 0x11fe89b5 */
  goto L_11fe89b5;
L_11fe89a5:;
  /* 11fe89a5 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe89ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe89af sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe89b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe89b5:;
  /* 11fe89b5 jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe89ba:;
  /* 11fe89ba mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11fe89c1 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe89c5 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe89c8 jl 0x11fe89e8 */
  if ((C.sf!=C.of)) goto L_11fe89e8;
  /* 11fe89ca movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe89ce cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe89d1 jg 0x11fe89e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe89e8;
  /* 11fe89d3 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11fe89da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe89dd sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe89e0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe89e3 jmp 0x11fe8a6b */
  goto L_11fe8a6b;
L_11fe89e8:;
  /* 11fe89e8 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe89ec movsx ecx, byte ptr [0x1200cfe4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1200cfe4))));
  /* 11fe89f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe89f5 jne 0x11fe8a00 */
  if (!C.zf) goto L_11fe8a00;
  /* 11fe89f7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11fe89fe jmp 0x11fe8a6b */
  goto L_11fe8a6b;
L_11fe8a00:;
  /* 11fe8a00 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8a04 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 11fe8a0a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11fe8a10 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8a13 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11fe8a19 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8a20 ja 0x11fe8a5b */
  if ((!C.cf&&!C.zf)) goto L_11fe8a5b;
  /* 11fe8a22 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 11fe8a28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8a2a mov cl, byte ptr [edx + 0x11fe929a] */
  CL = (r8((uint32_t)(EDX + 0x11fe929a)));
  /* 11fe8a30 jmp dword ptr [ecx*4 + 0x11fe928a] */
  switch (ECX) {
    case 0: goto L_11fe8a49;
    case 1: goto L_11fe8a37;
    case 2: goto L_11fe8a40;
    case 3: goto L_11fe8a5b;
    default: x86_unimpl("switch@0x11fe8a30 out of table"); return;
  }
L_11fe8a37:;
  /* 11fe8a37 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11fe8a3e jmp 0x11fe8a6b */
  goto L_11fe8a6b;
L_11fe8a40:;
  /* 11fe8a40 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11fe8a47 jmp 0x11fe8a6b */
  goto L_11fe8a6b;
L_11fe8a49:;
  /* 11fe8a49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8a4c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8a4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe8a52 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11fe8a59 jmp 0x11fe8a6b */
  goto L_11fe8a6b;
L_11fe8a5b:;
  /* 11fe8a5b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe8a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8a65 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8a68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe8a6b:;
  /* 11fe8a6b jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe8a70:;
  /* 11fe8a70 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8a74 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8a77 jl 0x11fe8a94 */
  if ((C.sf!=C.of)) goto L_11fe8a94;
  /* 11fe8a79 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8a7d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8a80 jg 0x11fe8a94 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe8a94;
  /* 11fe8a82 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11fe8a89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8a8c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8a8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe8a92 jmp 0x11fe8ad6 */
  goto L_11fe8ad6;
L_11fe8a94:;
  /* 11fe8a94 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8a98 movsx eax, byte ptr [0x1200cfe4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1200cfe4))));
  /* 11fe8a9f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8aa1 jne 0x11fe8aac */
  if (!C.zf) goto L_11fe8aac;
  /* 11fe8aa3 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11fe8aaa jmp 0x11fe8ad6 */
  goto L_11fe8ad6;
L_11fe8aac:;
  /* 11fe8aac mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11fe8aaf mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11fe8ab5 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe8abc je 0x11fe8ac0 */
  if (C.zf) goto L_11fe8ac0;
  /* 11fe8abe jmp 0x11fe8ac9 */
  goto L_11fe8ac9;
L_11fe8ac0:;
  /* 11fe8ac0 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11fe8ac7 jmp 0x11fe8ad6 */
  goto L_11fe8ad6;
L_11fe8ac9:;
  /* 11fe8ac9 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe8ad0 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11fe8ad3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe8ad6:;
  /* 11fe8ad6 jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe8adb:;
  /* 11fe8adb mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11fe8ae2 jmp 0x11fe8af5 */
  goto L_11fe8af5;
L_11fe8ae4:;
  /* 11fe8ae4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8ae7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe8ae9 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11fe8aec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8aef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8af2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe8af5:;
  /* 11fe8af5 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8afc jle 0x11fe8b19 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe8b19;
  /* 11fe8afe push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe8b00 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8b03 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8b08 push eax */
  push32((uint32_t)(EAX));
  /* 11fe8b09 call 0x11fe0860 */
  push32(0x11fe8b0eu); f_11fe0860();
  /* 11fe8b0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8b11 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11fe8b17 jmp 0x11fe8b37 */
  goto L_11fe8b37;
L_11fe8b19:;
  /* 11fe8b19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8b1c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8b22 mov edx, dword ptr [0x1200cfec] */
  EDX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe8b28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8b2a mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11fe8b2e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8b31 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_11fe8b37:;
  /* 11fe8b37 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8b3e je 0x11fe8b74 */
  if (C.zf) goto L_11fe8b74;
  /* 11fe8b40 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8b44 jae 0x11fe8b66 */
  if (!C.cf) goto L_11fe8b66;
  /* 11fe8b46 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe8b49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8b4c mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 11fe8b4f movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8b53 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8b56 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe8b59 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fe8b5b mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe8b5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8b61 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11fe8b64 jmp 0x11fe8b6f */
  goto L_11fe8b6f;
L_11fe8b66:;
  /* 11fe8b66 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11fe8b69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8b6c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11fe8b6f:;
  /* 11fe8b6f jmp 0x11fe8ae4 */
  goto L_11fe8ae4;
L_11fe8b74:;
  /* 11fe8b74 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8b78 movsx ecx, byte ptr [0x1200cfe4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1200cfe4))));
  /* 11fe8b7f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8b81 jne 0x11fe8b8c */
  if (!C.zf) goto L_11fe8b8c;
  /* 11fe8b83 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11fe8b8a jmp 0x11fe8bee */
  goto L_11fe8bee;
L_11fe8b8c:;
  /* 11fe8b8c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8b90 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11fe8b96 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11fe8b9c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8b9f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11fe8ba5 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8bac ja 0x11fe8bde */
  if ((!C.cf&&!C.zf)) goto L_11fe8bde;
  /* 11fe8bae mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11fe8bb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8bb6 mov cl, byte ptr [edx + 0x11fe92e1] */
  CL = (r8((uint32_t)(EDX + 0x11fe92e1)));
  /* 11fe8bbc jmp dword ptr [ecx*4 + 0x11fe92d5] */
  switch (ECX) {
    case 0: goto L_11fe8bcc;
    case 1: goto L_11fe8bc3;
    case 2: goto L_11fe8bde;
    default: x86_unimpl("switch@0x11fe8bbc out of table"); return;
  }
L_11fe8bc3:;
  /* 11fe8bc3 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11fe8bca jmp 0x11fe8bee */
  goto L_11fe8bee;
L_11fe8bcc:;
  /* 11fe8bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8bcf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8bd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe8bd5 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11fe8bdc jmp 0x11fe8bee */
  goto L_11fe8bee;
L_11fe8bde:;
  /* 11fe8bde mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe8be5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8be8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8beb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe8bee:;
  /* 11fe8bee jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe8bf3:;
  /* 11fe8bf3 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11fe8bfa mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11fe8c01 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8c05 jne 0x11fe8c2e */
  if (!C.zf) goto L_11fe8c2e;
  /* 11fe8c07 jmp 0x11fe8c1a */
  goto L_11fe8c1a;
L_11fe8c09:;
  /* 11fe8c09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8c0c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe8c0e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11fe8c11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8c14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8c17 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe8c1a:;
  /* 11fe8c1a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8c1e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8c21 jne 0x11fe8c2e */
  if (!C.zf) goto L_11fe8c2e;
  /* 11fe8c23 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11fe8c26 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8c29 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11fe8c2c jmp 0x11fe8c09 */
  goto L_11fe8c09;
L_11fe8c2e:;
  /* 11fe8c2e jmp 0x11fe8c41 */
  goto L_11fe8c41;
L_11fe8c30:;
  /* 11fe8c30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8c33 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe8c35 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11fe8c38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8c3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8c3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe8c41:;
  /* 11fe8c41 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8c48 jle 0x11fe8c66 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe8c66;
  /* 11fe8c4a push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe8c4c mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8c4f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8c55 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8c56 call 0x11fe0860 */
  push32(0x11fe8c5bu); f_11fe0860();
  /* 11fe8c5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8c5e mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 11fe8c64 jmp 0x11fe8c83 */
  goto L_11fe8c83;
L_11fe8c66:;
  /* 11fe8c66 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8c69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe8c6f mov eax, dword ptr [0x1200cfec] */
  EAX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe8c74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8c76 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11fe8c7a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8c7d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_11fe8c83:;
  /* 11fe8c83 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8c8a je 0x11fe8cbe */
  if (C.zf) goto L_11fe8cbe;
  /* 11fe8c8c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8c90 jae 0x11fe8cb9 */
  if (!C.cf) goto L_11fe8cb9;
  /* 11fe8c92 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe8c95 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8c98 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11fe8c9b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8c9f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8ca2 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe8ca5 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fe8ca7 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe8caa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8cad mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11fe8cb0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11fe8cb3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8cb6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11fe8cb9:;
  /* 11fe8cb9 jmp 0x11fe8c30 */
  goto L_11fe8c30;
L_11fe8cbe:;
  /* 11fe8cbe movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8cc2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11fe8cc8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fe8cce sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8cd1 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 11fe8cd7 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8cde ja 0x11fe8d10 */
  if ((!C.cf&&!C.zf)) goto L_11fe8d10;
  /* 11fe8ce0 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11fe8ce6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8ce8 mov al, byte ptr [ecx + 0x11fe9328] */
  AL = (r8((uint32_t)(ECX + 0x11fe9328)));
  /* 11fe8cee jmp dword ptr [eax*4 + 0x11fe931c] */
  switch (EAX) {
    case 0: goto L_11fe8cfe;
    case 1: goto L_11fe8cf5;
    case 2: goto L_11fe8d10;
    default: x86_unimpl("switch@0x11fe8cee out of table"); return;
  }
L_11fe8cf5:;
  /* 11fe8cf5 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11fe8cfc jmp 0x11fe8d20 */
  goto L_11fe8d20;
L_11fe8cfe:;
  /* 11fe8cfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8d01 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8d04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe8d07 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11fe8d0e jmp 0x11fe8d20 */
  goto L_11fe8d20;
L_11fe8d10:;
  /* 11fe8d10 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe8d17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8d1a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8d1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe8d20:;
  /* 11fe8d20 jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe8d25:;
  /* 11fe8d25 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11fe8d2c cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8d33 jle 0x11fe8d51 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe8d51;
  /* 11fe8d35 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe8d37 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8d3a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8d40 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8d41 call 0x11fe0860 */
  push32(0x11fe8d46u); f_11fe0860();
  /* 11fe8d46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8d49 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11fe8d4f jmp 0x11fe8d6e */
  goto L_11fe8d6e;
L_11fe8d51:;
  /* 11fe8d51 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8d54 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe8d5a mov eax, dword ptr [0x1200cfec] */
  EAX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe8d5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8d61 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11fe8d65 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8d68 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_11fe8d6e:;
  /* 11fe8d6e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8d75 je 0x11fe8d89 */
  if (C.zf) goto L_11fe8d89;
  /* 11fe8d77 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11fe8d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8d81 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8d84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe8d87 jmp 0x11fe8d96 */
  goto L_11fe8d96;
L_11fe8d89:;
  /* 11fe8d89 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe8d90 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11fe8d93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe8d96:;
  /* 11fe8d96 jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe8d9b:;
  /* 11fe8d9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8d9e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8da1 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11fe8da4 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8da8 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8dab jl 0x11fe8dc8 */
  if ((C.sf!=C.of)) goto L_11fe8dc8;
  /* 11fe8dad movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8db1 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8db4 jg 0x11fe8dc8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe8dc8;
  /* 11fe8db6 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11fe8dbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8dc0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8dc3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe8dc6 jmp 0x11fe8e1d */
  goto L_11fe8e1d;
L_11fe8dc8:;
  /* 11fe8dc8 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11fe8dcb mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 11fe8dd1 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe8dd8 je 0x11fe8e07 */
  if (C.zf) goto L_11fe8e07;
  /* 11fe8dda cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe8de1 je 0x11fe8df7 */
  if (C.zf) goto L_11fe8df7;
  /* 11fe8de3 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe8dea je 0x11fe8dee */
  if (C.zf) goto L_11fe8dee;
  /* 11fe8dec jmp 0x11fe8e10 */
  goto L_11fe8e10;
L_11fe8dee:;
  /* 11fe8dee mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11fe8df5 jmp 0x11fe8e1d */
  goto L_11fe8e1d;
L_11fe8df7:;
  /* 11fe8df7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11fe8dfe mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11fe8e05 jmp 0x11fe8e1d */
  goto L_11fe8e1d;
L_11fe8e07:;
  /* 11fe8e07 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11fe8e0e jmp 0x11fe8e1d */
  goto L_11fe8e1d;
L_11fe8e10:;
  /* 11fe8e10 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe8e17 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11fe8e1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe8e1d:;
  /* 11fe8e1d jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe8e22:;
  /* 11fe8e22 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11fe8e29 jmp 0x11fe8e3c */
  goto L_11fe8e3c;
L_11fe8e2b:;
  /* 11fe8e2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8e2e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe8e30 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11fe8e33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8e36 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8e39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe8e3c:;
  /* 11fe8e3c movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8e40 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8e43 jne 0x11fe8e47 */
  if (!C.zf) goto L_11fe8e47;
  /* 11fe8e45 jmp 0x11fe8e2b */
  goto L_11fe8e2b;
L_11fe8e47:;
  /* 11fe8e47 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8e4b cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8e4e jl 0x11fe8e6b */
  if ((C.sf!=C.of)) goto L_11fe8e6b;
  /* 11fe8e50 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8e54 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8e57 jg 0x11fe8e6b */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe8e6b;
  /* 11fe8e59 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11fe8e60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8e63 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8e66 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe8e69 jmp 0x11fe8e7b */
  goto L_11fe8e7b;
L_11fe8e6b:;
  /* 11fe8e6b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe8e72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8e75 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8e78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe8e7b:;
  /* 11fe8e7b jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe8e80:;
  /* 11fe8e80 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8e84 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8e87 jl 0x11fe8ea4 */
  if ((C.sf!=C.of)) goto L_11fe8ea4;
  /* 11fe8e89 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8e8d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8e90 jg 0x11fe8ea4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe8ea4;
  /* 11fe8e92 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11fe8e99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8e9c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8e9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe8ea2 jmp 0x11fe8ece */
  goto L_11fe8ece;
L_11fe8ea4:;
  /* 11fe8ea4 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11fe8ea7 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 11fe8ead cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe8eb4 je 0x11fe8eb8 */
  if (C.zf) goto L_11fe8eb8;
  /* 11fe8eb6 jmp 0x11fe8ec1 */
  goto L_11fe8ec1;
L_11fe8eb8:;
  /* 11fe8eb8 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11fe8ebf jmp 0x11fe8ece */
  goto L_11fe8ece;
L_11fe8ec1:;
  /* 11fe8ec1 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe8ec8 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11fe8ecb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe8ece:;
  /* 11fe8ece jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe8ed3:;
  /* 11fe8ed3 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11fe8eda mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11fe8ee1 jmp 0x11fe8ef4 */
  goto L_11fe8ef4;
L_11fe8ee3:;
  /* 11fe8ee3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8ee6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe8ee8 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11fe8eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8eee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8ef1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe8ef4:;
  /* 11fe8ef4 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8efb jle 0x11fe8f19 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe8f19;
  /* 11fe8efd push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe8eff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8f02 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe8f08 push edx */
  push32((uint32_t)(EDX));
  /* 11fe8f09 call 0x11fe0860 */
  push32(0x11fe8f0eu); f_11fe0860();
  /* 11fe8f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8f11 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11fe8f17 jmp 0x11fe8f36 */
  goto L_11fe8f36;
L_11fe8f19:;
  /* 11fe8f19 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8f1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe8f21 mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe8f27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe8f29 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fe8f2d and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe8f30 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_11fe8f36:;
  /* 11fe8f36 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8f3d je 0x11fe8f67 */
  if (C.zf) goto L_11fe8f67;
  /* 11fe8f3f mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fe8f42 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe8f45 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11fe8f49 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11fe8f4d mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 11fe8f50 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8f57 jle 0x11fe8f62 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe8f62;
  /* 11fe8f59 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 11fe8f60 jmp 0x11fe8f67 */
  goto L_11fe8f67;
L_11fe8f62:;
  /* 11fe8f62 jmp 0x11fe8ee3 */
  goto L_11fe8ee3;
L_11fe8f67:;
  /* 11fe8f67 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fe8f6a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fe8f6d jmp 0x11fe8f80 */
  goto L_11fe8f80;
L_11fe8f6f:;
  /* 11fe8f6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8f72 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe8f74 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11fe8f77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8f7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8f7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe8f80:;
  /* 11fe8f80 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8f87 jle 0x11fe8fa5 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe8fa5;
  /* 11fe8f89 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe8f8b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8f8e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8f94 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe8f95 call 0x11fe0860 */
  push32(0x11fe8f9au); f_11fe0860();
  /* 11fe8f9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe8f9d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11fe8fa3 jmp 0x11fe8fc2 */
  goto L_11fe8fc2;
L_11fe8fa5:;
  /* 11fe8fa5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe8fa8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe8fae mov eax, dword ptr [0x1200cfec] */
  EAX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe8fb3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8fb5 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11fe8fb9 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe8fbc mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_11fe8fc2:;
  /* 11fe8fc2 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8fc9 je 0x11fe8fcd */
  if (C.zf) goto L_11fe8fcd;
  /* 11fe8fcb jmp 0x11fe8f6f */
  goto L_11fe8f6f;
L_11fe8fcd:;
  /* 11fe8fcd mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe8fd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8fd7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8fda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe8fdd jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe8fdf:;
  /* 11fe8fdf cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe8fe3 je 0x11fe9033 */
  if (C.zf) goto L_11fe9033;
  /* 11fe8fe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe8fe8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe8feb mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 11fe8fee mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11fe8ff1 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11fe8ff7 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe8ffe je 0x11fe901b */
  if (C.zf) goto L_11fe901b;
  /* 11fe9000 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11fe9007 je 0x11fe900b */
  if (C.zf) goto L_11fe900b;
  /* 11fe9009 jmp 0x11fe9024 */
  goto L_11fe9024;
L_11fe900b:;
  /* 11fe900b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11fe9012 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11fe9019 jmp 0x11fe9031 */
  goto L_11fe9031;
L_11fe901b:;
  /* 11fe901b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11fe9022 jmp 0x11fe9031 */
  goto L_11fe9031;
L_11fe9024:;
  /* 11fe9024 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe902b mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11fe902e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe9031:;
  /* 11fe9031 jmp 0x11fe9043 */
  goto L_11fe9043;
L_11fe9033:;
  /* 11fe9033 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11fe903a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe903d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9040 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe9043:;
  /* 11fe9043 jmp 0x11fe88e7 */
  goto L_11fe88e7;
L_11fe9048:;
  /* 11fe9048 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe904b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe904e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11fe9050 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9054 je 0x11fe9197 */
  if (C.zf) goto L_11fe9197;
  /* 11fe905a cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe905e jne 0x11fe9197 */
  if (!C.zf) goto L_11fe9197;
  /* 11fe9064 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9068 jne 0x11fe9197 */
  if (!C.zf) goto L_11fe9197;
  /* 11fe906e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9072 jbe 0x11fe909f */
  if ((C.cf||C.zf)) goto L_11fe909f;
  /* 11fe9074 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 11fe9078 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe907b jl 0x11fe9086 */
  if ((C.sf!=C.of)) goto L_11fe9086;
  /* 11fe907d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 11fe9080 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe9083 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_11fe9086:;
  /* 11fe9086 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 11fe908d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe9090 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9093 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11fe9096 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11fe9099 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe909c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11fe909f:;
  /* 11fe909f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe90a3 jbe 0x11fe917a */
  if ((C.cf||C.zf)) goto L_11fe917a;
  /* 11fe90a9 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe90ac sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe90af mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11fe90b2 jmp 0x11fe90bd */
  goto L_11fe90bd;
L_11fe90b4:;
  /* 11fe90b4 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe90b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe90ba mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_11fe90bd:;
  /* 11fe90bd mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe90c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe90c3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe90c5 jne 0x11fe90db */
  if (!C.zf) goto L_11fe90db;
  /* 11fe90c7 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe90ca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe90cd mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11fe90d0 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11fe90d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe90d6 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11fe90d9 jmp 0x11fe90b4 */
  goto L_11fe90b4;
L_11fe90db:;
  /* 11fe90db lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11fe90de push ecx */
  push32((uint32_t)(ECX));
  /* 11fe90df mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe90e2 push edx */
  push32((uint32_t)(EDX));
  /* 11fe90e3 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11fe90e6 push eax */
  push32((uint32_t)(EAX));
  /* 11fe90e7 call 0x11fe8700 */
  push32(0x11fe90ecu); f_11fe8700();
  /* 11fe90ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe90ef cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe90f3 jge 0x11fe90fd */
  if ((C.sf==C.of)) goto L_11fe90fd;
  /* 11fe90f5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe90f8 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe90fa mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11fe90fd:;
  /* 11fe90fd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe9100 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9103 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fe9106 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe910a jne 0x11fe9115 */
  if (!C.zf) goto L_11fe9115;
  /* 11fe910c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe910f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9112 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11fe9115:;
  /* 11fe9115 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9119 jne 0x11fe9124 */
  if (!C.zf) goto L_11fe9124;
  /* 11fe911b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe911e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9121 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11fe9124:;
  /* 11fe9124 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe912b jle 0x11fe9136 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe9136;
  /* 11fe912d mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 11fe9134 jmp 0x11fe9178 */
  goto L_11fe9178;
L_11fe9136:;
  /* 11fe9136 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe913d jge 0x11fe9148 */
  if ((C.sf==C.of)) goto L_11fe9148;
  /* 11fe913f mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 11fe9146 jmp 0x11fe9178 */
  goto L_11fe9178;
L_11fe9148:;
  /* 11fe9148 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe914b push edx */
  push32((uint32_t)(EDX));
  /* 11fe914c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe914f push eax */
  push32((uint32_t)(EAX));
  /* 11fe9150 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11fe9153 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9154 call 0x11fecf00 */
  push32(0x11fe9159u); f_11fecf00();
  /* 11fe9159 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe915c mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 11fe9160 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 11fe9164 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 11fe9167 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe916a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 11fe916d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe9170 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 11fe9174 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_11fe9178:;
  /* 11fe9178 jmp 0x11fe9197 */
  goto L_11fe9197;
L_11fe917a:;
  /* 11fe917a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11fe9180 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11fe9186 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fe9189 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe918e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe9191 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe9194 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fe9197:;
  /* 11fe9197 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe919b jne 0x11fe91c6 */
  if (!C.zf) goto L_11fe91c6;
  /* 11fe919d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11fe91a3 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11fe91a9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fe91ac and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe91b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fe91b5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe91b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe91bb mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fe91be or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe91c1 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11fe91c4 jmp 0x11fe921d */
  goto L_11fe921d;
L_11fe91c6:;
  /* 11fe91c6 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe91ca je 0x11fe91f1 */
  if (C.zf) goto L_11fe91f1;
  /* 11fe91cc mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 11fe91d2 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11fe91d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fe91e0 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11fe91e6 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fe91e9 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe91ec mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 11fe91ef jmp 0x11fe921d */
  goto L_11fe921d;
L_11fe91f1:;
  /* 11fe91f1 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe91f5 je 0x11fe921d */
  if (C.zf) goto L_11fe921d;
  /* 11fe91f7 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11fe91fd mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11fe9203 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fe9206 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe920b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe920e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe9211 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe9214 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fe9217 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe921a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_11fe921d:;
  /* 11fe921d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9220 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 11fe9224 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11fe9227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe922a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe922d mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11fe9230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9233 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe9236 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11fe9239 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11fe923c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9241 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fe9244 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe924a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe924c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe924f mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 11fe9253 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fe9256 mov esp, ebp */
  ESP = (EBP);
  /* 11fe9258 pop ebp */
  EBP = (pop32());
  /* 11fe9259 ret  */
  ESPCHK(0x11fe8840u, _esp0);
  ESP += 4; return;
}

/* FUN_10019370 @ 0x11fe9370 (79 bytes, 33 insns) */
void f_11fe9370(void) {
  FTRACE(0x11fe9370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe9370 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe9371 mov ebp, esp */
  EBP = (ESP);
  /* 11fe9373 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9376 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe9378 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe937a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe937c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe937f push eax */
  push32((uint32_t)(EAX));
  /* 11fe9380 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe9383 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9384 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe9387 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9388 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11fe938b push eax */
  push32((uint32_t)(EAX));
  /* 11fe938c call 0x11fe8840 */
  push32(0x11fe9391u); f_11fe8840();
  /* 11fe9391 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9394 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fe9397 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe939a push ecx */
  push32((uint32_t)(ECX));
  /* 11fe939b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11fe939e push edx */
  push32((uint32_t)(EDX));
  /* 11fe939f call 0x11fe1160 */
  push32(0x11fe93a4u); f_11fe1160();
  /* 11fe93a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe93a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe93aa cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe93ae jne 0x11fe93b8 */
  if (!C.zf) goto L_11fe93b8;
  /* 11fe93b0 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe93b3 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11fe93b5 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11fe93b8:;
  /* 11fe93b8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fe93bb mov esp, ebp */
  ESP = (EBP);
  /* 11fe93bd pop ebp */
  EBP = (pop32());
  /* 11fe93be ret  */
  ESPCHK(0x11fe9370u, _esp0);
  ESP += 4; return;
}

/* FUN_100193c0 @ 0x11fe93c0 (1302 bytes, 386 insns) */
void f_11fe93c0(void) {
  FTRACE(0x11fe93c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe93c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe93c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe93c3 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe93c6 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 11fe93cc mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 11fe93d2 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 11fe93d8 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 11fe93df mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11fe93e3 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11fe93e7 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 11fe93eb mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 11fe93ef mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11fe93f3 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11fe93f7 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 11fe93fb mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 11fe93ff mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11fe9403 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11fe9407 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 11fe940b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 11fe940f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11fe9416 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 11fe941a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 11fe941e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe9421 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11fe9424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9427 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11fe942a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe942d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9432 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9437 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 11fe943b mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 11fe943f and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11fe9444 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11fe9448 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe944b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9451 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe9453 je 0x11fe945e */
  if (C.zf) goto L_11fe945e;
  /* 11fe9455 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9458 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 11fe945c jmp 0x11fe9465 */
  goto L_11fe9465;
L_11fe945e:;
  /* 11fe945e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9461 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11fe9465:;
  /* 11fe9465 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe9468 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe946e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fe9470 jne 0x11fe94ac */
  if (!C.zf) goto L_11fe94ac;
  /* 11fe9472 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9476 jne 0x11fe94ac */
  if (!C.zf) goto L_11fe94ac;
  /* 11fe9478 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe947c jne 0x11fe94ac */
  if (!C.zf) goto L_11fe94ac;
  /* 11fe947e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9481 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11fe9486 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9489 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 11fe948d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9490 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 11fe9494 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9497 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 11fe949b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe949e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 11fe94a2 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe94a7 jmp 0x11fe98d2 */
  goto L_11fe98d2;
L_11fe94ac:;
  /* 11fe94ac mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe94af and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe94b5 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe94bb jne 0x11fe95a6 */
  if (!C.zf) goto L_11fe95a6;
  /* 11fe94c1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe94c4 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 11fe94c9 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe94d0 jne 0x11fe94d8 */
  if (!C.zf) goto L_11fe94d8;
  /* 11fe94d2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe94d6 je 0x11fe950c */
  if (C.zf) goto L_11fe950c;
L_11fe94d8:;
  /* 11fe94d8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe94db and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe94e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe94e3 jne 0x11fe950c */
  if (!C.zf) goto L_11fe950c;
  /* 11fe94e5 push 0x1200a2f8 */
  push32((uint32_t)(0x1200a2f8u));
  /* 11fe94ea mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe94ed add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe94f0 push edx */
  push32((uint32_t)(EDX));
  /* 11fe94f1 call 0x11fdf8d0 */
  push32(0x11fe94f6u); f_11fdf8d0();
  /* 11fe94f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe94f9 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe94fc mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11fe9500 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11fe9507 jmp 0x11fe95a1 */
  goto L_11fe95a1;
L_11fe950c:;
  /* 11fe950c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11fe950f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9515 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe9517 je 0x11fe954c */
  if (C.zf) goto L_11fe954c;
  /* 11fe9519 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9520 jne 0x11fe954c */
  if (!C.zf) goto L_11fe954c;
  /* 11fe9522 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9526 jne 0x11fe954c */
  if (!C.zf) goto L_11fe954c;
  /* 11fe9528 push 0x1200a2f0 */
  push32((uint32_t)(0x1200a2f0u));
  /* 11fe952d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9530 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9533 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9534 call 0x11fdf8d0 */
  push32(0x11fe9539u); f_11fdf8d0();
  /* 11fe9539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe953c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe953f mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11fe9543 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11fe954a jmp 0x11fe95a1 */
  goto L_11fe95a1;
L_11fe954c:;
  /* 11fe954c cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9553 jne 0x11fe957f */
  if (!C.zf) goto L_11fe957f;
  /* 11fe9555 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9559 jne 0x11fe957f */
  if (!C.zf) goto L_11fe957f;
  /* 11fe955b push 0x1200a2e8 */
  push32((uint32_t)(0x1200a2e8u));
  /* 11fe9560 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9563 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9566 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9567 call 0x11fdf8d0 */
  push32(0x11fe956cu); f_11fdf8d0();
  /* 11fe956c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe956f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9572 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11fe9576 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11fe957d jmp 0x11fe95a1 */
  goto L_11fe95a1;
L_11fe957f:;
  /* 11fe957f push 0x1200a2e0 */
  push32((uint32_t)(0x1200a2e0u));
  /* 11fe9584 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9587 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe958a push eax */
  push32((uint32_t)(EAX));
  /* 11fe958b call 0x11fdf8d0 */
  push32(0x11fe9590u); f_11fdf8d0();
  /* 11fe9590 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9593 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9596 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11fe959a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11fe95a1:;
  /* 11fe95a1 jmp 0x11fe98cf */
  goto L_11fe98cf;
L_11fe95a6:;
  /* 11fe95a6 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe95a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe95af sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11fe95b2 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11fe95b6 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe95b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe95be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe95c3 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11fe95c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe95ca shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11fe95cd mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11fe95d1 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11fe95d4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe95da mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11fe95dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe95e2 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe95e5 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11fe95e8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe95ee mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11fe95f1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe95f6 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe95f9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe95fb mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11fe95fe and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9604 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fe9607 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe960c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe960f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9611 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9614 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe9617 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe961a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11fe961d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11fe9621 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11fe9625 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11fe9629 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fe962c mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11fe962f mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11fe9632 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11fe9635 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11fe963b push 1 */
  push32((uint32_t)(0x1u));
  /* 11fe963d movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11fe9641 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe9643 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9644 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11fe9647 push eax */
  push32((uint32_t)(EAX));
  /* 11fe9648 call 0x11fecf00 */
  push32(0x11fe964du); f_11fecf00();
  /* 11fe964d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9650 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11fe9653 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9659 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe965f jl 0x11fe967d */
  if ((C.sf!=C.of)) goto L_11fe967d;
  /* 11fe9661 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11fe9665 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fe9669 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11fe966d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11fe9670 push eax */
  push32((uint32_t)(EAX));
  /* 11fe9671 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11fe9674 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9675 call 0x11fecac0 */
  push32(0x11fe967au); f_11fecac0();
  /* 11fe967a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe967d:;
  /* 11fe967d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9680 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11fe9684 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11fe9687 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11fe968a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe968d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe968f je 0x11fe96d1 */
  if (C.zf) goto L_11fe96d1;
  /* 11fe9691 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11fe9695 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe9698 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe969a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11fe969d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe96a1 jg 0x11fe96d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fe96d1;
  /* 11fe96a3 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe96a6 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11fe96ab mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe96ae mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11fe96b2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe96b5 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11fe96b9 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe96bc mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11fe96c0 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe96c3 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11fe96c7 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe96cc jmp 0x11fe98d2 */
  goto L_11fe98d2;
L_11fe96d1:;
  /* 11fe96d1 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe96d5 jle 0x11fe96de */
  if ((C.zf||C.sf!=C.of)) goto L_11fe96de;
  /* 11fe96d7 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11fe96de:;
  /* 11fe96de mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11fe96e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe96e6 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe96eb mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11fe96ee mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11fe96f4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11fe96fb jmp 0x11fe9706 */
  goto L_11fe9706;
L_11fe96fd:;
  /* 11fe96fd mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fe9700 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9703 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11fe9706:;
  /* 11fe9706 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe970a jge 0x11fe971a */
  if ((C.sf==C.of)) goto L_11fe971a;
  /* 11fe970c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11fe970f push edx */
  push32((uint32_t)(EDX));
  /* 11fe9710 call 0x11fe8630 */
  push32(0x11fe9715u); f_11fe8630();
  /* 11fe9715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9718 jmp 0x11fe96fd */
  goto L_11fe96fd;
L_11fe971a:;
  /* 11fe971a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe971e jge 0x11fe974c */
  if ((C.sf==C.of)) goto L_11fe974c;
  /* 11fe9720 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fe9723 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe9725 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe972a mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11fe972d jmp 0x11fe9738 */
  goto L_11fe9738;
L_11fe972f:;
  /* 11fe972f mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11fe9732 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9735 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11fe9738:;
  /* 11fe9738 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe973c jle 0x11fe974c */
  if ((C.zf||C.sf!=C.of)) goto L_11fe974c;
  /* 11fe973e lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11fe9741 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9742 call 0x11fe8690 */
  push32(0x11fe9747u); f_11fe8690();
  /* 11fe9747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe974a jmp 0x11fe972f */
  goto L_11fe972f;
L_11fe974c:;
  /* 11fe974c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe974f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9752 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe9755 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fe9758 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe975b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe975e jmp 0x11fe9769 */
  goto L_11fe9769;
L_11fe9760:;
  /* 11fe9760 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe9763 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9766 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fe9769:;
  /* 11fe9769 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe976d jle 0x11fe97d5 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe97d5;
  /* 11fe976f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11fe9772 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11fe9775 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fe9778 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11fe977b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fe977e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11fe9781 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11fe9784 push eax */
  push32((uint32_t)(EAX));
  /* 11fe9785 call 0x11fe8630 */
  push32(0x11fe978au); f_11fe8630();
  /* 11fe978a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe978d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11fe9790 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9791 call 0x11fe8630 */
  push32(0x11fe9796u); f_11fe8630();
  /* 11fe9796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9799 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11fe979c push edx */
  push32((uint32_t)(EDX));
  /* 11fe979d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11fe97a0 push eax */
  push32((uint32_t)(EAX));
  /* 11fe97a1 call 0x11fe8580 */
  push32(0x11fe97a6u); f_11fe8580();
  /* 11fe97a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe97a9 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11fe97ac push ecx */
  push32((uint32_t)(ECX));
  /* 11fe97ad call 0x11fe8630 */
  push32(0x11fe97b2u); f_11fe8630();
  /* 11fe97b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe97b5 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11fe97b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe97be add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe97c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe97c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11fe97c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe97c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe97cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe97cf mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11fe97d3 jmp 0x11fe9760 */
  goto L_11fe9760;
L_11fe97d5:;
  /* 11fe97d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe97d8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe97db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe97de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe97e1 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe97e3 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11fe97e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe97e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe97ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe97ef movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11fe97f3 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe97f6 jl 0x11fe9853 */
  if ((C.sf!=C.of)) goto L_11fe9853;
  /* 11fe97f8 jmp 0x11fe9803 */
  goto L_11fe9803;
L_11fe97fa:;
  /* 11fe97fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe97fd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9800 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fe9803:;
  /* 11fe9803 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9806 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9809 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe980c jb 0x11fe9821 */
  if (C.cf) goto L_11fe9821;
  /* 11fe980e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9811 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fe9814 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9817 jne 0x11fe9821 */
  if (!C.zf) goto L_11fe9821;
  /* 11fe9819 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe981c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11fe981f jmp 0x11fe97fa */
  goto L_11fe97fa;
L_11fe9821:;
  /* 11fe9821 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9824 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9827 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe982a jae 0x11fe9845 */
  if (!C.cf) goto L_11fe9845;
  /* 11fe982c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe982f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9832 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe9835 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9838 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11fe983b add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fe983f mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9842 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11fe9845:;
  /* 11fe9845 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9848 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe984a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11fe984c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe984f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11fe9851 jmp 0x11fe98ac */
  goto L_11fe98ac;
L_11fe9853:;
  /* 11fe9853 jmp 0x11fe985e */
  goto L_11fe985e;
L_11fe9855:;
  /* 11fe9855 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9858 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe985b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fe985e:;
  /* 11fe985e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9861 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9864 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9867 jb 0x11fe9876 */
  if (C.cf) goto L_11fe9876;
  /* 11fe9869 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe986c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fe986f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9872 jne 0x11fe9876 */
  if (!C.zf) goto L_11fe9876;
  /* 11fe9874 jmp 0x11fe9855 */
  goto L_11fe9855;
L_11fe9876:;
  /* 11fe9876 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9879 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe987c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe987f jae 0x11fe98ac */
  if (!C.cf) goto L_11fe98ac;
  /* 11fe9881 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9884 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11fe9889 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe988c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11fe9890 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe9893 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11fe9897 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe989a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11fe989e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe98a1 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11fe98a5 mov eax, 1 */
  EAX = (0x1u);
  /* 11fe98aa jmp 0x11fe98d2 */
  goto L_11fe98d2;
L_11fe98ac:;
  /* 11fe98ac mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe98af add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe98b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe98b5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe98b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe98ba mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe98bd mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11fe98c0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe98c3 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11fe98c7 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11fe98ca mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11fe98cf:;
  /* 11fe98cf mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11fe98d2:;
  /* 11fe98d2 mov esp, ebp */
  ESP = (EBP);
  /* 11fe98d4 pop ebp */
  EBP = (pop32());
  /* 11fe98d5 ret  */
  ESPCHK(0x11fe93c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100198e0 @ 0x11fe98e0 (255 bytes, 88 insns) */
void f_11fe98e0(void) {
  FTRACE(0x11fe98e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe98e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe98e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe98e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11fe98e6:;
  /* 11fe98e6 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe98ed jle 0x11fe9906 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe9906;
  /* 11fe98ef push 8 */
  push32((uint32_t)(0x8u));
  /* 11fe98f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe98f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe98f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe98f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe98f9 call 0x11fe0860 */
  push32(0x11fe98feu); f_11fe0860();
  /* 11fe98fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9901 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11fe9904 jmp 0x11fe991f */
  goto L_11fe991f;
L_11fe9906:;
  /* 11fe9906 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9909 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe990b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe990d mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe9913 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9915 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fe9919 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe991c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fe991f:;
  /* 11fe991f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9923 je 0x11fe9930 */
  if (C.zf) goto L_11fe9930;
  /* 11fe9925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9928 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe992b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fe992e jmp 0x11fe98e6 */
  goto L_11fe98e6;
L_11fe9930:;
  /* 11fe9930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9933 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9935 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe9937 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe993a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe993d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9940 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fe9943 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9946 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe9949 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe994d je 0x11fe9955 */
  if (C.zf) goto L_11fe9955;
  /* 11fe994f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9953 jne 0x11fe9968 */
  if (!C.zf) goto L_11fe9968;
L_11fe9955:;
  /* 11fe9955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9958 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe995a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe995c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe995f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9965 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11fe9968:;
  /* 11fe9968 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fe996f:;
  /* 11fe996f cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9976 jle 0x11fe998b */
  if ((C.zf||C.sf!=C.of)) goto L_11fe998b;
  /* 11fe9978 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe997a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe997d push edx */
  push32((uint32_t)(EDX));
  /* 11fe997e call 0x11fe0860 */
  push32(0x11fe9983u); f_11fe0860();
  /* 11fe9983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9986 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fe9989 jmp 0x11fe99a0 */
  goto L_11fe99a0;
L_11fe998b:;
  /* 11fe998b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe998e mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe9994 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9996 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fe999a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe999d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11fe99a0:;
  /* 11fe99a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe99a4 je 0x11fe99cb */
  if (C.zf) goto L_11fe99cb;
  /* 11fe99a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe99a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe99ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe99af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11fe99b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe99b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe99b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe99bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe99bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe99c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe99c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe99c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fe99c9 jmp 0x11fe996f */
  goto L_11fe996f;
L_11fe99cb:;
  /* 11fe99cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe99cf jne 0x11fe99d8 */
  if (!C.zf) goto L_11fe99d8;
  /* 11fe99d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe99d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe99d6 jmp 0x11fe99db */
  goto L_11fe99db;
L_11fe99d8:;
  /* 11fe99d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11fe99db:;
  /* 11fe99db mov esp, ebp */
  ESP = (EBP);
  /* 11fe99dd pop ebp */
  EBP = (pop32());
  /* 11fe99de ret  */
  ESPCHK(0x11fe98e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100199e0 @ 0x11fe99e0 (17 bytes, 8 insns) */
void f_11fe99e0(void) {
  FTRACE(0x11fe99e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe99e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe99e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe99e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe99e6 push eax */
  push32((uint32_t)(EAX));
  /* 11fe99e7 call 0x11fe98e0 */
  push32(0x11fe99ecu); f_11fe98e0();
  /* 11fe99ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe99ef pop ebp */
  EBP = (pop32());
  /* 11fe99f0 ret  */
  ESPCHK(0x11fe99e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019a00 @ 0x11fe9a00 (297 bytes, 106 insns) */
void f_11fe9a00(void) {
  FTRACE(0x11fe9a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe9a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe9a01 mov ebp, esp */
  EBP = (ESP);
  /* 11fe9a03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9a06 push esi */
  push32((uint32_t)(ESI));
L_11fe9a07:;
  /* 11fe9a07 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9a0e jle 0x11fe9a27 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe9a27;
  /* 11fe9a10 push 8 */
  push32((uint32_t)(0x8u));
  /* 11fe9a12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9a15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9a17 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fe9a19 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9a1a call 0x11fe0860 */
  push32(0x11fe9a1fu); f_11fe0860();
  /* 11fe9a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9a22 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fe9a25 jmp 0x11fe9a40 */
  goto L_11fe9a40;
L_11fe9a27:;
  /* 11fe9a27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9a2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9a2c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe9a2e mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe9a34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9a36 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fe9a3a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9a3d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11fe9a40:;
  /* 11fe9a40 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9a44 je 0x11fe9a51 */
  if (C.zf) goto L_11fe9a51;
  /* 11fe9a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9a49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9a4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fe9a4f jmp 0x11fe9a07 */
  goto L_11fe9a07;
L_11fe9a51:;
  /* 11fe9a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9a54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9a56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe9a58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fe9a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9a5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9a61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fe9a64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9a67 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe9a6a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9a6e je 0x11fe9a76 */
  if (C.zf) goto L_11fe9a76;
  /* 11fe9a70 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9a74 jne 0x11fe9a89 */
  if (!C.zf) goto L_11fe9a89;
L_11fe9a76:;
  /* 11fe9a76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9a79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9a7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe9a7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe9a80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9a83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9a86 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11fe9a89:;
  /* 11fe9a89 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe9a90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fe9a97:;
  /* 11fe9a97 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9a9e jle 0x11fe9ab3 */
  if ((C.zf||C.sf!=C.of)) goto L_11fe9ab3;
  /* 11fe9aa0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fe9aa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9aa5 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9aa6 call 0x11fe0860 */
  push32(0x11fe9aabu); f_11fe0860();
  /* 11fe9aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9aae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11fe9ab1 jmp 0x11fe9ac8 */
  goto L_11fe9ac8;
L_11fe9ab3:;
  /* 11fe9ab3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9ab6 mov ecx, dword ptr [0x1200cfec] */
  ECX = (r32((uint32_t)(0x1200cfec)));
  /* 11fe9abc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9abe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11fe9ac2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9ac5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11fe9ac8:;
  /* 11fe9ac8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9acc je 0x11fe9b09 */
  if (C.zf) goto L_11fe9b09;
  /* 11fe9ace push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe9ad0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11fe9ad2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9ad5 push eax */
  push32((uint32_t)(EAX));
  /* 11fe9ad6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe9ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9ada call 0x11fecfd0 */
  push32(0x11fe9adfu); f_11fecfd0();
  /* 11fe9adf mov ecx, eax */
  ECX = (EAX);
  /* 11fe9ae1 mov esi, edx */
  ESI = (EDX);
  /* 11fe9ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9ae6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9ae9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fe9aea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9aec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9aee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fe9af1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11fe9af4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9af7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9af9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fe9afb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe9afe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9b01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9b04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fe9b07 jmp 0x11fe9a97 */
  goto L_11fe9a97;
L_11fe9b09:;
  /* 11fe9b09 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9b0d jne 0x11fe9b1e */
  if (!C.zf) goto L_11fe9b1e;
  /* 11fe9b0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe9b12 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe9b14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9b17 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9b1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fe9b1c jmp 0x11fe9b24 */
  goto L_11fe9b24;
L_11fe9b1e:;
  /* 11fe9b1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe9b21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11fe9b24:;
  /* 11fe9b24 pop esi */
  ESI = (pop32());
  /* 11fe9b25 mov esp, ebp */
  ESP = (EBP);
  /* 11fe9b27 pop ebp */
  EBP = (pop32());
  /* 11fe9b28 ret  */
  ESPCHK(0x11fe9a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b30 @ 0x11fe9b30 (46 bytes, 18 insns) */
void f_11fe9b30(void) {
  FTRACE(0x11fe9b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe9b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe9b31 mov ebp, esp */
  EBP = (ESP);
  /* 11fe9b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9b34 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fe9b36 call 0x11fdb0c0 */
  push32(0x11fe9b3bu); f_11fdb0c0();
  /* 11fe9b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9b3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9b41 push eax */
  push32((uint32_t)(EAX));
  /* 11fe9b42 call 0x11fe9b60 */
  push32(0x11fe9b47u); f_11fe9b60();
  /* 11fe9b47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9b4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe9b4d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11fe9b4f call 0x11fdb160 */
  push32(0x11fe9b54u); f_11fdb160();
  /* 11fe9b54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9b57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9b5a mov esp, ebp */
  ESP = (EBP);
  /* 11fe9b5c pop ebp */
  EBP = (pop32());
  /* 11fe9b5d ret  */
  ESPCHK(0x11fe9b30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11fe9b60 (198 bytes, 69 insns) */
void f_11fe9b60(void) {
  FTRACE(0x11fe9b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe9b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe9b61 mov ebp, esp */
  EBP = (ESP);
  /* 11fe9b63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9b66 mov eax, dword ptr [0x1200efbc] */
  EAX = (r32((uint32_t)(0x1200efbc)));
  /* 11fe9b6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe9b6e cmp dword ptr [0x12010a20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010a20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9b75 jne 0x11fe9b7e */
  if (!C.zf) goto L_11fe9b7e;
  /* 11fe9b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9b79 jmp 0x11fe9c22 */
  goto L_11fe9c22;
L_11fe9b7e:;
  /* 11fe9b7e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9b82 jne 0x11fe9ba6 */
  if (!C.zf) goto L_11fe9ba6;
  /* 11fe9b84 cmp dword ptr [0x1200efc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200efc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9b8b je 0x11fe9ba6 */
  if (C.zf) goto L_11fe9ba6;
  /* 11fe9b8d call 0x11fed060 */
  push32(0x11fe9b92u); f_11fed060();
  /* 11fe9b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe9b94 je 0x11fe9b9d */
  if (C.zf) goto L_11fe9b9d;
  /* 11fe9b96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9b98 jmp 0x11fe9c22 */
  goto L_11fe9c22;
L_11fe9b9d:;
  /* 11fe9b9d mov ecx, dword ptr [0x1200efbc] */
  ECX = (r32((uint32_t)(0x1200efbc)));
  /* 11fe9ba3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fe9ba6:;
  /* 11fe9ba6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9baa je 0x11fe9c20 */
  if (C.zf) goto L_11fe9c20;
  /* 11fe9bac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9bb0 je 0x11fe9c20 */
  if (C.zf) goto L_11fe9c20;
  /* 11fe9bb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9bb5 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9bb6 call 0x11fdf750 */
  push32(0x11fe9bbbu); f_11fdf750();
  /* 11fe9bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9bbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fe9bc1:;
  /* 11fe9bc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9bc4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9bc7 je 0x11fe9c20 */
  if (C.zf) goto L_11fe9c20;
  /* 11fe9bc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9bcc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fe9bce push edx */
  push32((uint32_t)(EDX));
  /* 11fe9bcf call 0x11fdf750 */
  push32(0x11fe9bd4u); f_11fdf750();
  /* 11fe9bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9bd7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9bda jbe 0x11fe9c15 */
  if ((C.cf||C.zf)) goto L_11fe9c15;
  /* 11fe9bdc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9bdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe9be1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9be4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11fe9be8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9beb jne 0x11fe9c15 */
  if (!C.zf) goto L_11fe9c15;
  /* 11fe9bed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9bf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9bf4 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9bf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9bf8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fe9bfa push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9bfb call 0x11fed010 */
  push32(0x11fe9c00u); f_11fed010();
  /* 11fe9c00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe9c05 jne 0x11fe9c15 */
  if (!C.zf) goto L_11fe9c15;
  /* 11fe9c07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9c0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fe9c0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9c0f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11fe9c13 jmp 0x11fe9c22 */
  goto L_11fe9c22;
L_11fe9c15:;
  /* 11fe9c15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9c18 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9c1b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fe9c1e jmp 0x11fe9bc1 */
  goto L_11fe9bc1;
L_11fe9c20:;
  /* 11fe9c20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fe9c22:;
  /* 11fe9c22 mov esp, ebp */
  ESP = (EBP);
  /* 11fe9c24 pop ebp */
  EBP = (pop32());
  /* 11fe9c25 ret  */
  ESPCHK(0x11fe9b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10019c30 @ 0x11fe9c30 (130 bytes, 43 insns) */
void f_11fe9c30(void) {
  FTRACE(0x11fe9c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe9c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe9c31 mov ebp, esp */
  EBP = (ESP);
  /* 11fe9c33 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9c34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9c37 cmp eax, dword ptr [0x12010a1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12010a1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9c3d jae 0x11fe9c61 */
  if (!C.cf) goto L_11fe9c61;
  /* 11fe9c3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9c42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fe9c45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9c48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9c4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe9c4e mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fe9c55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11fe9c5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9c5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe9c5f jne 0x11fe9c7c */
  if (!C.zf) goto L_11fe9c7c;
L_11fe9c61:;
  /* 11fe9c61 call 0x11fe6850 */
  push32(0x11fe9c66u); f_11fe6850();
  /* 11fe9c66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fe9c6c call 0x11fe6860 */
  push32(0x11fe9c71u); f_11fe6860();
  /* 11fe9c71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fe9c77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9c7a jmp 0x11fe9cae */
  goto L_11fe9cae;
L_11fe9c7c:;
  /* 11fe9c7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9c7f push edx */
  push32((uint32_t)(EDX));
  /* 11fe9c80 call 0x11fed620 */
  push32(0x11fe9c85u); f_11fed620();
  /* 11fe9c85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9c88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe9c8b push eax */
  push32((uint32_t)(EAX));
  /* 11fe9c8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe9c8f push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9c90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9c93 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9c94 call 0x11fe9cc0 */
  push32(0x11fe9c99u); f_11fe9cc0();
  /* 11fe9c99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9c9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe9c9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9ca2 push eax */
  push32((uint32_t)(EAX));
  /* 11fe9ca3 call 0x11fed6b0 */
  push32(0x11fe9ca8u); f_11fed6b0();
  /* 11fe9ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9cab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fe9cae:;
  /* 11fe9cae mov esp, ebp */
  ESP = (EBP);
  /* 11fe9cb0 pop ebp */
  EBP = (pop32());
  /* 11fe9cb1 ret  */
  ESPCHK(0x11fe9c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10019cc0 @ 0x11fe9cc0 (178 bytes, 56 insns) */
void f_11fe9cc0(void) {
  FTRACE(0x11fe9cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe9cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe9cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11fe9cc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9cc9 push eax */
  push32((uint32_t)(EAX));
  /* 11fe9cca call 0x11fed4a0 */
  push32(0x11fe9ccfu); f_11fed4a0();
  /* 11fe9ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9cd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe9cd5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9cd9 jne 0x11fe9cee */
  if (!C.zf) goto L_11fe9cee;
  /* 11fe9cdb call 0x11fe6850 */
  push32(0x11fe9ce0u); f_11fe6850();
  /* 11fe9ce0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fe9ce6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9ce9 jmp 0x11fe9d6e */
  goto L_11fe9d6e;
L_11fe9cee:;
  /* 11fe9cee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe9cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9cf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe9cf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe9cf7 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9cf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fe9cfb push eax */
  push32((uint32_t)(EAX));
  /* 11fe9cfc call dword ptr [0x12011350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011350))), 0x11fe9d02u);
  /* 11fe9d02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fe9d05 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9d09 jne 0x11fe9d16 */
  if (!C.zf) goto L_11fe9d16;
  /* 11fe9d0b call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11fe9d11u);
  /* 11fe9d11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe9d14 jmp 0x11fe9d1d */
  goto L_11fe9d1d;
L_11fe9d16:;
  /* 11fe9d16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fe9d1d:;
  /* 11fe9d1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9d21 je 0x11fe9d34 */
  if (C.zf) goto L_11fe9d34;
  /* 11fe9d23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9d26 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9d27 call 0x11fe67b0 */
  push32(0x11fe9d2cu); f_11fe67b0();
  /* 11fe9d2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9d2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9d32 jmp 0x11fe9d6e */
  goto L_11fe9d6e;
L_11fe9d34:;
  /* 11fe9d34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9d37 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11fe9d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9d3d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9d40 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe9d43 mov ecx, dword ptr [edx*4 + 0x120108e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120108e0)));
  /* 11fe9d4a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11fe9d4e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11fe9d51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9d54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fe9d57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9d5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9d5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe9d60 mov eax, dword ptr [eax*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fe9d67 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11fe9d6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11fe9d6e:;
  /* 11fe9d6e mov esp, ebp */
  ESP = (EBP);
  /* 11fe9d70 pop ebp */
  EBP = (pop32());
  /* 11fe9d71 ret  */
  ESPCHK(0x11fe9cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019d80 @ 0x11fe9d80 (130 bytes, 43 insns) */
void f_11fe9d80(void) {
  FTRACE(0x11fe9d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe9d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe9d81 mov ebp, esp */
  EBP = (ESP);
  /* 11fe9d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9d87 cmp eax, dword ptr [0x12010a1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12010a1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9d8d jae 0x11fe9db1 */
  if (!C.cf) goto L_11fe9db1;
  /* 11fe9d8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9d92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fe9d95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9d98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9d9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe9d9e mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fe9da5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11fe9daa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9dad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe9daf jne 0x11fe9dcc */
  if (!C.zf) goto L_11fe9dcc;
L_11fe9db1:;
  /* 11fe9db1 call 0x11fe6850 */
  push32(0x11fe9db6u); f_11fe6850();
  /* 11fe9db6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fe9dbc call 0x11fe6860 */
  push32(0x11fe9dc1u); f_11fe6860();
  /* 11fe9dc1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fe9dc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9dca jmp 0x11fe9dfe */
  goto L_11fe9dfe;
L_11fe9dcc:;
  /* 11fe9dcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9dcf push edx */
  push32((uint32_t)(EDX));
  /* 11fe9dd0 call 0x11fed620 */
  push32(0x11fe9dd5u); f_11fed620();
  /* 11fe9dd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9dd8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe9ddb push eax */
  push32((uint32_t)(EAX));
  /* 11fe9ddc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe9ddf push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9de0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9de3 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9de4 call 0x11fe9e10 */
  push32(0x11fe9de9u); f_11fe9e10();
  /* 11fe9de9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9dec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe9def mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9df2 push eax */
  push32((uint32_t)(EAX));
  /* 11fe9df3 call 0x11fed6b0 */
  push32(0x11fe9df8u); f_11fed6b0();
  /* 11fe9df8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9dfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fe9dfe:;
  /* 11fe9dfe mov esp, ebp */
  ESP = (EBP);
  /* 11fe9e00 pop ebp */
  EBP = (pop32());
  /* 11fe9e01 ret  */
  ESPCHK(0x11fe9d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10019e10 @ 0x11fe9e10 (627 bytes, 182 insns) */
void f_11fe9e10(void) {
  FTRACE(0x11fe9e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fe9e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11fe9e11 mov ebp, esp */
  EBP = (ESP);
  /* 11fe9e13 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9e19 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fe9e20 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe9e23 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11fe9e29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9e2d jne 0x11fe9e36 */
  if (!C.zf) goto L_11fe9e36;
  /* 11fe9e2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9e31 jmp 0x11fea07f */
  goto L_11fea07f;
L_11fe9e36:;
  /* 11fe9e36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9e39 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fe9e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9e3f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9e42 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe9e45 mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fe9e4c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11fe9e51 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9e54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fe9e56 je 0x11fe9e68 */
  if (C.zf) goto L_11fe9e68;
  /* 11fe9e58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fe9e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe9e5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9e5f push edx */
  push32((uint32_t)(EDX));
  /* 11fe9e60 call 0x11fe9cc0 */
  push32(0x11fe9e65u); f_11fe9cc0();
  /* 11fe9e65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fe9e68:;
  /* 11fe9e68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9e6b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fe9e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9e71 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9e74 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe9e77 mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fe9e7e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11fe9e83 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11fe9e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe9e8a je 0x11fe9f9c */
  if (C.zf) goto L_11fe9f9c;
  /* 11fe9e90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe9e93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fe9e96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11fe9e9d:;
  /* 11fe9e9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9ea0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9ea3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9ea6 jae 0x11fe9f9a */
  if (!C.cf) goto L_11fe9f9a;
  /* 11fe9eac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11fe9eb2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fe9eb5:;
  /* 11fe9eb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9eb8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11fe9ebe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9ec0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9ec6 jge 0x11fe9f27 */
  if ((C.sf==C.of)) goto L_11fe9f27;
  /* 11fe9ec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9ecb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9ece cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9ed1 jae 0x11fe9f27 */
  if (!C.cf) goto L_11fe9f27;
  /* 11fe9ed3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9ed6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11fe9ed8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11fe9ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fe9ee1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9ee4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fe9ee7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11fe9eee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9ef1 jne 0x11fe9f11 */
  if (!C.zf) goto L_11fe9f11;
  /* 11fe9ef3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11fe9ef9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9efc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11fe9f02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9f05 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11fe9f08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9f0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9f0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fe9f11:;
  /* 11fe9f11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9f14 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11fe9f1a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11fe9f1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9f1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9f22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fe9f25 jmp 0x11fe9eb5 */
  goto L_11fe9eb5;
L_11fe9f27:;
  /* 11fe9f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe9f29 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11fe9f2f push edx */
  push32((uint32_t)(EDX));
  /* 11fe9f30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9f33 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11fe9f39 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9f3b push eax */
  push32((uint32_t)(EAX));
  /* 11fe9f3c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11fe9f42 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9f43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9f46 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fe9f49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9f4c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fe9f4f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe9f52 mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fe9f59 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11fe9f5c push eax */
  push32((uint32_t)(EAX));
  /* 11fe9f5d call dword ptr [0x1201141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201141c))), 0x11fe9f63u);
  /* 11fe9f63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe9f65 je 0x11fe9f8a */
  if (C.zf) goto L_11fe9f8a;
  /* 11fe9f67 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fe9f6a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fe9f70 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fe9f73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fe9f76 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11fe9f7c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fe9f7e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9f84 jge 0x11fe9f88 */
  if ((C.sf==C.of)) goto L_11fe9f88;
  /* 11fe9f86 jmp 0x11fe9f9a */
  goto L_11fe9f9a;
L_11fe9f88:;
  /* 11fe9f88 jmp 0x11fe9f95 */
  goto L_11fe9f95;
L_11fe9f8a:;
  /* 11fe9f8a call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11fe9f90u);
  /* 11fe9f90 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fe9f93 jmp 0x11fe9f9a */
  goto L_11fe9f9a;
L_11fe9f95:;
  /* 11fe9f95 jmp 0x11fe9e9d */
  goto L_11fe9e9d;
L_11fe9f9a:;
  /* 11fe9f9a jmp 0x11fe9fec */
  goto L_11fe9fec;
L_11fe9f9c:;
  /* 11fe9f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fe9f9e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11fe9fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9fa5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fe9fa8 push edx */
  push32((uint32_t)(EDX));
  /* 11fe9fa9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fe9fac push eax */
  push32((uint32_t)(EAX));
  /* 11fe9fad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9fb0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fe9fb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fe9fb6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fe9fb9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fe9fbc mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fe9fc3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11fe9fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11fe9fc7 call dword ptr [0x1201141c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201141c))), 0x11fe9fcdu);
  /* 11fe9fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fe9fcf je 0x11fe9fe3 */
  if (C.zf) goto L_11fe9fe3;
  /* 11fe9fd1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fe9fd8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11fe9fde mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11fe9fe1 jmp 0x11fe9fec */
  goto L_11fe9fec;
L_11fe9fe3:;
  /* 11fe9fe3 call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11fe9fe9u);
  /* 11fe9fe9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fe9fec:;
  /* 11fe9fec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9ff0 jne 0x11fea076 */
  if (!C.zf) goto L_11fea076;
  /* 11fe9ff6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fe9ffa je 0x11fea02a */
  if (C.zf) goto L_11fea02a;
  /* 11fe9ffc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea000 jne 0x11fea019 */
  if (!C.zf) goto L_11fea019;
  /* 11fea002 call 0x11fe6850 */
  push32(0x11fea007u); f_11fe6850();
  /* 11fea007 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fea00d call 0x11fe6860 */
  push32(0x11fea012u); f_11fe6860();
  /* 11fea012 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea015 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11fea017 jmp 0x11fea025 */
  goto L_11fea025;
L_11fea019:;
  /* 11fea019 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea01c push edx */
  push32((uint32_t)(EDX));
  /* 11fea01d call 0x11fe67b0 */
  push32(0x11fea022u); f_11fe67b0();
  /* 11fea022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fea025:;
  /* 11fea025 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea028 jmp 0x11fea07f */
  goto L_11fea07f;
L_11fea02a:;
  /* 11fea02a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea02d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fea030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea033 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fea036 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fea039 mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fea040 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11fea045 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11fea048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fea04a je 0x11fea05b */
  if (C.zf) goto L_11fea05b;
  /* 11fea04c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea04f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11fea052 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea055 jne 0x11fea05b */
  if (!C.zf) goto L_11fea05b;
  /* 11fea057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fea059 jmp 0x11fea07f */
  goto L_11fea07f;
L_11fea05b:;
  /* 11fea05b call 0x11fe6850 */
  push32(0x11fea060u); f_11fe6850();
  /* 11fea060 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11fea066 call 0x11fe6860 */
  push32(0x11fea06bu); f_11fe6860();
  /* 11fea06b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fea071 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea074 jmp 0x11fea07f */
  goto L_11fea07f;
L_11fea076:;
  /* 11fea076 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fea079 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11fea07f:;
  /* 11fea07f mov esp, ebp */
  ESP = (EBP);
  /* 11fea081 pop ebp */
  EBP = (pop32());
  /* 11fea082 ret  */
  ESPCHK(0x11fe9e10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a090 @ 0x11fea090 (199 bytes, 68 insns) */
void f_11fea090(void) {
  FTRACE(0x11fea090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea090 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea091 mov ebp, esp */
  EBP = (ESP);
  /* 11fea093 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea094 push ebx */
  push32((uint32_t)(EBX));
  /* 11fea095 push esi */
  push32((uint32_t)(ESI));
  /* 11fea096 push edi */
  push32((uint32_t)(EDI));
L_11fea097:;
  /* 11fea097 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea09b jne 0x11fea0bb */
  if (!C.zf) goto L_11fea0bb;
  /* 11fea09d push 0x1200a100 */
  push32((uint32_t)(0x1200a100u));
  /* 11fea0a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fea0a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11fea0a6 push 0x1200a300 */
  push32((uint32_t)(0x1200a300u));
  /* 11fea0ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11fea0ad call 0x11fd9d80 */
  push32(0x11fea0b2u); f_11fd9d80();
  /* 11fea0b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea0b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea0b8 jne 0x11fea0bb */
  if (!C.zf) goto L_11fea0bb;
  /* 11fea0ba int3  */
  x86_unimpl("int3 @ 0x11fea0ba");
L_11fea0bb:;
  /* 11fea0bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fea0bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fea0bf jne 0x11fea097 */
  if (!C.zf) goto L_11fea097;
  /* 11fea0c1 mov ecx, dword ptr [0x1200f214] */
  ECX = (r32((uint32_t)(0x1200f214)));
  /* 11fea0c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea0ca mov dword ptr [0x1200f214], ecx */
  w32((uint32_t)(0x1200f214), (ECX));
  /* 11fea0d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea0d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fea0d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11fea0d8 push 0x1200a300 */
  push32((uint32_t)(0x1200a300u));
  /* 11fea0dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11fea0df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11fea0e4 call 0x11fdb1c0 */
  push32(0x11fea0e9u); f_11fdb1c0();
  /* 11fea0e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea0ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea0ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11fea0f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea0f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea0f9 je 0x11fea116 */
  if (C.zf) goto L_11fea116;
  /* 11fea0fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea0fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fea101 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fea104 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea107 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11fea10a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea10d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11fea114 jmp 0x11fea13b */
  goto L_11fea13b;
L_11fea116:;
  /* 11fea116 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea119 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11fea11c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fea11f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea122 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11fea125 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea128 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea12b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea12e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fea131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea134 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11fea13b:;
  /* 11fea13b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea13e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea141 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fea144 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11fea146 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea149 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11fea150 pop edi */
  EDI = (pop32());
  /* 11fea151 pop esi */
  ESI = (pop32());
  /* 11fea152 pop ebx */
  EBX = (pop32());
  /* 11fea153 mov esp, ebp */
  ESP = (EBP);
  /* 11fea155 pop ebp */
  EBP = (pop32());
  /* 11fea156 ret  */
  ESPCHK(0x11fea090u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11fea160 (50 bytes, 17 insns) */
void f_11fea160(void) {
  FTRACE(0x11fea160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea160 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea161 mov ebp, esp */
  EBP = (ESP);
  /* 11fea163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea166 cmp eax, dword ptr [0x12010a1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12010a1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea16c jb 0x11fea172 */
  if (C.cf) goto L_11fea172;
  /* 11fea16e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fea170 jmp 0x11fea190 */
  goto L_11fea190;
L_11fea172:;
  /* 11fea172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea175 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fea178 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea17b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fea17e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fea181 mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fea188 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11fea18d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11fea190:;
  /* 11fea190 pop ebp */
  EBP = (pop32());
  /* 11fea191 ret  */
  ESPCHK(0x11fea160u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a1a0 @ 0x11fea1a0 (300 bytes, 80 insns) */
void f_11fea1a0(void) {
  FTRACE(0x11fea1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea1a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fea1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea1a4 cmp dword ptr [0x12010600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea1ab jne 0x11fea1b9 */
  if (!C.zf) goto L_11fea1b9;
  /* 11fea1ad mov dword ptr [0x12010600], 0x200 */
  w32((uint32_t)(0x12010600), (0x200u));
  /* 11fea1b7 jmp 0x11fea1cc */
  goto L_11fea1cc;
L_11fea1b9:;
  /* 11fea1b9 cmp dword ptr [0x12010600], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12010600))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea1c0 jge 0x11fea1cc */
  if ((C.sf==C.of)) goto L_11fea1cc;
  /* 11fea1c2 mov dword ptr [0x12010600], 0x14 */
  w32((uint32_t)(0x12010600), (0x14u));
L_11fea1cc:;
  /* 11fea1cc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11fea1d1 push 0x1200a30c */
  push32((uint32_t)(0x1200a30cu));
  /* 11fea1d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fea1d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11fea1da mov eax, dword ptr [0x12010600] */
  EAX = (r32((uint32_t)(0x12010600)));
  /* 11fea1df push eax */
  push32((uint32_t)(EAX));
  /* 11fea1e0 call 0x11fdb5d0 */
  push32(0x11fea1e5u); f_11fdb5d0();
  /* 11fea1e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea1e8 mov dword ptr [0x1200f2ac], eax */
  w32((uint32_t)(0x1200f2ac), (EAX));
  /* 11fea1ed cmp dword ptr [0x1200f2ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f2ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea1f4 jne 0x11fea235 */
  if (!C.zf) goto L_11fea235;
  /* 11fea1f6 mov dword ptr [0x12010600], 0x14 */
  w32((uint32_t)(0x12010600), (0x14u));
  /* 11fea200 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11fea205 push 0x1200a30c */
  push32((uint32_t)(0x1200a30cu));
  /* 11fea20a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fea20c push 4 */
  push32((uint32_t)(0x4u));
  /* 11fea20e mov ecx, dword ptr [0x12010600] */
  ECX = (r32((uint32_t)(0x12010600)));
  /* 11fea214 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea215 call 0x11fdb5d0 */
  push32(0x11fea21au); f_11fdb5d0();
  /* 11fea21a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea21d mov dword ptr [0x1200f2ac], eax */
  w32((uint32_t)(0x1200f2ac), (EAX));
  /* 11fea222 cmp dword ptr [0x1200f2ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f2ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea229 jne 0x11fea235 */
  if (!C.zf) goto L_11fea235;
  /* 11fea22b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11fea22d call 0x11fd9c30 */
  push32(0x11fea232u); f_11fd9c30();
  /* 11fea232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fea235:;
  /* 11fea235 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fea23c jmp 0x11fea247 */
  goto L_11fea247;
L_11fea23e:;
  /* 11fea23e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea241 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea244 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fea247:;
  /* 11fea247 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea24b jge 0x11fea266 */
  if ((C.sf==C.of)) goto L_11fea266;
  /* 11fea24d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea250 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fea253 add eax, 0x1200d898 */
  { uint32_t _a=(EAX),_b=(0x1200d898u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea258 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea25b mov edx, dword ptr [0x1200f2ac] */
  EDX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fea261 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11fea264 jmp 0x11fea23e */
  goto L_11fea23e;
L_11fea266:;
  /* 11fea266 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fea26d jmp 0x11fea278 */
  goto L_11fea278;
L_11fea26f:;
  /* 11fea26f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea272 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea275 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fea278:;
  /* 11fea278 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea27c jge 0x11fea2c8 */
  if ((C.sf==C.of)) goto L_11fea2c8;
  /* 11fea27e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea281 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fea284 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea287 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fea28a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fea28d mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fea294 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea298 je 0x11fea2b6 */
  if (C.zf) goto L_11fea2b6;
  /* 11fea29a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea29d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fea2a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea2a3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fea2a6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fea2a9 mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fea2b0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea2b4 jne 0x11fea2c6 */
  if (!C.zf) goto L_11fea2c6;
L_11fea2b6:;
  /* 11fea2b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea2b9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fea2bc mov dword ptr [ecx + 0x1200d8a8], 0xffffffff */
  w32((uint32_t)(ECX + 0x1200d8a8), (0xffffffffu));
L_11fea2c6:;
  /* 11fea2c6 jmp 0x11fea26f */
  goto L_11fea26f;
L_11fea2c8:;
  /* 11fea2c8 mov esp, ebp */
  ESP = (EBP);
  /* 11fea2ca pop ebp */
  EBP = (pop32());
  /* 11fea2cb ret  */
  ESPCHK(0x11fea1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2d0 @ 0x11fea2d0 (26 bytes, 9 insns) */
void f_11fea2d0(void) {
  FTRACE(0x11fea2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fea2d3 call 0x11fed920 */
  push32(0x11fea2d8u); f_11fed920();
  /* 11fea2d8 movsx eax, byte ptr [0x1200efd4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1200efd4))));
  /* 11fea2df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fea2e1 je 0x11fea2e8 */
  if (C.zf) goto L_11fea2e8;
  /* 11fea2e3 call 0x11fed6e0 */
  push32(0x11fea2e8u); f_11fed6e0();
L_11fea2e8:;
  /* 11fea2e8 pop ebp */
  EBP = (pop32());
  /* 11fea2e9 ret  */
  ESPCHK(0x11fea2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a2f0 @ 0x11fea2f0 (61 bytes, 20 insns) */
void f_11fea2f0(void) {
  FTRACE(0x11fea2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea2f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fea2f3 cmp dword ptr [ebp + 8], 0x1200d898 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1200d898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea2fa jb 0x11fea31e */
  if (C.cf) goto L_11fea31e;
  /* 11fea2fc cmp dword ptr [ebp + 8], 0x1200daf8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1200daf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea303 ja 0x11fea31e */
  if ((!C.cf&&!C.zf)) goto L_11fea31e;
  /* 11fea305 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea308 sub eax, 0x1200d898 */
  { uint32_t _a=(EAX),_b=(0x1200d898u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea30d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fea310 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea313 push eax */
  push32((uint32_t)(EAX));
  /* 11fea314 call 0x11fdb0c0 */
  push32(0x11fea319u); f_11fdb0c0();
  /* 11fea319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea31c jmp 0x11fea32b */
  goto L_11fea32b;
L_11fea31e:;
  /* 11fea31e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea321 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea324 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea325 call dword ptr [0x12011440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011440))), 0x11fea32bu);
L_11fea32b:;
  /* 11fea32b pop ebp */
  EBP = (pop32());
  /* 11fea32c ret  */
  ESPCHK(0x11fea2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a330 @ 0x11fea330 (41 bytes, 16 insns) */
void f_11fea330(void) {
  FTRACE(0x11fea330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea330 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea331 mov ebp, esp */
  EBP = (ESP);
  /* 11fea333 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea337 jge 0x11fea34a */
  if ((C.sf==C.of)) goto L_11fea34a;
  /* 11fea339 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea33c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea33f push eax */
  push32((uint32_t)(EAX));
  /* 11fea340 call 0x11fdb0c0 */
  push32(0x11fea345u); f_11fdb0c0();
  /* 11fea345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea348 jmp 0x11fea357 */
  goto L_11fea357;
L_11fea34a:;
  /* 11fea34a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea34d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea350 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea351 call dword ptr [0x12011440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011440))), 0x11fea357u);
L_11fea357:;
  /* 11fea357 pop ebp */
  EBP = (pop32());
  /* 11fea358 ret  */
  ESPCHK(0x11fea330u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a360 @ 0x11fea360 (61 bytes, 20 insns) */
void f_11fea360(void) {
  FTRACE(0x11fea360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea360 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea361 mov ebp, esp */
  EBP = (ESP);
  /* 11fea363 cmp dword ptr [ebp + 8], 0x1200d898 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1200d898u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea36a jb 0x11fea38e */
  if (C.cf) goto L_11fea38e;
  /* 11fea36c cmp dword ptr [ebp + 8], 0x1200daf8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1200daf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea373 ja 0x11fea38e */
  if ((!C.cf&&!C.zf)) goto L_11fea38e;
  /* 11fea375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea378 sub eax, 0x1200d898 */
  { uint32_t _a=(EAX),_b=(0x1200d898u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea37d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fea380 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea383 push eax */
  push32((uint32_t)(EAX));
  /* 11fea384 call 0x11fdb160 */
  push32(0x11fea389u); f_11fdb160();
  /* 11fea389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea38c jmp 0x11fea39b */
  goto L_11fea39b;
L_11fea38e:;
  /* 11fea38e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea391 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea394 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea395 call dword ptr [0x12011444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011444))), 0x11fea39bu);
L_11fea39b:;
  /* 11fea39b pop ebp */
  EBP = (pop32());
  /* 11fea39c ret  */
  ESPCHK(0x11fea360u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a3a0 @ 0x11fea3a0 (41 bytes, 16 insns) */
void f_11fea3a0(void) {
  FTRACE(0x11fea3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea3a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fea3a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea3a7 jge 0x11fea3ba */
  if ((C.sf==C.of)) goto L_11fea3ba;
  /* 11fea3a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea3ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea3af push eax */
  push32((uint32_t)(EAX));
  /* 11fea3b0 call 0x11fdb160 */
  push32(0x11fea3b5u); f_11fdb160();
  /* 11fea3b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea3b8 jmp 0x11fea3c7 */
  goto L_11fea3c7;
L_11fea3ba:;
  /* 11fea3ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea3bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea3c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea3c1 call dword ptr [0x12011444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011444))), 0x11fea3c7u);
L_11fea3c7:;
  /* 11fea3c7 pop ebp */
  EBP = (pop32());
  /* 11fea3c8 ret  */
  ESPCHK(0x11fea3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a3d0 @ 0x11fea3d0 (119 bytes, 34 insns) */
void f_11fea3d0(void) {
  FTRACE(0x11fea3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea3d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fea3d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea3d6 push 0x12010614 */
  push32((uint32_t)(0x12010614u));
  /* 11fea3db call dword ptr [0x12011430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011430))), 0x11fea3e1u);
  /* 11fea3e1 cmp dword ptr [0x12010604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12010604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea3e8 je 0x11fea408 */
  if (C.zf) goto L_11fea408;
  /* 11fea3ea push 0x12010614 */
  push32((uint32_t)(0x12010614u));
  /* 11fea3ef call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fea3f5u);
  /* 11fea3f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fea3f7 call 0x11fdb0c0 */
  push32(0x11fea3fcu); f_11fdb0c0();
  /* 11fea3fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea3ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11fea406 jmp 0x11fea40f */
  goto L_11fea40f;
L_11fea408:;
  /* 11fea408 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fea40f:;
  /* 11fea40f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11fea413 push eax */
  push32((uint32_t)(EAX));
  /* 11fea414 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea417 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea418 call 0x11fea450 */
  push32(0x11fea41du); f_11fea450();
  /* 11fea41d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea420 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fea423 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea427 je 0x11fea435 */
  if (C.zf) goto L_11fea435;
  /* 11fea429 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11fea42b call 0x11fdb160 */
  push32(0x11fea430u); f_11fdb160();
  /* 11fea430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea433 jmp 0x11fea440 */
  goto L_11fea440;
L_11fea435:;
  /* 11fea435 push 0x12010614 */
  push32((uint32_t)(0x12010614u));
  /* 11fea43a call dword ptr [0x12011420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011420))), 0x11fea440u);
L_11fea440:;
  /* 11fea440 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fea443 mov esp, ebp */
  ESP = (EBP);
  /* 11fea445 pop ebp */
  EBP = (pop32());
  /* 11fea446 ret  */
  ESPCHK(0x11fea3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a450 @ 0x11fea450 (160 bytes, 50 insns) */
void f_11fea450(void) {
  FTRACE(0x11fea450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea450 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea451 mov ebp, esp */
  EBP = (ESP);
  /* 11fea453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea456 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea45a jne 0x11fea463 */
  if (!C.zf) goto L_11fea463;
  /* 11fea45c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fea45e jmp 0x11fea4ec */
  goto L_11fea4ec;
L_11fea463:;
  /* 11fea463 cmp dword ptr [0x1200f1f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea46a jne 0x11fea49a */
  if (!C.zf) goto L_11fea49a;
  /* 11fea46c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea46f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea474 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea479 jle 0x11fea48b */
  if ((C.zf||C.sf!=C.of)) goto L_11fea48b;
  /* 11fea47b call 0x11fe6850 */
  push32(0x11fea480u); f_11fe6850();
  /* 11fea480 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11fea486 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea489 jmp 0x11fea4ec */
  goto L_11fea4ec;
L_11fea48b:;
  /* 11fea48b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea48e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11fea491 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11fea493 mov eax, 1 */
  EAX = (0x1u);
  /* 11fea498 jmp 0x11fea4ec */
  goto L_11fea4ec;
L_11fea49a:;
  /* 11fea49a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fea4a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11fea4a4 push eax */
  push32((uint32_t)(EAX));
  /* 11fea4a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fea4a7 mov ecx, dword ptr [0x1200cfe0] */
  ECX = (r32((uint32_t)(0x1200cfe0)));
  /* 11fea4ad push ecx */
  push32((uint32_t)(ECX));
  /* 11fea4ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea4b1 push edx */
  push32((uint32_t)(EDX));
  /* 11fea4b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea4b4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11fea4b7 push eax */
  push32((uint32_t)(EAX));
  /* 11fea4b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11fea4bd mov ecx, dword ptr [0x1200f208] */
  ECX = (r32((uint32_t)(0x1200f208)));
  /* 11fea4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea4c4 call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fea4cau);
  /* 11fea4ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fea4cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea4d1 je 0x11fea4d9 */
  if (C.zf) goto L_11fea4d9;
  /* 11fea4d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea4d7 je 0x11fea4e9 */
  if (C.zf) goto L_11fea4e9;
L_11fea4d9:;
  /* 11fea4d9 call 0x11fe6850 */
  push32(0x11fea4deu); f_11fe6850();
  /* 11fea4de mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11fea4e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea4e7 jmp 0x11fea4ec */
  goto L_11fea4ec;
L_11fea4e9:;
  /* 11fea4e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fea4ec:;
  /* 11fea4ec mov esp, ebp */
  ESP = (EBP);
  /* 11fea4ee pop ebp */
  EBP = (pop32());
  /* 11fea4ef ret  */
  ESPCHK(0x11fea450u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a4f0 @ 0x11fea4f0 (62 bytes, 21 insns) */
void f_11fea4f0(void) {
  FTRACE(0x11fea4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea4f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fea4f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea4f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea4f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fea4fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea4ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fea502 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fea505 add edx, 0x3fe */
  { uint32_t _a=(EDX),_b=(0x3feu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea50b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fea50e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11fea511 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea516 and eax, 0x800f */
  { uint32_t _r=(EAX)&(0x800fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea51b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea51e shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11fea521 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11fea523 mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 11fea527 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11fea52a mov esp, ebp */
  ESP = (EBP);
  /* 11fea52c pop ebp */
  EBP = (pop32());
  /* 11fea52d ret  */
  ESPCHK(0x11fea4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a530 @ 0x11fea530 (45 bytes, 15 insns) */
void f_11fea530(void) {
  FTRACE(0x11fea530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea530 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea531 mov ebp, esp */
  EBP = (ESP);
  /* 11fea533 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea534 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11fea537 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea53c and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11fea541 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fea544 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11fea548 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11fea54c sub cx, 0x3fe */
  { uint32_t _a=(CX),_b=(0x3feu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11fea551 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11fea555 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11fea559 mov esp, ebp */
  ESP = (EBP);
  /* 11fea55b pop ebp */
  EBP = (pop32());
  /* 11fea55c ret  */
  ESPCHK(0x11fea530u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a560 @ 0x11fea560 (51 bytes, 18 insns) */
void f_11fea560(void) {
  FTRACE(0x11fea560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea560 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea561 mov ebp, esp */
  EBP = (ESP);
  /* 11fea563 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11fea566 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea56b and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11fea570 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fea573 movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11fea576 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fea579 lea eax, [ecx + edx - 0x3fe] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x3fe));
  /* 11fea580 push eax */
  push32((uint32_t)(EAX));
  /* 11fea581 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea584 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea588 push edx */
  push32((uint32_t)(EDX));
  /* 11fea589 call 0x11fea4f0 */
  push32(0x11fea58eu); f_11fea4f0();
  /* 11fea58e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea591 pop ebp */
  EBP = (pop32());
  /* 11fea592 ret  */
  ESPCHK(0x11fea560u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a5a0 @ 0x11fea5a0 (52 bytes, 18 insns) */
void f_11fea5a0(void) {
  FTRACE(0x11fea5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea5a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fea5a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea5a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea5a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fea5ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea5af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fea5b2 mov edx, dword ptr [ebp + 0xe] */
  EDX = (r32((uint32_t)(EBP + 0xe)));
  /* 11fea5b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fea5bb and edx, 0x800f */
  { uint32_t _r=(EDX)&(0x800fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fea5c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fea5c4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fea5c7 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11fea5c9 mov word ptr [ebp - 2], dx */
  w16((uint32_t)(EBP + -0x2), (DX));
  /* 11fea5cd fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11fea5d0 mov esp, ebp */
  ESP = (EBP);
  /* 11fea5d2 pop ebp */
  EBP = (pop32());
  /* 11fea5d3 ret  */
  ESPCHK(0x11fea5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a5e0 @ 0x11fea5e0 (124 bytes, 37 insns) */
void f_11fea5e0(void) {
  FTRACE(0x11fea5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fea5e3 cmp dword ptr [ebp + 0xc], 0x7ff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea5ea jne 0x11fea5f9 */
  if (!C.zf) goto L_11fea5f9;
  /* 11fea5ec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea5f0 jne 0x11fea5f9 */
  if (!C.zf) goto L_11fea5f9;
  /* 11fea5f2 mov eax, 1 */
  EAX = (0x1u);
  /* 11fea5f7 jmp 0x11fea65a */
  goto L_11fea65a;
L_11fea5f9:;
  /* 11fea5f9 cmp dword ptr [ebp + 0xc], 0xfff00000 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea600 jne 0x11fea60f */
  if (!C.zf) goto L_11fea60f;
  /* 11fea602 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea606 jne 0x11fea60f */
  if (!C.zf) goto L_11fea60f;
  /* 11fea608 mov eax, 2 */
  EAX = (0x2u);
  /* 11fea60d jmp 0x11fea65a */
  goto L_11fea65a;
L_11fea60f:;
  /* 11fea60f mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11fea612 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea617 and eax, 0x7ff8 */
  { uint32_t _r=(EAX)&(0x7ff8u); EAX = (_r); fl_logic(_r,32); }
  /* 11fea61c cmp eax, 0x7ff8 */
  { uint32_t _a=(EAX),_b=(0x7ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea621 jne 0x11fea62a */
  if (!C.zf) goto L_11fea62a;
  /* 11fea623 mov eax, 3 */
  EAX = (0x3u);
  /* 11fea628 jmp 0x11fea65a */
  goto L_11fea65a;
L_11fea62a:;
  /* 11fea62a mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 11fea62d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fea633 and ecx, 0x7ff8 */
  { uint32_t _r=(ECX)&(0x7ff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11fea639 cmp ecx, 0x7ff0 */
  { uint32_t _a=(ECX),_b=(0x7ff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea63f jne 0x11fea658 */
  if (!C.zf) goto L_11fea658;
  /* 11fea641 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea644 shl edx, 0xd */
  EDX = (sh_shl((uint32_t)(EDX), (0xdu)&0x1f, 32));
  /* 11fea647 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fea649 jne 0x11fea651 */
  if (!C.zf) goto L_11fea651;
  /* 11fea64b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea64f je 0x11fea658 */
  if (C.zf) goto L_11fea658;
L_11fea651:;
  /* 11fea651 mov eax, 4 */
  EAX = (0x4u);
  /* 11fea656 jmp 0x11fea65a */
  goto L_11fea65a;
L_11fea658:;
  /* 11fea658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fea65a:;
  /* 11fea65a pop ebp */
  EBP = (pop32());
  /* 11fea65b ret  */
  ESPCHK(0x11fea5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a660 @ 0x11fea660 (313 bytes, 95 insns) */
void f_11fea660(void) {
  FTRACE(0x11fea660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea660 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea661 mov ebp, esp */
  EBP = (ESP);
  /* 11fea663 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea666 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11fea669 fcomp qword ptr [0x12009558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009558)));
  (void)fpu_pop();
  /* 11fea66f fnstsw ax */
  AX = fpu_status();
  /* 11fea671 test ah, 0x40 */
  { uint32_t _r=(AH)&(0x40u); fl_logic(_r,8); }
  /* 11fea674 je 0x11fea690 */
  if (C.zf) goto L_11fea690;
  /* 11fea676 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fea67d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fea684 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fea68b jmp 0x11fea78a */
  goto L_11fea78a;
L_11fea690:;
  /* 11fea690 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11fea693 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea698 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11fea69d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fea69f jne 0x11fea759 */
  if (!C.zf) goto L_11fea759;
  /* 11fea6a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea6a8 shl ecx, 0xc */
  ECX = (sh_shl((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11fea6ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fea6ad jne 0x11fea6b9 */
  if (!C.zf) goto L_11fea6b9;
  /* 11fea6af cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea6b3 je 0x11fea759 */
  if (C.zf) goto L_11fea759;
L_11fea6b9:;
  /* 11fea6b9 mov dword ptr [ebp - 4], 0xfffffc03 */
  w32((uint32_t)(EBP + -0x4), (0xfffffc03u));
  /* 11fea6c0 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 11fea6c3 fcomp qword ptr [0x12009558] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x12009558)));
  (void)fpu_pop();
  /* 11fea6c9 fnstsw ax */
  AX = fpu_status();
  /* 11fea6cb test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11fea6ce je 0x11fea6d9 */
  if (C.zf) goto L_11fea6d9;
  /* 11fea6d0 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11fea6d7 jmp 0x11fea6e0 */
  goto L_11fea6e0;
L_11fea6d9:;
  /* 11fea6d9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11fea6e0:;
  /* 11fea6e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fea6e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fea6e6:;
  /* 11fea6e6 mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11fea6e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea6ee and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11fea6f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fea6f3 jne 0x11fea725 */
  if (!C.zf) goto L_11fea725;
  /* 11fea6f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea6f8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11fea6fa mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11fea6fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea700 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fea706 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fea708 je 0x11fea712 */
  if (C.zf) goto L_11fea712;
  /* 11fea70a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea70d or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11fea70f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11fea712:;
  /* 11fea712 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea715 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11fea717 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fea71a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea71d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea720 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fea723 jmp 0x11fea6e6 */
  goto L_11fea6e6;
L_11fea725:;
  /* 11fea725 mov ax, word ptr [ebp + 0xe] */
  AX = (r16((uint32_t)(EBP + 0xe)));
  /* 11fea729 and ax, 0xffef */
  { uint32_t _r=(AX)&(0xffefu); AX = (_r); fl_logic(_r,16); }
  /* 11fea72d mov word ptr [ebp + 0xe], ax */
  w16((uint32_t)(EBP + 0xe), (AX));
  /* 11fea731 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea735 je 0x11fea742 */
  if (C.zf) goto L_11fea742;
  /* 11fea737 mov cx, word ptr [ebp + 0xe] */
  CX = (r16((uint32_t)(EBP + 0xe)));
  /* 11fea73b or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fea73e mov word ptr [ebp + 0xe], cx */
  w16((uint32_t)(EBP + 0xe), (CX));
L_11fea742:;
  /* 11fea742 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fea744 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea747 push edx */
  push32((uint32_t)(EDX));
  /* 11fea748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea74b push eax */
  push32((uint32_t)(EAX));
  /* 11fea74c call 0x11fea4f0 */
  push32(0x11fea751u); f_11fea4f0();
  /* 11fea751 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea754 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11fea757 jmp 0x11fea78a */
  goto L_11fea78a;
L_11fea759:;
  /* 11fea759 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fea75b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fea75e push ecx */
  push32((uint32_t)(ECX));
  /* 11fea75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea762 push edx */
  push32((uint32_t)(EDX));
  /* 11fea763 call 0x11fea4f0 */
  push32(0x11fea768u); f_11fea4f0();
  /* 11fea768 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea76b fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 11fea76e mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 11fea771 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea776 and eax, 0x7ff0 */
  { uint32_t _r=(EAX)&(0x7ff0u); EAX = (_r); fl_logic(_r,32); }
  /* 11fea77b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11fea77e movsx ecx, ax */
  ECX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11fea781 sub ecx, 0x3fe */
  { uint32_t _a=(ECX),_b=(0x3feu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea787 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fea78a:;
  /* 11fea78a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fea78d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea790 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11fea792 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 11fea795 mov esp, ebp */
  ESP = (EBP);
  /* 11fea797 pop ebp */
  EBP = (pop32());
  /* 11fea798 ret  */
  ESPCHK(0x11fea660u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11fea7a0 (219 bytes, 64 insns) */
void f_11fea7a0(void) {
  FTRACE(0x11fea7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea7a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fea7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea7a4 cmp dword ptr [0x1200f204], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f204))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea7ab je 0x11fea841 */
  if (C.zf) goto L_11fea841;
  /* 11fea7b1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11fea7b3 push 0x1200a314 */
  push32((uint32_t)(0x1200a314u));
  /* 11fea7b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fea7ba push 0xac */
  push32((uint32_t)(0xacu));
  /* 11fea7bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea7c1 call 0x11fdb5d0 */
  push32(0x11fea7c6u); f_11fdb5d0();
  /* 11fea7c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea7c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fea7cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea7d0 jne 0x11fea7dc */
  if (!C.zf) goto L_11fea7dc;
  /* 11fea7d2 mov eax, 1 */
  EAX = (0x1u);
  /* 11fea7d7 jmp 0x11fea877 */
  goto L_11fea877;
L_11fea7dc:;
  /* 11fea7dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea7df push eax */
  push32((uint32_t)(EAX));
  /* 11fea7e0 call 0x11fea880 */
  push32(0x11fea7e5u); f_11fea880();
  /* 11fea7e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea7e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fea7ea je 0x11fea80d */
  if (C.zf) goto L_11fea80d;
  /* 11fea7ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea7ef push ecx */
  push32((uint32_t)(ECX));
  /* 11fea7f0 call 0x11feae10 */
  push32(0x11fea7f5u); f_11feae10();
  /* 11fea7f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea7f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fea7fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea7fd push edx */
  push32((uint32_t)(EDX));
  /* 11fea7fe call 0x11fdbc50 */
  push32(0x11fea803u); f_11fdbc50();
  /* 11fea803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea806 mov eax, 1 */
  EAX = (0x1u);
  /* 11fea80b jmp 0x11fea877 */
  goto L_11fea877;
L_11fea80d:;
  /* 11fea80d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea810 mov dword ptr [0x1200e2c0], eax */
  w32((uint32_t)(0x1200e2c0), (EAX));
  /* 11fea815 mov ecx, dword ptr [0x1200f218] */
  ECX = (r32((uint32_t)(0x1200f218)));
  /* 11fea81b push ecx */
  push32((uint32_t)(ECX));
  /* 11fea81c call 0x11feae10 */
  push32(0x11fea821u); f_11feae10();
  /* 11fea821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea824 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fea826 mov edx, dword ptr [0x1200f218] */
  EDX = (r32((uint32_t)(0x1200f218)));
  /* 11fea82c push edx */
  push32((uint32_t)(EDX));
  /* 11fea82d call 0x11fdbc50 */
  push32(0x11fea832u); f_11fdbc50();
  /* 11fea832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea838 mov dword ptr [0x1200f218], eax */
  w32((uint32_t)(0x1200f218), (EAX));
  /* 11fea83d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fea83f jmp 0x11fea877 */
  goto L_11fea877;
L_11fea841:;
  /* 11fea841 mov dword ptr [0x1200e2c0], 0x1200e2c8 */
  w32((uint32_t)(0x1200e2c0), (0x1200e2c8u));
  /* 11fea84b mov ecx, dword ptr [0x1200f218] */
  ECX = (r32((uint32_t)(0x1200f218)));
  /* 11fea851 push ecx */
  push32((uint32_t)(ECX));
  /* 11fea852 call 0x11feae10 */
  push32(0x11fea857u); f_11feae10();
  /* 11fea857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea85a push 2 */
  push32((uint32_t)(0x2u));
  /* 11fea85c mov edx, dword ptr [0x1200f218] */
  EDX = (r32((uint32_t)(0x1200f218)));
  /* 11fea862 push edx */
  push32((uint32_t)(EDX));
  /* 11fea863 call 0x11fdbc50 */
  push32(0x11fea868u); f_11fdbc50();
  /* 11fea868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea86b mov dword ptr [0x1200f218], 0 */
  w32((uint32_t)(0x1200f218), (0x0u));
  /* 11fea875 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fea877:;
  /* 11fea877 mov esp, ebp */
  ESP = (EBP);
  /* 11fea879 pop ebp */
  EBP = (pop32());
  /* 11fea87a ret  */
  ESPCHK(0x11fea7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a880 @ 0x11fea880 (1423 bytes, 533 insns) */
void f_11fea880(void) {
  FTRACE(0x11fea880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fea880 push ebp */
  push32((uint32_t)(EBP));
  /* 11fea881 mov ebp, esp */
  EBP = (ESP);
  /* 11fea883 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fea886 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fea88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fea88f mov ax, word ptr [0x1200f252] */
  AX = (r16((uint32_t)(0x1200f252)));
  /* 11fea895 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fea898 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea89a mov cx, word ptr [0x1200f254] */
  CX = (r16((uint32_t)(0x1200f254)));
  /* 11fea8a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fea8a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fea8a8 jne 0x11fea8b2 */
  if (!C.zf) goto L_11fea8b2;
  /* 11fea8aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fea8ad jmp 0x11feae0b */
  goto L_11feae0b;
L_11fea8b2:;
  /* 11fea8b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea8b5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea8b8 push edx */
  push32((uint32_t)(EDX));
  /* 11fea8b9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11fea8bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea8be push eax */
  push32((uint32_t)(EAX));
  /* 11fea8bf push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea8c1 call 0x11feeee0 */
  push32(0x11fea8c6u); f_11feeee0();
  /* 11fea8c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea8c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea8cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea8ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea8d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea8d4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea8d7 push edx */
  push32((uint32_t)(EDX));
  /* 11fea8d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11fea8da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea8dd push eax */
  push32((uint32_t)(EAX));
  /* 11fea8de push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea8e0 call 0x11feeee0 */
  push32(0x11fea8e5u); f_11feeee0();
  /* 11fea8e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea8e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea8eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea8ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea8f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea8f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea8f6 push edx */
  push32((uint32_t)(EDX));
  /* 11fea8f7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11fea8f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea8fc push eax */
  push32((uint32_t)(EAX));
  /* 11fea8fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea8ff call 0x11feeee0 */
  push32(0x11fea904u); f_11feeee0();
  /* 11fea904 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea907 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea90a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea90c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea90f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea912 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea915 push edx */
  push32((uint32_t)(EDX));
  /* 11fea916 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11fea918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea91b push eax */
  push32((uint32_t)(EAX));
  /* 11fea91c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea91e call 0x11feeee0 */
  push32(0x11fea923u); f_11feeee0();
  /* 11fea923 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea926 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea929 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea92b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea92e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea931 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea934 push edx */
  push32((uint32_t)(EDX));
  /* 11fea935 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11fea937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea93a push eax */
  push32((uint32_t)(EAX));
  /* 11fea93b push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea93d call 0x11feeee0 */
  push32(0x11fea942u); f_11feeee0();
  /* 11fea942 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea945 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea948 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea94a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea94d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea950 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea953 push edx */
  push32((uint32_t)(EDX));
  /* 11fea954 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11fea956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea959 push eax */
  push32((uint32_t)(EAX));
  /* 11fea95a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea95c call 0x11feeee0 */
  push32(0x11fea961u); f_11feeee0();
  /* 11fea961 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea964 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea967 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea969 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea96c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea96f push edx */
  push32((uint32_t)(EDX));
  /* 11fea970 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11fea972 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea975 push eax */
  push32((uint32_t)(EAX));
  /* 11fea976 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea978 call 0x11feeee0 */
  push32(0x11fea97du); f_11feeee0();
  /* 11fea97d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea980 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea983 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea985 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea98b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea98e push edx */
  push32((uint32_t)(EDX));
  /* 11fea98f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11fea991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea994 push eax */
  push32((uint32_t)(EAX));
  /* 11fea995 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea997 call 0x11feeee0 */
  push32(0x11fea99cu); f_11feeee0();
  /* 11fea99c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea99f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea9a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea9a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea9a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea9aa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea9ad push edx */
  push32((uint32_t)(EDX));
  /* 11fea9ae push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11fea9b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea9b3 push eax */
  push32((uint32_t)(EAX));
  /* 11fea9b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea9b6 call 0x11feeee0 */
  push32(0x11fea9bbu); f_11feeee0();
  /* 11fea9bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea9be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea9c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea9c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea9c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea9c9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea9cc push edx */
  push32((uint32_t)(EDX));
  /* 11fea9cd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11fea9cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea9d2 push eax */
  push32((uint32_t)(EAX));
  /* 11fea9d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea9d5 call 0x11feeee0 */
  push32(0x11fea9dau); f_11feeee0();
  /* 11fea9da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea9dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea9e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fea9e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fea9e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fea9e8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea9eb push edx */
  push32((uint32_t)(EDX));
  /* 11fea9ec push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11fea9ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fea9f1 push eax */
  push32((uint32_t)(EAX));
  /* 11fea9f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fea9f4 call 0x11feeee0 */
  push32(0x11fea9f9u); f_11feeee0();
  /* 11fea9f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fea9fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fea9ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feaa01 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feaa04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaa07 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa0a push edx */
  push32((uint32_t)(EDX));
  /* 11feaa0b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11feaa0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feaa10 push eax */
  push32((uint32_t)(EAX));
  /* 11feaa11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaa13 call 0x11feeee0 */
  push32(0x11feaa18u); f_11feeee0();
  /* 11feaa18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feaa1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feaa20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feaa23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaa26 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa29 push edx */
  push32((uint32_t)(EDX));
  /* 11feaa2a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11feaa2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feaa2f push eax */
  push32((uint32_t)(EAX));
  /* 11feaa30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaa32 call 0x11feeee0 */
  push32(0x11feaa37u); f_11feeee0();
  /* 11feaa37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feaa3d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feaa3f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feaa42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaa45 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa48 push edx */
  push32((uint32_t)(EDX));
  /* 11feaa49 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11feaa4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feaa4e push eax */
  push32((uint32_t)(EAX));
  /* 11feaa4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaa51 call 0x11feeee0 */
  push32(0x11feaa56u); f_11feeee0();
  /* 11feaa56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feaa5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feaa5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feaa61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaa64 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa67 push edx */
  push32((uint32_t)(EDX));
  /* 11feaa68 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11feaa6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feaa6d push eax */
  push32((uint32_t)(EAX));
  /* 11feaa6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaa70 call 0x11feeee0 */
  push32(0x11feaa75u); f_11feeee0();
  /* 11feaa75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feaa7b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feaa7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feaa80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaa83 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa86 push edx */
  push32((uint32_t)(EDX));
  /* 11feaa87 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11feaa89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feaa8c push eax */
  push32((uint32_t)(EAX));
  /* 11feaa8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaa8f call 0x11feeee0 */
  push32(0x11feaa94u); f_11feeee0();
  /* 11feaa94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaa97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feaa9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feaa9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feaa9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaaa2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaaa5 push edx */
  push32((uint32_t)(EDX));
  /* 11feaaa6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11feaaa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feaaab push eax */
  push32((uint32_t)(EAX));
  /* 11feaaac push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaaae call 0x11feeee0 */
  push32(0x11feaab3u); f_11feeee0();
  /* 11feaab3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaab6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feaab9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feaabb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feaabe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaac1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaac4 push edx */
  push32((uint32_t)(EDX));
  /* 11feaac5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11feaac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feaaca push eax */
  push32((uint32_t)(EAX));
  /* 11feaacb push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaacd call 0x11feeee0 */
  push32(0x11feaad2u); f_11feeee0();
  /* 11feaad2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaad5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feaad8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feaada mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feaadd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaae0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaae3 push edx */
  push32((uint32_t)(EDX));
  /* 11feaae4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11feaae6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feaae9 push eax */
  push32((uint32_t)(EAX));
  /* 11feaaea push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaaec call 0x11feeee0 */
  push32(0x11feaaf1u); f_11feeee0();
  /* 11feaaf1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaaf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feaaf7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feaaf9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feaafc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaaff add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab02 push edx */
  push32((uint32_t)(EDX));
  /* 11feab03 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11feab05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feab08 push eax */
  push32((uint32_t)(EAX));
  /* 11feab09 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feab0b call 0x11feeee0 */
  push32(0x11feab10u); f_11feeee0();
  /* 11feab10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab13 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feab16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feab18 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feab1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feab1e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab21 push edx */
  push32((uint32_t)(EDX));
  /* 11feab22 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11feab24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feab27 push eax */
  push32((uint32_t)(EAX));
  /* 11feab28 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feab2a call 0x11feeee0 */
  push32(0x11feab2fu); f_11feeee0();
  /* 11feab2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab32 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feab35 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feab37 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feab3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feab3d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab40 push edx */
  push32((uint32_t)(EDX));
  /* 11feab41 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11feab43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feab46 push eax */
  push32((uint32_t)(EAX));
  /* 11feab47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feab49 call 0x11feeee0 */
  push32(0x11feab4eu); f_11feeee0();
  /* 11feab4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feab54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feab56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feab59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feab5c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab5f push edx */
  push32((uint32_t)(EDX));
  /* 11feab60 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11feab62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feab65 push eax */
  push32((uint32_t)(EAX));
  /* 11feab66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feab68 call 0x11feeee0 */
  push32(0x11feab6du); f_11feeee0();
  /* 11feab6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feab73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feab75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feab78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feab7b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab7e push edx */
  push32((uint32_t)(EDX));
  /* 11feab7f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11feab81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feab84 push eax */
  push32((uint32_t)(EAX));
  /* 11feab85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feab87 call 0x11feeee0 */
  push32(0x11feab8cu); f_11feeee0();
  /* 11feab8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feab92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feab94 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feab97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feab9a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feab9d push edx */
  push32((uint32_t)(EDX));
  /* 11feab9e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11feaba0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feaba3 push eax */
  push32((uint32_t)(EAX));
  /* 11feaba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaba6 call 0x11feeee0 */
  push32(0x11feababu); f_11feeee0();
  /* 11feabab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feabae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feabb1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feabb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feabb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feabb9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feabbc push edx */
  push32((uint32_t)(EDX));
  /* 11feabbd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11feabbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feabc2 push eax */
  push32((uint32_t)(EAX));
  /* 11feabc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feabc5 call 0x11feeee0 */
  push32(0x11feabcau); f_11feeee0();
  /* 11feabca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feabcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feabd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feabd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feabd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feabd8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feabdb push edx */
  push32((uint32_t)(EDX));
  /* 11feabdc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11feabde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feabe1 push eax */
  push32((uint32_t)(EAX));
  /* 11feabe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feabe4 call 0x11feeee0 */
  push32(0x11feabe9u); f_11feeee0();
  /* 11feabe9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feabec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feabef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feabf1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feabf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feabf7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feabfa push edx */
  push32((uint32_t)(EDX));
  /* 11feabfb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11feabfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feac00 push eax */
  push32((uint32_t)(EAX));
  /* 11feac01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feac03 call 0x11feeee0 */
  push32(0x11feac08u); f_11feeee0();
  /* 11feac08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feac0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feac10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feac13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feac16 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac19 push edx */
  push32((uint32_t)(EDX));
  /* 11feac1a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11feac1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feac1f push eax */
  push32((uint32_t)(EAX));
  /* 11feac20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feac22 call 0x11feeee0 */
  push32(0x11feac27u); f_11feeee0();
  /* 11feac27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feac2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feac2f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feac32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feac35 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac38 push edx */
  push32((uint32_t)(EDX));
  /* 11feac39 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11feac3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feac3e push eax */
  push32((uint32_t)(EAX));
  /* 11feac3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11feac41 call 0x11feeee0 */
  push32(0x11feac46u); f_11feeee0();
  /* 11feac46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feac4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feac4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feac51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feac54 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac57 push edx */
  push32((uint32_t)(EDX));
  /* 11feac58 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11feac5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feac5d push eax */
  push32((uint32_t)(EAX));
  /* 11feac5e push 1 */
  push32((uint32_t)(0x1u));
  /* 11feac60 call 0x11feeee0 */
  push32(0x11feac65u); f_11feeee0();
  /* 11feac65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feac6b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feac6d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feac70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feac73 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac76 push edx */
  push32((uint32_t)(EDX));
  /* 11feac77 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11feac79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feac7c push eax */
  push32((uint32_t)(EAX));
  /* 11feac7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11feac7f call 0x11feeee0 */
  push32(0x11feac84u); f_11feeee0();
  /* 11feac84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feac8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feac8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feac8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feac92 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feac98 push edx */
  push32((uint32_t)(EDX));
  /* 11feac99 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11feac9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feac9e push eax */
  push32((uint32_t)(EAX));
  /* 11feac9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11feaca1 call 0x11feeee0 */
  push32(0x11feaca6u); f_11feeee0();
  /* 11feaca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaca9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feacac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feacae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feacb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feacb4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feacba push edx */
  push32((uint32_t)(EDX));
  /* 11feacbb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11feacbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feacc0 push eax */
  push32((uint32_t)(EAX));
  /* 11feacc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feacc3 call 0x11feeee0 */
  push32(0x11feacc8u); f_11feeee0();
  /* 11feacc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaccb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feacce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feacd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feacd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feacd6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feacdc push edx */
  push32((uint32_t)(EDX));
  /* 11feacdd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11feacdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feace2 push eax */
  push32((uint32_t)(EAX));
  /* 11feace3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feace5 call 0x11feeee0 */
  push32(0x11feaceau); f_11feeee0();
  /* 11feacea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaced mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feacf0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feacf2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feacf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feacf8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feacfe push edx */
  push32((uint32_t)(EDX));
  /* 11feacff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11fead01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fead04 push eax */
  push32((uint32_t)(EAX));
  /* 11fead05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fead07 call 0x11feeee0 */
  push32(0x11fead0cu); f_11feeee0();
  /* 11fead0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fead0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fead12 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fead14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fead17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fead1a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fead20 push edx */
  push32((uint32_t)(EDX));
  /* 11fead21 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11fead23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fead26 push eax */
  push32((uint32_t)(EAX));
  /* 11fead27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fead29 call 0x11feeee0 */
  push32(0x11fead2eu); f_11feeee0();
  /* 11fead2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fead31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fead34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fead36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fead39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fead3c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fead42 push edx */
  push32((uint32_t)(EDX));
  /* 11fead43 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11fead45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fead48 push eax */
  push32((uint32_t)(EAX));
  /* 11fead49 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fead4b call 0x11feeee0 */
  push32(0x11fead50u); f_11feeee0();
  /* 11fead50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fead53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fead56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fead58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fead5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fead5e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fead64 push edx */
  push32((uint32_t)(EDX));
  /* 11fead65 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11fead67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fead6a push eax */
  push32((uint32_t)(EAX));
  /* 11fead6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11fead6d call 0x11feeee0 */
  push32(0x11fead72u); f_11feeee0();
  /* 11fead72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fead75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fead78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fead7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fead7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fead80 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fead86 push edx */
  push32((uint32_t)(EDX));
  /* 11fead87 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11fead89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fead8c push eax */
  push32((uint32_t)(EAX));
  /* 11fead8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11fead8f call 0x11feeee0 */
  push32(0x11fead94u); f_11feeee0();
  /* 11fead94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fead97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fead9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fead9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11fead9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feada2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feada8 push edx */
  push32((uint32_t)(EDX));
  /* 11feada9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11feadab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feadae push eax */
  push32((uint32_t)(EAX));
  /* 11feadaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11feadb1 call 0x11feeee0 */
  push32(0x11feadb6u); f_11feeee0();
  /* 11feadb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feadb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feadbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feadbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feadc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feadc4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feadca push edx */
  push32((uint32_t)(EDX));
  /* 11feadcb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11feadcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feadd0 push eax */
  push32((uint32_t)(EAX));
  /* 11feadd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feadd3 call 0x11feeee0 */
  push32(0x11feadd8u); f_11feeee0();
  /* 11feadd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaddb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feadde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feade0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feade3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feade6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feadec push edx */
  push32((uint32_t)(EDX));
  /* 11feaded push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11feadf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feadf5 push eax */
  push32((uint32_t)(EAX));
  /* 11feadf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feadf8 call 0x11feeee0 */
  push32(0x11feadfdu); f_11feeee0();
  /* 11feadfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feae00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11feae03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feae05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11feae08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11feae0b:;
  /* 11feae0b mov esp, ebp */
  ESP = (EBP);
  /* 11feae0d pop ebp */
  EBP = (pop32());
  /* 11feae0e ret  */
  ESPCHK(0x11fea880u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11feae10 (779 bytes, 265 insns) */
void f_11feae10(void) {
  FTRACE(0x11feae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feae10 push ebp */
  push32((uint32_t)(EBP));
  /* 11feae11 mov ebp, esp */
  EBP = (ESP);
  /* 11feae13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feae17 jne 0x11feae1e */
  if (!C.zf) goto L_11feae1e;
  /* 11feae19 jmp 0x11feb119 */
  goto L_11feb119;
L_11feae1e:;
  /* 11feae1e push 2 */
  push32((uint32_t)(0x2u));
  /* 11feae20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feae23 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11feae26 push ecx */
  push32((uint32_t)(ECX));
  /* 11feae27 call 0x11fdbc50 */
  push32(0x11feae2cu); f_11fdbc50();
  /* 11feae2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feae2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11feae31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feae34 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11feae37 push eax */
  push32((uint32_t)(EAX));
  /* 11feae38 call 0x11fdbc50 */
  push32(0x11feae3du); f_11fdbc50();
  /* 11feae3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feae40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feae42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feae45 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11feae48 push edx */
  push32((uint32_t)(EDX));
  /* 11feae49 call 0x11fdbc50 */
  push32(0x11feae4eu); f_11fdbc50();
  /* 11feae4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feae51 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feae53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feae56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11feae59 push ecx */
  push32((uint32_t)(ECX));
  /* 11feae5a call 0x11fdbc50 */
  push32(0x11feae5fu); f_11fdbc50();
  /* 11feae5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feae62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feae64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feae67 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11feae6a push eax */
  push32((uint32_t)(EAX));
  /* 11feae6b call 0x11fdbc50 */
  push32(0x11feae70u); f_11fdbc50();
  /* 11feae70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feae73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feae75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feae78 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11feae7b push edx */
  push32((uint32_t)(EDX));
  /* 11feae7c call 0x11fdbc50 */
  push32(0x11feae81u); f_11fdbc50();
  /* 11feae81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feae84 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feae86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feae89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11feae8b push ecx */
  push32((uint32_t)(ECX));
  /* 11feae8c call 0x11fdbc50 */
  push32(0x11feae91u); f_11fdbc50();
  /* 11feae91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feae94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feae96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feae99 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11feae9c push eax */
  push32((uint32_t)(EAX));
  /* 11feae9d call 0x11fdbc50 */
  push32(0x11feaea2u); f_11fdbc50();
  /* 11feaea2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaea7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaeaa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11feaead push edx */
  push32((uint32_t)(EDX));
  /* 11feaeae call 0x11fdbc50 */
  push32(0x11feaeb3u); f_11fdbc50();
  /* 11feaeb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaeb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaeb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaebb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11feaebe push ecx */
  push32((uint32_t)(ECX));
  /* 11feaebf call 0x11fdbc50 */
  push32(0x11feaec4u); f_11fdbc50();
  /* 11feaec4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaec7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaec9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaecc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11feaecf push eax */
  push32((uint32_t)(EAX));
  /* 11feaed0 call 0x11fdbc50 */
  push32(0x11feaed5u); f_11fdbc50();
  /* 11feaed5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaeda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaedd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11feaee0 push edx */
  push32((uint32_t)(EDX));
  /* 11feaee1 call 0x11fdbc50 */
  push32(0x11feaee6u); f_11fdbc50();
  /* 11feaee6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaee9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaeeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaeee mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11feaef1 push ecx */
  push32((uint32_t)(ECX));
  /* 11feaef2 call 0x11fdbc50 */
  push32(0x11feaef7u); f_11fdbc50();
  /* 11feaef7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaefa push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaefc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaeff mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11feaf02 push eax */
  push32((uint32_t)(EAX));
  /* 11feaf03 call 0x11fdbc50 */
  push32(0x11feaf08u); f_11fdbc50();
  /* 11feaf08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaf0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaf0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaf10 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11feaf13 push edx */
  push32((uint32_t)(EDX));
  /* 11feaf14 call 0x11fdbc50 */
  push32(0x11feaf19u); f_11fdbc50();
  /* 11feaf19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaf1c push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaf1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaf21 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11feaf24 push ecx */
  push32((uint32_t)(ECX));
  /* 11feaf25 call 0x11fdbc50 */
  push32(0x11feaf2au); f_11fdbc50();
  /* 11feaf2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaf2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaf2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaf32 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11feaf35 push eax */
  push32((uint32_t)(EAX));
  /* 11feaf36 call 0x11fdbc50 */
  push32(0x11feaf3bu); f_11fdbc50();
  /* 11feaf3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaf3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaf40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaf43 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11feaf46 push edx */
  push32((uint32_t)(EDX));
  /* 11feaf47 call 0x11fdbc50 */
  push32(0x11feaf4cu); f_11fdbc50();
  /* 11feaf4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaf4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaf51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaf54 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11feaf57 push ecx */
  push32((uint32_t)(ECX));
  /* 11feaf58 call 0x11fdbc50 */
  push32(0x11feaf5du); f_11fdbc50();
  /* 11feaf5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaf60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaf62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaf65 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11feaf68 push eax */
  push32((uint32_t)(EAX));
  /* 11feaf69 call 0x11fdbc50 */
  push32(0x11feaf6eu); f_11fdbc50();
  /* 11feaf6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaf71 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaf73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaf76 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11feaf79 push edx */
  push32((uint32_t)(EDX));
  /* 11feaf7a call 0x11fdbc50 */
  push32(0x11feaf7fu); f_11fdbc50();
  /* 11feaf7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaf82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaf84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaf87 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11feaf8a push ecx */
  push32((uint32_t)(ECX));
  /* 11feaf8b call 0x11fdbc50 */
  push32(0x11feaf90u); f_11fdbc50();
  /* 11feaf90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaf93 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaf95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaf98 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11feaf9b push eax */
  push32((uint32_t)(EAX));
  /* 11feaf9c call 0x11fdbc50 */
  push32(0x11feafa1u); f_11fdbc50();
  /* 11feafa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feafa4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feafa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feafa9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11feafac push edx */
  push32((uint32_t)(EDX));
  /* 11feafad call 0x11fdbc50 */
  push32(0x11feafb2u); f_11fdbc50();
  /* 11feafb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feafb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feafb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feafba mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11feafbd push ecx */
  push32((uint32_t)(ECX));
  /* 11feafbe call 0x11fdbc50 */
  push32(0x11feafc3u); f_11fdbc50();
  /* 11feafc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feafc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feafc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feafcb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11feafce push eax */
  push32((uint32_t)(EAX));
  /* 11feafcf call 0x11fdbc50 */
  push32(0x11feafd4u); f_11fdbc50();
  /* 11feafd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feafd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feafd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feafdc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11feafdf push edx */
  push32((uint32_t)(EDX));
  /* 11feafe0 call 0x11fdbc50 */
  push32(0x11feafe5u); f_11fdbc50();
  /* 11feafe5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feafe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feafea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feafed mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11feaff0 push ecx */
  push32((uint32_t)(ECX));
  /* 11feaff1 call 0x11fdbc50 */
  push32(0x11feaff6u); f_11fdbc50();
  /* 11feaff6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feaff9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feaffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feaffe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11feb001 push eax */
  push32((uint32_t)(EAX));
  /* 11feb002 call 0x11fdbc50 */
  push32(0x11feb007u); f_11fdbc50();
  /* 11feb007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb00a push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb00c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb00f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11feb012 push edx */
  push32((uint32_t)(EDX));
  /* 11feb013 call 0x11fdbc50 */
  push32(0x11feb018u); f_11fdbc50();
  /* 11feb018 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb01b push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb01d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb020 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11feb023 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb024 call 0x11fdbc50 */
  push32(0x11feb029u); f_11fdbc50();
  /* 11feb029 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb02c push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb02e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb031 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11feb034 push eax */
  push32((uint32_t)(EAX));
  /* 11feb035 call 0x11fdbc50 */
  push32(0x11feb03au); f_11fdbc50();
  /* 11feb03a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb03d push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb03f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb042 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11feb048 push edx */
  push32((uint32_t)(EDX));
  /* 11feb049 call 0x11fdbc50 */
  push32(0x11feb04eu); f_11fdbc50();
  /* 11feb04e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb051 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb056 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11feb05c push ecx */
  push32((uint32_t)(ECX));
  /* 11feb05d call 0x11fdbc50 */
  push32(0x11feb062u); f_11fdbc50();
  /* 11feb062 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb065 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb06a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11feb070 push eax */
  push32((uint32_t)(EAX));
  /* 11feb071 call 0x11fdbc50 */
  push32(0x11feb076u); f_11fdbc50();
  /* 11feb076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb079 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb07b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb07e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11feb084 push edx */
  push32((uint32_t)(EDX));
  /* 11feb085 call 0x11fdbc50 */
  push32(0x11feb08au); f_11fdbc50();
  /* 11feb08a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb08d push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb08f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb092 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11feb098 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb099 call 0x11fdbc50 */
  push32(0x11feb09eu); f_11fdbc50();
  /* 11feb09e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb0a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb0a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb0a6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11feb0ac push eax */
  push32((uint32_t)(EAX));
  /* 11feb0ad call 0x11fdbc50 */
  push32(0x11feb0b2u); f_11fdbc50();
  /* 11feb0b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb0b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb0b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb0ba mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11feb0c0 push edx */
  push32((uint32_t)(EDX));
  /* 11feb0c1 call 0x11fdbc50 */
  push32(0x11feb0c6u); f_11fdbc50();
  /* 11feb0c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb0c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb0cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb0ce mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11feb0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb0d5 call 0x11fdbc50 */
  push32(0x11feb0dau); f_11fdbc50();
  /* 11feb0da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb0dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb0df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb0e2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11feb0e8 push eax */
  push32((uint32_t)(EAX));
  /* 11feb0e9 call 0x11fdbc50 */
  push32(0x11feb0eeu); f_11fdbc50();
  /* 11feb0ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb0f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb0f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb0f6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11feb0fc push edx */
  push32((uint32_t)(EDX));
  /* 11feb0fd call 0x11fdbc50 */
  push32(0x11feb102u); f_11fdbc50();
  /* 11feb102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb105 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb107 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb10a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11feb110 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb111 call 0x11fdbc50 */
  push32(0x11feb116u); f_11fdbc50();
  /* 11feb116 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11feb119:;
  /* 11feb119 pop ebp */
  EBP = (pop32());
  /* 11feb11a ret  */
  ESPCHK(0x11feae10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b120 @ 0x11feb120 (678 bytes, 180 insns) */
void f_11feb120(void) {
  FTRACE(0x11feb120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feb120 push ebp */
  push32((uint32_t)(EBP));
  /* 11feb121 mov ebp, esp */
  EBP = (ESP);
  /* 11feb123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feb126 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11feb12d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feb12f mov ax, word ptr [0x1200f24e] */
  AX = (r16((uint32_t)(0x1200f24e)));
  /* 11feb135 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11feb138 cmp dword ptr [0x1200f200], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb13f je 0x11feb29a */
  if (C.zf) goto L_11feb29a;
  /* 11feb145 push 0x1200f21c */
  push32((uint32_t)(0x1200f21cu));
  /* 11feb14a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11feb14c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb14f push ecx */
  push32((uint32_t)(ECX));
  /* 11feb150 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb152 call 0x11feeee0 */
  push32(0x11feb157u); f_11feeee0();
  /* 11feb157 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb15a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb15d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11feb15f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11feb162 push 0x1200f220 */
  push32((uint32_t)(0x1200f220u));
  /* 11feb167 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11feb169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb16c push eax */
  push32((uint32_t)(EAX));
  /* 11feb16d push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb16f call 0x11feeee0 */
  push32(0x11feb174u); f_11feeee0();
  /* 11feb174 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb177 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb17a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb17c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb17f push 0x1200f224 */
  push32((uint32_t)(0x1200f224u));
  /* 11feb184 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11feb186 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb189 push edx */
  push32((uint32_t)(EDX));
  /* 11feb18a push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb18c call 0x11feeee0 */
  push32(0x11feb191u); f_11feeee0();
  /* 11feb191 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb194 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb197 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb199 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb19c mov edx, dword ptr [0x1200f224] */
  EDX = (r32((uint32_t)(0x1200f224)));
  /* 11feb1a2 push edx */
  push32((uint32_t)(EDX));
  /* 11feb1a3 call 0x11feb3d0 */
  push32(0x11feb1a8u); f_11feb3d0();
  /* 11feb1a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb1ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb1af je 0x11feb209 */
  if (C.zf) goto L_11feb209;
  /* 11feb1b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb1b3 mov eax, dword ptr [0x1200f21c] */
  EAX = (r32((uint32_t)(0x1200f21c)));
  /* 11feb1b8 push eax */
  push32((uint32_t)(EAX));
  /* 11feb1b9 call 0x11fdbc50 */
  push32(0x11feb1beu); f_11fdbc50();
  /* 11feb1be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb1c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb1c3 mov ecx, dword ptr [0x1200f220] */
  ECX = (r32((uint32_t)(0x1200f220)));
  /* 11feb1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb1ca call 0x11fdbc50 */
  push32(0x11feb1cfu); f_11fdbc50();
  /* 11feb1cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb1d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb1d4 mov edx, dword ptr [0x1200f224] */
  EDX = (r32((uint32_t)(0x1200f224)));
  /* 11feb1da push edx */
  push32((uint32_t)(EDX));
  /* 11feb1db call 0x11fdbc50 */
  push32(0x11feb1e0u); f_11fdbc50();
  /* 11feb1e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb1e3 mov dword ptr [0x1200f21c], 0 */
  w32((uint32_t)(0x1200f21c), (0x0u));
  /* 11feb1ed mov dword ptr [0x1200f220], 0 */
  w32((uint32_t)(0x1200f220), (0x0u));
  /* 11feb1f7 mov dword ptr [0x1200f224], 0 */
  w32((uint32_t)(0x1200f224), (0x0u));
  /* 11feb201 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11feb204 jmp 0x11feb3c2 */
  goto L_11feb3c2;
L_11feb209:;
  /* 11feb209 mov eax, dword ptr [0x1200e3b0] */
  EAX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb20e cmp dword ptr [eax], 0x1200e378 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1200e378u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb214 je 0x11feb250 */
  if (C.zf) goto L_11feb250;
  /* 11feb216 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb218 mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb21e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feb220 push edx */
  push32((uint32_t)(EDX));
  /* 11feb221 call 0x11fdbc50 */
  push32(0x11feb226u); f_11fdbc50();
  /* 11feb226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb229 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb22b mov eax, dword ptr [0x1200e3b0] */
  EAX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb230 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11feb233 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb234 call 0x11fdbc50 */
  push32(0x11feb239u); f_11fdbc50();
  /* 11feb239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb23c push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb23e mov edx, dword ptr [0x1200e3b0] */
  EDX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb244 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11feb247 push eax */
  push32((uint32_t)(EAX));
  /* 11feb248 call 0x11fdbc50 */
  push32(0x11feb24du); f_11fdbc50();
  /* 11feb24d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11feb250:;
  /* 11feb250 mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb256 mov edx, dword ptr [0x1200f21c] */
  EDX = (r32((uint32_t)(0x1200f21c)));
  /* 11feb25c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11feb25e mov eax, dword ptr [0x1200e3b0] */
  EAX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb263 mov ecx, dword ptr [0x1200f220] */
  ECX = (r32((uint32_t)(0x1200f220)));
  /* 11feb269 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11feb26c mov edx, dword ptr [0x1200e3b0] */
  EDX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb272 mov eax, dword ptr [0x1200f224] */
  EAX = (r32((uint32_t)(0x1200f224)));
  /* 11feb277 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11feb27a mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb280 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feb282 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11feb284 mov byte ptr [0x1200cfe4], al */
  w8((uint32_t)(0x1200cfe4), (AL));
  /* 11feb289 mov dword ptr [0x1200cfe8], 1 */
  w32((uint32_t)(0x1200cfe8), (0x1u));
  /* 11feb293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feb295 jmp 0x11feb3c2 */
  goto L_11feb3c2;
L_11feb29a:;
  /* 11feb29a push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb29c mov ecx, dword ptr [0x1200f21c] */
  ECX = (r32((uint32_t)(0x1200f21c)));
  /* 11feb2a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb2a3 call 0x11fdbc50 */
  push32(0x11feb2a8u); f_11fdbc50();
  /* 11feb2a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb2ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb2ad mov edx, dword ptr [0x1200f220] */
  EDX = (r32((uint32_t)(0x1200f220)));
  /* 11feb2b3 push edx */
  push32((uint32_t)(EDX));
  /* 11feb2b4 call 0x11fdbc50 */
  push32(0x11feb2b9u); f_11fdbc50();
  /* 11feb2b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb2bc push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb2be mov eax, dword ptr [0x1200f224] */
  EAX = (r32((uint32_t)(0x1200f224)));
  /* 11feb2c3 push eax */
  push32((uint32_t)(EAX));
  /* 11feb2c4 call 0x11fdbc50 */
  push32(0x11feb2c9u); f_11fdbc50();
  /* 11feb2c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb2cc mov dword ptr [0x1200f21c], 0 */
  w32((uint32_t)(0x1200f21c), (0x0u));
  /* 11feb2d6 mov dword ptr [0x1200f220], 0 */
  w32((uint32_t)(0x1200f220), (0x0u));
  /* 11feb2e0 mov dword ptr [0x1200f224], 0 */
  w32((uint32_t)(0x1200f224), (0x0u));
  /* 11feb2ea push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11feb2ef push 0x1200a320 */
  push32((uint32_t)(0x1200a320u));
  /* 11feb2f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb2f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb2f8 call 0x11fdb1c0 */
  push32(0x11feb2fdu); f_11fdb1c0();
  /* 11feb2fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb300 mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb306 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11feb308 mov edx, dword ptr [0x1200e3b0] */
  EDX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb30e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb311 jne 0x11feb31b */
  if (!C.zf) goto L_11feb31b;
  /* 11feb313 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11feb316 jmp 0x11feb3c2 */
  goto L_11feb3c2;
L_11feb31b:;
  /* 11feb31b push 0x1200a2c0 */
  push32((uint32_t)(0x1200a2c0u));
  /* 11feb320 mov eax, dword ptr [0x1200e3b0] */
  EAX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb325 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11feb327 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb328 call 0x11fdf8d0 */
  push32(0x11feb32du); f_11fdf8d0();
  /* 11feb32d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb330 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11feb335 push 0x1200a320 */
  push32((uint32_t)(0x1200a320u));
  /* 11feb33a push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb33c push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb33e call 0x11fdb1c0 */
  push32(0x11feb343u); f_11fdb1c0();
  /* 11feb343 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb346 mov edx, dword ptr [0x1200e3b0] */
  EDX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb34c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11feb34f mov eax, dword ptr [0x1200e3b0] */
  EAX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb354 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb358 jne 0x11feb35f */
  if (!C.zf) goto L_11feb35f;
  /* 11feb35a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11feb35d jmp 0x11feb3c2 */
  goto L_11feb3c2;
L_11feb35f:;
  /* 11feb35f mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb365 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11feb368 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11feb36b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11feb370 push 0x1200a320 */
  push32((uint32_t)(0x1200a320u));
  /* 11feb375 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb377 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb379 call 0x11fdb1c0 */
  push32(0x11feb37eu); f_11fdb1c0();
  /* 11feb37e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb381 mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb387 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11feb38a mov edx, dword ptr [0x1200e3b0] */
  EDX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb390 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb394 jne 0x11feb39b */
  if (!C.zf) goto L_11feb39b;
  /* 11feb396 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11feb399 jmp 0x11feb3c2 */
  goto L_11feb3c2;
L_11feb39b:;
  /* 11feb39b mov eax, dword ptr [0x1200e3b0] */
  EAX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb3a0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11feb3a3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11feb3a6 mov edx, dword ptr [0x1200e3b0] */
  EDX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb3ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11feb3ae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11feb3b0 mov byte ptr [0x1200cfe4], cl */
  w8((uint32_t)(0x1200cfe4), (CL));
  /* 11feb3b6 mov dword ptr [0x1200cfe8], 1 */
  w32((uint32_t)(0x1200cfe8), (0x1u));
  /* 11feb3c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11feb3c2:;
  /* 11feb3c2 mov esp, ebp */
  ESP = (EBP);
  /* 11feb3c4 pop ebp */
  EBP = (pop32());
  /* 11feb3c5 ret  */
  ESPCHK(0x11feb120u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11feb3d0 (125 bytes, 49 insns) */
void f_11feb3d0(void) {
  FTRACE(0x11feb3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feb3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11feb3d1 mov ebp, esp */
  EBP = (ESP);
  /* 11feb3d3 push ecx */
  push32((uint32_t)(ECX));
L_11feb3d4:;
  /* 11feb3d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb3d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11feb3da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11feb3dc je 0x11feb449 */
  if (C.zf) goto L_11feb449;
  /* 11feb3de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb3e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11feb3e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb3e7 jl 0x11feb40d */
  if ((C.sf!=C.of)) goto L_11feb40d;
  /* 11feb3e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb3ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11feb3ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb3f2 jg 0x11feb40d */
  if ((!C.zf&&C.sf==C.of)) goto L_11feb40d;
  /* 11feb3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb3f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11feb3fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feb3fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb400 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11feb402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb405 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb408 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11feb40b jmp 0x11feb447 */
  goto L_11feb447;
L_11feb40d:;
  /* 11feb40d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb410 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11feb413 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb416 jne 0x11feb43e */
  if (!C.zf) goto L_11feb43e;
  /* 11feb418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb41b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11feb41e:;
  /* 11feb41e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb421 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb424 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11feb427 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11feb429 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb42c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb42f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11feb432 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb435 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11feb438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feb43a jne 0x11feb41e */
  if (!C.zf) goto L_11feb41e;
  /* 11feb43c jmp 0x11feb447 */
  goto L_11feb447;
L_11feb43e:;
  /* 11feb43e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb441 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb444 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11feb447:;
  /* 11feb447 jmp 0x11feb3d4 */
  goto L_11feb3d4;
L_11feb449:;
  /* 11feb449 mov esp, ebp */
  ESP = (EBP);
  /* 11feb44b pop ebp */
  EBP = (pop32());
  /* 11feb44c ret  */
  ESPCHK(0x11feb3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b450 @ 0x11feb450 (304 bytes, 85 insns) */
void f_11feb450(void) {
  FTRACE(0x11feb450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feb450 push ebp */
  push32((uint32_t)(EBP));
  /* 11feb451 mov ebp, esp */
  EBP = (ESP);
  /* 11feb453 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb454 cmp dword ptr [0x1200f1fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb45b je 0x11feb51c */
  if (C.zf) goto L_11feb51c;
  /* 11feb461 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11feb463 push 0x1200a32c */
  push32((uint32_t)(0x1200a32cu));
  /* 11feb468 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb46a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11feb46c push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb46e call 0x11fdb5d0 */
  push32(0x11feb473u); f_11fdb5d0();
  /* 11feb473 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb476 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11feb479 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb47d jne 0x11feb489 */
  if (!C.zf) goto L_11feb489;
  /* 11feb47f mov eax, 1 */
  EAX = (0x1u);
  /* 11feb484 jmp 0x11feb57c */
  goto L_11feb57c;
L_11feb489:;
  /* 11feb489 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb48c push eax */
  push32((uint32_t)(EAX));
  /* 11feb48d call 0x11feb580 */
  push32(0x11feb492u); f_11feb580();
  /* 11feb492 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb495 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feb497 je 0x11feb4bd */
  if (C.zf) goto L_11feb4bd;
  /* 11feb499 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb49c push ecx */
  push32((uint32_t)(ECX));
  /* 11feb49d call 0x11feb810 */
  push32(0x11feb4a2u); f_11feb810();
  /* 11feb4a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb4a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb4a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb4aa push edx */
  push32((uint32_t)(EDX));
  /* 11feb4ab call 0x11fdbc50 */
  push32(0x11feb4b0u); f_11fdbc50();
  /* 11feb4b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb4b3 mov eax, 1 */
  EAX = (0x1u);
  /* 11feb4b8 jmp 0x11feb57c */
  goto L_11feb57c;
L_11feb4bd:;
  /* 11feb4bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb4c0 mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb4c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feb4c8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11feb4ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb4cd mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb4d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11feb4d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11feb4d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb4dc mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb4e2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11feb4e5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11feb4e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb4eb mov dword ptr [0x1200e3b0], eax */
  w32((uint32_t)(0x1200e3b0), (EAX));
  /* 11feb4f0 mov ecx, dword ptr [0x1200f228] */
  ECX = (r32((uint32_t)(0x1200f228)));
  /* 11feb4f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb4f7 call 0x11feb810 */
  push32(0x11feb4fcu); f_11feb810();
  /* 11feb4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb4ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb501 mov edx, dword ptr [0x1200f228] */
  EDX = (r32((uint32_t)(0x1200f228)));
  /* 11feb507 push edx */
  push32((uint32_t)(EDX));
  /* 11feb508 call 0x11fdbc50 */
  push32(0x11feb50du); f_11fdbc50();
  /* 11feb50d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb510 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb513 mov dword ptr [0x1200f228], eax */
  w32((uint32_t)(0x1200f228), (EAX));
  /* 11feb518 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feb51a jmp 0x11feb57c */
  goto L_11feb57c;
L_11feb51c:;
  /* 11feb51c mov ecx, dword ptr [0x1200e3b0] */
  ECX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb522 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11feb524 mov dword ptr [0x1200e380], edx */
  w32((uint32_t)(0x1200e380), (EDX));
  /* 11feb52a mov eax, dword ptr [0x1200e3b0] */
  EAX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb52f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11feb532 mov dword ptr [0x1200e384], ecx */
  w32((uint32_t)(0x1200e384), (ECX));
  /* 11feb538 mov edx, dword ptr [0x1200e3b0] */
  EDX = (r32((uint32_t)(0x1200e3b0)));
  /* 11feb53e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11feb541 mov dword ptr [0x1200e388], eax */
  w32((uint32_t)(0x1200e388), (EAX));
  /* 11feb546 mov dword ptr [0x1200e3b0], 0x1200e380 */
  w32((uint32_t)(0x1200e3b0), (0x1200e380u));
  /* 11feb550 mov ecx, dword ptr [0x1200f228] */
  ECX = (r32((uint32_t)(0x1200f228)));
  /* 11feb556 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb557 call 0x11feb810 */
  push32(0x11feb55cu); f_11feb810();
  /* 11feb55c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb55f push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb561 mov edx, dword ptr [0x1200f228] */
  EDX = (r32((uint32_t)(0x1200f228)));
  /* 11feb567 push edx */
  push32((uint32_t)(EDX));
  /* 11feb568 call 0x11fdbc50 */
  push32(0x11feb56du); f_11fdbc50();
  /* 11feb56d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb570 mov dword ptr [0x1200f228], 0 */
  w32((uint32_t)(0x1200f228), (0x0u));
  /* 11feb57a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11feb57c:;
  /* 11feb57c mov esp, ebp */
  ESP = (EBP);
  /* 11feb57e pop ebp */
  EBP = (pop32());
  /* 11feb57f ret  */
  ESPCHK(0x11feb450u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b580 @ 0x11feb580 (525 bytes, 200 insns) */
void f_11feb580(void) {
  FTRACE(0x11feb580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feb580 push ebp */
  push32((uint32_t)(EBP));
  /* 11feb581 mov ebp, esp */
  EBP = (ESP);
  /* 11feb583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feb586 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11feb58d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feb58f mov ax, word ptr [0x1200f248] */
  AX = (r16((uint32_t)(0x1200f248)));
  /* 11feb595 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11feb598 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb59c jne 0x11feb5a6 */
  if (!C.zf) goto L_11feb5a6;
  /* 11feb59e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11feb5a1 jmp 0x11feb789 */
  goto L_11feb789;
L_11feb5a6:;
  /* 11feb5a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb5a9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb5ac push ecx */
  push32((uint32_t)(ECX));
  /* 11feb5ad push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11feb5af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb5b2 push edx */
  push32((uint32_t)(EDX));
  /* 11feb5b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb5b5 call 0x11feeee0 */
  push32(0x11feb5bau); f_11feeee0();
  /* 11feb5ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb5bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb5c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb5c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb5c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb5c8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb5cb push edx */
  push32((uint32_t)(EDX));
  /* 11feb5cc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11feb5ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb5d1 push eax */
  push32((uint32_t)(EAX));
  /* 11feb5d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb5d4 call 0x11feeee0 */
  push32(0x11feb5d9u); f_11feeee0();
  /* 11feb5d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb5dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb5df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb5e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb5e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb5e7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb5ea push edx */
  push32((uint32_t)(EDX));
  /* 11feb5eb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11feb5ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb5f0 push eax */
  push32((uint32_t)(EAX));
  /* 11feb5f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb5f3 call 0x11feeee0 */
  push32(0x11feb5f8u); f_11feeee0();
  /* 11feb5f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb5fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb5fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb600 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb603 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb606 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb609 push edx */
  push32((uint32_t)(EDX));
  /* 11feb60a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11feb60c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb60f push eax */
  push32((uint32_t)(EAX));
  /* 11feb610 push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb612 call 0x11feeee0 */
  push32(0x11feb617u); f_11feeee0();
  /* 11feb617 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb61a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb61d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb61f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb622 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb625 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb628 push edx */
  push32((uint32_t)(EDX));
  /* 11feb629 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11feb62b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb62e push eax */
  push32((uint32_t)(EAX));
  /* 11feb62f push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb631 call 0x11feeee0 */
  push32(0x11feb636u); f_11feeee0();
  /* 11feb636 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb639 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb63c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb63e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb644 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11feb647 push eax */
  push32((uint32_t)(EAX));
  /* 11feb648 call 0x11feb790 */
  push32(0x11feb64du); f_11feb790();
  /* 11feb64d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb653 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb656 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb657 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11feb659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb65c push edx */
  push32((uint32_t)(EDX));
  /* 11feb65d push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb65f call 0x11feeee0 */
  push32(0x11feb664u); f_11feeee0();
  /* 11feb664 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb667 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb66a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb66c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb66f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb672 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb675 push edx */
  push32((uint32_t)(EDX));
  /* 11feb676 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11feb678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb67b push eax */
  push32((uint32_t)(EAX));
  /* 11feb67c push 1 */
  push32((uint32_t)(0x1u));
  /* 11feb67e call 0x11feeee0 */
  push32(0x11feb683u); f_11feeee0();
  /* 11feb683 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb686 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb689 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb68b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb68e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb691 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb694 push edx */
  push32((uint32_t)(EDX));
  /* 11feb695 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11feb697 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb69a push eax */
  push32((uint32_t)(EAX));
  /* 11feb69b push 0 */
  push32((uint32_t)(0x0u));
  /* 11feb69d call 0x11feeee0 */
  push32(0x11feb6a2u); f_11feeee0();
  /* 11feb6a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb6a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb6a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb6aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb6ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb6b0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb6b3 push edx */
  push32((uint32_t)(EDX));
  /* 11feb6b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11feb6b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb6b9 push eax */
  push32((uint32_t)(EAX));
  /* 11feb6ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11feb6bc call 0x11feeee0 */
  push32(0x11feb6c1u); f_11feeee0();
  /* 11feb6c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb6c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb6c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb6c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb6cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb6cf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb6d2 push edx */
  push32((uint32_t)(EDX));
  /* 11feb6d3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11feb6d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb6d8 push eax */
  push32((uint32_t)(EAX));
  /* 11feb6d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feb6db call 0x11feeee0 */
  push32(0x11feb6e0u); f_11feeee0();
  /* 11feb6e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb6e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb6e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb6e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb6eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb6ee add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb6f1 push edx */
  push32((uint32_t)(EDX));
  /* 11feb6f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11feb6f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb6f7 push eax */
  push32((uint32_t)(EAX));
  /* 11feb6f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feb6fa call 0x11feeee0 */
  push32(0x11feb6ffu); f_11feeee0();
  /* 11feb6ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb702 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb705 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb707 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb70a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb70d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb710 push edx */
  push32((uint32_t)(EDX));
  /* 11feb711 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11feb713 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb716 push eax */
  push32((uint32_t)(EAX));
  /* 11feb717 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feb719 call 0x11feeee0 */
  push32(0x11feb71eu); f_11feeee0();
  /* 11feb71e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb721 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb724 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb726 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb729 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb72c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb72f push edx */
  push32((uint32_t)(EDX));
  /* 11feb730 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11feb732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb735 push eax */
  push32((uint32_t)(EAX));
  /* 11feb736 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feb738 call 0x11feeee0 */
  push32(0x11feb73du); f_11feeee0();
  /* 11feb73d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb740 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb743 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb745 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb748 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb74b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb74e push edx */
  push32((uint32_t)(EDX));
  /* 11feb74f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11feb751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb754 push eax */
  push32((uint32_t)(EAX));
  /* 11feb755 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feb757 call 0x11feeee0 */
  push32(0x11feb75cu); f_11feeee0();
  /* 11feb75c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb75f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb762 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb764 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb767 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb76a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb76d push edx */
  push32((uint32_t)(EDX));
  /* 11feb76e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11feb770 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb773 push eax */
  push32((uint32_t)(EAX));
  /* 11feb774 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feb776 call 0x11feeee0 */
  push32(0x11feb77bu); f_11feeee0();
  /* 11feb77b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb77e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feb781 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11feb783 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feb786 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11feb789:;
  /* 11feb789 mov esp, ebp */
  ESP = (EBP);
  /* 11feb78b pop ebp */
  EBP = (pop32());
  /* 11feb78c ret  */
  ESPCHK(0x11feb580u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11feb790 (125 bytes, 49 insns) */
void f_11feb790(void) {
  FTRACE(0x11feb790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feb790 push ebp */
  push32((uint32_t)(EBP));
  /* 11feb791 mov ebp, esp */
  EBP = (ESP);
  /* 11feb793 push ecx */
  push32((uint32_t)(ECX));
L_11feb794:;
  /* 11feb794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb797 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11feb79a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11feb79c je 0x11feb809 */
  if (C.zf) goto L_11feb809;
  /* 11feb79e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb7a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11feb7a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb7a7 jl 0x11feb7cd */
  if ((C.sf!=C.of)) goto L_11feb7cd;
  /* 11feb7a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb7ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11feb7af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb7b2 jg 0x11feb7cd */
  if ((!C.zf&&C.sf==C.of)) goto L_11feb7cd;
  /* 11feb7b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb7b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11feb7ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feb7bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb7c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11feb7c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb7c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb7c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11feb7cb jmp 0x11feb807 */
  goto L_11feb807;
L_11feb7cd:;
  /* 11feb7cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb7d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11feb7d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb7d6 jne 0x11feb7fe */
  if (!C.zf) goto L_11feb7fe;
  /* 11feb7d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb7db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11feb7de:;
  /* 11feb7de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb7e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb7e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11feb7e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11feb7e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb7ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb7ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11feb7f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feb7f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11feb7f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feb7fa jne 0x11feb7de */
  if (!C.zf) goto L_11feb7de;
  /* 11feb7fc jmp 0x11feb807 */
  goto L_11feb807;
L_11feb7fe:;
  /* 11feb7fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb801 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb804 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11feb807:;
  /* 11feb807 jmp 0x11feb794 */
  goto L_11feb794;
L_11feb809:;
  /* 11feb809 mov esp, ebp */
  ESP = (EBP);
  /* 11feb80b pop ebp */
  EBP = (pop32());
  /* 11feb80c ret  */
  ESPCHK(0x11feb790u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b810 @ 0x11feb810 (147 bytes, 52 insns) */
void f_11feb810(void) {
  FTRACE(0x11feb810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feb810 push ebp */
  push32((uint32_t)(EBP));
  /* 11feb811 mov ebp, esp */
  EBP = (ESP);
  /* 11feb813 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb817 jne 0x11feb81e */
  if (!C.zf) goto L_11feb81e;
  /* 11feb819 jmp 0x11feb8a1 */
  goto L_11feb8a1;
L_11feb81e:;
  /* 11feb81e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb821 cmp dword ptr [eax + 0xc], 0x1200f284 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1200f284u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb828 je 0x11feb8a1 */
  if (C.zf) goto L_11feb8a1;
  /* 11feb82a push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb82c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb82f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11feb832 push edx */
  push32((uint32_t)(EDX));
  /* 11feb833 call 0x11fdbc50 */
  push32(0x11feb838u); f_11fdbc50();
  /* 11feb838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb83b push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb83d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb840 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11feb843 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb844 call 0x11fdbc50 */
  push32(0x11feb849u); f_11fdbc50();
  /* 11feb849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb84c push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb84e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb851 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11feb854 push eax */
  push32((uint32_t)(EAX));
  /* 11feb855 call 0x11fdbc50 */
  push32(0x11feb85au); f_11fdbc50();
  /* 11feb85a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb85d push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb85f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb862 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11feb865 push edx */
  push32((uint32_t)(EDX));
  /* 11feb866 call 0x11fdbc50 */
  push32(0x11feb86bu); f_11fdbc50();
  /* 11feb86b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb86e push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb873 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11feb876 push ecx */
  push32((uint32_t)(ECX));
  /* 11feb877 call 0x11fdbc50 */
  push32(0x11feb87cu); f_11fdbc50();
  /* 11feb87c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb87f push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb881 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb884 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11feb887 push eax */
  push32((uint32_t)(EAX));
  /* 11feb888 call 0x11fdbc50 */
  push32(0x11feb88du); f_11fdbc50();
  /* 11feb88d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb890 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb892 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feb895 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11feb898 push edx */
  push32((uint32_t)(EDX));
  /* 11feb899 call 0x11fdbc50 */
  push32(0x11feb89eu); f_11fdbc50();
  /* 11feb89e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11feb8a1:;
  /* 11feb8a1 pop ebp */
  EBP = (pop32());
  /* 11feb8a2 ret  */
  ESPCHK(0x11feb810u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b8b0 @ 0x11feb8b0 (928 bytes, 284 insns) */
void f_11feb8b0(void) {
  FTRACE(0x11feb8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feb8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11feb8b1 mov ebp, esp */
  EBP = (ESP);
  /* 11feb8b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feb8b6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11feb8bd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11feb8c4 cmp dword ptr [0x1200f1f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f1f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb8cb je 0x11febc01 */
  if (C.zf) goto L_11febc01;
  /* 11feb8d1 cmp dword ptr [0x1200f208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb8d8 jne 0x11feb900 */
  if (!C.zf) goto L_11feb900;
  /* 11feb8da push 0x1200f208 */
  push32((uint32_t)(0x1200f208u));
  /* 11feb8df push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11feb8e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feb8e6 mov ax, word ptr [0x1200f240] */
  AX = (r16((uint32_t)(0x1200f240)));
  /* 11feb8ec push eax */
  push32((uint32_t)(EAX));
  /* 11feb8ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11feb8ef call 0x11feeee0 */
  push32(0x11feb8f4u); f_11feeee0();
  /* 11feb8f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb8f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feb8f9 je 0x11feb900 */
  if (C.zf) goto L_11feb900;
  /* 11feb8fb jmp 0x11febbc2 */
  goto L_11febbc2;
L_11feb900:;
  /* 11feb900 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11feb902 push 0x1200a338 */
  push32((uint32_t)(0x1200a338u));
  /* 11feb907 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb909 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11feb90e call 0x11fdb1c0 */
  push32(0x11feb913u); f_11fdb1c0();
  /* 11feb913 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb916 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11feb919 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11feb91b push 0x1200a338 */
  push32((uint32_t)(0x1200a338u));
  /* 11feb920 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb922 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11feb927 call 0x11fdb1c0 */
  push32(0x11feb92cu); f_11fdb1c0();
  /* 11feb92c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb92f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11feb932 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11feb934 push 0x1200a338 */
  push32((uint32_t)(0x1200a338u));
  /* 11feb939 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb93b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11feb940 call 0x11fdb1c0 */
  push32(0x11feb945u); f_11fdb1c0();
  /* 11feb945 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb948 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11feb94b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11feb94d push 0x1200a338 */
  push32((uint32_t)(0x1200a338u));
  /* 11feb952 push 2 */
  push32((uint32_t)(0x2u));
  /* 11feb954 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11feb959 call 0x11fdb1c0 */
  push32(0x11feb95eu); f_11fdb1c0();
  /* 11feb95e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb961 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11feb964 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb968 je 0x11feb97c */
  if (C.zf) goto L_11feb97c;
  /* 11feb96a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb96e je 0x11feb97c */
  if (C.zf) goto L_11feb97c;
  /* 11feb970 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb974 je 0x11feb97c */
  if (C.zf) goto L_11feb97c;
  /* 11feb976 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb97a jne 0x11feb981 */
  if (!C.zf) goto L_11feb981;
L_11feb97c:;
  /* 11feb97c jmp 0x11febbc2 */
  goto L_11febbc2;
L_11feb981:;
  /* 11feb981 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11feb984 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11feb987 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11feb98e jmp 0x11feb999 */
  goto L_11feb999;
L_11feb990:;
  /* 11feb990 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11feb993 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb996 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11feb999:;
  /* 11feb999 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb9a0 jge 0x11feb9b5 */
  if ((C.sf==C.of)) goto L_11feb9b5;
  /* 11feb9a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11feb9a5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11feb9a8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11feb9aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11feb9ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feb9b0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11feb9b3 jmp 0x11feb990 */
  goto L_11feb990;
L_11feb9b5:;
  /* 11feb9b5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11feb9b8 push eax */
  push32((uint32_t)(EAX));
  /* 11feb9b9 mov ecx, dword ptr [0x1200f208] */
  ECX = (r32((uint32_t)(0x1200f208)));
  /* 11feb9bf push ecx */
  push32((uint32_t)(ECX));
  /* 11feb9c0 call dword ptr [0x12011384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011384))), 0x11feb9c6u);
  /* 11feb9c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feb9c8 jne 0x11feb9cf */
  if (!C.zf) goto L_11feb9cf;
  /* 11feb9ca jmp 0x11febbc2 */
  goto L_11febbc2;
L_11feb9cf:;
  /* 11feb9cf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb9d3 jbe 0x11feb9da */
  if ((C.cf||C.zf)) goto L_11feb9da;
  /* 11feb9d5 jmp 0x11febbc2 */
  goto L_11febbc2;
L_11feb9da:;
  /* 11feb9da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11feb9dd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11feb9e3 mov dword ptr [0x1200cfe0], edx */
  w32((uint32_t)(0x1200cfe0), (EDX));
  /* 11feb9e9 cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feb9f0 jle 0x11feba49 */
  if ((C.zf||C.sf!=C.of)) goto L_11feba49;
  /* 11feb9f2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11feb9f5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11feb9f8 jmp 0x11feba03 */
  goto L_11feba03;
L_11feb9fa:;
  /* 11feb9fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11feb9fd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feba00 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11feba03:;
  /* 11feba03 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11feba06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11feba08 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11feba0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feba0c je 0x11feba49 */
  if (C.zf) goto L_11feba49;
  /* 11feba0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11feba11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11feba13 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11feba16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11feba18 je 0x11feba49 */
  if (C.zf) goto L_11feba49;
  /* 11feba1a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11feba1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11feba1f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11feba21 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11feba24 jmp 0x11feba2f */
  goto L_11feba2f;
L_11feba26:;
  /* 11feba26 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11feba29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feba2c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11feba2f:;
  /* 11feba2f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11feba32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11feba34 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11feba37 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feba3a jg 0x11feba47 */
  if ((!C.zf&&C.sf==C.of)) goto L_11feba47;
  /* 11feba3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11feba3f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feba42 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11feba45 jmp 0x11feba26 */
  goto L_11feba26;
L_11feba47:;
  /* 11feba47 jmp 0x11feb9fa */
  goto L_11feb9fa;
L_11feba49:;
  /* 11feba49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11feba4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11feba4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11feba4f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11feba52 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feba55 push eax */
  push32((uint32_t)(EAX));
  /* 11feba56 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11feba5b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11feba5e push ecx */
  push32((uint32_t)(ECX));
  /* 11feba5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11feba61 call 0x11fe75d0 */
  push32(0x11feba66u); f_11fe75d0();
  /* 11feba66 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11feba69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11feba6b jne 0x11feba72 */
  if (!C.zf) goto L_11feba72;
  /* 11feba6d jmp 0x11febbc2 */
  goto L_11febbc2;
L_11feba72:;
  /* 11feba72 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11feba75 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11feba7a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11feba7d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11feba80 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11feba87 jmp 0x11feba92 */
  goto L_11feba92;
L_11feba89:;
  /* 11feba89 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11feba8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feba8f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11feba92:;
  /* 11feba92 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feba99 jge 0x11febab0 */
  if ((C.sf==C.of)) goto L_11febab0;
  /* 11feba9b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11feba9e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11febaa2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11febaa5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11febaa8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febaab mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11febaae jmp 0x11feba89 */
  goto L_11feba89;
L_11febab0:;
  /* 11febab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11febab2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11febab4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11febab7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febaba push edx */
  push32((uint32_t)(EDX));
  /* 11febabb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11febac0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11febac3 push eax */
  push32((uint32_t)(EAX));
  /* 11febac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11febac6 call 0x11fef180 */
  push32(0x11febacbu); f_11fef180();
  /* 11febacb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11febad0 jne 0x11febad7 */
  if (!C.zf) goto L_11febad7;
  /* 11febad2 jmp 0x11febbc2 */
  goto L_11febbc2;
L_11febad7:;
  /* 11febad7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11febada mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11febadf cmp dword ptr [0x1200cfe0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200cfe0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febae6 jle 0x11febb43 */
  if ((C.zf||C.sf!=C.of)) goto L_11febb43;
  /* 11febae8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11febaeb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11febaee jmp 0x11febaf9 */
  goto L_11febaf9;
L_11febaf0:;
  /* 11febaf0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11febaf3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febaf6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11febaf9:;
  /* 11febaf9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11febafc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11febafe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11febb00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11febb02 je 0x11febb43 */
  if (C.zf) goto L_11febb43;
  /* 11febb04 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11febb07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11febb09 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11febb0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11febb0e je 0x11febb43 */
  if (C.zf) goto L_11febb43;
  /* 11febb10 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11febb13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febb15 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11febb17 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11febb1a jmp 0x11febb25 */
  goto L_11febb25;
L_11febb1c:;
  /* 11febb1c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11febb1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febb22 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11febb25:;
  /* 11febb25 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11febb28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febb2a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11febb2d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febb30 jg 0x11febb41 */
  if ((!C.zf&&C.sf==C.of)) goto L_11febb41;
  /* 11febb32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11febb35 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11febb38 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11febb3f jmp 0x11febb1c */
  goto L_11febb1c;
L_11febb41:;
  /* 11febb41 jmp 0x11febaf0 */
  goto L_11febaf0;
L_11febb43:;
  /* 11febb43 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11febb46 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febb49 mov dword ptr [0x1200cfec], eax */
  w32((uint32_t)(0x1200cfec), (EAX));
  /* 11febb4e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11febb51 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febb54 mov dword ptr [0x1200cff0], ecx */
  w32((uint32_t)(0x1200cff0), (ECX));
  /* 11febb5a cmp dword ptr [0x1200f22c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febb61 je 0x11febb74 */
  if (C.zf) goto L_11febb74;
  /* 11febb63 push 2 */
  push32((uint32_t)(0x2u));
  /* 11febb65 mov edx, dword ptr [0x1200f22c] */
  EDX = (r32((uint32_t)(0x1200f22c)));
  /* 11febb6b push edx */
  push32((uint32_t)(EDX));
  /* 11febb6c call 0x11fdbc50 */
  push32(0x11febb71u); f_11fdbc50();
  /* 11febb71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11febb74:;
  /* 11febb74 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11febb77 mov dword ptr [0x1200f22c], eax */
  w32((uint32_t)(0x1200f22c), (EAX));
  /* 11febb7c cmp dword ptr [0x1200f230], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f230))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febb83 je 0x11febb96 */
  if (C.zf) goto L_11febb96;
  /* 11febb85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11febb87 mov ecx, dword ptr [0x1200f230] */
  ECX = (r32((uint32_t)(0x1200f230)));
  /* 11febb8d push ecx */
  push32((uint32_t)(ECX));
  /* 11febb8e call 0x11fdbc50 */
  push32(0x11febb93u); f_11fdbc50();
  /* 11febb93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11febb96:;
  /* 11febb96 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11febb99 mov dword ptr [0x1200f230], edx */
  w32((uint32_t)(0x1200f230), (EDX));
  /* 11febb9f push 2 */
  push32((uint32_t)(0x2u));
  /* 11febba1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11febba4 push eax */
  push32((uint32_t)(EAX));
  /* 11febba5 call 0x11fdbc50 */
  push32(0x11febbaau); f_11fdbc50();
  /* 11febbaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febbad push 2 */
  push32((uint32_t)(0x2u));
  /* 11febbaf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11febbb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11febbb3 call 0x11fdbc50 */
  push32(0x11febbb8u); f_11fdbc50();
  /* 11febbb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febbbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febbbd jmp 0x11febc4c */
  goto L_11febc4c;
L_11febbc2:;
  /* 11febbc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11febbc4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11febbc7 push edx */
  push32((uint32_t)(EDX));
  /* 11febbc8 call 0x11fdbc50 */
  push32(0x11febbcdu); f_11fdbc50();
  /* 11febbcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febbd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11febbd2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11febbd5 push eax */
  push32((uint32_t)(EAX));
  /* 11febbd6 call 0x11fdbc50 */
  push32(0x11febbdbu); f_11fdbc50();
  /* 11febbdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febbde push 2 */
  push32((uint32_t)(0x2u));
  /* 11febbe0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11febbe3 push ecx */
  push32((uint32_t)(ECX));
  /* 11febbe4 call 0x11fdbc50 */
  push32(0x11febbe9u); f_11fdbc50();
  /* 11febbe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febbec push 2 */
  push32((uint32_t)(0x2u));
  /* 11febbee mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11febbf1 push edx */
  push32((uint32_t)(EDX));
  /* 11febbf2 call 0x11fdbc50 */
  push32(0x11febbf7u); f_11fdbc50();
  /* 11febbf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febbfa mov eax, 1 */
  EAX = (0x1u);
  /* 11febbff jmp 0x11febc4c */
  goto L_11febc4c;
L_11febc01:;
  /* 11febc01 mov dword ptr [0x1200cfec], 0x1200cff6 */
  w32((uint32_t)(0x1200cfec), (0x1200cff6u));
  /* 11febc0b mov dword ptr [0x1200cff0], 0x1200cff6 */
  w32((uint32_t)(0x1200cff0), (0x1200cff6u));
  /* 11febc15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11febc17 mov eax, dword ptr [0x1200f22c] */
  EAX = (r32((uint32_t)(0x1200f22c)));
  /* 11febc1c push eax */
  push32((uint32_t)(EAX));
  /* 11febc1d call 0x11fdbc50 */
  push32(0x11febc22u); f_11fdbc50();
  /* 11febc22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febc25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11febc27 mov ecx, dword ptr [0x1200f230] */
  ECX = (r32((uint32_t)(0x1200f230)));
  /* 11febc2d push ecx */
  push32((uint32_t)(ECX));
  /* 11febc2e call 0x11fdbc50 */
  push32(0x11febc33u); f_11fdbc50();
  /* 11febc33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febc36 mov dword ptr [0x1200f22c], 0 */
  w32((uint32_t)(0x1200f22c), (0x0u));
  /* 11febc40 mov dword ptr [0x1200f230], 0 */
  w32((uint32_t)(0x1200f230), (0x0u));
  /* 11febc4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11febc4c:;
  /* 11febc4c mov esp, ebp */
  ESP = (EBP);
  /* 11febc4e pop ebp */
  EBP = (pop32());
  /* 11febc4f ret  */
  ESPCHK(0x11feb8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bc50 @ 0x11febc50 (7 bytes, 5 insns) */
void f_11febc50(void) {
  FTRACE(0x11febc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11febc50 push ebp */
  push32((uint32_t)(EBP));
  /* 11febc51 mov ebp, esp */
  EBP = (ESP);
  /* 11febc53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febc55 pop ebp */
  EBP = (pop32());
  /* 11febc56 ret  */
  ESPCHK(0x11febc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bc60 @ 0x11febc60 (62 bytes, 35 insns) */
void f_11febc60(void) {
  FTRACE(0x11febc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11febc60 push ebp */
  push32((uint32_t)(EBP));
  /* 11febc61 mov ebp, esp */
  EBP = (ESP);
  /* 11febc63 push esi */
  push32((uint32_t)(ESI));
  /* 11febc64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febc66 push eax */
  push32((uint32_t)(EAX));
  /* 11febc67 push eax */
  push32((uint32_t)(EAX));
  /* 11febc68 push eax */
  push32((uint32_t)(EAX));
  /* 11febc69 push eax */
  push32((uint32_t)(EAX));
  /* 11febc6a push eax */
  push32((uint32_t)(EAX));
  /* 11febc6b push eax */
  push32((uint32_t)(EAX));
  /* 11febc6c push eax */
  push32((uint32_t)(EAX));
  /* 11febc6d push eax */
  push32((uint32_t)(EAX));
  /* 11febc6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11febc71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11febc74:;
  /* 11febc74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11febc76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11febc78 je 0x11febc81 */
  if (C.zf) goto L_11febc81;
  /* 11febc7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11febc7b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11febc7b");
  /* 11febc7f jmp 0x11febc74 */
  goto L_11febc74;
L_11febc81:;
  /* 11febc81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11febc84 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11febc87 nop  */
  /* nop */
L_11febc88:;
  /* 11febc88 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11febc89 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11febc8b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11febc8d je 0x11febc96 */
  if (C.zf) goto L_11febc96;
  /* 11febc8f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11febc90 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11febc90");
  /* 11febc94 jae 0x11febc88 */
  if (!C.cf) goto L_11febc88;
L_11febc96:;
  /* 11febc96 mov eax, ecx */
  EAX = (ECX);
  /* 11febc98 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febc9b pop esi */
  ESI = (pop32());
  /* 11febc9c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11febc9d ret  */
  ESPCHK(0x11febc60u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11febca0 (56 bytes, 31 insns) */
void f_11febca0(void) {
  FTRACE(0x11febca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11febca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11febca1 mov ebp, esp */
  EBP = (ESP);
  /* 11febca3 push edi */
  push32((uint32_t)(EDI));
  /* 11febca4 push esi */
  push32((uint32_t)(ESI));
  /* 11febca5 push ebx */
  push32((uint32_t)(EBX));
  /* 11febca6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11febca9 jecxz 0x11febcd1 */
  x86_unimpl("jecxz @ 0x11febca9");
  /* 11febcab mov ebx, ecx */
  EBX = (ECX);
  /* 11febcad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11febcb0 mov esi, edi */
  ESI = (EDI);
  /* 11febcb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febcb4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11febcb6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11febcb8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febcba mov edi, esi */
  EDI = (ESI);
  /* 11febcbc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11febcbf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11febcc1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11febcc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11febcc6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11febcc9 ja 0x11febccf */
  if ((!C.cf&&!C.zf)) goto L_11febccf;
  /* 11febccb je 0x11febcd1 */
  if (C.zf) goto L_11febcd1;
  /* 11febccd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11febcce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11febccf:;
  /* 11febccf not ecx */
  ECX = (~(ECX));
L_11febcd1:;
  /* 11febcd1 mov eax, ecx */
  EAX = (ECX);
  /* 11febcd3 pop ebx */
  EBX = (pop32());
  /* 11febcd4 pop esi */
  ESI = (pop32());
  /* 11febcd5 pop edi */
  EDI = (pop32());
  /* 11febcd6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11febcd7 ret  */
  ESPCHK(0x11febca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bce0 @ 0x11febce0 (58 bytes, 32 insns) */
void f_11febce0(void) {
  FTRACE(0x11febce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11febce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11febce1 mov ebp, esp */
  EBP = (ESP);
  /* 11febce3 push esi */
  push32((uint32_t)(ESI));
  /* 11febce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febce6 push eax */
  push32((uint32_t)(EAX));
  /* 11febce7 push eax */
  push32((uint32_t)(EAX));
  /* 11febce8 push eax */
  push32((uint32_t)(EAX));
  /* 11febce9 push eax */
  push32((uint32_t)(EAX));
  /* 11febcea push eax */
  push32((uint32_t)(EAX));
  /* 11febceb push eax */
  push32((uint32_t)(EAX));
  /* 11febcec push eax */
  push32((uint32_t)(EAX));
  /* 11febced push eax */
  push32((uint32_t)(EAX));
  /* 11febcee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11febcf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11febcf4:;
  /* 11febcf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11febcf6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11febcf8 je 0x11febd01 */
  if (C.zf) goto L_11febd01;
  /* 11febcfa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11febcfb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11febcfb");
  /* 11febcff jmp 0x11febcf4 */
  goto L_11febcf4;
L_11febd01:;
  /* 11febd01 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11febd04:;
  /* 11febd04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11febd06 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11febd08 je 0x11febd14 */
  if (C.zf) goto L_11febd14;
  /* 11febd0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11febd0b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11febd0b");
  /* 11febd0f jae 0x11febd04 */
  if (!C.cf) goto L_11febd04;
  /* 11febd11 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11febd14:;
  /* 11febd14 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febd17 pop esi */
  ESI = (pop32());
  /* 11febd18 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11febd19 ret  */
  ESPCHK(0x11febce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bd20 @ 0x11febd20 (512 bytes, 147 insns) */
void f_11febd20(void) {
  FTRACE(0x11febd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11febd20 push ebp */
  push32((uint32_t)(EBP));
  /* 11febd21 mov ebp, esp */
  EBP = (ESP);
  /* 11febd23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11febd26 cmp dword ptr [0x1200f278], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febd2d jne 0x11febd52 */
  if (!C.zf) goto L_11febd52;
  /* 11febd2f call 0x11fec7f0 */
  push32(0x11febd34u); f_11fec7f0();
  /* 11febd34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11febd36 je 0x11febd42 */
  if (C.zf) goto L_11febd42;
  /* 11febd38 mov eax, dword ptr [0x12011344] */
  EAX = (r32((uint32_t)(0x12011344)));
  /* 11febd3d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11febd40 jmp 0x11febd49 */
  goto L_11febd49;
L_11febd42:;
  /* 11febd42 mov dword ptr [ebp - 8], 0x11fec840 */
  w32((uint32_t)(EBP + -0x8), (0x11fec840u));
L_11febd49:;
  /* 11febd49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11febd4c mov dword ptr [0x1200f278], ecx */
  w32((uint32_t)(0x1200f278), (ECX));
L_11febd52:;
  /* 11febd52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febd56 jne 0x11febd62 */
  if (!C.zf) goto L_11febd62;
  /* 11febd58 call 0x11fec640 */
  push32(0x11febd5du); f_11fec640();
  /* 11febd5d jmp 0x11febe2e */
  goto L_11febe2e;
L_11febd62:;
  /* 11febd62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11febd65 mov dword ptr [0x1200f268], edx */
  w32((uint32_t)(0x1200f268), (EDX));
  /* 11febd6b cmp dword ptr [0x1200f268], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f268))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febd72 je 0x11febd94 */
  if (C.zf) goto L_11febd94;
  /* 11febd74 mov eax, dword ptr [0x1200f268] */
  EAX = (r32((uint32_t)(0x1200f268)));
  /* 11febd79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11febd7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11febd7e je 0x11febd94 */
  if (C.zf) goto L_11febd94;
  /* 11febd80 push 0x1200f268 */
  push32((uint32_t)(0x1200f268u));
  /* 11febd85 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11febd87 push 0x1200e0b0 */
  push32((uint32_t)(0x1200e0b0u));
  /* 11febd8c call 0x11febf20 */
  push32(0x11febd91u); f_11febf20();
  /* 11febd91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11febd94:;
  /* 11febd94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11febd97 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febd9a mov dword ptr [0x1200f26c], edx */
  w32((uint32_t)(0x1200f26c), (EDX));
  /* 11febda0 cmp dword ptr [0x1200f26c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f26c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febda7 je 0x11febdc9 */
  if (C.zf) goto L_11febdc9;
  /* 11febda9 mov eax, dword ptr [0x1200f26c] */
  EAX = (r32((uint32_t)(0x1200f26c)));
  /* 11febdae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11febdb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11febdb3 je 0x11febdc9 */
  if (C.zf) goto L_11febdc9;
  /* 11febdb5 push 0x1200f26c */
  push32((uint32_t)(0x1200f26cu));
  /* 11febdba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11febdbc push 0x1200dff8 */
  push32((uint32_t)(0x1200dff8u));
  /* 11febdc1 call 0x11febf20 */
  push32(0x11febdc6u); f_11febf20();
  /* 11febdc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11febdc9:;
  /* 11febdc9 mov dword ptr [0x1200f270], 0 */
  w32((uint32_t)(0x1200f270), (0x0u));
  /* 11febdd3 cmp dword ptr [0x1200f268], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f268))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febdda je 0x11febe0d */
  if (C.zf) goto L_11febe0d;
  /* 11febddc mov edx, dword ptr [0x1200f268] */
  EDX = (r32((uint32_t)(0x1200f268)));
  /* 11febde2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11febde5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11febde7 je 0x11febe0d */
  if (C.zf) goto L_11febe0d;
  /* 11febde9 cmp dword ptr [0x1200f26c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f26c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febdf0 je 0x11febe06 */
  if (C.zf) goto L_11febe06;
  /* 11febdf2 mov ecx, dword ptr [0x1200f26c] */
  ECX = (r32((uint32_t)(0x1200f26c)));
  /* 11febdf8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11febdfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11febdfd je 0x11febe06 */
  if (C.zf) goto L_11febe06;
  /* 11febdff call 0x11febfb0 */
  push32(0x11febe04u); f_11febfb0();
  /* 11febe04 jmp 0x11febe0b */
  goto L_11febe0b;
L_11febe06:;
  /* 11febe06 call 0x11fec3a0 */
  push32(0x11febe0bu); f_11fec3a0();
L_11febe0b:;
  /* 11febe0b jmp 0x11febe2e */
  goto L_11febe2e;
L_11febe0d:;
  /* 11febe0d cmp dword ptr [0x1200f26c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f26c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febe14 je 0x11febe29 */
  if (C.zf) goto L_11febe29;
  /* 11febe16 mov eax, dword ptr [0x1200f26c] */
  EAX = (r32((uint32_t)(0x1200f26c)));
  /* 11febe1b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11febe1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11febe20 je 0x11febe29 */
  if (C.zf) goto L_11febe29;
  /* 11febe22 call 0x11fec540 */
  push32(0x11febe27u); f_11fec540();
  /* 11febe27 jmp 0x11febe2e */
  goto L_11febe2e;
L_11febe29:;
  /* 11febe29 call 0x11fec640 */
  push32(0x11febe2eu); f_11fec640();
L_11febe2e:;
  /* 11febe2e cmp dword ptr [0x1200f270], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f270))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febe35 jne 0x11febe3e */
  if (!C.zf) goto L_11febe3e;
  /* 11febe37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febe39 jmp 0x11febf1c */
  goto L_11febf1c;
L_11febe3e:;
  /* 11febe3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11febe41 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febe47 push edx */
  push32((uint32_t)(EDX));
  /* 11febe48 call 0x11fec670 */
  push32(0x11febe4du); f_11fec670();
  /* 11febe4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febe50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11febe53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febe57 je 0x11febe6c */
  if (C.zf) goto L_11febe6c;
  /* 11febe59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11febe5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11febe61 push eax */
  push32((uint32_t)(EAX));
  /* 11febe62 call dword ptr [0x12011354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011354))), 0x11febe68u);
  /* 11febe68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11febe6a jne 0x11febe73 */
  if (!C.zf) goto L_11febe73;
L_11febe6c:;
  /* 11febe6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febe6e jmp 0x11febf1c */
  goto L_11febf1c;
L_11febe73:;
  /* 11febe73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11febe75 mov ecx, dword ptr [0x1200f258] */
  ECX = (r32((uint32_t)(0x1200f258)));
  /* 11febe7b push ecx */
  push32((uint32_t)(ECX));
  /* 11febe7c call dword ptr [0x1201134c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201134c))), 0x11febe82u);
  /* 11febe82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11febe84 jne 0x11febe8d */
  if (!C.zf) goto L_11febe8d;
  /* 11febe86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febe88 jmp 0x11febf1c */
  goto L_11febf1c;
L_11febe8d:;
  /* 11febe8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febe91 je 0x11febeb8 */
  if (C.zf) goto L_11febeb8;
  /* 11febe93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11febe96 mov ax, word ptr [0x1200f258] */
  AX = (r16((uint32_t)(0x1200f258)));
  /* 11febe9c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11febe9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11febea2 mov dx, word ptr [0x1200f274] */
  DX = (r16((uint32_t)(0x1200f274)));
  /* 11febea9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11febead mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11febeb0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11febeb4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11febeb8:;
  /* 11febeb8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febebc je 0x11febf17 */
  if (C.zf) goto L_11febf17;
  /* 11febebe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11febec0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11febec3 push edx */
  push32((uint32_t)(EDX));
  /* 11febec4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11febec9 mov eax, dword ptr [0x1200f258] */
  EAX = (r32((uint32_t)(0x1200f258)));
  /* 11febece push eax */
  push32((uint32_t)(EAX));
  /* 11febecf call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11febed5u);
  /* 11febed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11febed7 jne 0x11febedd */
  if (!C.zf) goto L_11febedd;
  /* 11febed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febedb jmp 0x11febf1c */
  goto L_11febf1c;
L_11febedd:;
  /* 11febedd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11febedf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11febee2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febee5 push ecx */
  push32((uint32_t)(ECX));
  /* 11febee6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11febeeb mov edx, dword ptr [0x1200f274] */
  EDX = (r32((uint32_t)(0x1200f274)));
  /* 11febef1 push edx */
  push32((uint32_t)(EDX));
  /* 11febef2 call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11febef8u);
  /* 11febef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11febefa jne 0x11febf00 */
  if (!C.zf) goto L_11febf00;
  /* 11febefc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11febefe jmp 0x11febf1c */
  goto L_11febf1c;
L_11febf00:;
  /* 11febf00 push 0xa */
  push32((uint32_t)(0xau));
  /* 11febf02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11febf05 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febf0a push eax */
  push32((uint32_t)(EAX));
  /* 11febf0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11febf0e push ecx */
  push32((uint32_t)(ECX));
  /* 11febf0f call 0x11fdf460 */
  push32(0x11febf14u); f_11fdf460();
  /* 11febf14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11febf17:;
  /* 11febf17 mov eax, 1 */
  EAX = (0x1u);
L_11febf1c:;
  /* 11febf1c mov esp, ebp */
  ESP = (EBP);
  /* 11febf1e pop ebp */
  EBP = (pop32());
  /* 11febf1f ret  */
  ESPCHK(0x11febd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bf20 @ 0x11febf20 (130 bytes, 47 insns) */
void f_11febf20(void) {
  FTRACE(0x11febf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11febf20 push ebp */
  push32((uint32_t)(EBP));
  /* 11febf21 mov ebp, esp */
  EBP = (ESP);
  /* 11febf23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11febf26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11febf2d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11febf34:;
  /* 11febf34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11febf37 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febf3a jg 0x11febf9e */
  if ((!C.zf&&C.sf==C.of)) goto L_11febf9e;
  /* 11febf3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febf40 je 0x11febf9e */
  if (C.zf) goto L_11febf9e;
  /* 11febf42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11febf45 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febf48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11febf49 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11febf4b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11febf4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11febf50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11febf53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11febf56 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11febf59 push eax */
  push32((uint32_t)(EAX));
  /* 11febf5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11febf5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11febf5f push edx */
  push32((uint32_t)(EDX));
  /* 11febf60 call 0x11fef3f0 */
  push32(0x11febf65u); f_11fef3f0();
  /* 11febf65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febf68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11febf6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febf6f jne 0x11febf82 */
  if (!C.zf) goto L_11febf82;
  /* 11febf71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11febf74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11febf77 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11febf7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11febf7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11febf80 jmp 0x11febf9c */
  goto L_11febf9c;
L_11febf82:;
  /* 11febf82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febf86 jge 0x11febf93 */
  if ((C.sf==C.of)) goto L_11febf93;
  /* 11febf88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11febf8b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11febf8e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11febf91 jmp 0x11febf9c */
  goto L_11febf9c;
L_11febf93:;
  /* 11febf93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11febf96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11febf99 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11febf9c:;
  /* 11febf9c jmp 0x11febf34 */
  goto L_11febf34;
L_11febf9e:;
  /* 11febf9e mov esp, ebp */
  ESP = (EBP);
  /* 11febfa0 pop ebp */
  EBP = (pop32());
  /* 11febfa1 ret  */
  ESPCHK(0x11febf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bfb0 @ 0x11febfb0 (186 bytes, 50 insns) */
void f_11febfb0(void) {
  FTRACE(0x11febfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11febfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11febfb1 mov ebp, esp */
  EBP = (ESP);
  /* 11febfb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11febfb4 mov eax, dword ptr [0x1200f268] */
  EAX = (r32((uint32_t)(0x1200f268)));
  /* 11febfb9 push eax */
  push32((uint32_t)(EAX));
  /* 11febfba call 0x11fdf750 */
  push32(0x11febfbfu); f_11fdf750();
  /* 11febfbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febfc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11febfc4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febfc7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11febfca mov dword ptr [0x1200f264], ecx */
  w32((uint32_t)(0x1200f264), (ECX));
  /* 11febfd0 mov edx, dword ptr [0x1200f26c] */
  EDX = (r32((uint32_t)(0x1200f26c)));
  /* 11febfd6 push edx */
  push32((uint32_t)(EDX));
  /* 11febfd7 call 0x11fdf750 */
  push32(0x11febfdcu); f_11fdf750();
  /* 11febfdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11febfdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11febfe1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febfe4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11febfe7 mov dword ptr [0x1200f25c], ecx */
  w32((uint32_t)(0x1200f25c), (ECX));
  /* 11febfed mov dword ptr [0x1200f258], 0 */
  w32((uint32_t)(0x1200f258), (0x0u));
  /* 11febff7 cmp dword ptr [0x1200f264], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f264))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11febffe je 0x11fec009 */
  if (C.zf) goto L_11fec009;
  /* 11fec000 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11fec007 jmp 0x11fec01b */
  goto L_11fec01b;
L_11fec009:;
  /* 11fec009 mov edx, dword ptr [0x1200f268] */
  EDX = (r32((uint32_t)(0x1200f268)));
  /* 11fec00f push edx */
  push32((uint32_t)(EDX));
  /* 11fec010 call 0x11feca50 */
  push32(0x11fec015u); f_11feca50();
  /* 11fec015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec018 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fec01b:;
  /* 11fec01b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fec01e mov dword ptr [0x1200f260], eax */
  w32((uint32_t)(0x1200f260), (EAX));
  /* 11fec023 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fec025 push 0x11fec070 */
  push32((uint32_t)(0x11fec070u));
  /* 11fec02a call dword ptr [0x12011340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011340))), 0x11fec030u);
  /* 11fec030 mov ecx, dword ptr [0x1200f270] */
  ECX = (r32((uint32_t)(0x1200f270)));
  /* 11fec036 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11fec03c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fec03e je 0x11fec05c */
  if (C.zf) goto L_11fec05c;
  /* 11fec040 mov edx, dword ptr [0x1200f270] */
  EDX = (r32((uint32_t)(0x1200f270)));
  /* 11fec046 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11fec04c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fec04e je 0x11fec05c */
  if (C.zf) goto L_11fec05c;
  /* 11fec050 mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec055 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11fec058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec05a jne 0x11fec066 */
  if (!C.zf) goto L_11fec066;
L_11fec05c:;
  /* 11fec05c mov dword ptr [0x1200f270], 0 */
  w32((uint32_t)(0x1200f270), (0x0u));
L_11fec066:;
  /* 11fec066 mov esp, ebp */
  ESP = (EBP);
  /* 11fec068 pop ebp */
  EBP = (pop32());
  /* 11fec069 ret  */
  ESPCHK(0x11febfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c070 @ 0x11fec070 (804 bytes, 220 insns) */
void f_11fec070(void) {
  FTRACE(0x11fec070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec070 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec071 mov ebp, esp */
  EBP = (ESP);
  /* 11fec073 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec079 push eax */
  push32((uint32_t)(EAX));
  /* 11fec07a call 0x11fec9d0 */
  push32(0x11fec07fu); f_11fec9d0();
  /* 11fec07f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec082 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11fec085 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fec087 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fec08a push ecx */
  push32((uint32_t)(ECX));
  /* 11fec08b mov edx, dword ptr [0x1200f25c] */
  EDX = (r32((uint32_t)(0x1200f25c)));
  /* 11fec091 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fec093 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec095 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11fec09b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec0a1 push edx */
  push32((uint32_t)(EDX));
  /* 11fec0a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec0a5 push eax */
  push32((uint32_t)(EAX));
  /* 11fec0a6 call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11fec0acu);
  /* 11fec0ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec0ae jne 0x11fec0c4 */
  if (!C.zf) goto L_11fec0c4;
  /* 11fec0b0 mov dword ptr [0x1200f270], 0 */
  w32((uint32_t)(0x1200f270), (0x0u));
  /* 11fec0ba mov eax, 1 */
  EAX = (0x1u);
  /* 11fec0bf jmp 0x11fec38e */
  goto L_11fec38e;
L_11fec0c4:;
  /* 11fec0c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fec0c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec0c8 mov edx, dword ptr [0x1200f26c] */
  EDX = (r32((uint32_t)(0x1200f26c)));
  /* 11fec0ce push edx */
  push32((uint32_t)(EDX));
  /* 11fec0cf call 0x11fef3f0 */
  push32(0x11fec0d4u); f_11fef3f0();
  /* 11fec0d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec0d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec0d9 jne 0x11fec1ff */
  if (!C.zf) goto L_11fec1ff;
  /* 11fec0df push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fec0e1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fec0e4 push eax */
  push32((uint32_t)(EAX));
  /* 11fec0e5 mov ecx, dword ptr [0x1200f264] */
  ECX = (r32((uint32_t)(0x1200f264)));
  /* 11fec0eb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fec0ed sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec0ef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11fec0f5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec0fb push ecx */
  push32((uint32_t)(ECX));
  /* 11fec0fc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec0ff push edx */
  push32((uint32_t)(EDX));
  /* 11fec100 call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11fec106u);
  /* 11fec106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec108 jne 0x11fec11e */
  if (!C.zf) goto L_11fec11e;
  /* 11fec10a mov dword ptr [0x1200f270], 0 */
  w32((uint32_t)(0x1200f270), (0x0u));
  /* 11fec114 mov eax, 1 */
  EAX = (0x1u);
  /* 11fec119 jmp 0x11fec38e */
  goto L_11fec38e;
L_11fec11e:;
  /* 11fec11e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fec121 push eax */
  push32((uint32_t)(EAX));
  /* 11fec122 mov ecx, dword ptr [0x1200f268] */
  ECX = (r32((uint32_t)(0x1200f268)));
  /* 11fec128 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec129 call 0x11fef3f0 */
  push32(0x11fec12eu); f_11fef3f0();
  /* 11fec12e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec133 jne 0x11fec160 */
  if (!C.zf) goto L_11fec160;
  /* 11fec135 mov edx, dword ptr [0x1200f270] */
  EDX = (r32((uint32_t)(0x1200f270)));
  /* 11fec13b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11fec141 mov dword ptr [0x1200f270], edx */
  w32((uint32_t)(0x1200f270), (EDX));
  /* 11fec147 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec14a mov dword ptr [0x1200f274], eax */
  w32((uint32_t)(0x1200f274), (EAX));
  /* 11fec14f mov ecx, dword ptr [0x1200f274] */
  ECX = (r32((uint32_t)(0x1200f274)));
  /* 11fec155 mov dword ptr [0x1200f258], ecx */
  w32((uint32_t)(0x1200f258), (ECX));
  /* 11fec15b jmp 0x11fec1ff */
  goto L_11fec1ff;
L_11fec160:;
  /* 11fec160 mov edx, dword ptr [0x1200f270] */
  EDX = (r32((uint32_t)(0x1200f270)));
  /* 11fec166 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11fec169 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fec16b jne 0x11fec1ff */
  if (!C.zf) goto L_11fec1ff;
  /* 11fec171 cmp dword ptr [0x1200f260], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec178 je 0x11fec1cd */
  if (C.zf) goto L_11fec1cd;
  /* 11fec17a mov eax, dword ptr [0x1200f260] */
  EAX = (r32((uint32_t)(0x1200f260)));
  /* 11fec17f push eax */
  push32((uint32_t)(EAX));
  /* 11fec180 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fec183 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec184 mov edx, dword ptr [0x1200f268] */
  EDX = (r32((uint32_t)(0x1200f268)));
  /* 11fec18a push edx */
  push32((uint32_t)(EDX));
  /* 11fec18b call 0x11fef4c0 */
  push32(0x11fec190u); f_11fef4c0();
  /* 11fec190 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec193 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec195 jne 0x11fec1cd */
  if (!C.zf) goto L_11fec1cd;
  /* 11fec197 mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec19c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11fec19e mov dword ptr [0x1200f270], eax */
  w32((uint32_t)(0x1200f270), (EAX));
  /* 11fec1a3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec1a6 mov dword ptr [0x1200f274], ecx */
  w32((uint32_t)(0x1200f274), (ECX));
  /* 11fec1ac mov edx, dword ptr [0x1200f268] */
  EDX = (r32((uint32_t)(0x1200f268)));
  /* 11fec1b2 push edx */
  push32((uint32_t)(EDX));
  /* 11fec1b3 call 0x11fdf750 */
  push32(0x11fec1b8u); f_11fdf750();
  /* 11fec1b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec1bb cmp eax, dword ptr [0x1200f260] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200f260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec1c1 jne 0x11fec1cb */
  if (!C.zf) goto L_11fec1cb;
  /* 11fec1c3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec1c6 mov dword ptr [0x1200f258], eax */
  w32((uint32_t)(0x1200f258), (EAX));
L_11fec1cb:;
  /* 11fec1cb jmp 0x11fec1ff */
  goto L_11fec1ff;
L_11fec1cd:;
  /* 11fec1cd mov ecx, dword ptr [0x1200f270] */
  ECX = (r32((uint32_t)(0x1200f270)));
  /* 11fec1d3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fec1d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fec1d8 jne 0x11fec1ff */
  if (!C.zf) goto L_11fec1ff;
  /* 11fec1da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec1dd push edx */
  push32((uint32_t)(EDX));
  /* 11fec1de call 0x11fec710 */
  push32(0x11fec1e3u); f_11fec710();
  /* 11fec1e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec1e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec1e8 je 0x11fec1ff */
  if (C.zf) goto L_11fec1ff;
  /* 11fec1ea mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec1ef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11fec1f1 mov dword ptr [0x1200f270], eax */
  w32((uint32_t)(0x1200f270), (EAX));
  /* 11fec1f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec1f9 mov dword ptr [0x1200f274], ecx */
  w32((uint32_t)(0x1200f274), (ECX));
L_11fec1ff:;
  /* 11fec1ff mov edx, dword ptr [0x1200f270] */
  EDX = (r32((uint32_t)(0x1200f270)));
  /* 11fec205 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11fec20b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec211 je 0x11fec381 */
  if (C.zf) goto L_11fec381;
  /* 11fec217 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fec219 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fec21c push eax */
  push32((uint32_t)(EAX));
  /* 11fec21d mov ecx, dword ptr [0x1200f264] */
  ECX = (r32((uint32_t)(0x1200f264)));
  /* 11fec223 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fec225 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec227 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11fec22d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec233 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec234 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec237 push edx */
  push32((uint32_t)(EDX));
  /* 11fec238 call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11fec23eu);
  /* 11fec23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec240 jne 0x11fec256 */
  if (!C.zf) goto L_11fec256;
  /* 11fec242 mov dword ptr [0x1200f270], 0 */
  w32((uint32_t)(0x1200f270), (0x0u));
  /* 11fec24c mov eax, 1 */
  EAX = (0x1u);
  /* 11fec251 jmp 0x11fec38e */
  goto L_11fec38e;
L_11fec256:;
  /* 11fec256 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fec259 push eax */
  push32((uint32_t)(EAX));
  /* 11fec25a mov ecx, dword ptr [0x1200f268] */
  ECX = (r32((uint32_t)(0x1200f268)));
  /* 11fec260 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec261 call 0x11fef3f0 */
  push32(0x11fec266u); f_11fef3f0();
  /* 11fec266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec26b jne 0x11fec320 */
  if (!C.zf) goto L_11fec320;
  /* 11fec271 mov edx, dword ptr [0x1200f270] */
  EDX = (r32((uint32_t)(0x1200f270)));
  /* 11fec277 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11fec27a mov dword ptr [0x1200f270], edx */
  w32((uint32_t)(0x1200f270), (EDX));
  /* 11fec280 cmp dword ptr [0x1200f264], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f264))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec287 je 0x11fec2aa */
  if (C.zf) goto L_11fec2aa;
  /* 11fec289 mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec28e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11fec291 mov dword ptr [0x1200f270], eax */
  w32((uint32_t)(0x1200f270), (EAX));
  /* 11fec296 cmp dword ptr [0x1200f258], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f258))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec29d jne 0x11fec2a8 */
  if (!C.zf) goto L_11fec2a8;
  /* 11fec29f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec2a2 mov dword ptr [0x1200f258], ecx */
  w32((uint32_t)(0x1200f258), (ECX));
L_11fec2a8:;
  /* 11fec2a8 jmp 0x11fec31e */
  goto L_11fec31e;
L_11fec2aa:;
  /* 11fec2aa cmp dword ptr [0x1200f260], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec2b1 je 0x11fec2ff */
  if (C.zf) goto L_11fec2ff;
  /* 11fec2b3 mov edx, dword ptr [0x1200f268] */
  EDX = (r32((uint32_t)(0x1200f268)));
  /* 11fec2b9 push edx */
  push32((uint32_t)(EDX));
  /* 11fec2ba call 0x11fdf750 */
  push32(0x11fec2bfu); f_11fdf750();
  /* 11fec2bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec2c2 cmp eax, dword ptr [0x1200f260] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1200f260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec2c8 jne 0x11fec2ff */
  if (!C.zf) goto L_11fec2ff;
  /* 11fec2ca push 1 */
  push32((uint32_t)(0x1u));
  /* 11fec2cc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec2cf push eax */
  push32((uint32_t)(EAX));
  /* 11fec2d0 call 0x11fec760 */
  push32(0x11fec2d5u); f_11fec760();
  /* 11fec2d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec2d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec2da je 0x11fec2fd */
  if (C.zf) goto L_11fec2fd;
  /* 11fec2dc mov ecx, dword ptr [0x1200f270] */
  ECX = (r32((uint32_t)(0x1200f270)));
  /* 11fec2e2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11fec2e5 mov dword ptr [0x1200f270], ecx */
  w32((uint32_t)(0x1200f270), (ECX));
  /* 11fec2eb cmp dword ptr [0x1200f258], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f258))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec2f2 jne 0x11fec2fd */
  if (!C.zf) goto L_11fec2fd;
  /* 11fec2f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec2f7 mov dword ptr [0x1200f258], edx */
  w32((uint32_t)(0x1200f258), (EDX));
L_11fec2fd:;
  /* 11fec2fd jmp 0x11fec31e */
  goto L_11fec31e;
L_11fec2ff:;
  /* 11fec2ff mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec304 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11fec307 mov dword ptr [0x1200f270], eax */
  w32((uint32_t)(0x1200f270), (EAX));
  /* 11fec30c cmp dword ptr [0x1200f258], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f258))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec313 jne 0x11fec31e */
  if (!C.zf) goto L_11fec31e;
  /* 11fec315 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec318 mov dword ptr [0x1200f258], ecx */
  w32((uint32_t)(0x1200f258), (ECX));
L_11fec31e:;
  /* 11fec31e jmp 0x11fec381 */
  goto L_11fec381;
L_11fec320:;
  /* 11fec320 cmp dword ptr [0x1200f264], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f264))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec327 jne 0x11fec381 */
  if (!C.zf) goto L_11fec381;
  /* 11fec329 cmp dword ptr [0x1200f260], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec330 je 0x11fec381 */
  if (C.zf) goto L_11fec381;
  /* 11fec332 mov edx, dword ptr [0x1200f260] */
  EDX = (r32((uint32_t)(0x1200f260)));
  /* 11fec338 push edx */
  push32((uint32_t)(EDX));
  /* 11fec339 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11fec33c push eax */
  push32((uint32_t)(EAX));
  /* 11fec33d mov ecx, dword ptr [0x1200f268] */
  ECX = (r32((uint32_t)(0x1200f268)));
  /* 11fec343 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec344 call 0x11fef4c0 */
  push32(0x11fec349u); f_11fef4c0();
  /* 11fec349 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec34c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec34e jne 0x11fec381 */
  if (!C.zf) goto L_11fec381;
  /* 11fec350 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fec352 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec355 push edx */
  push32((uint32_t)(EDX));
  /* 11fec356 call 0x11fec760 */
  push32(0x11fec35bu); f_11fec760();
  /* 11fec35b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec35e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec360 je 0x11fec381 */
  if (C.zf) goto L_11fec381;
  /* 11fec362 mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec367 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11fec36a mov dword ptr [0x1200f270], eax */
  w32((uint32_t)(0x1200f270), (EAX));
  /* 11fec36f cmp dword ptr [0x1200f258], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f258))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec376 jne 0x11fec381 */
  if (!C.zf) goto L_11fec381;
  /* 11fec378 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec37b mov dword ptr [0x1200f258], ecx */
  w32((uint32_t)(0x1200f258), (ECX));
L_11fec381:;
  /* 11fec381 mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec386 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fec389 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fec38b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec38d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11fec38e:;
  /* 11fec38e mov esp, ebp */
  ESP = (EBP);
  /* 11fec390 pop ebp */
  EBP = (pop32());
  /* 11fec391 ret 4 */
  ESPCHK(0x11fec070u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c3a0 @ 0x11fec3a0 (116 bytes, 33 insns) */
void f_11fec3a0(void) {
  FTRACE(0x11fec3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec3a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fec3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec3a4 mov eax, dword ptr [0x1200f268] */
  EAX = (r32((uint32_t)(0x1200f268)));
  /* 11fec3a9 push eax */
  push32((uint32_t)(EAX));
  /* 11fec3aa call 0x11fdf750 */
  push32(0x11fec3afu); f_11fdf750();
  /* 11fec3af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec3b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fec3b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec3b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11fec3ba mov dword ptr [0x1200f264], ecx */
  w32((uint32_t)(0x1200f264), (ECX));
  /* 11fec3c0 cmp dword ptr [0x1200f264], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f264))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec3c7 je 0x11fec3d2 */
  if (C.zf) goto L_11fec3d2;
  /* 11fec3c9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11fec3d0 jmp 0x11fec3e4 */
  goto L_11fec3e4;
L_11fec3d2:;
  /* 11fec3d2 mov edx, dword ptr [0x1200f268] */
  EDX = (r32((uint32_t)(0x1200f268)));
  /* 11fec3d8 push edx */
  push32((uint32_t)(EDX));
  /* 11fec3d9 call 0x11feca50 */
  push32(0x11fec3deu); f_11feca50();
  /* 11fec3de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec3e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fec3e4:;
  /* 11fec3e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fec3e7 mov dword ptr [0x1200f260], eax */
  w32((uint32_t)(0x1200f260), (EAX));
  /* 11fec3ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11fec3ee push 0x11fec420 */
  push32((uint32_t)(0x11fec420u));
  /* 11fec3f3 call dword ptr [0x12011340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011340))), 0x11fec3f9u);
  /* 11fec3f9 mov ecx, dword ptr [0x1200f270] */
  ECX = (r32((uint32_t)(0x1200f270)));
  /* 11fec3ff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fec402 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fec404 jne 0x11fec410 */
  if (!C.zf) goto L_11fec410;
  /* 11fec406 mov dword ptr [0x1200f270], 0 */
  w32((uint32_t)(0x1200f270), (0x0u));
L_11fec410:;
  /* 11fec410 mov esp, ebp */
  ESP = (EBP);
  /* 11fec412 pop ebp */
  EBP = (pop32());
  /* 11fec413 ret  */
  ESPCHK(0x11fec3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c420 @ 0x11fec420 (287 bytes, 86 insns) */
void f_11fec420(void) {
  FTRACE(0x11fec420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec420 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec421 mov ebp, esp */
  EBP = (ESP);
  /* 11fec423 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec429 push eax */
  push32((uint32_t)(EAX));
  /* 11fec42a call 0x11fec9d0 */
  push32(0x11fec42fu); f_11fec9d0();
  /* 11fec42f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec432 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11fec435 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fec437 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fec43a push ecx */
  push32((uint32_t)(ECX));
  /* 11fec43b mov edx, dword ptr [0x1200f264] */
  EDX = (r32((uint32_t)(0x1200f264)));
  /* 11fec441 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fec443 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec445 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11fec44b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec451 push edx */
  push32((uint32_t)(EDX));
  /* 11fec452 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec455 push eax */
  push32((uint32_t)(EAX));
  /* 11fec456 call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11fec45cu);
  /* 11fec45c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec45e jne 0x11fec474 */
  if (!C.zf) goto L_11fec474;
  /* 11fec460 mov dword ptr [0x1200f270], 0 */
  w32((uint32_t)(0x1200f270), (0x0u));
  /* 11fec46a mov eax, 1 */
  EAX = (0x1u);
  /* 11fec46f jmp 0x11fec539 */
  goto L_11fec539;
L_11fec474:;
  /* 11fec474 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fec477 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec478 mov edx, dword ptr [0x1200f268] */
  EDX = (r32((uint32_t)(0x1200f268)));
  /* 11fec47e push edx */
  push32((uint32_t)(EDX));
  /* 11fec47f call 0x11fef3f0 */
  push32(0x11fec484u); f_11fef3f0();
  /* 11fec484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec489 jne 0x11fec4c9 */
  if (!C.zf) goto L_11fec4c9;
  /* 11fec48b cmp dword ptr [0x1200f264], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f264))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec492 jne 0x11fec4a6 */
  if (!C.zf) goto L_11fec4a6;
  /* 11fec494 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fec496 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec499 push eax */
  push32((uint32_t)(EAX));
  /* 11fec49a call 0x11fec760 */
  push32(0x11fec49fu); f_11fec760();
  /* 11fec49f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec4a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec4a4 je 0x11fec4c7 */
  if (C.zf) goto L_11fec4c7;
L_11fec4a6:;
  /* 11fec4a6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec4a9 mov dword ptr [0x1200f274], ecx */
  w32((uint32_t)(0x1200f274), (ECX));
  /* 11fec4af mov edx, dword ptr [0x1200f274] */
  EDX = (r32((uint32_t)(0x1200f274)));
  /* 11fec4b5 mov dword ptr [0x1200f258], edx */
  w32((uint32_t)(0x1200f258), (EDX));
  /* 11fec4bb mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec4c0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11fec4c2 mov dword ptr [0x1200f270], eax */
  w32((uint32_t)(0x1200f270), (EAX));
L_11fec4c7:;
  /* 11fec4c7 jmp 0x11fec52c */
  goto L_11fec52c;
L_11fec4c9:;
  /* 11fec4c9 cmp dword ptr [0x1200f264], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f264))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec4d0 jne 0x11fec52c */
  if (!C.zf) goto L_11fec52c;
  /* 11fec4d2 cmp dword ptr [0x1200f260], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1200f260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec4d9 je 0x11fec52c */
  if (C.zf) goto L_11fec52c;
  /* 11fec4db mov ecx, dword ptr [0x1200f260] */
  ECX = (r32((uint32_t)(0x1200f260)));
  /* 11fec4e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec4e2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11fec4e5 push edx */
  push32((uint32_t)(EDX));
  /* 11fec4e6 mov eax, dword ptr [0x1200f268] */
  EAX = (r32((uint32_t)(0x1200f268)));
  /* 11fec4eb push eax */
  push32((uint32_t)(EAX));
  /* 11fec4ec call 0x11fef4c0 */
  push32(0x11fec4f1u); f_11fef4c0();
  /* 11fec4f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec4f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec4f6 jne 0x11fec52c */
  if (!C.zf) goto L_11fec52c;
  /* 11fec4f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fec4fa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec4fd push ecx */
  push32((uint32_t)(ECX));
  /* 11fec4fe call 0x11fec760 */
  push32(0x11fec503u); f_11fec760();
  /* 11fec503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec508 je 0x11fec52c */
  if (C.zf) goto L_11fec52c;
  /* 11fec50a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec50d mov dword ptr [0x1200f274], edx */
  w32((uint32_t)(0x1200f274), (EDX));
  /* 11fec513 mov eax, dword ptr [0x1200f274] */
  EAX = (r32((uint32_t)(0x1200f274)));
  /* 11fec518 mov dword ptr [0x1200f258], eax */
  w32((uint32_t)(0x1200f258), (EAX));
  /* 11fec51d mov ecx, dword ptr [0x1200f270] */
  ECX = (r32((uint32_t)(0x1200f270)));
  /* 11fec523 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11fec526 mov dword ptr [0x1200f270], ecx */
  w32((uint32_t)(0x1200f270), (ECX));
L_11fec52c:;
  /* 11fec52c mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec531 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fec534 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fec536 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec538 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11fec539:;
  /* 11fec539 mov esp, ebp */
  ESP = (EBP);
  /* 11fec53b pop ebp */
  EBP = (pop32());
  /* 11fec53c ret 4 */
  ESPCHK(0x11fec420u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c540 @ 0x11fec540 (69 bytes, 20 insns) */
void f_11fec540(void) {
  FTRACE(0x11fec540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec540 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec541 mov ebp, esp */
  EBP = (ESP);
  /* 11fec543 mov eax, dword ptr [0x1200f26c] */
  EAX = (r32((uint32_t)(0x1200f26c)));
  /* 11fec548 push eax */
  push32((uint32_t)(EAX));
  /* 11fec549 call 0x11fdf750 */
  push32(0x11fec54eu); f_11fdf750();
  /* 11fec54e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec551 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fec553 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec556 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11fec559 mov dword ptr [0x1200f25c], ecx */
  w32((uint32_t)(0x1200f25c), (ECX));
  /* 11fec55f push 1 */
  push32((uint32_t)(0x1u));
  /* 11fec561 push 0x11fec590 */
  push32((uint32_t)(0x11fec590u));
  /* 11fec566 call dword ptr [0x12011340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011340))), 0x11fec56cu);
  /* 11fec56c mov edx, dword ptr [0x1200f270] */
  EDX = (r32((uint32_t)(0x1200f270)));
  /* 11fec572 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11fec575 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fec577 jne 0x11fec583 */
  if (!C.zf) goto L_11fec583;
  /* 11fec579 mov dword ptr [0x1200f270], 0 */
  w32((uint32_t)(0x1200f270), (0x0u));
L_11fec583:;
  /* 11fec583 pop ebp */
  EBP = (pop32());
  /* 11fec584 ret  */
  ESPCHK(0x11fec540u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c590 @ 0x11fec590 (172 bytes, 54 insns) */
void f_11fec590(void) {
  FTRACE(0x11fec590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec590 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec591 mov ebp, esp */
  EBP = (ESP);
  /* 11fec593 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec599 push eax */
  push32((uint32_t)(EAX));
  /* 11fec59a call 0x11fec9d0 */
  push32(0x11fec59fu); f_11fec9d0();
  /* 11fec59f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec5a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11fec5a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fec5a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fec5aa push ecx */
  push32((uint32_t)(ECX));
  /* 11fec5ab mov edx, dword ptr [0x1200f25c] */
  EDX = (r32((uint32_t)(0x1200f25c)));
  /* 11fec5b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fec5b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec5b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11fec5bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec5c1 push edx */
  push32((uint32_t)(EDX));
  /* 11fec5c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec5c5 push eax */
  push32((uint32_t)(EAX));
  /* 11fec5c6 call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11fec5ccu);
  /* 11fec5cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec5ce jne 0x11fec5e1 */
  if (!C.zf) goto L_11fec5e1;
  /* 11fec5d0 mov dword ptr [0x1200f270], 0 */
  w32((uint32_t)(0x1200f270), (0x0u));
  /* 11fec5da mov eax, 1 */
  EAX = (0x1u);
  /* 11fec5df jmp 0x11fec636 */
  goto L_11fec636;
L_11fec5e1:;
  /* 11fec5e1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11fec5e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec5e5 mov edx, dword ptr [0x1200f26c] */
  EDX = (r32((uint32_t)(0x1200f26c)));
  /* 11fec5eb push edx */
  push32((uint32_t)(EDX));
  /* 11fec5ec call 0x11fef3f0 */
  push32(0x11fec5f1u); f_11fef3f0();
  /* 11fec5f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec5f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec5f6 jne 0x11fec629 */
  if (!C.zf) goto L_11fec629;
  /* 11fec5f8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec5fb push eax */
  push32((uint32_t)(EAX));
  /* 11fec5fc call 0x11fec710 */
  push32(0x11fec601u); f_11fec710();
  /* 11fec601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec606 je 0x11fec629 */
  if (C.zf) goto L_11fec629;
  /* 11fec608 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11fec60b mov dword ptr [0x1200f274], ecx */
  w32((uint32_t)(0x1200f274), (ECX));
  /* 11fec611 mov edx, dword ptr [0x1200f274] */
  EDX = (r32((uint32_t)(0x1200f274)));
  /* 11fec617 mov dword ptr [0x1200f258], edx */
  w32((uint32_t)(0x1200f258), (EDX));
  /* 11fec61d mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec622 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11fec624 mov dword ptr [0x1200f270], eax */
  w32((uint32_t)(0x1200f270), (EAX));
L_11fec629:;
  /* 11fec629 mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec62e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11fec631 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fec633 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec635 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11fec636:;
  /* 11fec636 mov esp, ebp */
  ESP = (EBP);
  /* 11fec638 pop ebp */
  EBP = (pop32());
  /* 11fec639 ret 4 */
  ESPCHK(0x11fec590u, _esp0);
  ESP += 8; return;
}

/* FUN_1001c640 @ 0x11fec640 (43 bytes, 11 insns) */
void f_11fec640(void) {
  FTRACE(0x11fec640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec640 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec641 mov ebp, esp */
  EBP = (ESP);
  /* 11fec643 mov eax, dword ptr [0x1200f270] */
  EAX = (r32((uint32_t)(0x1200f270)));
  /* 11fec648 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11fec64d mov dword ptr [0x1200f270], eax */
  w32((uint32_t)(0x1200f270), (EAX));
  /* 11fec652 call dword ptr [0x12011348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011348))), 0x11fec658u);
  /* 11fec658 mov dword ptr [0x1200f274], eax */
  w32((uint32_t)(0x1200f274), (EAX));
  /* 11fec65d mov ecx, dword ptr [0x1200f274] */
  ECX = (r32((uint32_t)(0x1200f274)));
  /* 11fec663 mov dword ptr [0x1200f258], ecx */
  w32((uint32_t)(0x1200f258), (ECX));
  /* 11fec669 pop ebp */
  EBP = (pop32());
  /* 11fec66a ret  */
  ESPCHK(0x11fec640u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c670 @ 0x11fec670 (155 bytes, 57 insns) */
void f_11fec670(void) {
  FTRACE(0x11fec670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec670 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec671 mov ebp, esp */
  EBP = (ESP);
  /* 11fec673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec676 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec67a je 0x11fec69b */
  if (C.zf) goto L_11fec69b;
  /* 11fec67c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec67f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11fec682 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fec684 je 0x11fec69b */
  if (C.zf) goto L_11fec69b;
  /* 11fec686 push 0x1200a9c8 */
  push32((uint32_t)(0x1200a9c8u));
  /* 11fec68b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec68e push edx */
  push32((uint32_t)(EDX));
  /* 11fec68f call 0x11fe3d60 */
  push32(0x11fec694u); f_11fe3d60();
  /* 11fec694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec699 jne 0x11fec6c3 */
  if (!C.zf) goto L_11fec6c3;
L_11fec69b:;
  /* 11fec69b push 8 */
  push32((uint32_t)(0x8u));
  /* 11fec69d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11fec6a0 push eax */
  push32((uint32_t)(EAX));
  /* 11fec6a1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11fec6a6 mov ecx, dword ptr [0x1200f274] */
  ECX = (r32((uint32_t)(0x1200f274)));
  /* 11fec6ac push ecx */
  push32((uint32_t)(ECX));
  /* 11fec6ad call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11fec6b3u);
  /* 11fec6b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec6b5 jne 0x11fec6bb */
  if (!C.zf) goto L_11fec6bb;
  /* 11fec6b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fec6b9 jmp 0x11fec707 */
  goto L_11fec707;
L_11fec6bb:;
  /* 11fec6bb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11fec6be mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11fec6c1 jmp 0x11fec6fb */
  goto L_11fec6fb;
L_11fec6c3:;
  /* 11fec6c3 push 0x1200a9c4 */
  push32((uint32_t)(0x1200a9c4u));
  /* 11fec6c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec6cb push eax */
  push32((uint32_t)(EAX));
  /* 11fec6cc call 0x11fe3d60 */
  push32(0x11fec6d1u); f_11fe3d60();
  /* 11fec6d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec6d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec6d6 jne 0x11fec6fb */
  if (!C.zf) goto L_11fec6fb;
  /* 11fec6d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11fec6da lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11fec6dd push ecx */
  push32((uint32_t)(ECX));
  /* 11fec6de push 0xb */
  push32((uint32_t)(0xbu));
  /* 11fec6e0 mov edx, dword ptr [0x1200f274] */
  EDX = (r32((uint32_t)(0x1200f274)));
  /* 11fec6e6 push edx */
  push32((uint32_t)(EDX));
  /* 11fec6e7 call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11fec6edu);
  /* 11fec6ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec6ef jne 0x11fec6f5 */
  if (!C.zf) goto L_11fec6f5;
  /* 11fec6f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fec6f3 jmp 0x11fec707 */
  goto L_11fec707;
L_11fec6f5:;
  /* 11fec6f5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11fec6f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11fec6fb:;
  /* 11fec6fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec6fe push ecx */
  push32((uint32_t)(ECX));
  /* 11fec6ff call 0x11fe98e0 */
  push32(0x11fec704u); f_11fe98e0();
  /* 11fec704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fec707:;
  /* 11fec707 mov esp, ebp */
  ESP = (EBP);
  /* 11fec709 pop ebp */
  EBP = (pop32());
  /* 11fec70a ret  */
  ESPCHK(0x11fec670u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c710 @ 0x11fec710 (79 bytes, 26 insns) */
void f_11fec710(void) {
  FTRACE(0x11fec710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec710 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec711 mov ebp, esp */
  EBP = (ESP);
  /* 11fec713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec716 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11fec71a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11fec71e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11fec725 jmp 0x11fec730 */
  goto L_11fec730;
L_11fec727:;
  /* 11fec727 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fec72a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec72d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fec730:;
  /* 11fec730 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec734 jae 0x11fec756 */
  if (!C.cf) goto L_11fec756;
  /* 11fec736 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fec739 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fec73f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fec742 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fec744 mov cx, word ptr [eax*2 + 0x1200dfe4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1200dfe4)));
  /* 11fec74c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec74e jne 0x11fec754 */
  if (!C.zf) goto L_11fec754;
  /* 11fec750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fec752 jmp 0x11fec75b */
  goto L_11fec75b;
L_11fec754:;
  /* 11fec754 jmp 0x11fec727 */
  goto L_11fec727;
L_11fec756:;
  /* 11fec756 mov eax, 1 */
  EAX = (0x1u);
L_11fec75b:;
  /* 11fec75b mov esp, ebp */
  ESP = (EBP);
  /* 11fec75d pop ebp */
  EBP = (pop32());
  /* 11fec75e ret  */
  ESPCHK(0x11fec710u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c760 @ 0x11fec760 (135 bytes, 48 insns) */
void f_11fec760(void) {
  FTRACE(0x11fec760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec760 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec761 mov ebp, esp */
  EBP = (ESP);
  /* 11fec763 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec766 push esi */
  push32((uint32_t)(ESI));
  /* 11fec767 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec76a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fec76f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fec774 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fec779 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11fec77c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fec781 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fec784 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11fec786 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11fec789 push ecx */
  push32((uint32_t)(ECX));
  /* 11fec78a push 1 */
  push32((uint32_t)(0x1u));
  /* 11fec78c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fec78f push edx */
  push32((uint32_t)(EDX));
  /* 11fec790 call dword ptr [0x1200f278] */
  call_ind((uint32_t)(r32((uint32_t)(0x1200f278))), 0x11fec796u);
  /* 11fec796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec798 jne 0x11fec79e */
  if (!C.zf) goto L_11fec79e;
  /* 11fec79a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fec79c jmp 0x11fec7e2 */
  goto L_11fec7e2;
L_11fec79e:;
  /* 11fec79e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11fec7a1 push eax */
  push32((uint32_t)(EAX));
  /* 11fec7a2 call 0x11fec9d0 */
  push32(0x11fec7a7u); f_11fec9d0();
  /* 11fec7a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec7aa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec7ad je 0x11fec7dd */
  if (C.zf) goto L_11fec7dd;
  /* 11fec7af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec7b3 je 0x11fec7dd */
  if (C.zf) goto L_11fec7dd;
  /* 11fec7b5 mov ecx, dword ptr [0x1200f268] */
  ECX = (r32((uint32_t)(0x1200f268)));
  /* 11fec7bb push ecx */
  push32((uint32_t)(ECX));
  /* 11fec7bc call 0x11feca50 */
  push32(0x11fec7c1u); f_11feca50();
  /* 11fec7c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec7c4 mov esi, eax */
  ESI = (EAX);
  /* 11fec7c6 mov edx, dword ptr [0x1200f268] */
  EDX = (r32((uint32_t)(0x1200f268)));
  /* 11fec7cc push edx */
  push32((uint32_t)(EDX));
  /* 11fec7cd call 0x11fdf750 */
  push32(0x11fec7d2u); f_11fdf750();
  /* 11fec7d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec7d5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec7d7 jne 0x11fec7dd */
  if (!C.zf) goto L_11fec7dd;
  /* 11fec7d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fec7db jmp 0x11fec7e2 */
  goto L_11fec7e2;
L_11fec7dd:;
  /* 11fec7dd mov eax, 1 */
  EAX = (0x1u);
L_11fec7e2:;
  /* 11fec7e2 pop esi */
  ESI = (pop32());
  /* 11fec7e3 mov esp, ebp */
  ESP = (EBP);
  /* 11fec7e5 pop ebp */
  EBP = (pop32());
  /* 11fec7e6 ret  */
  ESPCHK(0x11fec760u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c7f0 @ 0x11fec7f0 (77 bytes, 18 insns) */
void f_11fec7f0(void) {
  FTRACE(0x11fec7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec7f1 mov ebp, esp */
  EBP = (ESP);
  /* 11fec7f3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec7f9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11fec803 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11fec809 push eax */
  push32((uint32_t)(EAX));
  /* 11fec80a call dword ptr [0x12011338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011338))), 0x11fec810u);
  /* 11fec810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fec812 je 0x11fec829 */
  if (C.zf) goto L_11fec829;
  /* 11fec814 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec81b jne 0x11fec829 */
  if (!C.zf) goto L_11fec829;
  /* 11fec81d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11fec827 jmp 0x11fec833 */
  goto L_11fec833;
L_11fec829:;
  /* 11fec829 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11fec833:;
  /* 11fec833 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11fec839 mov esp, ebp */
  ESP = (EBP);
  /* 11fec83b pop ebp */
  EBP = (pop32());
  /* 11fec83c ret  */
  ESPCHK(0x11fec7f0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11fec840 (388 bytes, 118 insns) */
void f_11fec840(void) {
  FTRACE(0x11fec840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec840 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec841 mov ebp, esp */
  EBP = (ESP);
  /* 11fec843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec846 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fec84d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11fec854 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11fec85b:;
  /* 11fec85b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fec85e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec861 jg 0x11fec9a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fec9a8;
  /* 11fec867 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11fec86a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec86d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fec86e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec870 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11fec872 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fec875 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec878 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fec87b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec87e cmp edx, dword ptr [ecx + 0x1200db40] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1200db40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec884 jne 0x11fec97e */
  if (!C.zf) goto L_11fec97e;
  /* 11fec88a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fec88d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fec890 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec894 ja 0x11fec8b7 */
  if ((!C.cf&&!C.zf)) goto L_11fec8b7;
  /* 11fec896 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec89a je 0x11fec929 */
  if (C.zf) goto L_11fec929;
  /* 11fec8a0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec8a4 je 0x11fec8d4 */
  if (C.zf) goto L_11fec8d4;
  /* 11fec8a6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec8aa je 0x11fec8f6 */
  if (C.zf) goto L_11fec8f6;
  /* 11fec8ac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec8b0 je 0x11fec918 */
  if (C.zf) goto L_11fec918;
  /* 11fec8b2 jmp 0x11fec948 */
  goto L_11fec948;
L_11fec8b7:;
  /* 11fec8b7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec8be je 0x11fec8e5 */
  if (C.zf) goto L_11fec8e5;
  /* 11fec8c0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec8c7 je 0x11fec907 */
  if (C.zf) goto L_11fec907;
  /* 11fec8c9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec8d0 je 0x11fec93a */
  if (C.zf) goto L_11fec93a;
  /* 11fec8d2 jmp 0x11fec948 */
  goto L_11fec948;
L_11fec8d4:;
  /* 11fec8d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec8d7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fec8da add ecx, 0x1200db44 */
  { uint32_t _a=(ECX),_b=(0x1200db44u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec8e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fec8e3 jmp 0x11fec948 */
  goto L_11fec948;
L_11fec8e5:;
  /* 11fec8e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec8e8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fec8eb mov eax, dword ptr [edx + 0x1200db4c] */
  EAX = (r32((uint32_t)(EDX + 0x1200db4c)));
  /* 11fec8f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fec8f4 jmp 0x11fec948 */
  goto L_11fec948;
L_11fec8f6:;
  /* 11fec8f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec8f9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fec8fc add ecx, 0x1200db50 */
  { uint32_t _a=(ECX),_b=(0x1200db50u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec902 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fec905 jmp 0x11fec948 */
  goto L_11fec948;
L_11fec907:;
  /* 11fec907 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec90a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fec90d mov eax, dword ptr [edx + 0x1200db54] */
  EAX = (r32((uint32_t)(EDX + 0x1200db54)));
  /* 11fec913 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fec916 jmp 0x11fec948 */
  goto L_11fec948;
L_11fec918:;
  /* 11fec918 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec91b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fec91e add ecx, 0x1200db58 */
  { uint32_t _a=(ECX),_b=(0x1200db58u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec924 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fec927 jmp 0x11fec948 */
  goto L_11fec948;
L_11fec929:;
  /* 11fec929 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec92c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fec92f add edx, 0x1200db5c */
  { uint32_t _a=(EDX),_b=(0x1200db5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec935 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fec938 jmp 0x11fec948 */
  goto L_11fec948;
L_11fec93a:;
  /* 11fec93a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec93d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fec940 add eax, 0x1200db64 */
  { uint32_t _a=(EAX),_b=(0x1200db64u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec945 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fec948:;
  /* 11fec948 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec94c je 0x11fec954 */
  if (C.zf) goto L_11fec954;
  /* 11fec94e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec952 jge 0x11fec956 */
  if ((C.sf==C.of)) goto L_11fec956;
L_11fec954:;
  /* 11fec954 jmp 0x11fec9a8 */
  goto L_11fec9a8;
L_11fec956:;
  /* 11fec956 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fec959 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec95c push ecx */
  push32((uint32_t)(ECX));
  /* 11fec95d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fec960 push edx */
  push32((uint32_t)(EDX));
  /* 11fec961 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fec964 push eax */
  push32((uint32_t)(EAX));
  /* 11fec965 call 0x11fe0140 */
  push32(0x11fec96au); f_11fe0140();
  /* 11fec96a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec96d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fec970 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec973 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11fec977 mov eax, 1 */
  EAX = (0x1u);
  /* 11fec97c jmp 0x11fec9be */
  goto L_11fec9be;
L_11fec97e:;
  /* 11fec97e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec981 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fec984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec987 cmp eax, dword ptr [edx + 0x1200db40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1200db40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec98d jae 0x11fec99a */
  if (!C.cf) goto L_11fec99a;
  /* 11fec98f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec992 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec995 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fec998 jmp 0x11fec9a3 */
  goto L_11fec9a3;
L_11fec99a:;
  /* 11fec99a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fec99d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec9a0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11fec9a3:;
  /* 11fec9a3 jmp 0x11fec85b */
  goto L_11fec85b;
L_11fec9a8:;
  /* 11fec9a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11fec9ab push eax */
  push32((uint32_t)(EAX));
  /* 11fec9ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fec9af push ecx */
  push32((uint32_t)(ECX));
  /* 11fec9b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fec9b3 push edx */
  push32((uint32_t)(EDX));
  /* 11fec9b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec9b7 push eax */
  push32((uint32_t)(EAX));
  /* 11fec9b8 call dword ptr [0x12011344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011344))), 0x11fec9beu);
L_11fec9be:;
  /* 11fec9be mov esp, ebp */
  ESP = (EBP);
  /* 11fec9c0 pop ebp */
  EBP = (pop32());
  /* 11fec9c1 ret 0x10 */
  ESPCHK(0x11fec840u, _esp0);
  ESP += 20; return;
}

/* FUN_1001c9d0 @ 0x11fec9d0 (118 bytes, 42 insns) */
void f_11fec9d0(void) {
  FTRACE(0x11fec9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fec9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fec9d1 mov ebp, esp */
  EBP = (ESP);
  /* 11fec9d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fec9d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11fec9dd:;
  /* 11fec9dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec9e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11fec9e2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11fec9e5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fec9e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fec9ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fec9ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11fec9f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fec9f4 je 0x11feca3f */
  if (C.zf) goto L_11feca3f;
  /* 11fec9f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11fec9fa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fec9fd jl 0x11feca12 */
  if ((C.sf!=C.of)) goto L_11feca12;
  /* 11fec9ff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11feca03 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feca06 jg 0x11feca12 */
  if ((!C.zf&&C.sf==C.of)) goto L_11feca12;
  /* 11feca08 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11feca0b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11feca0d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11feca10 jmp 0x11feca2c */
  goto L_11feca2c;
L_11feca12:;
  /* 11feca12 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11feca16 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feca19 jl 0x11feca2c */
  if ((C.sf!=C.of)) goto L_11feca2c;
  /* 11feca1b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11feca1f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feca22 jg 0x11feca2c */
  if ((!C.zf&&C.sf==C.of)) goto L_11feca2c;
  /* 11feca24 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11feca27 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11feca29 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11feca2c:;
  /* 11feca2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feca2f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11feca32 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11feca36 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11feca3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11feca3d jmp 0x11fec9dd */
  goto L_11fec9dd;
L_11feca3f:;
  /* 11feca3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11feca42 mov esp, ebp */
  ESP = (EBP);
  /* 11feca44 pop ebp */
  EBP = (pop32());
  /* 11feca45 ret  */
  ESPCHK(0x11fec9d0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11feca50 (101 bytes, 36 insns) */
void f_11feca50(void) {
  FTRACE(0x11feca50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11feca50 push ebp */
  push32((uint32_t)(EBP));
  /* 11feca51 mov ebp, esp */
  EBP = (ESP);
  /* 11feca53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feca56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11feca5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feca60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11feca62 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11feca65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feca68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feca6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11feca6e:;
  /* 11feca6e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11feca72 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feca75 jl 0x11feca80 */
  if ((C.sf!=C.of)) goto L_11feca80;
  /* 11feca77 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11feca7b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feca7e jle 0x11feca92 */
  if ((C.zf||C.sf!=C.of)) goto L_11feca92;
L_11feca80:;
  /* 11feca80 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11feca84 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feca87 jl 0x11fecaae */
  if ((C.sf!=C.of)) goto L_11fecaae;
  /* 11feca89 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11feca8d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feca90 jg 0x11fecaae */
  if ((!C.zf&&C.sf==C.of)) goto L_11fecaae;
L_11feca92:;
  /* 11feca92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11feca95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feca98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11feca9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feca9e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11fecaa0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11fecaa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecaa6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecaa9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11fecaac jmp 0x11feca6e */
  goto L_11feca6e;
L_11fecaae:;
  /* 11fecaae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fecab1 mov esp, ebp */
  ESP = (EBP);
  /* 11fecab3 pop ebp */
  EBP = (pop32());
  /* 11fecab4 ret  */
  ESPCHK(0x11feca50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cac0 @ 0x11fecac0 (1085 bytes, 299 insns) */
void f_11fecac0(void) {
  FTRACE(0x11fecac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fecac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fecac1 mov ebp, esp */
  EBP = (ESP);
  /* 11fecac3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fecac6 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11fecacc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fecad3 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11fecada mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11fecae1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fecae8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecaeb mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11fecaef mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 11fecaf3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fecaf6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11fecafa mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 11fecafe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fecb01 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fecb07 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fecb0a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fecb10 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11fecb12 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fecb18 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 11fecb1c mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11fecb20 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 11fecb24 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11fecb28 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 11fecb2c and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11fecb31 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 11fecb35 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fecb38 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fecb3e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fecb41 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fecb46 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecb48 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11fecb4c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fecb4f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fecb55 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecb5b jge 0x11fecb7d */
  if ((C.sf==C.of)) goto L_11fecb7d;
  /* 11fecb5d mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fecb60 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fecb66 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecb6c jge 0x11fecb7d */
  if ((C.sf==C.of)) goto L_11fecb7d;
  /* 11fecb6e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fecb71 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fecb76 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecb7b jle 0x11fecbb4 */
  if ((C.zf||C.sf!=C.of)) goto L_11fecbb4;
L_11fecb7d:;
  /* 11fecb7d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fecb80 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fecb86 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fecb88 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fecb8a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fecb90 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecb96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecb99 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11fecb9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecb9f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11fecba6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecba9 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11fecbaf jmp 0x11fecef9 */
  goto L_11fecef9;
L_11fecbb4:;
  /* 11fecbb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fecbb7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fecbbd cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecbc3 jg 0x11fecbe7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11fecbe7;
  /* 11fecbc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecbc8 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11fecbcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecbd2 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11fecbd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecbdc mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11fecbe2 jmp 0x11fecef9 */
  goto L_11fecef9;
L_11fecbe7:;
  /* 11fecbe7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fecbea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fecbef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fecbf1 jne 0x11fecc2d */
  if (!C.zf) goto L_11fecc2d;
  /* 11fecbf3 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11fecbf7 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fecbfb mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11fecbff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecc02 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fecc05 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fecc0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fecc0c jne 0x11fecc2d */
  if (!C.zf) goto L_11fecc2d;
  /* 11fecc0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecc11 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecc15 jne 0x11fecc2d */
  if (!C.zf) goto L_11fecc2d;
  /* 11fecc17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecc1a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecc1d jne 0x11fecc2d */
  if (!C.zf) goto L_11fecc2d;
  /* 11fecc1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecc22 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 11fecc28 jmp 0x11fecef9 */
  goto L_11fecef9;
L_11fecc2d:;
  /* 11fecc2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11fecc30 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fecc36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fecc38 jne 0x11fecc89 */
  if (!C.zf) goto L_11fecc89;
  /* 11fecc3a mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11fecc3e add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fecc42 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 11fecc46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fecc49 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fecc4c and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fecc52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fecc54 jne 0x11fecc89 */
  if (!C.zf) goto L_11fecc89;
  /* 11fecc56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fecc59 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecc5d jne 0x11fecc89 */
  if (!C.zf) goto L_11fecc89;
  /* 11fecc5f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fecc62 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecc65 jne 0x11fecc89 */
  if (!C.zf) goto L_11fecc89;
  /* 11fecc67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecc6a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 11fecc71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecc74 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11fecc7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecc7e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fecc84 jmp 0x11fecef9 */
  goto L_11fecef9;
L_11fecc89:;
  /* 11fecc89 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11fecc90 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11fecc97 jmp 0x11fecca2 */
  goto L_11fecca2;
L_11fecc99:;
  /* 11fecc99 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11fecc9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecc9f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11fecca2:;
  /* 11fecca2 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecca6 jge 0x11fecd61 */
  if ((C.sf==C.of)) goto L_11fecd61;
  /* 11feccac mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11feccaf shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11feccb1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11feccb4 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 11feccbb mov eax, 5 */
  EAX = (0x5u);
  /* 11feccc0 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feccc3 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11feccc6 jmp 0x11feccd1 */
  goto L_11feccd1;
L_11feccc8:;
  /* 11feccc8 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11fecccb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11feccce mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_11feccd1:;
  /* 11feccd1 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11feccd5 jle 0x11fecd53 */
  if ((C.zf||C.sf!=C.of)) goto L_11fecd53;
  /* 11feccd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feccda add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11feccdd mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11fecce0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fecce3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecce6 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11fecce9 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11feccec lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 11feccf0 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11feccf3 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11feccf6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11feccf8 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11feccfb mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11feccfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fecd00 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11fecd03 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fecd06 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11fecd09 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fecd0c push ecx */
  push32((uint32_t)(ECX));
  /* 11fecd0d mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11fecd10 push edx */
  push32((uint32_t)(EDX));
  /* 11fecd11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11fecd14 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11fecd16 push ecx */
  push32((uint32_t)(ECX));
  /* 11fecd17 call 0x11fe8540 */
  push32(0x11fecd1cu); f_11fe8540();
  /* 11fecd1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecd1f mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 11fecd22 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecd26 je 0x11fecd3c */
  if (C.zf) goto L_11fecd3c;
  /* 11fecd28 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fecd2b mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 11fecd30 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fecd34 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fecd37 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_11fecd3c:;
  /* 11fecd3c mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11fecd3f add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecd42 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11fecd45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fecd48 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fecd4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fecd4e jmp 0x11feccc8 */
  goto L_11feccc8;
L_11fecd53:;
  /* 11fecd53 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11fecd56 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecd59 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11fecd5c jmp 0x11fecc99 */
  goto L_11fecc99;
L_11fecd61:;
  /* 11fecd61 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11fecd65 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11fecd6a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11fecd6e:;
  /* 11fecd6e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11fecd72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fecd74 jle 0x11fecd9d */
  if ((C.zf||C.sf!=C.of)) goto L_11fecd9d;
  /* 11fecd76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fecd79 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11fecd7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fecd81 jne 0x11fecd9d */
  if (!C.zf) goto L_11fecd9d;
  /* 11fecd83 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11fecd86 push edx */
  push32((uint32_t)(EDX));
  /* 11fecd87 call 0x11fe8630 */
  push32(0x11fecd8cu); f_11fe8630();
  /* 11fecd8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecd8f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11fecd93 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11fecd97 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11fecd9b jmp 0x11fecd6e */
  goto L_11fecd6e;
L_11fecd9d:;
  /* 11fecd9d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11fecda1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fecda3 jg 0x11fecdfd */
  if ((!C.zf&&C.sf==C.of)) goto L_11fecdfd;
  /* 11fecda5 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 11fecda9 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11fecdad mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_11fecdb1:;
  /* 11fecdb1 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 11fecdb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fecdb7 jge 0x11fecdec */
  if ((C.sf==C.of)) goto L_11fecdec;
  /* 11fecdb9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fecdbc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fecdc2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fecdc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fecdc7 je 0x11fecdd2 */
  if (C.zf) goto L_11fecdd2;
  /* 11fecdc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fecdcc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecdcf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fecdd2:;
  /* 11fecdd2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11fecdd5 push eax */
  push32((uint32_t)(EAX));
  /* 11fecdd6 call 0x11fe8690 */
  push32(0x11fecddbu); f_11fe8690();
  /* 11fecddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecdde mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 11fecde2 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fecde6 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 11fecdea jmp 0x11fecdb1 */
  goto L_11fecdb1;
L_11fecdec:;
  /* 11fecdec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecdf0 je 0x11fecdfd */
  if (C.zf) goto L_11fecdfd;
  /* 11fecdf2 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 11fecdf6 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11fecdf9 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_11fecdfd:;
  /* 11fecdfd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fece00 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fece05 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fece0a jg 0x11fece1d */
  if ((!C.zf&&C.sf==C.of)) goto L_11fece1d;
  /* 11fece0c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11fece0f and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fece15 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fece1b jne 0x11fece7e */
  if (!C.zf) goto L_11fece7e;
L_11fece1d:;
  /* 11fece1d cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fece21 jne 0x11fece75 */
  if (!C.zf) goto L_11fece75;
  /* 11fece23 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 11fece2a cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fece2e jne 0x11fece6a */
  if (!C.zf) goto L_11fece6a;
  /* 11fece30 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 11fece37 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 11fece3a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fece40 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fece46 jne 0x11fece5c */
  if (!C.zf) goto L_11fece5c;
  /* 11fece48 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 11fece4e mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 11fece52 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fece56 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 11fece5a jmp 0x11fece68 */
  goto L_11fece68;
L_11fece5c:;
  /* 11fece5c mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 11fece60 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11fece64 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11fece68:;
  /* 11fece68 jmp 0x11fece73 */
  goto L_11fece73;
L_11fece6a:;
  /* 11fece6a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 11fece6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fece70 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_11fece73:;
  /* 11fece73 jmp 0x11fece7e */
  goto L_11fece7e;
L_11fece75:;
  /* 11fece75 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11fece78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fece7b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_11fece7e:;
  /* 11fece7e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fece81 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fece87 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fece8d jl 0x11fecec3 */
  if ((C.sf!=C.of)) goto L_11fecec3;
  /* 11fece8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11fece92 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11fece98 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fece9a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fece9c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fecea2 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feceab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11feceae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feceb1 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11feceb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecebb mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 11fecec1 jmp 0x11fecef9 */
  goto L_11fecef9;
L_11fecec3:;
  /* 11fecec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecec6 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 11fececa mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11fececd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feced0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11feced3 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11feced6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11feced9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fecedc mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11fecedf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11fecee2 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fecee7 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11feceea and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11fecef0 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11fecef2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecef5 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_11fecef9:;
  /* 11fecef9 mov esp, ebp */
  ESP = (EBP);
  /* 11fecefb pop ebp */
  EBP = (pop32());
  /* 11fecefc ret  */
  ESPCHK(0x11fecac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001cf00 @ 0x11fecf00 (195 bytes, 67 insns) */
void f_11fecf00(void) {
  FTRACE(0x11fecf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fecf00 push ebp */
  push32((uint32_t)(EBP));
  /* 11fecf01 mov ebp, esp */
  EBP = (ESP);
  /* 11fecf03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fecf06 mov eax, 0x1200e3c0 */
  EAX = (0x1200e3c0u);
  /* 11fecf0b sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fecf0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fecf11 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecf15 jne 0x11fecf1c */
  if (!C.zf) goto L_11fecf1c;
  /* 11fecf17 jmp 0x11fecfbf */
  goto L_11fecfbf;
L_11fecf1c:;
  /* 11fecf1c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecf20 jge 0x11fecf35 */
  if ((C.sf==C.of)) goto L_11fecf35;
  /* 11fecf22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fecf25 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11fecf27 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11fecf2a mov edx, 0x1200e520 */
  EDX = (0x1200e520u);
  /* 11fecf2f sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fecf32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fecf35:;
  /* 11fecf35 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecf39 jne 0x11fecf43 */
  if (!C.zf) goto L_11fecf43;
  /* 11fecf3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecf3e mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_11fecf43:;
  /* 11fecf43 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecf47 je 0x11fecfbf */
  if (C.zf) goto L_11fecfbf;
  /* 11fecf49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fecf4c add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecf4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fecf52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fecf55 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 11fecf58 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11fecf5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fecf5e sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11fecf61 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11fecf64 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecf68 jne 0x11fecf6c */
  if (!C.zf) goto L_11fecf6c;
  /* 11fecf6a jmp 0x11fecf43 */
  goto L_11fecf43;
L_11fecf6c:;
  /* 11fecf6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11fecf6f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fecf72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fecf75 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecf77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11fecf7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fecf7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11fecf7f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11fecf82 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fecf88 jl 0x11fecfad */
  if ((C.sf!=C.of)) goto L_11fecfad;
  /* 11fecf8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fecf8d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fecf8f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11fecf92 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11fecf95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11fecf98 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11fecf9b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11fecf9e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 11fecfa1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fecfa4 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 11fecfa7 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11fecfaa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11fecfad:;
  /* 11fecfad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fecfb0 push edx */
  push32((uint32_t)(EDX));
  /* 11fecfb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fecfb4 push eax */
  push32((uint32_t)(EAX));
  /* 11fecfb5 call 0x11fecac0 */
  push32(0x11fecfbau); f_11fecac0();
  /* 11fecfba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecfbd jmp 0x11fecf43 */
  goto L_11fecf43;
L_11fecfbf:;
  /* 11fecfbf mov esp, ebp */
  ESP = (EBP);
  /* 11fecfc1 pop ebp */
  EBP = (pop32());
  /* 11fecfc2 ret  */
  ESPCHK(0x11fecf00u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11fecfd0 (52 bytes, 19 insns) */
void f_11fecfd0(void) {
  FTRACE(0x11fecfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fecfd0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fecfd4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11fecfd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11fecfda mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11fecfde jne 0x11fecfe9 */
  if (!C.zf) goto L_11fecfe9;
  /* 11fecfe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11fecfe4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fecfe6 ret 0x10 */
  ESPCHK(0x11fecfd0u, _esp0);
  ESP += 20; return;
L_11fecfe9:;
  /* 11fecfe9 push ebx */
  push32((uint32_t)(EBX));
  /* 11fecfea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fecfec mov ebx, eax */
  EBX = (EAX);
  /* 11fecfee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fecff2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fecff6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fecff8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11fecffc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11fecffe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed000 pop ebx */
  EBX = (pop32());
  /* 11fed001 ret 0x10 */
  ESPCHK(0x11fecfd0u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x11fed010 (79 bytes, 32 insns) */
void f_11fed010(void) {
  FTRACE(0x11fed010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed010 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed011 mov ebp, esp */
  EBP = (ESP);
  /* 11fed013 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed014 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed018 jne 0x11fed01e */
  if (!C.zf) goto L_11fed01e;
  /* 11fed01a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fed01c jmp 0x11fed05b */
  goto L_11fed05b;
L_11fed01e:;
  /* 11fed01e mov eax, dword ptr [0x12010618] */
  EAX = (r32((uint32_t)(0x12010618)));
  /* 11fed023 push eax */
  push32((uint32_t)(EAX));
  /* 11fed024 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fed027 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed028 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fed02b push edx */
  push32((uint32_t)(EDX));
  /* 11fed02c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11fed02f push eax */
  push32((uint32_t)(EAX));
  /* 11fed030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed033 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed034 push 1 */
  push32((uint32_t)(0x1u));
  /* 11fed036 mov edx, dword ptr [0x120108a4] */
  EDX = (r32((uint32_t)(0x120108a4)));
  /* 11fed03c push edx */
  push32((uint32_t)(EDX));
  /* 11fed03d call 0x11fef5d0 */
  push32(0x11fed042u); f_11fef5d0();
  /* 11fed042 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed045 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fed048 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed04c jne 0x11fed055 */
  if (!C.zf) goto L_11fed055;
  /* 11fed04e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11fed053 jmp 0x11fed05b */
  goto L_11fed05b;
L_11fed055:;
  /* 11fed055 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed058 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11fed05b:;
  /* 11fed05b mov esp, ebp */
  ESP = (EBP);
  /* 11fed05d pop ebp */
  EBP = (pop32());
  /* 11fed05e ret  */
  ESPCHK(0x11fed010u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d060 @ 0x11fed060 (174 bytes, 66 insns) */
void f_11fed060(void) {
  FTRACE(0x11fed060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed060 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed061 mov ebp, esp */
  EBP = (ESP);
  /* 11fed063 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fed066 mov eax, dword ptr [0x1200efc4] */
  EAX = (r32((uint32_t)(0x1200efc4)));
  /* 11fed06b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fed06e:;
  /* 11fed06e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed071 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed074 je 0x11fed108 */
  if (C.zf) goto L_11fed108;
  /* 11fed07a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed07c push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed07e push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed080 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed082 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fed084 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed087 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11fed089 push eax */
  push32((uint32_t)(EAX));
  /* 11fed08a push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed08c push 1 */
  push32((uint32_t)(0x1u));
  /* 11fed08e call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fed094u);
  /* 11fed094 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11fed097 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed09b jne 0x11fed0a2 */
  if (!C.zf) goto L_11fed0a2;
  /* 11fed09d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fed0a0 jmp 0x11fed10a */
  goto L_11fed10a;
L_11fed0a2:;
  /* 11fed0a2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11fed0a4 push 0x1200a9cc */
  push32((uint32_t)(0x1200a9ccu));
  /* 11fed0a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fed0ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed0ae push ecx */
  push32((uint32_t)(ECX));
  /* 11fed0af call 0x11fdb1c0 */
  push32(0x11fed0b4u); f_11fdb1c0();
  /* 11fed0b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed0b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fed0ba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed0be jne 0x11fed0c5 */
  if (!C.zf) goto L_11fed0c5;
  /* 11fed0c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fed0c3 jmp 0x11fed10a */
  goto L_11fed10a;
L_11fed0c5:;
  /* 11fed0c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed0c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed0c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed0cc push edx */
  push32((uint32_t)(EDX));
  /* 11fed0cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed0d0 push eax */
  push32((uint32_t)(EAX));
  /* 11fed0d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11fed0d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed0d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11fed0d8 push edx */
  push32((uint32_t)(EDX));
  /* 11fed0d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed0db push 1 */
  push32((uint32_t)(0x1u));
  /* 11fed0dd call dword ptr [0x120113b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113b0))), 0x11fed0e3u);
  /* 11fed0e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fed0e5 jne 0x11fed0ec */
  if (!C.zf) goto L_11fed0ec;
  /* 11fed0e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fed0ea jmp 0x11fed10a */
  goto L_11fed10a;
L_11fed0ec:;
  /* 11fed0ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed0ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed0f1 push eax */
  push32((uint32_t)(EAX));
  /* 11fed0f2 call 0x11fefa20 */
  push32(0x11fed0f7u); f_11fefa20();
  /* 11fed0f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed0fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed0fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed100 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fed103 jmp 0x11fed06e */
  goto L_11fed06e;
L_11fed108:;
  /* 11fed108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11fed10a:;
  /* 11fed10a mov esp, ebp */
  ESP = (EBP);
  /* 11fed10c pop ebp */
  EBP = (pop32());
  /* 11fed10d ret  */
  ESPCHK(0x11fed060u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d110 @ 0x11fed110 (482 bytes, 138 insns) */
void f_11fed110(void) {
  FTRACE(0x11fed110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed110 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed111 mov ebp, esp */
  EBP = (ESP);
  /* 11fed113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fed116 push esi */
  push32((uint32_t)(ESI));
  /* 11fed117 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11fed11e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11fed120 call 0x11fdb0c0 */
  push32(0x11fed125u); f_11fdb0c0();
  /* 11fed125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed128 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fed12f jmp 0x11fed13a */
  goto L_11fed13a;
L_11fed131:;
  /* 11fed131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed137 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11fed13a:;
  /* 11fed13a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed13e jge 0x11fed2e0 */
  if ((C.sf==C.of)) goto L_11fed2e0;
  /* 11fed144 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed147 cmp dword ptr [ecx*4 + 0x120108e0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x120108e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed14f je 0x11fed246 */
  if (C.zf) goto L_11fed246;
  /* 11fed155 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed158 mov eax, dword ptr [edx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120108e0)));
  /* 11fed15f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fed162 jmp 0x11fed16d */
  goto L_11fed16d;
L_11fed164:;
  /* 11fed164 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed167 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed16a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11fed16d:;
  /* 11fed16d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed170 mov eax, dword ptr [edx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120108e0)));
  /* 11fed177 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed17c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed17f jae 0x11fed236 */
  if (!C.cf) goto L_11fed236;
  /* 11fed185 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed188 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fed18c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fed18f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fed191 jne 0x11fed231 */
  if (!C.zf) goto L_11fed231;
  /* 11fed197 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed19a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed19e jne 0x11fed1d9 */
  if (!C.zf) goto L_11fed1d9;
  /* 11fed1a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11fed1a2 call 0x11fdb0c0 */
  push32(0x11fed1a7u); f_11fdb0c0();
  /* 11fed1a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed1aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed1ad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed1b1 jne 0x11fed1cf */
  if (!C.zf) goto L_11fed1cf;
  /* 11fed1b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed1b6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed1b9 push edx */
  push32((uint32_t)(EDX));
  /* 11fed1ba call dword ptr [0x12011424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011424))), 0x11fed1c0u);
  /* 11fed1c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed1c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fed1c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed1c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed1cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11fed1cf:;
  /* 11fed1cf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11fed1d1 call 0x11fdb160 */
  push32(0x11fed1d6u); f_11fdb160();
  /* 11fed1d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fed1d9:;
  /* 11fed1d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed1dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed1df push eax */
  push32((uint32_t)(EAX));
  /* 11fed1e0 call dword ptr [0x12011440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011440))), 0x11fed1e6u);
  /* 11fed1e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed1e9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11fed1ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11fed1f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fed1f2 je 0x11fed206 */
  if (C.zf) goto L_11fed206;
  /* 11fed1f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed1f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed1fa push eax */
  push32((uint32_t)(EAX));
  /* 11fed1fb call dword ptr [0x12011444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011444))), 0x11fed201u);
  /* 11fed201 jmp 0x11fed164 */
  goto L_11fed164;
L_11fed206:;
  /* 11fed206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed209 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11fed20f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed212 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fed215 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed21b sub eax, dword ptr [edx*4 + 0x120108e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x120108e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fed222 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11fed223 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11fed228 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11fed22a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed22c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fed22f jmp 0x11fed236 */
  goto L_11fed236;
L_11fed231:;
  /* 11fed231 jmp 0x11fed164 */
  goto L_11fed164;
L_11fed236:;
  /* 11fed236 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed23a je 0x11fed241 */
  if (C.zf) goto L_11fed241;
  /* 11fed23c jmp 0x11fed2e0 */
  goto L_11fed2e0;
L_11fed241:;
  /* 11fed241 jmp 0x11fed2db */
  goto L_11fed2db;
L_11fed246:;
  /* 11fed246 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11fed248 push 0x1200a9d8 */
  push32((uint32_t)(0x1200a9d8u));
  /* 11fed24d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fed24f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11fed254 call 0x11fdb1c0 */
  push32(0x11fed259u); f_11fdb1c0();
  /* 11fed259 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed25c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fed25f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed263 je 0x11fed2d9 */
  if (C.zf) goto L_11fed2d9;
  /* 11fed265 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed26b mov dword ptr [eax*4 + 0x120108e0], ecx */
  w32((uint32_t)(EAX*4 + 0x120108e0), (ECX));
  /* 11fed272 mov edx, dword ptr [0x12010a1c] */
  EDX = (r32((uint32_t)(0x12010a1c)));
  /* 11fed278 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed27b mov dword ptr [0x12010a1c], edx */
  w32((uint32_t)(0x12010a1c), (EDX));
  /* 11fed281 jmp 0x11fed28c */
  goto L_11fed28c;
L_11fed283:;
  /* 11fed283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed286 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11fed28c:;
  /* 11fed28c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed28f mov edx, dword ptr [ecx*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fed296 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed29c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed29f jae 0x11fed2c4 */
  if (!C.cf) goto L_11fed2c4;
  /* 11fed2a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed2a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11fed2a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed2ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11fed2b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed2b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11fed2b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed2bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11fed2c2 jmp 0x11fed283 */
  goto L_11fed283;
L_11fed2c4:;
  /* 11fed2c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11fed2c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fed2ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11fed2cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed2d0 push edx */
  push32((uint32_t)(EDX));
  /* 11fed2d1 call 0x11fed620 */
  push32(0x11fed2d6u); f_11fed620();
  /* 11fed2d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fed2d9:;
  /* 11fed2d9 jmp 0x11fed2e0 */
  goto L_11fed2e0;
L_11fed2db:;
  /* 11fed2db jmp 0x11fed131 */
  goto L_11fed131;
L_11fed2e0:;
  /* 11fed2e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11fed2e2 call 0x11fdb160 */
  push32(0x11fed2e7u); f_11fdb160();
  /* 11fed2e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed2ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed2ed pop esi */
  ESI = (pop32());
  /* 11fed2ee mov esp, ebp */
  ESP = (EBP);
  /* 11fed2f0 pop ebp */
  EBP = (pop32());
  /* 11fed2f1 ret  */
  ESPCHK(0x11fed110u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11fed300 (183 bytes, 57 insns) */
void f_11fed300(void) {
  FTRACE(0x11fed300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed300 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed301 mov ebp, esp */
  EBP = (ESP);
  /* 11fed303 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed307 cmp eax, dword ptr [0x12010a1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12010a1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed30d jae 0x11fed39a */
  if (!C.cf) goto L_11fed39a;
  /* 11fed313 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed316 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fed319 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed31c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fed31f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed322 mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fed329 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed32d jne 0x11fed39a */
  if (!C.zf) goto L_11fed39a;
  /* 11fed32f cmp dword ptr [0x1200ef20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed336 jne 0x11fed37a */
  if (!C.zf) goto L_11fed37a;
  /* 11fed338 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed33b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11fed33e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed342 je 0x11fed352 */
  if (C.zf) goto L_11fed352;
  /* 11fed344 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed348 je 0x11fed360 */
  if (C.zf) goto L_11fed360;
  /* 11fed34a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed34e je 0x11fed36e */
  if (C.zf) goto L_11fed36e;
  /* 11fed350 jmp 0x11fed37a */
  goto L_11fed37a;
L_11fed352:;
  /* 11fed352 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fed355 push edx */
  push32((uint32_t)(EDX));
  /* 11fed356 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11fed358 call dword ptr [0x12011334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011334))), 0x11fed35eu);
  /* 11fed35e jmp 0x11fed37a */
  goto L_11fed37a;
L_11fed360:;
  /* 11fed360 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fed363 push eax */
  push32((uint32_t)(EAX));
  /* 11fed364 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11fed366 call dword ptr [0x12011334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011334))), 0x11fed36cu);
  /* 11fed36c jmp 0x11fed37a */
  goto L_11fed37a;
L_11fed36e:;
  /* 11fed36e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fed371 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed372 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11fed374 call dword ptr [0x12011334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011334))), 0x11fed37au);
L_11fed37a:;
  /* 11fed37a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed37d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11fed380 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed383 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fed386 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed389 mov ecx, dword ptr [edx*4 + 0x120108e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120108e0)));
  /* 11fed390 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fed393 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11fed396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fed398 jmp 0x11fed3b3 */
  goto L_11fed3b3;
L_11fed39a:;
  /* 11fed39a call 0x11fe6850 */
  push32(0x11fed39fu); f_11fe6850();
  /* 11fed39f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fed3a5 call 0x11fe6860 */
  push32(0x11fed3aau); f_11fe6860();
  /* 11fed3aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fed3b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11fed3b3:;
  /* 11fed3b3 mov esp, ebp */
  ESP = (EBP);
  /* 11fed3b5 pop ebp */
  EBP = (pop32());
  /* 11fed3b6 ret  */
  ESPCHK(0x11fed300u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d3c0 @ 0x11fed3c0 (216 bytes, 63 insns) */
void f_11fed3c0(void) {
  FTRACE(0x11fed3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fed3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed3c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed3c7 cmp eax, dword ptr [0x12010a1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12010a1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed3cd jae 0x11fed47b */
  if (!C.cf) goto L_11fed47b;
  /* 11fed3d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed3d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fed3d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed3dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fed3df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed3e2 mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fed3e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11fed3ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fed3f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fed3f3 je 0x11fed47b */
  if (C.zf) goto L_11fed47b;
  /* 11fed3f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed3fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11fed3ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed402 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fed405 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed408 mov ecx, dword ptr [edx*4 + 0x120108e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120108e0)));
  /* 11fed40f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed413 je 0x11fed47b */
  if (C.zf) goto L_11fed47b;
  /* 11fed415 cmp dword ptr [0x1200ef20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1200ef20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed41c jne 0x11fed45a */
  if (!C.zf) goto L_11fed45a;
  /* 11fed41e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed421 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fed424 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed428 je 0x11fed438 */
  if (C.zf) goto L_11fed438;
  /* 11fed42a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed42e je 0x11fed444 */
  if (C.zf) goto L_11fed444;
  /* 11fed430 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed434 je 0x11fed450 */
  if (C.zf) goto L_11fed450;
  /* 11fed436 jmp 0x11fed45a */
  goto L_11fed45a;
L_11fed438:;
  /* 11fed438 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed43a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11fed43c call dword ptr [0x12011334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011334))), 0x11fed442u);
  /* 11fed442 jmp 0x11fed45a */
  goto L_11fed45a;
L_11fed444:;
  /* 11fed444 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed446 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11fed448 call dword ptr [0x12011334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011334))), 0x11fed44eu);
  /* 11fed44e jmp 0x11fed45a */
  goto L_11fed45a;
L_11fed450:;
  /* 11fed450 push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed452 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11fed454 call dword ptr [0x12011334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011334))), 0x11fed45au);
L_11fed45a:;
  /* 11fed45a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed45d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fed460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed463 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fed466 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed469 mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fed470 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11fed477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11fed479 jmp 0x11fed494 */
  goto L_11fed494;
L_11fed47b:;
  /* 11fed47b call 0x11fe6850 */
  push32(0x11fed480u); f_11fe6850();
  /* 11fed480 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fed486 call 0x11fe6860 */
  push32(0x11fed48bu); f_11fe6860();
  /* 11fed48b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fed491 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11fed494:;
  /* 11fed494 mov esp, ebp */
  ESP = (EBP);
  /* 11fed496 pop ebp */
  EBP = (pop32());
  /* 11fed497 ret  */
  ESPCHK(0x11fed3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d4a0 @ 0x11fed4a0 (102 bytes, 30 insns) */
void f_11fed4a0(void) {
  FTRACE(0x11fed4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed4a1 mov ebp, esp */
  EBP = (ESP);
  /* 11fed4a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed4a6 cmp eax, dword ptr [0x12010a1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12010a1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed4ac jae 0x11fed4eb */
  if (!C.cf) goto L_11fed4eb;
  /* 11fed4ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed4b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11fed4b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed4b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11fed4ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed4bd mov eax, dword ptr [ecx*4 + 0x120108e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x120108e0)));
  /* 11fed4c4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11fed4c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11fed4cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fed4ce je 0x11fed4eb */
  if (C.zf) goto L_11fed4eb;
  /* 11fed4d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed4d3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11fed4d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed4d9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11fed4dc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed4df mov ecx, dword ptr [edx*4 + 0x120108e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x120108e0)));
  /* 11fed4e6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11fed4e9 jmp 0x11fed504 */
  goto L_11fed504;
L_11fed4eb:;
  /* 11fed4eb call 0x11fe6850 */
  push32(0x11fed4f0u); f_11fe6850();
  /* 11fed4f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11fed4f6 call 0x11fe6860 */
  push32(0x11fed4fbu); f_11fe6860();
  /* 11fed4fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fed501 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11fed504:;
  /* 11fed504 pop ebp */
  EBP = (pop32());
  /* 11fed505 ret  */
  ESPCHK(0x11fed4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d510 @ 0x11fed510 (260 bytes, 83 insns) */
void f_11fed510(void) {
  FTRACE(0x11fed510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed510 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed511 mov ebp, esp */
  EBP = (ESP);
  /* 11fed513 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fed516 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11fed51a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fed51d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11fed520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11fed522 je 0x11fed52d */
  if (C.zf) goto L_11fed52d;
  /* 11fed524 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fed527 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11fed52a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11fed52d:;
  /* 11fed52d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fed530 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11fed536 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11fed538 je 0x11fed542 */
  if (C.zf) goto L_11fed542;
  /* 11fed53a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fed53d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11fed53f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11fed542:;
  /* 11fed542 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11fed545 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11fed54b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fed54d je 0x11fed558 */
  if (C.zf) goto L_11fed558;
  /* 11fed54f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fed552 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11fed555 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11fed558:;
  /* 11fed558 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed55b push eax */
  push32((uint32_t)(EAX));
  /* 11fed55c call dword ptr [0x120113cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113cc))), 0x11fed562u);
  /* 11fed562 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fed565 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed569 jne 0x11fed582 */
  if (!C.zf) goto L_11fed582;
  /* 11fed56b call dword ptr [0x120113d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120113d4))), 0x11fed571u);
  /* 11fed571 push eax */
  push32((uint32_t)(EAX));
  /* 11fed572 call 0x11fe67b0 */
  push32(0x11fed577u); f_11fe67b0();
  /* 11fed577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed57a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fed57d jmp 0x11fed610 */
  goto L_11fed610;
L_11fed582:;
  /* 11fed582 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed586 jne 0x11fed593 */
  if (!C.zf) goto L_11fed593;
  /* 11fed588 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fed58b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11fed58e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11fed591 jmp 0x11fed5a2 */
  goto L_11fed5a2;
L_11fed593:;
  /* 11fed593 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed597 jne 0x11fed5a2 */
  if (!C.zf) goto L_11fed5a2;
  /* 11fed599 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fed59c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11fed59f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11fed5a2:;
  /* 11fed5a2 call 0x11fed110 */
  push32(0x11fed5a7u); f_11fed110();
  /* 11fed5a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11fed5aa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed5ae jne 0x11fed5cb */
  if (!C.zf) goto L_11fed5cb;
  /* 11fed5b0 call 0x11fe6850 */
  push32(0x11fed5b5u); f_11fe6850();
  /* 11fed5b5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11fed5bb call 0x11fe6860 */
  push32(0x11fed5c0u); f_11fe6860();
  /* 11fed5c0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11fed5c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11fed5c9 jmp 0x11fed610 */
  goto L_11fed610;
L_11fed5cb:;
  /* 11fed5cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed5ce push eax */
  push32((uint32_t)(EAX));
  /* 11fed5cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed5d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed5d3 call 0x11fed300 */
  push32(0x11fed5d8u); f_11fed300();
  /* 11fed5d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed5db mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fed5de or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11fed5e1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11fed5e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed5e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fed5ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed5ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fed5f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed5f3 mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fed5fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11fed5fd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11fed601 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed604 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed605 call 0x11fed6b0 */
  push32(0x11fed60au); f_11fed6b0();
  /* 11fed60a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed60d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11fed610:;
  /* 11fed610 mov esp, ebp */
  ESP = (EBP);
  /* 11fed612 pop ebp */
  EBP = (pop32());
  /* 11fed613 ret  */
  ESPCHK(0x11fed510u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d620 @ 0x11fed620 (134 bytes, 44 insns) */
void f_11fed620(void) {
  FTRACE(0x11fed620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed620 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed621 mov ebp, esp */
  EBP = (ESP);
  /* 11fed623 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed627 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fed62a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed62d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fed630 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed633 mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fed63a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed63c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11fed63f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed642 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed646 jne 0x11fed681 */
  if (!C.zf) goto L_11fed681;
  /* 11fed648 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11fed64a call 0x11fdb0c0 */
  push32(0x11fed64fu); f_11fdb0c0();
  /* 11fed64f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed652 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed655 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed659 jne 0x11fed677 */
  if (!C.zf) goto L_11fed677;
  /* 11fed65b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed65e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed661 push edx */
  push32((uint32_t)(EDX));
  /* 11fed662 call dword ptr [0x12011424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011424))), 0x11fed668u);
  /* 11fed668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed66b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11fed66e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed674 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11fed677:;
  /* 11fed677 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11fed679 call 0x11fdb160 */
  push32(0x11fed67eu); f_11fdb160();
  /* 11fed67e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11fed681:;
  /* 11fed681 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed684 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fed687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed68a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fed68d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed690 mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fed697 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11fed69b push eax */
  push32((uint32_t)(EAX));
  /* 11fed69c call dword ptr [0x12011440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011440))), 0x11fed6a2u);
  /* 11fed6a2 mov esp, ebp */
  ESP = (EBP);
  /* 11fed6a4 pop ebp */
  EBP = (pop32());
  /* 11fed6a5 ret  */
  ESPCHK(0x11fed620u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11fed6b0 (38 bytes, 13 insns) */
void f_11fed6b0(void) {
  FTRACE(0x11fed6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed6b1 mov ebp, esp */
  EBP = (ESP);
  /* 11fed6b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed6b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11fed6b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed6bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11fed6bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11fed6c2 mov edx, dword ptr [eax*4 + 0x120108e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120108e0)));
  /* 11fed6c9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11fed6cd push eax */
  push32((uint32_t)(EAX));
  /* 11fed6ce call dword ptr [0x12011444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12011444))), 0x11fed6d4u);
  /* 11fed6d4 pop ebp */
  EBP = (pop32());
  /* 11fed6d5 ret  */
  ESPCHK(0x11fed6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d6e0 @ 0x11fed6e0 (218 bytes, 63 insns) */
void f_11fed6e0(void) {
  FTRACE(0x11fed6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed6e1 mov ebp, esp */
  EBP = (ESP);
  /* 11fed6e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11fed6e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11fed6ed push 2 */
  push32((uint32_t)(0x2u));
  /* 11fed6ef call 0x11fdb0c0 */
  push32(0x11fed6f4u); f_11fdb0c0();
  /* 11fed6f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed6f7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11fed6fe jmp 0x11fed709 */
  goto L_11fed709;
L_11fed700:;
  /* 11fed700 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed703 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed706 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11fed709:;
  /* 11fed709 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed70c cmp ecx, dword ptr [0x12010600] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12010600))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed712 jge 0x11fed7a9 */
  if ((C.sf==C.of)) goto L_11fed7a9;
  /* 11fed718 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed71b mov eax, dword ptr [0x1200f2ac] */
  EAX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed720 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed724 je 0x11fed7a4 */
  if (C.zf) goto L_11fed7a4;
  /* 11fed726 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed729 mov edx, dword ptr [0x1200f2ac] */
  EDX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed72f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11fed732 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11fed735 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11fed73b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11fed73d je 0x11fed761 */
  if (C.zf) goto L_11fed761;
  /* 11fed73f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed742 mov eax, dword ptr [0x1200f2ac] */
  EAX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed747 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11fed74a push ecx */
  push32((uint32_t)(ECX));
  /* 11fed74b call 0x11fefe70 */
  push32(0x11fed750u); f_11fefe70();
  /* 11fed750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed753 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed756 je 0x11fed761 */
  if (C.zf) goto L_11fed761;
  /* 11fed758 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed75b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed75e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11fed761:;
  /* 11fed761 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed765 jl 0x11fed7a4 */
  if ((C.sf!=C.of)) goto L_11fed7a4;
  /* 11fed767 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed76a mov ecx, dword ptr [0x1200f2ac] */
  ECX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed770 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fed773 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed776 push edx */
  push32((uint32_t)(EDX));
  /* 11fed777 call dword ptr [0x1201143c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1201143c))), 0x11fed77du);
  /* 11fed77d push 2 */
  push32((uint32_t)(0x2u));
  /* 11fed77f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed782 mov ecx, dword ptr [0x1200f2ac] */
  ECX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed788 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11fed78b push edx */
  push32((uint32_t)(EDX));
  /* 11fed78c call 0x11fdbc50 */
  push32(0x11fed791u); f_11fdbc50();
  /* 11fed791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed794 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11fed797 mov ecx, dword ptr [0x1200f2ac] */
  ECX = (r32((uint32_t)(0x1200f2ac)));
  /* 11fed79d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11fed7a4:;
  /* 11fed7a4 jmp 0x11fed700 */
  goto L_11fed700;
L_11fed7a9:;
  /* 11fed7a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11fed7ab call 0x11fdb160 */
  push32(0x11fed7b0u); f_11fdb160();
  /* 11fed7b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed7b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11fed7b6 mov esp, ebp */
  ESP = (EBP);
  /* 11fed7b8 pop ebp */
  EBP = (pop32());
  /* 11fed7b9 ret  */
  ESPCHK(0x11fed6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001d7c0 @ 0x11fed7c0 (68 bytes, 26 insns) */
void f_11fed7c0(void) {
  FTRACE(0x11fed7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11fed7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11fed7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11fed7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed7c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11fed7c8 jne 0x11fed7d6 */
  if (!C.zf) goto L_11fed7d6;
  /* 11fed7ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11fed7cc call 0x11fed930 */
  push32(0x11fed7d1u); f_11fed930();
  /* 11fed7d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed7d4 jmp 0x11fed800 */
  goto L_11fed800;
L_11fed7d6:;
  /* 11fed7d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed7d9 push eax */
  push32((uint32_t)(EAX));
  /* 11fed7da call 0x11fea2f0 */
  push32(0x11fed7dfu); f_11fea2f0();
  /* 11fed7df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed7e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11fed7e6 call 0x11fed810 */
  push32(0x11fed7ebu); f_11fed810();
  /* 11fed7eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed7ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11fed7f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11fed7f4 push edx */
  push32((uint32_t)(EDX));
  /* 11fed7f5 call 0x11fea360 */
  push32(0x11fed7fau); f_11fea360();
  /* 11fed7fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11fed7fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11fed800:;
  /* 11fed800 mov esp, ebp */
  ESP = (EBP);
  /* 11fed802 pop ebp */
  EBP = (pop32());
  /* 11fed803 ret  */
  ESPCHK(0x11fed7c0u, _esp0);
  ESP += 4; return;
}

